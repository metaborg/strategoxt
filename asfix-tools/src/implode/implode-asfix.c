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
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
Symbol sym_position_2;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_x_44;
ATerm term_d_44;
ATerm term_r_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_q_41;
ATerm term_m_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_l_30;
ATerm term_l_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_g_26;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_a_18;
ATerm term_h_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_12;
ATerm term_z_10;
ATerm term_l_10;
ATerm term_k_10;
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
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_z_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_j_33, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_z_33);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_z_33);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_i_41, term_j_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_z_33);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__3, term_i_41, term_j_41, (ATerm) ATempty);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm l_76 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm e_83 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm d_83 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm c_83 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm b_83 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm a_83 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm h_83 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm w_86 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm alt_2 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm b_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm h_85 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_84 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm j_92 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm sort_1 (ATerm, ATerm a_1 (ATerm));
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm r_70 (ATerm));
ATerm opt_1 (ATerm, ATerm z_0 (ATerm));
ATerm cf_1 (ATerm, ATerm y_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm a_99 (ATerm));
ATerm prod_3 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm g_85 (ATerm));
ATerm remove_x_1 (ATerm, ATerm n_83 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_91 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_102 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_105 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_110 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm));
ATerm crush_2 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_105 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_110 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm lit_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm l_91 (ATerm));
ATerm seq_1 (ATerm, ATerm p_75 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm o_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm iter_1 (ATerm, ATerm l_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm j_91 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm b_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_102 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_91 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_103 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_104 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_104 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_104 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_110 (ATerm), ATerm s_110 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_options_0 (ATerm t)
{
  ATerm x_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
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
      ATerm c_0 (ATerm t)
      {
        t = term_a_9;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_b_9;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      LocalPopChoice(z_8);
    }
  else
    {
      t = x_8;
      {
        ATerm c_9 = t;
        int f_9 = stack_ptr;
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
              t = term_g_9;
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_h_9;
              return(t);
            }
            t = Option_3(t, f_0, h_1, l_1);
            LocalPopChoice(f_9);
          }
        else
          {
            t = c_9;
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
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
                    t = term_k_9;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_l_9;
                    return(t);
                  }
                  t = Option_3(t, m_1, n_1, r_1);
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  {
                    ATerm m_9 = t;
                    int n_9 = stack_ptr;
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
                          t = term_o_9;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_p_9;
                          return(t);
                        }
                        t = Option_3(t, s_1, t_1, u_1);
                        LocalPopChoice(n_9);
                      }
                    else
                      {
                        t = m_9;
                        {
                          ATerm q_9 = t;
                          int r_9 = stack_ptr;
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
                                t = term_s_9;
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_t_9;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, x_1);
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
                                      t = term_w_9;
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_x_9;
                                      return(t);
                                    }
                                    t = Option_3(t, y_1, z_1, a_2);
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
                                            t = term_a_10;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_b_10;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
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
                                                  t = term_e_10;
                                                  return(t);
                                                }
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = term_f_10;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_2, l_2, m_2);
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
                                                      ATerm q_2 (ATerm t)
                                                      {
                                                        ATerm r_4 = NULL;
                                                        r_4 = t;
                                                        d_2 :
                                                        if(!(match_string(r_4, "--seq")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm r_2 (ATerm t)
                                                      {
                                                        t = term_i_10;
                                                        return(t);
                                                      }
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        t = term_j_10;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_2, r_2, s_2);
                                                      LocalPopChoice(h_10);
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      {
                                                        ATerm w_2 (ATerm t)
                                                        {
                                                          ATerm s_4 = NULL;
                                                          s_4 = t;
                                                          h_2 :
                                                          if(!(match_string(s_4, "--pt")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          t = term_k_10;
                                                          return(t);
                                                        }
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          t = term_l_10;
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
ATerm amb_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm e_5 = NULL,f_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym_amb_1))
    {
      f_5 = ATgetArgument(e_5, 0);
      {
        ATerm v_5 = NULL,r_7 = NULL;
        ATerm q_7 = NULL;
        t = SSLgetAnnotations(not_null(e_5));
        {
          q_7 = t;
          if(((v_5 != NULL) && (v_5 != q_7)))
            _fail(q_7);
          else
            v_5 = q_7;
        }
        {
          t = not_null(f_5);
          {
            ATerm d_8 = NULL;
            t = l_76(t);
            {
              r_7 = t;
              {
                ATerm e_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(r_7)), not_null(v_5));
                {
                  e_8 = t;
                  if(((d_8 != NULL) && (d_8 != e_8)))
                    _fail(e_8);
                  else
                    d_8 = e_8;
                }
                t = not_null(d_8);
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  b_13 = t;
  w_8 :
  if(match_cons(b_13, sym_prod_3))
    {
      c_13 = ATgetArgument(b_13, 0);
      n_13 = ATgetArgument(b_13, 1);
      r_13 = ATgetArgument(b_13, 2);
      y_8 :
      if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
        {
          d_13 = ATgetFirst((ATermList) c_13);
          e_13 = (ATerm) ATgetNext((ATermList) c_13);
          d_9 :
          if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
            {
              f_13 = ATgetFirst((ATermList) e_13);
              g_13 = (ATerm) ATgetNext((ATermList) e_13);
              e_9 :
              if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
                {
                  h_13 = ATgetFirst((ATermList) g_13);
                  i_13 = (ATerm) ATgetNext((ATermList) g_13);
                  d_12 :
                  if(((ATgetType(i_13) == AT_LIST) && ATisEmpty(i_13)))
                    {
                      e_12 :
                      if(match_cons(n_13, sym_iter_star_1))
                        {
                          o_13 = ATgetArgument(n_13, 0);
                          {
                          }
                        }
                      else
                        {
                          if(match_cons(n_13, sym_cf_1))
                            {
                              o_13 = ATgetArgument(n_13, 0);
                              q_12 :
                              if(match_cons(o_13, sym_iter_star_1))
                                {
                                  p_13 = ATgetArgument(o_13, 0);
                                  {
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_13, sym_iter_1))
                                    {
                                      p_13 = ATgetArgument(o_13, 0);
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
                              if(match_cons(n_13, sym_iter_sep_2))
                                {
                                  o_13 = ATgetArgument(n_13, 0);
                                  a_13 = ATgetArgument(n_13, 1);
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
                      if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
                        {
                          j_13 = ATgetFirst((ATermList) i_13);
                          k_13 = (ATerm) ATgetNext((ATermList) i_13);
                          r_12 :
                          if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
                            {
                              l_13 = ATgetFirst((ATermList) k_13);
                              m_13 = (ATerm) ATgetNext((ATermList) k_13);
                              s_12 :
                              if(((ATgetType(m_13) == AT_LIST) && ATisEmpty(m_13)))
                                {
                                  w_12 :
                                  if(match_cons(n_13, sym_cf_1))
                                    {
                                      o_13 = ATgetArgument(n_13, 0);
                                      y_12 :
                                      if(match_cons(o_13, sym_iter_sep_2))
                                        {
                                          p_13 = ATgetArgument(o_13, 0);
                                          q_13 = ATgetArgument(o_13, 1);
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
                  if(((ATgetType(g_13) == AT_LIST) && ATisEmpty(g_13)))
                    {
                      z_12 :
                      if(match_cons(n_13, sym_iter_1))
                        {
                          o_13 = ATgetArgument(n_13, 0);
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
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  h_14 = t;
  a_14 :
  if(match_cons(h_14, sym_appl_2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      b_14 :
      if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
        {
          k_14 = ATgetFirst((ATermList) j_14);
          l_14 = (ATerm) ATgetNext((ATermList) j_14);
          c_14 :
          if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
            {
              m_14 = ATgetFirst((ATermList) l_14);
              n_14 = (ATerm) ATgetNext((ATermList) l_14);
              d_14 :
              if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
                {
                  f_14 = ATgetFirst((ATermList) n_14);
                  g_14 = (ATerm) ATgetNext((ATermList) n_14);
                  e_14 :
                  if(((ATgetType(g_14) == AT_LIST) && ATisEmpty(g_14)))
                    {
                      {
                        ATerm s_14 = NULL,u_14 = NULL,w_14 = NULL;
                        ATerm m_10;
                        m_10 = t;
                        {
                          t = not_null(i_14);
                          t = is_conc_0(t);
                        }
                        t = m_10;
                        {
                          ATerm n_10;
                          n_10 = t;
                          {
                            ATerm t_14 = NULL;
                            t = not_null(k_14);
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
                          }
                          t = n_10;
                          {
                            ATerm o_10;
                            o_10 = t;
                            {
                              ATerm v_14 = NULL;
                              t = not_null(m_14);
                              {
                                t = g_1(t);
                                {
                                  v_14 = t;
                                  if(((u_14 != NULL) && (u_14 != v_14)))
                                    _fail(v_14);
                                  else
                                    u_14 = v_14;
                                }
                              }
                            }
                            t = o_10;
                            {
                              ATerm x_14 = NULL;
                              t = not_null(f_14);
                              {
                                t = g_1(t);
                                {
                                  x_14 = t;
                                  if(((w_14 != NULL) && (w_14 != x_14)))
                                    _fail(x_14);
                                  else
                                    w_14 = x_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), (ATerm) ATinsert(CheckATermList(not_null(w_14)), not_null(u_14)));
                                {
                                  ATerm p_10 = t;
                                  int q_10 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = conc_two_lists_0(t);
                                      LocalPopChoice(q_10);
                                    }
                                  else
                                    {
                                      t = p_10;
                                      t = conc_more_lists_0(t);
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
                  if(((ATgetType(n_14) == AT_LIST) && ATisEmpty(n_14)))
                    {
                      {
                        ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
                        ATerm e_15 = NULL;
                        t = not_null(i_14);
                        {
                          t = is_conc_0(t);
                          {
                            t = not_null(k_14);
                            {
                              ATerm f_15 = NULL;
                              t = g_1(t);
                              {
                                e_15 = t;
                                {
                                  if(((b_15 != NULL) && (b_15 != e_15)))
                                    _fail(e_15);
                                  else
                                    b_15 = e_15;
                                  {
                                    t = not_null(m_14);
                                    {
                                      ATerm g_15 = NULL;
                                      t = g_1(t);
                                      {
                                        f_15 = t;
                                        {
                                          if(((c_15 != NULL) && (c_15 != f_15)))
                                            _fail(f_15);
                                          else
                                            c_15 = f_15;
                                          {
                                            ATerm r_10 = t;
                                            int s_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(c_15);
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(c_15));
                                                    {
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = conc_two_lists_0(t);
                                                          LocalPopChoice(w_10);
                                                        }
                                                      else
                                                        {
                                                          t = v_10;
                                                          t = conc_more_lists_0(t);
                                                        }
                                                    }
                                                  }
                                                }
                                                LocalPopChoice(s_10);
                                              }
                                            else
                                              {
                                                t = r_10;
                                                t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(b_15), not_null(c_15));
                                              }
                                            {
                                              g_15 = t;
                                              if(((d_15 != NULL) && (d_15 != g_15)))
                                                _fail(g_15);
                                              else
                                                d_15 = g_15;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = not_null(d_15);
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  y_15 = t;
  r_15 :
  if(match_cons(y_15, sym_prod_3))
    {
      z_15 = ATgetArgument(y_15, 0);
      d_16 = ATgetArgument(y_15, 1);
      g_16 = ATgetArgument(y_15, 2);
      s_15 :
      if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
        {
          a_16 = ATgetFirst((ATermList) z_15);
          c_16 = (ATerm) ATgetNext((ATermList) z_15);
          t_15 :
          if(((ATgetType(c_16) == AT_LIST) && ATisEmpty(c_16)))
            {
              u_15 :
              if(match_cons(d_16, sym_opt_1))
                {
                  e_16 = ATgetArgument(d_16, 0);
                  v_15 :
                  if(((a_16 != NULL) && (a_16 != e_16)))
                    _fail(e_16);
                  else
                    a_16 = e_16;
                }
              else
                {
                  if(match_cons(d_16, sym_cf_1))
                    {
                      e_16 = ATgetArgument(d_16, 0);
                      w_15 :
                      if(match_cons(a_16, sym_cf_1))
                        {
                          b_16 = ATgetArgument(a_16, 0);
                          x_15 :
                          if(match_cons(e_16, sym_opt_1))
                            {
                              f_16 = ATgetArgument(e_16, 0);
                              if(((b_16 != NULL) && (b_16 != f_16)))
                                _fail(f_16);
                              else
                                b_16 = f_16;
                            }
                          else
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
ATerm ReplConsSome_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  q_16 = t;
  n_16 :
  if(match_cons(q_16, sym_appl_2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      o_16 :
      if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
        {
          t_16 = ATgetFirst((ATermList) s_16);
          u_16 = (ATerm) ATgetNext((ATermList) s_16);
          p_16 :
          if(((ATgetType(u_16) == AT_LIST) && ATisEmpty(u_16)))
            {
              {
                ATerm x_16 = NULL;
                ATerm x_10;
                x_10 = t;
                {
                  t = not_null(r_16);
                  t = is_some_0(t);
                }
                t = x_10;
                {
                  ATerm y_16 = NULL;
                  t = not_null(t_16);
                  {
                    t = e_83(t);
                    {
                      y_16 = t;
                      if(((x_16 != NULL) && (x_16 != y_16)))
                        _fail(y_16);
                      else
                        x_16 = y_16;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(x_16));
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  o_17 = t;
  f_17 :
  if(match_cons(o_17, sym_prod_3))
    {
      p_17 = ATgetArgument(o_17, 0);
      t_17 = ATgetArgument(o_17, 1);
      x_17 = ATgetArgument(o_17, 2);
      g_17 :
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          s_17 = (ATerm) ATgetNext((ATermList) p_17);
          h_17 :
          if(((ATgetType(s_17) == AT_LIST) && ATisEmpty(s_17)))
            {
              i_17 :
              if(match_cons(t_17, sym_iter_1))
                {
                  u_17 = ATgetArgument(t_17, 0);
                  j_17 :
                  if(((q_17 != NULL) && (q_17 != u_17)))
                    _fail(u_17);
                  else
                    q_17 = u_17;
                }
              else
                {
                  if(match_cons(t_17, sym_iter_sep_2))
                    {
                      u_17 = ATgetArgument(t_17, 0);
                      n_17 = ATgetArgument(t_17, 1);
                      k_17 :
                      if(((q_17 != NULL) && (q_17 != u_17)))
                        _fail(u_17);
                      else
                        q_17 = u_17;
                    }
                  else
                    {
                      if(match_cons(t_17, sym_cf_1))
                        {
                          u_17 = ATgetArgument(t_17, 0);
                          l_17 :
                          if(match_cons(q_17, sym_cf_1))
                            {
                              r_17 = ATgetArgument(q_17, 0);
                              m_17 :
                              if(match_cons(u_17, sym_iter_1))
                                {
                                  v_17 = ATgetArgument(u_17, 0);
                                  if(((r_17 != NULL) && (r_17 != v_17)))
                                    _fail(v_17);
                                  else
                                    r_17 = v_17;
                                }
                              else
                                {
                                  if(match_cons(u_17, sym_iter_sep_2))
                                    {
                                      v_17 = ATgetArgument(u_17, 0);
                                      w_17 = ATgetArgument(u_17, 1);
                                      if(((r_17 != NULL) && (r_17 != v_17)))
                                        _fail(v_17);
                                      else
                                        r_17 = v_17;
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
ATerm ReplConsIns_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  i_18 :
  if(match_cons(l_18, sym_appl_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      j_18 :
      if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
        {
          o_18 = ATgetFirst((ATermList) n_18);
          p_18 = (ATerm) ATgetNext((ATermList) n_18);
          k_18 :
          if(((ATgetType(p_18) == AT_LIST) && ATisEmpty(p_18)))
            {
              {
                ATerm s_18 = NULL;
                ATerm y_10;
                y_10 = t;
                {
                  t = not_null(m_18);
                  t = is_ins_0(t);
                }
                t = y_10;
                {
                  ATerm t_18 = NULL;
                  t = not_null(o_18);
                  {
                    t = d_83(t);
                    {
                      t_18 = t;
                      if(((s_18 != NULL) && (s_18 != t_18)))
                        _fail(t_18);
                      else
                        s_18 = t_18;
                    }
                  }
                  t = (ATerm) ATinsert(ATempty, not_null(s_18));
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
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  a_19 = t;
  w_18 :
  if(match_cons(a_19, sym_prod_3))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      f_19 = ATgetArgument(a_19, 2);
      x_18 :
      if(((ATgetType(b_19) == AT_LIST) && ATisEmpty(b_19)))
        {
          y_18 :
          if(match_cons(c_19, sym_opt_1))
            {
              d_19 = ATgetArgument(c_19, 0);
              {
              }
            }
          else
            {
              if(match_cons(c_19, sym_cf_1))
                {
                  d_19 = ATgetArgument(c_19, 0);
                  z_18 :
                  if(match_cons(d_19, sym_opt_1))
                    {
                      e_19 = ATgetArgument(d_19, 0);
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
ATerm ReplConsNone_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  h_19 :
  if(match_cons(j_19, sym_appl_2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      i_19 :
      if(((ATgetType(l_19) == AT_LIST) && ATisEmpty(l_19)))
        {
          {
            t = not_null(k_19);
            t = is_none_0(t);
            t = term_z_10;
          }
        }
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  t_19 = t;
  o_19 :
  if(match_cons(t_19, sym_prod_3))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      z_19 = ATgetArgument(t_19, 2);
      p_19 :
      if(((ATgetType(u_19) == AT_LIST) && ATisEmpty(u_19)))
        {
          q_19 :
          if(match_cons(v_19, sym_iter_star_1))
            {
              w_19 = ATgetArgument(v_19, 0);
              {
              }
            }
          else
            {
              if(match_cons(v_19, sym_iter_star_sep_2))
                {
                  w_19 = ATgetArgument(v_19, 0);
                  s_19 = ATgetArgument(v_19, 1);
                  {
                  }
                }
              else
                {
                  if(match_cons(v_19, sym_cf_1))
                    {
                      w_19 = ATgetArgument(v_19, 0);
                      r_19 :
                      if(match_cons(w_19, sym_iter_star_1))
                        {
                          x_19 = ATgetArgument(w_19, 0);
                          {
                          }
                        }
                      else
                        {
                          if(match_cons(w_19, sym_iter_star_sep_2))
                            {
                              x_19 = ATgetArgument(w_19, 0);
                              y_19 = ATgetArgument(w_19, 1);
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
ATerm ReplConsNil_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  b_20 :
  if(match_cons(d_20, sym_appl_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      c_20 :
      if(((ATgetType(f_20) == AT_LIST) && ATisEmpty(f_20)))
        {
          {
            t = not_null(e_20);
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
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym_prod_3))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      p_20 = ATgetArgument(m_20, 2);
      {
        ATerm r_20 = NULL;
        t = not_null(p_20);
        {
          ATerm z_2 (ATerm t)
          {
            ATerm s_20 = NULL,t_20 = NULL;
            s_20 = t;
            k_20 :
            if(match_cons(s_20, sym_cons_1))
              {
                t_20 = ATgetArgument(s_20, 0);
                if(((r_20 != NULL) && (r_20 != t_20)))
                  _fail(t_20);
                else
                  r_20 = t_20;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, z_2);
        }
        t = not_null(r_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplNamedCons_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_appl_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        ATerm g_21 = NULL,i_21 = NULL,k_21 = NULL;
        ATerm a_11;
        a_11 = t;
        {
          ATerm h_21 = NULL;
          t = not_null(c_21);
          {
            t = get_cons_0(t);
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Rename_Keyword_0(t);
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                  }
                }
              {
                h_21 = t;
                if(((g_21 != NULL) && (g_21 != h_21)))
                  _fail(h_21);
                else
                  g_21 = h_21;
              }
            }
          }
        }
        t = a_11;
        {
          ATerm d_11;
          d_11 = t;
          {
            ATerm j_21 = NULL;
            t = not_null(d_21);
            {
              t = map_1(t, a_83);
              {
                j_21 = t;
                if(((i_21 != NULL) && (i_21 != j_21)))
                  _fail(j_21);
                else
                  i_21 = j_21;
              }
            }
          }
          t = d_11;
          {
            t = SSL_mkterm(not_null(g_21), not_null(i_21));
            {
              k_21 = t;
              t = not_null(k_21);
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
ATerm ReplCons_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, h_83);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1(t, h_83);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm i_11 = t;
              int j_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1(t, h_83);
                  LocalPopChoice(j_11);
                }
              else
                {
                  t = i_11;
                  {
                    ATerm k_11 = t;
                    int l_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, h_83);
                        LocalPopChoice(l_11);
                      }
                    else
                      {
                        t = k_11;
                        {
                          ATerm m_11 = t;
                          int n_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, h_83);
                              LocalPopChoice(n_11);
                            }
                          else
                            {
                              t = m_11;
                              t = ReplConsConc_1(t, h_83);
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  p_22 = t;
  u_21 :
  if(match_cons(p_22, sym_appl_2))
    {
      q_22 = ATgetArgument(p_22, 0);
      w_22 = ATgetArgument(p_22, 1);
      v_21 :
      if(match_cons(q_22, sym_prod_3))
        {
          r_22 = ATgetArgument(q_22, 0);
          s_22 = ATgetArgument(q_22, 1);
          v_22 = ATgetArgument(q_22, 2);
          w_21 :
          if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
            {
              k_22 = ATgetFirst((ATermList) r_22);
              m_22 = (ATerm) ATgetNext((ATermList) r_22);
              x_21 :
              if(((ATgetType(m_22) == AT_LIST) && ATisEmpty(m_22)))
                {
                  y_21 :
                  if(match_cons(s_22, sym_opt_1))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      z_21 :
                      if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
                        {
                          n_22 = ATgetFirst((ATermList) w_22);
                          o_22 = (ATerm) ATgetNext((ATermList) w_22);
                          a_22 :
                          if(((ATgetType(o_22) == AT_LIST) && ATisEmpty(o_22)))
                            {
                              b_22 :
                              {
                                ATerm x_22 = NULL;
                                if(((k_22 != NULL) && (k_22 != t_22)))
                                  _fail(t_22);
                                else
                                  k_22 = t_22;
                                {
                                  if(((x_22 != NULL) && (x_22 != n_22)))
                                    _fail(n_22);
                                  else
                                    x_22 = n_22;
                                  {
                                    t = not_null(k_22);
                                    t = is_list_0(t);
                                    t = not_null(x_22);
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
                      if(match_cons(s_22, sym_cf_1))
                        {
                          t_22 = ATgetArgument(s_22, 0);
                          c_22 :
                          if(match_cons(k_22, sym_cf_1))
                            {
                              l_22 = ATgetArgument(k_22, 0);
                              d_22 :
                              if(match_cons(t_22, sym_opt_1))
                                {
                                  u_22 = ATgetArgument(t_22, 0);
                                  e_22 :
                                  if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
                                    {
                                      n_22 = ATgetFirst((ATermList) w_22);
                                      o_22 = (ATerm) ATgetNext((ATermList) w_22);
                                      f_22 :
                                      if(((ATgetType(o_22) == AT_LIST) && ATisEmpty(o_22)))
                                        {
                                          {
                                            ATerm a_23 = NULL;
                                            if(((l_22 != NULL) && (l_22 != u_22)))
                                              _fail(u_22);
                                            else
                                              l_22 = u_22;
                                            {
                                              if(((a_23 != NULL) && (a_23 != n_22)))
                                                _fail(n_22);
                                              else
                                                a_23 = n_22;
                                              {
                                                t = not_null(l_22);
                                                t = is_list_0(t);
                                                t = not_null(a_23);
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
              if(((ATgetType(r_22) == AT_LIST) && ATisEmpty(r_22)))
                {
                  g_22 :
                  if(match_cons(s_22, sym_opt_1))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      h_22 :
                      if(((ATgetType(w_22) == AT_LIST) && ATisEmpty(w_22)))
                        {
                          {
                            t = not_null(t_22);
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
                      if(match_cons(s_22, sym_cf_1))
                        {
                          t_22 = ATgetArgument(s_22, 0);
                          i_22 :
                          if(match_cons(t_22, sym_opt_1))
                            {
                              u_22 = ATgetArgument(t_22, 0);
                              j_22 :
                              if(((ATgetType(w_22) == AT_LIST) && ATisEmpty(w_22)))
                                {
                                  {
                                    t = not_null(u_22);
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
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, c_3);
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, b_3, _id);
        return(t);
      }
      t = appl_2(t, a_3, _id);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
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
    ATerm h_23 (ATerm t)
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          {
            ATerm u_11 = t;
            int v_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm w_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = w_11;
                      }
                    return(t);
                  }
                  t = filter_1(t, f_3);
                  return(t);
                }
                t = appl_2(t, _id, e_3);
                {
                  ATerm x_11 = t;
                  int y_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
                      t = h_23(t);
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
                            t = ReplCons_1(t, h_23);
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
                                  t = Inj_0(t);
                                  t = h_23(t);
                                  LocalPopChoice(c_12);
                                }
                              else
                                {
                                  t = b_12;
                                  {
                                    ATerm f_12 = t;
                                    int g_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = h_23(t);
                                        LocalPopChoice(g_12);
                                      }
                                    else
                                      {
                                        t = f_12;
                                        {
                                          t = FlatAlt_0(t);
                                          t = h_23(t);
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                LocalPopChoice(v_11);
              }
            else
              {
                t = u_11;
                {
                  ATerm h_12 = t;
                  int i_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = list_1(t, h_23);
                        return(t);
                      }
                      t = amb_1(t, g_3);
                      LocalPopChoice(i_12);
                    }
                  else
                    {
                      t = h_12;
                      t = _all(t, h_23);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = h_23(t);
  }
  return(t);
}
ATerm PT_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_parsetree_2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      t = not_null(l_23);
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
  ATerm t_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_RemovePT_0))
    {
      ATerm v_23 = NULL,x_23 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm w_23 = NULL;
        t = SSLgetAnnotations(not_null(t_23));
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
      }
      t = j_12;
      {
        ATerm y_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemovePT_0), not_null(v_23));
        {
          y_23 = t;
          if(((x_23 != NULL) && (x_23 != y_23)))
            _fail(y_23);
          else
            x_23 = y_23;
        }
        t = not_null(x_23);
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
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  m_24 = t;
  i_24 :
  if(match_cons(m_24, sym_appl_2))
    {
      n_24 = ATgetArgument(m_24, 0);
      t_24 = ATgetArgument(m_24, 1);
      j_24 :
      if(match_cons(n_24, sym_prod_3))
        {
          o_24 = ATgetArgument(n_24, 0);
          p_24 = ATgetArgument(n_24, 1);
          s_24 = ATgetArgument(n_24, 2);
          k_24 :
          if(match_cons(p_24, sym_seq_1))
            {
              q_24 = ATgetArgument(p_24, 0);
              {
                ATerm v_24 = NULL,x_24 = NULL;
                ATerm k_12;
                k_12 = t;
                {
                  ATerm w_24 = NULL;
                  t = term_l_12;
                  {
                    w_24 = t;
                    if(((v_24 != NULL) && (v_24 != w_24)))
                      _fail(w_24);
                    else
                      v_24 = w_24;
                  }
                }
                t = k_12;
                {
                  t = SSL_mkterm(not_null(v_24), not_null(t_24));
                  {
                    x_24 = t;
                    t = not_null(x_24);
                  }
                }
              }
            }
          else
            {
              if(match_cons(p_24, sym_cf_1))
                {
                  q_24 = ATgetArgument(p_24, 0);
                  l_24 :
                  if(match_cons(q_24, sym_seq_1))
                    {
                      r_24 = ATgetArgument(q_24, 0);
                      {
                        ATerm a_25 = NULL,c_25 = NULL;
                        ATerm m_12;
                        m_12 = t;
                        {
                          ATerm b_25 = NULL;
                          t = term_l_12;
                          {
                            b_25 = t;
                            if(((a_25 != NULL) && (a_25 != b_25)))
                              _fail(b_25);
                            else
                              a_25 = b_25;
                          }
                        }
                        t = m_12;
                        {
                          t = SSL_mkterm(not_null(a_25), not_null(t_24));
                          {
                            c_25 = t;
                            t = not_null(c_25);
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
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Tuple_0(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, h_3);
  return(t);
}
ATerm RemoveSeq_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_RemoveSeq_0))
    {
      ATerm q_25 = NULL,s_25 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm r_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          r_25 = t;
          if(((q_25 != NULL) && (q_25 != r_25)))
            _fail(r_25);
          else
            q_25 = r_25;
        }
      }
      t = p_12;
      {
        ATerm t_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveSeq_0), not_null(q_25));
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
        t = not_null(s_25);
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
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Ins_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(a_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CTC2_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  n_26 = t;
  h_26 :
  if(match_cons(n_26, sym_Conc_2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      i_26 :
      if(match_cons(o_26, sym_Ins_1))
        {
          m_26 = ATgetArgument(o_26, 0);
          j_26 :
          if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
            {
              l_26 = ATgetFirst((ATermList) p_26);
              k_26 = (ATerm) ATgetNext((ATermList) p_26);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_26)), not_null(l_26)), not_null(m_26));
            }
          else
            {
              if(match_cons(p_26, sym_Ins_1))
                {
                  l_26 = ATgetArgument(p_26, 0);
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_26)), not_null(m_26));
                }
              else
                {
                  if(((ATgetType(p_26) == AT_LIST) && ATisEmpty(p_26)))
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(m_26));
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
      if(match_cons(n_26, sym_Conc_3))
        {
          o_26 = ATgetArgument(n_26, 0);
          p_26 = ATgetArgument(n_26, 1);
          q_26 = ATgetArgument(n_26, 2);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_26)), (ATerm) ATinsert(ATempty, not_null(p_26))), not_null(o_26));
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
ATerm Conc_2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Conc_2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm q_27 = NULL,s_27 = NULL;
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        {
          t = not_null(l_27);
          {
            ATerm u_27 = NULL;
            t = i_70(t);
            {
              s_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm w_27 = NULL;
                  t = j_70(t);
                  {
                    u_27 = t;
                    {
                      ATerm x_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, not_null(s_27), not_null(u_27)), not_null(q_27));
                      {
                        x_27 = t;
                        if(((w_27 != NULL) && (w_27 != x_27)))
                          _fail(x_27);
                        else
                          w_27 = x_27;
                      }
                      t = not_null(w_27);
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
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
    {
      h_28 = ATgetFirst((ATermList) g_28);
      i_28 = (ATerm) ATgetNext((ATermList) g_28);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, not_null(h_28)), not_null(i_28));
    }
  else
    {
      if(match_cons(g_28, sym_Snoc_2))
        {
          h_28 = ATgetArgument(g_28, 0);
          i_28 = ATgetArgument(g_28, 1);
          t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(h_28), (ATerm) ATmakeAppl(sym_Ins_1, not_null(i_28)));
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
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  ATerm p_29 (ATerm t)
  {
    t = not_null(b_29);
    return(t);
  }
  ATerm q_29 (ATerm t)
  {
    t = not_null(e_29);
    return(t);
  }
  ATerm r_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_3, not_null(c_29), not_null(d_29), (ATerm) ATmakeAppl(sym_Conc_3, not_null(y_28), not_null(e_29), not_null(z_28)));
    return(t);
  }
  ATerm s_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(c_29), (ATerm) ATmakeAppl(sym_Conc_2, not_null(d_29), not_null(e_29)));
    return(t);
  }
  a_29 = t;
  t_28 :
  if(match_cons(a_29, sym_Conc_2))
    {
      b_29 = ATgetArgument(a_29, 0);
      e_29 = ATgetArgument(a_29, 1);
      u_28 :
      if(((ATgetType(e_29) == AT_LIST) && ATisEmpty(e_29)))
        {
          v_28 :
          if(((ATgetType(b_29) == AT_LIST) && ATisEmpty(b_29)))
            {
              {
                ATerm t_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_29(t);
                    LocalPopChoice(u_12);
                  }
                else
                  {
                    t = t_12;
                    t = q_29(t);
                  }
              }
            }
          else
            {
              if(match_cons(b_29, sym_Conc_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  {
                    ATerm v_12 = t;
                    int x_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_29(t);
                        LocalPopChoice(x_12);
                      }
                    else
                      {
                        t = v_12;
                        t = s_29(t);
                      }
                  }
                }
              else
                {
                  t = p_29(t);
                }
            }
        }
      else
        {
          w_28 :
          if(((ATgetType(b_29) == AT_LIST) && ATisEmpty(b_29)))
            {
              t = q_29(t);
            }
          else
            {
              if(match_cons(b_29, sym_Conc_2))
                {
                  c_29 = ATgetArgument(b_29, 0);
                  d_29 = ATgetArgument(b_29, 1);
                  t = s_29(t);
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
      if(match_cons(a_29, sym_Conc_3))
        {
          b_29 = ATgetArgument(a_29, 0);
          e_29 = ATgetArgument(a_29, 1);
          z_28 = ATgetArgument(a_29, 2);
          x_28 :
          if(match_cons(b_29, sym_Conc_3))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              y_28 = ATgetArgument(b_29, 2);
              t = r_29(t);
            }
          else
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
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_2(t, i_3, _id);
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC2_0(t);
              t = Cons_2(t, conc_to_cons_0, _id);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = CTC3_0(t);
            }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
          }
        }
    }
  }
  return(t);
}
ATerm Rename_Keyword_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_string(b_30, "sorts"))
    {
      t = term_q_14;
    }
  else
    {
      if(match_string(b_30, "imports"))
        {
          t = term_r_14;
        }
      else
        {
          if(match_string(b_30, "id"))
            {
              t = term_y_14;
            }
          else
            {
              if(match_string(b_30, "hiddens"))
                {
                  t = term_z_14;
                }
              else
                {
                  if(match_string(b_30, "exports"))
                    {
                      t = term_a_15;
                    }
                  else
                    {
                      if(match_string(b_30, "module"))
                        {
                          t = term_h_15;
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
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  z_36 = t;
  f_32 :
  if(match_cons(z_36, sym_prod_3))
    {
      a_37 = ATgetArgument(z_36, 0);
      e_37 = ATgetArgument(z_36, 1);
      n_37 = ATgetArgument(z_36, 2);
      g_32 :
      if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
        {
          b_37 = ATgetFirst((ATermList) a_37);
          d_37 = (ATerm) ATgetNext((ATermList) a_37);
          v_32 :
          if(((ATgetType(d_37) == AT_LIST) && ATisEmpty(d_37)))
            {
              w_32 :
              if(match_cons(e_37, sym_opt_1))
                {
                  k_37 = ATgetArgument(e_37, 0);
                  x_32 :
                  {
                    if(((b_37 != NULL) && (b_37 != k_37)))
                      _fail(k_37);
                    else
                      b_37 = k_37;
                    t = term_i_15;
                  }
                }
              else
                {
                  if(match_cons(e_37, sym_cf_1))
                    {
                      k_37 = ATgetArgument(e_37, 0);
                      y_32 :
                      if(match_cons(b_37, sym_cf_1))
                        {
                          c_37 = ATgetArgument(b_37, 0);
                          y_35 :
                          if(match_cons(k_37, sym_opt_1))
                            {
                              l_37 = ATgetArgument(k_37, 0);
                              {
                                if(((c_37 != NULL) && (c_37 != l_37)))
                                  _fail(l_37);
                                else
                                  c_37 = l_37;
                                t = term_i_15;
                              }
                            }
                          else
                            {
                              if(match_cons(k_37, sym_iter_1))
                                {
                                  l_37 = ATgetArgument(k_37, 0);
                                  {
                                    if(((c_37 != NULL) && (c_37 != l_37)))
                                      _fail(l_37);
                                    else
                                      c_37 = l_37;
                                    t = term_j_15;
                                  }
                                }
                              else
                                {
                                  if(match_cons(k_37, sym_iter_sep_2))
                                    {
                                      l_37 = ATgetArgument(k_37, 0);
                                      m_37 = ATgetArgument(k_37, 1);
                                      {
                                        if(((c_37 != NULL) && (c_37 != l_37)))
                                          _fail(l_37);
                                        else
                                          c_37 = l_37;
                                        t = term_j_15;
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
                      if(match_cons(e_37, sym_iter_1))
                        {
                          k_37 = ATgetArgument(e_37, 0);
                          z_35 :
                          {
                            if(((b_37 != NULL) && (b_37 != k_37)))
                              _fail(k_37);
                            else
                              b_37 = k_37;
                            t = term_j_15;
                          }
                        }
                      else
                        {
                          if(match_cons(e_37, sym_iter_sep_2))
                            {
                              k_37 = ATgetArgument(e_37, 0);
                              y_36 = ATgetArgument(e_37, 1);
                              a_36 :
                              {
                                if(((b_37 != NULL) && (b_37 != k_37)))
                                  _fail(k_37);
                                else
                                  b_37 = k_37;
                                t = term_j_15;
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
              if(((ATgetType(d_37) == AT_LIST) && !(ATisEmpty(d_37))))
                {
                  q_36 = ATgetFirst((ATermList) d_37);
                  r_36 = (ATerm) ATgetNext((ATermList) d_37);
                  b_36 :
                  if(((ATgetType(r_36) == AT_LIST) && ATisEmpty(r_36)))
                    {
                      c_36 :
                      if(match_cons(e_37, sym_iter_1))
                        {
                          k_37 = ATgetArgument(e_37, 0);
                          d_36 :
                          t = term_k_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
                        {
                          s_36 = ATgetFirst((ATermList) r_36);
                          t_36 = (ATerm) ATgetNext((ATermList) r_36);
                          e_36 :
                          if(((ATgetType(t_36) == AT_LIST) && ATisEmpty(t_36)))
                            {
                              f_36 :
                              if(match_cons(e_37, sym_iter_sep_2))
                                {
                                  k_37 = ATgetArgument(e_37, 0);
                                  y_36 = ATgetArgument(e_37, 1);
                                  g_36 :
                                  t = term_k_15;
                                }
                              else
                                {
                                  if(match_cons(e_37, sym_cf_1))
                                    {
                                      k_37 = ATgetArgument(e_37, 0);
                                      h_36 :
                                      if(match_cons(k_37, sym_iter_1))
                                        {
                                          l_37 = ATgetArgument(k_37, 0);
                                          i_36 :
                                          t = term_k_15;
                                        }
                                      else
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
                              if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
                                {
                                  u_36 = ATgetFirst((ATermList) t_36);
                                  v_36 = (ATerm) ATgetNext((ATermList) t_36);
                                  j_36 :
                                  if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
                                    {
                                      w_36 = ATgetFirst((ATermList) v_36);
                                      x_36 = (ATerm) ATgetNext((ATermList) v_36);
                                      k_36 :
                                      if(((ATgetType(x_36) == AT_LIST) && ATisEmpty(x_36)))
                                        {
                                          l_36 :
                                          if(match_cons(e_37, sym_cf_1))
                                            {
                                              k_37 = ATgetArgument(e_37, 0);
                                              m_36 :
                                              if(match_cons(k_37, sym_iter_sep_2))
                                                {
                                                  l_37 = ATgetArgument(k_37, 0);
                                                  m_37 = ATgetArgument(k_37, 1);
                                                  n_36 :
                                                  t = term_k_15;
                                                }
                                              else
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
          if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
            {
              o_36 :
              if(match_cons(e_37, sym_opt_1))
                {
                  k_37 = ATgetArgument(e_37, 0);
                  t = term_l_15;
                }
              else
                {
                  if(match_cons(e_37, sym_cf_1))
                    {
                      k_37 = ATgetArgument(e_37, 0);
                      p_36 :
                      if(match_cons(k_37, sym_opt_1))
                        {
                          l_37 = ATgetArgument(k_37, 0);
                          t = term_l_15;
                        }
                      else
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
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_prod_3))
    {
      q_38 = ATgetArgument(p_38, 0);
      r_38 = ATgetArgument(p_38, 1);
      s_38 = ATgetArgument(p_38, 2);
      {
        ATerm u_38 = NULL;
        t = not_null(s_38);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm v_38 = NULL,w_38 = NULL;
            v_38 = t;
            n_38 :
            if(match_cons(v_38, sym_cons_1))
              {
                w_38 = ATgetArgument(v_38, 0);
                if(((u_38 != NULL) && (u_38 != w_38)))
                  _fail(w_38);
                else
                  u_38 = w_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, j_3);
        }
        t = not_null(u_38);
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
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_appl_2))
    {
      e_39 = ATgetArgument(d_39, 0);
      f_39 = ATgetArgument(d_39, 1);
      {
        ATerm i_39 = NULL,k_39 = NULL;
        ATerm m_15;
        m_15 = t;
        {
          ATerm j_39 = NULL;
          t = not_null(e_39);
          {
            ATerm n_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                t = Constr1_0(t);
              }
            {
              ATerm p_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Rename_Keyword_0(t);
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = p_15;
                  {
                  }
                }
              {
                j_39 = t;
                if(((i_39 != NULL) && (i_39 != j_39)))
                  _fail(j_39);
                else
                  i_39 = j_39;
              }
            }
          }
        }
        t = m_15;
        {
          t = SSL_mkterm(not_null(i_39), not_null(f_39));
          {
            k_39 = t;
            t = not_null(k_39);
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
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  y_39 = t;
  t_39 :
  if(match_cons(y_39, sym_prod_3))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      e_40 = ATgetArgument(y_39, 2);
      u_39 :
      if(((ATgetType(z_39) == AT_LIST) && ATisEmpty(z_39)))
        {
          v_39 :
          if(match_cons(a_40, sym_iter_star_1))
            {
              b_40 = ATgetArgument(a_40, 0);
              t = term_h_16;
            }
          else
            {
              if(match_cons(a_40, sym_iter_star_sep_2))
                {
                  b_40 = ATgetArgument(a_40, 0);
                  x_39 = ATgetArgument(a_40, 1);
                  t = term_h_16;
                }
              else
                {
                  if(match_cons(a_40, sym_cf_1))
                    {
                      b_40 = ATgetArgument(a_40, 0);
                      w_39 :
                      if(match_cons(b_40, sym_iter_star_1))
                        {
                          c_40 = ATgetArgument(b_40, 0);
                          t = term_h_16;
                        }
                      else
                        {
                          if(match_cons(b_40, sym_iter_star_sep_2))
                            {
                              c_40 = ATgetArgument(b_40, 0);
                              d_40 = ATgetArgument(b_40, 1);
                              t = term_h_16;
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
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_appl_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm r_40 = NULL;
        ATerm s_40 = NULL;
        t = not_null(n_40);
        {
          t = ConstrNil_0(t);
          {
            s_40 = t;
            if(((r_40 != NULL) && (r_40 != s_40)))
              _fail(s_40);
            else
              r_40 = s_40;
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
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = CnsGeneric_0(t);
    }
  return(t);
}
ATerm replace_appl_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = appl_2(t, _id, _id);
        {
          ATerm m_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CnsNil_0(t);
              LocalPopChoice(v_16);
            }
          else
            {
              t = m_16;
              t = CnsGeneric_0(t);
            }
        }
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, k_3);
  t = conc_to_cons_0(t);
  return(t);
}
ATerm ReplaceAppl_0 (ATerm t)
{
  ATerm z_40 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym_ReplaceAppl_0))
    {
      ATerm b_41 = NULL,d_41 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm c_41 = NULL;
        t = SSLgetAnnotations(not_null(z_40));
        {
          c_41 = t;
          if(((b_41 != NULL) && (b_41 != c_41)))
            _fail(c_41);
          else
            b_41 = c_41;
        }
      }
      t = w_16;
      {
        ATerm e_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(b_41));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        t = not_null(d_41);
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
  ATerm l_3 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FlatAlt_0(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, l_3);
  return(t);
}
ATerm FlatAlt_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,r_42 = NULL;
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm q_3 (ATerm t)
              {
                ATerm y_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm f_42 = NULL;
                      f_42 = t;
                      if(((b_42 != NULL) && (b_42 != f_42)))
                        _fail(f_42);
                      else
                        b_42 = f_42;
                      return(t);
                    }
                    t = cf_1(t, r_3);
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    {
                      ATerm g_42 = NULL;
                      g_42 = t;
                      if(((b_42 != NULL) && (b_42 != g_42)))
                        _fail(g_42);
                      else
                        b_42 = g_42;
                    }
                  }
                return(t);
              }
              t = Cons_2(t, q_3, Nil_0);
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
                h_42 = t;
                l_41 :
                if(match_cons(h_42, sym_alt_2))
                  {
                    i_42 = ATgetArgument(h_42, 0);
                    j_42 = ATgetArgument(h_42, 1);
                    {
                      if(((c_42 != NULL) && (c_42 != i_42)))
                        _fail(i_42);
                      else
                        c_42 = i_42;
                      if(((d_42 != NULL) && (d_42 != j_42)))
                        _fail(j_42);
                      else
                        d_42 = j_42;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = cf_1(t, s_3);
              return(t);
            }
            t = prod_3(t, o_3, p_3, _id);
            return(t);
          }
          ATerm n_3 (ATerm t)
          {
            ATerm k_42 = NULL;
            k_42 = t;
            if(((e_42 != NULL) && (e_42 != k_42)))
              _fail(k_42);
            else
              e_42 = k_42;
            return(t);
          }
          t = appl_2(t, m_3, n_3);
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          {
            ATerm t_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm l_42 = NULL;
                  l_42 = t;
                  if(((b_42 != NULL) && (b_42 != l_42)))
                    _fail(l_42);
                  else
                    b_42 = l_42;
                  return(t);
                }
                t = Cons_2(t, x_3, Nil_0);
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm m_42 = NULL,n_42 = NULL,p_42 = NULL;
                  m_42 = t;
                  p_41 :
                  if(match_cons(m_42, sym_alt_2))
                    {
                      n_42 = ATgetArgument(m_42, 0);
                      p_42 = ATgetArgument(m_42, 1);
                      {
                        if(((c_42 != NULL) && (c_42 != n_42)))
                          _fail(n_42);
                        else
                          c_42 = n_42;
                        if(((d_42 != NULL) && (d_42 != p_42)))
                          _fail(p_42);
                        else
                          d_42 = p_42;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = lex_1(t, y_3);
                return(t);
              }
              t = prod_3(t, v_3, w_3, _id);
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              ATerm q_42 = NULL;
              q_42 = t;
              if(((e_42 != NULL) && (e_42 != q_42)))
                _fail(q_42);
              else
                e_42 = q_42;
              return(t);
            }
            t = appl_2(t, t_3, u_3);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(c_42), not_null(d_42)), term_a_18);
        {
          ATerm x_43 (ATerm t)
          {
            ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
            ATerm y_43 (ATerm t)
            {
              ATerm x_42 = NULL;
              if(((b_42 != NULL) && (b_42 != t_42)))
                _fail(t_42);
              else
                b_42 = t_42;
              {
                if(((x_42 != NULL) && (x_42 != w_42)))
                  _fail(w_42);
                else
                  x_42 = w_42;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(x_42), not_null(e_42));
              }
              return(t);
            }
            ATerm z_43 (ATerm t)
            {
              ATerm a_43 = NULL;
              if(((b_42 != NULL) && (b_42 != u_42)))
                _fail(u_42);
              else
                b_42 = u_42;
              {
                if(((r_42 != NULL) && (r_42 != v_42)))
                  _fail(v_42);
                else
                  r_42 = v_42;
                {
                  if(((a_43 != NULL) && (a_43 != w_42)))
                    _fail(w_42);
                  else
                    a_43 = w_42;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(a_43), not_null(e_42));
                }
              }
              return(t);
            }
            ATerm a_44 (ATerm t)
            {
              ATerm g_43 = NULL;
              ATerm h_43 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_42), term_a_18);
              {
                t = add_0(t);
                {
                  h_43 = t;
                  if(((g_43 != NULL) && (g_43 != h_43)))
                    _fail(h_43);
                  else
                    g_43 = h_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(g_43));
                t = x_43(t);
              }
              return(t);
            }
            s_42 = t;
            v_41 :
            if(match_cons(s_42, sym__2))
              {
                t_42 = ATgetArgument(s_42, 0);
                w_42 = ATgetArgument(s_42, 1);
                w_41 :
                if(match_cons(t_42, sym_alt_2))
                  {
                    u_42 = ATgetArgument(t_42, 0);
                    v_42 = ATgetArgument(t_42, 1);
                    {
                      ATerm b_18 = t;
                      int c_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_43(t);
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
                                t = z_43(t);
                                LocalPopChoice(e_18);
                              }
                            else
                              {
                                t = d_18;
                                t = a_44(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = y_43(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = x_43(t);
        }
      }
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm i_43 = NULL;
        i_43 = t;
        a_42 :
        if(match_cons(i_43, sym_FlatAlt_0))
          {
            ATerm m_43 = NULL,o_43 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm n_43 = NULL;
              t = SSLgetAnnotations(not_null(i_43));
              {
                n_43 = t;
                if(((m_43 != NULL) && (m_43 != n_43)))
                  _fail(n_43);
                else
                  m_43 = n_43;
              }
            }
            t = f_18;
            {
              ATerm p_43 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(m_43));
              {
                p_43 = t;
                if(((o_43 != NULL) && (o_43 != p_43)))
                  _fail(p_43);
                else
                  o_43 = p_43;
              }
              t = not_null(o_43);
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
  ATerm m_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_bracket_0))
    {
      ATerm g_18 = t;
      int h_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_44 = NULL,q_44 = NULL;
          ATerm q_18;
          q_18 = t;
          {
            ATerm p_44 = NULL;
            t = SSLgetAnnotations(not_null(m_44));
            {
              p_44 = t;
              if(((o_44 != NULL) && (o_44 != p_44)))
                _fail(p_44);
              else
                o_44 = p_44;
            }
          }
          t = q_18;
          {
            ATerm r_44 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(o_44));
            {
              r_44 = t;
              if(((q_44 != NULL) && (q_44 != r_44)))
                _fail(r_44);
              else
                q_44 = r_44;
            }
            t = not_null(q_44);
          }
          LocalPopChoice(h_18);
        }
      else
        {
          t = g_18;
          {
            ATerm t_44 = NULL,v_44 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              ATerm u_44 = NULL;
              t = SSLgetAnnotations(not_null(m_44));
              {
                u_44 = t;
                if(((t_44 != NULL) && (t_44 != u_44)))
                  _fail(u_44);
                else
                  t_44 = u_44;
              }
            }
            t = r_18;
            {
              ATerm w_44 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(t_44));
              {
                w_44 = t;
                if(((v_44 != NULL) && (v_44 != w_44)))
                  _fail(w_44);
                else
                  v_44 = w_44;
              }
              t = not_null(v_44);
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
ATerm oncetd_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm d_45 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_86(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = _one(t, d_45);
      }
    return(t);
  }
  t = d_45(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm f_1 (ATerm))
{
  ATerm n_45 = NULL,o_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym_cons_1))
    {
      o_45 = ATgetArgument(n_45, 0);
      {
        ATerm g_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_45 = NULL,t_45 = NULL;
            ATerm s_45 = NULL;
            t = SSLgetAnnotations(not_null(n_45));
            {
              s_45 = t;
              if(((r_45 != NULL) && (r_45 != s_45)))
                _fail(s_45);
              else
                r_45 = s_45;
            }
            {
              t = not_null(o_45);
              {
                ATerm v_45 = NULL;
                t = f_1(t);
                {
                  t_45 = t;
                  {
                    ATerm w_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(t_45)), not_null(r_45));
                    {
                      w_45 = t;
                      if(((v_45 != NULL) && (v_45 != w_45)))
                        _fail(w_45);
                      else
                        v_45 = w_45;
                    }
                    t = not_null(v_45);
                  }
                }
              }
            }
            LocalPopChoice(m_19);
          }
        else
          {
            t = g_19;
            {
              ATerm z_45 = NULL,b_46 = NULL;
              ATerm a_46 = NULL;
              t = SSLgetAnnotations(not_null(n_45));
              {
                a_46 = t;
                if(((z_45 != NULL) && (z_45 != a_46)))
                  _fail(a_46);
                else
                  z_45 = a_46;
              }
              {
                t = not_null(o_45);
                {
                  ATerm d_46 = NULL;
                  t = f_1(t);
                  {
                    b_46 = t;
                    {
                      ATerm e_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(b_46)), not_null(z_45));
                      {
                        e_46 = t;
                        if(((d_46 != NULL) && (d_46 != e_46)))
                          _fail(e_46);
                        else
                          d_46 = e_46;
                      }
                      t = not_null(d_46);
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
  ATerm w_46 = NULL,x_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym_lex_1))
    {
      x_46 = ATgetArgument(w_46, 0);
      {
        ATerm n_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_47 = NULL,c_47 = NULL;
            ATerm b_47 = NULL;
            t = SSLgetAnnotations(not_null(w_46));
            {
              b_47 = t;
              if(((a_47 != NULL) && (a_47 != b_47)))
                _fail(b_47);
              else
                a_47 = b_47;
            }
            {
              t = not_null(x_46);
              {
                ATerm e_47 = NULL;
                t = e_1(t);
                {
                  c_47 = t;
                  {
                    ATerm f_47 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(c_47)), not_null(a_47));
                    {
                      f_47 = t;
                      if(((e_47 != NULL) && (e_47 != f_47)))
                        _fail(f_47);
                      else
                        e_47 = f_47;
                    }
                    t = not_null(e_47);
                  }
                }
              }
            }
            LocalPopChoice(a_20);
          }
        else
          {
            t = n_19;
            {
              ATerm i_47 = NULL,k_47 = NULL;
              ATerm j_47 = NULL;
              t = SSLgetAnnotations(not_null(w_46));
              {
                j_47 = t;
                if(((i_47 != NULL) && (i_47 != j_47)))
                  _fail(j_47);
                else
                  i_47 = j_47;
              }
              {
                t = not_null(x_46);
                {
                  ATerm m_47 = NULL;
                  t = e_1(t);
                  {
                    k_47 = t;
                    {
                      ATerm n_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(k_47)), not_null(i_47));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alt_2 (ATerm t, ATerm c_1 (ATerm), ATerm d_1 (ATerm))
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym_alt_2))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_48 = NULL,p_48 = NULL;
            ATerm o_48 = NULL;
            t = SSLgetAnnotations(not_null(h_48));
            {
              o_48 = t;
              if(((n_48 != NULL) && (n_48 != o_48)))
                _fail(o_48);
              else
                n_48 = o_48;
            }
            {
              t = not_null(i_48);
              {
                ATerm r_48 = NULL;
                t = c_1(t);
                {
                  p_48 = t;
                  {
                    t = not_null(j_48);
                    {
                      ATerm t_48 = NULL;
                      t = d_1(t);
                      {
                        r_48 = t;
                        {
                          ATerm u_48 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(p_48), not_null(r_48)), not_null(n_48));
                          {
                            u_48 = t;
                            if(((t_48 != NULL) && (t_48 != u_48)))
                              _fail(u_48);
                            else
                              t_48 = u_48;
                          }
                          t = not_null(t_48);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm y_48 = NULL,a_49 = NULL;
              ATerm z_48 = NULL;
              t = SSLgetAnnotations(not_null(h_48));
              {
                z_48 = t;
                if(((y_48 != NULL) && (y_48 != z_48)))
                  _fail(z_48);
                else
                  y_48 = z_48;
              }
              {
                t = not_null(i_48);
                {
                  ATerm c_49 = NULL;
                  t = c_1(t);
                  {
                    a_49 = t;
                    {
                      t = not_null(j_48);
                      {
                        ATerm e_49 = NULL;
                        t = d_1(t);
                        {
                          c_49 = t;
                          {
                            ATerm f_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(a_49), not_null(c_49)), not_null(y_48));
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
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm q_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(u_20);
          }
        else
          {
            t = q_20;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm b_1 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_varsym_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_50 = NULL,j_50 = NULL;
            ATerm i_50 = NULL;
            t = SSLgetAnnotations(not_null(d_50));
            {
              i_50 = t;
              if(((h_50 != NULL) && (h_50 != i_50)))
                _fail(i_50);
              else
                h_50 = i_50;
            }
            {
              t = not_null(e_50);
              {
                ATerm l_50 = NULL;
                t = b_1(t);
                {
                  j_50 = t;
                  {
                    ATerm m_50 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(j_50)), not_null(h_50));
                    {
                      m_50 = t;
                      if(((l_50 != NULL) && (l_50 != m_50)))
                        _fail(m_50);
                      else
                        l_50 = m_50;
                    }
                    t = not_null(l_50);
                  }
                }
              }
            }
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm p_50 = NULL,r_50 = NULL;
              ATerm q_50 = NULL;
              t = SSLgetAnnotations(not_null(d_50));
              {
                q_50 = t;
                if(((p_50 != NULL) && (p_50 != q_50)))
                  _fail(q_50);
                else
                  p_50 = q_50;
              }
              {
                t = not_null(e_50);
                {
                  ATerm t_50 = NULL;
                  t = b_1(t);
                  {
                    r_50 = t;
                    {
                      ATerm u_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(r_50)), not_null(p_50));
                      {
                        u_50 = t;
                        if(((t_50 != NULL) && (t_50 != u_50)))
                          _fail(u_50);
                        else
                          t_50 = u_50;
                      }
                      t = not_null(t_50);
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
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = varsym_1(t, _id);
          return(t);
        }
        t = Cons_2(t, b_4, Nil_0);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm z_20 = t;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              t = cons_1(t, _id);
              return(t);
            }
            t = oncetd_1(t, c_4);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_20;
          }
        return(t);
      }
      t = prod_3(t, z_3, _id, a_4);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              ATerm f_4 (ATerm t)
              {
                ATerm l_21 = t;
                int m_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(m_21);
                  }
                else
                  {
                    t = l_21;
                    {
                      ATerm g_4 (ATerm t)
                      {
                        t = sort_1(t, _id);
                        return(t);
                      }
                      t = cf_1(t, g_4);
                    }
                  }
                return(t);
              }
              t = Cons_2(t, f_4, Nil_0);
              return(t);
            }
            ATerm e_4 (ATerm t)
            {
              ATerm n_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    t = cons_1(t, _id);
                    return(t);
                  }
                  t = oncetd_1(t, h_4);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_21;
                }
              return(t);
            }
            t = prod_3(t, d_4, injective_alt_0, e_4);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm l_4 (ATerm t)
                    {
                      ATerm q_21 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = q_21;
                        }
                      return(t);
                    }
                    t = Cons_2(t, l_4, Nil_0);
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    ATerm r_21 = t;
                    int s_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
                        LocalPopChoice(s_21);
                      }
                    else
                      {
                        t = r_21;
                        {
                          ATerm t_21 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1(t, j_4);
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = t_21;
                              {
                                ATerm z_22 = t;
                                int b_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1(t, j_4);
                                    LocalPopChoice(b_23);
                                  }
                                else
                                  {
                                    t = z_22;
                                    {
                                      ATerm c_23 = t;
                                      int d_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1(t, j_4);
                                          LocalPopChoice(d_23);
                                        }
                                      else
                                        {
                                          t = c_23;
                                          {
                                            ATerm e_23 = t;
                                            int f_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1(t, j_4);
                                                LocalPopChoice(f_23);
                                              }
                                            else
                                              {
                                                t = e_23;
                                                {
                                                  ATerm g_23 = t;
                                                  int i_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_4 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, j_4, m_4);
                                                      LocalPopChoice(i_23);
                                                    }
                                                  else
                                                    {
                                                      t = g_23;
                                                      {
                                                        ATerm n_4 (ATerm t)
                                                        {
                                                          t = lit_1(t, _id);
                                                          return(t);
                                                        }
                                                        t = iter_star_sep_2(t, j_4, n_4);
                                                      }
                                                    }
                                                }
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
                  ATerm k_4 (ATerm t)
                  {
                    ATerm n_23 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm o_4 (ATerm t)
                        {
                          t = cons_1(t, _id);
                          return(t);
                        }
                        t = oncetd_1(t, o_4);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = n_23;
                      }
                    return(t);
                  }
                  t = prod_3(t, i_4, j_4, k_4);
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
                        b_52 = t;
                        f_51 :
                        if(match_cons(b_52, sym_prod_3))
                          {
                            c_52 = ATgetArgument(b_52, 0);
                            h_52 = ATgetArgument(b_52, 1);
                            k_52 = ATgetArgument(b_52, 2);
                            g_51 :
                            if(((ATgetType(c_52) == AT_LIST) && !(ATisEmpty(c_52))))
                              {
                                d_52 = ATgetFirst((ATermList) c_52);
                                g_52 = (ATerm) ATgetNext((ATermList) c_52);
                                h_51 :
                                if(match_cons(d_52, sym_cf_1))
                                  {
                                    e_52 = ATgetArgument(d_52, 0);
                                    i_51 :
                                    if(match_cons(e_52, sym_iter_sep_2))
                                      {
                                        f_52 = ATgetArgument(e_52, 0);
                                        z_51 = ATgetArgument(e_52, 1);
                                        j_51 :
                                        if(((ATgetType(g_52) == AT_LIST) && ATisEmpty(g_52)))
                                          {
                                            k_51 :
                                            if(match_cons(h_52, sym_cf_1))
                                              {
                                                i_52 = ATgetArgument(h_52, 0);
                                                l_51 :
                                                if(match_cons(i_52, sym_iter_star_sep_2))
                                                  {
                                                    j_52 = ATgetArgument(i_52, 0);
                                                    a_52 = ATgetArgument(i_52, 1);
                                                    m_51 :
                                                    if(match_cons(k_52, sym_no_attrs_0))
                                                      {
                                                        if(((f_52 != NULL) && (f_52 != j_52)))
                                                          _fail(j_52);
                                                        else
                                                          f_52 = j_52;
                                                        if(((z_51 != NULL) && (z_51 != a_52)))
                                                          _fail(a_52);
                                                        else
                                                          z_51 = a_52;
                                                      }
                                                    else
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
                                        if(match_cons(e_52, sym_iter_1))
                                          {
                                            f_52 = ATgetArgument(e_52, 0);
                                            n_51 :
                                            if(((ATgetType(g_52) == AT_LIST) && ATisEmpty(g_52)))
                                              {
                                                o_51 :
                                                if(match_cons(h_52, sym_cf_1))
                                                  {
                                                    i_52 = ATgetArgument(h_52, 0);
                                                    p_51 :
                                                    if(match_cons(i_52, sym_iter_star_1))
                                                      {
                                                        j_52 = ATgetArgument(i_52, 0);
                                                        q_51 :
                                                        if(match_cons(k_52, sym_no_attrs_0))
                                                          {
                                                            if(((f_52 != NULL) && (f_52 != j_52)))
                                                              _fail(j_52);
                                                            else
                                                              f_52 = j_52;
                                                          }
                                                        else
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
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        {
                          ATerm q_23 = t;
                          int r_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  ATerm u_23 = t;
                                  int z_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm o_52 = NULL;
                                      o_52 = t;
                                      r_51 :
                                      if(!(match_string(o_52, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(z_23);
                                    }
                                  else
                                    {
                                      t = u_23;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, q_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, p_4);
                              LocalPopChoice(r_23);
                            }
                          else
                            {
                              t = q_23;
                              {
                                ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
                                p_52 = t;
                                t_51 :
                                if(match_cons(p_52, sym_prod_3))
                                  {
                                    q_52 = ATgetArgument(p_52, 0);
                                    r_52 = ATgetArgument(p_52, 1);
                                    t_52 = ATgetArgument(p_52, 2);
                                    u_51 :
                                    if(match_cons(r_52, sym_sort_1))
                                      {
                                        s_52 = ATgetArgument(r_52, 0);
                                        v_51 :
                                        if(match_string(s_52, "<START>"))
                                          {
                                            w_51 :
                                            if(!(match_cons(t_52, sym_no_attrs_0)))
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  e_53 = t;
  a_53 :
  if(match_cons(e_53, sym_appl_2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      b_53 :
      if(((ATgetType(g_53) == AT_LIST) && !(ATisEmpty(g_53))))
        {
          h_53 = ATgetFirst((ATermList) g_53);
          i_53 = (ATerm) ATgetNext((ATermList) g_53);
          c_53 :
          if(((ATgetType(i_53) == AT_LIST) && ATisEmpty(i_53)))
            {
              {
                t = not_null(f_53);
                t = injection_0(t);
                t = not_null(h_53);
              }
            }
          else
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
ATerm bottomup_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = bottomup_1(t, h_85);
    return(t);
  }
  t = _all(t, t_4);
  t = h_85(t);
  return(t);
}
ATerm flat_injections_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Inj_0(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, u_4);
  return(t);
}
ATerm FlatInj_0 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_cons(q_53, sym_FlatInj_0))
    {
      ATerm s_53 = NULL,u_53 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm t_53 = NULL;
        t = SSLgetAnnotations(not_null(q_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
      }
      t = c_24;
      {
        ATerm v_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(s_53));
        {
          v_53 = t;
          if(((u_53 != NULL) && (u_53 != v_53)))
            _fail(v_53);
          else
            u_53 = v_53;
        }
        t = not_null(u_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_lit_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        {
          ATerm w_4 (ATerm t)
          {
            ATerm f_24 = t;
            if((PushChoice() == 0))
              {
                t = lit_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_24;
              }
            return(t);
          }
          t = filter_1(t, w_4);
        }
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, v_4);
  return(t);
}
ATerm RemoveLit_0 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_RemoveLit_0))
    {
      ATerm f_54 = NULL,h_54 = NULL;
      ATerm g_24;
      g_24 = t;
      {
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(d_54));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
      }
      t = g_24;
      {
        ATerm i_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(f_54));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm h_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FlatList_0(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = h_24;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, x_4);
  return(t);
}
ATerm FlatList_0 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,c_58 = NULL,d_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,s_58 = NULL;
  ATerm h_62 (ATerm t)
  {
    ATerm v_58 = NULL;
    ATerm h_60 = NULL;
    ATerm q_62 (ATerm t)
    {
      ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
      w_58 = t;
      k_55 :
      if(match_cons(w_58, sym_appl_2))
        {
          x_58 = ATgetArgument(w_58, 0);
          e_59 = ATgetArgument(w_58, 1);
          l_55 :
          if(match_cons(x_58, sym_prod_3))
            {
              y_58 = ATgetArgument(x_58, 0);
              z_58 = ATgetArgument(x_58, 1);
              d_59 = ATgetArgument(x_58, 2);
              m_55 :
              if(match_cons(z_58, sym_cf_1))
                {
                  a_59 = ATgetArgument(z_58, 0);
                  n_55 :
                  if(match_cons(a_59, sym_iter_sep_2))
                    {
                      b_59 = ATgetArgument(a_59, 0);
                      c_59 = ATgetArgument(a_59, 1);
                      o_55 :
                      if(((ATgetType(e_59) == AT_LIST) && !(ATisEmpty(e_59))))
                        {
                          f_59 = ATgetFirst((ATermList) e_59);
                          g_59 = (ATerm) ATgetNext((ATermList) e_59);
                          p_55 :
                          if(((ATgetType(g_59) == AT_LIST) && ATisEmpty(g_59)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(f_59));
                            }
                          else
                            {
                              if(((ATgetType(g_59) == AT_LIST) && !(ATisEmpty(g_59))))
                                {
                                  h_59 = ATgetFirst((ATermList) g_59);
                                  i_59 = (ATerm) ATgetNext((ATermList) g_59);
                                  q_55 :
                                  if(((ATgetType(i_59) == AT_LIST) && !(ATisEmpty(i_59))))
                                    {
                                      j_59 = ATgetFirst((ATermList) i_59);
                                      k_59 = (ATerm) ATgetNext((ATermList) i_59);
                                      r_55 :
                                      if(((ATgetType(k_59) == AT_LIST) && ATisEmpty(k_59)))
                                        {
                                          {
                                            ATerm u_59 = NULL,w_59 = NULL;
                                            ATerm y_24;
                                            y_24 = t;
                                            {
                                              ATerm v_59 = NULL;
                                              t = not_null(f_59);
                                              {
                                                t = q_62(t);
                                                {
                                                  v_59 = t;
                                                  if(((u_59 != NULL) && (u_59 != v_59)))
                                                    _fail(v_59);
                                                  else
                                                    u_59 = v_59;
                                                }
                                              }
                                            }
                                            t = y_24;
                                            {
                                              ATerm x_59 = NULL;
                                              t = not_null(j_59);
                                              {
                                                t = q_62(t);
                                                {
                                                  x_59 = t;
                                                  if(((w_59 != NULL) && (w_59 != x_59)))
                                                    _fail(x_59);
                                                  else
                                                    w_59 = x_59;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_59)), (ATerm) ATinsert(ATempty, not_null(h_59))), not_null(u_59));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
                                            {
                                              m_59 = ATgetFirst((ATermList) k_59);
                                              n_59 = (ATerm) ATgetNext((ATermList) k_59);
                                              s_55 :
                                              if(((ATgetType(n_59) == AT_LIST) && !(ATisEmpty(n_59))))
                                                {
                                                  o_59 = ATgetFirst((ATermList) n_59);
                                                  p_59 = (ATerm) ATgetNext((ATermList) n_59);
                                                  t_55 :
                                                  if(((ATgetType(p_59) == AT_LIST) && ATisEmpty(p_59)))
                                                    {
                                                      {
                                                        ATerm d_60 = NULL,f_60 = NULL;
                                                        ATerm z_24;
                                                        z_24 = t;
                                                        {
                                                          ATerm e_60 = NULL;
                                                          t = not_null(f_59);
                                                          {
                                                            t = q_62(t);
                                                            {
                                                              e_60 = t;
                                                              if(((d_60 != NULL) && (d_60 != e_60)))
                                                                _fail(e_60);
                                                              else
                                                                d_60 = e_60;
                                                            }
                                                          }
                                                        }
                                                        t = z_24;
                                                        {
                                                          ATerm g_60 = NULL;
                                                          t = not_null(o_59);
                                                          {
                                                            t = q_62(t);
                                                            {
                                                              g_60 = t;
                                                              if(((f_60 != NULL) && (f_60 != g_60)))
                                                                _fail(g_60);
                                                              else
                                                                f_60 = g_60;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_60)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_59)), not_null(j_59)), not_null(h_59))), not_null(d_60));
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
    t = q_62(t);
    {
      h_60 = t;
      if(((v_58 != NULL) && (v_58 != h_60)))
        _fail(h_60);
      else
        v_58 = h_60;
    }
    t = not_null(v_58);
    return(t);
  }
  ATerm i_62 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(l_58));
    return(t);
  }
  ATerm j_62 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm k_62 (ATerm t)
  {
    t = not_null(l_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm l_62 (ATerm t)
  {
    ATerm p_60 = NULL;
    ATerm s_61 = NULL;
    ATerm z_62 (ATerm t)
    {
      ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
      q_60 = t;
      c_56 :
      if(match_cons(q_60, sym_appl_2))
        {
          r_60 = ATgetArgument(q_60, 0);
          x_60 = ATgetArgument(q_60, 1);
          d_56 :
          if(match_cons(r_60, sym_prod_3))
            {
              s_60 = ATgetArgument(r_60, 0);
              t_60 = ATgetArgument(r_60, 1);
              w_60 = ATgetArgument(r_60, 2);
              e_56 :
              if(match_cons(t_60, sym_cf_1))
                {
                  u_60 = ATgetArgument(t_60, 0);
                  f_56 :
                  if(match_cons(u_60, sym_iter_1))
                    {
                      v_60 = ATgetArgument(u_60, 0);
                      g_56 :
                      if(((ATgetType(x_60) == AT_LIST) && !(ATisEmpty(x_60))))
                        {
                          y_60 = ATgetFirst((ATermList) x_60);
                          z_60 = (ATerm) ATgetNext((ATermList) x_60);
                          h_56 :
                          if(((ATgetType(z_60) == AT_LIST) && ATisEmpty(z_60)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(y_60));
                            }
                          else
                            {
                              if(((ATgetType(z_60) == AT_LIST) && !(ATisEmpty(z_60))))
                                {
                                  a_61 = ATgetFirst((ATermList) z_60);
                                  b_61 = (ATerm) ATgetNext((ATermList) z_60);
                                  i_56 :
                                  if(((ATgetType(b_61) == AT_LIST) && ATisEmpty(b_61)))
                                    {
                                      {
                                        ATerm h_61 = NULL,j_61 = NULL;
                                        ATerm d_25;
                                        d_25 = t;
                                        {
                                          ATerm i_61 = NULL;
                                          t = not_null(y_60);
                                          {
                                            t = z_62(t);
                                            {
                                              i_61 = t;
                                              if(((h_61 != NULL) && (h_61 != i_61)))
                                                _fail(i_61);
                                              else
                                                h_61 = i_61;
                                            }
                                          }
                                        }
                                        t = d_25;
                                        {
                                          ATerm k_61 = NULL;
                                          t = not_null(a_61);
                                          {
                                            t = z_62(t);
                                            {
                                              k_61 = t;
                                              if(((j_61 != NULL) && (j_61 != k_61)))
                                                _fail(k_61);
                                              else
                                                j_61 = k_61;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_61)), not_null(h_61));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
                                        {
                                          c_61 = ATgetFirst((ATermList) b_61);
                                          d_61 = (ATerm) ATgetNext((ATermList) b_61);
                                          j_56 :
                                          if(((ATgetType(d_61) == AT_LIST) && ATisEmpty(d_61)))
                                            {
                                              {
                                                ATerm o_61 = NULL,q_61 = NULL;
                                                ATerm e_25;
                                                e_25 = t;
                                                {
                                                  ATerm p_61 = NULL;
                                                  t = not_null(y_60);
                                                  {
                                                    t = z_62(t);
                                                    {
                                                      p_61 = t;
                                                      if(((o_61 != NULL) && (o_61 != p_61)))
                                                        _fail(p_61);
                                                      else
                                                        o_61 = p_61;
                                                    }
                                                  }
                                                }
                                                t = e_25;
                                                {
                                                  ATerm r_61 = NULL;
                                                  t = not_null(c_61);
                                                  {
                                                    t = z_62(t);
                                                    {
                                                      r_61 = t;
                                                      if(((q_61 != NULL) && (q_61 != r_61)))
                                                        _fail(r_61);
                                                      else
                                                        q_61 = r_61;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_61)), (ATerm) ATinsert(ATempty, not_null(a_61))), not_null(o_61));
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
    t = z_62(t);
    {
      s_61 = t;
      if(((p_60 != NULL) && (p_60 != s_61)))
        _fail(s_61);
      else
        p_60 = s_61;
    }
    t = not_null(p_60);
    return(t);
  }
  ATerm m_62 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(l_58));
    return(t);
  }
  ATerm n_62 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm o_62 (ATerm t)
  {
    t = not_null(l_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm p_62 (ATerm t)
  {
    ATerm d_62 = NULL,f_62 = NULL;
    ATerm f_25;
    f_25 = t;
    {
      ATerm e_62 = NULL;
      t = SSLgetAnnotations(not_null(s_58));
      {
        e_62 = t;
        if(((d_62 != NULL) && (d_62 != e_62)))
          _fail(e_62);
        else
          d_62 = e_62;
      }
    }
    t = f_25;
    {
      ATerm g_62 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(d_62));
      {
        g_62 = t;
        if(((f_62 != NULL) && (f_62 != g_62)))
          _fail(g_62);
        else
          f_62 = g_62;
      }
      t = not_null(f_62);
    }
    return(t);
  }
  s_58 = t;
  n_56 :
  if(match_cons(s_58, sym_appl_2))
    {
      u_57 = ATgetArgument(s_58, 0);
      k_58 = ATgetArgument(s_58, 1);
      o_56 :
      if(match_cons(u_57, sym_prod_3))
        {
          v_57 = ATgetArgument(u_57, 0);
          g_58 = ATgetArgument(u_57, 1);
          j_58 = ATgetArgument(u_57, 2);
          p_56 :
          if(match_cons(g_58, sym_cf_1))
            {
              h_58 = ATgetArgument(g_58, 0);
              q_56 :
              if(match_cons(h_58, sym_iter_sep_2))
                {
                  i_58 = ATgetArgument(h_58, 0);
                  t_57 = ATgetArgument(h_58, 1);
                  r_56 :
                  if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
                    {
                      l_58 = ATgetFirst((ATermList) k_58);
                      m_58 = (ATerm) ATgetNext((ATermList) k_58);
                      s_56 :
                      if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                        {
                          t_56 :
                          {
                            ATerm g_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_62(t);
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = g_25;
                                t = i_62(t);
                              }
                          }
                        }
                      else
                        {
                          u_56 :
                          t = h_62(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(h_58, sym_iter_star_sep_2))
                    {
                      i_58 = ATgetArgument(h_58, 0);
                      t_57 = ATgetArgument(h_58, 1);
                      v_56 :
                      if(((ATgetType(v_57) == AT_LIST) && ATisEmpty(v_57)))
                        {
                          w_56 :
                          if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
                            {
                              t = j_62(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                            {
                              w_57 = ATgetFirst((ATermList) v_57);
                              d_58 = (ATerm) ATgetNext((ATermList) v_57);
                              x_56 :
                              if(match_cons(w_57, sym_cf_1))
                                {
                                  x_57 = ATgetArgument(w_57, 0);
                                  y_56 :
                                  if(match_cons(x_57, sym_iter_sep_2))
                                    {
                                      c_58 = ATgetArgument(x_57, 0);
                                      s_57 = ATgetArgument(x_57, 1);
                                      z_56 :
                                      if(((ATgetType(d_58) == AT_LIST) && ATisEmpty(d_58)))
                                        {
                                          a_57 :
                                          if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
                                            {
                                              l_58 = ATgetFirst((ATermList) k_58);
                                              m_58 = (ATerm) ATgetNext((ATermList) k_58);
                                              b_57 :
                                              if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                                {
                                                  t = k_62(t);
                                                }
                                              else
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
                      if(match_cons(h_58, sym_iter_1))
                        {
                          i_58 = ATgetArgument(h_58, 0);
                          c_57 :
                          if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
                            {
                              l_58 = ATgetFirst((ATermList) k_58);
                              m_58 = (ATerm) ATgetNext((ATermList) k_58);
                              d_57 :
                              if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                {
                                  e_57 :
                                  {
                                    ATerm i_25 = t;
                                    int j_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = l_62(t);
                                        LocalPopChoice(j_25);
                                      }
                                    else
                                      {
                                        t = i_25;
                                        t = m_62(t);
                                      }
                                  }
                                }
                              else
                                {
                                  f_57 :
                                  t = l_62(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(h_58, sym_iter_star_1))
                            {
                              i_58 = ATgetArgument(h_58, 0);
                              g_57 :
                              if(((ATgetType(v_57) == AT_LIST) && ATisEmpty(v_57)))
                                {
                                  h_57 :
                                  if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
                                    {
                                      t = n_62(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                                    {
                                      w_57 = ATgetFirst((ATermList) v_57);
                                      d_58 = (ATerm) ATgetNext((ATermList) v_57);
                                      i_57 :
                                      if(match_cons(w_57, sym_cf_1))
                                        {
                                          x_57 = ATgetArgument(w_57, 0);
                                          j_57 :
                                          if(match_cons(x_57, sym_iter_1))
                                            {
                                              c_58 = ATgetArgument(x_57, 0);
                                              k_57 :
                                              if(((ATgetType(d_58) == AT_LIST) && ATisEmpty(d_58)))
                                                {
                                                  q_57 :
                                                  if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
                                                    {
                                                      l_58 = ATgetFirst((ATermList) k_58);
                                                      m_58 = (ATerm) ATgetNext((ATermList) k_58);
                                                      r_57 :
                                                      if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                                        {
                                                          t = o_62(t);
                                                        }
                                                      else
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
      if(match_cons(s_58, sym_FlatList_0))
        {
          t = p_62(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm k_63 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_84(t);
        t = k_63(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = h_84(t);
      }
    return(t);
  }
  t = k_63(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_84 (ATerm))
{
  t = repeat_2(t, j_84, _id);
  return(t);
}
ATerm appl_to_sort_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = repeat_2(t, ApplToSort_0, _id);
    return(t);
  }
  t = topdown_1(t, y_4);
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  m_63 :
  if(((ATgetType(n_63) == AT_LIST) && ATisEmpty(n_63)))
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
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  r_63 :
  if(((ATgetType(s_63) == AT_LIST) && !(ATisEmpty(s_63))))
    {
      t_63 = ATgetFirst((ATermList) s_63);
      u_63 = (ATerm) ATgetNext((ATermList) s_63);
      {
        ATerm x_63 = NULL;
        ATerm y_63 = NULL;
        t = not_null(u_63);
        {
          t = De_Escape_0(t);
          {
            y_63 = t;
            if(((x_63 != NULL) && (x_63 != y_63)))
              _fail(y_63);
            else
              x_63 = y_63;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(x_63)), not_null(t_63));
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
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  h_64 = t;
  d_64 :
  if(((ATgetType(h_64) == AT_LIST) && !(ATisEmpty(h_64))))
    {
      i_64 = ATgetFirst((ATermList) h_64);
      j_64 = (ATerm) ATgetNext((ATermList) h_64);
      e_64 :
      if(match_int(i_64, 92))
        {
          f_64 :
          if(((ATgetType(j_64) == AT_LIST) && !(ATisEmpty(j_64))))
            {
              k_64 = ATgetFirst((ATermList) j_64);
              l_64 = (ATerm) ATgetNext((ATermList) j_64);
              g_64 :
              if(match_int(k_64, 92))
                {
                  ATerm n_64 = NULL;
                  ATerm o_64 = NULL;
                  t = not_null(l_64);
                  {
                    t = De_Escape_0(t);
                    {
                      o_64 = t;
                      if(((n_64 != NULL) && (n_64 != o_64)))
                        _fail(o_64);
                      else
                        n_64 = o_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_64)), term_m_25);
                }
              else
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
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,h_65 = NULL,i_65 = NULL;
  x_64 = t;
  t_64 :
  if(((ATgetType(x_64) == AT_LIST) && !(ATisEmpty(x_64))))
    {
      y_64 = ATgetFirst((ATermList) x_64);
      z_64 = (ATerm) ATgetNext((ATermList) x_64);
      u_64 :
      if(match_int(y_64, 92))
        {
          v_64 :
          if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
            {
              h_65 = ATgetFirst((ATermList) z_64);
              i_65 = (ATerm) ATgetNext((ATermList) z_64);
              w_64 :
              if(match_int(h_65, 34))
                {
                  ATerm k_65 = NULL;
                  ATerm l_65 = NULL;
                  t = not_null(i_65);
                  {
                    t = De_Escape_0(t);
                    {
                      l_65 = t;
                      if(((k_65 != NULL) && (k_65 != l_65)))
                        _fail(l_65);
                      else
                        k_65 = l_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_65)), term_p_25);
                }
              else
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
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            {
              ATerm b_26 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(c_26);
                }
              else
                {
                  t = b_26;
                  {
                    ATerm q_65 = NULL;
                    q_65 = t;
                    p_65 :
                    if(((ATgetType(q_65) == AT_LIST) && ATisEmpty(q_65)))
                      {
                        t = (ATerm) ATempty;
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
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = De_Escape_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm s_65 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = j_92(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = Cons_2(t, _id, s_65);
      }
    return(t);
  }
  t = s_65(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  u_65 :
  if(((ATgetType(v_65) == AT_LIST) && !(ATisEmpty(v_65))))
    {
      w_65 = ATgetFirst((ATermList) v_65);
      x_65 = (ATerm) ATgetNext((ATermList) v_65);
      t = not_null(x_65);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(((ATgetType(c_66) == AT_LIST) && !(ATisEmpty(c_66))))
    {
      d_66 = ATgetFirst((ATermList) c_66);
      e_66 = (ATerm) ATgetNext((ATermList) c_66);
      t = not_null(d_66);
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
    ATerm f_26;
    f_26 = t;
    {
      ATerm m_66 = NULL;
      t = Hd_0(t);
      {
        m_66 = t;
        h_66 :
        if(!(match_int(m_66, 34)))
          {
            _fail(t);
          }
      }
    }
    t = f_26;
    {
      t = Tl_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
          n_66 = t;
          j_66 :
          if(((ATgetType(n_66) == AT_LIST) && !(ATisEmpty(n_66))))
            {
              o_66 = ATgetFirst((ATermList) n_66);
              p_66 = (ATerm) ATgetNext((ATermList) n_66);
              k_66 :
              if(match_int(o_66, 34))
                {
                  l_66 :
                  if(((ATgetType(p_66) == AT_LIST) && ATisEmpty(p_66)))
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
        t = at_last_1(t, z_4);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm PpSym_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  o_69 = t;
  k_69 :
  if(match_cons(o_69, sym_cf_1))
    {
      m_69 = ATgetArgument(o_69, 0);
      {
        ATerm q_69 = NULL;
        ATerm r_69 = NULL;
        t = not_null(m_69);
        {
          t = PpSym_0(t);
          {
            r_69 = t;
            if(((q_69 != NULL) && (q_69 != r_69)))
              _fail(r_69);
            else
              q_69 = r_69;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_26)), not_null(q_69)), (ATerm) ATinsert(ATempty, term_g_26));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(o_69, sym_lex_1))
        {
          m_69 = ATgetArgument(o_69, 0);
          {
            ATerm t_69 = NULL;
            ATerm u_69 = NULL;
            t = not_null(m_69);
            {
              t = PpSym_0(t);
              {
                u_69 = t;
                if(((t_69 != NULL) && (t_69 != u_69)))
                  _fail(u_69);
                else
                  t_69 = u_69;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_26)), not_null(t_69)), (ATerm) ATinsert(ATempty, term_g_26));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(o_69, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_t_26);
            }
          else
            {
              if(match_cons(o_69, sym_seq_2))
                {
                  m_69 = ATgetArgument(o_69, 0);
                  n_69 = ATgetArgument(o_69, 1);
                  {
                    ATerm x_69 = NULL;
                    ATerm y_69 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(n_69)), not_null(m_69));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        y_69 = t;
                        if(((x_69 != NULL) && (x_69 != y_69)))
                          _fail(y_69);
                        else
                          x_69 = y_69;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_26)), not_null(x_69)), (ATerm) ATinsert(ATempty, term_u_26));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(o_69, sym_opt_1))
                    {
                      m_69 = ATgetArgument(o_69, 0);
                      {
                        t = not_null(m_69);
                        {
                          t = PpSym_0(t);
                          {
                            ATerm a_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_w_26);
                              return(t);
                            }
                            t = at_end_1(t, a_5);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_69, sym_iter_1))
                        {
                          m_69 = ATgetArgument(o_69, 0);
                          {
                            t = not_null(m_69);
                            {
                              t = PpSym_0(t);
                              {
                                ATerm b_5 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_x_26);
                                  return(t);
                                }
                                t = at_end_1(t, b_5);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(o_69, sym_iter_star_1))
                            {
                              m_69 = ATgetArgument(o_69, 0);
                              {
                                t = not_null(m_69);
                                {
                                  t = PpSym_0(t);
                                  {
                                    ATerm c_5 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_y_26);
                                      return(t);
                                    }
                                    t = at_end_1(t, c_5);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(o_69, sym_iter_sep_2))
                                {
                                  m_69 = ATgetArgument(o_69, 0);
                                  n_69 = ATgetArgument(o_69, 1);
                                  {
                                    ATerm e_70 = NULL,k_70 = NULL;
                                    ATerm z_26;
                                    z_26 = t;
                                    {
                                      ATerm h_70 = NULL;
                                      t = not_null(m_69);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          h_70 = t;
                                          if(((e_70 != NULL) && (e_70 != h_70)))
                                            _fail(h_70);
                                          else
                                            e_70 = h_70;
                                        }
                                      }
                                    }
                                    t = z_26;
                                    {
                                      ATerm l_70 = NULL;
                                      t = not_null(n_69);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          l_70 = t;
                                          if(((k_70 != NULL) && (k_70 != l_70)))
                                            _fail(l_70);
                                          else
                                            k_70 = l_70;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_27)), not_null(k_70)), not_null(e_70)), (ATerm) ATinsert(ATempty, term_a_27));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_69, sym_iter_star_sep_2))
                                    {
                                      m_69 = ATgetArgument(o_69, 0);
                                      n_69 = ATgetArgument(o_69, 1);
                                      {
                                        ATerm o_70 = NULL,q_70 = NULL;
                                        ATerm c_27;
                                        c_27 = t;
                                        {
                                          ATerm p_70 = NULL;
                                          t = not_null(m_69);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              p_70 = t;
                                              if(((o_70 != NULL) && (o_70 != p_70)))
                                                _fail(p_70);
                                              else
                                                o_70 = p_70;
                                            }
                                          }
                                        }
                                        t = c_27;
                                        {
                                          ATerm s_70 = NULL;
                                          t = not_null(n_69);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              s_70 = t;
                                              if(((q_70 != NULL) && (q_70 != s_70)))
                                                _fail(s_70);
                                              else
                                                q_70 = s_70;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_27)), not_null(q_70)), not_null(o_70)), (ATerm) ATinsert(ATempty, term_a_27));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(o_69, sym_iter_n_2))
                                        {
                                          m_69 = ATgetArgument(o_69, 0);
                                          n_69 = ATgetArgument(o_69, 1);
                                          {
                                            ATerm u_70 = NULL;
                                            ATerm v_70 = NULL;
                                            t = not_null(m_69);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                v_70 = t;
                                                if(((u_70 != NULL) && (u_70 != v_70)))
                                                  _fail(v_70);
                                                else
                                                  u_70 = v_70;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_27)), not_null(u_70));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_69, sym_iter_sep_n_3))
                                            {
                                              m_69 = ATgetArgument(o_69, 0);
                                              n_69 = ATgetArgument(o_69, 1);
                                              l_69 = ATgetArgument(o_69, 2);
                                              {
                                                ATerm y_70 = NULL,a_71 = NULL;
                                                ATerm f_27;
                                                f_27 = t;
                                                {
                                                  ATerm z_70 = NULL;
                                                  t = not_null(m_69);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      z_70 = t;
                                                      if(((y_70 != NULL) && (y_70 != z_70)))
                                                        _fail(z_70);
                                                      else
                                                        y_70 = z_70;
                                                    }
                                                  }
                                                }
                                                t = f_27;
                                                {
                                                  ATerm b_71 = NULL;
                                                  t = not_null(n_69);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      b_71 = t;
                                                      if(((a_71 != NULL) && (a_71 != b_71)))
                                                        _fail(b_71);
                                                      else
                                                        a_71 = b_71;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_27)), not_null(a_71)), not_null(y_70));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(o_69, sym_set_1))
                                                {
                                                  m_69 = ATgetArgument(o_69, 0);
                                                  {
                                                    ATerm d_71 = NULL;
                                                    ATerm e_71 = NULL;
                                                    t = not_null(m_69);
                                                    {
                                                      t = PpSym_0(t);
                                                      {
                                                        e_71 = t;
                                                        if(((d_71 != NULL) && (d_71 != e_71)))
                                                          _fail(e_71);
                                                        else
                                                          d_71 = e_71;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_71)), (ATerm) ATinsert(ATempty, term_g_27));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(o_69, sym_pair_2))
                                                    {
                                                      m_69 = ATgetArgument(o_69, 0);
                                                      n_69 = ATgetArgument(o_69, 1);
                                                      {
                                                        ATerm h_71 = NULL,j_71 = NULL;
                                                        ATerm h_27;
                                                        h_27 = t;
                                                        {
                                                          ATerm i_71 = NULL;
                                                          t = not_null(m_69);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              i_71 = t;
                                                              if(((h_71 != NULL) && (h_71 != i_71)))
                                                                _fail(i_71);
                                                              else
                                                                h_71 = i_71;
                                                            }
                                                          }
                                                        }
                                                        t = h_27;
                                                        {
                                                          ATerm k_71 = NULL;
                                                          t = not_null(n_69);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              k_71 = t;
                                                              if(((j_71 != NULL) && (j_71 != k_71)))
                                                                _fail(k_71);
                                                              else
                                                                j_71 = k_71;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_71)), (ATerm) ATinsert(ATempty, term_i_27)), not_null(h_71));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(o_69, sym_func_2))
                                                        {
                                                          m_69 = ATgetArgument(o_69, 0);
                                                          n_69 = ATgetArgument(o_69, 1);
                                                          {
                                                            ATerm n_71 = NULL,p_71 = NULL;
                                                            ATerm n_27;
                                                            n_27 = t;
                                                            {
                                                              ATerm o_71 = NULL;
                                                              t = not_null(m_69);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    o_71 = t;
                                                                    if(((n_71 != NULL) && (n_71 != o_71)))
                                                                      _fail(o_71);
                                                                    else
                                                                      n_71 = o_71;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = n_27;
                                                            {
                                                              ATerm q_71 = NULL;
                                                              t = not_null(n_69);
                                                              {
                                                                t = PpSym_0(t);
                                                                {
                                                                  q_71 = t;
                                                                  if(((p_71 != NULL) && (p_71 != q_71)))
                                                                    _fail(q_71);
                                                                  else
                                                                    p_71 = q_71;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_71)), (ATerm) ATinsert(ATempty, term_o_27)), not_null(n_71));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(o_69, sym_alt_2))
                                                            {
                                                              m_69 = ATgetArgument(o_69, 0);
                                                              n_69 = ATgetArgument(o_69, 1);
                                                              {
                                                                ATerm t_71 = NULL,v_71 = NULL;
                                                                ATerm p_27;
                                                                p_27 = t;
                                                                {
                                                                  ATerm u_71 = NULL;
                                                                  t = not_null(m_69);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      u_71 = t;
                                                                      if(((t_71 != NULL) && (t_71 != u_71)))
                                                                        _fail(u_71);
                                                                      else
                                                                        t_71 = u_71;
                                                                    }
                                                                  }
                                                                }
                                                                t = p_27;
                                                                {
                                                                  ATerm w_71 = NULL;
                                                                  t = not_null(n_69);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      w_71 = t;
                                                                      if(((v_71 != NULL) && (v_71 != w_71)))
                                                                        _fail(w_71);
                                                                      else
                                                                        v_71 = w_71;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_71)), (ATerm) ATinsert(ATempty, term_t_27)), not_null(t_71));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(o_69, sym_perm_1))
                                                                {
                                                                  m_69 = ATgetArgument(o_69, 0);
                                                                  {
                                                                    ATerm y_71 = NULL;
                                                                    ATerm z_71 = NULL;
                                                                    t = not_null(m_69);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          z_71 = t;
                                                                          if(((y_71 != NULL) && (y_71 != z_71)))
                                                                            _fail(z_71);
                                                                          else
                                                                            y_71 = z_71;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(y_71)), term_v_27);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(o_69, sym_sort_1))
                                                                    {
                                                                      m_69 = ATgetArgument(o_69, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(m_69));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(o_69, sym_lit_1))
                                                                        {
                                                                          m_69 = ATgetArgument(o_69, 0);
                                                                          {
                                                                            ATerm c_72 = NULL;
                                                                            ATerm d_72 = NULL;
                                                                            t = not_null(m_69);
                                                                            {
                                                                              ATerm y_27 = t;
                                                                              int z_27 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = de_quote_0(t);
                                                                                  t = de_escape_0(t);
                                                                                  LocalPopChoice(z_27);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_27;
                                                                                  {
                                                                                  }
                                                                                }
                                                                              {
                                                                                d_72 = t;
                                                                                if(((c_72 != NULL) && (c_72 != d_72)))
                                                                                  _fail(d_72);
                                                                                else
                                                                                  c_72 = d_72;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(c_72));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(o_69, sym_label_2))
                                                                            {
                                                                              m_69 = ATgetArgument(o_69, 0);
                                                                              n_69 = ATgetArgument(o_69, 1);
                                                                              {
                                                                                ATerm f_72 = NULL;
                                                                                ATerm g_72 = NULL;
                                                                                t = not_null(m_69);
                                                                                {
                                                                                  ATerm a_28 = t;
                                                                                  int b_28 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = de_quote_0(t);
                                                                                      t = de_escape_0(t);
                                                                                      LocalPopChoice(b_28);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_28;
                                                                                      {
                                                                                      }
                                                                                    }
                                                                                  {
                                                                                    g_72 = t;
                                                                                    if(((f_72 != NULL) && (f_72 != g_72)))
                                                                                      _fail(g_72);
                                                                                    else
                                                                                      f_72 = g_72;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(f_72));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(o_69, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_c_28);
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
ATerm sort_1 (ATerm t, ATerm a_1 (ATerm))
{
  ATerm f_74 = NULL,g_74 = NULL;
  f_74 = t;
  e_74 :
  if(match_cons(f_74, sym_sort_1))
    {
      g_74 = ATgetArgument(f_74, 0);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_74 = NULL,l_74 = NULL;
            ATerm k_74 = NULL;
            t = SSLgetAnnotations(not_null(f_74));
            {
              k_74 = t;
              if(((j_74 != NULL) && (j_74 != k_74)))
                _fail(k_74);
              else
                j_74 = k_74;
            }
            {
              t = not_null(g_74);
              {
                ATerm n_74 = NULL;
                t = a_1(t);
                {
                  l_74 = t;
                  {
                    ATerm o_74 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(l_74)), not_null(j_74));
                    {
                      o_74 = t;
                      if(((n_74 != NULL) && (n_74 != o_74)))
                        _fail(o_74);
                      else
                        n_74 = o_74;
                    }
                    t = not_null(n_74);
                  }
                }
              }
            }
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm r_74 = NULL,t_74 = NULL;
              ATerm s_74 = NULL;
              t = SSLgetAnnotations(not_null(f_74));
              {
                s_74 = t;
                if(((r_74 != NULL) && (r_74 != s_74)))
                  _fail(s_74);
                else
                  r_74 = s_74;
              }
              {
                t = not_null(g_74);
                {
                  ATerm v_74 = NULL;
                  t = a_1(t);
                  {
                    t_74 = t;
                    {
                      ATerm w_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(t_74)), not_null(r_74));
                      {
                        w_74 = t;
                        if(((v_74 != NULL) && (v_74 != w_74)))
                          _fail(w_74);
                        else
                          v_74 = w_74;
                      }
                      t = not_null(v_74);
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
ATerm ApplToSort_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  ATerm u_77 (ATerm t)
  {
    ATerm u_76 = NULL,b_77 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm v_76 = NULL,w_76 = NULL;
      t = not_null(h_76);
      {
        v_76 = t;
        o_75 :
        if(match_cons(v_76, sym_cf_1))
          {
            w_76 = ATgetArgument(v_76, 0);
            {
              ATerm y_76 = NULL,a_77 = NULL;
              t = not_null(w_76);
              {
                ATerm k_28 = t;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_28;
                  }
                {
                  ATerm z_76 = NULL;
                  t = PpSym_0(t);
                  {
                    z_76 = t;
                    if(((y_76 != NULL) && (y_76 != z_76)))
                      _fail(z_76);
                    else
                      y_76 = z_76;
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_28)), not_null(y_76)), (ATerm) ATinsert(ATempty, term_l_28));
                    {
                      t = concat_0(t);
                      {
                        t = concat_strings_0(t);
                        {
                          a_77 = t;
                          if(((u_76 != NULL) && (u_76 != a_77)))
                            _fail(a_77);
                          else
                            u_76 = a_77;
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
    t = j_28;
    {
      t = SSL_mkterm(not_null(u_76), not_null(n_76));
      {
        b_77 = t;
        t = not_null(b_77);
      }
    }
    return(t);
  }
  ATerm v_77 (ATerm t)
  {
    ATerm g_77 = NULL,l_77 = NULL;
    ATerm m_28;
    m_28 = t;
    {
      ATerm h_77 = NULL,i_77 = NULL;
      t = not_null(h_76);
      {
        h_77 = t;
        t_75 :
        if(match_cons(h_77, sym_cf_1))
          {
            i_77 = ATgetArgument(h_77, 0);
            {
              ATerm k_77 = NULL;
              t = not_null(i_77);
              {
                t = sort_1(t, _id);
                {
                  t = PpSym_0(t);
                  {
                    t = concat_strings_0(t);
                    {
                      k_77 = t;
                      if(((g_77 != NULL) && (g_77 != k_77)))
                        _fail(k_77);
                      else
                        g_77 = k_77;
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
    t = m_28;
    {
      t = SSL_mkterm(not_null(g_77), not_null(n_76));
      {
        l_77 = t;
        t = not_null(l_77);
      }
    }
    return(t);
  }
  ATerm w_77 (ATerm t)
  {
    t = not_null(o_76);
    return(t);
  }
  ATerm x_77 (ATerm t)
  {
    ATerm q_77 = NULL,s_77 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm r_77 = NULL;
      t = SSLgetAnnotations(not_null(q_76));
      {
        r_77 = t;
        if(((q_77 != NULL) && (q_77 != r_77)))
          _fail(r_77);
        else
          q_77 = r_77;
      }
    }
    t = n_28;
    {
      ATerm t_77 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(q_77));
      {
        t_77 = t;
        if(((s_77 != NULL) && (s_77 != t_77)))
          _fail(t_77);
        else
          s_77 = t_77;
      }
      t = not_null(s_77);
    }
    return(t);
  }
  q_76 = t;
  x_75 :
  if(match_cons(q_76, sym_appl_2))
    {
      f_76 = ATgetArgument(q_76, 0);
      n_76 = ATgetArgument(q_76, 1);
      y_75 :
      if(match_cons(f_76, sym_prod_3))
        {
          g_76 = ATgetArgument(f_76, 0);
          h_76 = ATgetArgument(f_76, 1);
          m_76 = ATgetArgument(f_76, 2);
          z_75 :
          if(((ATgetType(n_76) == AT_LIST) && !(ATisEmpty(n_76))))
            {
              o_76 = ATgetFirst((ATermList) n_76);
              p_76 = (ATerm) ATgetNext((ATermList) n_76);
              a_76 :
              if(((ATgetType(p_76) == AT_LIST) && ATisEmpty(p_76)))
                {
                  b_76 :
                  if(match_cons(h_76, sym_sort_1))
                    {
                      i_76 = ATgetArgument(h_76, 0);
                      c_76 :
                      if(match_string(i_76, "<START>"))
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_77(t);
                              LocalPopChoice(p_28);
                            }
                          else
                            {
                              t = o_28;
                              {
                                ATerm q_28 = t;
                                int r_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = v_77(t);
                                    LocalPopChoice(r_28);
                                  }
                                else
                                  {
                                    t = q_28;
                                    t = w_77(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          ATerm s_28 = t;
                          int f_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_77(t);
                              LocalPopChoice(f_29);
                            }
                          else
                            {
                              t = s_28;
                              t = v_77(t);
                            }
                        }
                    }
                  else
                    {
                      ATerm g_29 = t;
                      int h_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_77(t);
                          LocalPopChoice(h_29);
                        }
                      else
                        {
                          t = g_29;
                          t = v_77(t);
                        }
                    }
                }
              else
                {
                  d_76 :
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_77(t);
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        t = v_77(t);
                      }
                  }
                }
            }
          else
            {
              e_76 :
              {
                ATerm k_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_77(t);
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = k_29;
                    t = v_77(t);
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
      if(match_cons(q_76, sym_ApplToSort_0))
        {
          t = x_77(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm m_78 = NULL,n_78 = NULL;
  m_78 = t;
  l_78 :
  if(match_cons(m_78, sym_layout_1))
    {
      n_78 = ATgetArgument(m_78, 0);
      {
        ATerm q_78 = NULL,s_78 = NULL;
        ATerm r_78 = NULL;
        t = SSLgetAnnotations(not_null(m_78));
        {
          r_78 = t;
          if(((q_78 != NULL) && (q_78 != r_78)))
            _fail(r_78);
          else
            q_78 = r_78;
        }
        {
          t = not_null(n_78);
          {
            ATerm u_78 = NULL;
            t = r_70(t);
            {
              s_78 = t;
              {
                ATerm v_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(s_78)), not_null(q_78));
                {
                  v_78 = t;
                  if(((u_78 != NULL) && (u_78 != v_78)))
                    _fail(v_78);
                  else
                    u_78 = v_78;
                }
                t = not_null(u_78);
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
ATerm opt_1 (ATerm t, ATerm z_0 (ATerm))
{
  ATerm j_79 = NULL,k_79 = NULL;
  j_79 = t;
  i_79 :
  if(match_cons(j_79, sym_opt_1))
    {
      k_79 = ATgetArgument(j_79, 0);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_79 = NULL,p_79 = NULL;
            ATerm o_79 = NULL;
            t = SSLgetAnnotations(not_null(j_79));
            {
              o_79 = t;
              if(((n_79 != NULL) && (n_79 != o_79)))
                _fail(o_79);
              else
                n_79 = o_79;
            }
            {
              t = not_null(k_79);
              {
                ATerm r_79 = NULL;
                t = z_0(t);
                {
                  p_79 = t;
                  {
                    ATerm s_79 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(p_79)), not_null(n_79));
                    {
                      s_79 = t;
                      if(((r_79 != NULL) && (r_79 != s_79)))
                        _fail(s_79);
                      else
                        r_79 = s_79;
                    }
                    t = not_null(r_79);
                  }
                }
              }
            }
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm v_79 = NULL,x_79 = NULL;
              ATerm w_79 = NULL;
              t = SSLgetAnnotations(not_null(j_79));
              {
                w_79 = t;
                if(((v_79 != NULL) && (v_79 != w_79)))
                  _fail(w_79);
                else
                  v_79 = w_79;
              }
              {
                t = not_null(k_79);
                {
                  ATerm z_79 = NULL;
                  t = z_0(t);
                  {
                    x_79 = t;
                    {
                      ATerm a_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(x_79)), not_null(v_79));
                      {
                        a_80 = t;
                        if(((z_79 != NULL) && (z_79 != a_80)))
                          _fail(a_80);
                        else
                          z_79 = a_80;
                      }
                      t = not_null(z_79);
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
ATerm cf_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm s_80 = NULL,t_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym_cf_1))
    {
      t_80 = ATgetArgument(s_80, 0);
      {
        ATerm o_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_80 = NULL,y_80 = NULL;
            ATerm x_80 = NULL;
            t = SSLgetAnnotations(not_null(s_80));
            {
              x_80 = t;
              if(((w_80 != NULL) && (w_80 != x_80)))
                _fail(x_80);
              else
                w_80 = x_80;
            }
            {
              t = not_null(t_80);
              {
                ATerm a_81 = NULL;
                t = y_0(t);
                {
                  y_80 = t;
                  {
                    ATerm b_81 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(y_80)), not_null(w_80));
                    {
                      b_81 = t;
                      if(((a_81 != NULL) && (a_81 != b_81)))
                        _fail(b_81);
                      else
                        a_81 = b_81;
                    }
                    t = not_null(a_81);
                  }
                }
              }
            }
            LocalPopChoice(t_29);
          }
        else
          {
            t = o_29;
            {
              ATerm e_81 = NULL,g_81 = NULL;
              ATerm f_81 = NULL;
              t = SSLgetAnnotations(not_null(s_80));
              {
                f_81 = t;
                if(((e_81 != NULL) && (e_81 != f_81)))
                  _fail(f_81);
                else
                  e_81 = f_81;
              }
              {
                t = not_null(t_80);
                {
                  ATerm i_81 = NULL;
                  t = y_0(t);
                  {
                    g_81 = t;
                    {
                      ATerm j_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(g_81)), not_null(e_81));
                      {
                        j_81 = t;
                        if(((i_81 != NULL) && (i_81 != j_81)))
                          _fail(j_81);
                        else
                          i_81 = j_81;
                      }
                      t = not_null(i_81);
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
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            t = opt_1(t, layout_0);
            return(t);
          }
          t = cf_1(t, i_5);
          return(t);
        }
        t = prod_3(t, _id, h_5, _id);
        return(t);
      }
      t = appl_2(t, g_5, _id);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, j_5);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              t = filter_1(t, a_99);
              return(t);
            }
            t = Cons_2(t, a_99, k_5);
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
              u_81 = t;
              t_81 :
              if(((ATgetType(u_81) == AT_LIST) && !(ATisEmpty(u_81))))
                {
                  v_81 = ATgetFirst((ATermList) u_81);
                  w_81 = (ATerm) ATgetNext((ATermList) u_81);
                  {
                    t = not_null(w_81);
                    t = filter_1(t, a_99);
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
ATerm prod_3 (ATerm t, ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm))
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  m_82 = t;
  l_82 :
  if(match_cons(m_82, sym_prod_3))
    {
      n_82 = ATgetArgument(m_82, 0);
      o_82 = ATgetArgument(m_82, 1);
      p_82 = ATgetArgument(m_82, 2);
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_82 = NULL,f_83 = NULL;
            ATerm v_82 = NULL;
            t = SSLgetAnnotations(not_null(m_82));
            {
              v_82 = t;
              if(((u_82 != NULL) && (u_82 != v_82)))
                _fail(v_82);
              else
                u_82 = v_82;
            }
            {
              t = not_null(n_82);
              {
                ATerm i_83 = NULL;
                t = v_0(t);
                {
                  f_83 = t;
                  {
                    t = not_null(o_82);
                    {
                      ATerm p_83 = NULL;
                      t = w_0(t);
                      {
                        i_83 = t;
                        {
                          t = not_null(p_82);
                          {
                            ATerm t_83 = NULL;
                            t = x_0(t);
                            {
                              p_83 = t;
                              {
                                ATerm u_83 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(f_83), not_null(i_83), not_null(p_83)), not_null(u_82));
                                {
                                  u_83 = t;
                                  if(((t_83 != NULL) && (t_83 != u_83)))
                                    _fail(u_83);
                                  else
                                    t_83 = u_83;
                                }
                                t = not_null(t_83);
                              }
                            }
                          }
                        }
                      }
                    }
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
              ATerm z_83 = NULL,b_84 = NULL;
              ATerm a_84 = NULL;
              t = SSLgetAnnotations(not_null(m_82));
              {
                a_84 = t;
                if(((z_83 != NULL) && (z_83 != a_84)))
                  _fail(a_84);
                else
                  z_83 = a_84;
              }
              {
                t = not_null(n_82);
                {
                  ATerm d_84 = NULL;
                  t = v_0(t);
                  {
                    b_84 = t;
                    {
                      t = not_null(o_82);
                      {
                        ATerm f_84 = NULL;
                        t = w_0(t);
                        {
                          d_84 = t;
                          {
                            t = not_null(p_82);
                            {
                              ATerm l_84 = NULL;
                              t = x_0(t);
                              {
                                f_84 = t;
                                {
                                  ATerm m_84 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(b_84), not_null(d_84), not_null(f_84)), not_null(z_83));
                                  {
                                    m_84 = t;
                                    if(((l_84 != NULL) && (l_84 != m_84)))
                                      _fail(m_84);
                                    else
                                      l_84 = m_84;
                                  }
                                  t = not_null(l_84);
                                }
                              }
                            }
                          }
                        }
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
ATerm topdown_1 (ATerm t, ATerm g_85 (ATerm))
{
  t = g_85(t);
  {
    ATerm l_5 (ATerm t)
    {
      t = topdown_1(t, g_85);
      return(t);
    }
    t = _all(t, l_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 (ATerm t)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm q_5 (ATerm t)
            {
              ATerm i_30 = t;
              if((PushChoice() == 0))
                {
                  t = n_83(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_30;
                }
              return(t);
            }
            t = filter_1(t, q_5);
            return(t);
          }
          t = prod_3(t, p_5, _id, _id);
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm j_30 = t;
            if((PushChoice() == 0))
              {
                t = n_83(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_30;
              }
            return(t);
          }
          t = filter_1(t, r_5);
          return(t);
        }
        t = appl_2(t, n_5, o_5);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, m_5);
  return(t);
}
ATerm remove_layout_0 (ATerm t)
{
  t = remove_x_1(t, is_layout_p__0);
  return(t);
}
ATerm RemoveLayout_0 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  c_85 :
  if(match_cons(d_85, sym_RemoveLayout_0))
    {
      ATerm f_85 = NULL,j_85 = NULL;
      ATerm k_30;
      k_30 = t;
      {
        ATerm i_85 = NULL;
        t = SSLgetAnnotations(not_null(d_85));
        {
          i_85 = t;
          if(((f_85 != NULL) && (f_85 != i_85)))
            _fail(i_85);
          else
            f_85 = i_85;
        }
      }
      t = k_30;
      {
        ATerm k_85 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(f_85));
        {
          k_85 = t;
          if(((j_85 != NULL) && (j_85 != k_85)))
            _fail(k_85);
          else
            j_85 = k_85;
        }
        t = not_null(j_85);
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm flat_layout_0 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL;
  b_86 = t;
  u_85 :
  if(match_cons(b_86, sym_appl_2))
    {
      c_86 = ATgetArgument(b_86, 0);
      i_86 = ATgetArgument(b_86, 1);
      v_85 :
      if(match_cons(c_86, sym_prod_3))
        {
          d_86 = ATgetArgument(c_86, 0);
          e_86 = ATgetArgument(c_86, 1);
          h_86 = ATgetArgument(c_86, 2);
          w_85 :
          if(match_cons(e_86, sym_cf_1))
            {
              f_86 = ATgetArgument(e_86, 0);
              x_85 :
              if(match_cons(f_86, sym_layout_0))
                {
                  t = not_null(i_86);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(f_86, sym_opt_1))
                    {
                      g_86 = ATgetArgument(f_86, 0);
                      y_85 :
                      if(match_cons(g_86, sym_layout_0))
                        {
                          z_85 :
                          if(((ATgetType(i_86) == AT_LIST) && ATisEmpty(i_86)))
                            {
                              t = term_l_30;
                            }
                          else
                            {
                              if(((ATgetType(i_86) == AT_LIST) && !(ATisEmpty(i_86))))
                                {
                                  j_86 = ATgetFirst((ATermList) i_86);
                                  k_86 = (ATerm) ATgetNext((ATermList) i_86);
                                  a_86 :
                                  if(((ATgetType(k_86) == AT_LIST) && ATisEmpty(k_86)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(j_86)));
                                    }
                                  else
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
  ATerm r_86 = NULL;
  r_86 = t;
  t = (ATerm) ATinsert(ATempty, not_null(r_86));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  y_86 = t;
  v_86 :
  if(match_cons(y_86, sym_appl_2))
    {
      z_86 = ATgetArgument(y_86, 0);
      a_87 = ATgetArgument(y_86, 1);
      {
        t = not_null(a_87);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  j_87 :
  if(match_cons(k_87, sym_appl_2))
    {
      l_87 = ATgetArgument(k_87, 0);
      m_87 = ATgetArgument(k_87, 1);
      {
        ATerm q_87 = NULL,s_87 = NULL;
        ATerm r_87 = NULL;
        t = SSLgetAnnotations(not_null(k_87));
        {
          r_87 = t;
          if(((q_87 != NULL) && (q_87 != r_87)))
            _fail(r_87);
          else
            q_87 = r_87;
        }
        {
          t = not_null(l_87);
          {
            ATerm u_87 = NULL;
            t = j_76(t);
            {
              s_87 = t;
              {
                t = not_null(m_87);
                {
                  ATerm w_87 = NULL;
                  t = k_76(t);
                  {
                    u_87 = t;
                    {
                      ATerm x_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(s_87), not_null(u_87)), not_null(q_87));
                      {
                        x_87 = t;
                        if(((w_87 != NULL) && (w_87 != x_87)))
                          _fail(x_87);
                        else
                          w_87 = x_87;
                      }
                      t = not_null(w_87);
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
  ATerm d_88 (ATerm t)
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, d_88);
          return(t);
        }
        t = appl_2(t, _id, s_5);
        t = Kids_0(t);
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = d_88(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  ATerm o_90 (ATerm t)
  {
    ATerm f_90 = NULL;
    ATerm g_90 = NULL;
    t = yield_0(t);
    {
      g_90 = t;
      if(((f_90 != NULL) && (f_90 != g_90)))
        _fail(g_90);
      else
        f_90 = g_90;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(f_90));
    return(t);
  }
  o_89 = t;
  s_88 :
  if(match_cons(o_89, sym_appl_2))
    {
      p_89 = ATgetArgument(o_89, 0);
      u_89 = ATgetArgument(o_89, 1);
      t_88 :
      if(match_cons(p_89, sym_prod_3))
        {
          q_89 = ATgetArgument(p_89, 0);
          r_89 = ATgetArgument(p_89, 1);
          t_89 = ATgetArgument(p_89, 2);
          u_88 :
          if(match_cons(r_89, sym_cf_1))
            {
              s_89 = ATgetArgument(r_89, 0);
              v_88 :
              if(((ATgetType(q_89) == AT_LIST) && !(ATisEmpty(q_89))))
                {
                  i_89 = ATgetFirst((ATermList) q_89);
                  k_89 = (ATerm) ATgetNext((ATermList) q_89);
                  w_88 :
                  if(match_cons(i_89, sym_lex_1))
                    {
                      j_89 = ATgetArgument(i_89, 0);
                      x_88 :
                      if(((ATgetType(k_89) == AT_LIST) && ATisEmpty(k_89)))
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
              if(match_cons(r_89, sym_lex_1))
                {
                  s_89 = ATgetArgument(r_89, 0);
                  y_88 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(r_89, sym_lit_1))
                    {
                      s_89 = ATgetArgument(r_89, 0);
                      z_88 :
                      {
                        ATerm v_89 = NULL;
                        ATerm w_89 = NULL;
                        t = yield_0(t);
                        {
                          w_89 = t;
                          if(((v_89 != NULL) && (v_89 != w_89)))
                            _fail(w_89);
                          else
                            v_89 = w_89;
                        }
                        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(v_89));
                      }
                    }
                  else
                    {
                      if(match_cons(r_89, sym_varsym_1))
                        {
                          s_89 = ATgetArgument(r_89, 0);
                          a_89 :
                          if(match_cons(s_89, sym_cf_1))
                            {
                              l_89 = ATgetArgument(s_89, 0);
                              b_89 :
                              if(match_cons(l_89, sym_iter_star_1))
                                {
                                  m_89 = ATgetArgument(l_89, 0);
                                  c_89 :
                                  {
                                    ATerm o_30 = t;
                                    int p_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm x_89 = NULL;
                                        ATerm y_89 = NULL;
                                        t = yield_0(t);
                                        {
                                          y_89 = t;
                                          if(((x_89 != NULL) && (x_89 != y_89)))
                                            _fail(y_89);
                                          else
                                            x_89 = y_89;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(x_89));
                                        LocalPopChoice(p_30);
                                      }
                                    else
                                      {
                                        t = o_30;
                                        t = o_90(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(l_89, sym_iter_star_sep_2))
                                    {
                                      m_89 = ATgetArgument(l_89, 0);
                                      n_89 = ATgetArgument(l_89, 1);
                                      d_89 :
                                      {
                                        ATerm q_30 = t;
                                        int r_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_89 = NULL;
                                            ATerm a_90 = NULL;
                                            t = yield_0(t);
                                            {
                                              a_90 = t;
                                              if(((z_89 != NULL) && (z_89 != a_90)))
                                                _fail(a_90);
                                              else
                                                z_89 = a_90;
                                            }
                                            t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(z_89));
                                            LocalPopChoice(r_30);
                                          }
                                        else
                                          {
                                            t = q_30;
                                            t = o_90(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(l_89, sym_iter_1))
                                        {
                                          m_89 = ATgetArgument(l_89, 0);
                                          e_89 :
                                          {
                                            ATerm s_30 = t;
                                            int t_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_90 = NULL;
                                                ATerm c_90 = NULL;
                                                t = yield_0(t);
                                                {
                                                  c_90 = t;
                                                  if(((b_90 != NULL) && (b_90 != c_90)))
                                                    _fail(c_90);
                                                  else
                                                    b_90 = c_90;
                                                }
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(b_90));
                                                LocalPopChoice(t_30);
                                              }
                                            else
                                              {
                                                t = s_30;
                                                t = o_90(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(l_89, sym_iter_sep_2))
                                            {
                                              m_89 = ATgetArgument(l_89, 0);
                                              n_89 = ATgetArgument(l_89, 1);
                                              f_89 :
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_90 = NULL;
                                                    ATerm e_90 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      e_90 = t;
                                                      if(((d_90 != NULL) && (d_90 != e_90)))
                                                        _fail(e_90);
                                                      else
                                                        d_90 = e_90;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(d_90));
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    t = o_90(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              g_89 :
                                              t = o_90(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              h_89 :
                              t = o_90(t);
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
ATerm downup2_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm v_90 (ATerm t)
  {
    t = n_85(t);
    {
      t = _all(t, v_90);
      t = o_85(t);
    }
    return(t);
  }
  t = v_90(t);
  return(t);
}
ATerm flat_lex_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
        }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = flat_layout_0(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
        }
      }
    return(t);
  }
  t = downup2_2(t, t_5, u_5);
  return(t);
}
ATerm FlatLex_0 (ATerm t)
{
  ATerm a_91 = NULL;
  a_91 = t;
  z_90 :
  if(match_cons(a_91, sym_FlatLex_0))
    {
      ATerm c_91 = NULL,e_91 = NULL;
      ATerm a_31;
      a_31 = t;
      {
        ATerm d_91 = NULL;
        t = SSLgetAnnotations(not_null(a_91));
        {
          d_91 = t;
          if(((c_91 != NULL) && (c_91 != d_91)))
            _fail(d_91);
          else
            c_91 = d_91;
        }
      }
      t = a_31;
      {
        ATerm f_91 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(c_91));
        {
          f_91 = t;
          if(((e_91 != NULL) && (e_91 != f_91)))
            _fail(f_91);
          else
            e_91 = f_91;
        }
        t = not_null(e_91);
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
  ATerm q_91 = NULL;
  q_91 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 (ATerm t)
        {
          t = fetch_1(t, FlatLex_0);
          return(t);
        }
        t = _2(t, w_5, flat_lex_0);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
        }
      }
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_5 (ATerm t)
          {
            t = fetch_1(t, RemoveLayout_0);
            return(t);
          }
          ATerm y_5 (ATerm t)
          {
            t = remove_x_1(t, is_layout_p__0);
            return(t);
          }
          t = _2(t, x_5, y_5);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
          }
        }
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              t = fetch_1(t, ApplToSort_0);
              return(t);
            }
            t = _2(t, z_5, appl_to_sort_0);
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            {
            }
          }
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 (ATerm t)
              {
                t = fetch_1(t, FlatList_0);
                return(t);
              }
              t = _2(t, a_6, flat_list_0);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              {
              }
            }
          {
            ATerm j_31 = t;
            int k_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_6 (ATerm t)
                {
                  t = fetch_1(t, RemoveLit_0);
                  return(t);
                }
                t = _2(t, b_6, remove_lit_0);
                LocalPopChoice(k_31);
              }
            else
              {
                t = j_31;
                {
                }
              }
            {
              ATerm l_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_6 (ATerm t)
                  {
                    t = fetch_1(t, FlatInj_0);
                    return(t);
                  }
                  t = _2(t, c_6, flat_injections_0);
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                  {
                  }
                }
              {
                ATerm n_31 = t;
                int o_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_6 (ATerm t)
                    {
                      t = fetch_1(t, FlatAlt_0);
                      return(t);
                    }
                    t = _2(t, d_6, flat_alt_0);
                    LocalPopChoice(o_31);
                  }
                else
                  {
                    t = n_31;
                    {
                    }
                  }
                {
                  ATerm p_31 = t;
                  int q_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_6 (ATerm t)
                      {
                        t = fetch_1(t, ReplaceAppl_0);
                        return(t);
                      }
                      t = _2(t, e_6, replace_appl_0);
                      LocalPopChoice(q_31);
                    }
                  else
                    {
                      t = p_31;
                      {
                      }
                    }
                  {
                    ATerm r_31 = t;
                    int s_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_6 (ATerm t)
                        {
                          t = fetch_1(t, RemoveSeq_0);
                          return(t);
                        }
                        t = _2(t, f_6, remove_seq_0);
                        LocalPopChoice(s_31);
                      }
                    else
                      {
                        t = r_31;
                        {
                        }
                      }
                    {
                      ATerm t_31 = t;
                      int u_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_6 (ATerm t)
                          {
                            t = fetch_1(t, RemovePT_0);
                            return(t);
                          }
                          t = _2(t, g_6, PT_0);
                          LocalPopChoice(u_31);
                        }
                      else
                        {
                          t = t_31;
                          {
                          }
                        }
                      {
                        ATerm v_31 = t;
                        int w_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_91 = NULL;
                            u_91 = t;
                            {
                              if(((q_91 != NULL) && (q_91 != u_91)))
                                _fail(u_91);
                              else
                                q_91 = u_91;
                              t = _2(t, _id, implodeAsfix_0);
                            }
                            LocalPopChoice(w_31);
                          }
                        else
                          {
                            t = v_31;
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
      }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm b_92 = NULL;
  ATerm x_31;
  x_31 = t;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm c_92 = NULL,d_92 = NULL;
      c_92 = t;
      a_92 :
      if(match_cons(c_92, sym_Program_1))
        {
          d_92 = ATgetArgument(c_92, 0);
          if(((b_92 != NULL) && (b_92 != d_92)))
            _fail(d_92);
          else
            b_92 = d_92;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_32), not_null(b_92)), term_z_31));
      {
        t = printnl_0(t);
        {
          t = term_a_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_31;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,l_92 = NULL;
  h_92 = t;
  g_92 :
  if(match_cons(h_92, sym__2))
    {
      i_92 = ATgetArgument(h_92, 0);
      l_92 = ATgetArgument(h_92, 1);
      {
        ATerm b_32;
        b_32 = t;
        t = SSL_printnl(not_null(i_92), not_null(l_92));
        t = b_32;
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
  ATerm q_92 = NULL;
  q_92 = t;
  t = SSL_implode_string(not_null(q_92));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
        v_92 = t;
        u_92 :
        if(((ATgetType(v_92) == AT_LIST) && !(ATisEmpty(v_92))))
          {
            w_92 = ATgetFirst((ATermList) v_92);
            x_92 = (ATerm) ATgetNext((ATermList) v_92);
            {
              t = not_null(w_92);
              {
                ATerm i_6 (ATerm t)
                {
                  t = not_null(x_92);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_6);
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
  ATerm h_93 = NULL;
  ATerm j_93 = NULL;
  h_93 = t;
  {
    ATerm k_93 = NULL;
    ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
    t = not_null(h_93);
    {
      k_93 = t;
      {
        t = SSL_explode_term(not_null(k_93));
        {
          m_93 = t;
          f_93 :
          if(match_cons(m_93, sym__2))
            {
              n_93 = ATgetArgument(m_93, 0);
              o_93 = ATgetArgument(m_93, 1);
              g_93 :
              if(match_string(n_93, ""))
                {
                  if(((j_93 != NULL) && (j_93 != o_93)))
                    _fail(o_93);
                  else
                    j_93 = o_93;
                }
              else
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
      t = not_null(j_93);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm s_93 (ATerm t)
  {
    ATerm e_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_93);
        LocalPopChoice(h_32);
      }
    else
      {
        t = e_32;
        {
          t = Nil_0(t);
          t = y_91(t);
        }
      }
    return(t);
  }
  t = s_93(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_cons(v_93, sym__2))
    {
      w_93 = ATgetArgument(v_93, 0);
      x_93 = ATgetArgument(v_93, 1);
      {
        t = not_null(w_93);
        {
          ATerm j_6 (ATerm t)
          {
            t = not_null(x_93);
            return(t);
          }
          t = at_end_1(t, j_6);
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
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_94 = NULL;
  c_94 = t;
  t = SSL_explode_string(not_null(c_94));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm m_32;
  m_32 = t;
  {
    ATerm h_94 = NULL,j_94 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm i_94 = NULL;
      t = h_102(t);
      {
        i_94 = t;
        if(((h_94 != NULL) && (h_94 != i_94)))
          _fail(i_94);
        else
          h_94 = i_94;
      }
    }
    t = n_32;
    {
      ATerm k_94 = NULL;
      k_94 = t;
      if(((j_94 != NULL) && (j_94 != k_94)))
        _fail(k_94);
      else
        j_94 = k_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_94)), not_null(h_94)));
        t = printnl_0(t);
      }
    }
  }
  t = m_32;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  t = SSL_is_string(not_null(o_94));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, k_6);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
              x_94 = t;
              w_94 :
              if(match_cons(x_94, sym_Path_1))
                {
                  y_94 = ATgetArgument(x_94, 0);
                  t = not_null(y_94);
                }
              else
                {
                  if(match_cons(x_94, sym_Var_1))
                    {
                      y_94 = ATgetArgument(x_94, 0);
                      {
                        t = not_null(y_94);
                        {
                          ATerm u_32 = t;
                          int z_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_32);
                            }
                          else
                            {
                              t = u_32;
                              {
                                ATerm l_6 (ATerm t)
                                {
                                  t = term_a_33;
                                  return(t);
                                }
                                t = debug_1(t, l_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_94, sym_Prefix_2))
                        {
                          y_94 = ATgetArgument(x_94, 0);
                          z_94 = ATgetArgument(x_94, 1);
                          {
                            ATerm e_95 = NULL,g_95 = NULL;
                            ATerm b_33;
                            b_33 = t;
                            {
                              ATerm f_95 = NULL;
                              t = not_null(y_94);
                              {
                                t = eval_config_0(t);
                                {
                                  f_95 = t;
                                  if(((e_95 != NULL) && (e_95 != f_95)))
                                    _fail(f_95);
                                  else
                                    e_95 = f_95;
                                }
                              }
                            }
                            t = b_33;
                            {
                              ATerm h_95 = NULL;
                              t = not_null(z_94);
                              {
                                t = eval_config_0(t);
                                {
                                  h_95 = t;
                                  if(((g_95 != NULL) && (g_95 != h_95)))
                                    _fail(h_95);
                                  else
                                    g_95 = h_95;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_95), not_null(g_95));
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
  ATerm p_95 = NULL;
  p_95 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_33, not_null(p_95));
    {
      t = table_get_0(t);
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_33;
              f_33 = t;
              {
                ATerm r_95 = NULL;
                ATerm s_95 = NULL;
                s_95 = t;
                if(((r_95 != NULL) && (r_95 != s_95)))
                  _fail(s_95);
                else
                  r_95 = s_95;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_33, not_null(p_95), not_null(r_95));
                  t = table_put_0(t);
                }
              }
              t = f_33;
            }
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_33;
      i_33 = t;
      {
        ATerm w_95 = NULL;
        ATerm x_95 = NULL;
        t = term_j_33;
        {
          t = get_config_0(t);
          {
            x_95 = t;
            if(((w_95 != NULL) && (w_95 != x_95)))
              _fail(x_95);
            else
              w_95 = x_95;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_95), term_k_33);
          t = geq_0(t);
        }
      }
      t = i_33;
      t = f_105(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL;
  b_96 = t;
  a_96 :
  if(match_cons(b_96, sym__2))
    {
      c_96 = ATgetArgument(b_96, 0);
      d_96 = ATgetArgument(b_96, 1);
      t = SSL_WriteToTextFile(not_null(c_96), not_null(d_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
  n_96 = t;
  m_96 :
  if(match_cons(n_96, sym__2))
    {
      o_96 = ATgetArgument(n_96, 0);
      p_96 = ATgetArgument(n_96, 1);
      {
        ATerm t_96 = NULL,x_96 = NULL;
        ATerm u_96 = NULL;
        t = SSLgetAnnotations(not_null(n_96));
        {
          u_96 = t;
          if(((t_96 != NULL) && (t_96 != u_96)))
            _fail(u_96);
          else
            t_96 = u_96;
        }
        {
          t = not_null(o_96);
          {
            ATerm z_96 = NULL;
            t = w_68(t);
            {
              x_96 = t;
              {
                t = not_null(p_96);
                {
                  ATerm b_97 = NULL;
                  t = x_68(t);
                  {
                    z_96 = t;
                    {
                      ATerm c_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_96), not_null(z_96)), not_null(t_96));
                      {
                        c_97 = t;
                        if(((b_97 != NULL) && (b_97 != c_97)))
                          _fail(c_97);
                        else
                          b_97 = c_97;
                      }
                      t = not_null(b_97);
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
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
  k_97 = t;
  j_97 :
  if(match_cons(k_97, sym__2))
    {
      l_97 = ATgetArgument(k_97, 0);
      m_97 = ATgetArgument(k_97, 1);
      t = SSL_WriteToBinaryFile(not_null(l_97), not_null(m_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_97 = NULL;
  ATerm l_33;
  l_33 = t;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_6 (ATerm t)
          {
            ATerm v_97 = NULL,w_97 = NULL;
            v_97 = t;
            r_97 :
            if(match_cons(v_97, sym_Output_1))
              {
                w_97 = ATgetArgument(v_97, 0);
                if(((u_97 != NULL) && (u_97 != w_97)))
                  _fail(w_97);
                else
                  u_97 = w_97;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_6);
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm z_97 = NULL;
            t = term_o_33;
            {
              z_97 = t;
              if(((u_97 != NULL) && (u_97 != z_97)))
                _fail(z_97);
              else
                u_97 = z_97;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_6, _id);
  }
  t = l_33;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm p_6 (ATerm t)
      {
        t = not_null(u_97);
        return(t);
      }
      t = split_2(t, p_6, _id);
      return(t);
    }
    t = _2(t, _id, o_6);
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_6 (ATerm t)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm a_98 = NULL;
              a_98 = t;
              t_97 :
              if(!(match_cons(a_98, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_6);
            return(t);
          }
          t = _2(t, q_6, WriteToBinaryFile_0);
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm g_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL;
  ATerm r_33;
  r_33 = t;
  t = dtime_0(t);
  t = r_33;
  {
    t = e_110(t);
    {
      ATerm s_33;
      s_33 = t;
      {
        ATerm h_98 = NULL;
        t = dtime_0(t);
        {
          h_98 = t;
          if(((g_98 != NULL) && (g_98 != h_98)))
            _fail(h_98);
          else
            g_98 = h_98;
        }
      }
      t = s_33;
      {
        i_98 = t;
        f_98 :
        if(match_cons(i_98, sym__2))
          {
            j_98 = ATgetArgument(i_98, 0);
            k_98 = ATgetArgument(i_98, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_98)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_98))), not_null(k_98));
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
  ATerm q_98 = NULL;
  q_98 = t;
  t = SSL_ReadFromFile(not_null(q_98));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm))
{
  ATerm v_98 = NULL,x_98 = NULL;
  ATerm t_33;
  t_33 = t;
  {
    ATerm w_98 = NULL;
    t = m_99(t);
    {
      w_98 = t;
      if(((v_98 != NULL) && (v_98 != w_98)))
        _fail(w_98);
      else
        v_98 = w_98;
    }
  }
  t = t_33;
  {
    ATerm y_98 = NULL;
    t = n_99(t);
    {
      y_98 = t;
      if(((x_98 != NULL) && (x_98 != y_98)))
        _fail(y_98);
      else
        x_98 = y_98;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_98), not_null(x_98));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_99 = NULL;
  ATerm u_33;
  u_33 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 (ATerm t)
        {
          ATerm g_99 = NULL,h_99 = NULL;
          g_99 = t;
          d_99 :
          if(match_cons(g_99, sym_Input_1))
            {
              h_99 = ATgetArgument(g_99, 0);
              if(((f_99 != NULL) && (f_99 != h_99)))
                _fail(h_99);
              else
                f_99 = h_99;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, s_6);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm i_99 = NULL;
          t = term_x_33;
          {
            i_99 = t;
            if(((f_99 != NULL) && (f_99 != i_99)))
              _fail(i_99);
            else
              f_99 = i_99;
          }
        }
      }
  }
  t = u_33;
  {
    ATerm t_6 (ATerm t)
    {
      t = not_null(f_99);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm o_99 = NULL;
    o_99 = t;
    l_99 :
    if(!(match_string(o_99, "-v")))
      {
        if(!(match_string(o_99, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = term_a_34;
    t = set_config_0(t);
    t = term_b_34;
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_c_34;
    return(t);
  }
  t = Option_3(t, u_6, v_6, w_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm r_99 = NULL;
    r_99 = t;
    p_99 :
    if(!(match_string(r_99, "-k")))
      {
        if(!(match_string(r_99, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm d_34;
    d_34 = t;
    {
      ATerm s_99 = NULL;
      ATerm t_99 = NULL;
      t = string_to_int_0(t);
      {
        t_99 = t;
        if(((s_99 != NULL) && (s_99 != t_99)))
          _fail(t_99);
        else
          s_99 = t_99;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_34, not_null(s_99));
        t = set_config_0(t);
      }
    }
    t = d_34;
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_f_34;
    return(t);
  }
  t = ArgOption_3(t, x_6, y_6, z_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_99 = NULL;
  w_99 = t;
  t = SSL_string_to_int(not_null(w_99));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 (ATerm t)
      {
        ATerm e_100 = NULL;
        e_100 = t;
        z_99 :
        if(!(match_string(e_100, "-S")))
          {
            if(!(match_string(e_100, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = term_j_34;
        t = set_config_0(t);
        t = term_k_34;
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_l_34;
        return(t);
      }
      t = Option_3(t, a_7, b_7, c_7);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 (ATerm t)
            {
              ATerm f_100 = NULL;
              f_100 = t;
              a_100 :
              if(!(match_string(f_100, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_7 (ATerm t)
            {
              ATerm i_100 = NULL;
              ATerm o_34;
              o_34 = t;
              {
                ATerm g_100 = NULL;
                ATerm h_100 = NULL;
                t = string_to_int_0(t);
                {
                  h_100 = t;
                  if(((g_100 != NULL) && (g_100 != h_100)))
                    _fail(h_100);
                  else
                    g_100 = h_100;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_33, not_null(g_100));
                  t = set_config_0(t);
                }
              }
              t = o_34;
              {
                ATerm j_100 = NULL;
                j_100 = t;
                if(((i_100 != NULL) && (i_100 != j_100)))
                  _fail(j_100);
                else
                  i_100 = j_100;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_100));
              }
              return(t);
            }
            ATerm f_7 (ATerm t)
            {
              t = term_p_34;
              return(t);
            }
            t = ArgOption_3(t, d_7, e_7, f_7);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm g_7 (ATerm t)
              {
                ATerm k_100 = NULL;
                k_100 = t;
                d_100 :
                if(!(match_string(k_100, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_7 (ATerm t)
              {
                t = term_r_34;
                t = set_config_0(t);
                t = term_s_34;
                return(t);
              }
              ATerm i_7 (ATerm t)
              {
                t = term_t_34;
                return(t);
              }
              t = Option_3(t, g_7, h_7, i_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
        ATerm w_34 = t;
        int x_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_34);
          }
        else
          {
            t = w_34;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm q_100 = NULL;
    q_100 = t;
    n_100 :
    if(!(match_string(q_100, "-o")))
      {
        if(!(match_string(q_100, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    ATerm t_100 = NULL;
    ATerm y_34;
    y_34 = t;
    {
      ATerm r_100 = NULL;
      ATerm s_100 = NULL;
      s_100 = t;
      if(((r_100 != NULL) && (r_100 != s_100)))
        _fail(s_100);
      else
        r_100 = s_100;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_34, not_null(r_100));
        t = set_config_0(t);
      }
    }
    t = y_34;
    {
      ATerm u_100 = NULL;
      u_100 = t;
      if(((t_100 != NULL) && (t_100 != u_100)))
        _fail(u_100);
      else
        t_100 = u_100;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_100));
    }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  t = ArgOption_3(t, j_7, k_7, l_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_35);
    }
  else
    {
      t = b_35;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm y_100 = NULL;
          y_100 = t;
          x_100 :
          if(!(match_string(y_100, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_7 (ATerm t)
        {
          t = term_e_35;
          t = set_config_0(t);
          t = term_f_35;
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          t = term_g_35;
          return(t);
        }
        t = Option_3(t, m_7, n_7, o_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  e_101 = t;
  c_101 :
  if(match_string(e_101, "register-usage-info"))
    {
      t = register_usage_1(t, u_0);
    }
  else
    {
      if(((ATgetType(e_101) == AT_LIST) && !(ATisEmpty(e_101))))
        {
          f_101 = ATgetFirst((ATermList) e_101);
          g_101 = (ATerm) ATgetNext((ATermList) e_101);
          d_101 :
          if(((ATgetType(g_101) == AT_LIST) && !(ATisEmpty(g_101))))
            {
              h_101 = ATgetFirst((ATermList) g_101);
              i_101 = (ATerm) ATgetNext((ATermList) g_101);
              {
                ATerm m_101 = NULL;
                ATerm h_35;
                h_35 = t;
                {
                  t = not_null(f_101);
                  t = s_0(t);
                }
                t = h_35;
                {
                  ATerm n_101 = NULL;
                  t = not_null(h_101);
                  {
                    t = t_0(t);
                    {
                      n_101 = t;
                      if(((m_101 != NULL) && (m_101 != n_101)))
                        _fail(n_101);
                      else
                        m_101 = n_101;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_101)), not_null(m_101));
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
  ATerm p_7 (ATerm t)
  {
    ATerm u_101 = NULL;
    u_101 = t;
    r_101 :
    if(!(match_string(u_101, "-i")))
      {
        if(!(match_string(u_101, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm x_101 = NULL;
    ATerm i_35;
    i_35 = t;
    {
      ATerm v_101 = NULL;
      ATerm w_101 = NULL;
      w_101 = t;
      if(((v_101 != NULL) && (v_101 != w_101)))
        _fail(w_101);
      else
        v_101 = w_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_35, not_null(v_101));
        t = set_config_0(t);
      }
    }
    t = i_35;
    {
      ATerm y_101 = NULL;
      y_101 = t;
      if(((x_101 != NULL) && (x_101 != y_101)))
        _fail(y_101);
      else
        x_101 = y_101;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_101));
    }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_k_35;
    return(t);
  }
  t = ArgOption_3(t, p_7, s_7, t_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, term_p_35));
  {
    t = printnl_0(t);
    {
      t = term_a_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_102 = NULL;
  c_102 = t;
  t = SSL_TicksToSeconds(not_null(c_102));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL;
  j_102 = t;
  g_102 :
  if(match_cons(j_102, sym__2))
    {
      k_102 = ATgetArgument(j_102, 0);
      l_102 = ATgetArgument(j_102, 1);
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_102), not_null(l_102));
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            t = SSL_addr(not_null(k_102), not_null(l_102));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_97(t);
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL;
        s_102 = t;
        r_102 :
        if(((ATgetType(s_102) == AT_LIST) && !(ATisEmpty(s_102))))
          {
            t_102 = ATgetFirst((ATermList) s_102);
            u_102 = (ATerm) ATgetNext((ATermList) s_102);
            {
              ATerm x_102 = NULL;
              ATerm y_102 = NULL;
              t = not_null(u_102);
              {
                t = foldr_2(t, x_97, y_97);
                {
                  y_102 = t;
                  if(((x_102 != NULL) && (x_102 != y_102)))
                    _fail(y_102);
                  else
                    x_102 = y_102;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_102), not_null(x_102));
                t = y_97(t);
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
ATerm crush_2 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm))
{
  ATerm f_103 = NULL;
  ATerm h_103 = NULL;
  f_103 = t;
  {
    ATerm i_103 = NULL;
    ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
    t = not_null(f_103);
    {
      i_103 = t;
      {
        t = SSL_explode_term(not_null(i_103));
        {
          l_103 = t;
          e_103 :
          if(match_cons(l_103, sym__2))
            {
              m_103 = ATgetArgument(l_103, 0);
              n_103 = ATgetArgument(l_103, 1);
              if(((h_103 != NULL) && (h_103 != n_103)))
                _fail(n_103);
              else
                h_103 = n_103;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_103);
      t = foldr_2(t, v_96, w_96);
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
    ATerm u_7 (ATerm t)
    {
      t = term_i_34;
      return(t);
    }
    t = crush_2(t, u_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL;
  t_103 = t;
  s_103 :
  if(match_cons(t_103, sym__2))
    {
      u_103 = ATgetArgument(t_103, 0);
      v_103 = ATgetArgument(t_103, 1);
      {
        ATerm u_35;
        u_35 = t;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_103), not_null(v_103));
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              t = SSL_gtr(not_null(u_103), not_null(v_103));
            }
        }
        t = u_35;
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
  ATerm b_104 = NULL;
  ATerm x_35 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
      c_104 = t;
      a_104 :
      if(match_cons(c_104, sym__2))
        {
          d_104 = ATgetArgument(c_104, 0);
          e_104 = ATgetArgument(c_104, 1);
          {
            if(((b_104 != NULL) && (b_104 != d_104)))
              _fail(d_104);
            else
              b_104 = d_104;
            if(((b_104 != NULL) && (b_104 != e_104)))
              _fail(e_104);
            else
              b_104 = e_104;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_37);
    }
  else
    {
      t = x_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_105 (ATerm))
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_37;
      i_37 = t;
      {
        ATerm h_104 = NULL;
        ATerm i_104 = NULL;
        t = term_j_33;
        {
          t = get_config_0(t);
          {
            i_104 = t;
            if(((h_104 != NULL) && (h_104 != i_104)))
              _fail(i_104);
            else
              h_104 = i_104;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_104), term_a_18);
          t = geq_0(t);
        }
      }
      t = i_37;
      t = e_105(t);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm q_104 = NULL,s_104 = NULL;
    ATerm j_37;
    j_37 = t;
    {
      ATerm r_104 = NULL;
      t = run_time_0(t);
      {
        r_104 = t;
        if(((q_104 != NULL) && (q_104 != r_104)))
          _fail(r_104);
        else
          q_104 = r_104;
      }
    }
    t = j_37;
    {
      ATerm t_104 = NULL;
      t = term_o_37;
      {
        t = get_config_0(t);
        {
          t_104 = t;
          if(((s_104 != NULL) && (s_104 != t_104)))
            _fail(t_104);
          else
            s_104 = t_104;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_37), not_null(q_104)), term_p_37), not_null(s_104)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_7);
  {
    t = term_i_34;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_105 = NULL;
  a_105 = t;
  z_104 :
  if(match_cons(a_105, sym_Version_0))
    {
      ATerm c_105 = NULL,g_105 = NULL;
      ATerm r_37;
      r_37 = t;
      {
        ATerm d_105 = NULL;
        t = SSLgetAnnotations(not_null(a_105));
        {
          d_105 = t;
          if(((c_105 != NULL) && (c_105 != d_105)))
            _fail(d_105);
          else
            c_105 = d_105;
        }
      }
      t = r_37;
      {
        ATerm h_105 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_105));
        {
          h_105 = t;
          if(((g_105 != NULL) && (g_105 != h_105)))
            _fail(h_105);
          else
            g_105 = h_105;
        }
        t = not_null(g_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm w_7 (ATerm t)
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        {
          ATerm u_37 = t;
          int v_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_37);
            }
          else
            {
              t = u_37;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, w_7);
  t = c_110(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_105 = NULL;
  m_105 = t;
  t = SSL_table_create(not_null(m_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_105 = NULL;
  q_105 = t;
  {
    ATerm w_37;
    w_37 = t;
    {
      t = term_x_37;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_37, term_y_37, not_null(q_105));
          t = table_put_0(t);
        }
      }
    }
    t = w_37;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  t = SSL_table_destroy(not_null(u_105));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_105 = NULL;
  y_105 = t;
  t = SSL_exit(not_null(y_105));
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm i_106 = NULL;
  i_106 = t;
  h_106 :
  if(match_cons(i_106, sym_layout_0))
    {
      ATerm z_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_106 = NULL,m_106 = NULL;
          ATerm b_38;
          b_38 = t;
          {
            ATerm l_106 = NULL;
            t = SSLgetAnnotations(not_null(i_106));
            {
              l_106 = t;
              if(((k_106 != NULL) && (k_106 != l_106)))
                _fail(l_106);
              else
                k_106 = l_106;
            }
          }
          t = b_38;
          {
            ATerm n_106 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(k_106));
            {
              n_106 = t;
              if(((m_106 != NULL) && (m_106 != n_106)))
                _fail(n_106);
              else
                m_106 = n_106;
            }
            t = not_null(m_106);
          }
          LocalPopChoice(a_38);
        }
      else
        {
          t = z_37;
          {
            ATerm p_106 = NULL,r_106 = NULL;
            ATerm c_38;
            c_38 = t;
            {
              ATerm q_106 = NULL;
              t = SSLgetAnnotations(not_null(i_106));
              {
                q_106 = t;
                if(((p_106 != NULL) && (p_106 != q_106)))
                  _fail(q_106);
                else
                  p_106 = q_106;
              }
            }
            t = c_38;
            {
              ATerm s_106 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(p_106));
              {
                s_106 = t;
                if(((r_106 != NULL) && (r_106 != s_106)))
                  _fail(s_106);
                else
                  r_106 = s_106;
              }
              t = not_null(r_106);
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
ATerm lit_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm i_107 = NULL,j_107 = NULL;
  i_107 = t;
  h_107 :
  if(match_cons(i_107, sym_lit_1))
    {
      j_107 = ATgetArgument(i_107, 0);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_107 = NULL,o_107 = NULL;
            ATerm n_107 = NULL;
            t = SSLgetAnnotations(not_null(i_107));
            {
              n_107 = t;
              if(((m_107 != NULL) && (m_107 != n_107)))
                _fail(n_107);
              else
                m_107 = n_107;
            }
            {
              t = not_null(j_107);
              {
                ATerm q_107 = NULL;
                t = r_0(t);
                {
                  o_107 = t;
                  {
                    ATerm r_107 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(o_107)), not_null(m_107));
                    {
                      r_107 = t;
                      if(((q_107 != NULL) && (q_107 != r_107)))
                        _fail(r_107);
                      else
                        q_107 = r_107;
                    }
                    t = not_null(q_107);
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
              ATerm u_107 = NULL,w_107 = NULL;
              ATerm v_107 = NULL;
              t = SSLgetAnnotations(not_null(i_107));
              {
                v_107 = t;
                if(((u_107 != NULL) && (u_107 != v_107)))
                  _fail(v_107);
                else
                  u_107 = v_107;
              }
              {
                t = not_null(j_107);
                {
                  ATerm y_107 = NULL;
                  t = r_0(t);
                  {
                    w_107 = t;
                    {
                      ATerm z_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(w_107)), not_null(u_107));
                      {
                        z_107 = t;
                        if(((y_107 != NULL) && (y_107 != z_107)))
                          _fail(z_107);
                        else
                          y_107 = z_107;
                      }
                      t = not_null(y_107);
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
ATerm list_1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm i_108 (ATerm t)
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
        t = Cons_2(t, l_91, i_108);
      }
    return(t);
  }
  t = i_108(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm o_108 = NULL,p_108 = NULL;
  o_108 = t;
  n_108 :
  if(match_cons(o_108, sym_seq_1))
    {
      p_108 = ATgetArgument(o_108, 0);
      {
        ATerm s_108 = NULL,u_108 = NULL;
        ATerm t_108 = NULL;
        t = SSLgetAnnotations(not_null(o_108));
        {
          t_108 = t;
          if(((s_108 != NULL) && (s_108 != t_108)))
            _fail(t_108);
          else
            s_108 = t_108;
        }
        {
          t = not_null(p_108);
          {
            ATerm w_108 = NULL;
            t = p_75(t);
            {
              u_108 = t;
              {
                ATerm x_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(u_108)), not_null(s_108));
                {
                  x_108 = t;
                  if(((w_108 != NULL) && (w_108 != x_108)))
                    _fail(x_108);
                  else
                    w_108 = x_108;
                }
                t = not_null(w_108);
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
ATerm iter_star_sep_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  m_109 :
  if(match_cons(n_109, sym_iter_star_sep_2))
    {
      o_109 = ATgetArgument(n_109, 0);
      p_109 = ATgetArgument(n_109, 1);
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_109 = NULL,v_109 = NULL;
            ATerm u_109 = NULL;
            t = SSLgetAnnotations(not_null(n_109));
            {
              u_109 = t;
              if(((t_109 != NULL) && (t_109 != u_109)))
                _fail(u_109);
              else
                t_109 = u_109;
            }
            {
              t = not_null(o_109);
              {
                ATerm x_109 = NULL;
                t = p_0(t);
                {
                  v_109 = t;
                  {
                    t = not_null(p_109);
                    {
                      ATerm z_109 = NULL;
                      t = q_0(t);
                      {
                        x_109 = t;
                        {
                          ATerm a_110 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(v_109), not_null(x_109)), not_null(t_109));
                          {
                            a_110 = t;
                            if(((z_109 != NULL) && (z_109 != a_110)))
                              _fail(a_110);
                            else
                              z_109 = a_110;
                          }
                          t = not_null(z_109);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            {
              ATerm g_110 = NULL,m_110 = NULL;
              ATerm h_110 = NULL;
              t = SSLgetAnnotations(not_null(n_109));
              {
                h_110 = t;
                if(((g_110 != NULL) && (g_110 != h_110)))
                  _fail(h_110);
                else
                  g_110 = h_110;
              }
              {
                t = not_null(o_109);
                {
                  ATerm o_110 = NULL;
                  t = p_0(t);
                  {
                    m_110 = t;
                    {
                      t = not_null(p_109);
                      {
                        ATerm q_110 = NULL;
                        t = q_0(t);
                        {
                          o_110 = t;
                          {
                            ATerm w_110 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(m_110), not_null(o_110)), not_null(g_110));
                            {
                              w_110 = t;
                              if(((q_110 != NULL) && (q_110 != w_110)))
                                _fail(w_110);
                              else
                                q_110 = w_110;
                            }
                            t = not_null(q_110);
                          }
                        }
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
ATerm iter_star_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm v_111 = NULL,w_111 = NULL;
  v_111 = t;
  u_111 :
  if(match_cons(v_111, sym_iter_star_1))
    {
      w_111 = ATgetArgument(v_111, 0);
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_111 = NULL,b_112 = NULL;
            ATerm a_112 = NULL;
            t = SSLgetAnnotations(not_null(v_111));
            {
              a_112 = t;
              if(((z_111 != NULL) && (z_111 != a_112)))
                _fail(a_112);
              else
                z_111 = a_112;
            }
            {
              t = not_null(w_111);
              {
                ATerm d_112 = NULL;
                t = o_0(t);
                {
                  b_112 = t;
                  {
                    ATerm e_112 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(b_112)), not_null(z_111));
                    {
                      e_112 = t;
                      if(((d_112 != NULL) && (d_112 != e_112)))
                        _fail(e_112);
                      else
                        d_112 = e_112;
                    }
                    t = not_null(d_112);
                  }
                }
              }
            }
            LocalPopChoice(k_38);
          }
        else
          {
            t = j_38;
            {
              ATerm h_112 = NULL,j_112 = NULL;
              ATerm i_112 = NULL;
              t = SSLgetAnnotations(not_null(v_111));
              {
                i_112 = t;
                if(((h_112 != NULL) && (h_112 != i_112)))
                  _fail(i_112);
                else
                  h_112 = i_112;
              }
              {
                t = not_null(w_111);
                {
                  ATerm l_112 = NULL;
                  t = o_0(t);
                  {
                    j_112 = t;
                    {
                      ATerm m_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(j_112)), not_null(h_112));
                      {
                        m_112 = t;
                        if(((l_112 != NULL) && (l_112 != m_112)))
                          _fail(m_112);
                        else
                          l_112 = m_112;
                      }
                      t = not_null(l_112);
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
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym_iter_sep_2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_113 = NULL,o_113 = NULL;
            ATerm n_113 = NULL;
            t = SSLgetAnnotations(not_null(g_113));
            {
              n_113 = t;
              if(((m_113 != NULL) && (m_113 != n_113)))
                _fail(n_113);
              else
                m_113 = n_113;
            }
            {
              t = not_null(h_113);
              {
                ATerm q_113 = NULL;
                t = m_0(t);
                {
                  o_113 = t;
                  {
                    t = not_null(i_113);
                    {
                      ATerm s_113 = NULL;
                      t = n_0(t);
                      {
                        q_113 = t;
                        {
                          ATerm t_113 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(o_113), not_null(q_113)), not_null(m_113));
                          {
                            t_113 = t;
                            if(((s_113 != NULL) && (s_113 != t_113)))
                              _fail(t_113);
                            else
                              s_113 = t_113;
                          }
                          t = not_null(s_113);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
            {
              ATerm x_113 = NULL,z_113 = NULL;
              ATerm y_113 = NULL;
              t = SSLgetAnnotations(not_null(g_113));
              {
                y_113 = t;
                if(((x_113 != NULL) && (x_113 != y_113)))
                  _fail(y_113);
                else
                  x_113 = y_113;
              }
              {
                t = not_null(h_113);
                {
                  ATerm b_114 = NULL;
                  t = m_0(t);
                  {
                    z_113 = t;
                    {
                      t = not_null(i_113);
                      {
                        ATerm d_114 = NULL;
                        t = n_0(t);
                        {
                          b_114 = t;
                          {
                            ATerm e_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(z_113), not_null(b_114)), not_null(x_113));
                            {
                              e_114 = t;
                              if(((d_114 != NULL) && (d_114 != e_114)))
                                _fail(e_114);
                              else
                                d_114 = e_114;
                            }
                            t = not_null(d_114);
                          }
                        }
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
ATerm iter_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm y_114 = NULL,z_114 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym_iter_1))
    {
      z_114 = ATgetArgument(y_114, 0);
      {
        ATerm t_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_115 = NULL,e_115 = NULL;
            ATerm d_115 = NULL;
            t = SSLgetAnnotations(not_null(y_114));
            {
              d_115 = t;
              if(((c_115 != NULL) && (c_115 != d_115)))
                _fail(d_115);
              else
                c_115 = d_115;
            }
            {
              t = not_null(z_114);
              {
                ATerm g_115 = NULL;
                t = l_0(t);
                {
                  e_115 = t;
                  {
                    ATerm h_115 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(e_115)), not_null(c_115));
                    {
                      h_115 = t;
                      if(((g_115 != NULL) && (g_115 != h_115)))
                        _fail(h_115);
                      else
                        g_115 = h_115;
                    }
                    t = not_null(g_115);
                  }
                }
              }
            }
            LocalPopChoice(x_38);
          }
        else
          {
            t = t_38;
            {
              ATerm k_115 = NULL,m_115 = NULL;
              ATerm l_115 = NULL;
              t = SSLgetAnnotations(not_null(y_114));
              {
                l_115 = t;
                if(((k_115 != NULL) && (k_115 != l_115)))
                  _fail(l_115);
                else
                  k_115 = l_115;
              }
              {
                t = not_null(z_114);
                {
                  ATerm o_115 = NULL;
                  t = l_0(t);
                  {
                    m_115 = t;
                    {
                      ATerm p_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(m_115)), not_null(k_115));
                      {
                        p_115 = t;
                        if(((o_115 != NULL) && (o_115 != p_115)))
                          _fail(p_115);
                        else
                          o_115 = p_115;
                      }
                      t = not_null(o_115);
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
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm a_39 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(b_39);
          }
        else
          {
            t = a_39;
            {
              ATerm g_39 = t;
              int h_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(h_39);
                }
              else
                {
                  t = g_39;
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
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL;
      z_115 = t;
      y_115 :
      if(((ATgetType(z_115) == AT_LIST) && ATisEmpty(z_115)))
        {
          {
          }
        }
      else
        {
          if(((ATgetType(z_115) == AT_LIST) && !(ATisEmpty(z_115))))
            {
              a_116 = ATgetFirst((ATermList) z_115);
              b_116 = (ATerm) ATgetNext((ATermList) z_115);
              {
              }
            }
          else
            {
              _fail(t);
            }
        }
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
      {
        ATerm c_116 (ATerm t)
        {
          ATerm n_39 = t;
          int o_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = list_sort_0(t);
              LocalPopChoice(o_39);
            }
          else
            {
              t = n_39;
              {
                ATerm x_7 (ATerm t)
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm p_39 = t;
                    int q_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = lit_1(t, _id);
                        LocalPopChoice(q_39);
                      }
                    else
                      {
                        t = p_39;
                        {
                          ATerm r_39 = t;
                          int s_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = layout_0(t);
                              LocalPopChoice(s_39);
                            }
                          else
                            {
                              t = r_39;
                              t = c_116(t);
                            }
                        }
                      }
                    return(t);
                  }
                  t = list_1(t, y_7);
                  return(t);
                }
                t = seq_1(t, x_7);
              }
            }
          return(t);
        }
        t = c_116(t);
      }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm f_40;
  f_40 = t;
  {
    ATerm f_116 = NULL;
    ATerm i_116 = NULL;
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        {
          ATerm g_116 = NULL;
          ATerm h_116 = NULL;
          h_116 = t;
          if(((g_116 != NULL) && (g_116 != h_116)))
            _fail(h_116);
          else
            g_116 = h_116;
          t = (ATerm) ATinsert(ATempty, not_null(g_116));
        }
      }
    {
      i_116 = t;
      if(((f_116 != NULL) && (f_116 != i_116)))
        _fail(i_116);
      else
        f_116 = i_116;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(f_116));
      t = printnl_0(t);
    }
  }
  t = f_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_40), term_j_40), term_i_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_91 (ATerm))
{
  ATerm l_116 (ATerm t)
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = Cons_2(t, j_91, l_116);
      }
    return(t);
  }
  t = l_116(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL;
  u_116 = t;
  r_116 :
  if(((ATgetType(u_116) == AT_LIST) && !(ATisEmpty(u_116))))
    {
      s_116 = ATgetFirst((ATermList) u_116);
      t_116 = (ATerm) ATgetNext((ATermList) u_116);
      {
        ATerm x_116 = NULL;
        t = not_null(t_116);
        {
          ATerm t_40;
          t_40 = t;
          {
            ATerm y_116 = NULL,a_117 = NULL,c_117 = NULL;
            ATerm u_40;
            u_40 = t;
            {
              ATerm z_116 = NULL;
              t = j_0(t);
              {
                z_116 = t;
                if(((y_116 != NULL) && (y_116 != z_116)))
                  _fail(z_116);
                else
                  y_116 = z_116;
              }
            }
            t = u_40;
            {
              ATerm b_117 = NULL;
              t = not_null(s_116);
              {
                t = i_0(t);
                {
                  b_117 = t;
                  if(((a_117 != NULL) && (a_117 != b_117)))
                    _fail(b_117);
                  else
                    a_117 = b_117;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_116)), not_null(a_117));
                {
                  c_117 = t;
                  if(((x_116 != NULL) && (x_116 != c_117)))
                    _fail(c_117);
                  else
                    x_116 = c_117;
                }
              }
            }
          }
          t = t_40;
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(x_116);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_116) == AT_LIST) && ATisEmpty(u_116)))
        {
          {
            t = term_z_33;
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
  ATerm a_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm j_117 = NULL;
  ATerm k_117 = NULL;
  t = term_z_33;
  {
    t = h_0(t);
    {
      k_117 = t;
      if(((j_117 != NULL) && (j_117 != k_117)))
        _fail(k_117);
      else
        j_117 = k_117;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_40), not_null(j_117)), term_v_40);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm t_117 = NULL,u_117 = NULL;
  t_117 = t;
  s_117 :
  if(match_cons(t_117, sym_Program_1))
    {
      u_117 = ATgetArgument(t_117, 0);
      {
        ATerm x_117 = NULL,z_117 = NULL;
        ATerm y_117 = NULL;
        t = SSLgetAnnotations(not_null(t_117));
        {
          y_117 = t;
          if(((x_117 != NULL) && (x_117 != y_117)))
            _fail(y_117);
          else
            x_117 = y_117;
        }
        {
          t = not_null(u_117);
          {
            ATerm b_118 = NULL;
            t = b_75(t);
            {
              z_117 = t;
              {
                ATerm c_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_117)), not_null(x_117));
                {
                  c_118 = t;
                  if(((b_118 != NULL) && (b_118 != c_118)))
                    _fail(c_118);
                  else
                    b_118 = c_118;
                }
                t = not_null(b_118);
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
  ATerm l_118 = NULL;
  ATerm x_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_118 = NULL;
      t = term_o_37;
      {
        t = get_config_0(t);
        {
          m_118 = t;
          if(((l_118 != NULL) && (l_118 != m_118)))
            _fail(m_118);
          else
            l_118 = m_118;
        }
      }
      LocalPopChoice(a_41);
    }
  else
    {
      t = x_40;
      {
        ATerm b_8 (ATerm t)
        {
          ATerm c_8 (ATerm t)
          {
            ATerm n_118 = NULL;
            n_118 = t;
            if(((l_118 != NULL) && (l_118 != n_118)))
              _fail(n_118);
            else
              l_118 = n_118;
            return(t);
          }
          t = Program_1(t, c_8);
          return(t);
        }
        t = fetch_1(t, b_8);
      }
    }
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          t = not_null(l_118);
          return(t);
        }
        t = short_description_1(t, f_8);
        t = echo_0(t);
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        {
        }
      }
    {
      t = term_h_41;
      {
        t = echo_0(t);
        {
          t = term_k_41;
          {
            t = table_get_0(t);
            {
              ATerm g_8 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, g_8);
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm o_118 = NULL;
                  ATerm p_118 = NULL;
                  p_118 = t;
                  if(((o_118 != NULL) && (o_118 != p_118)))
                    _fail(p_118);
                  else
                    o_118 = p_118;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_118)), term_m_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_8);
                {
                  ATerm n_41 = t;
                  int o_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_118 = NULL;
                      ATerm r_118 = NULL;
                      ATerm i_8 (ATerm t)
                      {
                        t = not_null(l_118);
                        return(t);
                      }
                      t = long_description_1(t, i_8);
                      {
                        r_118 = t;
                        if(((q_118 != NULL) && (q_118 != r_118)))
                          _fail(r_118);
                        else
                          q_118 = r_118;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(q_118)), term_q_41);
                        t = echo_0(t);
                      }
                      LocalPopChoice(o_41);
                    }
                  else
                    {
                      t = n_41;
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
  ATerm r_41;
  r_41 = t;
  {
    ATerm z_118 = NULL;
    ATerm a_119 = NULL;
    a_119 = t;
    if(((z_118 != NULL) && (z_118 != a_119)))
      _fail(a_119);
    else
      z_118 = a_119;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, not_null(z_118)));
      t = printnl_0(t);
    }
  }
  t = r_41;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_102 (ATerm))
{
  ATerm s_41;
  s_41 = t;
  {
    t = i_102(t);
    t = debug_0(t);
  }
  t = s_41;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm h_119 = NULL,i_119 = NULL;
  h_119 = t;
  g_119 :
  if(match_cons(h_119, sym_Undefined_1))
    {
      i_119 = ATgetArgument(h_119, 0);
      {
        ATerm l_119 = NULL,n_119 = NULL;
        ATerm m_119 = NULL;
        t = SSLgetAnnotations(not_null(h_119));
        {
          m_119 = t;
          if(((l_119 != NULL) && (l_119 != m_119)))
            _fail(m_119);
          else
            l_119 = m_119;
        }
        {
          t = not_null(i_119);
          {
            ATerm p_119 = NULL;
            t = c_75(t);
            {
              n_119 = t;
              {
                ATerm q_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_119)), not_null(l_119));
                {
                  q_119 = t;
                  if(((p_119 != NULL) && (p_119 != q_119)))
                    _fail(q_119);
                  else
                    p_119 = q_119;
                }
                t = not_null(p_119);
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
ATerm fetch_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm v_119 (ATerm t)
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_91, _id);
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = Cons_2(t, _id, v_119);
      }
    return(t);
  }
  t = v_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_103 (ATerm))
{
  t = fetch_1(t, k_103);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_120 = NULL;
  a_120 = t;
  z_119 :
  if(match_cons(a_120, sym_Help_0))
    {
      ATerm c_120 = NULL,e_120 = NULL;
      ATerm x_41;
      x_41 = t;
      {
        ATerm d_120 = NULL;
        t = SSLgetAnnotations(not_null(a_120));
        {
          d_120 = t;
          if(((c_120 != NULL) && (c_120 != d_120)))
            _fail(d_120);
          else
            c_120 = d_120;
        }
      }
      t = x_41;
      {
        ATerm f_120 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_120));
        {
          f_120 = t;
          if(((e_120 != NULL) && (e_120 != f_120)))
            _fail(f_120);
          else
            e_120 = f_120;
        }
        t = not_null(e_120);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_83(t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL;
  l_120 = t;
  k_120 :
  if(match_cons(l_120, sym__2))
    {
      m_120 = ATgetArgument(l_120, 0);
      n_120 = ATgetArgument(l_120, 1);
      t = SSL_table_get(not_null(m_120), not_null(n_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL;
  u_120 = t;
  t_120 :
  if(match_cons(u_120, sym__3))
    {
      v_120 = ATgetArgument(u_120, 0);
      w_120 = ATgetArgument(u_120, 1);
      x_120 = ATgetArgument(u_120, 2);
      {
        ATerm o_42;
        o_42 = t;
        {
          ATerm b_121 = NULL;
          ATerm c_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_120), not_null(w_120));
          {
            ATerm y_42 = t;
            int z_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_42);
              }
            else
              {
                t = y_42;
                t = (ATerm) ATempty;
              }
            {
              c_121 = t;
              if(((b_121 != NULL) && (b_121 != c_121)))
                _fail(c_121);
              else
                b_121 = c_121;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_120), not_null(w_120), (ATerm) ATinsert(CheckATermList(not_null(b_121)), not_null(x_120)));
            t = table_put_0(t);
          }
        }
        t = o_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_104 (ATerm))
{
  ATerm g_121 = NULL;
  ATerm h_121 = NULL;
  t = term_z_33;
  {
    t = p_104(t);
    {
      h_121 = t;
      if(((g_121 != NULL) && (g_121 != h_121)))
        _fail(h_121);
      else
        g_121 = h_121;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_41, term_j_41, not_null(g_121));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
  n_121 = t;
  m_121 :
  if(match_string(n_121, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(n_121) == AT_LIST) && !(ATisEmpty(n_121))))
        {
          o_121 = ATgetFirst((ATermList) n_121);
          p_121 = (ATerm) ATgetNext((ATermList) n_121);
          {
            ATerm s_121 = NULL;
            ATerm b_43;
            b_43 = t;
            {
              t = not_null(o_121);
              t = a_0(t);
            }
            t = b_43;
            {
              ATerm t_121 = NULL;
              t = term_z_33;
              {
                t = d_0(t);
                {
                  t_121 = t;
                  if(((s_121 != NULL) && (s_121 != t_121)))
                    _fail(t_121);
                  else
                    s_121 = t_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_121)), not_null(s_121));
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
  ATerm j_8 (ATerm t)
  {
    ATerm y_121 = NULL;
    y_121 = t;
    x_121 :
    if(!(match_string(y_121, "--help")))
      {
        if(!(match_string(y_121, "-h")))
          {
            if(!(match_string(y_121, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    t = term_d_43;
    {
      t = set_config_0(t);
      t = term_e_43;
    }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_f_43;
    return(t);
  }
  t = Option_3(t, j_8, k_8, l_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_122 = NULL,c_122 = NULL,d_122 = NULL;
  b_122 = t;
  a_122 :
  if(((ATgetType(b_122) == AT_LIST) && !(ATisEmpty(b_122))))
    {
      c_122 = ATgetFirst((ATermList) b_122);
      d_122 = (ATerm) ATgetNext((ATermList) b_122);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_122)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_122)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm n_122 = NULL,o_122 = NULL,p_122 = NULL;
  n_122 = t;
  m_122 :
  if(((ATgetType(n_122) == AT_LIST) && !(ATisEmpty(n_122))))
    {
      o_122 = ATgetFirst((ATermList) n_122);
      p_122 = (ATerm) ATgetNext((ATermList) n_122);
      {
        ATerm t_122 = NULL,v_122 = NULL;
        ATerm u_122 = NULL;
        t = SSLgetAnnotations(not_null(n_122));
        {
          u_122 = t;
          if(((t_122 != NULL) && (t_122 != u_122)))
            _fail(u_122);
          else
            t_122 = u_122;
        }
        {
          t = not_null(o_122);
          {
            ATerm x_122 = NULL;
            t = f_70(t);
            {
              v_122 = t;
              {
                t = not_null(p_122);
                {
                  ATerm z_122 = NULL;
                  t = g_70(t);
                  {
                    x_122 = t;
                    {
                      ATerm a_123 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_122)), not_null(v_122)), not_null(t_122));
                      {
                        a_123 = t;
                        if(((z_122 != NULL) && (z_122 != a_123)))
                          _fail(a_123);
                        else
                          z_122 = a_123;
                      }
                      t = not_null(z_122);
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
  ATerm k_123 = NULL;
  k_123 = t;
  j_123 :
  if(((ATgetType(k_123) == AT_LIST) && ATisEmpty(k_123)))
    {
      {
        ATerm m_123 = NULL,o_123 = NULL;
        ATerm j_43;
        j_43 = t;
        {
          ATerm n_123 = NULL;
          t = SSLgetAnnotations(not_null(k_123));
          {
            n_123 = t;
            if(((m_123 != NULL) && (m_123 != n_123)))
              _fail(n_123);
            else
              m_123 = n_123;
          }
        }
        t = j_43;
        {
          ATerm p_123 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_123));
          {
            p_123 = t;
            if(((o_123 != NULL) && (o_123 != p_123)))
              _fail(p_123);
            else
              o_123 = p_123;
          }
          t = not_null(o_123);
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
  ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
  v_123 = t;
  u_123 :
  if(match_cons(v_123, sym__2))
    {
      w_123 = ATgetArgument(v_123, 0);
      x_123 = ATgetArgument(v_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_33, not_null(w_123), not_null(x_123));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_104 (ATerm))
{
  ATerm k_43;
  k_43 = t;
  {
    ATerm l_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_43;
        t = n_104(t);
        LocalPopChoice(q_43);
      }
    else
      {
        t = l_43;
        {
        }
      }
  }
  t = k_43;
  {
    ATerm m_8 (ATerm t)
    {
      ATerm f_124 = NULL;
      ATerm s_43;
      s_43 = t;
      {
        ATerm d_124 = NULL;
        ATerm e_124 = NULL;
        e_124 = t;
        if(((d_124 != NULL) && (d_124 != e_124)))
          _fail(e_124);
        else
          d_124 = e_124;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_37, not_null(d_124));
          t = set_config_0(t);
        }
      }
      t = s_43;
      {
        ATerm g_124 = NULL;
        g_124 = t;
        if(((f_124 != NULL) && (f_124 != g_124)))
          _fail(g_124);
        else
          f_124 = g_124;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_124));
      }
      return(t);
    }
    ATerm n_8 (ATerm t)
    {
      ATerm t_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_43);
            }
          else
            {
              t = v_43;
              {
                t = n_104(t);
                t = Cons_2(t, _id, n_8);
              }
            }
          LocalPopChoice(u_43);
        }
      else
        {
          t = t_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_8, n_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL;
  ATerm b_44;
  b_44 = t;
  {
    ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL;
    p_124 = t;
    l_124 :
    if(match_cons(p_124, sym__3))
      {
        q_124 = ATgetArgument(p_124, 0);
        r_124 = ATgetArgument(p_124, 1);
        s_124 = ATgetArgument(p_124, 2);
        {
          if(((m_124 != NULL) && (m_124 != q_124)))
            _fail(q_124);
          else
            m_124 = q_124;
          {
            if(((n_124 != NULL) && (n_124 != r_124)))
              _fail(r_124);
            else
              n_124 = r_124;
            {
              if(((o_124 != NULL) && (o_124 != s_124)))
                _fail(s_124);
              else
                o_124 = s_124;
              t = SSL_table_put(not_null(m_124), not_null(n_124), not_null(o_124));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_44;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_104 (ATerm))
{
  ATerm v_124 = NULL;
  ATerm c_44;
  c_44 = t;
  {
    t = term_d_44;
    t = table_put_0(t);
  }
  t = c_44;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm e_44 = t;
      int f_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_104(t);
          LocalPopChoice(f_44);
        }
      else
        {
          t = e_44;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_8);
    {
      ATerm g_44 = t;
      int h_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_44;
          i_44 = t;
          {
            ATerm j_44 = t;
            int k_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_43;
                t = get_config_0(t);
                LocalPopChoice(k_44);
              }
            else
              {
                t = j_44;
                t = fetch_1(t, Help_0);
              }
          }
          t = i_44;
          {
            t = system_usage_0(t);
            {
              t = term_i_34;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_44);
        }
      else
        {
          t = g_44;
          {
            ATerm n_44 = t;
            int s_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_8 (ATerm t)
                {
                  ATerm q_8 (ATerm t)
                  {
                    ATerm w_124 = NULL;
                    w_124 = t;
                    if(((v_124 != NULL) && (v_124 != w_124)))
                      _fail(w_124);
                    else
                      v_124 = w_124;
                    return(t);
                  }
                  t = Undefined_1(t, q_8);
                  return(t);
                }
                t = fetch_1(t, p_8);
                {
                  ATerm r_8 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_124)), term_x_44);
                    return(t);
                  }
                  t = say_1(t, r_8);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_18;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_44);
              }
            else
              {
                t = n_44;
                {
                }
              }
          }
        }
      {
        ATerm y_44;
        y_44 = t;
        {
          t = term_i_41;
          t = table_destroy_0(t);
        }
        t = y_44;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm))
{
  t = parse_options_1(t, i_110);
  {
    t = store_options_0(t);
    {
      t = k_110(t);
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_110);
            LocalPopChoice(a_45);
          }
        else
          {
            t = z_44;
            {
              ATerm b_45 = t;
              int c_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_110(t);
                  t = report_success_0(t);
                  LocalPopChoice(c_45);
                }
              else
                {
                  t = b_45;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_111(t);
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_110);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_8, b_111, c_111, t_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      ATerm g_45;
      g_45 = t;
      {
        ATerm z_124 = NULL;
        ATerm a_125 = NULL;
        t = term_o_37;
        {
          t = get_config_0(t);
          {
            a_125 = t;
            if(((z_124 != NULL) && (z_124 != a_125)))
              _fail(a_125);
            else
              z_124 = a_125;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, not_null(z_124)));
          t = printnl_0(t);
        }
      }
      t = g_45;
      return(t);
    }
    t = if_verbose2_1(t, v_8);
    return(t);
  }
  t = iowrap_4(t, t_110, u_110, v_110, u_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_110 (ATerm), ATerm s_110 (ATerm))
{
  t = iowrap_3(t, r_110, s_110, default_usage_0);
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

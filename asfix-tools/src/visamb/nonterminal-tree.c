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
ATerm term_x_17;
ATerm term_a_17;
ATerm term_k_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_r_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_d_5;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_a_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_a_10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_a_10);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, (ATerm) ATempty);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm LitToString_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm t_82 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_89 (ATerm));
ATerm Sym2Strs_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_74 (ATerm));
ATerm topdown_1 (ATerm, ATerm q_75 (ATerm));
ATerm _2 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_92 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_93 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_89 (ATerm), ATerm x_89 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm crush_2 (ATerm, ATerm f_87 (ATerm), ATerm g_87 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_93 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_97 (ATerm));
ATerm map_1 (ATerm, ATerm t_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_97 (ATerm));
ATerm Program_1 (ATerm, ATerm q_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_92 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_97 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_61 (ATerm), ATerm x_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_97 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_97 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_94 (ATerm));
ATerm nonterminal_tree_0 (ATerm);
ATerm main_0 (ATerm);
ATerm LitToString_0 (ATerm t)
{
  ATerm r_0 = NULL,f_1 = NULL;
  r_0 = t;
  q_0 :
  if(match_cons(r_0, sym_lit_1))
    {
      f_1 = ATgetArgument(r_0, 0);
      t = not_null(f_1);
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
ATerm De_Escape4_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  y_1 :
  if(((ATgetType(z_1) == AT_LIST) && ATisEmpty(z_1)))
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
  ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL;
  f_2 = t;
  e_2 :
  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
    {
      g_2 = ATgetFirst((ATermList) f_2);
      i_2 = (ATerm) ATgetNext((ATermList) f_2);
      {
        ATerm l_2 = NULL;
        ATerm m_2 = NULL;
        t = not_null(i_2);
        {
          t = De_Escape_0(t);
          {
            m_2 = t;
            if(((l_2 != NULL) && (l_2 != m_2)))
              _fail(m_2);
            else
              l_2 = m_2;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(l_2)), not_null(g_2));
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
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  v_2 = t;
  r_2 :
  if(((ATgetType(v_2) == AT_LIST) && !(ATisEmpty(v_2))))
    {
      w_2 = ATgetFirst((ATermList) v_2);
      x_2 = (ATerm) ATgetNext((ATermList) v_2);
      s_2 :
      if(match_int(w_2, 92))
        {
          t_2 :
          if(((ATgetType(x_2) == AT_LIST) && !(ATisEmpty(x_2))))
            {
              y_2 = ATgetFirst((ATermList) x_2);
              z_2 = (ATerm) ATgetNext((ATermList) x_2);
              u_2 :
              if(match_int(y_2, 92))
                {
                  ATerm b_3 = NULL;
                  ATerm c_3 = NULL;
                  t = not_null(z_2);
                  {
                    t = De_Escape_0(t);
                    {
                      c_3 = t;
                      if(((b_3 != NULL) && (b_3 != c_3)))
                        _fail(c_3);
                      else
                        b_3 = c_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_3)), term_y_4);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  l_3 = t;
  h_3 :
  if(((ATgetType(l_3) == AT_LIST) && !(ATisEmpty(l_3))))
    {
      m_3 = ATgetFirst((ATermList) l_3);
      n_3 = (ATerm) ATgetNext((ATermList) l_3);
      i_3 :
      if(match_int(m_3, 92))
        {
          j_3 :
          if(((ATgetType(n_3) == AT_LIST) && !(ATisEmpty(n_3))))
            {
              o_3 = ATgetFirst((ATermList) n_3);
              p_3 = (ATerm) ATgetNext((ATermList) n_3);
              k_3 :
              if(match_int(o_3, 34))
                {
                  ATerm r_3 = NULL;
                  ATerm s_3 = NULL;
                  t = not_null(p_3);
                  {
                    t = De_Escape_0(t);
                    {
                      s_3 = t;
                      if(((r_3 != NULL) && (r_3 != s_3)))
                        _fail(s_3);
                      else
                        r_3 = s_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_3)), term_d_5);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
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
                  t = De_Escape3_0(t);
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = i_5;
                  {
                    ATerm x_3 = NULL;
                    x_3 = t;
                    w_3 :
                    if(((ATgetType(x_3) == AT_LIST) && ATisEmpty(x_3)))
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
ATerm at_last_1 (ATerm t, ATerm t_82 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = t_82(t);
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        t = Cons_2(t, _id, z_3);
      }
    return(t);
  }
  t = z_3(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  b_4 :
  if(((ATgetType(c_4) == AT_LIST) && !(ATisEmpty(c_4))))
    {
      d_4 = ATgetFirst((ATermList) c_4);
      e_4 = (ATerm) ATgetNext((ATermList) c_4);
      t = not_null(e_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  i_4 :
  if(((ATgetType(j_4) == AT_LIST) && !(ATisEmpty(j_4))))
    {
      k_4 = ATgetFirst((ATermList) j_4);
      l_4 = (ATerm) ATgetNext((ATermList) j_4);
      t = not_null(k_4);
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
    ATerm m_5;
    m_5 = t;
    {
      ATerm t_4 = NULL;
      t = Hd_0(t);
      {
        t_4 = t;
        o_4 :
        if(!(match_int(t_4, 34)))
          {
            _fail(t);
          }
      }
    }
    t = m_5;
    {
      t = Tl_0(t);
      {
        ATerm b_0 (ATerm t)
        {
          ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
          u_4 = t;
          q_4 :
          if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
            {
              v_4 = ATgetFirst((ATermList) u_4);
              w_4 = (ATerm) ATgetNext((ATermList) u_4);
              r_4 :
              if(match_int(v_4, 34))
                {
                  s_4 :
                  if(((ATgetType(w_4) == AT_LIST) && ATisEmpty(w_4)))
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
        t = at_last_1(t, b_0);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, k_89);
              return(t);
            }
            t = Cons_2(t, k_89, c_0);
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
              a_5 = t;
              z_4 :
              if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
                {
                  b_5 = ATgetFirst((ATermList) a_5);
                  c_5 = (ATerm) ATgetNext((ATermList) a_5);
                  {
                    t = not_null(c_5);
                    t = filter_1(t, k_89);
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
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  u_6 = t;
  q_6 :
  if(match_cons(u_6, sym_cf_1))
    {
      s_6 = ATgetArgument(u_6, 0);
      {
        t = not_null(s_6);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(u_6, sym_lex_1))
        {
          s_6 = ATgetArgument(u_6, 0);
          {
            t = not_null(s_6);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(u_6, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_r_5);
            }
          else
            {
              if(match_cons(u_6, sym_seq_2))
                {
                  s_6 = ATgetArgument(u_6, 0);
                  t_6 = ATgetArgument(u_6, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(t_6)), not_null(s_6));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(u_6, sym_opt_1))
                    {
                      s_6 = ATgetArgument(u_6, 0);
                      {
                        t = not_null(s_6);
                        {
                          t = Sym2Strs_0(t);
                          {
                            ATerm e_0 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_s_5);
                              return(t);
                            }
                            t = at_end_1(t, e_0);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_6, sym_iter_1))
                        {
                          s_6 = ATgetArgument(u_6, 0);
                          {
                            t = not_null(s_6);
                            {
                              t = Sym2Strs_0(t);
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_t_5);
                                  return(t);
                                }
                                t = at_end_1(t, f_0);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(u_6, sym_iter_star_1))
                            {
                              s_6 = ATgetArgument(u_6, 0);
                              {
                                t = not_null(s_6);
                                {
                                  t = Sym2Strs_0(t);
                                  {
                                    ATerm m_0 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_u_5);
                                      return(t);
                                    }
                                    t = at_end_1(t, m_0);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(u_6, sym_iter_sep_2))
                                {
                                  s_6 = ATgetArgument(u_6, 0);
                                  t_6 = ATgetArgument(u_6, 1);
                                  {
                                    ATerm e_7 = NULL,g_7 = NULL;
                                    ATerm v_5;
                                    v_5 = t;
                                    {
                                      ATerm f_7 = NULL;
                                      t = not_null(s_6);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          f_7 = t;
                                          if(((e_7 != NULL) && (e_7 != f_7)))
                                            _fail(f_7);
                                          else
                                            e_7 = f_7;
                                        }
                                      }
                                    }
                                    t = v_5;
                                    {
                                      ATerm h_7 = NULL;
                                      t = not_null(t_6);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          h_7 = t;
                                          if(((g_7 != NULL) && (g_7 != h_7)))
                                            _fail(h_7);
                                          else
                                            g_7 = h_7;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_5)), not_null(g_7)), not_null(e_7));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_6, sym_iter_star_sep_2))
                                    {
                                      s_6 = ATgetArgument(u_6, 0);
                                      t_6 = ATgetArgument(u_6, 1);
                                      {
                                        ATerm k_7 = NULL,m_7 = NULL;
                                        ATerm w_5;
                                        w_5 = t;
                                        {
                                          ATerm l_7 = NULL;
                                          t = not_null(s_6);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              l_7 = t;
                                              if(((k_7 != NULL) && (k_7 != l_7)))
                                                _fail(l_7);
                                              else
                                                k_7 = l_7;
                                            }
                                          }
                                        }
                                        t = w_5;
                                        {
                                          ATerm n_7 = NULL;
                                          t = not_null(t_6);
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
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_5)), not_null(m_7)), not_null(k_7));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(u_6, sym_iter_n_2))
                                        {
                                          s_6 = ATgetArgument(u_6, 0);
                                          t_6 = ATgetArgument(u_6, 1);
                                          {
                                            ATerm p_7 = NULL;
                                            ATerm q_7 = NULL;
                                            t = not_null(s_6);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                q_7 = t;
                                                if(((p_7 != NULL) && (p_7 != q_7)))
                                                  _fail(q_7);
                                                else
                                                  p_7 = q_7;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_5)), not_null(p_7));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_6, sym_iter_sep_n_3))
                                            {
                                              s_6 = ATgetArgument(u_6, 0);
                                              t_6 = ATgetArgument(u_6, 1);
                                              r_6 = ATgetArgument(u_6, 2);
                                              {
                                                ATerm t_7 = NULL,v_7 = NULL;
                                                ATerm y_5;
                                                y_5 = t;
                                                {
                                                  ATerm u_7 = NULL;
                                                  t = not_null(s_6);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      u_7 = t;
                                                      if(((t_7 != NULL) && (t_7 != u_7)))
                                                        _fail(u_7);
                                                      else
                                                        t_7 = u_7;
                                                    }
                                                  }
                                                }
                                                t = y_5;
                                                {
                                                  ATerm w_7 = NULL;
                                                  t = not_null(t_6);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      w_7 = t;
                                                      if(((v_7 != NULL) && (v_7 != w_7)))
                                                        _fail(w_7);
                                                      else
                                                        v_7 = w_7;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_5)), not_null(v_7)), not_null(t_7));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(u_6, sym_set_1))
                                                {
                                                  s_6 = ATgetArgument(u_6, 0);
                                                  {
                                                    ATerm y_7 = NULL;
                                                    ATerm z_7 = NULL;
                                                    t = not_null(s_6);
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
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_7)), (ATerm) ATinsert(ATempty, term_z_5));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(u_6, sym_pair_2))
                                                    {
                                                      s_6 = ATgetArgument(u_6, 0);
                                                      t_6 = ATgetArgument(u_6, 1);
                                                      {
                                                        ATerm c_8 = NULL,e_8 = NULL;
                                                        ATerm a_6;
                                                        a_6 = t;
                                                        {
                                                          ATerm d_8 = NULL;
                                                          t = not_null(s_6);
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
                                                        t = a_6;
                                                        {
                                                          ATerm f_8 = NULL;
                                                          t = not_null(t_6);
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
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_8)), (ATerm) ATinsert(ATempty, term_b_6)), not_null(c_8));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_6, sym_func_2))
                                                        {
                                                          s_6 = ATgetArgument(u_6, 0);
                                                          t_6 = ATgetArgument(u_6, 1);
                                                          {
                                                            ATerm i_8 = NULL,k_8 = NULL;
                                                            ATerm c_6;
                                                            c_6 = t;
                                                            {
                                                              ATerm j_8 = NULL;
                                                              t = not_null(s_6);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    j_8 = t;
                                                                    if(((i_8 != NULL) && (i_8 != j_8)))
                                                                      _fail(j_8);
                                                                    else
                                                                      i_8 = j_8;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = c_6;
                                                            {
                                                              ATerm l_8 = NULL;
                                                              t = not_null(t_6);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  l_8 = t;
                                                                  if(((k_8 != NULL) && (k_8 != l_8)))
                                                                    _fail(l_8);
                                                                  else
                                                                    k_8 = l_8;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_8)), (ATerm) ATinsert(ATempty, term_d_6)), not_null(i_8));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_6, sym_alt_2))
                                                            {
                                                              s_6 = ATgetArgument(u_6, 0);
                                                              t_6 = ATgetArgument(u_6, 1);
                                                              {
                                                                ATerm o_8 = NULL,q_8 = NULL;
                                                                ATerm e_6;
                                                                e_6 = t;
                                                                {
                                                                  ATerm p_8 = NULL;
                                                                  t = not_null(s_6);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      p_8 = t;
                                                                      if(((o_8 != NULL) && (o_8 != p_8)))
                                                                        _fail(p_8);
                                                                      else
                                                                        o_8 = p_8;
                                                                    }
                                                                  }
                                                                }
                                                                t = e_6;
                                                                {
                                                                  ATerm r_8 = NULL;
                                                                  t = not_null(t_6);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      r_8 = t;
                                                                      if(((q_8 != NULL) && (q_8 != r_8)))
                                                                        _fail(r_8);
                                                                      else
                                                                        q_8 = r_8;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_8)), (ATerm) ATinsert(ATempty, term_f_6)), not_null(o_8));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(u_6, sym_perm_1))
                                                                {
                                                                  s_6 = ATgetArgument(u_6, 0);
                                                                  {
                                                                    ATerm t_8 = NULL;
                                                                    ATerm u_8 = NULL;
                                                                    t = not_null(s_6);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          u_8 = t;
                                                                          if(((t_8 != NULL) && (t_8 != u_8)))
                                                                            _fail(u_8);
                                                                          else
                                                                            t_8 = u_8;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(t_8)), term_g_6);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(u_6, sym_sort_1))
                                                                    {
                                                                      s_6 = ATgetArgument(u_6, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(s_6));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(u_6, sym_lit_1))
                                                                        {
                                                                          s_6 = ATgetArgument(u_6, 0);
                                                                          {
                                                                            ATerm x_8 = NULL;
                                                                            ATerm y_8 = NULL;
                                                                            t = not_null(s_6);
                                                                            {
                                                                              ATerm h_6 = t;
                                                                              int i_6 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = de_quote_0(t);
                                                                                  t = de_escape_0(t);
                                                                                  LocalPopChoice(i_6);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_6;
                                                                                  {
                                                                                  }
                                                                                }
                                                                              {
                                                                                y_8 = t;
                                                                                if(((x_8 != NULL) && (x_8 != y_8)))
                                                                                  _fail(y_8);
                                                                                else
                                                                                  x_8 = y_8;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(x_8));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(u_6, sym_label_2))
                                                                            {
                                                                              s_6 = ATgetArgument(u_6, 0);
                                                                              t_6 = ATgetArgument(u_6, 1);
                                                                              {
                                                                                ATerm a_9 = NULL;
                                                                                ATerm b_9 = NULL;
                                                                                t = not_null(s_6);
                                                                                {
                                                                                  ATerm j_6 = t;
                                                                                  int k_6 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = de_quote_0(t);
                                                                                      t = de_escape_0(t);
                                                                                      LocalPopChoice(k_6);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_6;
                                                                                      {
                                                                                      }
                                                                                    }
                                                                                  {
                                                                                    b_9 = t;
                                                                                    if(((a_9 != NULL) && (a_9 != b_9)))
                                                                                      _fail(b_9);
                                                                                    else
                                                                                      a_9 = b_9;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(a_9));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(u_6, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_l_6);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  u_10 = t;
  s_10 :
  if(match_cons(u_10, sym_appl_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      z_10 = ATgetArgument(u_10, 1);
      t_10 :
      if(match_cons(v_10, sym_prod_3))
        {
          w_10 = ATgetArgument(v_10, 0);
          x_10 = ATgetArgument(v_10, 1);
          y_10 = ATgetArgument(v_10, 2);
          {
            ATerm d_11 = NULL,h_11 = NULL;
            ATerm m_6;
            m_6 = t;
            {
              ATerm e_11 = NULL,g_11 = NULL;
              t = not_null(x_10);
              {
                ATerm f_11 = NULL;
                t = Sym2Strs_0(t);
                {
                  f_11 = t;
                  if(((e_11 != NULL) && (e_11 != f_11)))
                    _fail(f_11);
                  else
                    e_11 = f_11;
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_6)), not_null(e_11)), (ATerm) ATinsert(ATempty, term_n_6));
                  {
                    t = concat_0(t);
                    {
                      t = concat_strings_0(t);
                      {
                        g_11 = t;
                        if(((d_11 != NULL) && (d_11 != g_11)))
                          _fail(g_11);
                        else
                          d_11 = g_11;
                      }
                    }
                  }
                }
              }
            }
            t = m_6;
            {
              t = SSL_mkterm(not_null(d_11), not_null(z_10));
              {
                h_11 = t;
                t = not_null(h_11);
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
ATerm try_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_74(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_75 (ATerm))
{
  t = q_75(t);
  {
    ATerm n_0 (ATerm t)
    {
      t = topdown_1(t, q_75);
      return(t);
    }
    t = _all(t, n_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm z_11 = NULL,b_12 = NULL;
        ATerm a_12 = NULL;
        t = SSLgetAnnotations(not_null(t_11));
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
        {
          t = not_null(u_11);
          {
            ATerm d_12 = NULL;
            t = n_60(t);
            {
              b_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm f_12 = NULL;
                  t = o_60(t);
                  {
                    d_12 = t;
                    {
                      ATerm g_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_12), not_null(d_12)), not_null(z_11));
                      {
                        g_12 = t;
                        if(((f_12 != NULL) && (f_12 != g_12)))
                          _fail(g_12);
                        else
                          f_12 = g_12;
                      }
                      t = not_null(f_12);
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
  ATerm o_12 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm p_12 = NULL,q_12 = NULL;
      p_12 = t;
      n_12 :
      if(match_cons(p_12, sym_Program_1))
        {
          q_12 = ATgetArgument(p_12, 0);
          if(((o_12 != NULL) && (o_12 != q_12)))
            _fail(q_12);
          else
            o_12 = q_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(o_12)), term_x_6));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      {
        ATerm a_7;
        a_7 = t;
        t = SSL_printnl(not_null(v_12), not_null(w_12));
        t = a_7;
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
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_implode_string(not_null(b_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
        g_13 = t;
        f_13 :
        if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
          {
            h_13 = ATgetFirst((ATermList) g_13);
            i_13 = (ATerm) ATgetNext((ATermList) g_13);
            {
              t = not_null(h_13);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(i_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_0);
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
  ATerm s_13 = NULL;
  ATerm u_13 = NULL;
  s_13 = t;
  {
    ATerm v_13 = NULL;
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
    t = not_null(s_13);
    {
      v_13 = t;
      {
        t = SSL_explode_term(not_null(v_13));
        {
          x_13 = t;
          q_13 :
          if(match_cons(x_13, sym__2))
            {
              y_13 = ATgetArgument(x_13, 0);
              z_13 = ATgetArgument(x_13, 1);
              r_13 :
              if(match_string(y_13, ""))
                {
                  if(((u_13 != NULL) && (u_13 != z_13)))
                    _fail(z_13);
                  else
                    u_13 = z_13;
                }
              else
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
      t = not_null(u_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm d_14 (ATerm t)
  {
    ATerm d_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_14);
        LocalPopChoice(i_7);
      }
    else
      {
        t = d_7;
        {
          t = Nil_0(t);
          t = i_82(t);
        }
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym__2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        t = not_null(h_14);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(i_14);
            return(t);
          }
          t = at_end_1(t, s_0);
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
  ATerm j_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = j_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_explode_string(not_null(n_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm x_7;
  x_7 = t;
  {
    ATerm s_14 = NULL,u_14 = NULL;
    ATerm a_8;
    a_8 = t;
    {
      ATerm t_14 = NULL;
      t = r_92(t);
      {
        t_14 = t;
        if(((s_14 != NULL) && (s_14 != t_14)))
          _fail(t_14);
        else
          s_14 = t_14;
      }
    }
    t = a_8;
    {
      ATerm v_14 = NULL;
      v_14 = t;
      if(((u_14 != NULL) && (u_14 != v_14)))
        _fail(v_14);
      else
        u_14 = v_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(s_14)));
        t = printnl_0(t);
      }
    }
  }
  t = x_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_is_string(not_null(z_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = b_8;
      {
        ATerm h_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm n_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = n_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(m_8);
          }
        else
          {
            t = h_8;
            {
              ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
              i_15 = t;
              h_15 :
              if(match_cons(i_15, sym_Path_1))
                {
                  j_15 = ATgetArgument(i_15, 0);
                  t = not_null(j_15);
                }
              else
                {
                  if(match_cons(i_15, sym_Var_1))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      {
                        t = not_null(j_15);
                        {
                          ATerm v_8 = t;
                          int w_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_8);
                            }
                          else
                            {
                              t = v_8;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_z_8;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_15, sym_Prefix_2))
                        {
                          j_15 = ATgetArgument(i_15, 0);
                          k_15 = ATgetArgument(i_15, 1);
                          {
                            ATerm p_15 = NULL,r_15 = NULL;
                            ATerm c_9;
                            c_9 = t;
                            {
                              ATerm q_15 = NULL;
                              t = not_null(j_15);
                              {
                                t = eval_config_0(t);
                                {
                                  q_15 = t;
                                  if(((p_15 != NULL) && (p_15 != q_15)))
                                    _fail(q_15);
                                  else
                                    p_15 = q_15;
                                }
                              }
                            }
                            t = c_9;
                            {
                              ATerm s_15 = NULL;
                              t = not_null(k_15);
                              {
                                t = eval_config_0(t);
                                {
                                  s_15 = t;
                                  if(((r_15 != NULL) && (r_15 != s_15)))
                                    _fail(s_15);
                                  else
                                    r_15 = s_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(r_15));
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
  ATerm a_16 = NULL;
  a_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(a_16));
    {
      t = table_get_0(t);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_9;
              g_9 = t;
              {
                ATerm c_16 = NULL;
                ATerm d_16 = NULL;
                d_16 = t;
                if(((c_16 != NULL) && (c_16 != d_16)))
                  _fail(d_16);
                else
                  c_16 = d_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(a_16), not_null(c_16));
                  t = table_put_0(t);
                }
              }
              t = g_9;
            }
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9;
      j_9 = t;
      {
        ATerm h_16 = NULL;
        ATerm i_16 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            i_16 = t;
            if(((h_16 != NULL) && (h_16 != i_16)))
              _fail(i_16);
            else
              h_16 = i_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_l_9);
          t = geq_0(t);
        }
      }
      t = j_9;
      t = o_95(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      t = SSL_WriteToTextFile(not_null(n_16), not_null(o_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t = SSL_WriteToBinaryFile(not_null(v_16), not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_17 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm f_17 = NULL,g_17 = NULL;
            f_17 = t;
            b_17 :
            if(match_cons(f_17, sym_Output_1))
              {
                g_17 = ATgetArgument(f_17, 0);
                if(((e_17 != NULL) && (e_17 != g_17)))
                  _fail(g_17);
                else
                  e_17 = g_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_0);
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm h_17 = NULL;
            t = term_p_9;
            {
              h_17 = t;
              if(((e_17 != NULL) && (e_17 != h_17)))
                _fail(h_17);
              else
                e_17 = h_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_0, _id);
  }
  t = m_9;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = not_null(e_17);
        return(t);
      }
      t = split_2(t, y_0, _id);
      return(t);
    }
    t = _2(t, _id, x_0);
    {
      ATerm q_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm i_17 = NULL;
              i_17 = t;
              d_17 :
              if(!(match_cons(i_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, a_1);
            return(t);
          }
          t = _2(t, z_0, WriteToBinaryFile_0);
          LocalPopChoice(r_9);
        }
      else
        {
          t = q_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  ATerm s_9;
  s_9 = t;
  t = dtime_0(t);
  t = s_9;
  {
    t = v_93(t);
    {
      ATerm t_9;
      t_9 = t;
      {
        ATerm p_17 = NULL;
        t = dtime_0(t);
        {
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
        }
      }
      t = t_9;
      {
        q_17 = t;
        n_17 :
        if(match_cons(q_17, sym__2))
          {
            r_17 = ATgetArgument(q_17, 0);
            s_17 = ATgetArgument(q_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_17))), not_null(s_17));
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
  ATerm y_17 = NULL;
  y_17 = t;
  t = SSL_ReadFromFile(not_null(y_17));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_89 (ATerm), ATerm x_89 (ATerm))
{
  ATerm d_18 = NULL,f_18 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm e_18 = NULL;
    t = w_89(t);
    {
      e_18 = t;
      if(((d_18 != NULL) && (d_18 != e_18)))
        _fail(e_18);
      else
        d_18 = e_18;
    }
  }
  t = u_9;
  {
    ATerm g_18 = NULL;
    t = x_89(t);
    {
      g_18 = t;
      if(((f_18 != NULL) && (f_18 != g_18)))
        _fail(g_18);
      else
        f_18 = g_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(f_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_18 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm n_18 = NULL,o_18 = NULL;
          n_18 = t;
          k_18 :
          if(match_cons(n_18, sym_Input_1))
            {
              o_18 = ATgetArgument(n_18, 0);
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, b_1);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm p_18 = NULL;
          t = term_y_9;
          {
            p_18 = t;
            if(((m_18 != NULL) && (m_18 != p_18)))
              _fail(p_18);
            else
              m_18 = p_18;
          }
        }
      }
  }
  t = v_9;
  {
    ATerm c_1 (ATerm t)
    {
      t = not_null(m_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm t_18 = NULL;
    t_18 = t;
    s_18 :
    if(!(match_string(t_18, "-v")))
      {
        if(!(match_string(t_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_b_10;
    t = set_config_0(t);
    t = term_c_10;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = term_d_10;
    return(t);
  }
  t = Option_3(t, d_1, e_1, g_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm w_18 = NULL;
    w_18 = t;
    u_18 :
    if(!(match_string(w_18, "-k")))
      {
        if(!(match_string(w_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm x_18 = NULL;
      ATerm y_18 = NULL;
      t = string_to_int_0(t);
      {
        y_18 = t;
        if(((x_18 != NULL) && (x_18 != y_18)))
          _fail(y_18);
        else
          x_18 = y_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(x_18));
        t = set_config_0(t);
      }
    }
    t = e_10;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  t = ArgOption_3(t, h_1, i_1, j_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_string_to_int(not_null(b_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm j_19 = NULL;
        j_19 = t;
        e_19 :
        if(!(match_string(j_19, "-S")))
          {
            if(!(match_string(j_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_k_10;
        t = set_config_0(t);
        t = term_l_10;
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      t = Option_3(t, k_1, l_1, m_1);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm k_19 = NULL;
              k_19 = t;
              f_19 :
              if(!(match_string(k_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm n_19 = NULL;
              ATerm p_10;
              p_10 = t;
              {
                ATerm l_19 = NULL;
                ATerm m_19 = NULL;
                t = string_to_int_0(t);
                {
                  m_19 = t;
                  if(((l_19 != NULL) && (l_19 != m_19)))
                    _fail(m_19);
                  else
                    l_19 = m_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(l_19));
                  t = set_config_0(t);
                }
              }
              t = p_10;
              {
                ATerm o_19 = NULL;
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_19));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_q_10;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm q_1 (ATerm t)
              {
                ATerm p_19 = NULL;
                p_19 = t;
                i_19 :
                if(!(match_string(p_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_a_11;
                t = set_config_0(t);
                t = term_b_11;
                return(t);
              }
              ATerm s_1 (ATerm t)
              {
                t = term_c_11;
                return(t);
              }
              t = Option_3(t, q_1, r_1, s_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm v_19 = NULL;
    v_19 = t;
    s_19 :
    if(!(match_string(v_19, "-o")))
      {
        if(!(match_string(v_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm y_19 = NULL;
    ATerm m_11;
    m_11 = t;
    {
      ATerm w_19 = NULL;
      ATerm x_19 = NULL;
      x_19 = t;
      if(((w_19 != NULL) && (w_19 != x_19)))
        _fail(x_19);
      else
        w_19 = x_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(w_19));
        t = set_config_0(t);
      }
    }
    t = m_11;
    {
      ATerm z_19 = NULL;
      z_19 = t;
      if(((y_19 != NULL) && (y_19 != z_19)))
        _fail(z_19);
      else
        y_19 = z_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_19));
    }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  t = ArgOption_3(t, t_1, u_1, v_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm w_1 (ATerm t)
        {
          ATerm d_20 = NULL;
          d_20 = t;
          c_20 :
          if(!(match_string(d_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = term_w_11;
          t = set_config_0(t);
          t = term_x_11;
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = Option_3(t, w_1, x_1, a_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  h_20 :
  if(match_string(j_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
        {
          k_20 = ATgetFirst((ATermList) j_20);
          l_20 = (ATerm) ATgetNext((ATermList) j_20);
          i_20 :
          if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
            {
              m_20 = ATgetFirst((ATermList) l_20);
              n_20 = (ATerm) ATgetNext((ATermList) l_20);
              {
                ATerm r_20 = NULL;
                ATerm c_12;
                c_12 = t;
                {
                  t = not_null(k_20);
                  t = j_0(t);
                }
                t = c_12;
                {
                  ATerm s_20 = NULL;
                  t = not_null(m_20);
                  {
                    t = k_0(t);
                    {
                      s_20 = t;
                      if(((r_20 != NULL) && (r_20 != s_20)))
                        _fail(s_20);
                      else
                        r_20 = s_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_20)), not_null(r_20));
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
  ATerm b_2 (ATerm t)
  {
    ATerm z_20 = NULL;
    z_20 = t;
    w_20 :
    if(!(match_string(z_20, "-i")))
      {
        if(!(match_string(z_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm c_21 = NULL;
    ATerm e_12;
    e_12 = t;
    {
      ATerm a_21 = NULL;
      ATerm b_21 = NULL;
      b_21 = t;
      if(((a_21 != NULL) && (a_21 != b_21)))
        _fail(b_21);
      else
        a_21 = b_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(a_21));
        t = set_config_0(t);
      }
    }
    t = e_12;
    {
      ATerm d_21 = NULL;
      d_21 = t;
      if(((c_21 != NULL) && (c_21 != d_21)))
        _fail(d_21);
      else
        c_21 = d_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_21));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_r_12));
  {
    t = printnl_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  t = SSL_TicksToSeconds(not_null(h_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym__2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm s_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_21), not_null(o_21));
            LocalPopChoice(x_12);
          }
        else
          {
            t = s_12;
            t = SSL_addr(not_null(n_21), not_null(o_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_88(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
        v_21 = t;
        u_21 :
        if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
          {
            w_21 = ATgetFirst((ATermList) v_21);
            x_21 = (ATerm) ATgetNext((ATermList) v_21);
            {
              ATerm a_22 = NULL;
              ATerm b_22 = NULL;
              t = not_null(x_21);
              {
                t = foldr_2(t, h_88, i_88);
                {
                  b_22 = t;
                  if(((a_22 != NULL) && (a_22 != b_22)))
                    _fail(b_22);
                  else
                    a_22 = b_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), not_null(a_22));
                t = i_88(t);
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
ATerm crush_2 (ATerm t, ATerm f_87 (ATerm), ATerm g_87 (ATerm))
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
          h_22 :
          if(match_cons(n_22, sym__2))
            {
              o_22 = ATgetArgument(n_22, 0);
              p_22 = ATgetArgument(n_22, 1);
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
      }
    }
    {
      t = not_null(k_22);
      t = foldr_2(t, f_87, g_87);
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
    ATerm h_2 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = crush_2(t, h_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm a_13;
        a_13 = t;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_22), not_null(x_22));
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              t = SSL_gtr(not_null(w_22), not_null(x_22));
            }
        }
        t = a_13;
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
  ATerm d_23 = NULL;
  ATerm e_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
      e_23 = t;
      c_23 :
      if(match_cons(e_23, sym__2))
        {
          f_23 = ATgetArgument(e_23, 0);
          g_23 = ATgetArgument(e_23, 1);
          {
            if(((d_23 != NULL) && (d_23 != f_23)))
              _fail(f_23);
            else
              d_23 = f_23;
            if(((d_23 != NULL) && (d_23 != g_23)))
              _fail(g_23);
            else
              d_23 = g_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_13);
    }
  else
    {
      t = e_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13;
      m_13 = t;
      {
        ATerm j_23 = NULL;
        ATerm k_23 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            k_23 = t;
            if(((j_23 != NULL) && (j_23 != k_23)))
              _fail(k_23);
            else
              j_23 = k_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), term_z_6);
          t = geq_0(t);
        }
      }
      t = m_13;
      t = n_95(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm o_23 = NULL,q_23 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm p_23 = NULL;
      t = run_time_0(t);
      {
        p_23 = t;
        if(((o_23 != NULL) && (o_23 != p_23)))
          _fail(p_23);
        else
          o_23 = p_23;
      }
    }
    t = n_13;
    {
      ATerm r_23 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_13), not_null(o_23)), term_p_13), not_null(q_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_2);
  {
    t = term_j_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_23 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_Version_0))
    {
      ATerm a_24 = NULL,c_24 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm b_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
        }
      }
      t = w_13;
      {
        ATerm d_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_24));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
        t = not_null(c_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_93 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm c_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_14);
            }
          else
            {
              t = c_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_2);
  t = t_93(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  t = SSL_table_create(not_null(i_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  {
    ATerm j_14;
    j_14 = t;
    {
      t = term_k_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, not_null(m_24));
          t = table_put_0(t);
        }
      }
    }
    t = j_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_table_destroy(not_null(q_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = SSL_exit(not_null(u_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(((ATgetType(y_24) == AT_LIST) && ATisEmpty(y_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          a_25 = (ATerm) ATgetNext((ATermList) y_24);
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
  ATerm m_14;
  m_14 = t;
  {
    ATerm d_25 = NULL;
    ATerm g_25 = NULL;
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm e_25 = NULL;
          ATerm f_25 = NULL;
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
          t = (ATerm) ATinsert(ATempty, not_null(e_25));
        }
      }
    {
      g_25 = t;
      if(((d_25 != NULL) && (d_25 != g_25)))
        _fail(g_25);
      else
        d_25 = g_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(d_25));
      t = printnl_0(t);
    }
  }
  t = m_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_97 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm j_25 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = Cons_2(t, t_81, j_25);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  p_25 :
  if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
    {
      q_25 = ATgetFirst((ATermList) s_25);
      r_25 = (ATerm) ATgetNext((ATermList) s_25);
      {
        ATerm v_25 = NULL;
        t = not_null(r_25);
        {
          ATerm w_14;
          w_14 = t;
          {
            ATerm w_25 = NULL,y_25 = NULL,a_26 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm x_25 = NULL;
              t = i_0(t);
              {
                x_25 = t;
                if(((w_25 != NULL) && (w_25 != x_25)))
                  _fail(x_25);
                else
                  w_25 = x_25;
              }
            }
            t = x_14;
            {
              ATerm z_25 = NULL;
              t = not_null(q_25);
              {
                t = h_0(t);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_25)), not_null(y_25));
                {
                  a_26 = t;
                  if(((v_25 != NULL) && (v_25 != a_26)))
                    _fail(a_26);
                  else
                    v_25 = a_26;
                }
              }
            }
          }
          t = w_14;
          {
            ATerm n_2 (ATerm t)
            {
              t = not_null(v_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_25) == AT_LIST) && ATisEmpty(s_25)))
        {
          {
            t = term_a_10;
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
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_97 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_66 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Program_1))
    {
      m_26 = ATgetArgument(l_26, 0);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm t_26 = NULL;
            t = q_66(t);
            {
              r_26 = t;
              {
                ATerm u_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_26)), not_null(p_26));
                {
                  u_26 = t;
                  if(((t_26 != NULL) && (t_26 != u_26)))
                    _fail(u_26);
                  else
                    t_26 = u_26;
                }
                t = not_null(t_26);
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
  ATerm c_27 = NULL;
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
      }
      LocalPopChoice(a_15);
    }
  else
    {
      t = y_14;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm e_27 = NULL;
            e_27 = t;
            if(((c_27 != NULL) && (c_27 != e_27)))
              _fail(e_27);
            else
              c_27 = e_27;
            return(t);
          }
          t = Program_1(t, q_2);
          return(t);
        }
        t = fetch_1(t, p_2);
      }
    }
  {
    t = term_b_15;
    {
      t = echo_0(t);
      {
        t = term_e_15;
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, a_3);
            {
              ATerm d_3 (ATerm t)
              {
                ATerm f_27 = NULL;
                ATerm g_27 = NULL;
                g_27 = t;
                if(((f_27 != NULL) && (f_27 != g_27)))
                  _fail(g_27);
                else
                  f_27 = g_27;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_f_15);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, d_3);
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
  ATerm g_15;
  g_15 = t;
  {
    ATerm q_27 = NULL;
    ATerm r_27 = NULL;
    r_27 = t;
    if(((q_27 != NULL) && (q_27 != r_27)))
      _fail(r_27);
    else
      q_27 = r_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(q_27)));
      t = printnl_0(t);
    }
  }
  t = g_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_92 (ATerm))
{
  ATerm l_15;
  l_15 = t;
  {
    t = s_92(t);
    t = debug_0(t);
  }
  t = l_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Undefined_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(y_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(z_27);
          {
            ATerm g_28 = NULL;
            t = r_66(t);
            {
              e_28 = t;
              {
                ATerm h_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_28)), not_null(c_28));
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
                t = not_null(g_28);
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
ATerm fetch_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm m_28 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_82, _id);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = Cons_2(t, _id, m_28);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_96 (ATerm))
{
  t = fetch_1(t, q_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym_Help_0))
    {
      ATerm t_28 = NULL,v_28 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm u_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          u_28 = t;
          if(((t_28 != NULL) && (t_28 != u_28)))
            _fail(u_28);
          else
            t_28 = u_28;
        }
      }
      t = o_15;
      {
        ATerm b_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_28));
        {
          b_29 = t;
          if(((v_28 != NULL) && (v_28 != b_29)))
            _fail(b_29);
          else
            v_28 = b_29;
        }
        t = not_null(v_28);
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
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym__2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      t = SSL_table_get(not_null(i_29), not_null(j_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__3))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      y_29 = ATgetArgument(v_29, 2);
      {
        ATerm t_15;
        t_15 = t;
        {
          ATerm c_30 = NULL;
          ATerm d_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), not_null(x_29));
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
                t = (ATerm) ATempty;
              }
            {
              d_30 = t;
              if(((c_30 != NULL) && (c_30 != d_30)))
                _fail(d_30);
              else
                c_30 = d_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_29), not_null(x_29), (ATerm) ATinsert(CheckATermList(not_null(c_30)), not_null(y_29)));
            t = table_put_0(t);
          }
        }
        t = t_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_97 (ATerm))
{
  ATerm h_30 = NULL;
  ATerm i_30 = NULL;
  t = term_a_10;
  {
    t = v_97(t);
    {
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, not_null(h_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_string(o_30, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          p_30 = ATgetFirst((ATermList) o_30);
          q_30 = (ATerm) ATgetNext((ATermList) o_30);
          {
            ATerm t_30 = NULL;
            ATerm w_15;
            w_15 = t;
            {
              t = not_null(p_30);
              t = a_0(t);
            }
            t = w_15;
            {
              ATerm u_30 = NULL;
              t = term_a_10;
              {
                t = d_0(t);
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_30)), not_null(t_30));
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
  ATerm e_3 (ATerm t)
  {
    ATerm z_30 = NULL;
    z_30 = t;
    y_30 :
    if(!(match_string(z_30, "--help")))
      {
        if(!(match_string(z_30, "-h")))
          {
            if(!(match_string(z_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_y_15;
    {
      t = set_config_0(t);
      t = term_z_15;
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = Option_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
    {
      d_31 = ATgetFirst((ATermList) c_31);
      e_31 = (ATerm) ATgetNext((ATermList) c_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_61 (ATerm), ATerm x_61 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
    {
      p_31 = ATgetFirst((ATermList) o_31);
      q_31 = (ATerm) ATgetNext((ATermList) o_31);
      {
        ATerm u_31 = NULL,w_31 = NULL;
        ATerm v_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm y_31 = NULL;
            t = w_61(t);
            {
              w_31 = t;
              {
                t = not_null(q_31);
                {
                  ATerm a_32 = NULL;
                  t = x_61(t);
                  {
                    y_31 = t;
                    {
                      ATerm b_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_31)), not_null(w_31)), not_null(u_31));
                      {
                        b_32 = t;
                        if(((a_32 != NULL) && (a_32 != b_32)))
                          _fail(b_32);
                        else
                          a_32 = b_32;
                      }
                      t = not_null(a_32);
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
  ATerm l_32 = NULL;
  l_32 = t;
  k_32 :
  if(((ATgetType(l_32) == AT_LIST) && ATisEmpty(l_32)))
    {
      {
        ATerm n_32 = NULL,p_32 = NULL;
        ATerm e_16;
        e_16 = t;
        {
          ATerm o_32 = NULL;
          t = SSLgetAnnotations(not_null(l_32));
          {
            o_32 = t;
            if(((n_32 != NULL) && (n_32 != o_32)))
              _fail(o_32);
            else
              n_32 = o_32;
          }
        }
        t = e_16;
        {
          ATerm q_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_32));
          {
            q_32 = t;
            if(((p_32 != NULL) && (p_32 != q_32)))
              _fail(q_32);
            else
              p_32 = q_32;
          }
          t = not_null(p_32);
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
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(x_32), not_null(y_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_97 (ATerm))
{
  ATerm f_16;
  f_16 = t;
  {
    ATerm g_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_16;
        t = t_97(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = g_16;
        {
        }
      }
  }
  t = f_16;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm g_33 = NULL;
      ATerm p_16;
      p_16 = t;
      {
        ATerm e_33 = NULL;
        ATerm f_33 = NULL;
        f_33 = t;
        if(((e_33 != NULL) && (e_33 != f_33)))
          _fail(f_33);
        else
          e_33 = f_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(e_33));
          t = set_config_0(t);
        }
      }
      t = p_16;
      {
        ATerm h_33 = NULL;
        h_33 = t;
        if(((g_33 != NULL) && (g_33 != h_33)))
          _fail(h_33);
        else
          g_33 = h_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_33));
      }
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm q_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_16);
            }
          else
            {
              t = s_16;
              {
                t = t_97(t);
                t = Cons_2(t, _id, t_3);
              }
            }
          LocalPopChoice(r_16);
        }
      else
        {
          t = q_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_3, t_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  ATerm y_16;
  y_16 = t;
  {
    ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
    q_33 = t;
    m_33 :
    if(match_cons(q_33, sym__3))
      {
        r_33 = ATgetArgument(q_33, 0);
        s_33 = ATgetArgument(q_33, 1);
        t_33 = ATgetArgument(q_33, 2);
        {
          if(((n_33 != NULL) && (n_33 != r_33)))
            _fail(r_33);
          else
            n_33 = r_33;
          {
            if(((o_33 != NULL) && (o_33 != s_33)))
              _fail(s_33);
            else
              o_33 = s_33;
            {
              if(((p_33 != NULL) && (p_33 != t_33)))
                _fail(t_33);
              else
                p_33 = t_33;
              t = SSL_table_put(not_null(n_33), not_null(o_33), not_null(p_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm w_33 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    t = term_a_17;
    t = table_put_0(t);
  }
  t = z_16;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm c_17 = t;
      int j_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_97(t);
          LocalPopChoice(j_17);
        }
      else
        {
          t = c_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_17;
          m_17 = t;
          {
            ATerm t_17 = t;
            int u_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_15;
                t = get_config_0(t);
                LocalPopChoice(u_17);
              }
            else
              {
                t = t_17;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_17;
          {
            t = system_usage_0(t);
            {
              t = term_j_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm x_33 = NULL;
                    x_33 = t;
                    if(((w_33 != NULL) && (w_33 != x_33)))
                      _fail(x_33);
                    else
                      w_33 = x_33;
                    return(t);
                  }
                  t = Undefined_1(t, y_3);
                  return(t);
                }
                t = fetch_1(t, v_3);
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_33)), term_x_17);
                    return(t);
                  }
                  t = say_1(t, a_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                {
                }
              }
          }
        }
      {
        ATerm z_17;
        z_17 = t;
        {
          t = term_c_15;
          t = table_destroy_0(t);
        }
        t = z_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm))
{
  t = parse_options_1(t, z_93);
  {
    t = store_options_0(t);
    {
      t = b_94(t);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_94);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm c_18 = t;
              int h_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_94(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_18);
                }
              else
                {
                  t = c_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_94(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_94);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, f_4, s_94, t_94, g_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm l_18;
      l_18 = t;
      {
        ATerm a_34 = NULL;
        ATerm b_34 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            b_34 = t;
            if(((a_34 != NULL) && (a_34 != b_34)))
              _fail(b_34);
            else
              a_34 = b_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(a_34)));
          t = printnl_0(t);
        }
      }
      t = l_18;
      return(t);
    }
    t = if_verbose2_1(t, m_4);
    return(t);
  }
  t = iowrap_4(t, k_94, l_94, m_94, h_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm))
{
  t = iowrap_3(t, i_94, j_94, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = _2(t, _id, f_94);
    return(t);
  }
  t = iowrap_2(t, n_4, _fail);
  return(t);
}
ATerm nonterminal_tree_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ApplToSort_0(t);
              LocalPopChoice(z_18);
            }
          else
            {
              t = v_18;
              t = LitToString_0(t);
            }
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, x_4);
    return(t);
  }
  t = iowrap_1(t, p_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = nonterminal_tree_0(t);
  return(t);
}

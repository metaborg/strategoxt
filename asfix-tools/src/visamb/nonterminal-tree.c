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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_i_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_r_6;
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
ATerm term_z_4;
ATerm term_r_4;
void init_constant_terms (void)
{
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeInt(34);
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
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_p_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_p_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
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
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_p_11);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
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
ATerm at_last_1 (ATerm, ATerm w_81 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_88 (ATerm));
ATerm Sym2Strs_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_73 (ATerm));
ATerm topdown_1 (ATerm, ATerm t_74 (ATerm));
ATerm _2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_91 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_92 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_88 (ATerm), ATerm a_89 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_87 (ATerm), ATerm l_87 (ATerm));
ATerm crush_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_92 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_96 (ATerm));
ATerm map_1 (ATerm, ATerm w_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_96 (ATerm));
ATerm Program_1 (ATerm, ATerm s_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_91 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_95 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_60 (ATerm), ATerm z_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_96 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_93 (ATerm));
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_3)), term_r_4);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_3)), term_z_4);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm a_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = a_5;
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
ATerm at_last_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = w_81(t);
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
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(((ATgetType(k_4) == AT_LIST) && !(ATisEmpty(k_4))))
    {
      l_4 = ATgetFirst((ATermList) k_4);
      m_4 = (ATerm) ATgetNext((ATermList) k_4);
      t = not_null(l_4);
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
      ATerm v_4 = NULL;
      t = Hd_0(t);
      {
        v_4 = t;
        q_4 :
        if(!(match_int(v_4, 34)))
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
          ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
          w_4 = t;
          s_4 :
          if(((ATgetType(w_4) == AT_LIST) && !(ATisEmpty(w_4))))
            {
              x_4 = ATgetFirst((ATermList) w_4);
              y_4 = (ATerm) ATgetNext((ATermList) w_4);
              t_4 :
              if(match_int(x_4, 34))
                {
                  u_4 :
                  if(((ATgetType(y_4) == AT_LIST) && ATisEmpty(y_4)))
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
ATerm filter_1 (ATerm t, ATerm n_88 (ATerm))
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
              t = filter_1(t, n_88);
              return(t);
            }
            t = Cons_2(t, n_88, c_0);
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
              c_5 = t;
              b_5 :
              if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
                {
                  d_5 = ATgetFirst((ATermList) c_5);
                  e_5 = (ATerm) ATgetNext((ATermList) c_5);
                  {
                    t = not_null(e_5);
                    t = filter_1(t, n_88);
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
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  w_6 = t;
  s_6 :
  if(match_cons(w_6, sym_cf_1))
    {
      u_6 = ATgetArgument(w_6, 0);
      {
        t = not_null(u_6);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(w_6, sym_lex_1))
        {
          u_6 = ATgetArgument(w_6, 0);
          {
            t = not_null(u_6);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(w_6, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_r_5);
            }
          else
            {
              if(match_cons(w_6, sym_seq_2))
                {
                  u_6 = ATgetArgument(w_6, 0);
                  v_6 = ATgetArgument(w_6, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(v_6)), not_null(u_6));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(w_6, sym_opt_1))
                    {
                      u_6 = ATgetArgument(w_6, 0);
                      {
                        t = not_null(u_6);
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
                      if(match_cons(w_6, sym_iter_1))
                        {
                          u_6 = ATgetArgument(w_6, 0);
                          {
                            t = not_null(u_6);
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
                          if(match_cons(w_6, sym_iter_star_1))
                            {
                              u_6 = ATgetArgument(w_6, 0);
                              {
                                t = not_null(u_6);
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
                              if(match_cons(w_6, sym_iter_sep_2))
                                {
                                  u_6 = ATgetArgument(w_6, 0);
                                  v_6 = ATgetArgument(w_6, 1);
                                  {
                                    ATerm g_7 = NULL,i_7 = NULL;
                                    ATerm v_5;
                                    v_5 = t;
                                    {
                                      ATerm h_7 = NULL;
                                      t = not_null(u_6);
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
                                    }
                                    t = v_5;
                                    {
                                      ATerm j_7 = NULL;
                                      t = not_null(v_6);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          j_7 = t;
                                          if(((i_7 != NULL) && (i_7 != j_7)))
                                            _fail(j_7);
                                          else
                                            i_7 = j_7;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_5)), not_null(i_7)), not_null(g_7));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(w_6, sym_iter_star_sep_2))
                                    {
                                      u_6 = ATgetArgument(w_6, 0);
                                      v_6 = ATgetArgument(w_6, 1);
                                      {
                                        ATerm m_7 = NULL,o_7 = NULL;
                                        ATerm w_5;
                                        w_5 = t;
                                        {
                                          ATerm n_7 = NULL;
                                          t = not_null(u_6);
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
                                        }
                                        t = w_5;
                                        {
                                          ATerm p_7 = NULL;
                                          t = not_null(v_6);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              p_7 = t;
                                              if(((o_7 != NULL) && (o_7 != p_7)))
                                                _fail(p_7);
                                              else
                                                o_7 = p_7;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_5)), not_null(o_7)), not_null(m_7));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(w_6, sym_iter_n_2))
                                        {
                                          u_6 = ATgetArgument(w_6, 0);
                                          v_6 = ATgetArgument(w_6, 1);
                                          {
                                            ATerm r_7 = NULL;
                                            ATerm s_7 = NULL;
                                            t = not_null(u_6);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                s_7 = t;
                                                if(((r_7 != NULL) && (r_7 != s_7)))
                                                  _fail(s_7);
                                                else
                                                  r_7 = s_7;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_5)), not_null(r_7));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(w_6, sym_iter_sep_n_3))
                                            {
                                              u_6 = ATgetArgument(w_6, 0);
                                              v_6 = ATgetArgument(w_6, 1);
                                              t_6 = ATgetArgument(w_6, 2);
                                              {
                                                ATerm v_7 = NULL,x_7 = NULL;
                                                ATerm y_5;
                                                y_5 = t;
                                                {
                                                  ATerm w_7 = NULL;
                                                  t = not_null(u_6);
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
                                                }
                                                t = y_5;
                                                {
                                                  ATerm y_7 = NULL;
                                                  t = not_null(v_6);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      y_7 = t;
                                                      if(((x_7 != NULL) && (x_7 != y_7)))
                                                        _fail(y_7);
                                                      else
                                                        x_7 = y_7;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_5)), not_null(x_7)), not_null(v_7));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(w_6, sym_set_1))
                                                {
                                                  u_6 = ATgetArgument(w_6, 0);
                                                  {
                                                    ATerm a_8 = NULL;
                                                    ATerm b_8 = NULL;
                                                    t = not_null(u_6);
                                                    {
                                                      t = Sym2Strs_0(t);
                                                      {
                                                        b_8 = t;
                                                        if(((a_8 != NULL) && (a_8 != b_8)))
                                                          _fail(b_8);
                                                        else
                                                          a_8 = b_8;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_8)), (ATerm) ATinsert(ATempty, term_z_5));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(w_6, sym_pair_2))
                                                    {
                                                      u_6 = ATgetArgument(w_6, 0);
                                                      v_6 = ATgetArgument(w_6, 1);
                                                      {
                                                        ATerm e_8 = NULL,g_8 = NULL;
                                                        ATerm a_6;
                                                        a_6 = t;
                                                        {
                                                          ATerm f_8 = NULL;
                                                          t = not_null(u_6);
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
                                                        }
                                                        t = a_6;
                                                        {
                                                          ATerm h_8 = NULL;
                                                          t = not_null(v_6);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              h_8 = t;
                                                              if(((g_8 != NULL) && (g_8 != h_8)))
                                                                _fail(h_8);
                                                              else
                                                                g_8 = h_8;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_8)), (ATerm) ATinsert(ATempty, term_b_6)), not_null(e_8));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(w_6, sym_func_2))
                                                        {
                                                          u_6 = ATgetArgument(w_6, 0);
                                                          v_6 = ATgetArgument(w_6, 1);
                                                          {
                                                            ATerm k_8 = NULL,m_8 = NULL;
                                                            ATerm c_6;
                                                            c_6 = t;
                                                            {
                                                              ATerm l_8 = NULL;
                                                              t = not_null(u_6);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    l_8 = t;
                                                                    if(((k_8 != NULL) && (k_8 != l_8)))
                                                                      _fail(l_8);
                                                                    else
                                                                      k_8 = l_8;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = c_6;
                                                            {
                                                              ATerm n_8 = NULL;
                                                              t = not_null(v_6);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  n_8 = t;
                                                                  if(((m_8 != NULL) && (m_8 != n_8)))
                                                                    _fail(n_8);
                                                                  else
                                                                    m_8 = n_8;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_8)), (ATerm) ATinsert(ATempty, term_d_6)), not_null(k_8));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(w_6, sym_alt_2))
                                                            {
                                                              u_6 = ATgetArgument(w_6, 0);
                                                              v_6 = ATgetArgument(w_6, 1);
                                                              {
                                                                ATerm q_8 = NULL,s_8 = NULL;
                                                                ATerm e_6;
                                                                e_6 = t;
                                                                {
                                                                  ATerm r_8 = NULL;
                                                                  t = not_null(u_6);
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
                                                                }
                                                                t = e_6;
                                                                {
                                                                  ATerm t_8 = NULL;
                                                                  t = not_null(v_6);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      t_8 = t;
                                                                      if(((s_8 != NULL) && (s_8 != t_8)))
                                                                        _fail(t_8);
                                                                      else
                                                                        s_8 = t_8;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_8)), (ATerm) ATinsert(ATempty, term_f_6)), not_null(q_8));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(w_6, sym_perm_1))
                                                                {
                                                                  u_6 = ATgetArgument(w_6, 0);
                                                                  {
                                                                    ATerm v_8 = NULL;
                                                                    ATerm w_8 = NULL;
                                                                    t = not_null(u_6);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          w_8 = t;
                                                                          if(((v_8 != NULL) && (v_8 != w_8)))
                                                                            _fail(w_8);
                                                                          else
                                                                            v_8 = w_8;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(v_8)), term_g_6);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(w_6, sym_sort_1))
                                                                    {
                                                                      u_6 = ATgetArgument(w_6, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(u_6));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(w_6, sym_lit_1))
                                                                        {
                                                                          u_6 = ATgetArgument(w_6, 0);
                                                                          {
                                                                            ATerm z_8 = NULL;
                                                                            ATerm a_9 = NULL;
                                                                            t = not_null(u_6);
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
                                                                                a_9 = t;
                                                                                if(((z_8 != NULL) && (z_8 != a_9)))
                                                                                  _fail(a_9);
                                                                                else
                                                                                  z_8 = a_9;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(z_8));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(w_6, sym_label_2))
                                                                            {
                                                                              u_6 = ATgetArgument(w_6, 0);
                                                                              v_6 = ATgetArgument(w_6, 1);
                                                                              {
                                                                                ATerm c_9 = NULL;
                                                                                ATerm d_9 = NULL;
                                                                                t = not_null(u_6);
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
                                                                                    d_9 = t;
                                                                                    if(((c_9 != NULL) && (c_9 != d_9)))
                                                                                      _fail(d_9);
                                                                                    else
                                                                                      c_9 = d_9;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(c_9));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(w_6, sym_layout_0))
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
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  w_10 = t;
  u_10 :
  if(match_cons(w_10, sym_appl_2))
    {
      x_10 = ATgetArgument(w_10, 0);
      b_11 = ATgetArgument(w_10, 1);
      v_10 :
      if(match_cons(x_10, sym_prod_3))
        {
          y_10 = ATgetArgument(x_10, 0);
          z_10 = ATgetArgument(x_10, 1);
          a_11 = ATgetArgument(x_10, 2);
          {
            ATerm f_11 = NULL,j_11 = NULL;
            ATerm m_6;
            m_6 = t;
            {
              ATerm g_11 = NULL,i_11 = NULL;
              t = not_null(z_10);
              {
                ATerm h_11 = NULL;
                t = Sym2Strs_0(t);
                {
                  h_11 = t;
                  if(((g_11 != NULL) && (g_11 != h_11)))
                    _fail(h_11);
                  else
                    g_11 = h_11;
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_6)), not_null(g_11)), (ATerm) ATinsert(ATempty, term_n_6));
                  {
                    t = concat_0(t);
                    {
                      t = concat_strings_0(t);
                      {
                        i_11 = t;
                        if(((f_11 != NULL) && (f_11 != i_11)))
                          _fail(i_11);
                        else
                          f_11 = i_11;
                      }
                    }
                  }
                }
              }
            }
            t = m_6;
            {
              t = SSL_mkterm(not_null(f_11), not_null(b_11));
              {
                j_11 = t;
                t = not_null(j_11);
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
ATerm try_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_73(t);
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
ATerm topdown_1 (ATerm t, ATerm t_74 (ATerm))
{
  t = t_74(t);
  {
    ATerm n_0 (ATerm t)
    {
      t = topdown_1(t, t_74);
      return(t);
    }
    t = _all(t, n_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm b_12 = NULL,d_12 = NULL;
        ATerm c_12 = NULL;
        t = SSLgetAnnotations(not_null(v_11));
        {
          c_12 = t;
          if(((b_12 != NULL) && (b_12 != c_12)))
            _fail(c_12);
          else
            b_12 = c_12;
        }
        {
          t = not_null(w_11);
          {
            ATerm f_12 = NULL;
            t = p_59(t);
            {
              d_12 = t;
              {
                t = not_null(x_11);
                {
                  ATerm h_12 = NULL;
                  t = q_59(t);
                  {
                    f_12 = t;
                    {
                      ATerm i_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_12), not_null(f_12)), not_null(b_12));
                      {
                        i_12 = t;
                        if(((h_12 != NULL) && (h_12 != i_12)))
                          _fail(i_12);
                        else
                          h_12 = i_12;
                      }
                      t = not_null(h_12);
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
  ATerm q_12 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm r_12 = NULL,s_12 = NULL;
      r_12 = t;
      p_12 :
      if(match_cons(r_12, sym_Program_1))
        {
          s_12 = ATgetArgument(r_12, 0);
          if(((q_12 != NULL) && (q_12 != s_12)))
            _fail(s_12);
          else
            q_12 = s_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(q_12)), term_x_6));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym__2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      {
        ATerm a_7;
        a_7 = t;
        t = SSL_printnl(not_null(x_12), not_null(y_12));
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
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_implode_string(not_null(d_13));
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
        ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
        i_13 = t;
        h_13 :
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            j_13 = ATgetFirst((ATermList) i_13);
            k_13 = (ATerm) ATgetNext((ATermList) i_13);
            {
              t = not_null(j_13);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(k_13);
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
  ATerm u_13 = NULL;
  ATerm w_13 = NULL;
  u_13 = t;
  {
    ATerm x_13 = NULL;
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
    t = not_null(u_13);
    {
      x_13 = t;
      {
        t = SSL_explode_term(not_null(x_13));
        {
          z_13 = t;
          s_13 :
          if(match_cons(z_13, sym__2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              t_13 :
              if(match_string(a_14, ""))
                {
                  if(((w_13 != NULL) && (w_13 != b_14)))
                    _fail(b_14);
                  else
                    w_13 = b_14;
                }
              else
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
      t = not_null(w_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm f_14 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_14);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          t = Nil_0(t);
          t = l_81(t);
        }
      }
    return(t);
  }
  t = f_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        t = not_null(j_14);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(k_14);
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
  ATerm f_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = f_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = SSL_explode_string(not_null(p_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm l_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = l_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm t_7;
  t_7 = t;
  {
    ATerm u_14 = NULL,w_14 = NULL;
    ATerm u_7;
    u_7 = t;
    {
      ATerm v_14 = NULL;
      t = v_91(t);
      {
        v_14 = t;
        if(((u_14 != NULL) && (u_14 != v_14)))
          _fail(v_14);
        else
          u_14 = v_14;
      }
    }
    t = u_7;
    {
      ATerm x_14 = NULL;
      x_14 = t;
      if(((w_14 != NULL) && (w_14 != x_14)))
        _fail(x_14);
      else
        w_14 = x_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), not_null(u_14)));
        t = printnl_0(t);
      }
    }
  }
  t = t_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  t = SSL_is_string(not_null(b_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_7 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = z_7;
      {
        ATerm d_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm j_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = j_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(i_8);
          }
        else
          {
            t = d_8;
            {
              ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
              k_15 = t;
              j_15 :
              if(match_cons(k_15, sym_Path_1))
                {
                  l_15 = ATgetArgument(k_15, 0);
                  t = not_null(l_15);
                }
              else
                {
                  if(match_cons(k_15, sym_Var_1))
                    {
                      l_15 = ATgetArgument(k_15, 0);
                      {
                        t = not_null(l_15);
                        {
                          ATerm p_8 = t;
                          int u_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_8);
                            }
                          else
                            {
                              t = p_8;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_x_8;
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
                      if(match_cons(k_15, sym_Prefix_2))
                        {
                          l_15 = ATgetArgument(k_15, 0);
                          m_15 = ATgetArgument(k_15, 1);
                          {
                            ATerm r_15 = NULL,t_15 = NULL;
                            ATerm y_8;
                            y_8 = t;
                            {
                              ATerm s_15 = NULL;
                              t = not_null(l_15);
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
                            }
                            t = y_8;
                            {
                              ATerm u_15 = NULL;
                              t = not_null(m_15);
                              {
                                t = eval_config_0(t);
                                {
                                  u_15 = t;
                                  if(((t_15 != NULL) && (t_15 != u_15)))
                                    _fail(u_15);
                                  else
                                    t_15 = u_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), not_null(t_15));
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
  ATerm c_16 = NULL;
  c_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(c_16));
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
                ATerm e_16 = NULL;
                ATerm f_16 = NULL;
                f_16 = t;
                if(((e_16 != NULL) && (e_16 != f_16)))
                  _fail(f_16);
                else
                  e_16 = f_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(c_16), not_null(e_16));
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
ATerm if_verbose2_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9;
      j_9 = t;
      {
        ATerm j_16 = NULL;
        ATerm k_16 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            k_16 = t;
            if(((j_16 != NULL) && (j_16 != k_16)))
              _fail(k_16);
            else
              j_16 = k_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), term_l_9);
          t = geq_0(t);
        }
      }
      t = j_9;
      t = s_94(t);
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
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      t = SSL_WriteToTextFile(not_null(p_16), not_null(q_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      t = SSL_WriteToBinaryFile(not_null(x_16), not_null(y_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_17 = NULL;
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
            ATerm h_17 = NULL,i_17 = NULL;
            h_17 = t;
            d_17 :
            if(match_cons(h_17, sym_Output_1))
              {
                i_17 = ATgetArgument(h_17, 0);
                if(((g_17 != NULL) && (g_17 != i_17)))
                  _fail(i_17);
                else
                  g_17 = i_17;
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
            ATerm j_17 = NULL;
            t = term_p_9;
            {
              j_17 = t;
              if(((g_17 != NULL) && (g_17 != j_17)))
                _fail(j_17);
              else
                g_17 = j_17;
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
        t = not_null(g_17);
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
              ATerm k_17 = NULL;
              k_17 = t;
              f_17 :
              if(!(match_cons(k_17, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm z_92 (ATerm))
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  ATerm s_9;
  s_9 = t;
  t = dtime_0(t);
  t = s_9;
  {
    t = z_92(t);
    {
      ATerm t_9;
      t_9 = t;
      {
        ATerm r_17 = NULL;
        t = dtime_0(t);
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
      }
      t = t_9;
      {
        s_17 = t;
        p_17 :
        if(match_cons(s_17, sym__2))
          {
            t_17 = ATgetArgument(s_17, 0);
            u_17 = ATgetArgument(s_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_17))), not_null(u_17));
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
  ATerm a_18 = NULL;
  a_18 = t;
  t = SSL_ReadFromFile(not_null(a_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_88 (ATerm), ATerm a_89 (ATerm))
{
  ATerm f_18 = NULL,h_18 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm g_18 = NULL;
    t = z_88(t);
    {
      g_18 = t;
      if(((f_18 != NULL) && (f_18 != g_18)))
        _fail(g_18);
      else
        f_18 = g_18;
    }
  }
  t = u_9;
  {
    ATerm i_18 = NULL;
    t = a_89(t);
    {
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_18 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm p_18 = NULL,q_18 = NULL;
          p_18 = t;
          m_18 :
          if(match_cons(p_18, sym_Input_1))
            {
              q_18 = ATgetArgument(p_18, 0);
              if(((o_18 != NULL) && (o_18 != q_18)))
                _fail(q_18);
              else
                o_18 = q_18;
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
          ATerm r_18 = NULL;
          t = term_y_9;
          {
            r_18 = t;
            if(((o_18 != NULL) && (o_18 != r_18)))
              _fail(r_18);
            else
              o_18 = r_18;
          }
        }
      }
  }
  t = v_9;
  {
    ATerm c_1 (ATerm t)
    {
      t = not_null(o_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  t = SSL_string_to_int(not_null(v_18));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  d_19 = t;
  b_19 :
  if(match_string(d_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
        {
          e_19 = ATgetFirst((ATermList) d_19);
          f_19 = (ATerm) ATgetNext((ATermList) d_19);
          c_19 :
          if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
            {
              g_19 = ATgetFirst((ATermList) f_19);
              h_19 = (ATerm) ATgetNext((ATermList) f_19);
              {
                ATerm l_19 = NULL;
                ATerm z_9;
                z_9 = t;
                {
                  t = not_null(e_19);
                  t = j_0(t);
                }
                t = z_9;
                {
                  ATerm m_19 = NULL;
                  t = not_null(g_19);
                  {
                    t = k_0(t);
                    {
                      m_19 = t;
                      if(((l_19 != NULL) && (l_19 != m_19)))
                        _fail(m_19);
                      else
                        l_19 = m_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_19)), not_null(l_19));
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
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        ATerm f_20 = NULL;
        f_20 = t;
        q_19 :
        if(!(match_string(f_20, "-i")))
          {
            if(!(match_string(f_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        ATerm i_20 = NULL;
        ATerm c_10;
        c_10 = t;
        {
          ATerm g_20 = NULL;
          ATerm h_20 = NULL;
          h_20 = t;
          if(((g_20 != NULL) && (g_20 != h_20)))
            _fail(h_20);
          else
            g_20 = h_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(g_20));
            t = set_config_0(t);
          }
        }
        t = c_10;
        {
          ATerm j_20 = NULL;
          j_20 = t;
          if(((i_20 != NULL) && (i_20 != j_20)))
            _fail(j_20);
          else
            i_20 = j_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_20));
        }
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_e_10;
        return(t);
      }
      t = ArgOption_3(t, d_1, e_1, g_1);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm k_20 = NULL;
              k_20 = t;
              t_19 :
              if(!(match_string(k_20, "-o")))
                {
                  if(!(match_string(k_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm n_20 = NULL;
              ATerm h_10;
              h_10 = t;
              {
                ATerm l_20 = NULL;
                ATerm m_20 = NULL;
                m_20 = t;
                if(((l_20 != NULL) && (l_20 != m_20)))
                  _fail(m_20);
                else
                  l_20 = m_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(l_20));
                  t = set_config_0(t);
                }
              }
              t = h_10;
              {
                ATerm o_20 = NULL;
                o_20 = t;
                if(((n_20 != NULL) && (n_20 != o_20)))
                  _fail(o_20);
                else
                  n_20 = o_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_20));
              }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_j_10;
              return(t);
            }
            t = ArgOption_3(t, h_1, i_1, j_1);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm p_20 = NULL;
                    p_20 = t;
                    w_19 :
                    if(!(match_string(p_20, "-S")))
                      {
                        if(!(match_string(p_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_1 (ATerm t)
                  {
                    t = term_n_10;
                    t = set_config_0(t);
                    t = term_o_10;
                    return(t);
                  }
                  ATerm m_1 (ATerm t)
                  {
                    t = term_p_10;
                    return(t);
                  }
                  t = Option_3(t, k_1, l_1, m_1);
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  {
                    ATerm q_10 = t;
                    int r_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm q_20 = NULL;
                          q_20 = t;
                          x_19 :
                          if(!(match_string(q_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_1 (ATerm t)
                        {
                          ATerm t_20 = NULL;
                          ATerm s_10;
                          s_10 = t;
                          {
                            ATerm r_20 = NULL;
                            ATerm s_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_20 = t;
                              if(((r_20 != NULL) && (r_20 != s_20)))
                                _fail(s_20);
                              else
                                r_20 = s_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(r_20));
                              t = set_config_0(t);
                            }
                          }
                          t = s_10;
                          {
                            ATerm u_20 = NULL;
                            u_20 = t;
                            if(((t_20 != NULL) && (t_20 != u_20)))
                              _fail(u_20);
                            else
                              t_20 = u_20;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_20));
                          }
                          return(t);
                        }
                        ATerm p_1 (ATerm t)
                        {
                          t = term_t_10;
                          return(t);
                        }
                        t = ArgOption_3(t, n_1, o_1, p_1);
                        LocalPopChoice(r_10);
                      }
                    else
                      {
                        t = q_10;
                        {
                          ATerm c_11 = t;
                          int d_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_1 (ATerm t)
                              {
                                ATerm v_20 = NULL;
                                v_20 = t;
                                a_20 :
                                if(!(match_string(v_20, "-k")))
                                  {
                                    if(!(match_string(v_20, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_1 (ATerm t)
                              {
                                ATerm e_11;
                                e_11 = t;
                                {
                                  ATerm w_20 = NULL;
                                  ATerm x_20 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    x_20 = t;
                                    if(((w_20 != NULL) && (w_20 != x_20)))
                                      _fail(x_20);
                                    else
                                      w_20 = x_20;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(w_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_11;
                                return(t);
                              }
                              ATerm s_1 (ATerm t)
                              {
                                t = term_l_11;
                                return(t);
                              }
                              t = ArgOption_3(t, q_1, r_1, s_1);
                              LocalPopChoice(d_11);
                            }
                          else
                            {
                              t = c_11;
                              {
                                ATerm m_11 = t;
                                int n_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_1 (ATerm t)
                                    {
                                      ATerm y_20 = NULL;
                                      y_20 = t;
                                      c_20 :
                                      if(!(match_string(y_20, "-v")))
                                        {
                                          if(!(match_string(y_20, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm u_1 (ATerm t)
                                    {
                                      t = term_q_11;
                                      t = set_config_0(t);
                                      t = term_r_11;
                                      return(t);
                                    }
                                    ATerm v_1 (ATerm t)
                                    {
                                      t = term_s_11;
                                      return(t);
                                    }
                                    t = Option_3(t, t_1, u_1, v_1);
                                    LocalPopChoice(n_11);
                                  }
                                else
                                  {
                                    t = m_11;
                                    {
                                      ATerm t_11 = t;
                                      int y_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_1 (ATerm t)
                                          {
                                            ATerm z_20 = NULL;
                                            z_20 = t;
                                            d_20 :
                                            if(!(match_string(z_20, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm x_1 (ATerm t)
                                          {
                                            t = term_a_12;
                                            t = set_config_0(t);
                                            t = term_e_12;
                                            return(t);
                                          }
                                          ATerm a_2 (ATerm t)
                                          {
                                            t = term_g_12;
                                            return(t);
                                          }
                                          t = Option_3(t, w_1, x_1, a_2);
                                          LocalPopChoice(y_11);
                                        }
                                      else
                                        {
                                          t = t_11;
                                          {
                                            ATerm b_2 (ATerm t)
                                            {
                                              ATerm a_21 = NULL;
                                              a_21 = t;
                                              e_20 :
                                              if(!(match_string(a_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_2 (ATerm t)
                                            {
                                              t = term_k_12;
                                              t = set_config_0(t);
                                              t = term_l_12;
                                              return(t);
                                            }
                                            ATerm d_2 (ATerm t)
                                            {
                                              t = term_m_12;
                                              return(t);
                                            }
                                            t = Option_3(t, b_2, c_2, d_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, term_n_12));
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
  ATerm j_21 = NULL;
  j_21 = t;
  t = SSL_TicksToSeconds(not_null(j_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym__2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm o_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_21), not_null(q_21));
            LocalPopChoice(t_12);
          }
        else
          {
            t = o_12;
            t = SSL_addr(not_null(p_21), not_null(q_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_87 (ATerm), ATerm l_87 (ATerm))
{
  ATerm u_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_87(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = u_12;
      {
        ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
        x_21 = t;
        w_21 :
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            y_21 = ATgetFirst((ATermList) x_21);
            z_21 = (ATerm) ATgetNext((ATermList) x_21);
            {
              ATerm c_22 = NULL;
              ATerm d_22 = NULL;
              t = not_null(z_21);
              {
                t = foldr_2(t, k_87, l_87);
                {
                  d_22 = t;
                  if(((c_22 != NULL) && (c_22 != d_22)))
                    _fail(d_22);
                  else
                    c_22 = d_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), not_null(c_22));
                t = l_87(t);
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
ATerm crush_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  ATerm k_22 = NULL;
  ATerm m_22 = NULL;
  k_22 = t;
  {
    ATerm n_22 = NULL;
    ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
    t = not_null(k_22);
    {
      n_22 = t;
      {
        t = SSL_explode_term(not_null(n_22));
        {
          p_22 = t;
          j_22 :
          if(match_cons(p_22, sym__2))
            {
              q_22 = ATgetArgument(p_22, 0);
              r_22 = ATgetArgument(p_22, 1);
              if(((m_22 != NULL) && (m_22 != r_22)))
                _fail(r_22);
              else
                m_22 = r_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_22);
      t = foldr_2(t, i_86, j_86);
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
      t = term_m_10;
      return(t);
    }
    t = crush_2(t, h_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        ATerm a_13;
        a_13 = t;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_22), not_null(z_22));
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = SSL_gtr(not_null(y_22), not_null(z_22));
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
  ATerm f_23 = NULL;
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
      g_23 = t;
      e_23 :
      if(match_cons(g_23, sym__2))
        {
          h_23 = ATgetArgument(g_23, 0);
          i_23 = ATgetArgument(g_23, 1);
          {
            if(((f_23 != NULL) && (f_23 != h_23)))
              _fail(h_23);
            else
              f_23 = h_23;
            if(((f_23 != NULL) && (f_23 != i_23)))
              _fail(i_23);
            else
              f_23 = i_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm g_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13;
      m_13 = t;
      {
        ATerm l_23 = NULL;
        ATerm m_23 = NULL;
        t = term_k_9;
        {
          t = get_config_0(t);
          {
            m_23 = t;
            if(((l_23 != NULL) && (l_23 != m_23)))
              _fail(m_23);
            else
              l_23 = m_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), term_z_6);
          t = geq_0(t);
        }
      }
      t = m_13;
      t = r_94(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = g_13;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm q_23 = NULL,s_23 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm r_23 = NULL;
      t = run_time_0(t);
      {
        r_23 = t;
        if(((q_23 != NULL) && (q_23 != r_23)))
          _fail(r_23);
        else
          q_23 = r_23;
      }
    }
    t = n_13;
    {
      ATerm t_23 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_13), not_null(q_23)), term_p_13), not_null(s_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_2);
  {
    t = term_m_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Version_0))
    {
      ATerm c_24 = NULL,e_24 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
      }
      t = r_13;
      {
        ATerm f_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_24));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        t = not_null(e_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_92 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm v_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = v_13;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_14);
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
  t = x_92(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  t = SSL_table_create(not_null(k_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  {
    ATerm e_14;
    e_14 = t;
    {
      t = term_g_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_14, term_l_14, not_null(o_24));
          t = table_put_0(t);
        }
      }
    }
    t = e_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_table_destroy(not_null(s_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_exit(not_null(w_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(((ATgetType(a_25) == AT_LIST) && ATisEmpty(a_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
        {
          b_25 = ATgetFirst((ATermList) a_25);
          c_25 = (ATerm) ATgetNext((ATermList) a_25);
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
    ATerm f_25 = NULL;
    ATerm i_25 = NULL;
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm g_25 = NULL;
          ATerm h_25 = NULL;
          h_25 = t;
          if(((g_25 != NULL) && (g_25 != h_25)))
            _fail(h_25);
          else
            g_25 = h_25;
          t = (ATerm) ATinsert(ATempty, not_null(g_25));
        }
      }
    {
      i_25 = t;
      if(((f_25 != NULL) && (f_25 != i_25)))
        _fail(i_25);
      else
        f_25 = i_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(f_25));
      t = printnl_0(t);
    }
  }
  t = m_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm l_25 (ATerm t)
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
        t = Cons_2(t, w_80, l_25);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  r_25 :
  if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
    {
      s_25 = ATgetFirst((ATermList) u_25);
      t_25 = (ATerm) ATgetNext((ATermList) u_25);
      {
        ATerm x_25 = NULL;
        t = not_null(t_25);
        {
          ATerm s_14;
          s_14 = t;
          {
            ATerm y_25 = NULL,a_26 = NULL,c_26 = NULL;
            ATerm t_14;
            t_14 = t;
            {
              ATerm z_25 = NULL;
              t = i_0(t);
              {
                z_25 = t;
                if(((y_25 != NULL) && (y_25 != z_25)))
                  _fail(z_25);
                else
                  y_25 = z_25;
              }
            }
            t = t_14;
            {
              ATerm b_26 = NULL;
              t = not_null(s_25);
              {
                t = h_0(t);
                {
                  b_26 = t;
                  if(((a_26 != NULL) && (a_26 != b_26)))
                    _fail(b_26);
                  else
                    a_26 = b_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), not_null(a_26));
                {
                  c_26 = t;
                  if(((x_25 != NULL) && (x_25 != c_26)))
                    _fail(c_26);
                  else
                    x_25 = c_26;
                }
              }
            }
          }
          t = s_14;
          {
            ATerm n_2 (ATerm t)
            {
              t = not_null(x_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_25) == AT_LIST) && ATisEmpty(u_25)))
        {
          {
            t = term_p_11;
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
ATerm short_description_1 (ATerm t, ATerm u_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Program_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        ATerm s_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        {
          t = not_null(o_26);
          {
            ATerm v_26 = NULL;
            t = s_65(t);
            {
              t_26 = t;
              {
                ATerm w_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_26)), not_null(r_26));
                {
                  w_26 = t;
                  if(((v_26 != NULL) && (v_26 != w_26)))
                    _fail(w_26);
                  else
                    v_26 = w_26;
                }
                t = not_null(v_26);
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
  ATerm e_27 = NULL;
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_27 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm g_27 = NULL;
            g_27 = t;
            if(((e_27 != NULL) && (e_27 != g_27)))
              _fail(g_27);
            else
              e_27 = g_27;
            return(t);
          }
          t = Program_1(t, q_2);
          return(t);
        }
        t = fetch_1(t, p_2);
      }
    }
  {
    t = term_a_15;
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
                ATerm h_27 = NULL;
                ATerm n_27 = NULL;
                n_27 = t;
                if(((h_27 != NULL) && (h_27 != n_27)))
                  _fail(n_27);
                else
                  h_27 = n_27;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_27)), term_f_15);
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
    ATerm s_27 = NULL;
    ATerm t_27 = NULL;
    t_27 = t;
    if(((s_27 != NULL) && (s_27 != t_27)))
      _fail(t_27);
    else
      s_27 = t_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, not_null(s_27)));
      t = printnl_0(t);
    }
  }
  t = g_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm h_15;
  h_15 = t;
  {
    t = w_91(t);
    t = debug_0(t);
  }
  t = h_15;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_Undefined_1))
    {
      b_28 = ATgetArgument(a_28, 0);
      {
        ATerm e_28 = NULL,g_28 = NULL;
        ATerm f_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm i_28 = NULL;
            t = t_65(t);
            {
              g_28 = t;
              {
                ATerm j_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_28)), not_null(e_28));
                {
                  j_28 = t;
                  if(((i_28 != NULL) && (i_28 != j_28)))
                    _fail(j_28);
                  else
                    i_28 = j_28;
                }
                t = not_null(i_28);
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
ATerm fetch_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm o_28 (ATerm t)
  {
    ATerm i_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_81, _id);
        LocalPopChoice(n_15);
      }
    else
      {
        t = i_15;
        t = Cons_2(t, _id, o_28);
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_95 (ATerm))
{
  t = fetch_1(t, u_95);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym_Help_0))
    {
      ATerm a_29 = NULL,c_29 = NULL;
      ATerm o_15;
      o_15 = t;
      {
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(t_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
      }
      t = o_15;
      {
        ATerm d_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_29));
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
        t = not_null(c_29);
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
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym__2))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      t = SSL_table_get(not_null(k_29), not_null(l_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym__3))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      c_30 = ATgetArgument(z_29, 2);
      {
        ATerm p_15;
        p_15 = t;
        {
          ATerm g_30 = NULL;
          ATerm h_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(b_30));
          {
            ATerm q_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_15);
              }
            else
              {
                t = q_15;
                t = (ATerm) ATempty;
              }
            {
              h_30 = t;
              if(((g_30 != NULL) && (g_30 != h_30)))
                _fail(h_30);
              else
                g_30 = h_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_30), not_null(b_30), (ATerm) ATinsert(CheckATermList(not_null(g_30)), not_null(c_30)));
            t = table_put_0(t);
          }
        }
        t = p_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_96 (ATerm))
{
  ATerm l_30 = NULL;
  ATerm m_30 = NULL;
  t = term_p_11;
  {
    t = z_96(t);
    {
      m_30 = t;
      if(((l_30 != NULL) && (l_30 != m_30)))
        _fail(m_30);
      else
        l_30 = m_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, not_null(l_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_string(s_30, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
        {
          t_30 = ATgetFirst((ATermList) s_30);
          u_30 = (ATerm) ATgetNext((ATermList) s_30);
          {
            ATerm x_30 = NULL;
            ATerm w_15;
            w_15 = t;
            {
              t = not_null(t_30);
              t = a_0(t);
            }
            t = w_15;
            {
              ATerm y_30 = NULL;
              t = term_p_11;
              {
                t = d_0(t);
                {
                  y_30 = t;
                  if(((x_30 != NULL) && (x_30 != y_30)))
                    _fail(y_30);
                  else
                    x_30 = y_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_30)), not_null(x_30));
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
    ATerm d_31 = NULL;
    d_31 = t;
    c_31 :
    if(!(match_string(d_31, "--help")))
      {
        if(!(match_string(d_31, "-h")))
          {
            if(!(match_string(d_31, "-?")))
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
    t = term_a_16;
    return(t);
  }
  t = Option_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
    {
      h_31 = ATgetFirst((ATermList) g_31);
      i_31 = (ATerm) ATgetNext((ATermList) g_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_60 (ATerm), ATerm z_60 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(((ATgetType(s_31) == AT_LIST) && !(ATisEmpty(s_31))))
    {
      t_31 = ATgetFirst((ATermList) s_31);
      u_31 = (ATerm) ATgetNext((ATermList) s_31);
      {
        ATerm y_31 = NULL,a_32 = NULL;
        ATerm z_31 = NULL;
        t = SSLgetAnnotations(not_null(s_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
        {
          t = not_null(t_31);
          {
            ATerm c_32 = NULL;
            t = y_60(t);
            {
              a_32 = t;
              {
                t = not_null(u_31);
                {
                  ATerm e_32 = NULL;
                  t = z_60(t);
                  {
                    c_32 = t;
                    {
                      ATerm f_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_32)), not_null(a_32)), not_null(y_31));
                      {
                        f_32 = t;
                        if(((e_32 != NULL) && (e_32 != f_32)))
                          _fail(f_32);
                        else
                          e_32 = f_32;
                      }
                      t = not_null(e_32);
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
  ATerm p_32 = NULL;
  p_32 = t;
  o_32 :
  if(((ATgetType(p_32) == AT_LIST) && ATisEmpty(p_32)))
    {
      {
        ATerm r_32 = NULL,t_32 = NULL;
        ATerm b_16;
        b_16 = t;
        {
          ATerm s_32 = NULL;
          t = SSLgetAnnotations(not_null(p_32));
          {
            s_32 = t;
            if(((r_32 != NULL) && (r_32 != s_32)))
              _fail(s_32);
            else
              r_32 = s_32;
          }
        }
        t = b_16;
        {
          ATerm u_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_32));
          {
            u_32 = t;
            if(((t_32 != NULL) && (t_32 != u_32)))
              _fail(u_32);
            else
              t_32 = u_32;
          }
          t = not_null(t_32);
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(b_33), not_null(c_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_96 (ATerm))
{
  ATerm d_16;
  d_16 = t;
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_16;
        t = x_96(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
        }
      }
  }
  t = d_16;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm k_33 = NULL;
      ATerm l_16;
      l_16 = t;
      {
        ATerm i_33 = NULL;
        ATerm j_33 = NULL;
        j_33 = t;
        if(((i_33 != NULL) && (i_33 != j_33)))
          _fail(j_33);
        else
          i_33 = j_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(i_33));
          t = set_config_0(t);
        }
      }
      t = l_16;
      {
        ATerm l_33 = NULL;
        l_33 = t;
        if(((k_33 != NULL) && (k_33 != l_33)))
          _fail(l_33);
        else
          k_33 = l_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_33));
      }
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm m_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                t = x_96(t);
                t = Cons_2(t, _id, t_3);
              }
            }
          LocalPopChoice(r_16);
        }
      else
        {
          t = m_16;
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
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
    u_33 = t;
    q_33 :
    if(match_cons(u_33, sym__3))
      {
        v_33 = ATgetArgument(u_33, 0);
        w_33 = ATgetArgument(u_33, 1);
        x_33 = ATgetArgument(u_33, 2);
        {
          if(((r_33 != NULL) && (r_33 != v_33)))
            _fail(v_33);
          else
            r_33 = v_33;
          {
            if(((s_33 != NULL) && (s_33 != w_33)))
              _fail(w_33);
            else
              s_33 = w_33;
            {
              if(((t_33 != NULL) && (t_33 != x_33)))
                _fail(x_33);
              else
                t_33 = x_33;
              t = SSL_table_put(not_null(r_33), not_null(s_33), not_null(t_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm a_34 = NULL;
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
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_96(t);
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm e_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_17;
          m_17 = t;
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_15;
                t = get_config_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = fetch_1(t, Help_0);
              }
          }
          t = m_17;
          {
            t = system_usage_0(t);
            {
              t = term_m_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(l_17);
        }
      else
        {
          t = e_17;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm b_34 = NULL;
                    b_34 = t;
                    if(((a_34 != NULL) && (a_34 != b_34)))
                      _fail(b_34);
                    else
                      a_34 = b_34;
                    return(t);
                  }
                  t = Undefined_1(t, y_3);
                  return(t);
                }
                t = fetch_1(t, v_3);
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_34)), term_x_17);
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
        ATerm y_17;
        y_17 = t;
        {
          t = term_c_15;
          t = table_destroy_0(t);
        }
        t = y_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm))
{
  t = parse_options_1(t, d_93);
  {
    t = store_options_0(t);
    {
      t = f_93(t);
      {
        ATerm z_17 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_93);
            LocalPopChoice(b_18);
          }
        else
          {
            t = z_17;
            {
              ATerm c_18 = t;
              int d_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_93(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_18);
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
ATerm iowrap_4 (ATerm t, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm e_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_93(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = e_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_93);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, f_4, w_93, x_93, g_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm k_18;
      k_18 = t;
      {
        ATerm f_34 = NULL;
        ATerm g_34 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            g_34 = t;
            if(((f_34 != NULL) && (f_34 != g_34)))
              _fail(g_34);
            else
              f_34 = g_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATempty, not_null(f_34)));
          t = printnl_0(t);
        }
      }
      t = k_18;
      return(t);
    }
    t = if_verbose2_1(t, i_4);
    return(t);
  }
  t = iowrap_4(t, o_93, p_93, q_93, h_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  t = iowrap_3(t, m_93, n_93, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = _2(t, _id, j_93);
    return(t);
  }
  t = iowrap_2(t, n_4, _fail);
  return(t);
}
ATerm nonterminal_tree_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm p_4 (ATerm t)
    {
      ATerm l_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ApplToSort_0(t);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              t = LitToString_0(t);
            }
          LocalPopChoice(n_18);
        }
      else
        {
          t = l_18;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, p_4);
    return(t);
  }
  t = iowrap_1(t, o_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = nonterminal_tree_0(t);
  return(t);
}

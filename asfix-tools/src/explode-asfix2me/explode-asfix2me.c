#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
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
ATerm term_v_21;
ATerm term_e_21;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_e_13;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_range_2, term_t_5, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_lex_1, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_cf_1, term_b_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_opt_1, term_b_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_cf_1, term_j_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_w_8);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_t_5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_5);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_w_8);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_w_8);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_a_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_w_8);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__3, term_y_18, term_a_19, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm unflatten_lexical_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm MkLayoutCharacter_0 (ATerm);
ATerm MkLayoutConsList_0 (ATerm);
ATerm unflatten_layout_0 (ATerm);
ATerm MkCfConsList_1 (ATerm, ATerm b_74 (ATerm));
ATerm MkCfConsList_2 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm MkLexConsList_1 (ATerm, ATerm g_74 (ATerm));
ATerm unflatten_list_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_0 (ATerm));
ATerm list_some_1 (ATerm, ATerm z_81 (ATerm));
ATerm unflatten_literal_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm e_76 (ATerm));
ATerm ExplodeAsFix2ME_0 (ATerm);
ATerm _2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_93 (ATerm));
ATerm debug_1 (ATerm, ATerm p_92 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_89 (ATerm), ATerm v_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm crush_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_93 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm v_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm x_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_92 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_97 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_97 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_97 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm l_94 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_94 (ATerm));
ATerm explode_asfix2me_0 (ATerm);
ATerm main_0 (ATerm);
ATerm unflatten_lexical_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  t_2 = t;
  n_1 :
  if(match_cons(t_2, sym_appl_2))
    {
      u_2 = ATgetArgument(t_2, 0);
      c_3 = ATgetArgument(t_2, 1);
      o_1 :
      if(match_cons(u_2, sym_prod_3))
        {
          v_2 = ATgetArgument(u_2, 0);
          z_2 = ATgetArgument(u_2, 1);
          b_3 = ATgetArgument(u_2, 2);
          p_1 :
          if(((ATgetType(v_2) == AT_LIST) && !(ATisEmpty(v_2))))
            {
              w_2 = ATgetFirst((ATermList) v_2);
              y_2 = (ATerm) ATgetNext((ATermList) v_2);
              a_2 :
              if(match_cons(w_2, sym_lex_1))
                {
                  x_2 = ATgetArgument(w_2, 0);
                  b_2 :
                  if(((ATgetType(y_2) == AT_LIST) && ATisEmpty(y_2)))
                    {
                      c_2 :
                      if(match_cons(z_2, sym_cf_1))
                        {
                          a_3 = ATgetArgument(z_2, 0);
                          g_2 :
                          if(match_cons(b_3, sym_no_attrs_0))
                            {
                              h_2 :
                              if(((ATgetType(c_3) == AT_LIST) && !(ATisEmpty(c_3))))
                                {
                                  d_3 = ATgetFirst((ATermList) c_3);
                                  p_3 = (ATerm) ATgetNext((ATermList) c_3);
                                  i_2 :
                                  if(match_cons(d_3, sym_appl_2))
                                    {
                                      e_3 = ATgetArgument(d_3, 0);
                                      o_3 = ATgetArgument(d_3, 1);
                                      j_2 :
                                      if(match_cons(e_3, sym_prod_3))
                                        {
                                          f_3 = ATgetArgument(e_3, 0);
                                          g_3 = ATgetArgument(e_3, 1);
                                          n_3 = ATgetArgument(e_3, 2);
                                          k_2 :
                                          if(match_cons(g_3, sym_iter_star_1))
                                            {
                                              h_3 = ATgetArgument(g_3, 0);
                                              l_2 :
                                              if(match_cons(h_3, sym_char_class_1))
                                                {
                                                  i_3 = ATgetArgument(h_3, 0);
                                                  m_2 :
                                                  if(((ATgetType(i_3) == AT_LIST) && !(ATisEmpty(i_3))))
                                                    {
                                                      j_3 = ATgetFirst((ATermList) i_3);
                                                      m_3 = (ATerm) ATgetNext((ATermList) i_3);
                                                      n_2 :
                                                      if(match_cons(j_3, sym_range_2))
                                                        {
                                                          k_3 = ATgetArgument(j_3, 0);
                                                          l_3 = ATgetArgument(j_3, 1);
                                                          o_2 :
                                                          if(match_int(k_3, 0))
                                                            {
                                                              p_2 :
                                                              if(match_int(l_3, 255))
                                                                {
                                                                  q_2 :
                                                                  if(((ATgetType(m_3) == AT_LIST) && ATisEmpty(m_3)))
                                                                    {
                                                                      r_2 :
                                                                      if(match_cons(n_3, sym_no_attrs_0))
                                                                        {
                                                                          s_2 :
                                                                          if(((ATgetType(p_3) == AT_LIST) && ATisEmpty(p_3)))
                                                                            {
                                                                              {
                                                                                ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
                                                                                if(((x_2 != NULL) && (x_2 != a_3)))
                                                                                  _fail(a_3);
                                                                                else
                                                                                  x_2 = a_3;
                                                                                {
                                                                                  if(((r_3 != NULL) && (r_3 != f_3)))
                                                                                    _fail(f_3);
                                                                                  else
                                                                                    r_3 = f_3;
                                                                                  {
                                                                                    if(((s_3 != NULL) && (s_3 != o_3)))
                                                                                      _fail(o_3);
                                                                                    else
                                                                                      s_3 = o_3;
                                                                                    {
                                                                                      ATerm u_3 = NULL;
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_7))))), (ATerm)ATmakeAppl(sym_lex_1, not_null(x_2)), term_i_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(r_3), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_7)))), term_i_7), not_null(s_3))));
                                                                                      {
                                                                                        u_3 = t;
                                                                                        if(((t_3 != NULL) && (t_3 != u_3)))
                                                                                          _fail(u_3);
                                                                                        else
                                                                                          t_3 = u_3;
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(x_2))), (ATerm)ATmakeAppl(sym_cf_1, not_null(x_2)), term_i_7), not_null(t_3));
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
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_is_int(not_null(y_3));
  return(t);
}
ATerm MkLayoutCharacter_0 (ATerm t)
{
  ATerm h_4 = NULL;
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  h_4 = t;
  {
    ATerm j_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_int_0(t);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_c_8), term_d_8, term_i_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_7))), term_c_8, term_i_7), (ATerm) ATinsert(ATempty, not_null(h_4)))));
        ;
        LocalPopChoice(a_8);
      }
    else
      {
        t = j_7;
        {
          ATerm e_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
              m_4 = t;
              e_4 :
              if(match_cons(m_4, sym_appl_2))
                {
                  n_4 = ATgetArgument(m_4, 0);
                  s_4 = ATgetArgument(m_4, 1);
                  f_4 :
                  if(match_cons(n_4, sym_prod_3))
                    {
                      o_4 = ATgetArgument(n_4, 0);
                      p_4 = ATgetArgument(n_4, 1);
                      r_4 = ATgetArgument(n_4, 2);
                      g_4 :
                      if(match_cons(p_4, sym_lex_1))
                        {
                          q_4 = ATgetArgument(p_4, 0);
                          {
                            if(((j_4 != NULL) && (j_4 != o_4)))
                              _fail(o_4);
                            else
                              j_4 = o_4;
                            {
                              if(((l_4 != NULL) && (l_4 != q_4)))
                                _fail(q_4);
                              else
                                l_4 = q_4;
                              {
                                if(((k_4 != NULL) && (k_4 != r_4)))
                                  _fail(r_4);
                                else
                                  k_4 = r_4;
                                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_c_8), term_d_8, term_i_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(l_4))), term_c_8, term_i_7), (ATerm) ATinsert(ATempty, not_null(h_4)))));
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(p_4, sym_lit_1))
                            {
                              q_4 = ATgetArgument(p_4, 0);
                              {
                                if(((j_4 != NULL) && (j_4 != o_4)))
                                  _fail(o_4);
                                else
                                  j_4 = o_4;
                                {
                                  if(((l_4 != NULL) && (l_4 != q_4)))
                                    _fail(q_4);
                                  else
                                    l_4 = q_4;
                                  {
                                    if(((k_4 != NULL) && (k_4 != r_4)))
                                      _fail(r_4);
                                    else
                                      k_4 = r_4;
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_c_8), term_d_8, term_i_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, not_null(l_4))), term_c_8, term_i_7), (ATerm) ATinsert(ATempty, not_null(h_4)))));
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
              ;
              LocalPopChoice(f_8);
            }
          else
            {
              t = e_8;
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
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  c_5 = t;
  a_5 :
  if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
    {
      d_5 = ATgetFirst((ATermList) c_5);
      e_5 = (ATerm) ATgetNext((ATermList) c_5);
      b_5 :
      if(((ATgetType(e_5) == AT_LIST) && ATisEmpty(e_5)))
        {
          {
            t = not_null(d_5);
            t = MkLayoutCharacter_0(t);
          }
        }
      else
        {
          if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
            {
              f_5 = ATgetFirst((ATermList) e_5);
              g_5 = (ATerm) ATgetNext((ATermList) e_5);
              {
                ATerm p_5 = NULL,r_5 = NULL;
                ATerm g_8;
                g_8 = t;
                {
                  ATerm q_5 = NULL;
                  t = not_null(d_5);
                  {
                    t = MkLayoutCharacter_0(t);
                    {
                      q_5 = t;
                      if(((p_5 != NULL) && (p_5 != q_5)))
                        _fail(q_5);
                      else
                        p_5 = q_5;
                    }
                  }
                }
                t = g_8;
                {
                  ATerm s_5 = NULL;
                  t = not_null(f_5);
                  {
                    t = MkLayoutCharacter_0(t);
                    {
                      s_5 = t;
                      if(((r_5 != NULL) && (r_5 != s_5)))
                        _fail(s_5);
                      else
                        r_5 = s_5;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(g_5)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_d_8), term_d_8), term_d_8, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_5)), not_null(p_5))));
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
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  k_6 = t;
  a_6 :
  if(match_cons(k_6, sym_appl_2))
    {
      l_6 = ATgetArgument(k_6, 0);
      u_6 = ATgetArgument(k_6, 1);
      b_6 :
      if(match_cons(l_6, sym_prod_3))
        {
          m_6 = ATgetArgument(l_6, 0);
          q_6 = ATgetArgument(l_6, 1);
          t_6 = ATgetArgument(l_6, 2);
          c_6 :
          if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
            {
              n_6 = ATgetFirst((ATermList) m_6);
              p_6 = (ATerm) ATgetNext((ATermList) m_6);
              d_6 :
              if(match_cons(n_6, sym_cf_1))
                {
                  o_6 = ATgetArgument(n_6, 0);
                  e_6 :
                  if(match_cons(o_6, sym_layout_0))
                    {
                      f_6 :
                      if(((ATgetType(p_6) == AT_LIST) && ATisEmpty(p_6)))
                        {
                          g_6 :
                          if(match_cons(q_6, sym_cf_1))
                            {
                              r_6 = ATgetArgument(q_6, 0);
                              h_6 :
                              if(match_cons(r_6, sym_opt_1))
                                {
                                  s_6 = ATgetArgument(r_6, 0);
                                  i_6 :
                                  if(match_cons(s_6, sym_layout_0))
                                    {
                                      j_6 :
                                      if(match_cons(t_6, sym_no_attrs_0))
                                        {
                                          ATerm w_6 = NULL;
                                          ATerm x_6 = NULL;
                                          t = not_null(u_6);
                                          {
                                            t = MkLayoutConsList_0(t);
                                            {
                                              x_6 = t;
                                              if(((w_6 != NULL) && (w_6 != x_6)))
                                                _fail(x_6);
                                              else
                                                w_6 = x_6;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_d_8), term_k_8, term_i_7), (ATerm) ATinsert(ATempty, not_null(w_6)));
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm MkCfConsList_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm n_7 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm o_7 = NULL;
    ATerm p_7 = NULL,r_7 = NULL;
    o_7 = t;
    {
      if(((n_7 != NULL) && (n_7 != o_7)))
        _fail(o_7);
      else
        n_7 = o_7;
      {
        ATerm l_8;
        l_8 = t;
        {
          ATerm q_7 = NULL;
          t = term_w_8;
          {
            t = b_74(t);
            {
              q_7 = t;
              if(((p_7 != NULL) && (p_7 != q_7)))
                _fail(q_7);
              else
                p_7 = q_7;
            }
          }
        }
        t = l_8;
        {
          ATerm s_7 = NULL;
          t = term_w_8;
          {
            t = b_74(t);
            {
              s_7 = t;
              if(((r_7 != NULL) && (r_7 != s_7)))
                _fail(s_7);
              else
                r_7 = s_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(p_7))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(r_7))), term_i_7), (ATerm) ATinsert(ATempty, not_null(n_7)));
        }
      }
    }
    return(t);
  }
  t = Cons_2(t, b_0, _id);
  {
    ATerm z_8 (ATerm t)
    {
      ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
      t_7 = t;
      k_7 :
      if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
        {
          u_7 = ATgetFirst((ATermList) t_7);
          v_7 = (ATerm) ATgetNext((ATermList) t_7);
          l_7 :
          if(((ATgetType(v_7) == AT_LIST) && ATisEmpty(v_7)))
            {
              t = not_null(u_7);
            }
          else
            {
              if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
                {
                  w_7 = ATgetFirst((ATermList) v_7);
                  x_7 = (ATerm) ATgetNext((ATermList) v_7);
                  m_7 :
                  if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
                    {
                      y_7 = ATgetFirst((ATermList) x_7);
                      z_7 = (ATerm) ATgetNext((ATermList) x_7);
                      {
                        ATerm m_8 = NULL,o_8 = NULL,q_8 = NULL,s_8 = NULL,u_8 = NULL;
                        ATerm x_8;
                        x_8 = t;
                        {
                          ATerm n_8 = NULL;
                          t = term_w_8;
                          {
                            t = b_74(t);
                            {
                              n_8 = t;
                              if(((m_8 != NULL) && (m_8 != n_8)))
                                _fail(n_8);
                              else
                                m_8 = n_8;
                            }
                          }
                        }
                        t = x_8;
                        {
                          ATerm y_8;
                          y_8 = t;
                          {
                            ATerm p_8 = NULL;
                            t = term_w_8;
                            {
                              t = b_74(t);
                              {
                                p_8 = t;
                                if(((o_8 != NULL) && (o_8 != p_8)))
                                  _fail(p_8);
                                else
                                  o_8 = p_8;
                              }
                            }
                          }
                          t = y_8;
                          {
                            ATerm a_9;
                            a_9 = t;
                            {
                              ATerm r_8 = NULL;
                              t = term_w_8;
                              {
                                t = b_74(t);
                                {
                                  r_8 = t;
                                  if(((q_8 != NULL) && (q_8 != r_8)))
                                    _fail(r_8);
                                  else
                                    q_8 = r_8;
                                }
                              }
                            }
                            t = a_9;
                            {
                              ATerm b_9;
                              b_9 = t;
                              {
                                ATerm t_8 = NULL;
                                t = term_w_8;
                                {
                                  t = b_74(t);
                                  {
                                    t_8 = t;
                                    if(((s_8 != NULL) && (s_8 != t_8)))
                                      _fail(t_8);
                                    else
                                      s_8 = t_8;
                                  }
                                }
                              }
                              t = b_9;
                              {
                                ATerm v_8 = NULL;
                                t = term_w_8;
                                {
                                  t = b_74(t);
                                  {
                                    v_8 = t;
                                    if(((u_8 != NULL) && (u_8 != v_8)))
                                      _fail(v_8);
                                    else
                                      u_8 = v_8;
                                  }
                                }
                                {
                                  t = (ATerm) ATinsert(CheckATermList(not_null(z_7)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(o_8)))), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(m_8)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(q_8))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(s_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(u_8))), term_i_7), (ATerm) ATinsert(ATempty, not_null(y_7)))), not_null(w_7)), not_null(u_7))));
                                  t = z_8(t);
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
    t = z_8(t);
  }
  return(t);
}
ATerm MkCfConsList_2 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm c_10 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm d_10 = NULL;
    ATerm e_10 = NULL,g_10 = NULL,i_10 = NULL;
    d_10 = t;
    {
      if(((c_10 != NULL) && (c_10 != d_10)))
        _fail(d_10);
      else
        c_10 = d_10;
      {
        ATerm c_9;
        c_9 = t;
        {
          ATerm f_10 = NULL;
          t = term_w_8;
          {
            t = d_74(t);
            {
              f_10 = t;
              if(((e_10 != NULL) && (e_10 != f_10)))
                _fail(f_10);
              else
                e_10 = f_10;
            }
          }
        }
        t = c_9;
        {
          ATerm d_9;
          d_9 = t;
          {
            ATerm h_10 = NULL;
            t = term_w_8;
            {
              t = d_74(t);
              {
                h_10 = t;
                if(((g_10 != NULL) && (g_10 != h_10)))
                  _fail(h_10);
                else
                  g_10 = h_10;
              }
            }
          }
          t = d_9;
          {
            ATerm j_10 = NULL;
            t = term_w_8;
            {
              t = e_74(t);
              {
                j_10 = t;
                if(((i_10 != NULL) && (i_10 != j_10)))
                  _fail(j_10);
                else
                  i_10 = j_10;
              }
            }
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(e_10))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(g_10), not_null(i_10))), term_i_7), (ATerm) ATinsert(ATempty, not_null(c_10)));
          }
        }
      }
    }
    return(t);
  }
  t = Cons_2(t, e_0, _id);
  {
    ATerm h_12 (ATerm t)
    {
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
      k_10 = t;
      x_9 :
      if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
        {
          l_10 = ATgetFirst((ATermList) k_10);
          m_10 = (ATerm) ATgetNext((ATermList) k_10);
          y_9 :
          if(((ATgetType(m_10) == AT_LIST) && ATisEmpty(m_10)))
            {
              t = not_null(l_10);
            }
          else
            {
              if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
                {
                  n_10 = ATgetFirst((ATermList) m_10);
                  o_10 = (ATerm) ATgetNext((ATermList) m_10);
                  z_9 :
                  if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
                    {
                      p_10 = ATgetFirst((ATermList) o_10);
                      q_10 = (ATerm) ATgetNext((ATermList) o_10);
                      a_10 :
                      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                        {
                          r_10 = ATgetFirst((ATermList) q_10);
                          s_10 = (ATerm) ATgetNext((ATermList) q_10);
                          b_10 :
                          if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
                            {
                              t_10 = ATgetFirst((ATermList) s_10);
                              u_10 = (ATerm) ATgetNext((ATermList) s_10);
                              {
                                ATerm j_11 = NULL,l_11 = NULL,n_11 = NULL,p_11 = NULL,r_11 = NULL,t_11 = NULL,v_11 = NULL,x_11 = NULL,z_11 = NULL,b_12 = NULL;
                                ATerm e_9;
                                e_9 = t;
                                {
                                  ATerm k_11 = NULL;
                                  t = term_w_8;
                                  {
                                    t = d_74(t);
                                    {
                                      k_11 = t;
                                      if(((j_11 != NULL) && (j_11 != k_11)))
                                        _fail(k_11);
                                      else
                                        j_11 = k_11;
                                    }
                                  }
                                }
                                t = e_9;
                                {
                                  ATerm f_9;
                                  f_9 = t;
                                  {
                                    ATerm m_11 = NULL;
                                    t = term_w_8;
                                    {
                                      t = e_74(t);
                                      {
                                        m_11 = t;
                                        if(((l_11 != NULL) && (l_11 != m_11)))
                                          _fail(m_11);
                                        else
                                          l_11 = m_11;
                                      }
                                    }
                                  }
                                  t = f_9;
                                  {
                                    ATerm g_9;
                                    g_9 = t;
                                    {
                                      ATerm o_11 = NULL;
                                      t = term_w_8;
                                      {
                                        t = e_74(t);
                                        {
                                          o_11 = t;
                                          if(((n_11 != NULL) && (n_11 != o_11)))
                                            _fail(o_11);
                                          else
                                            n_11 = o_11;
                                        }
                                      }
                                    }
                                    t = g_9;
                                    {
                                      ATerm h_9;
                                      h_9 = t;
                                      {
                                        ATerm q_11 = NULL;
                                        t = term_w_8;
                                        {
                                          t = d_74(t);
                                          {
                                            q_11 = t;
                                            if(((p_11 != NULL) && (p_11 != q_11)))
                                              _fail(q_11);
                                            else
                                              p_11 = q_11;
                                          }
                                        }
                                      }
                                      t = h_9;
                                      {
                                        ATerm i_9;
                                        i_9 = t;
                                        {
                                          ATerm s_11 = NULL;
                                          t = term_w_8;
                                          {
                                            t = e_74(t);
                                            {
                                              s_11 = t;
                                              if(((r_11 != NULL) && (r_11 != s_11)))
                                                _fail(s_11);
                                              else
                                                r_11 = s_11;
                                            }
                                          }
                                        }
                                        t = i_9;
                                        {
                                          ATerm j_9;
                                          j_9 = t;
                                          {
                                            ATerm u_11 = NULL;
                                            t = term_w_8;
                                            {
                                              t = d_74(t);
                                              {
                                                u_11 = t;
                                                if(((t_11 != NULL) && (t_11 != u_11)))
                                                  _fail(u_11);
                                                else
                                                  t_11 = u_11;
                                              }
                                            }
                                          }
                                          t = j_9;
                                          {
                                            ATerm k_9;
                                            k_9 = t;
                                            {
                                              ATerm w_11 = NULL;
                                              t = term_w_8;
                                              {
                                                t = e_74(t);
                                                {
                                                  w_11 = t;
                                                  if(((v_11 != NULL) && (v_11 != w_11)))
                                                    _fail(w_11);
                                                  else
                                                    v_11 = w_11;
                                                }
                                              }
                                            }
                                            t = k_9;
                                            {
                                              ATerm l_9;
                                              l_9 = t;
                                              {
                                                ATerm y_11 = NULL;
                                                t = term_w_8;
                                                {
                                                  t = d_74(t);
                                                  {
                                                    y_11 = t;
                                                    if(((x_11 != NULL) && (x_11 != y_11)))
                                                      _fail(y_11);
                                                    else
                                                      x_11 = y_11;
                                                  }
                                                }
                                              }
                                              t = l_9;
                                              {
                                                ATerm m_9;
                                                m_9 = t;
                                                {
                                                  ATerm a_12 = NULL;
                                                  t = term_w_8;
                                                  {
                                                    t = d_74(t);
                                                    {
                                                      a_12 = t;
                                                      if(((z_11 != NULL) && (z_11 != a_12)))
                                                        _fail(a_12);
                                                      else
                                                        z_11 = a_12;
                                                    }
                                                  }
                                                }
                                                t = m_9;
                                                {
                                                  ATerm c_12 = NULL;
                                                  t = term_w_8;
                                                  {
                                                    t = e_74(t);
                                                    {
                                                      c_12 = t;
                                                      if(((b_12 != NULL) && (b_12 != c_12)))
                                                        _fail(c_12);
                                                      else
                                                        b_12 = c_12;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(p_11), not_null(r_11)))), term_k_8), not_null(n_11)), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(j_11), not_null(l_11)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(t_11), not_null(v_11))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(x_11))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(z_11), not_null(b_12))), term_i_7), (ATerm) ATinsert(ATempty, not_null(t_10)))), not_null(r_10)), not_null(p_10)), not_null(n_10)), not_null(l_10))));
                                                    t = h_12(t);
                                                  }
                                                }
                                              }
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
    t = h_12(t);
  }
  return(t);
}
ATerm MkLexConsList_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm m_14 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
    h_13 = t;
    f_13 :
    if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
      {
        i_13 = ATgetFirst((ATermList) h_13);
        j_13 = (ATerm) ATgetNext((ATermList) h_13);
        g_13 :
        if(((ATgetType(j_13) == AT_LIST) && ATisEmpty(j_13)))
          {
            {
              ATerm q_13 = NULL,s_13 = NULL;
              ATerm n_9;
              n_9 = t;
              {
                ATerm r_13 = NULL;
                t = term_w_8;
                {
                  t = g_74(t);
                  {
                    r_13 = t;
                    if(((q_13 != NULL) && (q_13 != r_13)))
                      _fail(r_13);
                    else
                      q_13 = r_13;
                  }
                }
              }
              t = n_9;
              {
                ATerm t_13 = NULL;
                t = term_w_8;
                {
                  t = g_74(t);
                  {
                    t_13 = t;
                    if(((s_13 != NULL) && (s_13 != t_13)))
                      _fail(t_13);
                    else
                      s_13 = t_13;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(q_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(s_13))), term_i_7), (ATerm) ATinsert(ATempty, not_null(i_13)));
              }
            }
          }
        else
          {
            if(((ATgetType(j_13) == AT_LIST) && !(ATisEmpty(j_13))))
              {
                k_13 = ATgetFirst((ATermList) j_13);
                l_13 = (ATerm) ATgetNext((ATermList) j_13);
                {
                  ATerm y_13 = NULL,a_14 = NULL,c_14 = NULL,e_14 = NULL,g_14 = NULL,i_14 = NULL,k_14 = NULL;
                  ATerm o_9;
                  o_9 = t;
                  {
                    ATerm z_13 = NULL;
                    t = term_w_8;
                    {
                      t = g_74(t);
                      {
                        z_13 = t;
                        if(((y_13 != NULL) && (y_13 != z_13)))
                          _fail(z_13);
                        else
                          y_13 = z_13;
                      }
                    }
                  }
                  t = o_9;
                  {
                    ATerm p_9;
                    p_9 = t;
                    {
                      ATerm b_14 = NULL;
                      t = term_w_8;
                      {
                        t = g_74(t);
                        {
                          b_14 = t;
                          if(((a_14 != NULL) && (a_14 != b_14)))
                            _fail(b_14);
                          else
                            a_14 = b_14;
                        }
                      }
                    }
                    t = p_9;
                    {
                      ATerm q_9;
                      q_9 = t;
                      {
                        ATerm d_14 = NULL;
                        t = term_w_8;
                        {
                          t = g_74(t);
                          {
                            d_14 = t;
                            if(((c_14 != NULL) && (c_14 != d_14)))
                              _fail(d_14);
                            else
                              c_14 = d_14;
                          }
                        }
                      }
                      t = q_9;
                      {
                        ATerm r_9;
                        r_9 = t;
                        {
                          ATerm f_14 = NULL;
                          t = term_w_8;
                          {
                            t = g_74(t);
                            {
                              f_14 = t;
                              if(((e_14 != NULL) && (e_14 != f_14)))
                                _fail(f_14);
                              else
                                e_14 = f_14;
                            }
                          }
                        }
                        t = r_9;
                        {
                          ATerm s_9;
                          s_9 = t;
                          {
                            ATerm h_14 = NULL;
                            t = term_w_8;
                            {
                              t = g_74(t);
                              {
                                h_14 = t;
                                if(((g_14 != NULL) && (g_14 != h_14)))
                                  _fail(h_14);
                                else
                                  g_14 = h_14;
                              }
                            }
                          }
                          t = s_9;
                          {
                            ATerm t_9;
                            t_9 = t;
                            {
                              ATerm j_14 = NULL;
                              t = term_w_8;
                              {
                                t = g_74(t);
                                {
                                  j_14 = t;
                                  if(((i_14 != NULL) && (i_14 != j_14)))
                                    _fail(j_14);
                                  else
                                    i_14 = j_14;
                                }
                              }
                            }
                            t = t_9;
                            {
                              ATerm l_14 = NULL;
                              t = term_w_8;
                              {
                                t = g_74(t);
                                {
                                  l_14 = t;
                                  if(((k_14 != NULL) && (k_14 != l_14)))
                                    _fail(l_14);
                                  else
                                    k_14 = l_14;
                                }
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(l_13)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(a_14)))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(y_13)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(c_14))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(i_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(k_14))), term_i_7), (ATerm) ATinsert(ATempty, not_null(k_13)))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(e_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(g_14))), term_i_7), (ATerm) ATinsert(ATempty, not_null(i_13))))));
                                t = m_14(t);
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
  t = m_14(t);
  return(t);
}
ATerm unflatten_list_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  x_15 = t;
  n_15 :
  if(match_cons(x_15, sym_appl_2))
    {
      y_15 = ATgetArgument(x_15, 0);
      c_16 = ATgetArgument(x_15, 1);
      o_15 :
      if(match_cons(y_15, sym_list_1))
        {
          z_15 = ATgetArgument(y_15, 0);
          p_15 :
          if(match_cons(z_15, sym_iter_1))
            {
              a_16 = ATgetArgument(z_15, 0);
              {
                ATerm f_16 = NULL;
                ATerm g_16 = NULL;
                t = not_null(c_16);
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = not_null(a_16);
                    return(t);
                  }
                  t = MkLexConsList_1(t, f_0);
                  {
                    g_16 = t;
                    if(((f_16 != NULL) && (f_16 != g_16)))
                      _fail(g_16);
                    else
                      f_16 = g_16;
                  }
                }
                t = not_null(f_16);
              }
            }
          else
            {
              if(match_cons(z_15, sym_iter_star_1))
                {
                  a_16 = ATgetArgument(z_15, 0);
                  q_15 :
                  if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                    {
                      v_15 = ATgetFirst((ATermList) c_16);
                      w_15 = (ATerm) ATgetNext((ATermList) c_16);
                      {
                        ATerm k_16 = NULL;
                        ATerm l_16 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(a_16))), (ATerm) ATinsert(CheckATermList(not_null(w_15)), not_null(v_15)));
                        {
                          t = unflatten_list_0(t);
                          {
                            l_16 = t;
                            if(((k_16 != NULL) && (k_16 != l_16)))
                              _fail(l_16);
                            else
                              k_16 = l_16;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(a_16)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(a_16))), term_i_7), (ATerm) ATinsert(ATempty, not_null(k_16)));
                      }
                    }
                  else
                    {
                      if(((ATgetType(c_16) == AT_LIST) && ATisEmpty(c_16)))
                        {
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(a_16))), term_i_7), (ATerm) ATempty);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(z_15, sym_cf_1))
                    {
                      a_16 = ATgetArgument(z_15, 0);
                      r_15 :
                      if(match_cons(a_16, sym_iter_sep_2))
                        {
                          b_16 = ATgetArgument(a_16, 0);
                          u_15 = ATgetArgument(a_16, 1);
                          {
                            ATerm q_16 = NULL;
                            ATerm r_16 = NULL;
                            t = not_null(c_16);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                t = not_null(b_16);
                                return(t);
                              }
                              ATerm p_0 (ATerm t)
                              {
                                t = not_null(u_15);
                                return(t);
                              }
                              t = MkCfConsList_2(t, h_0, p_0);
                              {
                                r_16 = t;
                                if(((q_16 != NULL) && (q_16 != r_16)))
                                  _fail(r_16);
                                else
                                  q_16 = r_16;
                              }
                            }
                            t = not_null(q_16);
                          }
                        }
                      else
                        {
                          if(match_cons(a_16, sym_iter_star_sep_2))
                            {
                              b_16 = ATgetArgument(a_16, 0);
                              u_15 = ATgetArgument(a_16, 1);
                              s_15 :
                              if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                                {
                                  v_15 = ATgetFirst((ATermList) c_16);
                                  w_15 = (ATerm) ATgetNext((ATermList) c_16);
                                  {
                                    ATerm w_16 = NULL;
                                    ATerm x_16 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(b_16), not_null(u_15)))), (ATerm) ATinsert(CheckATermList(not_null(w_15)), not_null(v_15)));
                                    {
                                      t = unflatten_list_0(t);
                                      {
                                        x_16 = t;
                                        if(((w_16 != NULL) && (w_16 != x_16)))
                                          _fail(x_16);
                                        else
                                          w_16 = x_16;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(b_16), not_null(u_15)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(b_16), not_null(u_15))), term_i_7), (ATerm) ATinsert(ATempty, not_null(w_16)));
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(c_16) == AT_LIST) && ATisEmpty(c_16)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(b_16), not_null(u_15))), term_i_7), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(a_16, sym_iter_1))
                                {
                                  b_16 = ATgetArgument(a_16, 0);
                                  {
                                    ATerm c_17 = NULL;
                                    ATerm d_17 = NULL;
                                    t = not_null(c_16);
                                    {
                                      ATerm q_0 (ATerm t)
                                      {
                                        t = not_null(b_16);
                                        return(t);
                                      }
                                      t = MkCfConsList_1(t, q_0);
                                      {
                                        d_17 = t;
                                        if(((c_17 != NULL) && (c_17 != d_17)))
                                          _fail(d_17);
                                        else
                                          c_17 = d_17;
                                      }
                                    }
                                    t = not_null(c_17);
                                  }
                                }
                              else
                                {
                                  if(match_cons(a_16, sym_iter_star_1))
                                    {
                                      b_16 = ATgetArgument(a_16, 0);
                                      t_15 :
                                      if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                                        {
                                          v_15 = ATgetFirst((ATermList) c_16);
                                          w_15 = (ATerm) ATgetNext((ATermList) c_16);
                                          {
                                            ATerm h_17 = NULL;
                                            ATerm i_17 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(b_16)))), (ATerm) ATinsert(CheckATermList(not_null(w_15)), not_null(v_15)));
                                            {
                                              t = unflatten_list_0(t);
                                              {
                                                i_17 = t;
                                                if(((h_17 != NULL) && (h_17 != i_17)))
                                                  _fail(i_17);
                                                else
                                                  h_17 = i_17;
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(b_16)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(b_16))), term_i_7), (ATerm) ATinsert(ATempty, not_null(h_17)));
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(c_16) == AT_LIST) && ATisEmpty(c_16)))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(b_16))), term_i_7), (ATerm) ATempty);
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
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 (ATerm t)
      {
        ATerm w_9 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0(t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = w_9;
            t = Cons_2(t, o_0, o_18);
          }
        return(t);
      }
      t = o_18(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm e_18 = NULL,f_18 = NULL;
        e_18 = t;
        d_18 :
        if(match_cons(e_18, sym_list_1))
          {
            f_18 = ATgetArgument(e_18, 0);
            {
              ATerm i_18 = NULL,k_18 = NULL;
              ATerm j_18 = NULL;
              t = SSLgetAnnotations(not_null(e_18));
              {
                j_18 = t;
                if(((i_18 != NULL) && (i_18 != j_18)))
                  _fail(j_18);
                else
                  i_18 = j_18;
              }
              {
                t = not_null(f_18);
                {
                  ATerm m_18 = NULL;
                  t = o_0(t);
                  {
                    k_18 = t;
                    {
                      ATerm n_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_1, not_null(k_18)), not_null(i_18));
                      {
                        n_18 = t;
                        if(((m_18 != NULL) && (m_18 != n_18)))
                          _fail(n_18);
                        else
                          m_18 = n_18;
                      }
                      t = not_null(m_18);
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
ATerm list_some_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm t_18 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_81, _id);
        LocalPopChoice(x_10);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, z_81);
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
        t = w_10;
        t = Cons_2(t, _id, t_18);
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm unflatten_literal_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_appl_2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm h_19 = NULL;
        ATerm s_19 = NULL;
        t = not_null(e_19);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm i_19 = NULL,j_19 = NULL;
            i_19 = t;
            z_18 :
            if(match_cons(i_19, sym_lit_1))
              {
                j_19 = ATgetArgument(i_19, 0);
                {
                  ATerm l_19 = NULL,m_19 = NULL;
                  ATerm n_19 = NULL;
                  t = not_null(j_19);
                  {
                    ATerm q_19 = NULL;
                    t = explode_string_0(t);
                    {
                      n_19 = t;
                      {
                        if(((l_19 != NULL) && (l_19 != n_19)))
                          _fail(n_19);
                        else
                          l_19 = n_19;
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm o_19 = NULL;
                            o_19 = t;
                            t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, not_null(o_19)));
                            return(t);
                          }
                          t = map_1(t, u_0);
                          {
                            q_19 = t;
                            if(((m_19 != NULL) && (m_19 != q_19)))
                              _fail(q_19);
                            else
                              m_19 = q_19;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(m_19), (ATerm)ATmakeAppl(sym_lit_1, not_null(j_19)), term_i_7), not_null(l_19));
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
            s_19 = t;
            if(((h_19 != NULL) && (h_19 != s_19)))
              _fail(s_19);
            else
              h_19 = s_19;
          }
        }
        t = (ATerm) ATmakeAppl(sym_appl_2, not_null(d_19), not_null(h_19));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    t = bottomup_1(t, e_76);
    return(t);
  }
  t = _all(t, v_0);
  t = e_76(t);
  return(t);
}
ATerm ExplodeAsFix2ME_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = try_1(t, unflatten_literal_0);
    {
      t = try_1(t, unflatten_list_0);
      {
        t = try_1(t, unflatten_layout_0);
        t = try_1(t, unflatten_lexical_0);
      }
    }
    return(t);
  }
  t = bottomup_1(t, w_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL;
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm p_20 = NULL;
            t = i_58(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = j_58(t);
                  {
                    p_20 = t;
                    {
                      ATerm s_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_20), not_null(p_20)), not_null(l_20));
                      {
                        s_20 = t;
                        if(((r_20 != NULL) && (r_20 != s_20)))
                          _fail(s_20);
                        else
                          r_20 = s_20;
                      }
                      t = not_null(r_20);
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
  ATerm a_21 = NULL;
  ATerm y_10;
  y_10 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm b_21 = NULL,c_21 = NULL;
      b_21 = t;
      z_20 :
      if(match_cons(b_21, sym_Program_1))
        {
          c_21 = ATgetArgument(b_21, 0);
          if(((a_21 != NULL) && (a_21 != c_21)))
            _fail(c_21);
          else
            a_21 = c_21;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, x_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(a_21)), term_a_11));
      {
        t = printnl_0(t);
        {
          t = term_c_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm d_11;
        d_11 = t;
        t = SSL_printnl(not_null(h_21), not_null(i_21));
        t = d_11;
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
  ATerm n_21 = NULL;
  n_21 = t;
  t = SSL_implode_string(not_null(n_21));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
        s_21 = t;
        r_21 :
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            t_21 = ATgetFirst((ATermList) s_21);
            u_21 = (ATerm) ATgetNext((ATermList) s_21);
            {
              t = not_null(t_21);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(u_21);
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
  ATerm e_22 = NULL;
  ATerm g_22 = NULL;
  e_22 = t;
  {
    ATerm h_22 = NULL;
    ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
    t = not_null(e_22);
    {
      h_22 = t;
      {
        t = SSL_explode_term(not_null(h_22));
        {
          j_22 = t;
          c_22 :
          if(match_cons(j_22, sym__2))
            {
              k_22 = ATgetArgument(j_22, 0);
              l_22 = ATgetArgument(j_22, 1);
              d_22 :
              if(match_string(k_22, ""))
                {
                  if(((g_22 != NULL) && (g_22 != l_22)))
                    _fail(l_22);
                  else
                    g_22 = l_22;
                }
              else
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
      t = not_null(g_22);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm p_22 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_22);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          t = Nil_0(t);
          t = k_82(t);
        }
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        t = not_null(t_22);
        {
          ATerm z_0 (ATerm t)
          {
            t = not_null(u_22);
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
  ATerm i_11 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = i_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  t = SSL_explode_string(not_null(z_22));
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
ATerm is_string_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_is_string(not_null(d_23));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm g_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_1);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = g_12;
            {
              ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
              m_23 = t;
              l_23 :
              if(match_cons(m_23, sym_Path_1))
                {
                  n_23 = ATgetArgument(m_23, 0);
                  t = not_null(n_23);
                }
              else
                {
                  if(match_cons(m_23, sym_Var_1))
                    {
                      n_23 = ATgetArgument(m_23, 0);
                      {
                        t = not_null(n_23);
                        {
                          ATerm j_12 = t;
                          int k_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(k_12);
                            }
                          else
                            {
                              t = j_12;
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_l_12;
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
                      if(match_cons(m_23, sym_Prefix_2))
                        {
                          n_23 = ATgetArgument(m_23, 0);
                          o_23 = ATgetArgument(m_23, 1);
                          {
                            ATerm t_23 = NULL,v_23 = NULL;
                            ATerm m_12;
                            m_12 = t;
                            {
                              ATerm u_23 = NULL;
                              t = not_null(n_23);
                              {
                                t = eval_config_0(t);
                                {
                                  u_23 = t;
                                  if(((t_23 != NULL) && (t_23 != u_23)))
                                    _fail(u_23);
                                  else
                                    t_23 = u_23;
                                }
                              }
                            }
                            t = m_12;
                            {
                              ATerm w_23 = NULL;
                              t = not_null(o_23);
                              {
                                t = eval_config_0(t);
                                {
                                  w_23 = t;
                                  if(((v_23 != NULL) && (v_23 != w_23)))
                                    _fail(w_23);
                                  else
                                    v_23 = w_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(v_23));
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
  ATerm e_24 = NULL;
  e_24 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(e_24));
    {
      t = table_get_0(t);
      {
        ATerm c_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_12;
            o_12 = t;
            {
              ATerm g_24 = NULL;
              ATerm h_24 = NULL;
              h_24 = t;
              if(((g_24 != NULL) && (g_24 != h_24)))
                _fail(h_24);
              else
                g_24 = h_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_12, not_null(e_24), not_null(g_24));
                t = table_put_0(t);
              }
            }
            t = o_12;
          }
          return(t);
        }
        t = try_1(t, c_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm p_12;
    p_12 = t;
    {
      ATerm l_24 = NULL;
      ATerm m_24 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_r_12);
        t = geq_0(t);
      }
    }
    t = p_12;
    t = n_95(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      t = SSL_WriteToTextFile(not_null(r_24), not_null(s_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym__2))
    {
      z_24 = ATgetArgument(y_24, 0);
      a_25 = ATgetArgument(y_24, 1);
      t = SSL_WriteToBinaryFile(not_null(z_24), not_null(a_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_25 = NULL;
  ATerm s_12;
  s_12 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 (ATerm t)
          {
            ATerm j_25 = NULL,k_25 = NULL;
            j_25 = t;
            f_25 :
            if(match_cons(j_25, sym_Output_1))
              {
                k_25 = ATgetArgument(j_25, 0);
                if(((i_25 != NULL) && (i_25 != k_25)))
                  _fail(k_25);
                else
                  i_25 = k_25;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_1);
          ;
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm l_25 = NULL;
            t = term_v_12;
            {
              l_25 = t;
              if(((i_25 != NULL) && (i_25 != l_25)))
                _fail(l_25);
              else
                i_25 = l_25;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_1, _id);
  }
  t = s_12;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        t = not_null(i_25);
        return(t);
      }
      t = split_2(t, h_1, _id);
      return(t);
    }
    t = _2(t, _id, g_1);
    {
      ATerm w_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              ATerm m_25 = NULL;
              m_25 = t;
              h_25 :
              if(!(match_cons(m_25, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_1);
            return(t);
          }
          t = _2(t, i_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(x_12);
        }
      else
        {
          t = w_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm u_93 (ATerm))
{
  ATerm i_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  ATerm y_12;
  y_12 = t;
  t = dtime_0(t);
  t = y_12;
  {
    t = u_93(t);
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm j_28 = NULL;
        t = dtime_0(t);
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
      }
      t = z_12;
      {
        k_28 = t;
        h_28 :
        if(match_cons(k_28, sym__2))
          {
            l_28 = ATgetArgument(k_28, 0);
            m_28 = ATgetArgument(k_28, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_28)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_28))), not_null(m_28));
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
ATerm debug_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm a_13;
  a_13 = t;
  {
    ATerm t_28 = NULL,v_28 = NULL;
    ATerm b_13;
    b_13 = t;
    {
      ATerm u_28 = NULL;
      t = p_92(t);
      {
        u_28 = t;
        if(((t_28 != NULL) && (t_28 != u_28)))
          _fail(u_28);
        else
          t_28 = u_28;
      }
    }
    t = b_13;
    {
      ATerm w_28 = NULL;
      w_28 = t;
      if(((v_28 != NULL) && (v_28 != w_28)))
        _fail(w_28);
      else
        v_28 = w_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_28)), not_null(t_28)));
        t = printnl_0(t);
      }
    }
  }
  t = a_13;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_29 = NULL;
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      b_29 = t;
      {
        if(((a_29 != NULL) && (a_29 != b_29)))
          _fail(b_29);
        else
          a_29 = b_29;
        t = SSL_ReadFromFile(not_null(a_29));
      }
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_e_13;
          return(t);
        }
        t = debug_1(t, k_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_89 (ATerm), ATerm v_89 (ATerm))
{
  ATerm f_29 = NULL,h_29 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm g_29 = NULL;
    t = u_89(t);
    {
      g_29 = t;
      if(((f_29 != NULL) && (f_29 != g_29)))
        _fail(g_29);
      else
        f_29 = g_29;
    }
  }
  t = m_13;
  {
    ATerm i_29 = NULL;
    t = v_89(t);
    {
      i_29 = t;
      if(((h_29 != NULL) && (h_29 != i_29)))
        _fail(i_29);
      else
        h_29 = i_29;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(h_29));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_29 = NULL;
  ATerm n_13;
  n_13 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm p_29 = NULL,q_29 = NULL;
          p_29 = t;
          m_29 :
          if(match_cons(p_29, sym_Input_1))
            {
              q_29 = ATgetArgument(p_29, 0);
              if(((o_29 != NULL) && (o_29 != q_29)))
                _fail(q_29);
              else
                o_29 = q_29;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm w_29 = NULL;
          t = term_u_13;
          {
            w_29 = t;
            if(((o_29 != NULL) && (o_29 != w_29)))
              _fail(w_29);
            else
              o_29 = w_29;
          }
        }
      }
  }
  t = n_13;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(o_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm a_30 = NULL;
    a_30 = t;
    z_29 :
    if(!(match_string(a_30, "-v")))
      {
        if(!(match_string(a_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_w_13;
    t = set_config_0(t);
    t = term_x_13;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_n_14;
    return(t);
  }
  t = Option_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm d_30 = NULL;
    d_30 = t;
    b_30 :
    if(!(match_string(d_30, "-k")))
      {
        if(!(match_string(d_30, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm o_14;
    o_14 = t;
    {
      ATerm e_30 = NULL;
      ATerm f_30 = NULL;
      t = string_to_int_0(t);
      {
        f_30 = t;
        if(((e_30 != NULL) && (e_30 != f_30)))
          _fail(f_30);
        else
          e_30 = f_30;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(e_30));
        t = set_config_0(t);
      }
    }
    t = o_14;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  t = ArgOption_3(t, t_1, u_1, v_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_string_to_int(not_null(i_30));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm t_30 = NULL;
        t_30 = t;
        o_30 :
        if(!(match_string(t_30, "-S")))
          {
            if(!(match_string(t_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = term_t_14;
        t = set_config_0(t);
        t = term_u_14;
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_v_14;
        return(t);
      }
      t = Option_3(t, w_1, x_1, y_1);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm u_30 = NULL;
              u_30 = t;
              p_30 :
              if(!(match_string(u_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm x_30 = NULL;
              ATerm y_14;
              y_14 = t;
              {
                ATerm v_30 = NULL;
                ATerm w_30 = NULL;
                t = string_to_int_0(t);
                {
                  w_30 = t;
                  if(((v_30 != NULL) && (v_30 != w_30)))
                    _fail(w_30);
                  else
                    v_30 = w_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_12, not_null(v_30));
                  t = set_config_0(t);
                }
              }
              t = y_14;
              {
                ATerm y_30 = NULL;
                y_30 = t;
                if(((x_30 != NULL) && (x_30 != y_30)))
                  _fail(y_30);
                else
                  x_30 = y_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_30));
              }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_z_14;
              return(t);
            }
            t = ArgOption_3(t, z_1, d_2, e_2);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            {
              ATerm f_2 (ATerm t)
              {
                ATerm z_30 = NULL;
                z_30 = t;
                s_30 :
                if(!(match_string(z_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_b_15;
                t = set_config_0(t);
                t = term_c_15;
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = term_d_15;
                return(t);
              }
              t = Option_3(t, f_2, q_3, v_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
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
            t = keep_option_0(t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm f_31 = NULL;
    f_31 = t;
    c_31 :
    if(!(match_string(f_31, "-o")))
      {
        if(!(match_string(f_31, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm i_31 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm g_31 = NULL;
      ATerm h_31 = NULL;
      h_31 = t;
      if(((g_31 != NULL) && (g_31 != h_31)))
        _fail(h_31);
      else
        g_31 = h_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_15, not_null(g_31));
        t = set_config_0(t);
      }
    }
    t = i_15;
    {
      ATerm j_31 = NULL;
      j_31 = t;
      if(((i_31 != NULL) && (i_31 != j_31)))
        _fail(j_31);
      else
        i_31 = j_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_31));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = ArgOption_3(t, w_3, x_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm n_31 = NULL;
          n_31 = t;
          m_31 :
          if(!(match_string(n_31, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_e_16;
          t = set_config_0(t);
          t = term_h_16;
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_i_16;
          return(t);
        }
        t = Option_3(t, a_4, b_4, c_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t_31 = t;
  r_31 :
  if(match_string(t_31, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
        {
          u_31 = ATgetFirst((ATermList) t_31);
          v_31 = (ATerm) ATgetNext((ATermList) t_31);
          s_31 :
          if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
            {
              w_31 = ATgetFirst((ATermList) v_31);
              x_31 = (ATerm) ATgetNext((ATermList) v_31);
              {
                ATerm b_32 = NULL;
                ATerm j_16;
                j_16 = t;
                {
                  t = not_null(u_31);
                  t = l_0(t);
                }
                t = j_16;
                {
                  ATerm c_32 = NULL;
                  t = not_null(w_31);
                  {
                    t = m_0(t);
                    {
                      c_32 = t;
                      if(((b_32 != NULL) && (b_32 != c_32)))
                        _fail(c_32);
                      else
                        b_32 = c_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_31)), not_null(b_32));
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
  ATerm d_4 (ATerm t)
  {
    ATerm j_32 = NULL;
    j_32 = t;
    g_32 :
    if(!(match_string(j_32, "-i")))
      {
        if(!(match_string(j_32, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm m_32 = NULL;
    ATerm m_16;
    m_16 = t;
    {
      ATerm k_32 = NULL;
      ATerm l_32 = NULL;
      l_32 = t;
      if(((k_32 != NULL) && (k_32 != l_32)))
        _fail(l_32);
      else
        k_32 = l_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(k_32));
        t = set_config_0(t);
      }
    }
    t = m_16;
    {
      ATerm n_32 = NULL;
      n_32 = t;
      if(((m_32 != NULL) && (m_32 != n_32)))
        _fail(n_32);
      else
        m_32 = n_32;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_32));
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = ArgOption_3(t, d_4, i_4, t_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = p_16;
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATempty, term_v_16));
  {
    t = printnl_0(t);
    {
      t = term_c_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  t = SSL_TicksToSeconds(not_null(r_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_32), not_null(y_32));
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            t = SSL_addr(not_null(x_32), not_null(y_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_88(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
        f_33 = t;
        e_33 :
        if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
          {
            g_33 = ATgetFirst((ATermList) f_33);
            h_33 = (ATerm) ATgetNext((ATermList) f_33);
            {
              ATerm k_33 = NULL;
              ATerm l_33 = NULL;
              t = not_null(h_33);
              {
                t = foldr_2(t, f_88, g_88);
                {
                  l_33 = t;
                  if(((k_33 != NULL) && (k_33 != l_33)))
                    _fail(l_33);
                  else
                    k_33 = l_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(k_33));
                t = g_88(t);
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
ATerm crush_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm s_33 = NULL;
  ATerm u_33 = NULL;
  s_33 = t;
  {
    ATerm v_33 = NULL;
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    t = not_null(s_33);
    {
      v_33 = t;
      {
        t = SSL_explode_term(not_null(v_33));
        {
          x_33 = t;
          r_33 :
          if(match_cons(x_33, sym__2))
            {
              y_33 = ATgetArgument(x_33, 0);
              z_33 = ATgetArgument(x_33, 1);
              if(((u_33 != NULL) && (u_33 != z_33)))
                _fail(z_33);
              else
                u_33 = z_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_33);
      t = foldr_2(t, d_87, e_87);
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
    ATerm u_4 (ATerm t)
    {
      t = term_t_5;
      return(t);
    }
    t = crush_2(t, u_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm e_17;
        e_17 = t;
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_34), not_null(h_34));
              ;
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              t = SSL_gtr(not_null(g_34), not_null(h_34));
            }
        }
        t = e_17;
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
  ATerm n_34 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
      o_34 = t;
      m_34 :
      if(match_cons(o_34, sym__2))
        {
          p_34 = ATgetArgument(o_34, 0);
          q_34 = ATgetArgument(o_34, 1);
          {
            if(((n_34 != NULL) && (n_34 != p_34)))
              _fail(p_34);
            else
              n_34 = p_34;
            if(((n_34 != NULL) && (n_34 != q_34)))
              _fail(q_34);
            else
              n_34 = q_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm l_17;
    l_17 = t;
    {
      ATerm t_34 = NULL;
      ATerm u_34 = NULL;
      t = term_q_12;
      {
        t = get_config_0(t);
        {
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_34), term_c_11);
        t = geq_0(t);
      }
    }
    t = l_17;
    t = m_95(t);
    return(t);
  }
  t = try_1(t, v_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm y_34 = NULL,b_35 = NULL;
    ATerm m_17;
    m_17 = t;
    {
      ATerm z_34 = NULL;
      t = run_time_0(t);
      {
        z_34 = t;
        if(((y_34 != NULL) && (y_34 != z_34)))
          _fail(z_34);
        else
          y_34 = z_34;
      }
    }
    t = m_17;
    {
      ATerm c_35 = NULL;
      t = term_n_17;
      {
        t = get_config_0(t);
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), not_null(y_34)), term_o_17), not_null(b_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_4);
  {
    t = term_t_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Version_0))
    {
      ATerm l_35 = NULL,n_35 = NULL;
      ATerm q_17;
      q_17 = t;
      {
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(j_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
      }
      t = q_17;
      {
        ATerm o_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_35));
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
        t = not_null(n_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
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
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_4);
  t = s_93(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_table_create(not_null(t_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  {
    ATerm v_17;
    v_17 = t;
    {
      t = term_w_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, not_null(z_35));
          t = table_put_0(t);
        }
      }
    }
    t = v_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = SSL_table_destroy(not_null(d_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_exit(not_null(h_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  k_36 :
  if(((ATgetType(l_36) == AT_LIST) && ATisEmpty(l_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
        {
          m_36 = ATgetFirst((ATermList) l_36);
          n_36 = (ATerm) ATgetNext((ATermList) l_36);
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
  ATerm y_17;
  y_17 = t;
  {
    ATerm q_36 = NULL;
    ATerm t_36 = NULL;
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm r_36 = NULL;
          ATerm s_36 = NULL;
          s_36 = t;
          if(((r_36 != NULL) && (r_36 != s_36)))
            _fail(s_36);
          else
            r_36 = s_36;
          t = (ATerm) ATinsert(ATempty, not_null(r_36));
        }
      }
    {
      t_36 = t;
      if(((q_36 != NULL) && (q_36 != t_36)))
        _fail(t_36);
      else
        q_36 = t_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(q_36));
      t = printnl_0(t);
    }
  }
  t = y_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_g_18), term_c_18), term_b_18);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm w_36 (ATerm t)
  {
    ATerm l_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = l_18;
        t = Cons_2(t, v_81, w_36);
      }
    return(t);
  }
  t = w_36(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  f_37 = t;
  c_37 :
  if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
    {
      d_37 = ATgetFirst((ATermList) f_37);
      e_37 = (ATerm) ATgetNext((ATermList) f_37);
      {
        ATerm i_37 = NULL;
        t = not_null(e_37);
        {
          ATerm q_18;
          q_18 = t;
          {
            ATerm j_37 = NULL,l_37 = NULL,n_37 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              ATerm k_37 = NULL;
              t = j_0(t);
              {
                k_37 = t;
                if(((j_37 != NULL) && (j_37 != k_37)))
                  _fail(k_37);
                else
                  j_37 = k_37;
              }
            }
            t = r_18;
            {
              ATerm m_37 = NULL;
              t = not_null(d_37);
              {
                t = i_0(t);
                {
                  m_37 = t;
                  if(((l_37 != NULL) && (l_37 != m_37)))
                    _fail(m_37);
                  else
                    l_37 = m_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_37)), not_null(l_37));
                {
                  n_37 = t;
                  if(((i_37 != NULL) && (i_37 != n_37)))
                    _fail(n_37);
                  else
                    i_37 = n_37;
                }
              }
            }
          }
          t = q_18;
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(i_37);
              return(t);
            }
            t = reverse_acc_2(t, i_0, y_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_37) == AT_LIST) && ATisEmpty(f_37)))
        {
          {
            t = term_w_8;
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
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm u_37 = NULL;
  ATerm v_37 = NULL;
  t = term_w_8;
  {
    t = g_0(t);
    {
      v_37 = t;
      if(((u_37 != NULL) && (u_37 != v_37)))
        _fail(v_37);
      else
        u_37 = v_37;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_18), not_null(u_37)), term_s_18);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm c_38 = NULL,d_38 = NULL;
  c_38 = t;
  b_38 :
  if(match_cons(c_38, sym_Program_1))
    {
      d_38 = ATgetArgument(c_38, 0);
      {
        ATerm g_38 = NULL,i_38 = NULL;
        ATerm h_38 = NULL;
        t = SSLgetAnnotations(not_null(c_38));
        {
          h_38 = t;
          if(((g_38 != NULL) && (g_38 != h_38)))
            _fail(h_38);
          else
            g_38 = h_38;
        }
        {
          t = not_null(d_38);
          {
            ATerm k_38 = NULL;
            t = x_64(t);
            {
              i_38 = t;
              {
                ATerm l_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_38)), not_null(g_38));
                {
                  l_38 = t;
                  if(((k_38 != NULL) && (k_38 != l_38)))
                    _fail(l_38);
                  else
                    k_38 = l_38;
                }
                t = not_null(k_38);
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
  ATerm u_38 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_38 = NULL;
      t = term_n_17;
      {
        t = get_config_0(t);
        {
          v_38 = t;
          if(((u_38 != NULL) && (u_38 != v_38)))
            _fail(v_38);
          else
            u_38 = v_38;
        }
      }
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm w_38 = NULL;
            w_38 = t;
            if(((u_38 != NULL) && (u_38 != w_38)))
              _fail(w_38);
            else
              u_38 = w_38;
            return(t);
          }
          t = Program_1(t, i_5);
          return(t);
        }
        t = option_defined_1(t, h_5);
      }
    }
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = not_null(u_38);
        return(t);
      }
      t = short_description_1(t, k_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = term_x_18;
      {
        t = echo_0(t);
        {
          t = term_f_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm x_38 = NULL;
                  ATerm y_38 = NULL;
                  y_38 = t;
                  if(((x_38 != NULL) && (x_38 != y_38)))
                    _fail(y_38);
                  else
                    x_38 = y_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_g_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm z_38 = NULL;
                    ATerm a_39 = NULL;
                    ATerm n_5 (ATerm t)
                    {
                      t = not_null(u_38);
                      return(t);
                    }
                    t = long_description_1(t, n_5);
                    {
                      a_39 = t;
                      if(((z_38 != NULL) && (z_38 != a_39)))
                        _fail(a_39);
                      else
                        z_38 = a_39;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_38)), term_k_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm p_19;
  p_19 = t;
  {
    ATerm g_39 = NULL;
    ATerm h_39 = NULL;
    h_39 = t;
    if(((g_39 != NULL) && (g_39 != h_39)))
      _fail(h_39);
    else
      g_39 = h_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATempty, not_null(g_39)));
      t = printnl_0(t);
    }
  }
  t = p_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm r_19;
  r_19 = t;
  {
    t = q_92(t);
    t = debug_0(t);
  }
  t = r_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym_Undefined_1))
    {
      p_39 = ATgetArgument(o_39, 0);
      {
        ATerm s_39 = NULL,u_39 = NULL;
        ATerm t_39 = NULL;
        t = SSLgetAnnotations(not_null(o_39));
        {
          t_39 = t;
          if(((s_39 != NULL) && (s_39 != t_39)))
            _fail(t_39);
          else
            s_39 = t_39;
        }
        {
          t = not_null(p_39);
          {
            ATerm w_39 = NULL;
            t = y_64(t);
            {
              u_39 = t;
              {
                ATerm x_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_39)), not_null(s_39));
                {
                  x_39 = t;
                  if(((w_39 != NULL) && (w_39 != x_39)))
                    _fail(x_39);
                  else
                    w_39 = x_39;
                }
                t = not_null(w_39);
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
ATerm fetch_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm c_40 (ATerm t)
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_82, _id);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = Cons_2(t, _id, c_40);
      }
    return(t);
  }
  t = c_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_96 (ATerm))
{
  t = fetch_1(t, p_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Help_0))
    {
      ATerm j_40 = NULL,l_40 = NULL;
      ATerm v_19;
      v_19 = t;
      {
        ATerm k_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
        }
      }
      t = v_19;
      {
        ATerm m_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_40));
        {
          m_40 = t;
          if(((l_40 != NULL) && (l_40 != m_40)))
            _fail(m_40);
          else
            l_40 = m_40;
        }
        t = not_null(l_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_74(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      t = SSL_table_get(not_null(t_40), not_null(u_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym__3))
    {
      c_41 = ATgetArgument(b_41, 0);
      d_41 = ATgetArgument(b_41, 1);
      e_41 = ATgetArgument(b_41, 2);
      {
        ATerm y_19;
        y_19 = t;
        {
          ATerm i_41 = NULL;
          ATerm j_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(d_41));
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = (ATerm) ATempty;
              }
            {
              j_41 = t;
              if(((i_41 != NULL) && (i_41 != j_41)))
                _fail(j_41);
              else
                i_41 = j_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_41), not_null(d_41), (ATerm) ATinsert(CheckATermList(not_null(i_41)), not_null(e_41)));
            t = table_put_0(t);
          }
        }
        t = y_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm n_41 = NULL;
  ATerm o_41 = NULL;
  t = term_w_8;
  {
    t = u_97(t);
    {
      o_41 = t;
      if(((n_41 != NULL) && (n_41 != o_41)))
        _fail(o_41);
      else
        n_41 = o_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_18, term_a_19, not_null(n_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_string(u_41, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(u_41) == AT_LIST) && !(ATisEmpty(u_41))))
        {
          v_41 = ATgetFirst((ATermList) u_41);
          w_41 = (ATerm) ATgetNext((ATermList) u_41);
          {
            ATerm z_41 = NULL;
            ATerm b_20;
            b_20 = t;
            {
              t = not_null(v_41);
              t = a_0(t);
            }
            t = b_20;
            {
              ATerm a_42 = NULL;
              t = term_w_8;
              {
                t = c_0(t);
                {
                  a_42 = t;
                  if(((z_41 != NULL) && (z_41 != a_42)))
                    _fail(a_42);
                  else
                    z_41 = a_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_41)), not_null(z_41));
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
  ATerm o_5 (ATerm t)
  {
    ATerm f_42 = NULL;
    f_42 = t;
    e_42 :
    if(!(match_string(f_42, "--help")))
      {
        if(!(match_string(f_42, "-h")))
          {
            if(!(match_string(f_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_d_20;
    {
      t = set_config_0(t);
      t = term_i_20;
    }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_j_20;
    return(t);
  }
  t = Option_3(t, o_5, u_5, v_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
    {
      j_42 = ATgetFirst((ATermList) i_42);
      k_42 = (ATerm) ATgetNext((ATermList) i_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
    {
      y_42 = ATgetFirst((ATermList) x_42);
      z_42 = (ATerm) ATgetNext((ATermList) x_42);
      {
        ATerm d_43 = NULL,f_43 = NULL;
        ATerm e_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          e_43 = t;
          if(((d_43 != NULL) && (d_43 != e_43)))
            _fail(e_43);
          else
            d_43 = e_43;
        }
        {
          t = not_null(y_42);
          {
            ATerm h_43 = NULL;
            t = r_59(t);
            {
              f_43 = t;
              {
                t = not_null(z_42);
                {
                  ATerm j_43 = NULL;
                  t = s_59(t);
                  {
                    h_43 = t;
                    {
                      ATerm k_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_43)), not_null(f_43)), not_null(d_43));
                      {
                        k_43 = t;
                        if(((j_43 != NULL) && (j_43 != k_43)))
                          _fail(k_43);
                        else
                          j_43 = k_43;
                      }
                      t = not_null(j_43);
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
  ATerm u_43 = NULL;
  u_43 = t;
  t_43 :
  if(((ATgetType(u_43) == AT_LIST) && ATisEmpty(u_43)))
    {
      {
        ATerm w_43 = NULL,y_43 = NULL;
        ATerm k_20;
        k_20 = t;
        {
          ATerm x_43 = NULL;
          t = SSLgetAnnotations(not_null(u_43));
          {
            x_43 = t;
            if(((w_43 != NULL) && (w_43 != x_43)))
              _fail(x_43);
            else
              w_43 = x_43;
          }
        }
        t = k_20;
        {
          ATerm z_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_43));
          {
            z_43 = t;
            if(((y_43 != NULL) && (y_43 != z_43)))
              _fail(z_43);
            else
              y_43 = z_43;
          }
          t = not_null(y_43);
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
  ATerm g_44 = NULL,h_44 = NULL,l_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym__2))
    {
      h_44 = ATgetArgument(g_44, 0);
      l_44 = ATgetArgument(g_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_12, not_null(h_44), not_null(l_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm o_20;
  o_20 = t;
  {
    ATerm w_5 (ATerm t)
    {
      t = term_q_20;
      t = s_97(t);
      return(t);
    }
    t = try_1(t, w_5);
  }
  t = o_20;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm t_44 = NULL;
      ATerm t_20;
      t_20 = t;
      {
        ATerm r_44 = NULL;
        ATerm s_44 = NULL;
        s_44 = t;
        if(((r_44 != NULL) && (r_44 != s_44)))
          _fail(s_44);
        else
          r_44 = s_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(r_44));
          t = set_config_0(t);
        }
      }
      t = t_20;
      {
        ATerm u_44 = NULL;
        u_44 = t;
        if(((t_44 != NULL) && (t_44 != u_44)))
          _fail(u_44);
        else
          t_44 = u_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_44));
      }
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      ATerm u_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              {
                t = s_97(t);
                t = Cons_2(t, _id, y_5);
              }
            }
          ;
          LocalPopChoice(v_20);
        }
      else
        {
          t = u_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_5, y_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  ATerm y_20;
  y_20 = t;
  {
    ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
    d_45 = t;
    z_44 :
    if(match_cons(d_45, sym__3))
      {
        e_45 = ATgetArgument(d_45, 0);
        f_45 = ATgetArgument(d_45, 1);
        g_45 = ATgetArgument(d_45, 2);
        {
          if(((a_45 != NULL) && (a_45 != e_45)))
            _fail(e_45);
          else
            a_45 = e_45;
          {
            if(((b_45 != NULL) && (b_45 != f_45)))
              _fail(f_45);
            else
              b_45 = f_45;
            {
              if(((c_45 != NULL) && (c_45 != g_45)))
                _fail(g_45);
              else
                c_45 = g_45;
              t = SSL_table_put(not_null(a_45), not_null(b_45), not_null(c_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm l_45 = NULL;
  ATerm d_21;
  d_21 = t;
  {
    t = term_e_21;
    t = table_put_0(t);
  }
  t = d_21;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_97(t);
          ;
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_5);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21;
            o_21 = t;
            {
              ATerm p_21 = t;
              int q_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_20;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(q_21);
                }
              else
                {
                  t = p_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_21;
            {
              t = system_usage_0(t);
              {
                t = term_t_5;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm m_45 = NULL;
                  m_45 = t;
                  if(((l_45 != NULL) && (l_45 != m_45)))
                    _fail(m_45);
                  else
                    l_45 = m_45;
                  return(t);
                }
                t = Undefined_1(t, z_6);
                return(t);
              }
              t = option_defined_1(t, y_6);
              {
                ATerm a_7 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_45)), term_v_21);
                  return(t);
                }
                t = say_1(t, a_7);
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_6);
      {
        ATerm w_21;
        w_21 = t;
        {
          t = term_y_18;
          t = table_destroy_0(t);
        }
        t = w_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  t = parse_options_1(t, y_93);
  {
    t = store_options_0(t);
    {
      t = a_94(t);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_93);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm z_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_94(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = z_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm b_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_94(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = b_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_94);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_7, r_94, s_94, c_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm l_94 (ATerm))
{
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm i_22;
      i_22 = t;
      {
        ATerm q_45 = NULL;
        ATerm r_45 = NULL;
        t = term_n_17;
        {
          t = get_config_0(t);
          {
            r_45 = t;
            if(((q_45 != NULL) && (q_45 != r_45)))
              _fail(r_45);
            else
              q_45 = r_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATempty, not_null(q_45)));
          t = printnl_0(t);
        }
      }
      t = i_22;
      return(t);
    }
    t = if_verbose2_1(t, e_7);
    return(t);
  }
  t = iowrap_4(t, j_94, k_94, l_94, d_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm))
{
  t = iowrap_3(t, h_94, i_94, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm f_7 (ATerm t)
  {
    t = _2(t, _id, e_94);
    return(t);
  }
  t = iowrap_2(t, f_7, _fail);
  return(t);
}
ATerm explode_asfix2me_0 (ATerm t)
{
  t = iowrap_1(t, ExplodeAsFix2ME_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = explode_asfix2me_0(t);
  return(t);
}

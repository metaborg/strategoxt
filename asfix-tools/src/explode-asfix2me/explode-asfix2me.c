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
ATerm term_f_23;
ATerm term_m_22;
ATerm term_z_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_b_14;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_d_6;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_range_2, term_x_5, term_d_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_lex_1, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_cf_1, term_f_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_assoc_1, term_l_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_opt_1, term_f_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_g_8);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_x_5);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_5);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_g_8);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_g_8);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_g_8);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__3, term_c_20, term_d_20, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm unflatten_lexical_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm MkLayoutCharacter_0 (ATerm);
ATerm MkLayoutConsList_0 (ATerm);
ATerm unflatten_layout_0 (ATerm);
ATerm MkCfConsList_1 (ATerm, ATerm r_73 (ATerm));
ATerm MkCfConsList_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm MkLexConsList_1 (ATerm, ATerm w_73 (ATerm));
ATerm unflatten_list_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_0 (ATerm));
ATerm list_some_1 (ATerm, ATerm u_81 (ATerm));
ATerm unflatten_literal_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm o_75 (ATerm));
ATerm ExplodeAsFix2ME_0 (ATerm);
ATerm _2 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_93 (ATerm));
ATerm debug_1 (ATerm, ATerm o_92 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_89 (ATerm), ATerm u_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm crush_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_93 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm q_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm n_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_92 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_73 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_97 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_59 (ATerm), ATerm i_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_97 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_97 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_94 (ATerm), ATerm g_94 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_94 (ATerm));
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
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_z_6))))), (ATerm)ATmakeAppl(sym_lex_1, not_null(b_3)), term_c_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(v_3), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_z_6)))), term_c_7), not_null(w_3))));
                                                                                      {
                                                                                        y_3 = t;
                                                                                        if(((x_3 != NULL) && (x_3 != y_3)))
                                                                                          _fail(y_3);
                                                                                        else
                                                                                          x_3 = y_3;
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(b_3))), (ATerm)ATmakeAppl(sym_cf_1, not_null(b_3)), term_c_7), not_null(x_3));
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
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_int_0(t);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_g_7), term_h_7, term_c_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_z_6))), term_g_7, term_c_7), (ATerm) ATinsert(ATempty, not_null(l_4)))));
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
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
                                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_g_7), term_h_7, term_c_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(p_4))), term_g_7, term_c_7), (ATerm) ATinsert(ATempty, not_null(l_4)))));
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
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_g_7), term_h_7, term_c_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, not_null(p_4))), term_g_7, term_c_7), (ATerm) ATinsert(ATempty, not_null(l_4)))));
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
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
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
                ATerm k_7;
                k_7 = t;
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
                t = k_7;
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
                    t = (ATerm) ATinsert(CheckATermList(not_null(k_5)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_h_7), term_h_7), term_h_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_m_7))), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_5)), not_null(t_5))));
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
                                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_h_7), term_e_8, term_c_7), (ATerm) ATinsert(ATempty, not_null(a_7)));
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm MkCfConsList_1 (ATerm t, ATerm r_73 (ATerm))
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
        ATerm f_8;
        f_8 = t;
        {
          ATerm u_7 = NULL;
          t = term_g_8;
          {
            t = r_73(t);
            {
              u_7 = t;
              if(((t_7 != NULL) && (t_7 != u_7)))
                _fail(u_7);
              else
                t_7 = u_7;
            }
          }
        }
        t = f_8;
        {
          ATerm w_7 = NULL;
          t = term_g_8;
          {
            t = r_73(t);
            {
              w_7 = t;
              if(((v_7 != NULL) && (v_7 != w_7)))
                _fail(w_7);
              else
                v_7 = w_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(t_7))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(v_7))), term_c_7), (ATerm) ATinsert(ATempty, not_null(r_7)));
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
                        ATerm h_8;
                        h_8 = t;
                        {
                          ATerm r_8 = NULL;
                          t = term_g_8;
                          {
                            t = r_73(t);
                            {
                              r_8 = t;
                              if(((q_8 != NULL) && (q_8 != r_8)))
                                _fail(r_8);
                              else
                                q_8 = r_8;
                            }
                          }
                        }
                        t = h_8;
                        {
                          ATerm i_8;
                          i_8 = t;
                          {
                            ATerm t_8 = NULL;
                            t = term_g_8;
                            {
                              t = r_73(t);
                              {
                                t_8 = t;
                                if(((s_8 != NULL) && (s_8 != t_8)))
                                  _fail(t_8);
                                else
                                  s_8 = t_8;
                              }
                            }
                          }
                          t = i_8;
                          {
                            ATerm j_8;
                            j_8 = t;
                            {
                              ATerm v_8 = NULL;
                              t = term_g_8;
                              {
                                t = r_73(t);
                                {
                                  v_8 = t;
                                  if(((u_8 != NULL) && (u_8 != v_8)))
                                    _fail(v_8);
                                  else
                                    u_8 = v_8;
                                }
                              }
                            }
                            t = j_8;
                            {
                              ATerm k_8;
                              k_8 = t;
                              {
                                ATerm x_8 = NULL;
                                t = term_g_8;
                                {
                                  t = r_73(t);
                                  {
                                    x_8 = t;
                                    if(((w_8 != NULL) && (w_8 != x_8)))
                                      _fail(x_8);
                                    else
                                      w_8 = x_8;
                                  }
                                }
                              }
                              t = k_8;
                              {
                                ATerm z_8 = NULL;
                                t = term_g_8;
                                {
                                  t = r_73(t);
                                  {
                                    z_8 = t;
                                    if(((y_8 != NULL) && (y_8 != z_8)))
                                      _fail(z_8);
                                    else
                                      y_8 = z_8;
                                  }
                                }
                                {
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_8)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(s_8)))), term_e_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(q_8)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(u_8))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_m_7))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(w_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(y_8))), term_c_7), (ATerm) ATinsert(ATempty, not_null(c_8)))), not_null(a_8)), not_null(y_7))));
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
ATerm MkCfConsList_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
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
        ATerm l_8;
        l_8 = t;
        {
          ATerm j_10 = NULL;
          t = term_g_8;
          {
            t = t_73(t);
            {
              j_10 = t;
              if(((i_10 != NULL) && (i_10 != j_10)))
                _fail(j_10);
              else
                i_10 = j_10;
            }
          }
        }
        t = l_8;
        {
          ATerm m_8;
          m_8 = t;
          {
            ATerm l_10 = NULL;
            t = term_g_8;
            {
              t = t_73(t);
              {
                l_10 = t;
                if(((k_10 != NULL) && (k_10 != l_10)))
                  _fail(l_10);
                else
                  k_10 = l_10;
              }
            }
          }
          t = m_8;
          {
            ATerm n_10 = NULL;
            t = term_g_8;
            {
              t = u_73(t);
              {
                n_10 = t;
                if(((m_10 != NULL) && (m_10 != n_10)))
                  _fail(n_10);
                else
                  m_10 = n_10;
              }
            }
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(i_10))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(k_10), not_null(m_10))), term_c_7), (ATerm) ATinsert(ATempty, not_null(g_10)));
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
                                ATerm n_8;
                                n_8 = t;
                                {
                                  ATerm o_11 = NULL;
                                  t = term_g_8;
                                  {
                                    t = t_73(t);
                                    {
                                      o_11 = t;
                                      if(((n_11 != NULL) && (n_11 != o_11)))
                                        _fail(o_11);
                                      else
                                        n_11 = o_11;
                                    }
                                  }
                                }
                                t = n_8;
                                {
                                  ATerm o_8;
                                  o_8 = t;
                                  {
                                    ATerm q_11 = NULL;
                                    t = term_g_8;
                                    {
                                      t = u_73(t);
                                      {
                                        q_11 = t;
                                        if(((p_11 != NULL) && (p_11 != q_11)))
                                          _fail(q_11);
                                        else
                                          p_11 = q_11;
                                      }
                                    }
                                  }
                                  t = o_8;
                                  {
                                    ATerm p_8;
                                    p_8 = t;
                                    {
                                      ATerm s_11 = NULL;
                                      t = term_g_8;
                                      {
                                        t = u_73(t);
                                        {
                                          s_11 = t;
                                          if(((r_11 != NULL) && (r_11 != s_11)))
                                            _fail(s_11);
                                          else
                                            r_11 = s_11;
                                        }
                                      }
                                    }
                                    t = p_8;
                                    {
                                      ATerm a_9;
                                      a_9 = t;
                                      {
                                        ATerm u_11 = NULL;
                                        t = term_g_8;
                                        {
                                          t = t_73(t);
                                          {
                                            u_11 = t;
                                            if(((t_11 != NULL) && (t_11 != u_11)))
                                              _fail(u_11);
                                            else
                                              t_11 = u_11;
                                          }
                                        }
                                      }
                                      t = a_9;
                                      {
                                        ATerm b_9;
                                        b_9 = t;
                                        {
                                          ATerm w_11 = NULL;
                                          t = term_g_8;
                                          {
                                            t = u_73(t);
                                            {
                                              w_11 = t;
                                              if(((v_11 != NULL) && (v_11 != w_11)))
                                                _fail(w_11);
                                              else
                                                v_11 = w_11;
                                            }
                                          }
                                        }
                                        t = b_9;
                                        {
                                          ATerm c_9;
                                          c_9 = t;
                                          {
                                            ATerm y_11 = NULL;
                                            t = term_g_8;
                                            {
                                              t = t_73(t);
                                              {
                                                y_11 = t;
                                                if(((x_11 != NULL) && (x_11 != y_11)))
                                                  _fail(y_11);
                                                else
                                                  x_11 = y_11;
                                              }
                                            }
                                          }
                                          t = c_9;
                                          {
                                            ATerm e_9;
                                            e_9 = t;
                                            {
                                              ATerm a_12 = NULL;
                                              t = term_g_8;
                                              {
                                                t = u_73(t);
                                                {
                                                  a_12 = t;
                                                  if(((z_11 != NULL) && (z_11 != a_12)))
                                                    _fail(a_12);
                                                  else
                                                    z_11 = a_12;
                                                }
                                              }
                                            }
                                            t = e_9;
                                            {
                                              ATerm f_9;
                                              f_9 = t;
                                              {
                                                ATerm c_12 = NULL;
                                                t = term_g_8;
                                                {
                                                  t = t_73(t);
                                                  {
                                                    c_12 = t;
                                                    if(((b_12 != NULL) && (b_12 != c_12)))
                                                      _fail(c_12);
                                                    else
                                                      b_12 = c_12;
                                                  }
                                                }
                                              }
                                              t = f_9;
                                              {
                                                ATerm g_9;
                                                g_9 = t;
                                                {
                                                  ATerm e_12 = NULL;
                                                  t = term_g_8;
                                                  {
                                                    t = t_73(t);
                                                    {
                                                      e_12 = t;
                                                      if(((d_12 != NULL) && (d_12 != e_12)))
                                                        _fail(e_12);
                                                      else
                                                        d_12 = e_12;
                                                    }
                                                  }
                                                }
                                                t = g_9;
                                                {
                                                  ATerm g_12 = NULL;
                                                  t = term_g_8;
                                                  {
                                                    t = u_73(t);
                                                    {
                                                      g_12 = t;
                                                      if(((f_12 != NULL) && (f_12 != g_12)))
                                                        _fail(g_12);
                                                      else
                                                        f_12 = g_12;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(t_11), not_null(v_11)))), term_e_8), not_null(r_11)), term_e_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(n_11), not_null(p_11)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(x_11), not_null(z_11))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_m_7))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(b_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(d_12), not_null(f_12))), term_c_7), (ATerm) ATinsert(ATempty, not_null(x_10)))), not_null(v_10)), not_null(t_10)), not_null(r_10)), not_null(p_10))));
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
ATerm MkLexConsList_1 (ATerm t, ATerm w_73 (ATerm))
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
              ATerm h_9;
              h_9 = t;
              {
                ATerm v_13 = NULL;
                t = term_g_8;
                {
                  t = w_73(t);
                  {
                    v_13 = t;
                    if(((u_13 != NULL) && (u_13 != v_13)))
                      _fail(v_13);
                    else
                      u_13 = v_13;
                  }
                }
              }
              t = h_9;
              {
                ATerm x_13 = NULL;
                t = term_g_8;
                {
                  t = w_73(t);
                  {
                    x_13 = t;
                    if(((w_13 != NULL) && (w_13 != x_13)))
                      _fail(x_13);
                    else
                      w_13 = x_13;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(u_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(w_13))), term_c_7), (ATerm) ATinsert(ATempty, not_null(m_13)));
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
                  ATerm i_9;
                  i_9 = t;
                  {
                    ATerm d_14 = NULL;
                    t = term_g_8;
                    {
                      t = w_73(t);
                      {
                        d_14 = t;
                        if(((c_14 != NULL) && (c_14 != d_14)))
                          _fail(d_14);
                        else
                          c_14 = d_14;
                      }
                    }
                  }
                  t = i_9;
                  {
                    ATerm j_9;
                    j_9 = t;
                    {
                      ATerm f_14 = NULL;
                      t = term_g_8;
                      {
                        t = w_73(t);
                        {
                          f_14 = t;
                          if(((e_14 != NULL) && (e_14 != f_14)))
                            _fail(f_14);
                          else
                            e_14 = f_14;
                        }
                      }
                    }
                    t = j_9;
                    {
                      ATerm k_9;
                      k_9 = t;
                      {
                        ATerm h_14 = NULL;
                        t = term_g_8;
                        {
                          t = w_73(t);
                          {
                            h_14 = t;
                            if(((g_14 != NULL) && (g_14 != h_14)))
                              _fail(h_14);
                            else
                              g_14 = h_14;
                          }
                        }
                      }
                      t = k_9;
                      {
                        ATerm l_9;
                        l_9 = t;
                        {
                          ATerm j_14 = NULL;
                          t = term_g_8;
                          {
                            t = w_73(t);
                            {
                              j_14 = t;
                              if(((i_14 != NULL) && (i_14 != j_14)))
                                _fail(j_14);
                              else
                                i_14 = j_14;
                            }
                          }
                        }
                        t = l_9;
                        {
                          ATerm m_9;
                          m_9 = t;
                          {
                            ATerm l_14 = NULL;
                            t = term_g_8;
                            {
                              t = w_73(t);
                              {
                                l_14 = t;
                                if(((k_14 != NULL) && (k_14 != l_14)))
                                  _fail(l_14);
                                else
                                  k_14 = l_14;
                              }
                            }
                          }
                          t = m_9;
                          {
                            ATerm n_9;
                            n_9 = t;
                            {
                              ATerm n_14 = NULL;
                              t = term_g_8;
                              {
                                t = w_73(t);
                                {
                                  n_14 = t;
                                  if(((m_14 != NULL) && (m_14 != n_14)))
                                    _fail(n_14);
                                  else
                                    m_14 = n_14;
                                }
                              }
                            }
                            t = n_9;
                            {
                              ATerm p_14 = NULL;
                              t = term_g_8;
                              {
                                t = w_73(t);
                                {
                                  p_14 = t;
                                  if(((o_14 != NULL) && (o_14 != p_14)))
                                    _fail(p_14);
                                  else
                                    o_14 = p_14;
                                }
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(p_13)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(e_14)))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(c_14)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(g_14))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_m_7))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(m_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(o_14))), term_c_7), (ATerm) ATinsert(ATempty, not_null(o_13)))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(i_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(k_14))), term_c_7), (ATerm) ATinsert(ATempty, not_null(m_13))))));
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
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(e_16)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(e_16))), term_c_7), (ATerm) ATinsert(ATempty, not_null(o_16)));
                      }
                    }
                  else
                    {
                      if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                        {
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(e_16))), term_c_7), (ATerm) ATempty);
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
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(f_16), not_null(y_15)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(f_16), not_null(y_15))), term_c_7), (ATerm) ATinsert(ATempty, not_null(a_17)));
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(f_16), not_null(y_15))), term_c_7), (ATerm) ATempty);
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
                                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(f_16)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_16))), term_c_7), (ATerm) ATinsert(ATempty, not_null(l_17)));
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_16))), term_c_7), (ATerm) ATempty);
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
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 (ATerm t)
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = Cons_2(t, o_0, s_18);
          }
        return(t);
      }
      t = s_18(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
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
ATerm list_some_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm x_18 (ATerm t)
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_81, _id);
        LocalPopChoice(t_9);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm u_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_81(t);
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = u_9;
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
        t = s_9;
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
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(q_19), (ATerm)ATmakeAppl(sym_lit_1, not_null(n_19)), term_c_7), not_null(p_19));
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
ATerm bottomup_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    t = bottomup_1(t, o_75);
    return(t);
  }
  t = _all(t, v_0);
  t = o_75(t);
  return(t);
}
ATerm ExplodeAsFix2ME_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_literal_0(t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
        }
      }
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = unflatten_list_0(t);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          {
          }
        }
      {
        ATerm a_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = unflatten_layout_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = a_10;
            {
            }
          }
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = unflatten_lexical_0(t);
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
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
ATerm _2 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm))
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
            t = y_57(t);
            {
              r_20 = t;
              {
                t = not_null(l_20);
                {
                  ATerm v_20 = NULL;
                  t = z_57(t);
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
  ATerm c_11;
  c_11 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_11), not_null(e_21)), term_e_11));
      {
        t = printnl_0(t);
        {
          t = term_g_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_11;
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
        ATerm h_11;
        h_11 = t;
        t = SSL_printnl(not_null(l_21), not_null(m_21));
        t = h_11;
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
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
ATerm at_end_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm t_22 (ATerm t)
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_22);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          t = Nil_0(t);
          t = f_82(t);
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
  ATerm m_11 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = m_11;
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
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = SSL_is_string(not_null(h_23));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = k_12;
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm p_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = p_12;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, a_1);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
              q_23 = t;
              p_23 :
              if(match_cons(q_23, sym_Path_1))
                {
                  r_23 = ATgetArgument(q_23, 0);
                  t = not_null(r_23);
                }
              else
                {
                  if(match_cons(q_23, sym_Var_1))
                    {
                      r_23 = ATgetArgument(q_23, 0);
                      {
                        t = not_null(r_23);
                        {
                          ATerm r_12 = t;
                          int s_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_12);
                            }
                          else
                            {
                              t = r_12;
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_t_12;
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
                      if(match_cons(q_23, sym_Prefix_2))
                        {
                          r_23 = ATgetArgument(q_23, 0);
                          s_23 = ATgetArgument(q_23, 1);
                          {
                            ATerm x_23 = NULL,z_23 = NULL;
                            ATerm u_12;
                            u_12 = t;
                            {
                              ATerm y_23 = NULL;
                              t = not_null(r_23);
                              {
                                t = eval_config_0(t);
                                {
                                  y_23 = t;
                                  if(((x_23 != NULL) && (x_23 != y_23)))
                                    _fail(y_23);
                                  else
                                    x_23 = y_23;
                                }
                              }
                            }
                            t = u_12;
                            {
                              ATerm a_24 = NULL;
                              t = not_null(s_23);
                              {
                                t = eval_config_0(t);
                                {
                                  a_24 = t;
                                  if(((z_23 != NULL) && (z_23 != a_24)))
                                    _fail(a_24);
                                  else
                                    z_23 = a_24;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), not_null(z_23));
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
  ATerm i_24 = NULL;
  i_24 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(i_24));
    {
      t = table_get_0(t);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm y_12;
              y_12 = t;
              {
                ATerm k_24 = NULL;
                ATerm l_24 = NULL;
                l_24 = t;
                if(((k_24 != NULL) && (k_24 != l_24)))
                  _fail(l_24);
                else
                  k_24 = l_24;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_12, not_null(i_24), not_null(k_24));
                  t = table_put_0(t);
                }
              }
              t = y_12;
            }
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_95 (ATerm))
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13;
      b_13 = t;
      {
        ATerm p_24 = NULL;
        ATerm q_24 = NULL;
        t = term_c_13;
        {
          t = get_config_0(t);
          {
            q_24 = t;
            if(((p_24 != NULL) && (p_24 != q_24)))
              _fail(q_24);
            else
              p_24 = q_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), term_d_13);
          t = geq_0(t);
        }
      }
      t = b_13;
      t = l_95(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym__2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      t = SSL_WriteToTextFile(not_null(v_24), not_null(w_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      t = SSL_WriteToBinaryFile(not_null(d_25), not_null(e_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_28 = NULL;
  ATerm e_13;
  e_13 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm d_28 = NULL,e_28 = NULL;
            d_28 = t;
            j_25 :
            if(match_cons(d_28, sym_Output_1))
              {
                e_28 = ATgetArgument(d_28, 0);
                if(((c_28 != NULL) && (c_28 != e_28)))
                  _fail(e_28);
                else
                  c_28 = e_28;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, d_1);
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          {
            ATerm f_28 = NULL;
            t = term_h_13;
            {
              f_28 = t;
              if(((c_28 != NULL) && (c_28 != f_28)))
                _fail(f_28);
              else
                c_28 = f_28;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = e_13;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(c_28);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm i_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm g_28 = NULL;
              g_28 = t;
              l_25 :
              if(!(match_cons(g_28, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(q_13);
        }
      else
        {
          t = i_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm m_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  ATerm r_13;
  r_13 = t;
  t = dtime_0(t);
  t = r_13;
  {
    t = s_93(t);
    {
      ATerm s_13;
      s_13 = t;
      {
        ATerm n_28 = NULL;
        t = dtime_0(t);
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
      }
      t = s_13;
      {
        o_28 = t;
        l_28 :
        if(match_cons(o_28, sym__2))
          {
            p_28 = ATgetArgument(o_28, 0);
            q_28 = ATgetArgument(o_28, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_28)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_28))), not_null(q_28));
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
ATerm debug_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm t_13;
  t_13 = t;
  {
    ATerm x_28 = NULL,z_28 = NULL;
    ATerm y_13;
    y_13 = t;
    {
      ATerm y_28 = NULL;
      t = o_92(t);
      {
        y_28 = t;
        if(((x_28 != NULL) && (x_28 != y_28)))
          _fail(y_28);
        else
          x_28 = y_28;
      }
    }
    t = y_13;
    {
      ATerm a_29 = NULL;
      a_29 = t;
      if(((z_28 != NULL) && (z_28 != a_29)))
        _fail(a_29);
      else
        z_28 = a_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_28)), not_null(x_28)));
        t = printnl_0(t);
      }
    }
  }
  t = t_13;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_29 = NULL;
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_29 = NULL;
      f_29 = t;
      {
        if(((e_29 != NULL) && (e_29 != f_29)))
          _fail(f_29);
        else
          e_29 = f_29;
        t = SSL_ReadFromFile(not_null(e_29));
      }
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm i_1 (ATerm t)
        {
          t = term_b_14;
          return(t);
        }
        t = debug_1(t, i_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_89 (ATerm), ATerm u_89 (ATerm))
{
  ATerm o_29 = NULL,q_29 = NULL;
  ATerm r_14;
  r_14 = t;
  {
    ATerm p_29 = NULL;
    t = t_89(t);
    {
      p_29 = t;
      if(((o_29 != NULL) && (o_29 != p_29)))
        _fail(p_29);
      else
        o_29 = p_29;
    }
  }
  t = r_14;
  {
    ATerm r_29 = NULL;
    t = u_89(t);
    {
      r_29 = t;
      if(((q_29 != NULL) && (q_29 != r_29)))
        _fail(r_29);
      else
        q_29 = r_29;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(q_29));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_29 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm y_29 = NULL,z_29 = NULL;
          y_29 = t;
          v_29 :
          if(match_cons(y_29, sym_Input_1))
            {
              z_29 = ATgetArgument(y_29, 0);
              if(((x_29 != NULL) && (x_29 != z_29)))
                _fail(z_29);
              else
                x_29 = z_29;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, j_1);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          ATerm a_30 = NULL;
          t = term_v_14;
          {
            a_30 = t;
            if(((x_29 != NULL) && (x_29 != a_30)))
              _fail(a_30);
            else
              x_29 = a_30;
          }
        }
      }
  }
  t = s_14;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(x_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
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
  ATerm m_1 (ATerm t)
  {
    t = term_x_14;
    t = set_config_0(t);
    t = term_y_14;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_z_14;
    return(t);
  }
  t = Option_3(t, l_1, m_1, q_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
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
  ATerm s_1 (ATerm t)
  {
    ATerm a_15;
    a_15 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(l_30));
        t = set_config_0(t);
      }
    }
    t = a_15;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_c_15;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
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
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
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
      ATerm v_1 (ATerm t)
      {
        t = term_f_15;
        t = set_config_0(t);
        t = term_g_15;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_h_15;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
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
            ATerm y_1 (ATerm t)
            {
              ATerm b_31 = NULL;
              ATerm k_15;
              k_15 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(z_30));
                  t = set_config_0(t);
                }
              }
              t = k_15;
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
            ATerm z_1 (ATerm t)
            {
              t = term_l_15;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm c_2 (ATerm t)
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
              ATerm d_2 (ATerm t)
              {
                t = term_n_15;
                t = set_config_0(t);
                t = term_o_15;
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_p_15;
                return(t);
              }
              t = Option_3(t, c_2, d_2, e_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_15 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = q_15;
      {
        ATerm i_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_16);
          }
        else
          {
            t = i_16;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
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
  ATerm h_2 (ATerm t)
  {
    ATerm m_31 = NULL;
    ATerm m_16;
    m_16 = t;
    {
      ATerm k_31 = NULL;
      ATerm l_31 = NULL;
      l_31 = t;
      if(((k_31 != NULL) && (k_31 != l_31)))
        _fail(l_31);
      else
        k_31 = l_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(k_31));
        t = set_config_0(t);
      }
    }
    t = m_16;
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
  ATerm m_2 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = ArgOption_3(t, f_2, h_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm r_2 (ATerm t)
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
        ATerm u_3 (ATerm t)
        {
          t = term_w_16;
          t = set_config_0(t);
          t = term_x_16;
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = Option_3(t, r_2, u_3, z_3);
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
                ATerm z_16;
                z_16 = t;
                {
                  t = not_null(y_31);
                  t = l_0(t);
                }
                t = z_16;
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
  ATerm a_4 (ATerm t)
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
  ATerm b_4 (ATerm t)
  {
    ATerm q_32 = NULL;
    ATerm c_17;
    c_17 = t;
    {
      ATerm o_32 = NULL;
      ATerm p_32 = NULL;
      p_32 = t;
      if(((o_32 != NULL) && (o_32 != p_32)))
        _fail(p_32);
      else
        o_32 = p_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_17, not_null(o_32));
        t = set_config_0(t);
      }
    }
    t = c_17;
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
  ATerm d_4 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, d_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = f_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATempty, term_n_17));
  {
    t = printnl_0(t);
    {
      t = term_g_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = SSL_TicksToSeconds(not_null(v_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_33), not_null(c_33));
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = SSL_addr(not_null(b_33), not_null(c_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_88(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
        j_33 = t;
        i_33 :
        if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
          {
            k_33 = ATgetFirst((ATermList) j_33);
            l_33 = (ATerm) ATgetNext((ATermList) j_33);
            {
              ATerm o_33 = NULL;
              ATerm p_33 = NULL;
              t = not_null(l_33);
              {
                t = foldr_2(t, e_88, f_88);
                {
                  p_33 = t;
                  if(((o_33 != NULL) && (o_33 != p_33)))
                    _fail(p_33);
                  else
                    o_33 = p_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(o_33));
                t = f_88(t);
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
ATerm crush_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm w_33 = NULL;
  ATerm y_33 = NULL;
  w_33 = t;
  {
    ATerm z_33 = NULL;
    ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
    t = not_null(w_33);
    {
      z_33 = t;
      {
        t = SSL_explode_term(not_null(z_33));
        {
          b_34 = t;
          v_33 :
          if(match_cons(b_34, sym__2))
            {
              c_34 = ATgetArgument(b_34, 0);
              d_34 = ATgetArgument(b_34, 1);
              if(((y_33 != NULL) && (y_33 != d_34)))
                _fail(d_34);
              else
                y_33 = d_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_33);
      t = foldr_2(t, c_87, d_87);
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
    ATerm e_4 (ATerm t)
    {
      t = term_x_5;
      return(t);
    }
    t = crush_2(t, e_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym__2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      {
        ATerm s_17;
        s_17 = t;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_34), not_null(l_34));
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = SSL_gtr(not_null(k_34), not_null(l_34));
            }
        }
        t = s_17;
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
  ATerm r_34 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
      t_34 = t;
      q_34 :
      if(match_cons(t_34, sym__2))
        {
          u_34 = ATgetArgument(t_34, 0);
          v_34 = ATgetArgument(t_34, 1);
          {
            if(((r_34 != NULL) && (r_34 != u_34)))
              _fail(u_34);
            else
              r_34 = u_34;
            if(((r_34 != NULL) && (r_34 != v_34)))
              _fail(v_34);
            else
              r_34 = v_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_95 (ATerm))
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_17;
      z_17 = t;
      {
        ATerm y_34 = NULL;
        ATerm z_34 = NULL;
        t = term_c_13;
        {
          t = get_config_0(t);
          {
            z_34 = t;
            if(((y_34 != NULL) && (y_34 != z_34)))
              _fail(z_34);
            else
              y_34 = z_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), term_g_11);
          t = geq_0(t);
        }
      }
      t = z_17;
      t = k_95(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm d_35 = NULL,f_35 = NULL;
    ATerm a_18;
    a_18 = t;
    {
      ATerm e_35 = NULL;
      t = run_time_0(t);
      {
        e_35 = t;
        if(((d_35 != NULL) && (d_35 != e_35)))
          _fail(e_35);
        else
          d_35 = e_35;
      }
    }
    t = a_18;
    {
      ATerm g_35 = NULL;
      t = term_b_18;
      {
        t = get_config_0(t);
        {
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), not_null(d_35)), term_c_18), not_null(f_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_4);
  {
    t = term_x_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_Version_0))
    {
      ATerm r_35 = NULL,t_35 = NULL;
      ATerm e_18;
      e_18 = t;
      {
        ATerm s_35 = NULL;
        t = SSLgetAnnotations(not_null(n_35));
        {
          s_35 = t;
          if(((r_35 != NULL) && (r_35 != s_35)))
            _fail(s_35);
          else
            r_35 = s_35;
        }
      }
      t = e_18;
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
ATerm need_help_1 (ATerm t, ATerm q_93 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, g_4);
  t = q_93(t);
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
    ATerm p_18;
    p_18 = t;
    {
      t = term_t_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_18, term_u_18, not_null(d_36));
          t = table_put_0(t);
        }
      }
    }
    t = p_18;
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
  ATerm v_18;
  v_18 = t;
  {
    ATerm u_36 = NULL;
    ATerm x_36 = NULL;
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
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
      t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(u_36));
      t = printnl_0(t);
    }
  }
  t = v_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), term_b_19), term_a_19), term_z_18);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm a_37 (ATerm t)
  {
    ATerm e_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = e_19;
        t = Cons_2(t, q_81, a_37);
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
          ATerm k_19;
          k_19 = t;
          {
            ATerm n_37 = NULL,p_37 = NULL,r_37 = NULL;
            ATerm o_19;
            o_19 = t;
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
            t = o_19;
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
          t = k_19;
          {
            ATerm h_4 (ATerm t)
            {
              t = not_null(m_37);
              return(t);
            }
            t = reverse_acc_2(t, i_0, h_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_37) == AT_LIST) && ATisEmpty(j_37)))
        {
          {
            t = term_g_8;
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
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm y_37 = NULL;
  ATerm z_37 = NULL;
  t = term_g_8;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), not_null(y_37)), term_t_19);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_64 (ATerm))
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
            t = n_64(t);
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
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL;
      t = term_b_18;
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
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm y_4 (ATerm t)
          {
            ATerm a_39 = NULL;
            a_39 = t;
            if(((y_38 != NULL) && (y_38 != a_39)))
              _fail(a_39);
            else
              y_38 = a_39;
            return(t);
          }
          t = Program_1(t, y_4);
          return(t);
        }
        t = fetch_1(t, x_4);
      }
    }
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 (ATerm t)
        {
          t = not_null(y_38);
          return(t);
        }
        t = short_description_1(t, z_4);
        t = echo_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
        }
      }
    {
      t = term_b_20;
      {
        t = echo_0(t);
        {
          t = term_e_20;
          {
            t = table_get_0(t);
            {
              ATerm a_5 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, a_5);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm b_39 = NULL;
                  ATerm c_39 = NULL;
                  c_39 = t;
                  if(((b_39 != NULL) && (b_39 != c_39)))
                    _fail(c_39);
                  else
                    b_39 = c_39;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_f_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  ATerm g_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_39 = NULL;
                      ATerm e_39 = NULL;
                      ATerm c_5 (ATerm t)
                      {
                        t = not_null(y_38);
                        return(t);
                      }
                      t = long_description_1(t, c_5);
                      {
                        e_39 = t;
                        if(((d_39 != NULL) && (d_39 != e_39)))
                          _fail(e_39);
                        else
                          d_39 = e_39;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), term_m_20);
                        t = echo_0(t);
                      }
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = g_20;
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
  ATerm n_20;
  n_20 = t;
  {
    ATerm k_39 = NULL;
    ATerm l_39 = NULL;
    l_39 = t;
    if(((k_39 != NULL) && (k_39 != l_39)))
      _fail(l_39);
    else
      k_39 = l_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATempty, not_null(k_39)));
      t = printnl_0(t);
    }
  }
  t = n_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm o_20;
  o_20 = t;
  {
    t = p_92(t);
    t = debug_0(t);
  }
  t = o_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_64 (ATerm))
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
            t = o_64(t);
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
ATerm fetch_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm g_40 (ATerm t)
  {
    ATerm s_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_81, _id);
        LocalPopChoice(u_20);
      }
    else
      {
        t = s_20;
        t = Cons_2(t, _id, g_40);
      }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_96 (ATerm))
{
  t = fetch_1(t, n_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_Help_0))
    {
      ATerm n_40 = NULL,p_40 = NULL;
      ATerm x_20;
      x_20 = t;
      {
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      t = x_20;
      {
        ATerm q_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_40));
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
        t = not_null(p_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_73(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      t = SSL_table_get(not_null(x_40), not_null(y_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym__3))
    {
      g_41 = ATgetArgument(f_41, 0);
      h_41 = ATgetArgument(f_41, 1);
      i_41 = ATgetArgument(f_41, 2);
      {
        ATerm a_21;
        a_21 = t;
        {
          ATerm m_41 = NULL;
          ATerm n_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_41), not_null(h_41));
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = (ATerm) ATempty;
              }
            {
              n_41 = t;
              if(((m_41 != NULL) && (m_41 != n_41)))
                _fail(n_41);
              else
                m_41 = n_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_41), not_null(h_41), (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(i_41)));
            t = table_put_0(t);
          }
        }
        t = a_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm r_41 = NULL;
  ATerm s_41 = NULL;
  t = term_g_8;
  {
    t = s_97(t);
    {
      s_41 = t;
      if(((r_41 != NULL) && (r_41 != s_41)))
        _fail(s_41);
      else
        r_41 = s_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_20, term_d_20, not_null(r_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_string(y_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
        {
          z_41 = ATgetFirst((ATermList) y_41);
          a_42 = (ATerm) ATgetNext((ATermList) y_41);
          {
            ATerm g_42 = NULL;
            ATerm h_21;
            h_21 = t;
            {
              t = not_null(z_41);
              t = a_0(t);
            }
            t = h_21;
            {
              ATerm h_42 = NULL;
              t = term_g_8;
              {
                t = d_0(t);
                {
                  h_42 = t;
                  if(((g_42 != NULL) && (g_42 != h_42)))
                    _fail(h_42);
                  else
                    g_42 = h_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), not_null(g_42));
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
  ATerm d_5 (ATerm t)
  {
    ATerm m_42 = NULL;
    m_42 = t;
    l_42 :
    if(!(match_string(m_42, "--help")))
      {
        if(!(match_string(m_42, "-h")))
          {
            if(!(match_string(m_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_n_21;
    {
      t = set_config_0(t);
      t = term_o_21;
    }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_p_21;
    return(t);
  }
  t = Option_3(t, d_5, l_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
    {
      q_42 = ATgetFirst((ATermList) p_42);
      r_42 = (ATerm) ATgetNext((ATermList) p_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_59 (ATerm), ATerm i_59 (ATerm))
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
    {
      c_43 = ATgetFirst((ATermList) b_43);
      d_43 = (ATerm) ATgetNext((ATermList) b_43);
      {
        ATerm h_43 = NULL,j_43 = NULL;
        ATerm i_43 = NULL;
        t = SSLgetAnnotations(not_null(b_43));
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
        {
          t = not_null(c_43);
          {
            ATerm l_43 = NULL;
            t = h_59(t);
            {
              j_43 = t;
              {
                t = not_null(d_43);
                {
                  ATerm n_43 = NULL;
                  t = i_59(t);
                  {
                    l_43 = t;
                    {
                      ATerm o_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_43)), not_null(j_43)), not_null(h_43));
                      {
                        o_43 = t;
                        if(((n_43 != NULL) && (n_43 != o_43)))
                          _fail(o_43);
                        else
                          n_43 = o_43;
                      }
                      t = not_null(n_43);
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
  ATerm z_43 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && ATisEmpty(z_43)))
    {
      {
        ATerm e_44 = NULL,g_44 = NULL;
        ATerm q_21;
        q_21 = t;
        {
          ATerm f_44 = NULL;
          t = SSLgetAnnotations(not_null(z_43));
          {
            f_44 = t;
            if(((e_44 != NULL) && (e_44 != f_44)))
              _fail(f_44);
            else
              e_44 = f_44;
          }
        }
        t = q_21;
        {
          ATerm h_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_44));
          {
            h_44 = t;
            if(((g_44 != NULL) && (g_44 != h_44)))
              _fail(h_44);
            else
              g_44 = h_44;
          }
          t = not_null(g_44);
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
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym__2))
    {
      o_44 = ATgetArgument(n_44, 0);
      p_44 = ATgetArgument(n_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_12, not_null(o_44), not_null(p_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm s_21;
  s_21 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = q_97(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
        }
      }
  }
  t = s_21;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm x_44 = NULL;
      ATerm a_22;
      a_22 = t;
      {
        ATerm v_44 = NULL;
        ATerm w_44 = NULL;
        w_44 = t;
        if(((v_44 != NULL) && (v_44 != w_44)))
          _fail(w_44);
        else
          v_44 = w_44;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(v_44));
          t = set_config_0(t);
        }
      }
      t = a_22;
      {
        ATerm y_44 = NULL;
        y_44 = t;
        if(((x_44 != NULL) && (x_44 != y_44)))
          _fail(y_44);
        else
          x_44 = y_44;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_44));
      }
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm b_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              {
                t = q_97(t);
                t = Cons_2(t, _id, o_5);
              }
            }
          LocalPopChoice(c_22);
        }
      else
        {
          t = b_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, o_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_45 = NULL,i_45 = NULL,j_45 = NULL;
  ATerm f_22;
  f_22 = t;
  {
    ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
    k_45 = t;
    f_45 :
    if(match_cons(k_45, sym__3))
      {
        l_45 = ATgetArgument(k_45, 0);
        m_45 = ATgetArgument(k_45, 1);
        n_45 = ATgetArgument(k_45, 2);
        {
          if(((g_45 != NULL) && (g_45 != l_45)))
            _fail(l_45);
          else
            g_45 = l_45;
          {
            if(((i_45 != NULL) && (i_45 != m_45)))
              _fail(m_45);
            else
              i_45 = m_45;
            {
              if(((j_45 != NULL) && (j_45 != n_45)))
                _fail(n_45);
              else
                j_45 = n_45;
              t = SSL_table_put(not_null(g_45), not_null(i_45), not_null(j_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_97 (ATerm))
{
  ATerm q_45 = NULL;
  ATerm j_22;
  j_22 = t;
  {
    t = term_m_22;
    t = table_put_0(t);
  }
  t = j_22;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_97(t);
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_5);
    {
      ATerm s_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_22;
          z_22 = t;
          {
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_21;
                t = get_config_0(t);
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = z_22;
          {
            t = system_usage_0(t);
            {
              t = term_x_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_22);
        }
      else
        {
          t = s_22;
          {
            ATerm c_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    ATerm r_45 = NULL;
                    r_45 = t;
                    if(((q_45 != NULL) && (q_45 != r_45)))
                      _fail(r_45);
                    else
                      q_45 = r_45;
                    return(t);
                  }
                  t = Undefined_1(t, r_5);
                  return(t);
                }
                t = fetch_1(t, q_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_45)), term_f_23);
                    return(t);
                  }
                  t = say_1(t, s_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_g_11;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(e_23);
              }
            else
              {
                t = c_23;
                {
                }
              }
          }
        }
      {
        ATerm g_23;
        g_23 = t;
        {
          t = term_c_20;
          t = table_destroy_0(t);
        }
        t = g_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm))
{
  t = parse_options_1(t, w_93);
  {
    t = store_options_0(t);
    {
      t = y_93(t);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_93);
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm k_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_93(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_23);
                }
              else
                {
                  t = k_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_94(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_94);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_5, p_94, q_94, z_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm o_23;
      o_23 = t;
      {
        ATerm u_45 = NULL;
        ATerm v_45 = NULL;
        t = term_b_18;
        {
          t = get_config_0(t);
          {
            v_45 = t;
            if(((u_45 != NULL) && (u_45 != v_45)))
              _fail(v_45);
            else
              u_45 = v_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATempty, not_null(u_45)));
          t = printnl_0(t);
        }
      }
      t = o_23;
      return(t);
    }
    t = if_verbose2_1(t, b_6);
    return(t);
  }
  t = iowrap_4(t, h_94, i_94, j_94, a_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_94 (ATerm), ATerm g_94 (ATerm))
{
  t = iowrap_3(t, f_94, g_94, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    t = _2(t, _id, c_94);
    return(t);
  }
  t = iowrap_2(t, c_6, _fail);
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

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
Symbol sym_Strict_0;
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
ATerm term_n_25;
ATerm term_m_25;
ATerm term_b_25;
ATerm term_t_24;
ATerm term_g_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_i_13;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_h_9;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_i_5;
ATerm term_a_5;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("ReplaceSymbol", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_context_free_syntax_1, (ATerm) ATempty);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_v_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_s_4);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_k_7);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_7);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_s_4);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_s_4);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_e_20);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_s_4);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__3, term_d_20, term_e_20, (ATerm) ATempty);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm s_97 (ATerm));
ATerm ReplaceSymbol_0 (ATerm);
ATerm prod_3 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm assert_1 (ATerm, ATerm q_97 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm iter_star_1 (ATerm, ATerm m_61 (ATerm));
ATerm iter_1 (ATerm, ATerm l_61 (ATerm));
ATerm seq_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm opt_1 (ATerm, ATerm k_61 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm find_inlineables_0 (ATerm);
ATerm inline_lists_and_optionals_0 (ATerm);
ATerm RegularizeOptional_0 (ATerm);
ATerm RegularizeList_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm u_73 (ATerm));
ATerm foldr_3 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm length_0 (ATerm);
ATerm lt_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm comp_comp_2 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm leq_leq_0 (ATerm);
ATerm is_lower_0 (ATerm);
ATerm to_upper_0 (ATerm);
ATerm case_char_1 (ATerm, ATerm v_87 (ATerm));
ATerm strcasecmp_0 (ATerm);
ATerm string_gt_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm ProdGT_0 (ATerm);
ATerm SortL_1 (ATerm, ATerm k_81 (ATerm));
ATerm sort_list_1 (ATerm, ATerm e_81 (ATerm));
ATerm order_productions_0 (ATerm);
ATerm context_free_syntax_1 (ATerm, ATerm g_60 (ATerm));
ATerm regularize_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_73 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm o_89 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm y_97 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm z_97 (ATerm));
ATerm InOutId_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm _2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm Option_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm g_98 (ATerm));
ATerm try_1 (ATerm, ATerm w_69 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm e_98 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_89 (ATerm));
ATerm debug_1 (ATerm, ATerm j_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_93 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm crush_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_93 (ATerm));
ATerm map_1 (ATerm, ATerm u_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_93 (ATerm));
ATerm Program_1 (ATerm, ATerm k_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_58 (ATerm), ATerm l_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_90 (ATerm), ATerm b_90 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm));
ATerm io_idwrap_2 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm));
ATerm sdf_regularize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm t_2 = NULL,h_3 = NULL,i_3 = NULL;
  t_2 = t;
  s_2 :
  if(((ATgetType(t_2) == AT_LIST) && !(ATisEmpty(t_2))))
    {
      h_3 = ATgetFirst((ATermList) t_2);
      i_3 = (ATerm) ATgetNext((ATermList) t_2);
      t = not_null(h_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  a_4 = t;
  w_3 :
  if(match_cons(a_4, sym__2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), not_null(c_4));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm i_4 = NULL;
  ATerm k_4 = NULL;
  i_4 = t;
  {
    ATerm l_4 = NULL;
    t = term_s_4;
    {
      t = s_97(t);
      {
        l_4 = t;
        if(((k_4 != NULL) && (k_4 != l_4)))
          _fail(l_4);
        else
          k_4 = l_4;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(i_4));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ReplaceSymbol_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL,z_4 = NULL;
        t = not_null(v_4);
        {
          ATerm c_0 (ATerm t)
          {
            t = term_a_5;
            return(t);
          }
          t = rewrite_1(t, c_0);
          {
            y_4 = t;
            q_4 :
            if(match_cons(y_4, sym_Defined_1))
              {
                z_4 = ATgetArgument(y_4, 0);
                r_4 :
                if(!(match_string(z_4, "f_0")))
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
        t = (ATerm) ATmakeAppl(sym_opt_1, not_null(v_4));
        ;
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        {
          ATerm c_5 = NULL;
          ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
          t = not_null(v_4);
          {
            ATerm e_0 (ATerm t)
            {
              t = term_a_5;
              return(t);
            }
            t = rewrite_1(t, e_0);
            {
              d_5 = t;
              t_4 :
              if(match_cons(d_5, sym_Defined_2))
                {
                  e_5 = ATgetArgument(d_5, 0);
                  f_5 = ATgetArgument(d_5, 1);
                  u_4 :
                  if(match_string(e_5, "b_0"))
                    {
                      if(((c_5 != NULL) && (c_5 != f_5)))
                        _fail(f_5);
                      else
                        c_5 = f_5;
                    }
                  else
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
          t = not_null(c_5);
        }
      }
  }
  return(t);
}
ATerm prod_3 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_prod_3))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      t_5 = ATgetArgument(q_5, 2);
      {
        ATerm y_5 = NULL,a_6 = NULL;
        ATerm z_5 = NULL;
        t = SSLgetAnnotations(not_null(q_5));
        {
          z_5 = t;
          if(((y_5 != NULL) && (y_5 != z_5)))
            _fail(z_5);
          else
            y_5 = z_5;
        }
        {
          t = not_null(r_5);
          {
            ATerm c_6 = NULL;
            t = x_59(t);
            {
              a_6 = t;
              {
                t = not_null(s_5);
                {
                  ATerm e_6 = NULL;
                  t = y_59(t);
                  {
                    c_6 = t;
                    {
                      t = not_null(t_5);
                      {
                        ATerm g_6 = NULL;
                        t = z_59(t);
                        {
                          e_6 = t;
                          {
                            ATerm h_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(a_6), not_null(c_6), not_null(e_6)), not_null(y_5));
                            {
                              h_6 = t;
                              if(((g_6 != NULL) && (g_6 != h_6)))
                                _fail(h_6);
                              else
                                g_6 = h_6;
                            }
                            t = not_null(g_6);
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
ATerm assert_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      {
        ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
        ATerm b_5;
        b_5 = t;
        {
          ATerm b_7 = NULL;
          ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
          t = q_97(t);
          {
            b_7 = t;
            {
              if(((y_6 != NULL) && (y_6 != b_7)))
                _fail(b_7);
              else
                y_6 = b_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_6), not_null(u_6), not_null(v_6));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_5 = t;
                    int h_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), term_i_5);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_5);
                      }
                    else
                      {
                        t = g_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_7 = t;
                      r_6 :
                      if(((ATgetType(c_7) == AT_LIST) && !(ATisEmpty(c_7))))
                        {
                          d_7 = ATgetFirst((ATermList) c_7);
                          e_7 = (ATerm) ATgetNext((ATermList) c_7);
                          {
                            if(((z_6 != NULL) && (z_6 != d_7)))
                              _fail(d_7);
                            else
                              z_6 = d_7;
                            {
                              if(((a_7 != NULL) && (a_7 != e_7)))
                                _fail(e_7);
                              else
                                a_7 = e_7;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_6), term_i_5, (ATerm) ATinsert(CheckATermList(not_null(a_7)), (ATerm) ATinsert(CheckATermList(not_null(z_6)), not_null(u_6))));
                                t = table_put_0(t);
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
        }
        t = b_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_iter_star_sep_2))
    {
      p_7 = ATgetArgument(o_7, 0);
      q_7 = ATgetArgument(o_7, 1);
      {
        ATerm u_7 = NULL,w_7 = NULL;
        ATerm v_7 = NULL;
        t = SSLgetAnnotations(not_null(o_7));
        {
          v_7 = t;
          if(((u_7 != NULL) && (u_7 != v_7)))
            _fail(v_7);
          else
            u_7 = v_7;
        }
        {
          t = not_null(p_7);
          {
            ATerm y_7 = NULL;
            t = p_61(t);
            {
              w_7 = t;
              {
                t = not_null(q_7);
                {
                  ATerm a_8 = NULL;
                  t = q_61(t);
                  {
                    y_7 = t;
                    {
                      ATerm b_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(w_7), not_null(y_7)), not_null(u_7));
                      {
                        b_8 = t;
                        if(((a_8 != NULL) && (a_8 != b_8)))
                          _fail(b_8);
                        else
                          a_8 = b_8;
                      }
                      t = not_null(a_8);
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
ATerm iter_sep_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(match_cons(n_8, sym_iter_sep_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      p_8 = ATgetArgument(n_8, 1);
      {
        ATerm t_8 = NULL,v_8 = NULL;
        ATerm u_8 = NULL;
        t = SSLgetAnnotations(not_null(n_8));
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
        {
          t = not_null(o_8);
          {
            ATerm x_8 = NULL;
            t = n_61(t);
            {
              v_8 = t;
              {
                t = not_null(p_8);
                {
                  ATerm z_8 = NULL;
                  t = o_61(t);
                  {
                    x_8 = t;
                    {
                      ATerm a_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(v_8), not_null(x_8)), not_null(t_8));
                      {
                        a_9 = t;
                        if(((z_8 != NULL) && (z_8 != a_9)))
                          _fail(a_9);
                        else
                          z_8 = a_9;
                      }
                      t = not_null(z_8);
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
ATerm iter_star_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_iter_star_1))
    {
      m_9 = ATgetArgument(l_9, 0);
      {
        ATerm p_9 = NULL,r_9 = NULL;
        ATerm q_9 = NULL;
        t = SSLgetAnnotations(not_null(l_9));
        {
          q_9 = t;
          if(((p_9 != NULL) && (p_9 != q_9)))
            _fail(q_9);
          else
            p_9 = q_9;
        }
        {
          t = not_null(m_9);
          {
            ATerm t_9 = NULL;
            t = m_61(t);
            {
              r_9 = t;
              {
                ATerm u_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(r_9)), not_null(p_9));
                {
                  u_9 = t;
                  if(((t_9 != NULL) && (t_9 != u_9)))
                    _fail(u_9);
                  else
                    t_9 = u_9;
                }
                t = not_null(t_9);
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
ATerm iter_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_iter_1))
    {
      f_10 = ATgetArgument(e_10, 0);
      {
        ATerm i_10 = NULL,k_10 = NULL;
        ATerm j_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm m_10 = NULL;
            t = l_61(t);
            {
              k_10 = t;
              {
                ATerm n_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(k_10)), not_null(i_10));
                {
                  n_10 = t;
                  if(((m_10 != NULL) && (m_10 != n_10)))
                    _fail(n_10);
                  else
                    m_10 = n_10;
                }
                t = not_null(m_10);
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
ATerm seq_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym_seq_2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      {
        ATerm e_11 = NULL,g_11 = NULL;
        ATerm f_11 = NULL;
        t = SSLgetAnnotations(not_null(y_10));
        {
          f_11 = t;
          if(((e_11 != NULL) && (e_11 != f_11)))
            _fail(f_11);
          else
            e_11 = f_11;
        }
        {
          t = not_null(z_10);
          {
            ATerm i_11 = NULL;
            t = i_61(t);
            {
              g_11 = t;
              {
                t = not_null(a_11);
                {
                  ATerm k_11 = NULL;
                  t = j_61(t);
                  {
                    i_11 = t;
                    {
                      ATerm l_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_2, not_null(g_11), not_null(i_11)), not_null(e_11));
                      {
                        l_11 = t;
                        if(((k_11 != NULL) && (k_11 != l_11)))
                          _fail(l_11);
                        else
                          k_11 = l_11;
                      }
                      t = not_null(k_11);
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
ATerm opt_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_opt_1))
    {
      x_11 = ATgetArgument(w_11, 0);
      {
        ATerm a_12 = NULL,c_12 = NULL;
        ATerm b_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm e_12 = NULL;
            t = k_61(t);
            {
              c_12 = t;
              {
                ATerm f_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(c_12)), not_null(a_12));
                {
                  f_12 = t;
                  if(((e_12 != NULL) && (e_12 != f_12)))
                    _fail(f_12);
                  else
                    e_12 = f_12;
                }
                t = not_null(e_12);
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
ATerm inlineable_0 (ATerm t)
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm l_5 = t;
        if((PushChoice() == 0))
          {
            t = seq_2(t, _id, _id);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_5;
          }
        return(t);
      }
      t = opt_1(t, h_0);
      ;
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_1(t, _id);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm o_5 = t;
              int u_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  ;
                  LocalPopChoice(u_5);
                }
              else
                {
                  t = o_5;
                  {
                    ATerm v_5 = t;
                    int w_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_sep_2(t, _id, _id);
                        ;
                        LocalPopChoice(w_5);
                      }
                    else
                      {
                        t = v_5;
                        t = iter_star_sep_2(t, _id, _id);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm find_inlineables_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  ATerm n_13 (ATerm t)
  {
    t = not_null(c_13);
    {
      t = inlineable_0(t);
      {
        ATerm x_5;
        x_5 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), (ATerm) ATmakeAppl(sym_Defined_2, term_b_6, not_null(c_13)));
          {
            ATerm j_0 (ATerm t)
            {
              t = term_a_5;
              return(t);
            }
            t = assert_1(t, j_0);
          }
        }
        t = x_5;
      }
    }
    t = term_d_6;
    return(t);
  }
  y_12 = t;
  m_12 :
  if(match_cons(y_12, sym_context_free_syntax_1))
    {
      z_12 = ATgetArgument(y_12, 0);
      n_12 :
      if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
        {
          a_13 = ATgetFirst((ATermList) z_12);
          g_13 = (ATerm) ATgetNext((ATermList) z_12);
          o_12 :
          if(match_cons(a_13, sym_prod_3))
            {
              b_13 = ATgetArgument(a_13, 0);
              e_13 = ATgetArgument(a_13, 1);
              f_13 = ATgetArgument(a_13, 2);
              p_12 :
              if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
                {
                  c_13 = ATgetFirst((ATermList) b_13);
                  d_13 = (ATerm) ATgetNext((ATermList) b_13);
                  q_12 :
                  if(((ATgetType(d_13) == AT_LIST) && ATisEmpty(d_13)))
                    {
                      r_12 :
                      if(match_cons(f_13, sym_no_attrs_0))
                        {
                          s_12 :
                          if(((ATgetType(g_13) == AT_LIST) && ATisEmpty(g_13)))
                            {
                              t_12 :
                              if(match_cons(c_13, sym_opt_1))
                                {
                                  v_12 = ATgetArgument(c_13, 0);
                                  u_12 :
                                  if(match_cons(v_12, sym_seq_2))
                                    {
                                      w_12 = ATgetArgument(v_12, 0);
                                      x_12 = ATgetArgument(v_12, 1);
                                      {
                                        ATerm f_6 = t;
                                        int i_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_k_6);
                                            {
                                              ATerm q_0 (ATerm t)
                                              {
                                                t = term_a_5;
                                                return(t);
                                              }
                                              t = assert_1(t, q_0);
                                            }
                                            t = (ATerm) ATmakeAppl(sym_context_free_syntax_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(CheckATermList(not_null(x_12)), not_null(w_12)), not_null(e_13), term_l_6)));
                                            ;
                                            LocalPopChoice(i_6);
                                          }
                                        else
                                          {
                                            t = f_6;
                                            t = n_13(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_13(t);
                                    }
                                }
                              else
                                {
                                  t = n_13(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm inline_lists_and_optionals_0 (ATerm t)
{
  t = alltd_1(t, find_inlineables_0);
  {
    ATerm r_0 (ATerm t)
    {
      ATerm s_0 (ATerm t)
      {
        t = alltd_1(t, ReplaceSymbol_0);
        return(t);
      }
      t = prod_3(t, s_0, _id, _id);
      return(t);
    }
    t = alltd_1(t, r_0);
  }
  return(t);
}
ATerm RegularizeOptional_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  e_14 = t;
  q_13 :
  if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
    {
      f_14 = ATgetFirst((ATermList) e_14);
      j_14 = (ATerm) ATgetNext((ATermList) e_14);
      r_13 :
      if(match_cons(f_14, sym_prod_3))
        {
          g_14 = ATgetArgument(f_14, 0);
          h_14 = ATgetArgument(f_14, 1);
          i_14 = ATgetArgument(f_14, 2);
          s_13 :
          if(((ATgetType(g_14) == AT_LIST) && ATisEmpty(g_14)))
            {
              t_13 :
              if(match_cons(i_14, sym_no_attrs_0))
                {
                  u_13 :
                  if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
                    {
                      k_14 = ATgetFirst((ATermList) j_14);
                      q_14 = (ATerm) ATgetNext((ATermList) j_14);
                      v_13 :
                      if(match_cons(k_14, sym_prod_3))
                        {
                          l_14 = ATgetArgument(k_14, 0);
                          o_14 = ATgetArgument(k_14, 1);
                          p_14 = ATgetArgument(k_14, 2);
                          w_13 :
                          if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
                            {
                              m_14 = ATgetFirst((ATermList) l_14);
                              n_14 = (ATerm) ATgetNext((ATermList) l_14);
                              x_13 :
                              if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
                                {
                                  c_14 = ATgetFirst((ATermList) n_14);
                                  d_14 = (ATerm) ATgetNext((ATermList) n_14);
                                  y_13 :
                                  if(match_cons(p_14, sym_no_attrs_0))
                                    {
                                      z_13 :
                                      if(((ATgetType(q_14) == AT_LIST) && ATisEmpty(q_14)))
                                        {
                                          {
                                            if(((h_14 != NULL) && (h_14 != o_14)))
                                              _fail(o_14);
                                            else
                                              h_14 = o_14;
                                            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_opt_1, (ATerm) ATmakeAppl(sym_seq_2, not_null(m_14), (ATerm) ATinsert(CheckATermList(not_null(d_14)), not_null(c_14))))), not_null(h_14), term_l_6));
                                          }
                                        }
                                      else
                                        {
                                          _fail(t);
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
                                      a_14 :
                                      if(match_cons(p_14, sym_no_attrs_0))
                                        {
                                          b_14 :
                                          if(((ATgetType(q_14) == AT_LIST) && ATisEmpty(q_14)))
                                            {
                                              {
                                                if(((h_14 != NULL) && (h_14 != o_14)))
                                                  _fail(o_14);
                                                else
                                                  h_14 = o_14;
                                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_opt_1, not_null(m_14))), not_null(h_14), term_l_6));
                                              }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
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
        }
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
ATerm RegularizeList_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  ATerm b_19 (ATerm t)
  {
    ATerm k_18 = NULL,m_18 = NULL;
    if(((p_17 != NULL) && (p_17 != u_17)))
      _fail(u_17);
    else
      p_17 = u_17;
    {
      if(((k_18 != NULL) && (k_18 != w_17)))
        _fail(w_17);
      else
        k_18 = w_17;
      {
        if(((m_18 != NULL) && (m_18 != x_17)))
          _fail(x_17);
        else
          m_18 = x_17;
        {
          if(((p_17 != NULL) && (p_17 != y_17)))
            _fail(y_17);
          else
            p_17 = y_17;
          {
            t = not_null(m_18);
            {
              ATerm m_6 = t;
              if((PushChoice() == 0))
                {
                  t = Nil_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_6;
                }
            }
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_seq_2, not_null(k_18), not_null(m_18)))), not_null(p_17), term_l_6));
          }
        }
      }
    }
    return(t);
  }
  ATerm c_19 (ATerm t)
  {
    ATerm n_18 = NULL,o_18 = NULL;
    if(((p_17 != NULL) && (p_17 != u_17)))
      _fail(u_17);
    else
      p_17 = u_17;
    {
      if(((n_18 != NULL) && (n_18 != w_17)))
        _fail(w_17);
      else
        n_18 = w_17;
      {
        if(((p_17 != NULL) && (p_17 != y_17)))
          _fail(y_17);
        else
          p_17 = y_17;
        {
          if(((p_17 != NULL) && (p_17 != f_17)))
            _fail(f_17);
          else
            p_17 = f_17;
          {
            if(((o_18 != NULL) && (o_18 != h_17)))
              _fail(h_17);
            else
              o_18 = h_17;
            {
              if(((p_17 != NULL) && (p_17 != j_17)))
                _fail(j_17);
              else
                p_17 = j_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_alt_2, not_null(n_18), not_null(o_18)))), not_null(p_17), term_l_6));
            }
          }
        }
      }
    }
    return(t);
  }
  ATerm d_19 (ATerm t)
  {
    if(((p_17 != NULL) && (p_17 != u_17)))
      _fail(u_17);
    else
      p_17 = u_17;
    {
      if(((b_17 != NULL) && (b_17 != w_17)))
        _fail(w_17);
      else
        b_17 = w_17;
      {
        if(((p_17 != NULL) && (p_17 != y_17)))
          _fail(y_17);
        else
          p_17 = y_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_1, not_null(b_17))), not_null(p_17), term_l_6));
      }
    }
    return(t);
  }
  ATerm e_19 (ATerm t)
  {
    if(((p_17 != NULL) && (p_17 != y_17)))
      _fail(y_17);
    else
      p_17 = y_17;
    {
      if(((p_17 != NULL) && (p_17 != f_17)))
        _fail(f_17);
      else
        p_17 = f_17;
      {
        if(((u_17 != NULL) && (u_17 != h_17)))
          _fail(h_17);
        else
          u_17 = h_17;
        {
          if(((p_17 != NULL) && (p_17 != j_17)))
            _fail(j_17);
          else
            p_17 = j_17;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(u_17))), not_null(p_17), term_l_6));
        }
      }
    }
    return(t);
  }
  ATerm f_19 (ATerm t)
  {
    if(((p_17 != NULL) && (p_17 != w_17)))
      _fail(w_17);
    else
      p_17 = w_17;
    {
      if(((p_17 != NULL) && (p_17 != y_17)))
        _fail(y_17);
      else
        p_17 = y_17;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(u_17))), not_null(p_17), term_l_6));
    }
    return(t);
  }
  ATerm g_19 (ATerm t)
  {
    ATerm w_18 = NULL;
    if(((p_17 != NULL) && (p_17 != u_17)))
      _fail(u_17);
    else
      p_17 = u_17;
    {
      if(((w_18 != NULL) && (w_18 != w_17)))
        _fail(w_17);
      else
        w_18 = w_17;
      {
        if(((p_17 != NULL) && (p_17 != y_17)))
          _fail(y_17);
        else
          p_17 = y_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(w_18))), not_null(p_17), term_l_6));
      }
    }
    return(t);
  }
  m_17 = t;
  i_15 :
  if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
    {
      n_17 = ATgetFirst((ATermList) m_17);
      r_17 = (ATerm) ATgetNext((ATermList) m_17);
      j_15 :
      if(match_cons(n_17, sym_prod_3))
        {
          o_17 = ATgetArgument(n_17, 0);
          p_17 = ATgetArgument(n_17, 1);
          q_17 = ATgetArgument(n_17, 2);
          k_15 :
          if(((ATgetType(o_17) == AT_LIST) && !(ATisEmpty(o_17))))
            {
              b_17 = ATgetFirst((ATermList) o_17);
              c_17 = (ATerm) ATgetNext((ATermList) o_17);
              l_15 :
              if(((ATgetType(c_17) == AT_LIST) && ATisEmpty(c_17)))
                {
                  m_15 :
                  if(match_cons(q_17, sym_no_attrs_0))
                    {
                      n_15 :
                      if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
                        {
                          s_17 = ATgetFirst((ATermList) r_17);
                          a_18 = (ATerm) ATgetNext((ATermList) r_17);
                          o_15 :
                          if(match_cons(s_17, sym_prod_3))
                            {
                              t_17 = ATgetArgument(s_17, 0);
                              y_17 = ATgetArgument(s_17, 1);
                              z_17 = ATgetArgument(s_17, 2);
                              p_15 :
                              if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
                                {
                                  u_17 = ATgetFirst((ATermList) t_17);
                                  v_17 = (ATerm) ATgetNext((ATermList) t_17);
                                  q_15 :
                                  if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
                                    {
                                      w_17 = ATgetFirst((ATermList) v_17);
                                      x_17 = (ATerm) ATgetNext((ATermList) v_17);
                                      r_15 :
                                      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
                                        {
                                          x_16 = ATgetFirst((ATermList) x_17);
                                          y_16 = (ATerm) ATgetNext((ATermList) x_17);
                                          s_15 :
                                          if(((ATgetType(y_16) == AT_LIST) && ATisEmpty(y_16)))
                                            {
                                              t_15 :
                                              if(match_cons(z_17, sym_no_attrs_0))
                                                {
                                                  u_15 :
                                                  if(((ATgetType(a_18) == AT_LIST) && ATisEmpty(a_18)))
                                                    {
                                                      {
                                                        ATerm n_6 = t;
                                                        int o_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm c_18 = NULL;
                                                            if(((p_17 != NULL) && (p_17 != u_17)))
                                                              _fail(u_17);
                                                            else
                                                              p_17 = u_17;
                                                            {
                                                              if(((c_18 != NULL) && (c_18 != w_17)))
                                                                _fail(w_17);
                                                              else
                                                                c_18 = w_17;
                                                              {
                                                                if(((b_17 != NULL) && (b_17 != x_16)))
                                                                  _fail(x_16);
                                                                else
                                                                  b_17 = x_16;
                                                                {
                                                                  if(((p_17 != NULL) && (p_17 != y_17)))
                                                                    _fail(y_17);
                                                                  else
                                                                    p_17 = y_17;
                                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(b_17), not_null(c_18))), not_null(p_17), term_l_6));
                                                                }
                                                              }
                                                            }
                                                            ;
                                                            LocalPopChoice(o_6);
                                                          }
                                                        else
                                                          {
                                                            t = n_6;
                                                            {
                                                              ATerm f_18 = NULL;
                                                              if(((b_17 != NULL) && (b_17 != u_17)))
                                                                _fail(u_17);
                                                              else
                                                                b_17 = u_17;
                                                              {
                                                                if(((f_18 != NULL) && (f_18 != w_17)))
                                                                  _fail(w_17);
                                                                else
                                                                  f_18 = w_17;
                                                                {
                                                                  if(((p_17 != NULL) && (p_17 != x_16)))
                                                                    _fail(x_16);
                                                                  else
                                                                    p_17 = x_16;
                                                                  {
                                                                    if(((p_17 != NULL) && (p_17 != y_17)))
                                                                      _fail(y_17);
                                                                    else
                                                                      p_17 = y_17;
                                                                    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(b_17), not_null(f_18))), not_null(p_17), term_l_6));
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
                                          if(((ATgetType(x_17) == AT_LIST) && ATisEmpty(x_17)))
                                            {
                                              v_15 :
                                              if(match_cons(z_17, sym_no_attrs_0))
                                                {
                                                  w_15 :
                                                  if(((ATgetType(a_18) == AT_LIST) && ATisEmpty(a_18)))
                                                    {
                                                      t = d_19(t);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
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
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(((ATgetType(o_17) == AT_LIST) && ATisEmpty(o_17)))
                {
                  x_15 :
                  if(match_cons(q_17, sym_no_attrs_0))
                    {
                      y_15 :
                      if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
                        {
                          s_17 = ATgetFirst((ATermList) r_17);
                          a_18 = (ATerm) ATgetNext((ATermList) r_17);
                          z_15 :
                          if(match_cons(s_17, sym_prod_3))
                            {
                              t_17 = ATgetArgument(s_17, 0);
                              y_17 = ATgetArgument(s_17, 1);
                              z_17 = ATgetArgument(s_17, 2);
                              a_16 :
                              if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
                                {
                                  u_17 = ATgetFirst((ATermList) t_17);
                                  v_17 = (ATerm) ATgetNext((ATermList) t_17);
                                  b_16 :
                                  if(((ATgetType(v_17) == AT_LIST) && ATisEmpty(v_17)))
                                    {
                                      c_16 :
                                      if(match_cons(z_17, sym_no_attrs_0))
                                        {
                                          d_16 :
                                          if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
                                            {
                                              d_17 = ATgetFirst((ATermList) a_18);
                                              l_17 = (ATerm) ATgetNext((ATermList) a_18);
                                              e_16 :
                                              if(match_cons(d_17, sym_prod_3))
                                                {
                                                  e_17 = ATgetArgument(d_17, 0);
                                                  j_17 = ATgetArgument(d_17, 1);
                                                  k_17 = ATgetArgument(d_17, 2);
                                                  f_16 :
                                                  if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                                                    {
                                                      f_17 = ATgetFirst((ATermList) e_17);
                                                      g_17 = (ATerm) ATgetNext((ATermList) e_17);
                                                      g_16 :
                                                      if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
                                                        {
                                                          h_17 = ATgetFirst((ATermList) g_17);
                                                          i_17 = (ATerm) ATgetNext((ATermList) g_17);
                                                          h_16 :
                                                          if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
                                                            {
                                                              z_16 = ATgetFirst((ATermList) i_17);
                                                              a_17 = (ATerm) ATgetNext((ATermList) i_17);
                                                              i_16 :
                                                              if(((ATgetType(a_17) == AT_LIST) && ATisEmpty(a_17)))
                                                                {
                                                                  j_16 :
                                                                  if(match_cons(k_17, sym_no_attrs_0))
                                                                    {
                                                                      k_16 :
                                                                      if(((ATgetType(l_17) == AT_LIST) && ATisEmpty(l_17)))
                                                                        {
                                                                          {
                                                                            ATerm i_18 = NULL;
                                                                            if(((p_17 != NULL) && (p_17 != y_17)))
                                                                              _fail(y_17);
                                                                            else
                                                                              p_17 = y_17;
                                                                            {
                                                                              if(((u_17 != NULL) && (u_17 != f_17)))
                                                                                _fail(f_17);
                                                                              else
                                                                                u_17 = f_17;
                                                                              {
                                                                                if(((i_18 != NULL) && (i_18 != h_17)))
                                                                                  _fail(h_17);
                                                                                else
                                                                                  i_18 = h_17;
                                                                                {
                                                                                  if(((p_17 != NULL) && (p_17 != z_16)))
                                                                                    _fail(z_16);
                                                                                  else
                                                                                    p_17 = z_16;
                                                                                  {
                                                                                    if(((p_17 != NULL) && (p_17 != j_17)))
                                                                                      _fail(j_17);
                                                                                    else
                                                                                      p_17 = j_17;
                                                                                    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(u_17), not_null(i_18))), not_null(p_17), term_l_6));
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
                                                              if(((ATgetType(i_17) == AT_LIST) && ATisEmpty(i_17)))
                                                                {
                                                                  l_16 :
                                                                  if(match_cons(k_17, sym_no_attrs_0))
                                                                    {
                                                                      m_16 :
                                                                      if(((ATgetType(l_17) == AT_LIST) && ATisEmpty(l_17)))
                                                                        {
                                                                          t = e_19(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
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
                                    }
                                  else
                                    {
                                      if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
                                        {
                                          w_17 = ATgetFirst((ATermList) v_17);
                                          x_17 = (ATerm) ATgetNext((ATermList) v_17);
                                          n_16 :
                                          if(match_cons(z_17, sym_no_attrs_0))
                                            {
                                              o_16 :
                                              if(((ATgetType(a_18) == AT_LIST) && ATisEmpty(a_18)))
                                                {
                                                  p_16 :
                                                  if(((ATgetType(x_17) == AT_LIST) && ATisEmpty(x_17)))
                                                    {
                                                      {
                                                        ATerm p_6 = t;
                                                        int q_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = b_19(t);
                                                            ;
                                                            LocalPopChoice(q_6);
                                                          }
                                                        else
                                                          {
                                                            t = p_6;
                                                            {
                                                              ATerm w_6 = t;
                                                              int x_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = f_19(t);
                                                                  ;
                                                                  LocalPopChoice(x_6);
                                                                }
                                                              else
                                                                {
                                                                  t = w_6;
                                                                  t = g_19(t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = b_19(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
                                                    {
                                                      d_17 = ATgetFirst((ATermList) a_18);
                                                      l_17 = (ATerm) ATgetNext((ATermList) a_18);
                                                      q_16 :
                                                      if(((ATgetType(x_17) == AT_LIST) && ATisEmpty(x_17)))
                                                        {
                                                          r_16 :
                                                          if(match_cons(d_17, sym_prod_3))
                                                            {
                                                              e_17 = ATgetArgument(d_17, 0);
                                                              j_17 = ATgetArgument(d_17, 1);
                                                              k_17 = ATgetArgument(d_17, 2);
                                                              s_16 :
                                                              if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                                                                {
                                                                  f_17 = ATgetFirst((ATermList) e_17);
                                                                  g_17 = (ATerm) ATgetNext((ATermList) e_17);
                                                                  t_16 :
                                                                  if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
                                                                    {
                                                                      h_17 = ATgetFirst((ATermList) g_17);
                                                                      i_17 = (ATerm) ATgetNext((ATermList) g_17);
                                                                      u_16 :
                                                                      if(((ATgetType(i_17) == AT_LIST) && ATisEmpty(i_17)))
                                                                        {
                                                                          v_16 :
                                                                          if(match_cons(k_17, sym_no_attrs_0))
                                                                            {
                                                                              w_16 :
                                                                              if(((ATgetType(l_17) == AT_LIST) && ATisEmpty(l_17)))
                                                                                {
                                                                                  t = c_19(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
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
            }
        }
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
ATerm alltd_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm h_19 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_73(t);
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = _all(t, h_19);
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_84(t);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
        m_19 = t;
        l_19 :
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            n_19 = ATgetFirst((ATermList) m_19);
            o_19 = (ATerm) ATgetNext((ATermList) m_19);
            {
              ATerm r_19 = NULL,t_19 = NULL;
              ATerm j_7;
              j_7 = t;
              {
                ATerm s_19 = NULL;
                t = not_null(n_19);
                {
                  t = m_84(t);
                  {
                    s_19 = t;
                    if(((r_19 != NULL) && (r_19 != s_19)))
                      _fail(s_19);
                    else
                      r_19 = s_19;
                  }
                }
              }
              t = j_7;
              {
                ATerm u_19 = NULL;
                t = not_null(o_19);
                {
                  t = foldr_3(t, k_84, l_84, m_84);
                  {
                    u_19 = t;
                    if(((t_19 != NULL) && (t_19 != u_19)))
                      _fail(u_19);
                    else
                      t_19 = u_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), not_null(t_19));
                  t = l_84(t);
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
ATerm length_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
  return(t);
}
ATerm lt_0 (ATerm t)
{
  ATerm m_7 = t;
  if((PushChoice() == 0))
    {
      t = geq_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_7;
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym__2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_20), not_null(c_20));
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = SSL_subtr(not_null(b_20), not_null(c_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm t_7 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_7;
    }
  return(t);
}
ATerm comp_comp_2 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  i_20 = t;
  h_20 :
  if(match_cons(i_20, sym__3))
    {
      j_20 = ATgetArgument(i_20, 0);
      k_20 = ATgetArgument(i_20, 1);
      l_20 = ATgetArgument(i_20, 2);
      {
        ATerm x_7;
        x_7 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(k_20));
          {
            t = d_88(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(l_20));
              t = e_88(t);
            }
          }
        }
        t = x_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_leq_0 (ATerm t)
{
  t = comp_comp_2(t, leq_0, leq_0);
  return(t);
}
ATerm is_lower_0 (ATerm t)
{
  ATerm z_7;
  z_7 = t;
  {
    ATerm r_20 = NULL;
    ATerm s_20 = NULL;
    s_20 = t;
    if(((r_20 != NULL) && (r_20 != s_20)))
      _fail(s_20);
    else
      r_20 = s_20;
    {
      t = (ATerm) ATmakeAppl(sym__3, term_c_8, not_null(r_20), term_d_8);
      t = leq_leq_0(t);
    }
  }
  t = z_7;
  return(t);
}
ATerm to_upper_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_lower_0(t);
      LocalPopChoice(f_8);
      {
        ATerm v_20 = NULL;
        ATerm w_20 = NULL;
        w_20 = t;
        if(((v_20 != NULL) && (v_20 != w_20)))
          _fail(w_20);
        else
          v_20 = w_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), term_g_8);
          t = subt_0(t);
        }
      }
    }
  else
    {
      t = e_8;
      {
      }
    }
  return(t);
}
ATerm case_char_1 (ATerm t, ATerm v_87 (ATerm))
{
  t = _2(t, to_upper_0, to_upper_0);
  t = v_87(t);
  return(t);
}
ATerm strcasecmp_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
      i_21 = t;
      c_21 :
      if(match_cons(i_21, sym__2))
        {
          j_21 = ATgetArgument(i_21, 0);
          k_21 = ATgetArgument(i_21, 1);
          d_21 :
          if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
            {
              g_21 = ATgetFirst((ATermList) j_21);
              h_21 = (ATerm) ATgetNext((ATermList) j_21);
              e_21 :
              if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
                {
                  l_21 = ATgetFirst((ATermList) k_21);
                  m_21 = (ATerm) ATgetNext((ATermList) k_21);
                  {
                    ATerm j_8 = t;
                    int k_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(l_21));
                        t = case_char_1(t, eq_0);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(m_21));
                          t = strcasecmp_0(t);
                        }
                        ;
                        LocalPopChoice(k_8);
                      }
                    else
                      {
                        t = j_8;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(l_21));
                          t = case_char_1(t, lt_0);
                          t = term_l_8;
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
              if(((ATgetType(j_21) == AT_LIST) && ATisEmpty(j_21)))
                {
                  f_21 :
                  if(((ATgetType(k_21) == AT_LIST) && ATisEmpty(k_21)))
                    {
                      t = term_k_7;
                    }
                  else
                    {
                      if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
                        {
                          l_21 = ATgetFirst((ATermList) k_21);
                          m_21 = (ATerm) ATgetNext((ATermList) k_21);
                          t = term_l_8;
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
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = term_l_7;
    }
  return(t);
}
ATerm string_gt_0 (ATerm t)
{
  ATerm z_21 = NULL;
  ATerm v_0 (ATerm t)
  {
    t = _2(t, explode_string_0, explode_string_0);
    return(t);
  }
  t = try_1(t, v_0);
  {
    t = strcasecmp_0(t);
    {
      z_21 = t;
      y_21 :
      if(!(match_int(z_21, 1)))
        {
          _fail(t);
        }
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      if(((d_22 != NULL) && (d_22 != e_22)))
        _fail(e_22);
      else
        d_22 = e_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ProdGT_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  o_22 = t;
  l_22 :
  if(match_cons(o_22, sym__2))
    {
      p_22 = ATgetArgument(o_22, 0);
      t_22 = ATgetArgument(o_22, 1);
      m_22 :
      if(match_cons(p_22, sym_prod_3))
        {
          q_22 = ATgetArgument(p_22, 0);
          r_22 = ATgetArgument(p_22, 1);
          s_22 = ATgetArgument(p_22, 2);
          n_22 :
          if(match_cons(t_22, sym_prod_3))
            {
              u_22 = ATgetArgument(t_22, 0);
              v_22 = ATgetArgument(t_22, 1);
              w_22 = ATgetArgument(t_22, 2);
              {
                ATerm q_8 = t;
                int r_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_8;
                    s_8 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(v_22));
                      {
                        ATerm w_8 = t;
                        if((PushChoice() == 0))
                          {
                            t = eq_0(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = w_8;
                          }
                        t = string_gt_0(t);
                      }
                    }
                    t = s_8;
                    ;
                    LocalPopChoice(r_8);
                  }
                else
                  {
                    t = q_8;
                    {
                      if(((r_22 != NULL) && (r_22 != v_22)))
                        _fail(v_22);
                      else
                        r_22 = v_22;
                      {
                        ATerm y_8;
                        y_8 = t;
                        {
                          ATerm e_23 = NULL,g_23 = NULL;
                          ATerm b_9;
                          b_9 = t;
                          {
                            ATerm f_23 = NULL;
                            t = not_null(q_22);
                            {
                              t = length_0(t);
                              {
                                f_23 = t;
                                if(((e_23 != NULL) && (e_23 != f_23)))
                                  _fail(f_23);
                                else
                                  e_23 = f_23;
                              }
                            }
                          }
                          t = b_9;
                          {
                            ATerm h_23 = NULL;
                            t = not_null(u_22);
                            {
                              t = length_0(t);
                              {
                                h_23 = t;
                                if(((g_23 != NULL) && (g_23 != h_23)))
                                  _fail(h_23);
                                else
                                  g_23 = h_23;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(g_23));
                              t = gt_0(t);
                            }
                          }
                        }
                        t = y_8;
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
  return(t);
}
ATerm SortL_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
    {
      q_23 = ATgetFirst((ATermList) p_23);
      r_23 = (ATerm) ATgetNext((ATermList) p_23);
      o_23 :
      if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
        {
          s_23 = ATgetFirst((ATermList) r_23);
          t_23 = (ATerm) ATgetNext((ATermList) r_23);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(s_23));
            t = k_81(t);
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_23)), not_null(q_23)), not_null(s_23));
          }
        }
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
ATerm sort_list_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_81(t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = Cons_2(t, _id, w_0);
      }
    t = try_1(t, w_0);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm order_productions_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = SortL_1(t, ProdGT_0);
    return(t);
  }
  t = sort_list_1(t, x_0);
  return(t);
}
ATerm context_free_syntax_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm e_24 = NULL,f_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym_context_free_syntax_1))
    {
      f_24 = ATgetArgument(e_24, 0);
      {
        ATerm i_24 = NULL,k_24 = NULL;
        ATerm j_24 = NULL;
        t = SSLgetAnnotations(not_null(e_24));
        {
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
        }
        {
          t = not_null(f_24);
          {
            ATerm m_24 = NULL;
            t = g_60(t);
            {
              k_24 = t;
              {
                ATerm n_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_context_free_syntax_1, not_null(k_24)), not_null(i_24));
                {
                  n_24 = t;
                  if(((m_24 != NULL) && (m_24 != n_24)))
                    _fail(n_24);
                  else
                    m_24 = n_24;
                }
                t = not_null(m_24);
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
ATerm regularize_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = context_free_syntax_1(t, order_productions_0);
    return(t);
  }
  t = alltd_1(t, y_0);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RegularizeList_0(t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = RegularizeOptional_0(t);
        }
      return(t);
    }
    t = alltd_1(t, z_0);
    t = inline_lists_and_optionals_0(t);
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_9;
  g_9 = t;
  {
    ATerm o_26 = NULL;
    ATerm r_26 = NULL;
    r_26 = t;
    if(((o_26 != NULL) && (o_26 != r_26)))
      _fail(r_26);
    else
      o_26 = r_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(o_26));
      t = printnl_0(t);
    }
  }
  t = g_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_9;
  i_9 = t;
  {
    t = error_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  t = i_9;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm t_26 (ATerm t)
  {
    ATerm j_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_73(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = j_9;
        t = _one(t, t_26);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      {
        ATerm o_9;
        o_9 = t;
        {
          t = not_null(z_26);
          {
            ATerm a_1 (ATerm t)
            {
              ATerm c_27 = NULL;
              c_27 = t;
              if(((y_26 != NULL) && (y_26 != c_27)))
                _fail(c_27);
              else
                y_26 = c_27;
              return(t);
            }
            t = oncetd_1(t, a_1);
          }
        }
        t = o_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_w_9;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm h_27 = NULL;
  ATerm j_27 = NULL;
  h_27 = t;
  {
    ATerm k_27 = NULL;
    t = get_options_0(t);
    {
      k_27 = t;
      {
        if(((j_27 != NULL) && (j_27 != k_27)))
          _fail(k_27);
        else
          j_27 = k_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(j_27));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_s_4;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm o_89 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    t = term_s_4;
    {
      t = o_89(t);
      t = check_option_0(t);
    }
  }
  t = x_9;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        t = term_a_10;
        return(t);
      }
      t = has_option_1(t, b_1);
      {
        t = (ATerm) ATinsert(ATempty, term_b_10);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        t = (ATerm) ATinsert(ATempty, term_c_10);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,c_28 = NULL;
  v_27 = t;
  t_27 :
  if(match_cons(v_27, sym__2))
    {
      w_27 = ATgetArgument(v_27, 0);
      c_28 = ATgetArgument(v_27, 1);
      u_27 :
      if(match_string(w_27, "in-type"))
        {
          ATerm e_28 = NULL,f_28 = NULL;
          ATerm g_10;
          g_10 = t;
          {
            ATerm g_28 = NULL;
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
            t = not_null(c_28);
            {
              g_28 = t;
              {
                t = SSL_explode_term(not_null(g_28));
                {
                  i_28 = t;
                  q_27 :
                  if(match_cons(i_28, sym__2))
                    {
                      j_28 = ATgetArgument(i_28, 0);
                      k_28 = ATgetArgument(i_28, 1);
                      r_27 :
                      if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
                        {
                          l_28 = ATgetFirst((ATermList) k_28);
                          m_28 = (ATerm) ATgetNext((ATermList) k_28);
                          s_27 :
                          if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
                            {
                              {
                                if(((f_28 != NULL) && (f_28 != j_28)))
                                  _fail(j_28);
                                else
                                  f_28 = j_28;
                                if(((e_28 != NULL) && (e_28 != l_28)))
                                  _fail(l_28);
                                else
                                  e_28 = l_28;
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
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
          t = g_10;
          {
            t = not_null(f_28);
            {
              ATerm h_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_97(t);
                  ;
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = h_10;
                  t = type_failure_0(t);
                }
            }
            t = not_null(e_28);
          }
        }
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
ATerm mkterm_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym__2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      t = SSL_mkterm(not_null(x_28), not_null(y_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  f_29 :
  if(match_cons(h_29, sym__2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      g_29 :
      if(match_string(i_29, "out-type"))
        {
          ATerm l_29 = NULL;
          ATerm m_29 = NULL,o_29 = NULL;
          ATerm n_29 = NULL;
          t = term_s_4;
          {
            t = z_97(t);
            {
              n_29 = t;
              if(((m_29 != NULL) && (m_29 != n_29)))
                _fail(n_29);
              else
                m_29 = n_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_29), (ATerm) ATinsert(ATempty, not_null(j_29)));
            {
              t = mkterm_0(t);
              {
                o_29 = t;
                if(((l_29 != NULL) && (l_29 != o_29)))
                  _fail(o_29);
                else
                  l_29 = o_29;
              }
            }
          }
          t = not_null(l_29);
        }
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
ATerm InOutId_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        ATerm u_29 = NULL;
        u_29 = t;
        s_29 :
        if(!(match_string(u_29, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, c_1, _id);
      t = OutId_1(t, p_0);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm v_29 = NULL;
          v_29 = t;
          t_29 :
          if(!(match_string(v_29, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, d_1, _id);
        t = InId_1(t, o_0);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym__2))
    {
      d_30 = ATgetArgument(c_30, 0);
      e_30 = ATgetArgument(c_30, 1);
      {
        ATerm i_30 = NULL,k_30 = NULL;
        ATerm j_30 = NULL;
        t = SSLgetAnnotations(not_null(c_30));
        {
          j_30 = t;
          if(((i_30 != NULL) && (i_30 != j_30)))
            _fail(j_30);
          else
            i_30 = j_30;
        }
        {
          t = not_null(d_30);
          {
            ATerm m_30 = NULL;
            t = b_57(t);
            {
              k_30 = t;
              {
                t = not_null(e_30);
                {
                  ATerm o_30 = NULL;
                  t = c_57(t);
                  {
                    m_30 = t;
                    {
                      ATerm p_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_30), not_null(m_30)), not_null(i_30));
                      {
                        p_30 = t;
                        if(((o_30 != NULL) && (o_30 != p_30)))
                          _fail(p_30);
                        else
                          o_30 = p_30;
                      }
                      t = not_null(o_30);
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
ATerm Option_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_string(z_30, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
        {
          a_31 = ATgetFirst((ATermList) z_30);
          b_31 = (ATerm) ATgetNext((ATermList) z_30);
          {
            ATerm e_31 = NULL;
            ATerm q_10;
            q_10 = t;
            {
              t = not_null(a_31);
              t = l_0(t);
            }
            t = q_10;
            {
              ATerm f_31 = NULL;
              t = term_s_4;
              {
                t = m_0(t);
                {
                  f_31 = t;
                  if(((e_31 != NULL) && (e_31 != f_31)))
                    _fail(f_31);
                  else
                    e_31 = f_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(e_31));
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
ATerm termid_set_p__1 (ATerm t, ATerm g_98 (ATerm))
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  l_31 :
  if(match_cons(m_31, sym__2))
    {
      n_31 = ATgetArgument(m_31, 0);
      o_31 = ATgetArgument(m_31, 1);
      {
        ATerm r_31 = NULL;
        ATerm s_31 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_r_10, not_null(o_31));
        {
          t = g_98(t);
          {
            s_31 = t;
            if(((r_31 != NULL) && (r_31 != s_31)))
              _fail(s_31);
            else
              r_31 = s_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(r_31));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_69(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym__2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      {
        ATerm d_32 = NULL;
        ATerm e_32 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(a_32));
        {
          t = e_98(t);
          {
            e_32 = t;
            if(((d_32 != NULL) && (d_32 != e_32)))
              _fail(e_32);
            else
              d_32 = e_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_31), not_null(d_32));
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
  ATerm m_32 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm n_32 = NULL,o_32 = NULL;
      n_32 = t;
      l_32 :
      if(match_cons(n_32, sym_Program_1))
        {
          o_32 = ATgetArgument(n_32, 0);
          if(((m_32 != NULL) && (m_32 != o_32)))
            _fail(o_32);
          else
            m_32 = o_32;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(m_32)), term_w_10));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym__2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      {
        ATerm c_11;
        c_11 = t;
        t = SSL_printnl(not_null(t_32), not_null(u_32));
        t = c_11;
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
  ATerm z_32 = NULL;
  z_32 = t;
  t = SSL_implode_string(not_null(z_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = d_11;
      {
        ATerm e_33 = NULL,f_33 = NULL,h_33 = NULL;
        e_33 = t;
        d_33 :
        if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
          {
            f_33 = ATgetFirst((ATermList) e_33);
            h_33 = (ATerm) ATgetNext((ATermList) e_33);
            {
              t = not_null(f_33);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(h_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_1);
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
  ATerm r_33 = NULL;
  ATerm t_33 = NULL;
  r_33 = t;
  {
    ATerm u_33 = NULL;
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    t = not_null(r_33);
    {
      u_33 = t;
      {
        t = SSL_explode_term(not_null(u_33));
        {
          w_33 = t;
          p_33 :
          if(match_cons(w_33, sym__2))
            {
              x_33 = ATgetArgument(w_33, 0);
              y_33 = ATgetArgument(w_33, 1);
              q_33 :
              if(match_string(x_33, ""))
                {
                  if(((t_33 != NULL) && (t_33 != y_33)))
                    _fail(y_33);
                  else
                    t_33 = y_33;
                }
              else
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
      t = not_null(t_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm g_34 (ATerm t)
  {
    ATerm j_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_34);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = j_78(t);
        }
      }
    return(t);
  }
  t = g_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym__2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      {
        t = not_null(k_34);
        {
          ATerm g_1 (ATerm t)
          {
            t = not_null(l_34);
            return(t);
          }
          t = at_end_1(t, g_1);
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
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = SSL_explode_string(not_null(q_34));
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
  ATerm u_34 = NULL;
  u_34 = t;
  t = SSL_is_string(not_null(u_34));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_1);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
              d_35 = t;
              c_35 :
              if(match_cons(d_35, sym_Path_1))
                {
                  e_35 = ATgetArgument(d_35, 0);
                  t = not_null(e_35);
                }
              else
                {
                  if(match_cons(d_35, sym_Var_1))
                    {
                      e_35 = ATgetArgument(d_35, 0);
                      {
                        t = not_null(e_35);
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = term_y_11;
                                  return(t);
                                }
                                t = debug_1(t, i_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_35, sym_Prefix_2))
                        {
                          e_35 = ATgetArgument(d_35, 0);
                          f_35 = ATgetArgument(d_35, 1);
                          {
                            ATerm k_35 = NULL,m_35 = NULL;
                            ATerm z_11;
                            z_11 = t;
                            {
                              ATerm l_35 = NULL;
                              t = not_null(e_35);
                              {
                                t = eval_config_0(t);
                                {
                                  l_35 = t;
                                  if(((k_35 != NULL) && (k_35 != l_35)))
                                    _fail(l_35);
                                  else
                                    k_35 = l_35;
                                }
                              }
                            }
                            t = z_11;
                            {
                              ATerm n_35 = NULL;
                              t = not_null(f_35);
                              {
                                t = eval_config_0(t);
                                {
                                  n_35 = t;
                                  if(((m_35 != NULL) && (m_35 != n_35)))
                                    _fail(n_35);
                                  else
                                    m_35 = n_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(m_35));
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
  ATerm v_35 = NULL;
  v_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(v_35));
    {
      t = table_get_0(t);
      {
        ATerm j_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_12;
            g_12 = t;
            {
              ATerm x_35 = NULL;
              ATerm y_35 = NULL;
              y_35 = t;
              if(((x_35 != NULL) && (x_35 != y_35)))
                _fail(y_35);
              else
                x_35 = y_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_12, not_null(v_35), not_null(x_35));
                t = table_put_0(t);
              }
            }
            t = g_12;
          }
          return(t);
        }
        t = try_1(t, j_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm c_36 = NULL;
      ATerm d_36 = NULL;
      t = term_i_12;
      {
        t = get_config_0(t);
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), term_j_12);
        t = geq_0(t);
      }
    }
    t = h_12;
    t = g_91(t);
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym__2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      t = SSL_WriteToTextFile(not_null(i_36), not_null(j_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      t = SSL_WriteToBinaryFile(not_null(q_36), not_null(r_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_36 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm l_12 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm a_37 = NULL,b_37 = NULL;
            a_37 = t;
            w_36 :
            if(match_cons(a_37, sym_Output_1))
              {
                b_37 = ATgetArgument(a_37, 0);
                if(((z_36 != NULL) && (z_36 != b_37)))
                  _fail(b_37);
                else
                  z_36 = b_37;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_1);
          ;
          LocalPopChoice(h_13);
        }
      else
        {
          t = l_12;
          {
            ATerm c_37 = NULL;
            t = term_i_13;
            {
              c_37 = t;
              if(((z_36 != NULL) && (z_36 != c_37)))
                _fail(c_37);
              else
                z_36 = c_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = k_12;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(z_36);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm d_37 = NULL;
              d_37 = t;
              y_36 :
              if(!(match_cons(d_37, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(k_13);
        }
      else
        {
          t = j_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm j_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  ATerm l_13;
  l_13 = t;
  t = dtime_0(t);
  t = l_13;
  {
    t = n_89(t);
    {
      ATerm m_13;
      m_13 = t;
      {
        ATerm k_37 = NULL;
        t = dtime_0(t);
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
      }
      t = m_13;
      {
        l_37 = t;
        i_37 :
        if(match_cons(l_37, sym__2))
          {
            m_37 = ATgetArgument(l_37, 0);
            n_37 = ATgetArgument(l_37, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_37)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_37))), not_null(n_37));
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
ATerm debug_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm o_13;
  o_13 = t;
  {
    ATerm a_38 = NULL,c_38 = NULL;
    ATerm p_13;
    p_13 = t;
    {
      ATerm b_38 = NULL;
      t = j_88(t);
      {
        b_38 = t;
        if(((a_38 != NULL) && (a_38 != b_38)))
          _fail(b_38);
        else
          a_38 = b_38;
      }
    }
    t = p_13;
    {
      ATerm d_38 = NULL;
      d_38 = t;
      if(((c_38 != NULL) && (c_38 != d_38)))
        _fail(d_38);
      else
        c_38 = d_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_38)), not_null(a_38)));
        t = printnl_0(t);
      }
    }
  }
  t = o_13;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL;
      i_38 = t;
      {
        if(((h_38 != NULL) && (h_38 != i_38)))
          _fail(i_38);
        else
          h_38 = i_38;
        t = SSL_ReadFromFile(not_null(h_38));
      }
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_t_14;
          return(t);
        }
        t = debug_1(t, r_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm m_38 = NULL,o_38 = NULL;
  ATerm u_14;
  u_14 = t;
  {
    ATerm n_38 = NULL;
    t = x_85(t);
    {
      n_38 = t;
      if(((m_38 != NULL) && (m_38 != n_38)))
        _fail(n_38);
      else
        m_38 = n_38;
    }
  }
  t = u_14;
  {
    ATerm p_38 = NULL;
    t = y_85(t);
    {
      p_38 = t;
      if(((o_38 != NULL) && (o_38 != p_38)))
        _fail(p_38);
      else
        o_38 = p_38;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(o_38));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_38 = NULL;
  ATerm v_14;
  v_14 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          ATerm w_38 = NULL,x_38 = NULL;
          w_38 = t;
          t_38 :
          if(match_cons(w_38, sym_Input_1))
            {
              x_38 = ATgetArgument(w_38, 0);
              if(((v_38 != NULL) && (v_38 != x_38)))
                _fail(x_38);
              else
                v_38 = x_38;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_1);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm y_38 = NULL;
          t = term_y_14;
          {
            y_38 = t;
            if(((v_38 != NULL) && (v_38 != y_38)))
              _fail(y_38);
            else
              v_38 = y_38;
          }
        }
      }
  }
  t = v_14;
  {
    ATerm t_1 (ATerm t)
    {
      t = not_null(v_38);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm c_39 = NULL;
    c_39 = t;
    b_39 :
    if(!(match_string(c_39, "-v")))
      {
        if(!(match_string(c_39, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_a_15;
    t = set_config_0(t);
    t = term_b_15;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_c_15;
    return(t);
  }
  t = Option_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm f_39 = NULL;
    f_39 = t;
    d_39 :
    if(!(match_string(f_39, "-k")))
      {
        if(!(match_string(f_39, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm d_15;
    d_15 = t;
    {
      ATerm g_39 = NULL;
      ATerm h_39 = NULL;
      t = string_to_int_0(t);
      {
        h_39 = t;
        if(((g_39 != NULL) && (g_39 != h_39)))
          _fail(h_39);
        else
          g_39 = h_39;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, not_null(g_39));
        t = set_config_0(t);
      }
    }
    t = d_15;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_f_15;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  t = SSL_string_to_int(not_null(k_39));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm s_39 = NULL;
        s_39 = t;
        n_39 :
        if(!(match_string(s_39, "-S")))
          {
            if(!(match_string(s_39, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_b_18;
        t = set_config_0(t);
        t = term_d_18;
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_e_18;
        return(t);
      }
      t = Option_3(t, a_2, b_2, c_2);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm t_39 = NULL;
              t_39 = t;
              o_39 :
              if(!(match_string(t_39, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm w_39 = NULL;
              ATerm j_18;
              j_18 = t;
              {
                ATerm u_39 = NULL;
                ATerm v_39 = NULL;
                t = string_to_int_0(t);
                {
                  v_39 = t;
                  if(((u_39 != NULL) && (u_39 != v_39)))
                    _fail(v_39);
                  else
                    u_39 = v_39;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(u_39));
                  t = set_config_0(t);
                }
              }
              t = j_18;
              {
                ATerm x_39 = NULL;
                x_39 = t;
                if(((w_39 != NULL) && (w_39 != x_39)))
                  _fail(x_39);
                else
                  w_39 = x_39;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_39));
              }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_l_18;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm g_2 (ATerm t)
              {
                ATerm y_39 = NULL;
                y_39 = t;
                r_39 :
                if(!(match_string(y_39, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_2 (ATerm t)
              {
                t = term_q_18;
                t = set_config_0(t);
                t = term_r_18;
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_s_18;
                return(t);
              }
              t = Option_3(t, g_2, h_2, i_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = v_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm e_40 = NULL;
    e_40 = t;
    b_40 :
    if(!(match_string(e_40, "-o")))
      {
        if(!(match_string(e_40, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm h_40 = NULL;
    ATerm y_18;
    y_18 = t;
    {
      ATerm f_40 = NULL;
      ATerm g_40 = NULL;
      g_40 = t;
      if(((f_40 != NULL) && (f_40 != g_40)))
        _fail(g_40);
      else
        f_40 = g_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(f_40));
        t = set_config_0(t);
      }
    }
    t = y_18;
    {
      ATerm i_40 = NULL;
      i_40 = t;
      if(((h_40 != NULL) && (h_40 != i_40)))
        _fail(i_40);
      else
        h_40 = i_40;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_40));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  t = ArgOption_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm m_40 = NULL;
          m_40 = t;
          l_40 :
          if(!(match_string(m_40, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_p_19;
          t = set_config_0(t);
          t = term_q_19;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_v_19;
          return(t);
        }
        t = Option_3(t, m_2, n_2, o_2);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym__3))
    {
      w_40 = ATgetArgument(q_40, 0);
      x_40 = ATgetArgument(q_40, 1);
      y_40 = ATgetArgument(q_40, 2);
      {
        ATerm w_19;
        w_19 = t;
        {
          ATerm c_41 = NULL;
          ATerm d_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_40), not_null(x_40));
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = (ATerm) ATempty;
              }
            {
              d_41 = t;
              if(((c_41 != NULL) && (c_41 != d_41)))
                _fail(d_41);
              else
                c_41 = d_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_40), not_null(x_40), (ATerm) ATinsert(CheckATermList(not_null(c_41)), not_null(y_40)));
            t = table_put_0(t);
          }
        }
        t = w_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_93 (ATerm))
{
  ATerm h_41 = NULL;
  ATerm i_41 = NULL;
  t = term_s_4;
  {
    t = n_93(t);
    {
      i_41 = t;
      if(((h_41 != NULL) && (h_41 != i_41)))
        _fail(i_41);
      else
        h_41 = i_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_20, term_e_20, not_null(h_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  p_41 = t;
  n_41 :
  if(match_string(p_41, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
        {
          q_41 = ATgetFirst((ATermList) p_41);
          r_41 = (ATerm) ATgetNext((ATermList) p_41);
          o_41 :
          if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
            {
              s_41 = ATgetFirst((ATermList) r_41);
              t_41 = (ATerm) ATgetNext((ATermList) r_41);
              {
                ATerm x_41 = NULL;
                ATerm f_20;
                f_20 = t;
                {
                  t = not_null(q_41);
                  t = g_0(t);
                }
                t = f_20;
                {
                  ATerm y_41 = NULL;
                  t = not_null(s_41);
                  {
                    t = i_0(t);
                    {
                      y_41 = t;
                      if(((x_41 != NULL) && (x_41 != y_41)))
                        _fail(y_41);
                      else
                        x_41 = y_41;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(x_41));
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
  ATerm p_2 (ATerm t)
  {
    ATerm f_42 = NULL;
    f_42 = t;
    c_42 :
    if(!(match_string(f_42, "-i")))
      {
        if(!(match_string(f_42, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm i_42 = NULL;
    ATerm g_20;
    g_20 = t;
    {
      ATerm g_42 = NULL;
      ATerm h_42 = NULL;
      h_42 = t;
      if(((g_42 != NULL) && (g_42 != h_42)))
        _fail(h_42);
      else
        g_42 = h_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(g_42));
        t = set_config_0(t);
      }
    }
    t = g_20;
    {
      ATerm j_42 = NULL;
      j_42 = t;
      if(((i_42 != NULL) && (i_42 != j_42)))
        _fail(j_42);
      else
        i_42 = j_42;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_42));
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_n_20;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = q_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATempty, term_u_20));
  {
    t = printnl_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  t = SSL_TicksToSeconds(not_null(t_42));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym__2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_43), not_null(c_43));
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            t = SSL_addr(not_null(b_43), not_null(c_43));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_84(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
        j_43 = t;
        i_43 :
        if(((ATgetType(j_43) == AT_LIST) && !(ATisEmpty(j_43))))
          {
            k_43 = ATgetFirst((ATermList) j_43);
            l_43 = (ATerm) ATgetNext((ATermList) j_43);
            {
              ATerm o_43 = NULL;
              ATerm r_43 = NULL;
              t = not_null(l_43);
              {
                t = foldr_2(t, i_84, j_84);
                {
                  r_43 = t;
                  if(((o_43 != NULL) && (o_43 != r_43)))
                    _fail(r_43);
                  else
                    o_43 = r_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_43), not_null(o_43));
                t = j_84(t);
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
ATerm crush_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm z_43 = NULL;
  ATerm b_44 = NULL;
  z_43 = t;
  {
    ATerm c_44 = NULL;
    ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
    t = not_null(z_43);
    {
      c_44 = t;
      {
        t = SSL_explode_term(not_null(c_44));
        {
          e_44 = t;
          y_43 :
          if(match_cons(e_44, sym__2))
            {
              f_44 = ATgetArgument(e_44, 0);
              g_44 = ATgetArgument(e_44, 1);
              if(((b_44 != NULL) && (b_44 != g_44)))
                _fail(g_44);
              else
                b_44 = g_44;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_44);
      t = foldr_2(t, g_83, h_83);
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
    ATerm u_2 (ATerm t)
    {
      t = term_k_7;
      return(t);
    }
    t = crush_2(t, u_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_44 = NULL,p_44 = NULL,q_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym__2))
    {
      p_44 = ATgetArgument(m_44, 0);
      q_44 = ATgetArgument(m_44, 1);
      {
        ATerm b_21;
        b_21 = t;
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_44), not_null(q_44));
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              t = SSL_gtr(not_null(p_44), not_null(q_44));
            }
        }
        t = b_21;
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
  ATerm c_45 = NULL;
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
      d_45 = t;
      b_45 :
      if(match_cons(d_45, sym__2))
        {
          e_45 = ATgetArgument(d_45, 0);
          f_45 = ATgetArgument(d_45, 1);
          {
            if(((c_45 != NULL) && (c_45 != e_45)))
              _fail(e_45);
            else
              c_45 = e_45;
            if(((c_45 != NULL) && (c_45 != f_45)))
              _fail(f_45);
            else
              c_45 = f_45;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm i_45 = NULL;
      ATerm j_45 = NULL;
      t = term_i_12;
      {
        t = get_config_0(t);
        {
          j_45 = t;
          if(((i_45 != NULL) && (i_45 != j_45)))
            _fail(j_45);
          else
            i_45 = j_45;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), term_l_7);
        t = geq_0(t);
      }
    }
    t = r_21;
    t = f_91(t);
    return(t);
  }
  t = try_1(t, v_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm n_45 = NULL,p_45 = NULL;
    ATerm s_21;
    s_21 = t;
    {
      ATerm o_45 = NULL;
      t = run_time_0(t);
      {
        o_45 = t;
        if(((n_45 != NULL) && (n_45 != o_45)))
          _fail(o_45);
        else
          n_45 = o_45;
      }
    }
    t = s_21;
    {
      ATerm q_45 = NULL;
      t = term_t_21;
      {
        t = get_config_0(t);
        {
          q_45 = t;
          if(((p_45 != NULL) && (p_45 != q_45)))
            _fail(q_45);
          else
            p_45 = q_45;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_21), not_null(n_45)), term_u_21), not_null(p_45)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_2);
  {
    t = term_k_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_Version_0))
    {
      ATerm z_45 = NULL,b_46 = NULL;
      ATerm w_21;
      w_21 = t;
      {
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(x_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
      }
      t = w_21;
      {
        ATerm c_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_45));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm x_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = x_21;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_2);
  t = l_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  t = SSL_table_create(not_null(h_46));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  {
    ATerm h_22;
    h_22 = t;
    {
      t = term_s_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_v_9, not_null(l_46));
          t = table_put_0(t);
        }
      }
    }
    t = h_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  t = SSL_table_destroy(not_null(p_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = SSL_exit(not_null(t_46));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(((ATgetType(x_46) == AT_LIST) && ATisEmpty(x_46)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
        {
          y_46 = ATgetFirst((ATermList) x_46);
          z_46 = (ATerm) ATgetNext((ATermList) x_46);
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
  ATerm i_22;
  i_22 = t;
  {
    ATerm c_47 = NULL;
    ATerm f_47 = NULL;
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm d_47 = NULL;
          ATerm e_47 = NULL;
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
          t = (ATerm) ATinsert(ATempty, not_null(d_47));
        }
      }
    {
      f_47 = t;
      if(((c_47 != NULL) && (c_47 != f_47)))
        _fail(f_47);
      else
        c_47 = f_47;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(c_47));
      t = printnl_0(t);
    }
  }
  t = i_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm i_47 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = Cons_2(t, u_77, i_47);
      }
    return(t);
  }
  t = i_47(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  r_47 = t;
  o_47 :
  if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
    {
      p_47 = ATgetFirst((ATermList) r_47);
      q_47 = (ATerm) ATgetNext((ATermList) r_47);
      {
        ATerm u_47 = NULL;
        t = not_null(q_47);
        {
          ATerm z_22;
          z_22 = t;
          {
            ATerm v_47 = NULL,x_47 = NULL,z_47 = NULL;
            ATerm a_23;
            a_23 = t;
            {
              ATerm w_47 = NULL;
              t = d_0(t);
              {
                w_47 = t;
                if(((v_47 != NULL) && (v_47 != w_47)))
                  _fail(w_47);
                else
                  v_47 = w_47;
              }
            }
            t = a_23;
            {
              ATerm y_47 = NULL;
              t = not_null(p_47);
              {
                t = a_0(t);
                {
                  y_47 = t;
                  if(((x_47 != NULL) && (x_47 != y_47)))
                    _fail(y_47);
                  else
                    x_47 = y_47;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_47)), not_null(x_47));
                {
                  z_47 = t;
                  if(((u_47 != NULL) && (u_47 != z_47)))
                    _fail(z_47);
                  else
                    u_47 = z_47;
                }
              }
            }
          }
          t = z_22;
          {
            ATerm y_2 (ATerm t)
            {
              t = not_null(u_47);
              return(t);
            }
            t = reverse_acc_2(t, a_0, y_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_47) == AT_LIST) && ATisEmpty(r_47)))
        {
          {
            t = term_s_4;
            t = d_0(t);
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
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_2);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,e_49 = NULL;
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym__2))
    {
      t_48 = ATgetArgument(s_48, 0);
      e_49 = ATgetArgument(s_48, 1);
      t = SSL_table_get(not_null(t_48), not_null(e_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym_Program_1))
    {
      s_49 = ATgetArgument(r_49, 0);
      {
        ATerm v_49 = NULL,x_49 = NULL;
        ATerm w_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
        }
        {
          t = not_null(s_49);
          {
            ATerm z_49 = NULL;
            t = k_59(t);
            {
              x_49 = t;
              {
                ATerm a_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_49)), not_null(v_49));
                {
                  a_50 = t;
                  if(((z_49 != NULL) && (z_49 != a_50)))
                    _fail(a_50);
                  else
                    z_49 = a_50;
                }
                t = not_null(z_49);
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
  ATerm k_50 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_50 = NULL;
      t = term_t_21;
      {
        t = get_config_0(t);
        {
          l_50 = t;
          if(((k_50 != NULL) && (k_50 != l_50)))
            _fail(l_50);
          else
            k_50 = l_50;
        }
      }
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm b_3 (ATerm t)
          {
            ATerm m_50 = NULL;
            m_50 = t;
            if(((k_50 != NULL) && (k_50 != m_50)))
              _fail(m_50);
            else
              k_50 = m_50;
            return(t);
          }
          t = Program_1(t, b_3);
          return(t);
        }
        t = option_defined_1(t, a_3);
      }
    }
  {
    ATerm c_3 (ATerm t)
    {
      ATerm d_3 (ATerm t)
      {
        t = not_null(k_50);
        return(t);
      }
      t = short_description_1(t, d_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_3);
    {
      t = term_d_23;
      {
        t = echo_0(t);
        {
          t = term_i_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm n_50 = NULL;
                  ATerm o_50 = NULL;
                  o_50 = t;
                  if(((n_50 != NULL) && (n_50 != o_50)))
                    _fail(o_50);
                  else
                    n_50 = o_50;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_50)), term_j_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm p_50 = NULL;
                    ATerm q_50 = NULL;
                    ATerm g_3 (ATerm t)
                    {
                      t = not_null(k_50);
                      return(t);
                    }
                    t = long_description_1(t, g_3);
                    {
                      q_50 = t;
                      if(((p_50 != NULL) && (p_50 != q_50)))
                        _fail(q_50);
                      else
                        p_50 = q_50;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_50)), term_k_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_3);
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
  ATerm l_23;
  l_23 = t;
  {
    ATerm w_50 = NULL;
    ATerm x_50 = NULL;
    x_50 = t;
    if(((w_50 != NULL) && (w_50 != x_50)))
      _fail(x_50);
    else
      w_50 = x_50;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATempty, not_null(w_50)));
      t = printnl_0(t);
    }
  }
  t = l_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm m_23;
  m_23 = t;
  {
    t = k_88(t);
    t = debug_0(t);
  }
  t = m_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm e_51 = NULL,f_51 = NULL;
  e_51 = t;
  d_51 :
  if(match_cons(e_51, sym_Undefined_1))
    {
      f_51 = ATgetArgument(e_51, 0);
      {
        ATerm i_51 = NULL,n_51 = NULL;
        ATerm m_51 = NULL;
        t = SSLgetAnnotations(not_null(e_51));
        {
          m_51 = t;
          if(((i_51 != NULL) && (i_51 != m_51)))
            _fail(m_51);
          else
            i_51 = m_51;
        }
        {
          t = not_null(f_51);
          {
            ATerm p_51 = NULL;
            t = l_59(t);
            {
              n_51 = t;
              {
                ATerm q_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_51)), not_null(i_51));
                {
                  q_51 = t;
                  if(((p_51 != NULL) && (p_51 != q_51)))
                    _fail(q_51);
                  else
                    p_51 = q_51;
                }
                t = not_null(p_51);
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
ATerm fetch_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm x_51 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_78, _id);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = Cons_2(t, _id, x_51);
      }
    return(t);
  }
  t = x_51(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_92 (ATerm))
{
  t = fetch_1(t, i_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Help_0))
    {
      ATerm e_52 = NULL,g_52 = NULL;
      ATerm w_23;
      w_23 = t;
      {
        ATerm f_52 = NULL;
        t = SSLgetAnnotations(not_null(c_52));
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
      }
      t = w_23;
      {
        ATerm h_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_52));
        {
          h_52 = t;
          if(((g_52 != NULL) && (g_52 != h_52)))
            _fail(h_52);
          else
            g_52 = h_52;
        }
        t = not_null(g_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm m_52 = NULL;
    m_52 = t;
    l_52 :
    if(!(match_string(m_52, "--help")))
      {
        if(!(match_string(m_52, "-h")))
          {
            if(!(match_string(m_52, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_y_23;
    {
      t = set_config_0(t);
      t = term_z_23;
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_a_24;
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  o_52 :
  if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
    {
      q_52 = ATgetFirst((ATermList) p_52);
      r_52 = (ATerm) ATgetNext((ATermList) p_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_52)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_58 (ATerm), ATerm l_58 (ATerm))
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(((ATgetType(i_53) == AT_LIST) && !(ATisEmpty(i_53))))
    {
      j_53 = ATgetFirst((ATermList) i_53);
      k_53 = (ATerm) ATgetNext((ATermList) i_53);
      {
        ATerm o_53 = NULL,q_53 = NULL;
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(i_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
        {
          t = not_null(j_53);
          {
            ATerm s_53 = NULL;
            t = k_58(t);
            {
              q_53 = t;
              {
                t = not_null(k_53);
                {
                  ATerm u_53 = NULL;
                  t = l_58(t);
                  {
                    s_53 = t;
                    {
                      ATerm v_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_53)), not_null(q_53)), not_null(o_53));
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
  ATerm f_54 = NULL;
  f_54 = t;
  e_54 :
  if(((ATgetType(f_54) == AT_LIST) && ATisEmpty(f_54)))
    {
      {
        ATerm h_54 = NULL,j_54 = NULL;
        ATerm b_24;
        b_24 = t;
        {
          ATerm i_54 = NULL;
          t = SSLgetAnnotations(not_null(f_54));
          {
            i_54 = t;
            if(((h_54 != NULL) && (h_54 != i_54)))
              _fail(i_54);
            else
              h_54 = i_54;
          }
        }
        t = b_24;
        {
          ATerm k_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_54));
          {
            k_54 = t;
            if(((j_54 != NULL) && (j_54 != k_54)))
              _fail(k_54);
            else
              j_54 = k_54;
          }
          t = not_null(j_54);
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
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  q_54 = t;
  p_54 :
  if(match_cons(q_54, sym__2))
    {
      r_54 = ATgetArgument(q_54, 0);
      s_54 = ATgetArgument(q_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_12, not_null(r_54), not_null(s_54));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm c_24;
  c_24 = t;
  {
    ATerm m_3 (ATerm t)
    {
      t = term_g_24;
      t = l_93(t);
      return(t);
    }
    t = try_1(t, m_3);
  }
  t = c_24;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm a_55 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm y_54 = NULL;
        ATerm z_54 = NULL;
        z_54 = t;
        if(((y_54 != NULL) && (y_54 != z_54)))
          _fail(z_54);
        else
          y_54 = z_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_21, not_null(y_54));
          t = set_config_0(t);
        }
      }
      t = h_24;
      {
        ATerm b_55 = NULL;
        b_55 = t;
        if(((a_55 != NULL) && (a_55 != b_55)))
          _fail(b_55);
        else
          a_55 = b_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_55));
      }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm l_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                t = l_93(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = l_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
    k_55 = t;
    g_55 :
    if(match_cons(k_55, sym__3))
      {
        l_55 = ATgetArgument(k_55, 0);
        m_55 = ATgetArgument(k_55, 1);
        n_55 = ATgetArgument(k_55, 2);
        {
          if(((h_55 != NULL) && (h_55 != l_55)))
            _fail(l_55);
          else
            h_55 = l_55;
          {
            if(((i_55 != NULL) && (i_55 != m_55)))
              _fail(m_55);
            else
              i_55 = m_55;
            {
              if(((j_55 != NULL) && (j_55 != n_55)))
                _fail(n_55);
              else
                j_55 = n_55;
              t = SSL_table_put(not_null(h_55), not_null(i_55), not_null(j_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm q_55 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    t = term_t_24;
    t = table_put_0(t);
  }
  t = s_24;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_93(t);
          ;
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24;
            y_24 = t;
            {
              ATerm z_24 = t;
              int a_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(a_25);
                }
              else
                {
                  t = z_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_24;
            {
              t = system_usage_0(t);
              {
                t = term_k_7;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm r_55 = NULL;
                  r_55 = t;
                  if(((q_55 != NULL) && (q_55 != r_55)))
                    _fail(r_55);
                  else
                    q_55 = r_55;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), term_b_25);
                  return(t);
                }
                t = say_1(t, t_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm c_25;
        c_25 = t;
        {
          t = term_d_20;
          t = table_destroy_0(t);
        }
        t = c_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm))
{
  t = parse_options_1(t, r_89);
  {
    t = store_options_0(t);
    {
      t = t_89(t);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_89);
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm f_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_89(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = f_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_90);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, k_90, l_90, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      ATerm j_25;
      j_25 = t;
      {
        ATerm u_55 = NULL;
        ATerm v_55 = NULL;
        t = term_t_21;
        {
          t = get_config_0(t);
          {
            v_55 = t;
            if(((u_55 != NULL) && (u_55 != v_55)))
              _fail(v_55);
            else
              u_55 = v_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATinsert(ATempty, not_null(u_55)));
          t = printnl_0(t);
        }
      }
      t = j_25;
      return(t);
    }
    t = if_verbose2_1(t, y_3);
    return(t);
  }
  t = iowrap_4(t, c_90, d_90, e_90, x_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_90 (ATerm), ATerm b_90 (ATerm))
{
  t = iowrap_3(t, a_90, b_90, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      t = termid_check_p__1(t, v_97);
      return(t);
    }
    t = try_1(t, e_4);
    {
      t = w_97(t);
      {
        ATerm f_4 (ATerm t)
        {
          t = termid_set_p__1(t, v_97);
          return(t);
        }
        t = try_1(t, f_4);
      }
    }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_97(t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        {
          ATerm g_4 (ATerm t)
          {
            ATerm y_55 = NULL;
            y_55 = t;
            x_55 :
            if(!(match_string(y_55, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm h_4 (ATerm t)
          {
            t = term_a_10;
            return(t);
          }
          ATerm j_4 (ATerm t)
          {
            t = term_m_25;
            return(t);
          }
          t = Option_3(t, g_4, h_4, j_4);
        }
      }
    return(t);
  }
  t = iowrap_2(t, z_3, d_4);
  return(t);
}
ATerm io_idwrap_2 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = _2(t, _id, u_97);
    return(t);
  }
  t = io_idwrap_3(t, t_97, m_4, _fail);
  return(t);
}
ATerm sdf_regularize_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm a_56 = NULL;
      a_56 = t;
      z_55 :
      if(!(match_string(a_56, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      t = term_n_25;
      return(t);
    }
    t = InOutId_2(t, o_4, p_4);
    return(t);
  }
  t = io_idwrap_2(t, n_4, regularize_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sdf_regularize_0(t);
  return(t);
}

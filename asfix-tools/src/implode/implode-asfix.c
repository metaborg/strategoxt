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
ATerm term_d_41;
ATerm term_p_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_q_39;
ATerm term_x_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_q_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_x_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_d_30;
ATerm term_f_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_q_18;
ATerm term_w_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_v_14;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
void init_constant_terms (void)
{
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_x_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_x_33);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_x_33);
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
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_m_38, term_n_38);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_q_39, term_x_33);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__3, term_m_38, term_n_38, (ATerm) ATempty);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm o_79 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm h_86 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm g_86 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm f_86 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm e_86 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm d_86 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm k_86 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm z_72 (ATerm), ATerm a_73 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm f_90 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm alt_2 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm b_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm q_88 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm r_87 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm t_95 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm sort_1 (ATerm, ATerm a_1 (ATerm));
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm i_73 (ATerm));
ATerm opt_1 (ATerm, ATerm z_0 (ATerm));
ATerm cf_1 (ATerm, ATerm y_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_102 (ATerm));
ATerm prod_3 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm p_88 (ATerm));
ATerm remove_x_1 (ATerm, ATerm q_86 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm w_88 (ATerm), ATerm x_88 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_95 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_108 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_113 (ATerm));
ATerm debug_1 (ATerm, ATerm r_105 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_102 (ATerm), ATerm x_102 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_101 (ATerm), ATerm i_101 (ATerm));
ATerm crush_2 (ATerm, ATerm f_100 (ATerm), ATerm g_100 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_108 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_113 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm lit_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm v_94 (ATerm));
ATerm seq_1 (ATerm, ATerm s_78 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm o_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm iter_1 (ATerm, ATerm l_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm t_94 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm e_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_105 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_95 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_106 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_107 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_107 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_107 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_114 (ATerm), ATerm c_114 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_options_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
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
        t = term_c_10;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_d_10;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
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
              t = term_g_10;
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_h_10;
              return(t);
            }
            t = Option_3(t, f_0, h_1, l_1);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
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
                    t = term_k_10;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_l_10;
                    return(t);
                  }
                  t = Option_3(t, m_1, n_1, r_1);
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm m_10 = t;
                    int n_10 = stack_ptr;
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
                          t = term_o_10;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_p_10;
                          return(t);
                        }
                        t = Option_3(t, s_1, t_1, u_1);
                        LocalPopChoice(n_10);
                      }
                    else
                      {
                        t = m_10;
                        {
                          ATerm q_10 = t;
                          int r_10 = stack_ptr;
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
                                t = term_s_10;
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_t_10;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, x_1);
                              LocalPopChoice(r_10);
                            }
                          else
                            {
                              t = q_10;
                              {
                                ATerm u_10 = t;
                                int v_10 = stack_ptr;
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
                                      t = term_w_10;
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_x_10;
                                      return(t);
                                    }
                                    t = Option_3(t, y_1, z_1, a_2);
                                    LocalPopChoice(v_10);
                                  }
                                else
                                  {
                                    t = u_10;
                                    {
                                      ATerm y_10 = t;
                                      int z_10 = stack_ptr;
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
                                            t = term_a_11;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_b_11;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
                                          LocalPopChoice(z_10);
                                        }
                                      else
                                        {
                                          t = y_10;
                                          {
                                            ATerm c_11 = t;
                                            int d_11 = stack_ptr;
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
                                                  t = term_e_11;
                                                  return(t);
                                                }
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = term_f_11;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_2, l_2, m_2);
                                                LocalPopChoice(d_11);
                                              }
                                            else
                                              {
                                                t = c_11;
                                                {
                                                  ATerm g_11 = t;
                                                  int h_11 = stack_ptr;
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
                                                        t = term_i_11;
                                                        return(t);
                                                      }
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        t = term_j_11;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_2, r_2, s_2);
                                                      LocalPopChoice(h_11);
                                                    }
                                                  else
                                                    {
                                                      t = g_11;
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
                                                          t = term_k_11;
                                                          return(t);
                                                        }
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          t = term_l_11;
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
ATerm amb_1 (ATerm t, ATerm o_79 (ATerm))
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
            t = o_79(t);
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
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  x_12 = t;
  w_8 :
  if(match_cons(x_12, sym_prod_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      j_13 = ATgetArgument(x_12, 1);
      n_13 = ATgetArgument(x_12, 2);
      x_8 :
      if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
        {
          z_12 = ATgetFirst((ATermList) y_12);
          a_13 = (ATerm) ATgetNext((ATermList) y_12);
          y_8 :
          if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
            {
              b_13 = ATgetFirst((ATermList) a_13);
              c_13 = (ATerm) ATgetNext((ATermList) a_13);
              c_9 :
              if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
                {
                  d_13 = ATgetFirst((ATermList) c_13);
                  e_13 = (ATerm) ATgetNext((ATermList) c_13);
                  d_9 :
                  if(((ATgetType(e_13) == AT_LIST) && ATisEmpty(e_13)))
                    {
                      e_9 :
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
                      if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
                        {
                          f_13 = ATgetFirst((ATermList) e_13);
                          g_13 = (ATerm) ATgetNext((ATermList) e_13);
                          e_12 :
                          if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
                            {
                              h_13 = ATgetFirst((ATermList) g_13);
                              i_13 = (ATerm) ATgetNext((ATermList) g_13);
                              f_12 :
                              if(((ATgetType(i_13) == AT_LIST) && ATisEmpty(i_13)))
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
                  if(((ATgetType(c_13) == AT_LIST) && ATisEmpty(c_13)))
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
      if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
        {
          g_14 = ATgetFirst((ATermList) f_14);
          h_14 = (ATerm) ATgetNext((ATermList) f_14);
          y_13 :
          if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
            {
              i_14 = ATgetFirst((ATermList) h_14);
              j_14 = (ATerm) ATgetNext((ATermList) h_14);
              z_13 :
              if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
                {
                  b_14 = ATgetFirst((ATermList) j_14);
                  c_14 = (ATerm) ATgetNext((ATermList) j_14);
                  a_14 :
                  if(((ATgetType(c_14) == AT_LIST) && ATisEmpty(c_14)))
                    {
                      {
                        ATerm o_14 = NULL,q_14 = NULL,s_14 = NULL;
                        ATerm m_11;
                        m_11 = t;
                        {
                          t = not_null(e_14);
                          t = is_conc_0(t);
                        }
                        t = m_11;
                        {
                          ATerm n_11;
                          n_11 = t;
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
                          t = n_11;
                          {
                            ATerm o_11;
                            o_11 = t;
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
                            t = o_11;
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
                  if(((ATgetType(j_14) == AT_LIST) && ATisEmpty(j_14)))
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
                                            ATerm p_11 = t;
                                            int q_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(y_14);
                                                {
                                                  ATerm r_11 = t;
                                                  int s_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(s_11);
                                                    }
                                                  else
                                                    {
                                                      t = r_11;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(y_14));
                                                    t = conc_0(t);
                                                  }
                                                }
                                                LocalPopChoice(q_11);
                                              }
                                            else
                                              {
                                                t = p_11;
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
      if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
        {
          w_15 = ATgetFirst((ATermList) v_15);
          y_15 = (ATerm) ATgetNext((ATermList) v_15);
          p_15 :
          if(((ATgetType(y_15) == AT_LIST) && ATisEmpty(y_15)))
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
ATerm ReplConsSome_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  j_16 :
  if(match_cons(m_16, sym_appl_2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      k_16 :
      if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
        {
          p_16 = ATgetFirst((ATermList) o_16);
          q_16 = (ATerm) ATgetNext((ATermList) o_16);
          l_16 :
          if(((ATgetType(q_16) == AT_LIST) && ATisEmpty(q_16)))
            {
              {
                ATerm t_16 = NULL;
                ATerm t_11;
                t_11 = t;
                {
                  t = not_null(n_16);
                  t = is_some_0(t);
                }
                t = t_11;
                {
                  ATerm u_16 = NULL;
                  t = not_null(p_16);
                  {
                    t = h_86(t);
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
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          o_17 = (ATerm) ATgetNext((ATermList) l_17);
          d_17 :
          if(((ATgetType(o_17) == AT_LIST) && ATisEmpty(o_17)))
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
ATerm ReplConsIns_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  h_18 = t;
  e_18 :
  if(match_cons(h_18, sym_appl_2))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      f_18 :
      if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
        {
          k_18 = ATgetFirst((ATermList) j_18);
          l_18 = (ATerm) ATgetNext((ATermList) j_18);
          g_18 :
          if(((ATgetType(l_18) == AT_LIST) && ATisEmpty(l_18)))
            {
              {
                ATerm o_18 = NULL;
                ATerm u_11;
                u_11 = t;
                {
                  t = not_null(i_18);
                  t = is_ins_0(t);
                }
                t = u_11;
                {
                  ATerm p_18 = NULL;
                  t = not_null(k_18);
                  {
                    t = g_86(t);
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
      if(((ATgetType(x_18) == AT_LIST) && ATisEmpty(x_18)))
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
ATerm ReplConsNone_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  d_19 :
  if(match_cons(f_19, sym_appl_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      e_19 :
      if(((ATgetType(h_19) == AT_LIST) && ATisEmpty(h_19)))
        {
          {
            t = not_null(g_19);
            t = is_none_0(t);
            t = term_v_11;
          }
        }
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
      if(((ATgetType(q_19) == AT_LIST) && ATisEmpty(q_19)))
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
ATerm ReplConsNil_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  x_19 :
  if(match_cons(z_19, sym_appl_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      y_19 :
      if(((ATgetType(b_20) == AT_LIST) && ATisEmpty(b_20)))
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
ATerm ReplNamedCons_1 (ATerm t, ATerm d_86 (ATerm))
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
        ATerm w_11;
        w_11 = t;
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
        t = w_11;
        {
          ATerm x_11;
          x_11 = t;
          {
            ATerm f_21 = NULL;
            t = not_null(z_20);
            {
              t = map_1(t, d_86);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
          }
          t = x_11;
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
ATerm ReplCons_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, k_86);
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
            t = ReplConsNil_1(t, k_86);
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
                  t = ReplConsNone_1(t, k_86);
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = c_12;
                  {
                    ATerm h_12 = t;
                    int i_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, k_86);
                        LocalPopChoice(i_12);
                      }
                    else
                      {
                        t = h_12;
                        {
                          ATerm j_12 = t;
                          int k_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, k_86);
                              LocalPopChoice(k_12);
                            }
                          else
                            {
                              t = j_12;
                              t = ReplConsConc_1(t, k_86);
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
          if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
            {
              g_22 = ATgetFirst((ATermList) n_22);
              i_22 = (ATerm) ATgetNext((ATermList) n_22);
              t_21 :
              if(((ATgetType(i_22) == AT_LIST) && ATisEmpty(i_22)))
                {
                  u_21 :
                  if(match_cons(o_22, sym_opt_1))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      v_21 :
                      if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                        {
                          j_22 = ATgetFirst((ATermList) s_22);
                          k_22 = (ATerm) ATgetNext((ATermList) s_22);
                          w_21 :
                          if(((ATgetType(k_22) == AT_LIST) && ATisEmpty(k_22)))
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
                                  if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                                    {
                                      j_22 = ATgetFirst((ATermList) s_22);
                                      k_22 = (ATerm) ATgetNext((ATermList) s_22);
                                      b_22 :
                                      if(((ATgetType(k_22) == AT_LIST) && ATisEmpty(k_22)))
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
              if(((ATgetType(n_22) == AT_LIST) && ATisEmpty(n_22)))
                {
                  c_22 :
                  if(match_cons(o_22, sym_opt_1))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      d_22 :
                      if(((ATgetType(s_22) == AT_LIST) && ATisEmpty(s_22)))
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
                              if(((ATgetType(s_22) == AT_LIST) && ATisEmpty(s_22)))
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
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, c_3);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, b_3, _id);
        return(t);
      }
      t = appl_2(t, a_3, _id);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
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
      ATerm p_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(t_12);
        }
      else
        {
          t = p_12;
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm o_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = o_13;
                      }
                    return(t);
                  }
                  t = filter_1(t, f_3);
                  return(t);
                }
                t = appl_2(t, _id, e_3);
                {
                  ATerm p_13 = t;
                  int q_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
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
                            t = ReplCons_1(t, d_23);
                            LocalPopChoice(s_13);
                          }
                        else
                          {
                            t = r_13;
                            {
                              ATerm t_13 = t;
                              int u_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0(t);
                                  t = d_23(t);
                                  LocalPopChoice(u_13);
                                }
                              else
                                {
                                  t = t_13;
                                  {
                                    ATerm v_13 = t;
                                    int k_14 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = d_23(t);
                                        LocalPopChoice(k_14);
                                      }
                                    else
                                      {
                                        t = v_13;
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
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
                {
                  ATerm l_14 = t;
                  int m_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = list_1(t, d_23);
                        return(t);
                      }
                      t = amb_1(t, g_3);
                      LocalPopChoice(m_14);
                    }
                  else
                    {
                      t = l_14;
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
      ATerm n_14;
      n_14 = t;
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
      t = n_14;
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
                ATerm u_14;
                u_14 = t;
                {
                  ATerm s_24 = NULL;
                  t = term_v_14;
                  {
                    s_24 = t;
                    if(((r_24 != NULL) && (r_24 != s_24)))
                      _fail(s_24);
                    else
                      r_24 = s_24;
                  }
                }
                t = u_14;
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
                        ATerm w_14;
                        w_14 = t;
                        {
                          ATerm x_24 = NULL;
                          t = term_v_14;
                          {
                            x_24 = t;
                            if(((w_24 != NULL) && (w_24 != x_24)))
                              _fail(x_24);
                            else
                              w_24 = x_24;
                          }
                        }
                        t = w_14;
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
      ATerm d_15;
      d_15 = t;
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
      t = d_15;
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
          if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
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
                  if(((ATgetType(l_26) == AT_LIST) && ATisEmpty(l_26)))
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
ATerm Conc_2 (ATerm t, ATerm z_72 (ATerm), ATerm a_73 (ATerm))
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
            t = z_72(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = a_73(t);
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
  if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
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
      if(((ATgetType(a_29) == AT_LIST) && ATisEmpty(a_29)))
        {
          r_28 :
          if(((ATgetType(x_28) == AT_LIST) && ATisEmpty(x_28)))
            {
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_29(t);
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
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
                    ATerm g_15 = t;
                    int h_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_29(t);
                        LocalPopChoice(h_15);
                      }
                    else
                      {
                        t = g_15;
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
          if(((ATgetType(x_28) == AT_LIST) && ATisEmpty(x_28)))
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
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_1(t, i_3);
  {
    ATerm m_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(d_16);
      }
    else
      {
        t = m_15;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm j_3 (ATerm t)
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC2_0(t);
            t = Cons_2(t, conc_to_cons_0, _id);
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
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
      t = term_g_16;
    }
  else
    {
      if(match_string(x_29, "imports"))
        {
          t = term_h_16;
        }
      else
        {
          if(match_string(x_29, "id"))
            {
              t = term_i_16;
            }
          else
            {
              if(match_string(x_29, "hiddens"))
                {
                  t = term_r_16;
                }
              else
                {
                  if(match_string(x_29, "exports"))
                    {
                      t = term_s_16;
                    }
                  else
                    {
                      if(match_string(x_29, "module"))
                        {
                          t = term_v_16;
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
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  x_31 = t;
  q_30 :
  if(match_cons(x_31, sym_prod_3))
    {
      y_31 = ATgetArgument(x_31, 0);
      c_32 = ATgetArgument(x_31, 1);
      g_32 = ATgetArgument(x_31, 2);
      r_30 :
      if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
        {
          z_31 = ATgetFirst((ATermList) y_31);
          b_32 = (ATerm) ATgetNext((ATermList) y_31);
          s_30 :
          if(((ATgetType(b_32) == AT_LIST) && ATisEmpty(b_32)))
            {
              t_30 :
              if(match_cons(c_32, sym_opt_1))
                {
                  d_32 = ATgetArgument(c_32, 0);
                  u_30 :
                  {
                    if(((z_31 != NULL) && (z_31 != d_32)))
                      _fail(d_32);
                    else
                      z_31 = d_32;
                    t = term_w_16;
                  }
                }
              else
                {
                  if(match_cons(c_32, sym_cf_1))
                    {
                      d_32 = ATgetArgument(c_32, 0);
                      v_30 :
                      if(match_cons(z_31, sym_cf_1))
                        {
                          a_32 = ATgetArgument(z_31, 0);
                          w_30 :
                          if(match_cons(d_32, sym_opt_1))
                            {
                              e_32 = ATgetArgument(d_32, 0);
                              {
                                if(((a_32 != NULL) && (a_32 != e_32)))
                                  _fail(e_32);
                                else
                                  a_32 = e_32;
                                t = term_w_16;
                              }
                            }
                          else
                            {
                              if(match_cons(d_32, sym_iter_1))
                                {
                                  e_32 = ATgetArgument(d_32, 0);
                                  {
                                    if(((a_32 != NULL) && (a_32 != e_32)))
                                      _fail(e_32);
                                    else
                                      a_32 = e_32;
                                    t = term_x_16;
                                  }
                                }
                              else
                                {
                                  if(match_cons(d_32, sym_iter_sep_2))
                                    {
                                      e_32 = ATgetArgument(d_32, 0);
                                      f_32 = ATgetArgument(d_32, 1);
                                      {
                                        if(((a_32 != NULL) && (a_32 != e_32)))
                                          _fail(e_32);
                                        else
                                          a_32 = e_32;
                                        t = term_x_16;
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
                      if(match_cons(c_32, sym_iter_1))
                        {
                          d_32 = ATgetArgument(c_32, 0);
                          x_30 :
                          {
                            if(((z_31 != NULL) && (z_31 != d_32)))
                              _fail(d_32);
                            else
                              z_31 = d_32;
                            t = term_x_16;
                          }
                        }
                      else
                        {
                          if(match_cons(c_32, sym_iter_sep_2))
                            {
                              d_32 = ATgetArgument(c_32, 0);
                              w_31 = ATgetArgument(c_32, 1);
                              y_30 :
                              {
                                if(((z_31 != NULL) && (z_31 != d_32)))
                                  _fail(d_32);
                                else
                                  z_31 = d_32;
                                t = term_x_16;
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
              if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
                {
                  o_31 = ATgetFirst((ATermList) b_32);
                  p_31 = (ATerm) ATgetNext((ATermList) b_32);
                  z_30 :
                  if(((ATgetType(p_31) == AT_LIST) && ATisEmpty(p_31)))
                    {
                      a_31 :
                      if(match_cons(c_32, sym_iter_1))
                        {
                          d_32 = ATgetArgument(c_32, 0);
                          b_31 :
                          t = term_y_16;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
                        {
                          q_31 = ATgetFirst((ATermList) p_31);
                          r_31 = (ATerm) ATgetNext((ATermList) p_31);
                          c_31 :
                          if(((ATgetType(r_31) == AT_LIST) && ATisEmpty(r_31)))
                            {
                              d_31 :
                              if(match_cons(c_32, sym_iter_sep_2))
                                {
                                  d_32 = ATgetArgument(c_32, 0);
                                  w_31 = ATgetArgument(c_32, 1);
                                  e_31 :
                                  t = term_y_16;
                                }
                              else
                                {
                                  if(match_cons(c_32, sym_cf_1))
                                    {
                                      d_32 = ATgetArgument(c_32, 0);
                                      f_31 :
                                      if(match_cons(d_32, sym_iter_1))
                                        {
                                          e_32 = ATgetArgument(d_32, 0);
                                          g_31 :
                                          t = term_y_16;
                                        }
                                      else
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
                              if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
                                {
                                  s_31 = ATgetFirst((ATermList) r_31);
                                  t_31 = (ATerm) ATgetNext((ATermList) r_31);
                                  h_31 :
                                  if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
                                    {
                                      u_31 = ATgetFirst((ATermList) t_31);
                                      v_31 = (ATerm) ATgetNext((ATermList) t_31);
                                      i_31 :
                                      if(((ATgetType(v_31) == AT_LIST) && ATisEmpty(v_31)))
                                        {
                                          j_31 :
                                          if(match_cons(c_32, sym_cf_1))
                                            {
                                              d_32 = ATgetArgument(c_32, 0);
                                              k_31 :
                                              if(match_cons(d_32, sym_iter_sep_2))
                                                {
                                                  e_32 = ATgetArgument(d_32, 0);
                                                  f_32 = ATgetArgument(d_32, 1);
                                                  l_31 :
                                                  t = term_y_16;
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
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
          if(((ATgetType(y_31) == AT_LIST) && ATisEmpty(y_31)))
            {
              m_31 :
              if(match_cons(c_32, sym_opt_1))
                {
                  d_32 = ATgetArgument(c_32, 0);
                  t = term_z_16;
                }
              else
                {
                  if(match_cons(c_32, sym_cf_1))
                    {
                      d_32 = ATgetArgument(c_32, 0);
                      n_31 :
                      if(match_cons(d_32, sym_opt_1))
                        {
                          e_32 = ATgetArgument(d_32, 0);
                          t = term_z_16;
                        }
                      else
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
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  b_38 = t;
  b_35 :
  if(match_cons(b_38, sym_prod_3))
    {
      c_38 = ATgetArgument(b_38, 0);
      d_38 = ATgetArgument(b_38, 1);
      e_38 = ATgetArgument(b_38, 2);
      {
        ATerm g_38 = NULL;
        t = not_null(e_38);
        {
          ATerm k_3 (ATerm t)
          {
            ATerm h_38 = NULL,i_38 = NULL;
            h_38 = t;
            a_35 :
            if(match_cons(h_38, sym_cons_1))
              {
                i_38 = ATgetArgument(h_38, 0);
                if(((g_38 != NULL) && (g_38 != i_38)))
                  _fail(i_38);
                else
                  g_38 = i_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, k_3);
        }
        t = not_null(g_38);
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
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_appl_2))
    {
      q_38 = ATgetArgument(p_38, 0);
      r_38 = ATgetArgument(p_38, 1);
      {
        ATerm u_38 = NULL,w_38 = NULL;
        ATerm a_17;
        a_17 = t;
        {
          ATerm v_38 = NULL;
          t = not_null(q_38);
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                t = Constr1_0(t);
              }
            {
              t = try_1(t, Rename_Keyword_0);
              {
                v_38 = t;
                if(((u_38 != NULL) && (u_38 != v_38)))
                  _fail(v_38);
                else
                  u_38 = v_38;
              }
            }
          }
        }
        t = a_17;
        {
          t = SSL_mkterm(not_null(u_38), not_null(r_38));
          {
            w_38 = t;
            t = not_null(w_38);
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
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  k_39 = t;
  f_39 :
  if(match_cons(k_39, sym_prod_3))
    {
      l_39 = ATgetArgument(k_39, 0);
      r_39 = ATgetArgument(k_39, 1);
      v_39 = ATgetArgument(k_39, 2);
      g_39 :
      if(((ATgetType(l_39) == AT_LIST) && ATisEmpty(l_39)))
        {
          h_39 :
          if(match_cons(r_39, sym_iter_star_1))
            {
              s_39 = ATgetArgument(r_39, 0);
              t = term_w_17;
            }
          else
            {
              if(match_cons(r_39, sym_iter_star_sep_2))
                {
                  s_39 = ATgetArgument(r_39, 0);
                  j_39 = ATgetArgument(r_39, 1);
                  t = term_w_17;
                }
              else
                {
                  if(match_cons(r_39, sym_cf_1))
                    {
                      s_39 = ATgetArgument(r_39, 0);
                      i_39 :
                      if(match_cons(s_39, sym_iter_star_1))
                        {
                          t_39 = ATgetArgument(s_39, 0);
                          t = term_w_17;
                        }
                      else
                        {
                          if(match_cons(s_39, sym_iter_star_sep_2))
                            {
                              t_39 = ATgetArgument(s_39, 0);
                              u_39 = ATgetArgument(s_39, 1);
                              t = term_w_17;
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
  ATerm d_40 = NULL,e_40 = NULL,k_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_appl_2))
    {
      e_40 = ATgetArgument(d_40, 0);
      k_40 = ATgetArgument(d_40, 1);
      {
        ATerm n_40 = NULL;
        ATerm o_40 = NULL;
        t = not_null(e_40);
        {
          t = ConstrNil_0(t);
          {
            o_40 = t;
            if(((n_40 != NULL) && (n_40 != o_40)))
              _fail(o_40);
            else
              n_40 = o_40;
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
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
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
  ATerm v_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_ReplaceAppl_0))
    {
      ATerm x_40 = NULL,z_40 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm y_40 = NULL;
        t = SSLgetAnnotations(not_null(v_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
      }
      t = z_17;
      {
        ATerm a_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(x_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        t = not_null(z_40);
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
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,m_42 = NULL;
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm m_18 = t;
                int n_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm b_42 = NULL;
                      b_42 = t;
                      if(((x_41 != NULL) && (x_41 != b_42)))
                        _fail(b_42);
                      else
                        x_41 = b_42;
                      return(t);
                    }
                    t = cf_1(t, t_3);
                    LocalPopChoice(n_18);
                  }
                else
                  {
                    t = m_18;
                    {
                      ATerm c_42 = NULL;
                      c_42 = t;
                      if(((x_41 != NULL) && (x_41 != c_42)))
                        _fail(c_42);
                      else
                        x_41 = c_42;
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
                ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
                d_42 = t;
                h_41 :
                if(match_cons(d_42, sym_alt_2))
                  {
                    e_42 = ATgetArgument(d_42, 0);
                    f_42 = ATgetArgument(d_42, 1);
                    {
                      if(((y_41 != NULL) && (y_41 != e_42)))
                        _fail(e_42);
                      else
                        y_41 = e_42;
                      if(((z_41 != NULL) && (z_41 != f_42)))
                        _fail(f_42);
                      else
                        z_41 = f_42;
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
            ATerm g_42 = NULL;
            g_42 = t;
            if(((a_42 != NULL) && (a_42 != g_42)))
              _fail(g_42);
            else
              a_42 = g_42;
            return(t);
          }
          t = appl_2(t, o_3, p_3);
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          {
            ATerm v_3 (ATerm t)
            {
              ATerm x_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm h_42 = NULL;
                  h_42 = t;
                  if(((x_41 != NULL) && (x_41 != h_42)))
                    _fail(h_42);
                  else
                    x_41 = h_42;
                  return(t);
                }
                t = Cons_2(t, z_3, Nil_0);
                return(t);
              }
              ATerm y_3 (ATerm t)
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
                  i_42 = t;
                  l_41 :
                  if(match_cons(i_42, sym_alt_2))
                    {
                      j_42 = ATgetArgument(i_42, 0);
                      k_42 = ATgetArgument(i_42, 1);
                      {
                        if(((y_41 != NULL) && (y_41 != j_42)))
                          _fail(j_42);
                        else
                          y_41 = j_42;
                        if(((z_41 != NULL) && (z_41 != k_42)))
                          _fail(k_42);
                        else
                          z_41 = k_42;
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
              ATerm l_42 = NULL;
              l_42 = t;
              if(((a_42 != NULL) && (a_42 != l_42)))
                _fail(l_42);
              else
                a_42 = l_42;
              return(t);
            }
            t = appl_2(t, v_3, w_3);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(y_41), not_null(z_41)), term_q_18);
        {
          ATerm q_43 (ATerm t)
          {
            ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
            ATerm r_43 (ATerm t)
            {
              ATerm s_42 = NULL;
              if(((x_41 != NULL) && (x_41 != o_42)))
                _fail(o_42);
              else
                x_41 = o_42;
              {
                if(((s_42 != NULL) && (s_42 != r_42)))
                  _fail(r_42);
                else
                  s_42 = r_42;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(s_42), not_null(a_42));
              }
              return(t);
            }
            ATerm s_43 (ATerm t)
            {
              ATerm v_42 = NULL;
              if(((x_41 != NULL) && (x_41 != p_42)))
                _fail(p_42);
              else
                x_41 = p_42;
              {
                if(((m_42 != NULL) && (m_42 != q_42)))
                  _fail(q_42);
                else
                  m_42 = q_42;
                {
                  if(((v_42 != NULL) && (v_42 != r_42)))
                    _fail(r_42);
                  else
                    v_42 = r_42;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(v_42), not_null(a_42));
                }
              }
              return(t);
            }
            ATerm t_43 (ATerm t)
            {
              ATerm b_43 = NULL;
              ATerm c_43 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_42), term_q_18);
              {
                t = add_0(t);
                {
                  c_43 = t;
                  if(((b_43 != NULL) && (b_43 != c_43)))
                    _fail(c_43);
                  else
                    b_43 = c_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_42), not_null(b_43));
                t = q_43(t);
              }
              return(t);
            }
            n_42 = t;
            r_41 :
            if(match_cons(n_42, sym__2))
              {
                o_42 = ATgetArgument(n_42, 0);
                r_42 = ATgetArgument(n_42, 1);
                s_41 :
                if(match_cons(o_42, sym_alt_2))
                  {
                    p_42 = ATgetArgument(o_42, 0);
                    q_42 = ATgetArgument(o_42, 1);
                    {
                      ATerm r_18 = t;
                      int c_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_43(t);
                          LocalPopChoice(c_19);
                        }
                      else
                        {
                          t = r_18;
                          {
                            ATerm i_19 = t;
                            int j_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_43(t);
                                LocalPopChoice(j_19);
                              }
                            else
                              {
                                t = i_19;
                                t = t_43(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = r_43(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = q_43(t);
        }
      }
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm d_43 = NULL;
        d_43 = t;
        w_41 :
        if(match_cons(d_43, sym_FlatAlt_0))
          {
            ATerm f_43 = NULL,h_43 = NULL;
            ATerm w_19;
            w_19 = t;
            {
              ATerm g_43 = NULL;
              t = SSLgetAnnotations(not_null(d_43));
              {
                g_43 = t;
                if(((f_43 != NULL) && (f_43 != g_43)))
                  _fail(g_43);
                else
                  f_43 = g_43;
              }
            }
            t = w_19;
            {
              ATerm i_43 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(f_43));
              {
                i_43 = t;
                if(((h_43 != NULL) && (h_43 != i_43)))
                  _fail(i_43);
                else
                  h_43 = i_43;
              }
              t = not_null(h_43);
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
  ATerm f_44 = NULL;
  f_44 = t;
  e_44 :
  if(match_cons(f_44, sym_bracket_0))
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_44 = NULL,j_44 = NULL;
          ATerm e_20;
          e_20 = t;
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
          t = e_20;
          {
            ATerm k_44 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(h_44));
            {
              k_44 = t;
              if(((j_44 != NULL) && (j_44 != k_44)))
                _fail(k_44);
              else
                j_44 = k_44;
            }
            t = not_null(j_44);
          }
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          {
            ATerm m_44 = NULL,o_44 = NULL;
            ATerm f_20;
            f_20 = t;
            {
              ATerm n_44 = NULL;
              t = SSLgetAnnotations(not_null(f_44));
              {
                n_44 = t;
                if(((m_44 != NULL) && (m_44 != n_44)))
                  _fail(n_44);
                else
                  m_44 = n_44;
              }
            }
            t = f_20;
            {
              ATerm p_44 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(m_44));
              {
                p_44 = t;
                if(((o_44 != NULL) && (o_44 != p_44)))
                  _fail(p_44);
                else
                  o_44 = p_44;
              }
              t = not_null(o_44);
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
ATerm oncetd_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm x_44 (ATerm t)
  {
    ATerm m_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_90(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = m_20;
        t = _one(t, x_44);
      }
    return(t);
  }
  t = x_44(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm f_1 (ATerm))
{
  ATerm h_45 = NULL,i_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_cons_1))
    {
      i_45 = ATgetArgument(h_45, 0);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_45 = NULL,n_45 = NULL;
            ATerm m_45 = NULL;
            t = SSLgetAnnotations(not_null(h_45));
            {
              m_45 = t;
              if(((l_45 != NULL) && (l_45 != m_45)))
                _fail(m_45);
              else
                l_45 = m_45;
            }
            {
              t = not_null(i_45);
              {
                ATerm p_45 = NULL;
                t = f_1(t);
                {
                  n_45 = t;
                  {
                    ATerm q_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(n_45)), not_null(l_45));
                    {
                      q_45 = t;
                      if(((p_45 != NULL) && (p_45 != q_45)))
                        _fail(q_45);
                      else
                        p_45 = q_45;
                    }
                    t = not_null(p_45);
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
              ATerm v_45 = NULL,x_45 = NULL;
              ATerm w_45 = NULL;
              t = SSLgetAnnotations(not_null(h_45));
              {
                w_45 = t;
                if(((v_45 != NULL) && (v_45 != w_45)))
                  _fail(w_45);
                else
                  v_45 = w_45;
              }
              {
                t = not_null(i_45);
                {
                  ATerm z_45 = NULL;
                  t = f_1(t);
                  {
                    x_45 = t;
                    {
                      ATerm a_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(x_45)), not_null(v_45));
                      {
                        a_46 = t;
                        if(((z_45 != NULL) && (z_45 != a_46)))
                          _fail(a_46);
                        else
                          z_45 = a_46;
                      }
                      t = not_null(z_45);
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
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_lex_1))
    {
      t_46 = ATgetArgument(s_46, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_46 = NULL,y_46 = NULL;
            ATerm x_46 = NULL;
            t = SSLgetAnnotations(not_null(s_46));
            {
              x_46 = t;
              if(((w_46 != NULL) && (w_46 != x_46)))
                _fail(x_46);
              else
                w_46 = x_46;
            }
            {
              t = not_null(t_46);
              {
                ATerm a_47 = NULL;
                t = e_1(t);
                {
                  y_46 = t;
                  {
                    ATerm b_47 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(y_46)), not_null(w_46));
                    {
                      b_47 = t;
                      if(((a_47 != NULL) && (a_47 != b_47)))
                        _fail(b_47);
                      else
                        a_47 = b_47;
                    }
                    t = not_null(a_47);
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
              ATerm e_47 = NULL,g_47 = NULL;
              ATerm f_47 = NULL;
              t = SSLgetAnnotations(not_null(s_46));
              {
                f_47 = t;
                if(((e_47 != NULL) && (e_47 != f_47)))
                  _fail(f_47);
                else
                  e_47 = f_47;
              }
              {
                t = not_null(t_46);
                {
                  ATerm i_47 = NULL;
                  t = e_1(t);
                  {
                    g_47 = t;
                    {
                      ATerm j_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(g_47)), not_null(e_47));
                      {
                        j_47 = t;
                        if(((i_47 != NULL) && (i_47 != j_47)))
                          _fail(j_47);
                        else
                          i_47 = j_47;
                      }
                      t = not_null(i_47);
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_alt_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      {
        ATerm v_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_48 = NULL,l_48 = NULL;
            ATerm k_48 = NULL;
            t = SSLgetAnnotations(not_null(d_48));
            {
              k_48 = t;
              if(((j_48 != NULL) && (j_48 != k_48)))
                _fail(k_48);
              else
                j_48 = k_48;
            }
            {
              t = not_null(e_48);
              {
                ATerm n_48 = NULL;
                t = c_1(t);
                {
                  l_48 = t;
                  {
                    t = not_null(f_48);
                    {
                      ATerm p_48 = NULL;
                      t = d_1(t);
                      {
                        n_48 = t;
                        {
                          ATerm q_48 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(l_48), not_null(n_48)), not_null(j_48));
                          {
                            q_48 = t;
                            if(((p_48 != NULL) && (p_48 != q_48)))
                              _fail(q_48);
                            else
                              p_48 = q_48;
                          }
                          t = not_null(p_48);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(a_21);
          }
        else
          {
            t = v_20;
            {
              ATerm u_48 = NULL,w_48 = NULL;
              ATerm v_48 = NULL;
              t = SSLgetAnnotations(not_null(d_48));
              {
                v_48 = t;
                if(((u_48 != NULL) && (u_48 != v_48)))
                  _fail(v_48);
                else
                  u_48 = v_48;
              }
              {
                t = not_null(e_48);
                {
                  ATerm y_48 = NULL;
                  t = c_1(t);
                  {
                    w_48 = t;
                    {
                      t = not_null(f_48);
                      {
                        ATerm a_49 = NULL;
                        t = d_1(t);
                        {
                          y_48 = t;
                          {
                            ATerm b_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(w_48), not_null(y_48)), not_null(u_48));
                            {
                              b_49 = t;
                              if(((a_49 != NULL) && (a_49 != b_49)))
                                _fail(b_49);
                              else
                                a_49 = b_49;
                            }
                            t = not_null(a_49);
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
  ATerm b_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(h_21);
    }
  else
    {
      t = b_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm b_1 (ATerm))
{
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym_varsym_1))
    {
      x_49 = ATgetArgument(w_49, 0);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_50 = NULL,c_50 = NULL;
            ATerm b_50 = NULL;
            t = SSLgetAnnotations(not_null(w_49));
            {
              b_50 = t;
              if(((a_50 != NULL) && (a_50 != b_50)))
                _fail(b_50);
              else
                a_50 = b_50;
            }
            {
              t = not_null(x_49);
              {
                ATerm e_50 = NULL;
                t = b_1(t);
                {
                  c_50 = t;
                  {
                    ATerm f_50 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(c_50)), not_null(a_50));
                    {
                      f_50 = t;
                      if(((e_50 != NULL) && (e_50 != f_50)))
                        _fail(f_50);
                      else
                        e_50 = f_50;
                    }
                    t = not_null(e_50);
                  }
                }
              }
            }
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            {
              ATerm i_50 = NULL,k_50 = NULL;
              ATerm j_50 = NULL;
              t = SSLgetAnnotations(not_null(w_49));
              {
                j_50 = t;
                if(((i_50 != NULL) && (i_50 != j_50)))
                  _fail(j_50);
                else
                  i_50 = j_50;
              }
              {
                t = not_null(x_49);
                {
                  ATerm m_50 = NULL;
                  t = b_1(t);
                  {
                    k_50 = t;
                    {
                      ATerm n_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(k_50)), not_null(i_50));
                      {
                        n_50 = t;
                        if(((m_50 != NULL) && (m_50 != n_50)))
                          _fail(n_50);
                        else
                          m_50 = n_50;
                      }
                      t = not_null(m_50);
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
  ATerm m_21 = t;
  int n_21 = stack_ptr;
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
        ATerm o_21 = t;
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
            t = o_21;
          }
        return(t);
      }
      t = prod_3(t, b_4, _id, c_4);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm p_21 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm h_4 (ATerm t)
              {
                ATerm v_22 = t;
                int x_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(x_22);
                  }
                else
                  {
                    t = v_22;
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
              ATerm y_22 = t;
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
                  t = y_22;
                }
              return(t);
            }
            t = prod_3(t, f_4, injective_alt_0, g_4);
            LocalPopChoice(u_22);
          }
        else
          {
            t = p_21;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm n_4 (ATerm t)
                    {
                      ATerm b_23 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = b_23;
                        }
                      return(t);
                    }
                    t = Cons_2(t, n_4, Nil_0);
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    ATerm c_23 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
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
                              t = cf_1(t, l_4);
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
                                    t = lex_1(t, l_4);
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
                                          t = iter_1(t, l_4);
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
                                                t = iter_star_1(t, l_4);
                                                LocalPopChoice(w_23);
                                              }
                                            else
                                              {
                                                t = v_23;
                                                {
                                                  ATerm x_23 = t;
                                                  int y_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_4 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, l_4, o_4);
                                                      LocalPopChoice(y_23);
                                                    }
                                                  else
                                                    {
                                                      t = x_23;
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
                    ATerm z_23 = t;
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
                        t = z_23;
                      }
                    return(t);
                  }
                  t = prod_3(t, k_4, l_4, m_4);
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm a_24 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
                        r_51 = t;
                        y_50 :
                        if(match_cons(r_51, sym_prod_3))
                          {
                            s_51 = ATgetArgument(r_51, 0);
                            x_51 = ATgetArgument(r_51, 1);
                            a_52 = ATgetArgument(r_51, 2);
                            z_50 :
                            if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
                              {
                                t_51 = ATgetFirst((ATermList) s_51);
                                w_51 = (ATerm) ATgetNext((ATermList) s_51);
                                a_51 :
                                if(match_cons(t_51, sym_cf_1))
                                  {
                                    u_51 = ATgetArgument(t_51, 0);
                                    b_51 :
                                    if(match_cons(u_51, sym_iter_sep_2))
                                      {
                                        v_51 = ATgetArgument(u_51, 0);
                                        p_51 = ATgetArgument(u_51, 1);
                                        c_51 :
                                        if(((ATgetType(w_51) == AT_LIST) && ATisEmpty(w_51)))
                                          {
                                            d_51 :
                                            if(match_cons(x_51, sym_cf_1))
                                              {
                                                y_51 = ATgetArgument(x_51, 0);
                                                e_51 :
                                                if(match_cons(y_51, sym_iter_star_sep_2))
                                                  {
                                                    z_51 = ATgetArgument(y_51, 0);
                                                    q_51 = ATgetArgument(y_51, 1);
                                                    f_51 :
                                                    if(match_cons(a_52, sym_no_attrs_0))
                                                      {
                                                        if(((v_51 != NULL) && (v_51 != z_51)))
                                                          _fail(z_51);
                                                        else
                                                          v_51 = z_51;
                                                        if(((p_51 != NULL) && (p_51 != q_51)))
                                                          _fail(q_51);
                                                        else
                                                          p_51 = q_51;
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(u_51, sym_iter_1))
                                          {
                                            v_51 = ATgetArgument(u_51, 0);
                                            g_51 :
                                            if(((ATgetType(w_51) == AT_LIST) && ATisEmpty(w_51)))
                                              {
                                                h_51 :
                                                if(match_cons(x_51, sym_cf_1))
                                                  {
                                                    y_51 = ATgetArgument(x_51, 0);
                                                    i_51 :
                                                    if(match_cons(y_51, sym_iter_star_1))
                                                      {
                                                        z_51 = ATgetArgument(y_51, 0);
                                                        j_51 :
                                                        if(match_cons(a_52, sym_no_attrs_0))
                                                          {
                                                            if(((v_51 != NULL) && (v_51 != z_51)))
                                                              _fail(z_51);
                                                            else
                                                              v_51 = z_51;
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
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
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
                        {
                          ATerm c_24 = t;
                          int d_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_4 (ATerm t)
                              {
                                ATerm u_4 (ATerm t)
                                {
                                  ATerm q_24 = t;
                                  int u_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_52 = NULL;
                                      e_52 = t;
                                      k_51 :
                                      if(!(match_string(e_52, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(u_24);
                                    }
                                  else
                                    {
                                      t = q_24;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, u_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, t_4);
                              LocalPopChoice(d_24);
                            }
                          else
                            {
                              t = c_24;
                              {
                                ATerm f_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
                                f_52 = t;
                                l_51 :
                                if(match_cons(f_52, sym_prod_3))
                                  {
                                    j_52 = ATgetArgument(f_52, 0);
                                    k_52 = ATgetArgument(f_52, 1);
                                    m_52 = ATgetArgument(f_52, 2);
                                    m_51 :
                                    if(match_cons(k_52, sym_sort_1))
                                      {
                                        l_52 = ATgetArgument(k_52, 0);
                                        n_51 :
                                        if(match_string(l_52, "<START>"))
                                          {
                                            o_51 :
                                            if(!(match_cons(m_52, sym_no_attrs_0)))
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
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
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  u_52 = t;
  r_52 :
  if(match_cons(u_52, sym_appl_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      s_52 :
      if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
        {
          x_52 = ATgetFirst((ATermList) w_52);
          y_52 = (ATerm) ATgetNext((ATermList) w_52);
          t_52 :
          if(((ATgetType(y_52) == AT_LIST) && ATisEmpty(y_52)))
            {
              {
                t = not_null(v_52);
                t = injection_0(t);
                t = not_null(x_52);
              }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm bottomup_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = bottomup_1(t, q_88);
    return(t);
  }
  t = _all(t, v_4);
  t = q_88(t);
  return(t);
}
ATerm flat_injections_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    t = try_1(t, Inj_0);
    return(t);
  }
  t = bottomup_1(t, w_4);
  return(t);
}
ATerm FlatInj_0 (ATerm t)
{
  ATerm g_53 = NULL;
  g_53 = t;
  f_53 :
  if(match_cons(g_53, sym_FlatInj_0))
    {
      ATerm i_53 = NULL,k_53 = NULL;
      ATerm v_24;
      v_24 = t;
      {
        ATerm j_53 = NULL;
        t = SSLgetAnnotations(not_null(g_53));
        {
          j_53 = t;
          if(((i_53 != NULL) && (i_53 != j_53)))
            _fail(j_53);
          else
            i_53 = j_53;
        }
      }
      t = v_24;
      {
        ATerm l_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(i_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        t = not_null(k_53);
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
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      t = is_list_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm z_24 = t;
          if((PushChoice() == 0))
            {
              t = lit_1(t, _id);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_24;
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
  ATerm t_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_RemoveLit_0))
    {
      ATerm v_53 = NULL,x_53 = NULL;
      ATerm a_25;
      a_25 = t;
      {
        ATerm w_53 = NULL;
        t = SSLgetAnnotations(not_null(t_53));
        {
          w_53 = t;
          if(((v_53 != NULL) && (v_53 != w_53)))
            _fail(w_53);
          else
            v_53 = w_53;
        }
      }
      t = a_25;
      {
        ATerm y_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(v_53));
        {
          y_53 = t;
          if(((x_53 != NULL) && (x_53 != y_53)))
            _fail(y_53);
          else
            x_53 = y_53;
        }
        t = not_null(x_53);
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
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  ATerm s_61 (ATerm t)
  {
    ATerm b_58 = NULL;
    ATerm m_59 = NULL;
    ATerm b_62 (ATerm t)
    {
      ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
      c_58 = t;
      v_54 :
      if(match_cons(c_58, sym_appl_2))
        {
          d_58 = ATgetArgument(c_58, 0);
          k_58 = ATgetArgument(c_58, 1);
          w_54 :
          if(match_cons(d_58, sym_prod_3))
            {
              e_58 = ATgetArgument(d_58, 0);
              f_58 = ATgetArgument(d_58, 1);
              j_58 = ATgetArgument(d_58, 2);
              x_54 :
              if(match_cons(f_58, sym_cf_1))
                {
                  g_58 = ATgetArgument(f_58, 0);
                  y_54 :
                  if(match_cons(g_58, sym_iter_sep_2))
                    {
                      h_58 = ATgetArgument(g_58, 0);
                      i_58 = ATgetArgument(g_58, 1);
                      z_54 :
                      if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
                        {
                          l_58 = ATgetFirst((ATermList) k_58);
                          m_58 = (ATerm) ATgetNext((ATermList) k_58);
                          a_55 :
                          if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(l_58));
                            }
                          else
                            {
                              if(((ATgetType(m_58) == AT_LIST) && !(ATisEmpty(m_58))))
                                {
                                  n_58 = ATgetFirst((ATermList) m_58);
                                  o_58 = (ATerm) ATgetNext((ATermList) m_58);
                                  b_55 :
                                  if(((ATgetType(o_58) == AT_LIST) && !(ATisEmpty(o_58))))
                                    {
                                      p_58 = ATgetFirst((ATermList) o_58);
                                      q_58 = (ATerm) ATgetNext((ATermList) o_58);
                                      c_55 :
                                      if(((ATgetType(q_58) == AT_LIST) && ATisEmpty(q_58)))
                                        {
                                          {
                                            ATerm z_58 = NULL,b_59 = NULL;
                                            ATerm b_25;
                                            b_25 = t;
                                            {
                                              ATerm a_59 = NULL;
                                              t = not_null(l_58);
                                              {
                                                t = b_62(t);
                                                {
                                                  a_59 = t;
                                                  if(((z_58 != NULL) && (z_58 != a_59)))
                                                    _fail(a_59);
                                                  else
                                                    z_58 = a_59;
                                                }
                                              }
                                            }
                                            t = b_25;
                                            {
                                              ATerm c_59 = NULL;
                                              t = not_null(p_58);
                                              {
                                                t = b_62(t);
                                                {
                                                  c_59 = t;
                                                  if(((b_59 != NULL) && (b_59 != c_59)))
                                                    _fail(c_59);
                                                  else
                                                    b_59 = c_59;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_59)), (ATerm) ATinsert(ATempty, not_null(n_58))), not_null(z_58));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                                            {
                                              r_58 = ATgetFirst((ATermList) q_58);
                                              s_58 = (ATerm) ATgetNext((ATermList) q_58);
                                              d_55 :
                                              if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
                                                {
                                                  t_58 = ATgetFirst((ATermList) s_58);
                                                  u_58 = (ATerm) ATgetNext((ATermList) s_58);
                                                  g_55 :
                                                  if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                                    {
                                                      {
                                                        ATerm i_59 = NULL,k_59 = NULL;
                                                        ATerm c_25;
                                                        c_25 = t;
                                                        {
                                                          ATerm j_59 = NULL;
                                                          t = not_null(l_58);
                                                          {
                                                            t = b_62(t);
                                                            {
                                                              j_59 = t;
                                                              if(((i_59 != NULL) && (i_59 != j_59)))
                                                                _fail(j_59);
                                                              else
                                                                i_59 = j_59;
                                                            }
                                                          }
                                                        }
                                                        t = c_25;
                                                        {
                                                          ATerm l_59 = NULL;
                                                          t = not_null(t_58);
                                                          {
                                                            t = b_62(t);
                                                            {
                                                              l_59 = t;
                                                              if(((k_59 != NULL) && (k_59 != l_59)))
                                                                _fail(l_59);
                                                              else
                                                                k_59 = l_59;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_59)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_58)), not_null(p_58)), not_null(n_58))), not_null(i_59));
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
    t = b_62(t);
    {
      m_59 = t;
      if(((b_58 != NULL) && (b_58 != m_59)))
        _fail(m_59);
      else
        b_58 = m_59;
    }
    t = not_null(b_58);
    return(t);
  }
  ATerm t_61 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(w_57));
    return(t);
  }
  ATerm u_61 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm v_61 (ATerm t)
  {
    t = not_null(w_57);
    t = FlatList_0(t);
    return(t);
  }
  ATerm w_61 (ATerm t)
  {
    ATerm r_59 = NULL;
    ATerm k_61 = NULL;
    ATerm l_62 (ATerm t)
    {
      ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
      s_59 = t;
      q_55 :
      if(match_cons(s_59, sym_appl_2))
        {
          t_59 = ATgetArgument(s_59, 0);
          z_59 = ATgetArgument(s_59, 1);
          r_55 :
          if(match_cons(t_59, sym_prod_3))
            {
              u_59 = ATgetArgument(t_59, 0);
              v_59 = ATgetArgument(t_59, 1);
              y_59 = ATgetArgument(t_59, 2);
              s_55 :
              if(match_cons(v_59, sym_cf_1))
                {
                  w_59 = ATgetArgument(v_59, 0);
                  t_55 :
                  if(match_cons(w_59, sym_iter_1))
                    {
                      x_59 = ATgetArgument(w_59, 0);
                      u_55 :
                      if(((ATgetType(z_59) == AT_LIST) && !(ATisEmpty(z_59))))
                        {
                          a_60 = ATgetFirst((ATermList) z_59);
                          b_60 = (ATerm) ATgetNext((ATermList) z_59);
                          v_55 :
                          if(((ATgetType(b_60) == AT_LIST) && ATisEmpty(b_60)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(a_60));
                            }
                          else
                            {
                              if(((ATgetType(b_60) == AT_LIST) && !(ATisEmpty(b_60))))
                                {
                                  h_60 = ATgetFirst((ATermList) b_60);
                                  i_60 = (ATerm) ATgetNext((ATermList) b_60);
                                  w_55 :
                                  if(((ATgetType(i_60) == AT_LIST) && ATisEmpty(i_60)))
                                    {
                                      {
                                        ATerm o_60 = NULL,u_60 = NULL;
                                        ATerm d_25;
                                        d_25 = t;
                                        {
                                          ATerm t_60 = NULL;
                                          t = not_null(a_60);
                                          {
                                            t = l_62(t);
                                            {
                                              t_60 = t;
                                              if(((o_60 != NULL) && (o_60 != t_60)))
                                                _fail(t_60);
                                              else
                                                o_60 = t_60;
                                            }
                                          }
                                        }
                                        t = d_25;
                                        {
                                          ATerm x_60 = NULL;
                                          t = not_null(h_60);
                                          {
                                            t = l_62(t);
                                            {
                                              x_60 = t;
                                              if(((u_60 != NULL) && (u_60 != x_60)))
                                                _fail(x_60);
                                              else
                                                u_60 = x_60;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_60)), not_null(o_60));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(i_60) == AT_LIST) && !(ATisEmpty(i_60))))
                                        {
                                          j_60 = ATgetFirst((ATermList) i_60);
                                          k_60 = (ATerm) ATgetNext((ATermList) i_60);
                                          x_55 :
                                          if(((ATgetType(k_60) == AT_LIST) && ATisEmpty(k_60)))
                                            {
                                              {
                                                ATerm b_61 = NULL,d_61 = NULL;
                                                ATerm e_25;
                                                e_25 = t;
                                                {
                                                  ATerm c_61 = NULL;
                                                  t = not_null(a_60);
                                                  {
                                                    t = l_62(t);
                                                    {
                                                      c_61 = t;
                                                      if(((b_61 != NULL) && (b_61 != c_61)))
                                                        _fail(c_61);
                                                      else
                                                        b_61 = c_61;
                                                    }
                                                  }
                                                }
                                                t = e_25;
                                                {
                                                  ATerm j_61 = NULL;
                                                  t = not_null(j_60);
                                                  {
                                                    t = l_62(t);
                                                    {
                                                      j_61 = t;
                                                      if(((d_61 != NULL) && (d_61 != j_61)))
                                                        _fail(j_61);
                                                      else
                                                        d_61 = j_61;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_61)), (ATerm) ATinsert(ATempty, not_null(h_60))), not_null(b_61));
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
    t = l_62(t);
    {
      k_61 = t;
      if(((r_59 != NULL) && (r_59 != k_61)))
        _fail(k_61);
      else
        r_59 = k_61;
    }
    t = not_null(r_59);
    return(t);
  }
  ATerm x_61 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(w_57));
    return(t);
  }
  ATerm y_61 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm z_61 (ATerm t)
  {
    t = not_null(w_57);
    t = FlatList_0(t);
    return(t);
  }
  ATerm a_62 (ATerm t)
  {
    ATerm o_61 = NULL,q_61 = NULL;
    ATerm f_25;
    f_25 = t;
    {
      ATerm p_61 = NULL;
      t = SSLgetAnnotations(not_null(y_57));
      {
        p_61 = t;
        if(((o_61 != NULL) && (o_61 != p_61)))
          _fail(p_61);
        else
          o_61 = p_61;
      }
    }
    t = f_25;
    {
      ATerm r_61 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(o_61));
      {
        r_61 = t;
        if(((q_61 != NULL) && (q_61 != r_61)))
          _fail(r_61);
        else
          q_61 = r_61;
      }
      t = not_null(q_61);
    }
    return(t);
  }
  y_57 = t;
  b_56 :
  if(match_cons(y_57, sym_appl_2))
    {
      l_57 = ATgetArgument(y_57, 0);
      v_57 = ATgetArgument(y_57, 1);
      c_56 :
      if(match_cons(l_57, sym_prod_3))
        {
          m_57 = ATgetArgument(l_57, 0);
          r_57 = ATgetArgument(l_57, 1);
          u_57 = ATgetArgument(l_57, 2);
          d_56 :
          if(match_cons(r_57, sym_cf_1))
            {
              s_57 = ATgetArgument(r_57, 0);
              e_56 :
              if(match_cons(s_57, sym_iter_sep_2))
                {
                  t_57 = ATgetArgument(s_57, 0);
                  k_57 = ATgetArgument(s_57, 1);
                  f_56 :
                  if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                    {
                      w_57 = ATgetFirst((ATermList) v_57);
                      x_57 = (ATerm) ATgetNext((ATermList) v_57);
                      g_56 :
                      if(((ATgetType(x_57) == AT_LIST) && ATisEmpty(x_57)))
                        {
                          h_56 :
                          {
                            ATerm g_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_61(t);
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = g_25;
                                t = t_61(t);
                              }
                          }
                        }
                      else
                        {
                          i_56 :
                          t = s_61(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(s_57, sym_iter_star_sep_2))
                    {
                      t_57 = ATgetArgument(s_57, 0);
                      k_57 = ATgetArgument(s_57, 1);
                      j_56 :
                      if(((ATgetType(m_57) == AT_LIST) && ATisEmpty(m_57)))
                        {
                          k_56 :
                          if(((ATgetType(v_57) == AT_LIST) && ATisEmpty(v_57)))
                            {
                              t = u_61(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
                            {
                              n_57 = ATgetFirst((ATermList) m_57);
                              q_57 = (ATerm) ATgetNext((ATermList) m_57);
                              l_56 :
                              if(match_cons(n_57, sym_cf_1))
                                {
                                  o_57 = ATgetArgument(n_57, 0);
                                  m_56 :
                                  if(match_cons(o_57, sym_iter_sep_2))
                                    {
                                      p_57 = ATgetArgument(o_57, 0);
                                      j_57 = ATgetArgument(o_57, 1);
                                      n_56 :
                                      if(((ATgetType(q_57) == AT_LIST) && ATisEmpty(q_57)))
                                        {
                                          o_56 :
                                          if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                                            {
                                              w_57 = ATgetFirst((ATermList) v_57);
                                              x_57 = (ATerm) ATgetNext((ATermList) v_57);
                                              p_56 :
                                              if(((ATgetType(x_57) == AT_LIST) && ATisEmpty(x_57)))
                                                {
                                                  t = v_61(t);
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
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
                      if(match_cons(s_57, sym_iter_1))
                        {
                          t_57 = ATgetArgument(s_57, 0);
                          s_56 :
                          if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                            {
                              w_57 = ATgetFirst((ATermList) v_57);
                              x_57 = (ATerm) ATgetNext((ATermList) v_57);
                              t_56 :
                              if(((ATgetType(x_57) == AT_LIST) && ATisEmpty(x_57)))
                                {
                                  u_56 :
                                  {
                                    ATerm i_25 = t;
                                    int l_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = w_61(t);
                                        LocalPopChoice(l_25);
                                      }
                                    else
                                      {
                                        t = i_25;
                                        t = x_61(t);
                                      }
                                  }
                                }
                              else
                                {
                                  v_56 :
                                  t = w_61(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(s_57, sym_iter_star_1))
                            {
                              t_57 = ATgetArgument(s_57, 0);
                              b_57 :
                              if(((ATgetType(m_57) == AT_LIST) && ATisEmpty(m_57)))
                                {
                                  d_57 :
                                  if(((ATgetType(v_57) == AT_LIST) && ATisEmpty(v_57)))
                                    {
                                      t = y_61(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
                                    {
                                      n_57 = ATgetFirst((ATermList) m_57);
                                      q_57 = (ATerm) ATgetNext((ATermList) m_57);
                                      e_57 :
                                      if(match_cons(n_57, sym_cf_1))
                                        {
                                          o_57 = ATgetArgument(n_57, 0);
                                          f_57 :
                                          if(match_cons(o_57, sym_iter_1))
                                            {
                                              p_57 = ATgetArgument(o_57, 0);
                                              g_57 :
                                              if(((ATgetType(q_57) == AT_LIST) && ATisEmpty(q_57)))
                                                {
                                                  h_57 :
                                                  if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
                                                    {
                                                      w_57 = ATgetFirst((ATermList) v_57);
                                                      x_57 = (ATerm) ATgetNext((ATermList) v_57);
                                                      i_57 :
                                                      if(((ATgetType(x_57) == AT_LIST) && ATisEmpty(x_57)))
                                                        {
                                                          t = z_61(t);
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
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
      if(match_cons(y_57, sym_FlatList_0))
        {
          t = a_62(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm w_62 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      t = r_87(t);
      t = w_62(t);
      return(t);
    }
    t = try_1(t, b_5);
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm appl_to_sort_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    t = repeat_1(t, ApplToSort_0);
    return(t);
  }
  t = topdown_1(t, c_5);
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  y_62 :
  if(((ATgetType(z_62) == AT_LIST) && ATisEmpty(z_62)))
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
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
  h_63 = t;
  g_63 :
  if(((ATgetType(h_63) == AT_LIST) && !(ATisEmpty(h_63))))
    {
      i_63 = ATgetFirst((ATermList) h_63);
      j_63 = (ATerm) ATgetNext((ATermList) h_63);
      {
        ATerm m_63 = NULL;
        ATerm n_63 = NULL;
        t = not_null(j_63);
        {
          t = De_Escape_0(t);
          {
            n_63 = t;
            if(((m_63 != NULL) && (m_63 != n_63)))
              _fail(n_63);
            else
              m_63 = n_63;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(m_63)), not_null(i_63));
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  w_63 = t;
  s_63 :
  if(((ATgetType(w_63) == AT_LIST) && !(ATisEmpty(w_63))))
    {
      x_63 = ATgetFirst((ATermList) w_63);
      y_63 = (ATerm) ATgetNext((ATermList) w_63);
      t_63 :
      if(match_int(x_63, 92))
        {
          u_63 :
          if(((ATgetType(y_63) == AT_LIST) && !(ATisEmpty(y_63))))
            {
              z_63 = ATgetFirst((ATermList) y_63);
              a_64 = (ATerm) ATgetNext((ATermList) y_63);
              v_63 :
              if(match_int(z_63, 92))
                {
                  ATerm c_64 = NULL;
                  ATerm d_64 = NULL;
                  t = not_null(a_64);
                  {
                    t = De_Escape_0(t);
                    {
                      d_64 = t;
                      if(((c_64 != NULL) && (c_64 != d_64)))
                        _fail(d_64);
                      else
                        c_64 = d_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_64)), term_q_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
  t_64 = t;
  i_64 :
  if(((ATgetType(t_64) == AT_LIST) && !(ATisEmpty(t_64))))
    {
      u_64 = ATgetFirst((ATermList) t_64);
      v_64 = (ATerm) ATgetNext((ATermList) t_64);
      j_64 :
      if(match_int(u_64, 92))
        {
          k_64 :
          if(((ATgetType(v_64) == AT_LIST) && !(ATisEmpty(v_64))))
            {
              w_64 = ATgetFirst((ATermList) v_64);
              x_64 = (ATerm) ATgetNext((ATermList) v_64);
              l_64 :
              if(match_int(w_64, 34))
                {
                  ATerm z_64 = NULL;
                  ATerm a_65 = NULL;
                  t = not_null(x_64);
                  {
                    t = De_Escape_0(t);
                    {
                      a_65 = t;
                      if(((z_64 != NULL) && (z_64 != a_65)))
                        _fail(a_65);
                      else
                        z_64 = a_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_64)), term_r_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
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
            t = De_Escape2_0(t);
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
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
ATerm at_last_1 (ATerm t, ATerm t_95 (ATerm))
{
  ATerm d_65 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = t_95(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = Cons_2(t, _id, d_65);
      }
    return(t);
  }
  t = d_65(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  f_65 :
  if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
    {
      h_65 = ATgetFirst((ATermList) g_65);
      i_65 = (ATerm) ATgetNext((ATermList) g_65);
      t = not_null(i_65);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  n_65 = t;
  m_65 :
  if(((ATgetType(n_65) == AT_LIST) && !(ATisEmpty(n_65))))
    {
      o_65 = ATgetFirst((ATermList) n_65);
      p_65 = (ATerm) ATgetNext((ATermList) n_65);
      t = not_null(o_65);
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
    ATerm n_26;
    n_26 = t;
    {
      ATerm x_65 = NULL;
      t = Hd_0(t);
      {
        x_65 = t;
        s_65 :
        if(!(match_int(x_65, 34)))
          {
            _fail(t);
          }
      }
    }
    t = n_26;
    {
      t = Tl_0(t);
      {
        ATerm g_5 (ATerm t)
        {
          ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
          y_65 = t;
          u_65 :
          if(((ATgetType(y_65) == AT_LIST) && !(ATisEmpty(y_65))))
            {
              z_65 = ATgetFirst((ATermList) y_65);
              a_66 = (ATerm) ATgetNext((ATermList) y_65);
              v_65 :
              if(match_int(z_65, 34))
                {
                  w_65 :
                  if(((ATgetType(a_66) == AT_LIST) && ATisEmpty(a_66)))
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
        t = at_last_1(t, g_5);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm PpSym_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  b_68 = t;
  q_67 :
  if(match_cons(b_68, sym_cf_1))
    {
      z_67 = ATgetArgument(b_68, 0);
      {
        ATerm d_68 = NULL;
        ATerm e_68 = NULL;
        t = not_null(z_67);
        {
          t = PpSym_0(t);
          {
            e_68 = t;
            if(((d_68 != NULL) && (d_68 != e_68)))
              _fail(e_68);
            else
              d_68 = e_68;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_26)), not_null(d_68)), (ATerm) ATinsert(ATempty, term_o_26));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(b_68, sym_lex_1))
        {
          z_67 = ATgetArgument(b_68, 0);
          {
            ATerm g_68 = NULL;
            ATerm h_68 = NULL;
            t = not_null(z_67);
            {
              t = PpSym_0(t);
              {
                h_68 = t;
                if(((g_68 != NULL) && (g_68 != h_68)))
                  _fail(h_68);
                else
                  g_68 = h_68;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_26)), not_null(g_68)), (ATerm) ATinsert(ATempty, term_o_26));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(b_68, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_r_26);
            }
          else
            {
              if(match_cons(b_68, sym_seq_2))
                {
                  z_67 = ATgetArgument(b_68, 0);
                  a_68 = ATgetArgument(b_68, 1);
                  {
                    ATerm k_68 = NULL;
                    ATerm l_68 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(a_68)), not_null(z_67));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        l_68 = t;
                        if(((k_68 != NULL) && (k_68 != l_68)))
                          _fail(l_68);
                        else
                          k_68 = l_68;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_26)), not_null(k_68)), (ATerm) ATinsert(ATempty, term_s_26));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(b_68, sym_opt_1))
                    {
                      z_67 = ATgetArgument(b_68, 0);
                      {
                        t = not_null(z_67);
                        {
                          t = PpSym_0(t);
                          {
                            ATerm h_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_u_26);
                              return(t);
                            }
                            t = at_end_1(t, h_5);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_68, sym_iter_1))
                        {
                          z_67 = ATgetArgument(b_68, 0);
                          {
                            t = not_null(z_67);
                            {
                              t = PpSym_0(t);
                              {
                                ATerm i_5 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_v_26);
                                  return(t);
                                }
                                t = at_end_1(t, i_5);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(b_68, sym_iter_star_1))
                            {
                              z_67 = ATgetArgument(b_68, 0);
                              {
                                t = not_null(z_67);
                                {
                                  t = PpSym_0(t);
                                  {
                                    ATerm j_5 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_w_26);
                                      return(t);
                                    }
                                    t = at_end_1(t, j_5);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(b_68, sym_iter_sep_2))
                                {
                                  z_67 = ATgetArgument(b_68, 0);
                                  a_68 = ATgetArgument(b_68, 1);
                                  {
                                    ATerm r_68 = NULL,t_68 = NULL;
                                    ATerm x_26;
                                    x_26 = t;
                                    {
                                      ATerm s_68 = NULL;
                                      t = not_null(z_67);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          s_68 = t;
                                          if(((r_68 != NULL) && (r_68 != s_68)))
                                            _fail(s_68);
                                          else
                                            r_68 = s_68;
                                        }
                                      }
                                    }
                                    t = x_26;
                                    {
                                      ATerm u_68 = NULL;
                                      t = not_null(a_68);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          u_68 = t;
                                          if(((t_68 != NULL) && (t_68 != u_68)))
                                            _fail(u_68);
                                          else
                                            t_68 = u_68;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_26)), not_null(t_68)), not_null(r_68)), (ATerm) ATinsert(ATempty, term_y_26));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(b_68, sym_iter_star_sep_2))
                                    {
                                      z_67 = ATgetArgument(b_68, 0);
                                      a_68 = ATgetArgument(b_68, 1);
                                      {
                                        ATerm x_68 = NULL,z_68 = NULL;
                                        ATerm a_27;
                                        a_27 = t;
                                        {
                                          ATerm y_68 = NULL;
                                          t = not_null(z_67);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              y_68 = t;
                                              if(((x_68 != NULL) && (x_68 != y_68)))
                                                _fail(y_68);
                                              else
                                                x_68 = y_68;
                                            }
                                          }
                                        }
                                        t = a_27;
                                        {
                                          ATerm a_69 = NULL;
                                          t = not_null(a_68);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              a_69 = t;
                                              if(((z_68 != NULL) && (z_68 != a_69)))
                                                _fail(a_69);
                                              else
                                                z_68 = a_69;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_27)), not_null(z_68)), not_null(x_68)), (ATerm) ATinsert(ATempty, term_y_26));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(b_68, sym_iter_n_2))
                                        {
                                          z_67 = ATgetArgument(b_68, 0);
                                          a_68 = ATgetArgument(b_68, 1);
                                          {
                                            ATerm c_69 = NULL;
                                            ATerm d_69 = NULL;
                                            t = not_null(z_67);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                d_69 = t;
                                                if(((c_69 != NULL) && (c_69 != d_69)))
                                                  _fail(d_69);
                                                else
                                                  c_69 = d_69;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_27)), not_null(c_69));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(b_68, sym_iter_sep_n_3))
                                            {
                                              z_67 = ATgetArgument(b_68, 0);
                                              a_68 = ATgetArgument(b_68, 1);
                                              y_67 = ATgetArgument(b_68, 2);
                                              {
                                                ATerm g_69 = NULL,i_69 = NULL;
                                                ATerm d_27;
                                                d_27 = t;
                                                {
                                                  ATerm h_69 = NULL;
                                                  t = not_null(z_67);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      h_69 = t;
                                                      if(((g_69 != NULL) && (g_69 != h_69)))
                                                        _fail(h_69);
                                                      else
                                                        g_69 = h_69;
                                                    }
                                                  }
                                                }
                                                t = d_27;
                                                {
                                                  ATerm j_69 = NULL;
                                                  t = not_null(a_68);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      j_69 = t;
                                                      if(((i_69 != NULL) && (i_69 != j_69)))
                                                        _fail(j_69);
                                                      else
                                                        i_69 = j_69;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_27)), not_null(i_69)), not_null(g_69));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(b_68, sym_set_1))
                                                {
                                                  z_67 = ATgetArgument(b_68, 0);
                                                  {
                                                    ATerm l_69 = NULL;
                                                    ATerm m_69 = NULL;
                                                    t = not_null(z_67);
                                                    {
                                                      t = PpSym_0(t);
                                                      {
                                                        m_69 = t;
                                                        if(((l_69 != NULL) && (l_69 != m_69)))
                                                          _fail(m_69);
                                                        else
                                                          l_69 = m_69;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_69)), (ATerm) ATinsert(ATempty, term_e_27));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(b_68, sym_pair_2))
                                                    {
                                                      z_67 = ATgetArgument(b_68, 0);
                                                      a_68 = ATgetArgument(b_68, 1);
                                                      {
                                                        ATerm p_69 = NULL,r_69 = NULL;
                                                        ATerm j_27;
                                                        j_27 = t;
                                                        {
                                                          ATerm q_69 = NULL;
                                                          t = not_null(z_67);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              q_69 = t;
                                                              if(((p_69 != NULL) && (p_69 != q_69)))
                                                                _fail(q_69);
                                                              else
                                                                p_69 = q_69;
                                                            }
                                                          }
                                                        }
                                                        t = j_27;
                                                        {
                                                          ATerm s_69 = NULL;
                                                          t = not_null(a_68);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              s_69 = t;
                                                              if(((r_69 != NULL) && (r_69 != s_69)))
                                                                _fail(s_69);
                                                              else
                                                                r_69 = s_69;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_69)), (ATerm) ATinsert(ATempty, term_k_27)), not_null(p_69));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(b_68, sym_func_2))
                                                        {
                                                          z_67 = ATgetArgument(b_68, 0);
                                                          a_68 = ATgetArgument(b_68, 1);
                                                          {
                                                            ATerm v_69 = NULL,x_69 = NULL;
                                                            ATerm l_27;
                                                            l_27 = t;
                                                            {
                                                              ATerm w_69 = NULL;
                                                              t = not_null(z_67);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    w_69 = t;
                                                                    if(((v_69 != NULL) && (v_69 != w_69)))
                                                                      _fail(w_69);
                                                                    else
                                                                      v_69 = w_69;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = l_27;
                                                            {
                                                              ATerm y_69 = NULL;
                                                              t = not_null(a_68);
                                                              {
                                                                t = PpSym_0(t);
                                                                {
                                                                  y_69 = t;
                                                                  if(((x_69 != NULL) && (x_69 != y_69)))
                                                                    _fail(y_69);
                                                                  else
                                                                    x_69 = y_69;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_69)), (ATerm) ATinsert(ATempty, term_p_27)), not_null(v_69));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(b_68, sym_alt_2))
                                                            {
                                                              z_67 = ATgetArgument(b_68, 0);
                                                              a_68 = ATgetArgument(b_68, 1);
                                                              {
                                                                ATerm b_70 = NULL,c_71 = NULL;
                                                                ATerm r_27;
                                                                r_27 = t;
                                                                {
                                                                  ATerm c_70 = NULL;
                                                                  t = not_null(z_67);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      c_70 = t;
                                                                      if(((b_70 != NULL) && (b_70 != c_70)))
                                                                        _fail(c_70);
                                                                      else
                                                                        b_70 = c_70;
                                                                    }
                                                                  }
                                                                }
                                                                t = r_27;
                                                                {
                                                                  ATerm d_71 = NULL;
                                                                  t = not_null(a_68);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      d_71 = t;
                                                                      if(((c_71 != NULL) && (c_71 != d_71)))
                                                                        _fail(d_71);
                                                                      else
                                                                        c_71 = d_71;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_71)), (ATerm) ATinsert(ATempty, term_u_27)), not_null(b_70));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(b_68, sym_perm_1))
                                                                {
                                                                  z_67 = ATgetArgument(b_68, 0);
                                                                  {
                                                                    ATerm f_71 = NULL;
                                                                    ATerm g_71 = NULL;
                                                                    t = not_null(z_67);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          g_71 = t;
                                                                          if(((f_71 != NULL) && (f_71 != g_71)))
                                                                            _fail(g_71);
                                                                          else
                                                                            f_71 = g_71;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(f_71)), term_v_27);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(b_68, sym_sort_1))
                                                                    {
                                                                      z_67 = ATgetArgument(b_68, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(z_67));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(b_68, sym_lit_1))
                                                                        {
                                                                          z_67 = ATgetArgument(b_68, 0);
                                                                          {
                                                                            ATerm p_71 = NULL;
                                                                            ATerm q_71 = NULL;
                                                                            t = not_null(z_67);
                                                                            {
                                                                              ATerm k_5 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, k_5);
                                                                              {
                                                                                q_71 = t;
                                                                                if(((p_71 != NULL) && (p_71 != q_71)))
                                                                                  _fail(q_71);
                                                                                else
                                                                                  p_71 = q_71;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(p_71));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(b_68, sym_label_2))
                                                                            {
                                                                              z_67 = ATgetArgument(b_68, 0);
                                                                              a_68 = ATgetArgument(b_68, 1);
                                                                              {
                                                                                ATerm s_71 = NULL;
                                                                                ATerm t_71 = NULL;
                                                                                t = not_null(z_67);
                                                                                {
                                                                                  ATerm l_5 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, l_5);
                                                                                  {
                                                                                    t_71 = t;
                                                                                    if(((s_71 != NULL) && (s_71 != t_71)))
                                                                                      _fail(t_71);
                                                                                    else
                                                                                      s_71 = t_71;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(s_71));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(b_68, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_w_27);
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
  ATerm x_73 = NULL,y_73 = NULL;
  x_73 = t;
  w_73 :
  if(match_cons(x_73, sym_sort_1))
    {
      y_73 = ATgetArgument(x_73, 0);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_74 = NULL,d_74 = NULL;
            ATerm c_74 = NULL;
            t = SSLgetAnnotations(not_null(x_73));
            {
              c_74 = t;
              if(((b_74 != NULL) && (b_74 != c_74)))
                _fail(c_74);
              else
                b_74 = c_74;
            }
            {
              t = not_null(y_73);
              {
                ATerm f_74 = NULL;
                t = a_1(t);
                {
                  d_74 = t;
                  {
                    ATerm g_74 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(d_74)), not_null(b_74));
                    {
                      g_74 = t;
                      if(((f_74 != NULL) && (f_74 != g_74)))
                        _fail(g_74);
                      else
                        f_74 = g_74;
                    }
                    t = not_null(f_74);
                  }
                }
              }
            }
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm j_74 = NULL,l_74 = NULL;
              ATerm k_74 = NULL;
              t = SSLgetAnnotations(not_null(x_73));
              {
                k_74 = t;
                if(((j_74 != NULL) && (j_74 != k_74)))
                  _fail(k_74);
                else
                  j_74 = k_74;
              }
              {
                t = not_null(y_73);
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
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL;
  ATerm g_77 (ATerm t)
  {
    ATerm g_76 = NULL,n_76 = NULL;
    ATerm z_27;
    z_27 = t;
    {
      ATerm h_76 = NULL,i_76 = NULL;
      t = not_null(w_75);
      {
        h_76 = t;
        e_75 :
        if(match_cons(h_76, sym_cf_1))
          {
            i_76 = ATgetArgument(h_76, 0);
            {
              ATerm k_76 = NULL,m_76 = NULL;
              t = not_null(i_76);
              {
                ATerm a_28 = t;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_28;
                  }
                {
                  ATerm l_76 = NULL;
                  t = PpSym_0(t);
                  {
                    l_76 = t;
                    if(((k_76 != NULL) && (k_76 != l_76)))
                      _fail(l_76);
                    else
                      k_76 = l_76;
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_28)), not_null(k_76)), (ATerm) ATinsert(ATempty, term_f_28));
                    {
                      t = concat_0(t);
                      {
                        t = concat_strings_0(t);
                        {
                          m_76 = t;
                          if(((g_76 != NULL) && (g_76 != m_76)))
                            _fail(m_76);
                          else
                            g_76 = m_76;
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
    t = z_27;
    {
      t = SSL_mkterm(not_null(g_76), not_null(z_75));
      {
        n_76 = t;
        t = not_null(n_76);
      }
    }
    return(t);
  }
  ATerm h_77 (ATerm t)
  {
    ATerm s_76 = NULL,x_76 = NULL;
    ATerm g_28;
    g_28 = t;
    {
      ATerm t_76 = NULL,u_76 = NULL;
      t = not_null(w_75);
      {
        t_76 = t;
        i_75 :
        if(match_cons(t_76, sym_cf_1))
          {
            u_76 = ATgetArgument(t_76, 0);
            {
              ATerm w_76 = NULL;
              t = not_null(u_76);
              {
                t = sort_1(t, _id);
                {
                  t = PpSym_0(t);
                  {
                    t = concat_strings_0(t);
                    {
                      w_76 = t;
                      if(((s_76 != NULL) && (s_76 != w_76)))
                        _fail(w_76);
                      else
                        s_76 = w_76;
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
    t = g_28;
    {
      t = SSL_mkterm(not_null(s_76), not_null(z_75));
      {
        x_76 = t;
        t = not_null(x_76);
      }
    }
    return(t);
  }
  ATerm i_77 (ATerm t)
  {
    t = not_null(a_76);
    return(t);
  }
  ATerm j_77 (ATerm t)
  {
    ATerm c_77 = NULL,e_77 = NULL;
    ATerm h_28;
    h_28 = t;
    {
      ATerm d_77 = NULL;
      t = SSLgetAnnotations(not_null(c_76));
      {
        d_77 = t;
        if(((c_77 != NULL) && (c_77 != d_77)))
          _fail(d_77);
        else
          c_77 = d_77;
      }
    }
    t = h_28;
    {
      ATerm f_77 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(c_77));
      {
        f_77 = t;
        if(((e_77 != NULL) && (e_77 != f_77)))
          _fail(f_77);
        else
          e_77 = f_77;
      }
      t = not_null(e_77);
    }
    return(t);
  }
  c_76 = t;
  m_75 :
  if(match_cons(c_76, sym_appl_2))
    {
      u_75 = ATgetArgument(c_76, 0);
      z_75 = ATgetArgument(c_76, 1);
      n_75 :
      if(match_cons(u_75, sym_prod_3))
        {
          v_75 = ATgetArgument(u_75, 0);
          w_75 = ATgetArgument(u_75, 1);
          y_75 = ATgetArgument(u_75, 2);
          o_75 :
          if(((ATgetType(z_75) == AT_LIST) && !(ATisEmpty(z_75))))
            {
              a_76 = ATgetFirst((ATermList) z_75);
              b_76 = (ATerm) ATgetNext((ATermList) z_75);
              p_75 :
              if(((ATgetType(b_76) == AT_LIST) && ATisEmpty(b_76)))
                {
                  q_75 :
                  if(match_cons(w_75, sym_sort_1))
                    {
                      x_75 = ATgetArgument(w_75, 0);
                      r_75 :
                      if(match_string(x_75, "<START>"))
                        {
                          ATerm i_28 = t;
                          int j_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_77(t);
                              LocalPopChoice(j_28);
                            }
                          else
                            {
                              t = i_28;
                              {
                                ATerm k_28 = t;
                                int l_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_77(t);
                                    LocalPopChoice(l_28);
                                  }
                                else
                                  {
                                    t = k_28;
                                    t = i_77(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          ATerm m_28 = t;
                          int n_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_77(t);
                              LocalPopChoice(n_28);
                            }
                          else
                            {
                              t = m_28;
                              t = h_77(t);
                            }
                        }
                    }
                  else
                    {
                      ATerm o_28 = t;
                      int b_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_77(t);
                          LocalPopChoice(b_29);
                        }
                      else
                        {
                          t = o_28;
                          t = h_77(t);
                        }
                    }
                }
              else
                {
                  s_75 :
                  {
                    ATerm c_29 = t;
                    int d_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_77(t);
                        LocalPopChoice(d_29);
                      }
                    else
                      {
                        t = c_29;
                        t = h_77(t);
                      }
                  }
                }
            }
          else
            {
              t_75 :
              {
                ATerm e_29 = t;
                int f_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_77(t);
                    LocalPopChoice(f_29);
                  }
                else
                  {
                    t = e_29;
                    t = h_77(t);
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
      if(match_cons(c_76, sym_ApplToSort_0))
        {
          t = j_77(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm y_77 = NULL,z_77 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym_layout_1))
    {
      z_77 = ATgetArgument(y_77, 0);
      {
        ATerm c_78 = NULL,g_78 = NULL;
        ATerm d_78 = NULL;
        t = SSLgetAnnotations(not_null(y_77));
        {
          d_78 = t;
          if(((c_78 != NULL) && (c_78 != d_78)))
            _fail(d_78);
          else
            c_78 = d_78;
        }
        {
          t = not_null(z_77);
          {
            ATerm i_78 = NULL;
            t = i_73(t);
            {
              g_78 = t;
              {
                ATerm j_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(g_78)), not_null(c_78));
                {
                  j_78 = t;
                  if(((i_78 != NULL) && (i_78 != j_78)))
                    _fail(j_78);
                  else
                    i_78 = j_78;
                }
                t = not_null(i_78);
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
  ATerm y_78 = NULL,z_78 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_opt_1))
    {
      z_78 = ATgetArgument(y_78, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_79 = NULL,e_79 = NULL;
            ATerm d_79 = NULL;
            t = SSLgetAnnotations(not_null(y_78));
            {
              d_79 = t;
              if(((c_79 != NULL) && (c_79 != d_79)))
                _fail(d_79);
              else
                c_79 = d_79;
            }
            {
              t = not_null(z_78);
              {
                ATerm g_79 = NULL;
                t = z_0(t);
                {
                  e_79 = t;
                  {
                    ATerm h_79 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(e_79)), not_null(c_79));
                    {
                      h_79 = t;
                      if(((g_79 != NULL) && (g_79 != h_79)))
                        _fail(h_79);
                      else
                        g_79 = h_79;
                    }
                    t = not_null(g_79);
                  }
                }
              }
            }
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            {
              ATerm k_79 = NULL,p_79 = NULL;
              ATerm l_79 = NULL;
              t = SSLgetAnnotations(not_null(y_78));
              {
                l_79 = t;
                if(((k_79 != NULL) && (k_79 != l_79)))
                  _fail(l_79);
                else
                  k_79 = l_79;
              }
              {
                t = not_null(z_78);
                {
                  ATerm r_79 = NULL;
                  t = z_0(t);
                  {
                    p_79 = t;
                    {
                      ATerm s_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(p_79)), not_null(k_79));
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
  ATerm k_80 = NULL,l_80 = NULL;
  k_80 = t;
  j_80 :
  if(match_cons(k_80, sym_cf_1))
    {
      l_80 = ATgetArgument(k_80, 0);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_80 = NULL,q_80 = NULL;
            ATerm p_80 = NULL;
            t = SSLgetAnnotations(not_null(k_80));
            {
              p_80 = t;
              if(((o_80 != NULL) && (o_80 != p_80)))
                _fail(p_80);
              else
                o_80 = p_80;
            }
            {
              t = not_null(l_80);
              {
                ATerm s_80 = NULL;
                t = y_0(t);
                {
                  q_80 = t;
                  {
                    ATerm t_80 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(q_80)), not_null(o_80));
                    {
                      t_80 = t;
                      if(((s_80 != NULL) && (s_80 != t_80)))
                        _fail(t_80);
                      else
                        s_80 = t_80;
                    }
                    t = not_null(s_80);
                  }
                }
              }
            }
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm w_80 = NULL,y_80 = NULL;
              ATerm x_80 = NULL;
              t = SSLgetAnnotations(not_null(k_80));
              {
                x_80 = t;
                if(((w_80 != NULL) && (w_80 != x_80)))
                  _fail(x_80);
                else
                  w_80 = x_80;
              }
              {
                t = not_null(l_80);
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
  ATerm k_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_5 (ATerm t)
        {
          ATerm o_5 (ATerm t)
          {
            t = opt_1(t, layout_0);
            return(t);
          }
          t = cf_1(t, o_5);
          return(t);
        }
        t = prod_3(t, _id, n_5, _id);
        return(t);
      }
      t = appl_2(t, m_5, _id);
      LocalPopChoice(p_29);
    }
  else
    {
      t = k_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, p_5);
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm k_102 (ATerm))
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              t = filter_1(t, k_102);
              return(t);
            }
            t = Cons_2(t, k_102, q_5);
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
              m_81 = t;
              l_81 :
              if(((ATgetType(m_81) == AT_LIST) && !(ATisEmpty(m_81))))
                {
                  n_81 = ATgetFirst((ATermList) m_81);
                  o_81 = (ATerm) ATgetNext((ATermList) m_81);
                  {
                    t = not_null(o_81);
                    t = filter_1(t, k_102);
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
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  e_82 = t;
  d_82 :
  if(match_cons(e_82, sym_prod_3))
    {
      f_82 = ATgetArgument(e_82, 0);
      g_82 = ATgetArgument(e_82, 1);
      h_82 = ATgetArgument(e_82, 2);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_82 = NULL,o_82 = NULL;
            ATerm n_82 = NULL;
            t = SSLgetAnnotations(not_null(e_82));
            {
              n_82 = t;
              if(((m_82 != NULL) && (m_82 != n_82)))
                _fail(n_82);
              else
                m_82 = n_82;
            }
            {
              t = not_null(f_82);
              {
                ATerm q_82 = NULL;
                t = v_0(t);
                {
                  o_82 = t;
                  {
                    t = not_null(g_82);
                    {
                      ATerm s_82 = NULL;
                      t = w_0(t);
                      {
                        q_82 = t;
                        {
                          t = not_null(h_82);
                          {
                            ATerm u_82 = NULL;
                            t = x_0(t);
                            {
                              s_82 = t;
                              {
                                ATerm v_82 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(o_82), not_null(q_82), not_null(s_82)), not_null(m_82));
                                {
                                  v_82 = t;
                                  if(((u_82 != NULL) && (u_82 != v_82)))
                                    _fail(v_82);
                                  else
                                    u_82 = v_82;
                                }
                                t = not_null(u_82);
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
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm a_83 = NULL,c_83 = NULL;
              ATerm b_83 = NULL;
              t = SSLgetAnnotations(not_null(e_82));
              {
                b_83 = t;
                if(((a_83 != NULL) && (a_83 != b_83)))
                  _fail(b_83);
                else
                  a_83 = b_83;
              }
              {
                t = not_null(f_82);
                {
                  ATerm e_83 = NULL;
                  t = v_0(t);
                  {
                    c_83 = t;
                    {
                      t = not_null(g_82);
                      {
                        ATerm g_83 = NULL;
                        t = w_0(t);
                        {
                          e_83 = t;
                          {
                            t = not_null(h_82);
                            {
                              ATerm i_83 = NULL;
                              t = x_0(t);
                              {
                                g_83 = t;
                                {
                                  ATerm j_83 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(c_83), not_null(e_83), not_null(g_83)), not_null(a_83));
                                  {
                                    j_83 = t;
                                    if(((i_83 != NULL) && (i_83 != j_83)))
                                      _fail(j_83);
                                    else
                                      i_83 = j_83;
                                  }
                                  t = not_null(i_83);
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
ATerm topdown_1 (ATerm t, ATerm p_88 (ATerm))
{
  t = p_88(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = topdown_1(t, p_88);
      return(t);
    }
    t = _all(t, r_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      ATerm u_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm a_30 = t;
            if((PushChoice() == 0))
              {
                t = q_86(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_30;
              }
            return(t);
          }
          t = filter_1(t, y_5);
          return(t);
        }
        t = prod_3(t, x_5, _id, _id);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          ATerm b_30 = t;
          if((PushChoice() == 0))
            {
              t = q_86(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_30;
            }
          return(t);
        }
        t = filter_1(t, z_5);
        return(t);
      }
      t = appl_2(t, u_5, w_5);
      return(t);
    }
    t = try_1(t, t_5);
    return(t);
  }
  t = topdown_1(t, s_5);
  return(t);
}
ATerm remove_layout_0 (ATerm t)
{
  t = remove_x_1(t, is_layout_p__0);
  return(t);
}
ATerm RemoveLayout_0 (ATerm t)
{
  ATerm a_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym_RemoveLayout_0))
    {
      ATerm c_84 = NULL,e_84 = NULL;
      ATerm c_30;
      c_30 = t;
      {
        ATerm d_84 = NULL;
        t = SSLgetAnnotations(not_null(a_84));
        {
          d_84 = t;
          if(((c_84 != NULL) && (c_84 != d_84)))
            _fail(d_84);
          else
            c_84 = d_84;
        }
      }
      t = c_30;
      {
        ATerm f_84 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(c_84));
        {
          f_84 = t;
          if(((e_84 != NULL) && (e_84 != f_84)))
            _fail(f_84);
          else
            e_84 = f_84;
        }
        t = not_null(e_84);
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
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  t_84 = t;
  m_84 :
  if(match_cons(t_84, sym_appl_2))
    {
      u_84 = ATgetArgument(t_84, 0);
      a_85 = ATgetArgument(t_84, 1);
      n_84 :
      if(match_cons(u_84, sym_prod_3))
        {
          v_84 = ATgetArgument(u_84, 0);
          w_84 = ATgetArgument(u_84, 1);
          z_84 = ATgetArgument(u_84, 2);
          o_84 :
          if(match_cons(w_84, sym_cf_1))
            {
              x_84 = ATgetArgument(w_84, 0);
              p_84 :
              if(match_cons(x_84, sym_layout_0))
                {
                  t = not_null(a_85);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(x_84, sym_opt_1))
                    {
                      y_84 = ATgetArgument(x_84, 0);
                      q_84 :
                      if(match_cons(y_84, sym_layout_0))
                        {
                          r_84 :
                          if(((ATgetType(a_85) == AT_LIST) && ATisEmpty(a_85)))
                            {
                              t = term_d_30;
                            }
                          else
                            {
                              if(((ATgetType(a_85) == AT_LIST) && !(ATisEmpty(a_85))))
                                {
                                  b_85 = ATgetFirst((ATermList) a_85);
                                  c_85 = (ATerm) ATgetNext((ATermList) a_85);
                                  s_84 :
                                  if(((ATgetType(c_85) == AT_LIST) && ATisEmpty(c_85)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(b_85)));
                                    }
                                  else
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
  ATerm j_85 = NULL;
  j_85 = t;
  t = (ATerm) ATinsert(ATempty, not_null(j_85));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
  o_85 = t;
  n_85 :
  if(match_cons(o_85, sym_appl_2))
    {
      p_85 = ATgetArgument(o_85, 0);
      q_85 = ATgetArgument(o_85, 1);
      {
        t = not_null(q_85);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm j_86 = NULL,l_86 = NULL,r_86 = NULL;
  j_86 = t;
  i_86 :
  if(match_cons(j_86, sym_appl_2))
    {
      l_86 = ATgetArgument(j_86, 0);
      r_86 = ATgetArgument(j_86, 1);
      {
        ATerm x_86 = NULL,z_86 = NULL;
        ATerm y_86 = NULL;
        t = SSLgetAnnotations(not_null(j_86));
        {
          y_86 = t;
          if(((x_86 != NULL) && (x_86 != y_86)))
            _fail(y_86);
          else
            x_86 = y_86;
        }
        {
          t = not_null(l_86);
          {
            ATerm b_87 = NULL;
            t = m_79(t);
            {
              z_86 = t;
              {
                t = not_null(r_86);
                {
                  ATerm d_87 = NULL;
                  t = n_79(t);
                  {
                    b_87 = t;
                    {
                      ATerm e_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(z_86), not_null(b_87)), not_null(x_86));
                      {
                        e_87 = t;
                        if(((d_87 != NULL) && (d_87 != e_87)))
                          _fail(e_87);
                        else
                          d_87 = e_87;
                      }
                      t = not_null(d_87);
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
  ATerm k_87 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 (ATerm t)
        {
          t = map_1(t, k_87);
          return(t);
        }
        t = appl_2(t, _id, a_6);
        t = Kids_0(t);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = k_87(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  ATerm c_90 (ATerm t)
  {
    ATerm t_89 = NULL;
    ATerm u_89 = NULL;
    t = yield_0(t);
    {
      u_89 = t;
      if(((t_89 != NULL) && (t_89 != u_89)))
        _fail(u_89);
      else
        t_89 = u_89;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(t_89));
    return(t);
  }
  c_89 = t;
  b_88 :
  if(match_cons(c_89, sym_appl_2))
    {
      d_89 = ATgetArgument(c_89, 0);
      i_89 = ATgetArgument(c_89, 1);
      c_88 :
      if(match_cons(d_89, sym_prod_3))
        {
          e_89 = ATgetArgument(d_89, 0);
          f_89 = ATgetArgument(d_89, 1);
          h_89 = ATgetArgument(d_89, 2);
          d_88 :
          if(match_cons(f_89, sym_cf_1))
            {
              g_89 = ATgetArgument(f_89, 0);
              e_88 :
              if(((ATgetType(e_89) == AT_LIST) && !(ATisEmpty(e_89))))
                {
                  t_88 = ATgetFirst((ATermList) e_89);
                  v_88 = (ATerm) ATgetNext((ATermList) e_89);
                  f_88 :
                  if(match_cons(t_88, sym_lex_1))
                    {
                      u_88 = ATgetArgument(t_88, 0);
                      g_88 :
                      if(((ATgetType(v_88) == AT_LIST) && ATisEmpty(v_88)))
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
              if(match_cons(f_89, sym_lex_1))
                {
                  g_89 = ATgetArgument(f_89, 0);
                  h_88 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(f_89, sym_lit_1))
                    {
                      g_89 = ATgetArgument(f_89, 0);
                      i_88 :
                      {
                        ATerm j_89 = NULL;
                        ATerm k_89 = NULL;
                        t = yield_0(t);
                        {
                          k_89 = t;
                          if(((j_89 != NULL) && (j_89 != k_89)))
                            _fail(k_89);
                          else
                            j_89 = k_89;
                        }
                        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(j_89));
                      }
                    }
                  else
                    {
                      if(match_cons(f_89, sym_varsym_1))
                        {
                          g_89 = ATgetArgument(f_89, 0);
                          j_88 :
                          if(match_cons(g_89, sym_cf_1))
                            {
                              z_88 = ATgetArgument(g_89, 0);
                              k_88 :
                              if(match_cons(z_88, sym_iter_star_1))
                                {
                                  a_89 = ATgetArgument(z_88, 0);
                                  l_88 :
                                  {
                                    ATerm g_30 = t;
                                    int h_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_89 = NULL;
                                        ATerm m_89 = NULL;
                                        t = yield_0(t);
                                        {
                                          m_89 = t;
                                          if(((l_89 != NULL) && (l_89 != m_89)))
                                            _fail(m_89);
                                          else
                                            l_89 = m_89;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(l_89));
                                        LocalPopChoice(h_30);
                                      }
                                    else
                                      {
                                        t = g_30;
                                        t = c_90(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(z_88, sym_iter_star_sep_2))
                                    {
                                      a_89 = ATgetArgument(z_88, 0);
                                      b_89 = ATgetArgument(z_88, 1);
                                      m_88 :
                                      {
                                        ATerm i_30 = t;
                                        int j_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_89 = NULL;
                                            ATerm o_89 = NULL;
                                            t = yield_0(t);
                                            {
                                              o_89 = t;
                                              if(((n_89 != NULL) && (n_89 != o_89)))
                                                _fail(o_89);
                                              else
                                                n_89 = o_89;
                                            }
                                            t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(n_89));
                                            LocalPopChoice(j_30);
                                          }
                                        else
                                          {
                                            t = i_30;
                                            t = c_90(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(z_88, sym_iter_1))
                                        {
                                          a_89 = ATgetArgument(z_88, 0);
                                          n_88 :
                                          {
                                            ATerm k_30 = t;
                                            int l_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_89 = NULL;
                                                ATerm q_89 = NULL;
                                                t = yield_0(t);
                                                {
                                                  q_89 = t;
                                                  if(((p_89 != NULL) && (p_89 != q_89)))
                                                    _fail(q_89);
                                                  else
                                                    p_89 = q_89;
                                                }
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(p_89));
                                                LocalPopChoice(l_30);
                                              }
                                            else
                                              {
                                                t = k_30;
                                                t = c_90(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(z_88, sym_iter_sep_2))
                                            {
                                              a_89 = ATgetArgument(z_88, 0);
                                              b_89 = ATgetArgument(z_88, 1);
                                              o_88 :
                                              {
                                                ATerm m_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm r_89 = NULL;
                                                    ATerm s_89 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      s_89 = t;
                                                      if(((r_89 != NULL) && (r_89 != s_89)))
                                                        _fail(s_89);
                                                      else
                                                        r_89 = s_89;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(r_89));
                                                    LocalPopChoice(n_30);
                                                  }
                                                else
                                                  {
                                                    t = m_30;
                                                    t = c_90(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              r_88 :
                                              t = c_90(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              s_88 :
                              t = c_90(t);
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
ATerm downup2_2 (ATerm t, ATerm w_88 (ATerm), ATerm x_88 (ATerm))
{
  ATerm l_90 (ATerm t)
  {
    t = w_88(t);
    {
      t = _all(t, l_90);
      t = x_88(t);
    }
    return(t);
  }
  t = l_90(t);
  return(t);
}
ATerm flat_lex_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = try_1(t, implode_lexical_0);
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = try_1(t, flat_layout_0);
    return(t);
  }
  t = downup2_2(t, b_6, c_6);
  return(t);
}
ATerm FlatLex_0 (ATerm t)
{
  ATerm q_90 = NULL;
  q_90 = t;
  p_90 :
  if(match_cons(q_90, sym_FlatLex_0))
    {
      ATerm s_90 = NULL,u_90 = NULL;
      ATerm o_30;
      o_30 = t;
      {
        ATerm t_90 = NULL;
        t = SSLgetAnnotations(not_null(q_90));
        {
          t_90 = t;
          if(((s_90 != NULL) && (s_90 != t_90)))
            _fail(t_90);
          else
            s_90 = t_90;
        }
      }
      t = o_30;
      {
        ATerm v_90 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(s_90));
        {
          v_90 = t;
          if(((u_90 != NULL) && (u_90 != v_90)))
            _fail(v_90);
          else
            u_90 = v_90;
        }
        t = not_null(u_90);
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
  ATerm b_91 = NULL;
  b_91 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        t = option_defined_1(t, FlatLex_0);
        return(t);
      }
      t = _2(t, e_6, flat_lex_0);
      return(t);
    }
    t = try_1(t, d_6);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          t = option_defined_1(t, RemoveLayout_0);
          return(t);
        }
        t = _2(t, g_6, remove_layout_0);
        return(t);
      }
      t = try_1(t, f_6);
      {
        ATerm h_6 (ATerm t)
        {
          ATerm i_6 (ATerm t)
          {
            t = option_defined_1(t, ApplToSort_0);
            return(t);
          }
          t = _2(t, i_6, appl_to_sort_0);
          return(t);
        }
        t = try_1(t, h_6);
        {
          ATerm j_6 (ATerm t)
          {
            ATerm k_6 (ATerm t)
            {
              t = option_defined_1(t, FlatList_0);
              return(t);
            }
            t = _2(t, k_6, flat_list_0);
            return(t);
          }
          t = try_1(t, j_6);
          {
            ATerm l_6 (ATerm t)
            {
              ATerm m_6 (ATerm t)
              {
                t = option_defined_1(t, RemoveLit_0);
                return(t);
              }
              t = _2(t, m_6, remove_lit_0);
              return(t);
            }
            t = try_1(t, l_6);
            {
              ATerm n_6 (ATerm t)
              {
                ATerm o_6 (ATerm t)
                {
                  t = option_defined_1(t, FlatInj_0);
                  return(t);
                }
                t = _2(t, o_6, flat_injections_0);
                return(t);
              }
              t = try_1(t, n_6);
              {
                ATerm p_6 (ATerm t)
                {
                  ATerm q_6 (ATerm t)
                  {
                    t = option_defined_1(t, FlatAlt_0);
                    return(t);
                  }
                  t = _2(t, q_6, flat_alt_0);
                  return(t);
                }
                t = try_1(t, p_6);
                {
                  ATerm r_6 (ATerm t)
                  {
                    ATerm s_6 (ATerm t)
                    {
                      t = option_defined_1(t, ReplaceAppl_0);
                      return(t);
                    }
                    t = _2(t, s_6, replace_appl_0);
                    return(t);
                  }
                  t = try_1(t, r_6);
                  {
                    ATerm t_6 (ATerm t)
                    {
                      ATerm u_6 (ATerm t)
                      {
                        t = option_defined_1(t, RemoveSeq_0);
                        return(t);
                      }
                      t = _2(t, u_6, remove_seq_0);
                      return(t);
                    }
                    t = try_1(t, t_6);
                    {
                      ATerm v_6 (ATerm t)
                      {
                        ATerm w_6 (ATerm t)
                        {
                          t = option_defined_1(t, RemovePT_0);
                          return(t);
                        }
                        t = _2(t, w_6, remove_pt_0);
                        return(t);
                      }
                      t = try_1(t, v_6);
                      {
                        ATerm x_6 (ATerm t)
                        {
                          ATerm d_91 = NULL;
                          d_91 = t;
                          {
                            if(((b_91 != NULL) && (b_91 != d_91)))
                              _fail(d_91);
                            else
                              b_91 = d_91;
                            t = _2(t, _id, implodeAsfix_0);
                          }
                          return(t);
                        }
                        t = try_1(t, x_6);
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
  ATerm i_91 = NULL;
  ATerm p_30;
  p_30 = t;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm j_91 = NULL,k_91 = NULL;
      j_91 = t;
      h_91 :
      if(match_cons(j_91, sym_Program_1))
        {
          k_91 = ATgetArgument(j_91, 0);
          if(((i_91 != NULL) && (i_91 != k_91)))
            _fail(k_91);
          else
            i_91 = k_91;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_32), not_null(i_91)), term_i_32));
      {
        t = printnl_0(t);
        {
          t = term_q_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  n_91 :
  if(match_cons(o_91, sym__2))
    {
      p_91 = ATgetArgument(o_91, 0);
      q_91 = ATgetArgument(o_91, 1);
      {
        ATerm k_32;
        k_32 = t;
        t = SSL_printnl(not_null(p_91), not_null(q_91));
        t = k_32;
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
  ATerm v_91 = NULL;
  v_91 = t;
  t = SSL_implode_string(not_null(v_91));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
        a_92 = t;
        z_91 :
        if(((ATgetType(a_92) == AT_LIST) && !(ATisEmpty(a_92))))
          {
            b_92 = ATgetFirst((ATermList) a_92);
            c_92 = (ATerm) ATgetNext((ATermList) a_92);
            {
              t = not_null(b_92);
              {
                ATerm z_6 (ATerm t)
                {
                  t = not_null(c_92);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_6);
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
  ATerm m_92 = NULL;
  ATerm o_92 = NULL;
  m_92 = t;
  {
    ATerm p_92 = NULL;
    ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
    t = not_null(m_92);
    {
      p_92 = t;
      {
        t = SSL_explode_term(not_null(p_92));
        {
          r_92 = t;
          k_92 :
          if(match_cons(r_92, sym__2))
            {
              s_92 = ATgetArgument(r_92, 0);
              t_92 = ATgetArgument(r_92, 1);
              l_92 :
              if(match_string(s_92, ""))
                {
                  if(((o_92 != NULL) && (o_92 != t_92)))
                    _fail(t_92);
                  else
                    o_92 = t_92;
                }
              else
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
      t = not_null(o_92);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_95 (ATerm))
{
  ATerm x_92 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_92);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          t = Nil_0(t);
          t = i_95(t);
        }
      }
    return(t);
  }
  t = x_92(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  z_92 :
  if(match_cons(a_93, sym__2))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      {
        t = not_null(b_93);
        {
          ATerm a_7 (ATerm t)
          {
            t = not_null(c_93);
            return(t);
          }
          t = at_end_1(t, a_7);
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
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_93 = NULL;
  h_93 = t;
  t = SSL_explode_string(not_null(h_93));
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
  ATerm l_93 = NULL;
  l_93 = t;
  t = SSL_is_string(not_null(l_93));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_7);
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            {
              ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL;
              u_93 = t;
              t_93 :
              if(match_cons(u_93, sym_Path_1))
                {
                  v_93 = ATgetArgument(u_93, 0);
                  t = not_null(v_93);
                }
              else
                {
                  if(match_cons(u_93, sym_Var_1))
                    {
                      v_93 = ATgetArgument(u_93, 0);
                      {
                        t = not_null(v_93);
                        {
                          ATerm v_32 = t;
                          int w_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_32);
                            }
                          else
                            {
                              t = v_32;
                              {
                                ATerm c_7 (ATerm t)
                                {
                                  t = term_x_32;
                                  return(t);
                                }
                                t = debug_1(t, c_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_93, sym_Prefix_2))
                        {
                          v_93 = ATgetArgument(u_93, 0);
                          w_93 = ATgetArgument(u_93, 1);
                          {
                            ATerm b_94 = NULL,d_94 = NULL;
                            ATerm y_32;
                            y_32 = t;
                            {
                              ATerm c_94 = NULL;
                              t = not_null(v_93);
                              {
                                t = eval_config_0(t);
                                {
                                  c_94 = t;
                                  if(((b_94 != NULL) && (b_94 != c_94)))
                                    _fail(c_94);
                                  else
                                    b_94 = c_94;
                                }
                              }
                            }
                            t = y_32;
                            {
                              ATerm e_94 = NULL;
                              t = not_null(w_93);
                              {
                                t = eval_config_0(t);
                                {
                                  e_94 = t;
                                  if(((d_94 != NULL) && (d_94 != e_94)))
                                    _fail(e_94);
                                  else
                                    d_94 = e_94;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_94), not_null(d_94));
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
  ATerm m_94 = NULL;
  m_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_32, not_null(m_94));
    {
      t = table_get_0(t);
      {
        ATerm d_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_33;
            a_33 = t;
            {
              ATerm o_94 = NULL;
              ATerm p_94 = NULL;
              p_94 = t;
              if(((o_94 != NULL) && (o_94 != p_94)))
                _fail(p_94);
              else
                o_94 = p_94;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_32, not_null(m_94), not_null(o_94));
                t = table_put_0(t);
              }
            }
            t = a_33;
          }
          return(t);
        }
        t = try_1(t, d_7);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm b_33;
    b_33 = t;
    {
      ATerm y_94 = NULL;
      ATerm z_94 = NULL;
      t = term_c_33;
      {
        t = get_config_0(t);
        {
          z_94 = t;
          if(((y_94 != NULL) && (y_94 != z_94)))
            _fail(z_94);
          else
            y_94 = z_94;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_94), term_d_33);
        t = geq_0(t);
      }
    }
    t = b_33;
    t = p_108(t);
    return(t);
  }
  t = try_1(t, e_7);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL;
  f_95 = t;
  e_95 :
  if(match_cons(f_95, sym__2))
    {
      g_95 = ATgetArgument(f_95, 0);
      h_95 = ATgetArgument(f_95, 1);
      t = SSL_WriteToTextFile(not_null(g_95), not_null(h_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  s_95 :
  if(match_cons(v_95, sym__2))
    {
      w_95 = ATgetArgument(v_95, 0);
      x_95 = ATgetArgument(v_95, 1);
      {
        ATerm b_96 = NULL,d_96 = NULL;
        ATerm c_96 = NULL;
        t = SSLgetAnnotations(not_null(v_95));
        {
          c_96 = t;
          if(((b_96 != NULL) && (b_96 != c_96)))
            _fail(c_96);
          else
            b_96 = c_96;
        }
        {
          t = not_null(w_95);
          {
            ATerm f_96 = NULL;
            t = n_71(t);
            {
              d_96 = t;
              {
                t = not_null(x_95);
                {
                  ATerm h_96 = NULL;
                  t = o_71(t);
                  {
                    f_96 = t;
                    {
                      ATerm i_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_96), not_null(f_96)), not_null(b_96));
                      {
                        i_96 = t;
                        if(((h_96 != NULL) && (h_96 != i_96)))
                          _fail(i_96);
                        else
                          h_96 = i_96;
                      }
                      t = not_null(h_96);
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
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
  q_96 = t;
  p_96 :
  if(match_cons(q_96, sym__2))
    {
      r_96 = ATgetArgument(q_96, 0);
      s_96 = ATgetArgument(q_96, 1);
      t = SSL_WriteToBinaryFile(not_null(r_96), not_null(s_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_97 = NULL;
  ATerm e_33;
  e_33 = t;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_7 (ATerm t)
          {
            ATerm b_97 = NULL,c_97 = NULL;
            b_97 = t;
            x_96 :
            if(match_cons(b_97, sym_Output_1))
              {
                c_97 = ATgetArgument(b_97, 0);
                if(((a_97 != NULL) && (a_97 != c_97)))
                  _fail(c_97);
                else
                  a_97 = c_97;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_7);
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          {
            ATerm d_97 = NULL;
            t = term_h_33;
            {
              d_97 = t;
              if(((a_97 != NULL) && (a_97 != d_97)))
                _fail(d_97);
              else
                a_97 = d_97;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_7, _id);
  }
  t = e_33;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm i_7 (ATerm t)
      {
        t = not_null(a_97);
        return(t);
      }
      t = split_2(t, i_7, _id);
      return(t);
    }
    t = _2(t, _id, h_7);
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            ATerm k_7 (ATerm t)
            {
              ATerm e_97 = NULL;
              e_97 = t;
              z_96 :
              if(!(match_cons(e_97, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_7);
            return(t);
          }
          t = _2(t, j_7, WriteToBinaryFile_0);
          LocalPopChoice(j_33);
        }
      else
        {
          t = i_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_113 (ATerm))
{
  ATerm k_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  ATerm k_33;
  k_33 = t;
  t = dtime_0(t);
  t = k_33;
  {
    t = o_113(t);
    {
      ATerm l_33;
      l_33 = t;
      {
        ATerm l_97 = NULL;
        t = dtime_0(t);
        {
          l_97 = t;
          if(((k_97 != NULL) && (k_97 != l_97)))
            _fail(l_97);
          else
            k_97 = l_97;
        }
      }
      t = l_33;
      {
        m_97 = t;
        j_97 :
        if(match_cons(m_97, sym__2))
          {
            n_97 = ATgetArgument(m_97, 0);
            o_97 = ATgetArgument(m_97, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_97)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_97))), not_null(o_97));
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
ATerm debug_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm m_33;
  m_33 = t;
  {
    ATerm v_97 = NULL,x_97 = NULL;
    ATerm n_33;
    n_33 = t;
    {
      ATerm w_97 = NULL;
      t = r_105(t);
      {
        w_97 = t;
        if(((v_97 != NULL) && (v_97 != w_97)))
          _fail(w_97);
        else
          v_97 = w_97;
      }
    }
    t = n_33;
    {
      ATerm y_97 = NULL;
      y_97 = t;
      if(((x_97 != NULL) && (x_97 != y_97)))
        _fail(y_97);
      else
        x_97 = y_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_97)), not_null(v_97)));
        t = printnl_0(t);
      }
    }
  }
  t = m_33;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_98 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_98 = NULL;
      d_98 = t;
      {
        if(((c_98 != NULL) && (c_98 != d_98)))
          _fail(d_98);
        else
          c_98 = d_98;
        t = SSL_ReadFromFile(not_null(c_98));
      }
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
        ATerm l_7 (ATerm t)
        {
          t = term_q_33;
          return(t);
        }
        t = debug_1(t, l_7);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  ATerm h_98 = NULL,j_98 = NULL;
  ATerm r_33;
  r_33 = t;
  {
    ATerm i_98 = NULL;
    t = w_102(t);
    {
      i_98 = t;
      if(((h_98 != NULL) && (h_98 != i_98)))
        _fail(i_98);
      else
        h_98 = i_98;
    }
  }
  t = r_33;
  {
    ATerm k_98 = NULL;
    t = x_102(t);
    {
      k_98 = t;
      if(((j_98 != NULL) && (j_98 != k_98)))
        _fail(k_98);
      else
        j_98 = k_98;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_98), not_null(j_98));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_98 = NULL;
  ATerm s_33;
  s_33 = t;
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 (ATerm t)
        {
          ATerm r_98 = NULL,s_98 = NULL;
          r_98 = t;
          o_98 :
          if(match_cons(r_98, sym_Input_1))
            {
              s_98 = ATgetArgument(r_98, 0);
              if(((q_98 != NULL) && (q_98 != s_98)))
                _fail(s_98);
              else
                q_98 = s_98;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_7);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        {
          ATerm t_98 = NULL;
          t = term_v_33;
          {
            t_98 = t;
            if(((q_98 != NULL) && (q_98 != t_98)))
              _fail(t_98);
            else
              q_98 = t_98;
          }
        }
      }
  }
  t = s_33;
  {
    ATerm n_7 (ATerm t)
    {
      t = not_null(q_98);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_7);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm x_98 = NULL;
    x_98 = t;
    w_98 :
    if(!(match_string(x_98, "-v")))
      {
        if(!(match_string(x_98, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = term_y_33;
    t = set_config_0(t);
    t = term_z_33;
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_a_34;
    return(t);
  }
  t = Option_3(t, o_7, p_7, s_7);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm a_99 = NULL;
    a_99 = t;
    y_98 :
    if(!(match_string(a_99, "-k")))
      {
        if(!(match_string(a_99, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    ATerm b_34;
    b_34 = t;
    {
      ATerm b_99 = NULL;
      ATerm c_99 = NULL;
      t = string_to_int_0(t);
      {
        c_99 = t;
        if(((b_99 != NULL) && (b_99 != c_99)))
          _fail(c_99);
        else
          b_99 = c_99;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_34, not_null(b_99));
        t = set_config_0(t);
      }
    }
    t = b_34;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_d_34;
    return(t);
  }
  t = ArgOption_3(t, t_7, u_7, v_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_99 = NULL;
  f_99 = t;
  t = SSL_string_to_int(not_null(f_99));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 (ATerm t)
      {
        ATerm n_99 = NULL;
        n_99 = t;
        i_99 :
        if(!(match_string(n_99, "-S")))
          {
            if(!(match_string(n_99, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        t = term_h_34;
        t = set_config_0(t);
        t = term_i_34;
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        t = term_j_34;
        return(t);
      }
      t = Option_3(t, w_7, x_7, y_7);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm k_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 (ATerm t)
            {
              ATerm o_99 = NULL;
              o_99 = t;
              j_99 :
              if(!(match_string(o_99, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_8 (ATerm t)
            {
              ATerm r_99 = NULL;
              ATerm m_34;
              m_34 = t;
              {
                ATerm p_99 = NULL;
                ATerm q_99 = NULL;
                t = string_to_int_0(t);
                {
                  q_99 = t;
                  if(((p_99 != NULL) && (p_99 != q_99)))
                    _fail(q_99);
                  else
                    p_99 = q_99;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_33, not_null(p_99));
                  t = set_config_0(t);
                }
              }
              t = m_34;
              {
                ATerm s_99 = NULL;
                s_99 = t;
                if(((r_99 != NULL) && (r_99 != s_99)))
                  _fail(s_99);
                else
                  r_99 = s_99;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_99));
              }
              return(t);
            }
            ATerm b_8 (ATerm t)
            {
              t = term_n_34;
              return(t);
            }
            t = ArgOption_3(t, z_7, a_8, b_8);
            LocalPopChoice(l_34);
          }
        else
          {
            t = k_34;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm t_99 = NULL;
                t_99 = t;
                m_99 :
                if(!(match_string(t_99, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_8 (ATerm t)
              {
                t = term_p_34;
                t = set_config_0(t);
                t = term_q_34;
                return(t);
              }
              ATerm g_8 (ATerm t)
              {
                t = term_r_34;
                return(t);
              }
              t = Option_3(t, c_8, f_8, g_8);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm z_99 = NULL;
    z_99 = t;
    w_99 :
    if(!(match_string(z_99, "-o")))
      {
        if(!(match_string(z_99, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm c_100 = NULL;
    ATerm w_34;
    w_34 = t;
    {
      ATerm a_100 = NULL;
      ATerm b_100 = NULL;
      b_100 = t;
      if(((a_100 != NULL) && (a_100 != b_100)))
        _fail(b_100);
      else
        a_100 = b_100;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(a_100));
        t = set_config_0(t);
      }
    }
    t = w_34;
    {
      ATerm d_100 = NULL;
      d_100 = t;
      if(((c_100 != NULL) && (c_100 != d_100)))
        _fail(d_100);
      else
        c_100 = d_100;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_100));
    }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = term_y_34;
    return(t);
  }
  t = ArgOption_3(t, h_8, i_8, j_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_34 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_35);
    }
  else
    {
      t = z_34;
      {
        ATerm k_8 (ATerm t)
        {
          ATerm j_100 = NULL;
          j_100 = t;
          i_100 :
          if(!(match_string(j_100, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_8 (ATerm t)
        {
          t = term_e_35;
          t = set_config_0(t);
          t = term_f_35;
          return(t);
        }
        ATerm m_8 (ATerm t)
        {
          t = term_g_35;
          return(t);
        }
        t = Option_3(t, k_8, l_8, m_8);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  p_100 = t;
  n_100 :
  if(match_string(p_100, "register-usage-info"))
    {
      t = register_usage_1(t, u_0);
    }
  else
    {
      if(((ATgetType(p_100) == AT_LIST) && !(ATisEmpty(p_100))))
        {
          q_100 = ATgetFirst((ATermList) p_100);
          r_100 = (ATerm) ATgetNext((ATermList) p_100);
          o_100 :
          if(((ATgetType(r_100) == AT_LIST) && !(ATisEmpty(r_100))))
            {
              s_100 = ATgetFirst((ATermList) r_100);
              t_100 = (ATerm) ATgetNext((ATermList) r_100);
              {
                ATerm x_100 = NULL;
                ATerm h_35;
                h_35 = t;
                {
                  t = not_null(q_100);
                  t = s_0(t);
                }
                t = h_35;
                {
                  ATerm y_100 = NULL;
                  t = not_null(s_100);
                  {
                    t = t_0(t);
                    {
                      y_100 = t;
                      if(((x_100 != NULL) && (x_100 != y_100)))
                        _fail(y_100);
                      else
                        x_100 = y_100;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_100)), not_null(x_100));
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
  ATerm n_8 (ATerm t)
  {
    ATerm f_101 = NULL;
    f_101 = t;
    c_101 :
    if(!(match_string(f_101, "-i")))
      {
        if(!(match_string(f_101, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm k_101 = NULL;
    ATerm i_35;
    i_35 = t;
    {
      ATerm g_101 = NULL;
      ATerm j_101 = NULL;
      j_101 = t;
      if(((g_101 != NULL) && (g_101 != j_101)))
        _fail(j_101);
      else
        g_101 = j_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_35, not_null(g_101));
        t = set_config_0(t);
      }
    }
    t = i_35;
    {
      ATerm l_101 = NULL;
      l_101 = t;
      if(((k_101 != NULL) && (k_101 != l_101)))
        _fail(l_101);
      else
        k_101 = l_101;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_101));
    }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_k_35;
    return(t);
  }
  t = ArgOption_3(t, n_8, o_8, p_8);
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
  t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATempty, term_p_35));
  {
    t = printnl_0(t);
    {
      t = term_q_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_101 = NULL;
  p_101 = t;
  t = SSL_TicksToSeconds(not_null(p_101));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
  u_101 = t;
  t_101 :
  if(match_cons(u_101, sym__2))
    {
      v_101 = ATgetArgument(u_101, 0);
      w_101 = ATgetArgument(u_101, 1);
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_101), not_null(w_101));
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            t = SSL_addr(not_null(v_101), not_null(w_101));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_101 (ATerm), ATerm i_101 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_101(t);
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
        d_102 = t;
        c_102 :
        if(((ATgetType(d_102) == AT_LIST) && !(ATisEmpty(d_102))))
          {
            e_102 = ATgetFirst((ATermList) d_102);
            f_102 = (ATerm) ATgetNext((ATermList) d_102);
            {
              ATerm i_102 = NULL;
              ATerm j_102 = NULL;
              t = not_null(f_102);
              {
                t = foldr_2(t, h_101, i_101);
                {
                  j_102 = t;
                  if(((i_102 != NULL) && (i_102 != j_102)))
                    _fail(j_102);
                  else
                    i_102 = j_102;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_102), not_null(i_102));
                t = i_101(t);
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
ATerm crush_2 (ATerm t, ATerm f_100 (ATerm), ATerm g_100 (ATerm))
{
  ATerm r_102 = NULL;
  ATerm t_102 = NULL;
  r_102 = t;
  {
    ATerm u_102 = NULL;
    ATerm y_102 = NULL,z_102 = NULL,a_103 = NULL;
    t = not_null(r_102);
    {
      u_102 = t;
      {
        t = SSL_explode_term(not_null(u_102));
        {
          y_102 = t;
          q_102 :
          if(match_cons(y_102, sym__2))
            {
              z_102 = ATgetArgument(y_102, 0);
              a_103 = ATgetArgument(y_102, 1);
              if(((t_102 != NULL) && (t_102 != a_103)))
                _fail(a_103);
              else
                t_102 = a_103;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_102);
      t = foldr_2(t, f_100, g_100);
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
    ATerm q_8 (ATerm t)
    {
      t = term_g_34;
      return(t);
    }
    t = crush_2(t, q_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
  g_103 = t;
  f_103 :
  if(match_cons(g_103, sym__2))
    {
      h_103 = ATgetArgument(g_103, 0);
      i_103 = ATgetArgument(g_103, 1);
      {
        ATerm u_35;
        u_35 = t;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_103), not_null(i_103));
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              t = SSL_gtr(not_null(h_103), not_null(i_103));
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
  ATerm o_103 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL;
      p_103 = t;
      n_103 :
      if(match_cons(p_103, sym__2))
        {
          q_103 = ATgetArgument(p_103, 0);
          r_103 = ATgetArgument(p_103, 1);
          {
            if(((o_103 != NULL) && (o_103 != q_103)))
              _fail(q_103);
            else
              o_103 = q_103;
            if(((o_103 != NULL) && (o_103 != r_103)))
              _fail(r_103);
            else
              o_103 = r_103;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_108 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm z_35;
    z_35 = t;
    {
      ATerm u_103 = NULL;
      ATerm v_103 = NULL;
      t = term_c_33;
      {
        t = get_config_0(t);
        {
          v_103 = t;
          if(((u_103 != NULL) && (u_103 != v_103)))
            _fail(v_103);
          else
            u_103 = v_103;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_103), term_q_18);
        t = geq_0(t);
      }
    }
    t = z_35;
    t = o_108(t);
    return(t);
  }
  t = try_1(t, r_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm z_103 = NULL,b_104 = NULL;
    ATerm a_36;
    a_36 = t;
    {
      ATerm a_104 = NULL;
      t = run_time_0(t);
      {
        a_104 = t;
        if(((z_103 != NULL) && (z_103 != a_104)))
          _fail(a_104);
        else
          z_103 = a_104;
      }
    }
    t = a_36;
    {
      ATerm c_104 = NULL;
      t = term_b_36;
      {
        t = get_config_0(t);
        {
          c_104 = t;
          if(((b_104 != NULL) && (b_104 != c_104)))
            _fail(c_104);
          else
            b_104 = c_104;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_36), not_null(z_103)), term_c_36), not_null(b_104)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_8);
  {
    t = term_g_34;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_104 = NULL;
  j_104 = t;
  i_104 :
  if(match_cons(j_104, sym_Version_0))
    {
      ATerm l_104 = NULL,n_104 = NULL;
      ATerm e_36;
      e_36 = t;
      {
        ATerm m_104 = NULL;
        t = SSLgetAnnotations(not_null(j_104));
        {
          m_104 = t;
          if(((l_104 != NULL) && (l_104 != m_104)))
            _fail(m_104);
          else
            l_104 = m_104;
        }
      }
      t = e_36;
      {
        ATerm o_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_104));
        {
          o_104 = t;
          if(((n_104 != NULL) && (n_104 != o_104)))
            _fail(o_104);
          else
            n_104 = o_104;
        }
        t = not_null(n_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_113 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_8);
  t = m_113(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_104 = NULL;
  t_104 = t;
  t = SSL_table_create(not_null(t_104));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_104 = NULL;
  x_104 = t;
  {
    ATerm j_36;
    j_36 = t;
    {
      t = term_k_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_36, term_l_36, not_null(x_104));
          t = table_put_0(t);
        }
      }
    }
    t = j_36;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_105 = NULL;
  b_105 = t;
  t = SSL_table_destroy(not_null(b_105));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_exit(not_null(f_105));
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm p_105 = NULL;
  p_105 = t;
  o_105 :
  if(match_cons(p_105, sym_layout_0))
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_105 = NULL,v_105 = NULL;
          ATerm o_36;
          o_36 = t;
          {
            ATerm u_105 = NULL;
            t = SSLgetAnnotations(not_null(p_105));
            {
              u_105 = t;
              if(((t_105 != NULL) && (t_105 != u_105)))
                _fail(u_105);
              else
                t_105 = u_105;
            }
          }
          t = o_36;
          {
            ATerm w_105 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(t_105));
            {
              w_105 = t;
              if(((v_105 != NULL) && (v_105 != w_105)))
                _fail(w_105);
              else
                v_105 = w_105;
            }
            t = not_null(v_105);
          }
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm y_105 = NULL,a_106 = NULL;
            ATerm p_36;
            p_36 = t;
            {
              ATerm z_105 = NULL;
              t = SSLgetAnnotations(not_null(p_105));
              {
                z_105 = t;
                if(((y_105 != NULL) && (y_105 != z_105)))
                  _fail(z_105);
                else
                  y_105 = z_105;
              }
            }
            t = p_36;
            {
              ATerm b_106 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(y_105));
              {
                b_106 = t;
                if(((a_106 != NULL) && (a_106 != b_106)))
                  _fail(b_106);
                else
                  a_106 = b_106;
              }
              t = not_null(a_106);
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
  ATerm r_106 = NULL,s_106 = NULL;
  r_106 = t;
  q_106 :
  if(match_cons(r_106, sym_lit_1))
    {
      s_106 = ATgetArgument(r_106, 0);
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_106 = NULL,y_106 = NULL;
            ATerm x_106 = NULL;
            t = SSLgetAnnotations(not_null(r_106));
            {
              x_106 = t;
              if(((w_106 != NULL) && (w_106 != x_106)))
                _fail(x_106);
              else
                w_106 = x_106;
            }
            {
              t = not_null(s_106);
              {
                ATerm a_107 = NULL;
                t = r_0(t);
                {
                  y_106 = t;
                  {
                    ATerm b_107 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(y_106)), not_null(w_106));
                    {
                      b_107 = t;
                      if(((a_107 != NULL) && (a_107 != b_107)))
                        _fail(b_107);
                      else
                        a_107 = b_107;
                    }
                    t = not_null(a_107);
                  }
                }
              }
            }
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            {
              ATerm e_107 = NULL,g_107 = NULL;
              ATerm f_107 = NULL;
              t = SSLgetAnnotations(not_null(r_106));
              {
                f_107 = t;
                if(((e_107 != NULL) && (e_107 != f_107)))
                  _fail(f_107);
                else
                  e_107 = f_107;
              }
              {
                t = not_null(s_106);
                {
                  ATerm i_107 = NULL;
                  t = r_0(t);
                  {
                    g_107 = t;
                    {
                      ATerm j_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(g_107)), not_null(e_107));
                      {
                        j_107 = t;
                        if(((i_107 != NULL) && (i_107 != j_107)))
                          _fail(j_107);
                        else
                          i_107 = j_107;
                      }
                      t = not_null(i_107);
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
ATerm list_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm s_107 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = Cons_2(t, v_94, s_107);
      }
    return(t);
  }
  t = s_107(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm c_108 = NULL,d_108 = NULL;
  c_108 = t;
  b_108 :
  if(match_cons(c_108, sym_seq_1))
    {
      d_108 = ATgetArgument(c_108, 0);
      {
        ATerm g_108 = NULL,i_108 = NULL;
        ATerm h_108 = NULL;
        t = SSLgetAnnotations(not_null(c_108));
        {
          h_108 = t;
          if(((g_108 != NULL) && (g_108 != h_108)))
            _fail(h_108);
          else
            g_108 = h_108;
        }
        {
          t = not_null(d_108);
          {
            ATerm k_108 = NULL;
            t = s_78(t);
            {
              i_108 = t;
              {
                ATerm l_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(i_108)), not_null(g_108));
                {
                  l_108 = t;
                  if(((k_108 != NULL) && (k_108 != l_108)))
                    _fail(l_108);
                  else
                    k_108 = l_108;
                }
                t = not_null(k_108);
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
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL;
  d_109 = t;
  c_109 :
  if(match_cons(d_109, sym_iter_star_sep_2))
    {
      e_109 = ATgetArgument(d_109, 0);
      f_109 = ATgetArgument(d_109, 1);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_109 = NULL,l_109 = NULL;
            ATerm k_109 = NULL;
            t = SSLgetAnnotations(not_null(d_109));
            {
              k_109 = t;
              if(((j_109 != NULL) && (j_109 != k_109)))
                _fail(k_109);
              else
                j_109 = k_109;
            }
            {
              t = not_null(e_109);
              {
                ATerm n_109 = NULL;
                t = p_0(t);
                {
                  l_109 = t;
                  {
                    t = not_null(f_109);
                    {
                      ATerm p_109 = NULL;
                      t = q_0(t);
                      {
                        n_109 = t;
                        {
                          ATerm q_109 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(l_109), not_null(n_109)), not_null(j_109));
                          {
                            q_109 = t;
                            if(((p_109 != NULL) && (p_109 != q_109)))
                              _fail(q_109);
                            else
                              p_109 = q_109;
                          }
                          t = not_null(p_109);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm u_109 = NULL,w_109 = NULL;
              ATerm v_109 = NULL;
              t = SSLgetAnnotations(not_null(d_109));
              {
                v_109 = t;
                if(((u_109 != NULL) && (u_109 != v_109)))
                  _fail(v_109);
                else
                  u_109 = v_109;
              }
              {
                t = not_null(e_109);
                {
                  ATerm y_109 = NULL;
                  t = p_0(t);
                  {
                    w_109 = t;
                    {
                      t = not_null(f_109);
                      {
                        ATerm a_110 = NULL;
                        t = q_0(t);
                        {
                          y_109 = t;
                          {
                            ATerm b_110 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(w_109), not_null(y_109)), not_null(u_109));
                            {
                              b_110 = t;
                              if(((a_110 != NULL) && (a_110 != b_110)))
                                _fail(b_110);
                              else
                                a_110 = b_110;
                            }
                            t = not_null(a_110);
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
  ATerm v_110 = NULL,w_110 = NULL;
  v_110 = t;
  u_110 :
  if(match_cons(v_110, sym_iter_star_1))
    {
      w_110 = ATgetArgument(v_110, 0);
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_110 = NULL,b_111 = NULL;
            ATerm a_111 = NULL;
            t = SSLgetAnnotations(not_null(v_110));
            {
              a_111 = t;
              if(((z_110 != NULL) && (z_110 != a_111)))
                _fail(a_111);
              else
                z_110 = a_111;
            }
            {
              t = not_null(w_110);
              {
                ATerm d_111 = NULL;
                t = o_0(t);
                {
                  b_111 = t;
                  {
                    ATerm e_111 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(b_111)), not_null(z_110));
                    {
                      e_111 = t;
                      if(((d_111 != NULL) && (d_111 != e_111)))
                        _fail(e_111);
                      else
                        d_111 = e_111;
                    }
                    t = not_null(d_111);
                  }
                }
              }
            }
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm h_111 = NULL,j_111 = NULL;
              ATerm i_111 = NULL;
              t = SSLgetAnnotations(not_null(v_110));
              {
                i_111 = t;
                if(((h_111 != NULL) && (h_111 != i_111)))
                  _fail(i_111);
                else
                  h_111 = i_111;
              }
              {
                t = not_null(w_110);
                {
                  ATerm l_111 = NULL;
                  t = o_0(t);
                  {
                    j_111 = t;
                    {
                      ATerm m_111 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(j_111)), not_null(h_111));
                      {
                        m_111 = t;
                        if(((l_111 != NULL) && (l_111 != m_111)))
                          _fail(m_111);
                        else
                          l_111 = m_111;
                      }
                      t = not_null(l_111);
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
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
  g_112 = t;
  f_112 :
  if(match_cons(g_112, sym_iter_sep_2))
    {
      h_112 = ATgetArgument(g_112, 0);
      i_112 = ATgetArgument(g_112, 1);
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_112 = NULL,o_112 = NULL;
            ATerm n_112 = NULL;
            t = SSLgetAnnotations(not_null(g_112));
            {
              n_112 = t;
              if(((m_112 != NULL) && (m_112 != n_112)))
                _fail(n_112);
              else
                m_112 = n_112;
            }
            {
              t = not_null(h_112);
              {
                ATerm q_112 = NULL;
                t = m_0(t);
                {
                  o_112 = t;
                  {
                    t = not_null(i_112);
                    {
                      ATerm s_112 = NULL;
                      t = n_0(t);
                      {
                        q_112 = t;
                        {
                          ATerm t_112 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(o_112), not_null(q_112)), not_null(m_112));
                          {
                            t_112 = t;
                            if(((s_112 != NULL) && (s_112 != t_112)))
                              _fail(t_112);
                            else
                              s_112 = t_112;
                          }
                          t = not_null(s_112);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
            {
              ATerm x_112 = NULL,z_112 = NULL;
              ATerm y_112 = NULL;
              t = SSLgetAnnotations(not_null(g_112));
              {
                y_112 = t;
                if(((x_112 != NULL) && (x_112 != y_112)))
                  _fail(y_112);
                else
                  x_112 = y_112;
              }
              {
                t = not_null(h_112);
                {
                  ATerm b_113 = NULL;
                  t = m_0(t);
                  {
                    z_112 = t;
                    {
                      t = not_null(i_112);
                      {
                        ATerm d_113 = NULL;
                        t = n_0(t);
                        {
                          b_113 = t;
                          {
                            ATerm e_113 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(z_112), not_null(b_113)), not_null(x_112));
                            {
                              e_113 = t;
                              if(((d_113 != NULL) && (d_113 != e_113)))
                                _fail(e_113);
                              else
                                d_113 = e_113;
                            }
                            t = not_null(d_113);
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
  ATerm n_114 = NULL,o_114 = NULL;
  n_114 = t;
  i_114 :
  if(match_cons(n_114, sym_iter_1))
    {
      o_114 = ATgetArgument(n_114, 0);
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_114 = NULL,t_114 = NULL;
            ATerm s_114 = NULL;
            t = SSLgetAnnotations(not_null(n_114));
            {
              s_114 = t;
              if(((r_114 != NULL) && (r_114 != s_114)))
                _fail(s_114);
              else
                r_114 = s_114;
            }
            {
              t = not_null(o_114);
              {
                ATerm v_114 = NULL;
                t = l_0(t);
                {
                  t_114 = t;
                  {
                    ATerm w_114 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(t_114)), not_null(r_114));
                    {
                      w_114 = t;
                      if(((v_114 != NULL) && (v_114 != w_114)))
                        _fail(w_114);
                      else
                        v_114 = w_114;
                    }
                    t = not_null(v_114);
                  }
                }
              }
            }
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            {
              ATerm z_114 = NULL,c_115 = NULL;
              ATerm b_115 = NULL;
              t = SSLgetAnnotations(not_null(n_114));
              {
                b_115 = t;
                if(((z_114 != NULL) && (z_114 != b_115)))
                  _fail(b_115);
                else
                  z_114 = b_115;
              }
              {
                t = not_null(o_114);
                {
                  ATerm e_115 = NULL;
                  t = l_0(t);
                  {
                    c_115 = t;
                    {
                      ATerm f_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(c_115)), not_null(z_114));
                      {
                        f_115 = t;
                        if(((e_115 != NULL) && (e_115 != f_115)))
                          _fail(f_115);
                        else
                          e_115 = f_115;
                      }
                      t = not_null(e_115);
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
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            {
              ATerm g_37 = t;
              int h_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(h_37);
                }
              else
                {
                  t = g_37;
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
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
      p_115 = t;
      o_115 :
      if(((ATgetType(p_115) == AT_LIST) && ATisEmpty(p_115)))
        {
          {
          }
        }
      else
        {
          if(((ATgetType(p_115) == AT_LIST) && !(ATisEmpty(p_115))))
            {
              q_115 = ATgetFirst((ATermList) p_115);
              r_115 = (ATerm) ATgetNext((ATermList) p_115);
              {
              }
            }
          else
            {
              _fail(t);
            }
        }
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm s_115 (ATerm t)
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = list_sort_0(t);
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              {
                ATerm u_8 (ATerm t)
                {
                  ATerm v_8 (ATerm t)
                  {
                    ATerm m_37 = t;
                    int n_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = lit_1(t, _id);
                        LocalPopChoice(n_37);
                      }
                    else
                      {
                        t = m_37;
                        {
                          ATerm o_37 = t;
                          int p_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = layout_0(t);
                              LocalPopChoice(p_37);
                            }
                          else
                            {
                              t = o_37;
                              t = s_115(t);
                            }
                        }
                      }
                    return(t);
                  }
                  t = list_1(t, v_8);
                  return(t);
                }
                t = seq_1(t, u_8);
              }
            }
          return(t);
        }
        t = s_115(t);
      }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm q_37;
  q_37 = t;
  {
    ATerm v_115 = NULL;
    ATerm y_115 = NULL;
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        {
          ATerm w_115 = NULL;
          ATerm x_115 = NULL;
          x_115 = t;
          if(((w_115 != NULL) && (w_115 != x_115)))
            _fail(x_115);
          else
            w_115 = x_115;
          t = (ATerm) ATinsert(ATempty, not_null(w_115));
        }
      }
    {
      y_115 = t;
      if(((v_115 != NULL) && (v_115 != y_115)))
        _fail(y_115);
      else
        v_115 = y_115;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_33, not_null(v_115));
      t = printnl_0(t);
    }
  }
  t = q_37;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_37), term_u_37), term_t_37);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_94 (ATerm))
{
  ATerm b_116 (ATerm t)
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        t = Cons_2(t, t_94, b_116);
      }
    return(t);
  }
  t = b_116(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL;
  k_116 = t;
  h_116 :
  if(((ATgetType(k_116) == AT_LIST) && !(ATisEmpty(k_116))))
    {
      i_116 = ATgetFirst((ATermList) k_116);
      j_116 = (ATerm) ATgetNext((ATermList) k_116);
      {
        ATerm n_116 = NULL;
        t = not_null(j_116);
        {
          ATerm y_37;
          y_37 = t;
          {
            ATerm o_116 = NULL,q_116 = NULL,s_116 = NULL;
            ATerm z_37;
            z_37 = t;
            {
              ATerm p_116 = NULL;
              t = j_0(t);
              {
                p_116 = t;
                if(((o_116 != NULL) && (o_116 != p_116)))
                  _fail(p_116);
                else
                  o_116 = p_116;
              }
            }
            t = z_37;
            {
              ATerm r_116 = NULL;
              t = not_null(i_116);
              {
                t = i_0(t);
                {
                  r_116 = t;
                  if(((q_116 != NULL) && (q_116 != r_116)))
                    _fail(r_116);
                  else
                    q_116 = r_116;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_116)), not_null(q_116));
                {
                  s_116 = t;
                  if(((n_116 != NULL) && (n_116 != s_116)))
                    _fail(s_116);
                  else
                    n_116 = s_116;
                }
              }
            }
          }
          t = y_37;
          {
            ATerm z_8 (ATerm t)
            {
              t = not_null(n_116);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_116) == AT_LIST) && ATisEmpty(k_116)))
        {
          {
            t = term_x_33;
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
  ATerm a_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_9);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm z_116 = NULL;
  ATerm a_117 = NULL;
  t = term_x_33;
  {
    t = h_0(t);
    {
      a_117 = t;
      if(((z_116 != NULL) && (z_116 != a_117)))
        _fail(a_117);
      else
        z_116 = a_117;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_38), not_null(z_116)), term_a_38);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm h_117 = NULL,i_117 = NULL;
  h_117 = t;
  g_117 :
  if(match_cons(h_117, sym_Program_1))
    {
      i_117 = ATgetArgument(h_117, 0);
      {
        ATerm l_117 = NULL,n_117 = NULL;
        ATerm m_117 = NULL;
        t = SSLgetAnnotations(not_null(h_117));
        {
          m_117 = t;
          if(((l_117 != NULL) && (l_117 != m_117)))
            _fail(m_117);
          else
            l_117 = m_117;
        }
        {
          t = not_null(i_117);
          {
            ATerm p_117 = NULL;
            t = e_78(t);
            {
              n_117 = t;
              {
                ATerm q_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_117)), not_null(l_117));
                {
                  q_117 = t;
                  if(((p_117 != NULL) && (p_117 != q_117)))
                    _fail(q_117);
                  else
                    p_117 = q_117;
                }
                t = not_null(p_117);
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
  ATerm z_117 = NULL;
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_118 = NULL;
      t = term_b_36;
      {
        t = get_config_0(t);
        {
          a_118 = t;
          if(((z_117 != NULL) && (z_117 != a_118)))
            _fail(a_118);
          else
            z_117 = a_118;
        }
      }
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
      {
        ATerm b_9 (ATerm t)
        {
          ATerm f_9 (ATerm t)
          {
            ATerm b_118 = NULL;
            b_118 = t;
            if(((z_117 != NULL) && (z_117 != b_118)))
              _fail(b_118);
            else
              z_117 = b_118;
            return(t);
          }
          t = Program_1(t, f_9);
          return(t);
        }
        t = option_defined_1(t, b_9);
      }
    }
  {
    ATerm g_9 (ATerm t)
    {
      ATerm h_9 (ATerm t)
      {
        t = not_null(z_117);
        return(t);
      }
      t = short_description_1(t, h_9);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_9);
    {
      t = term_l_38;
      {
        t = echo_0(t);
        {
          t = term_s_38;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_9 (ATerm t)
                {
                  ATerm c_118 = NULL;
                  ATerm d_118 = NULL;
                  d_118 = t;
                  if(((c_118 != NULL) && (c_118 != d_118)))
                    _fail(d_118);
                  else
                    c_118 = d_118;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_118)), term_t_38);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_9);
                {
                  ATerm j_9 (ATerm t)
                  {
                    ATerm e_118 = NULL;
                    ATerm f_118 = NULL;
                    ATerm k_9 (ATerm t)
                    {
                      t = not_null(z_117);
                      return(t);
                    }
                    t = long_description_1(t, k_9);
                    {
                      f_118 = t;
                      if(((e_118 != NULL) && (e_118 != f_118)))
                        _fail(f_118);
                      else
                        e_118 = f_118;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_118)), term_x_38);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_9);
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
  ATerm y_38;
  y_38 = t;
  {
    ATerm l_118 = NULL;
    ATerm m_118 = NULL;
    m_118 = t;
    if(((l_118 != NULL) && (l_118 != m_118)))
      _fail(m_118);
    else
      l_118 = m_118;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATempty, not_null(l_118)));
      t = printnl_0(t);
    }
  }
  t = y_38;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_105 (ATerm))
{
  ATerm z_38;
  z_38 = t;
  {
    t = s_105(t);
    t = debug_0(t);
  }
  t = z_38;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm t_118 = NULL,u_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym_Undefined_1))
    {
      u_118 = ATgetArgument(t_118, 0);
      {
        ATerm x_118 = NULL,z_118 = NULL;
        ATerm y_118 = NULL;
        t = SSLgetAnnotations(not_null(t_118));
        {
          y_118 = t;
          if(((x_118 != NULL) && (x_118 != y_118)))
            _fail(y_118);
          else
            x_118 = y_118;
        }
        {
          t = not_null(u_118);
          {
            ATerm b_119 = NULL;
            t = f_78(t);
            {
              z_118 = t;
              {
                ATerm c_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_118)), not_null(x_118));
                {
                  c_119 = t;
                  if(((b_119 != NULL) && (b_119 != c_119)))
                    _fail(c_119);
                  else
                    b_119 = c_119;
                }
                t = not_null(b_119);
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
ATerm fetch_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm h_119 (ATerm t)
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_95, _id);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = Cons_2(t, _id, h_119);
      }
    return(t);
  }
  t = h_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_106 (ATerm))
{
  t = fetch_1(t, u_106);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_119 = NULL;
  m_119 = t;
  l_119 :
  if(match_cons(m_119, sym_Help_0))
    {
      ATerm o_119 = NULL,q_119 = NULL;
      ATerm c_39;
      c_39 = t;
      {
        ATerm p_119 = NULL;
        t = SSLgetAnnotations(not_null(m_119));
        {
          p_119 = t;
          if(((o_119 != NULL) && (o_119 != p_119)))
            _fail(p_119);
          else
            o_119 = p_119;
        }
      }
      t = c_39;
      {
        ATerm r_119 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_119));
        {
          r_119 = t;
          if(((q_119 != NULL) && (q_119 != r_119)))
            _fail(r_119);
          else
            q_119 = r_119;
        }
        t = not_null(q_119);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_86(t);
      LocalPopChoice(e_39);
    }
  else
    {
      t = d_39;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL;
  x_119 = t;
  w_119 :
  if(match_cons(x_119, sym__2))
    {
      y_119 = ATgetArgument(x_119, 0);
      z_119 = ATgetArgument(x_119, 1);
      t = SSL_table_get(not_null(y_119), not_null(z_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL;
  g_120 = t;
  f_120 :
  if(match_cons(g_120, sym__3))
    {
      h_120 = ATgetArgument(g_120, 0);
      i_120 = ATgetArgument(g_120, 1);
      j_120 = ATgetArgument(g_120, 2);
      {
        ATerm m_39;
        m_39 = t;
        {
          ATerm n_120 = NULL;
          ATerm o_120 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_120), not_null(i_120));
          {
            ATerm n_39 = t;
            int o_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_39);
              }
            else
              {
                t = n_39;
                t = (ATerm) ATempty;
              }
            {
              o_120 = t;
              if(((n_120 != NULL) && (n_120 != o_120)))
                _fail(o_120);
              else
                n_120 = o_120;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_120), not_null(i_120), (ATerm) ATinsert(CheckATermList(not_null(n_120)), not_null(j_120)));
            t = table_put_0(t);
          }
        }
        t = m_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_107 (ATerm))
{
  ATerm s_120 = NULL;
  ATerm t_120 = NULL;
  t = term_x_33;
  {
    t = z_107(t);
    {
      t_120 = t;
      if(((s_120 != NULL) && (s_120 != t_120)))
        _fail(t_120);
      else
        s_120 = t_120;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_38, term_n_38, not_null(s_120));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_120 = NULL,c_121 = NULL,d_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_string(z_120, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_120) == AT_LIST) && !(ATisEmpty(z_120))))
        {
          c_121 = ATgetFirst((ATermList) z_120);
          d_121 = (ATerm) ATgetNext((ATermList) z_120);
          {
            ATerm g_121 = NULL;
            ATerm p_39;
            p_39 = t;
            {
              t = not_null(c_121);
              t = a_0(t);
            }
            t = p_39;
            {
              ATerm h_121 = NULL;
              t = term_x_33;
              {
                t = d_0(t);
                {
                  h_121 = t;
                  if(((g_121 != NULL) && (g_121 != h_121)))
                    _fail(h_121);
                  else
                    g_121 = h_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_121)), not_null(g_121));
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
  ATerm l_9 (ATerm t)
  {
    ATerm m_121 = NULL;
    m_121 = t;
    l_121 :
    if(!(match_string(m_121, "--help")))
      {
        if(!(match_string(m_121, "-h")))
          {
            if(!(match_string(m_121, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    t = term_w_39;
    {
      t = set_config_0(t);
      t = term_x_39;
    }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = term_y_39;
    return(t);
  }
  t = Option_3(t, l_9, m_9, n_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL;
  p_121 = t;
  o_121 :
  if(((ATgetType(p_121) == AT_LIST) && !(ATisEmpty(p_121))))
    {
      q_121 = ATgetFirst((ATermList) p_121);
      r_121 = (ATerm) ATgetNext((ATermList) p_121);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_121)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_121)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm b_122 = NULL,e_122 = NULL,f_122 = NULL;
  b_122 = t;
  a_122 :
  if(((ATgetType(b_122) == AT_LIST) && !(ATisEmpty(b_122))))
    {
      e_122 = ATgetFirst((ATermList) b_122);
      f_122 = (ATerm) ATgetNext((ATermList) b_122);
      {
        ATerm j_122 = NULL,l_122 = NULL;
        ATerm k_122 = NULL;
        t = SSLgetAnnotations(not_null(b_122));
        {
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
        }
        {
          t = not_null(e_122);
          {
            ATerm n_122 = NULL;
            t = w_72(t);
            {
              l_122 = t;
              {
                t = not_null(f_122);
                {
                  ATerm p_122 = NULL;
                  t = x_72(t);
                  {
                    n_122 = t;
                    {
                      ATerm q_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_122)), not_null(l_122)), not_null(j_122));
                      {
                        q_122 = t;
                        if(((p_122 != NULL) && (p_122 != q_122)))
                          _fail(q_122);
                        else
                          p_122 = q_122;
                      }
                      t = not_null(p_122);
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
  ATerm a_123 = NULL;
  a_123 = t;
  z_122 :
  if(((ATgetType(a_123) == AT_LIST) && ATisEmpty(a_123)))
    {
      {
        ATerm c_123 = NULL,e_123 = NULL;
        ATerm z_39;
        z_39 = t;
        {
          ATerm d_123 = NULL;
          t = SSLgetAnnotations(not_null(a_123));
          {
            d_123 = t;
            if(((c_123 != NULL) && (c_123 != d_123)))
              _fail(d_123);
            else
              c_123 = d_123;
          }
        }
        t = z_39;
        {
          ATerm f_123 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_123));
          {
            f_123 = t;
            if(((e_123 != NULL) && (e_123 != f_123)))
              _fail(f_123);
            else
              e_123 = f_123;
          }
          t = not_null(e_123);
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
  ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL;
  l_123 = t;
  k_123 :
  if(match_cons(l_123, sym__2))
    {
      m_123 = ATgetArgument(l_123, 0);
      n_123 = ATgetArgument(l_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_32, not_null(m_123), not_null(n_123));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_107 (ATerm))
{
  ATerm a_40;
  a_40 = t;
  {
    ATerm o_9 (ATerm t)
    {
      t = term_b_40;
      t = x_107(t);
      return(t);
    }
    t = try_1(t, o_9);
  }
  t = a_40;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm v_123 = NULL;
      ATerm f_40;
      f_40 = t;
      {
        ATerm t_123 = NULL;
        ATerm u_123 = NULL;
        u_123 = t;
        if(((t_123 != NULL) && (t_123 != u_123)))
          _fail(u_123);
        else
          t_123 = u_123;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_36, not_null(t_123));
          t = set_config_0(t);
        }
      }
      t = f_40;
      {
        ATerm w_123 = NULL;
        w_123 = t;
        if(((v_123 != NULL) && (v_123 != w_123)))
          _fail(w_123);
        else
          v_123 = w_123;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_123));
      }
      return(t);
    }
    ATerm q_9 (ATerm t)
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_40);
            }
          else
            {
              t = i_40;
              {
                t = x_107(t);
                t = Cons_2(t, _id, q_9);
              }
            }
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_9, q_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL;
  ATerm l_40;
  l_40 = t;
  {
    ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL;
    f_124 = t;
    b_124 :
    if(match_cons(f_124, sym__3))
      {
        g_124 = ATgetArgument(f_124, 0);
        h_124 = ATgetArgument(f_124, 1);
        i_124 = ATgetArgument(f_124, 2);
        {
          if(((c_124 != NULL) && (c_124 != g_124)))
            _fail(g_124);
          else
            c_124 = g_124;
          {
            if(((d_124 != NULL) && (d_124 != h_124)))
              _fail(h_124);
            else
              d_124 = h_124;
            {
              if(((e_124 != NULL) && (e_124 != i_124)))
                _fail(i_124);
              else
                e_124 = i_124;
              t = SSL_table_put(not_null(c_124), not_null(d_124), not_null(e_124));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_40;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_107 (ATerm))
{
  ATerm l_124 = NULL;
  ATerm m_40;
  m_40 = t;
  {
    t = term_p_40;
    t = table_put_0(t);
  }
  t = m_40;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm q_40 = t;
      int r_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_107(t);
          LocalPopChoice(r_40);
        }
      else
        {
          t = q_40;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_9);
    {
      ATerm s_9 (ATerm t)
      {
        ATerm s_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_40;
            w_40 = t;
            {
              ATerm b_41 = t;
              int c_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_39;
                  t = get_config_0(t);
                  LocalPopChoice(c_41);
                }
              else
                {
                  t = b_41;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = w_40;
            {
              t = system_usage_0(t);
              {
                t = term_g_34;
                t = exit_0(t);
              }
            }
            LocalPopChoice(t_40);
          }
        else
          {
            t = s_40;
            {
              ATerm t_9 (ATerm t)
              {
                ATerm u_9 (ATerm t)
                {
                  ATerm m_124 = NULL;
                  m_124 = t;
                  if(((l_124 != NULL) && (l_124 != m_124)))
                    _fail(m_124);
                  else
                    l_124 = m_124;
                  return(t);
                }
                t = Undefined_1(t, u_9);
                return(t);
              }
              t = option_defined_1(t, t_9);
              {
                ATerm v_9 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_124)), term_d_41);
                  return(t);
                }
                t = say_1(t, v_9);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_9);
      {
        ATerm e_41;
        e_41 = t;
        {
          t = term_m_38;
          t = table_destroy_0(t);
        }
        t = e_41;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm))
{
  t = parse_options_1(t, s_113);
  {
    t = store_options_0(t);
    {
      t = u_113(t);
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_113);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm i_41 = t;
              int j_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_113(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_41);
                }
              else
                {
                  t = i_41;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm))
{
  ATerm w_9 (ATerm t)
  {
    ATerm k_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_114(t);
        LocalPopChoice(m_41);
      }
    else
      {
        t = k_41;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_114);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_9, l_114, m_114, x_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm))
{
  ATerm y_9 (ATerm t)
  {
    ATerm z_9 (ATerm t)
    {
      ATerm n_41;
      n_41 = t;
      {
        ATerm p_124 = NULL;
        ATerm q_124 = NULL;
        t = term_b_36;
        {
          t = get_config_0(t);
          {
            q_124 = t;
            if(((p_124 != NULL) && (p_124 != q_124)))
              _fail(q_124);
            else
              p_124 = q_124;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATempty, not_null(p_124)));
          t = printnl_0(t);
        }
      }
      t = n_41;
      return(t);
    }
    t = if_verbose2_1(t, z_9);
    return(t);
  }
  t = iowrap_4(t, d_114, e_114, f_114, y_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_114 (ATerm), ATerm c_114 (ATerm))
{
  t = iowrap_3(t, b_114, c_114, default_usage_0);
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

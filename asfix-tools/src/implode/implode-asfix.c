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
ATerm term_c_45;
ATerm term_h_44;
ATerm term_z_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_u_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_e_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_k_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_m_30;
ATerm term_m_28;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_b_18;
ATerm term_i_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_m_12;
ATerm term_a_11;
ATerm term_m_10;
ATerm term_l_10;
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
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_b_9;
void init_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_o_35);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_x_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_f_36, term_o_35);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_s_36, term_o_35);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_o_41);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_n_43, term_o_35);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__3, term_n_41, term_o_41, (ATerm) ATempty);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm h_79 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm a_86 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm z_85 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm y_85 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm x_85 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm w_85 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm d_86 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm s_72 (ATerm), ATerm t_72 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm s_89 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm alt_2 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm b_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm d_88 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_87 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm f_95 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm sort_1 (ATerm, ATerm a_1 (ATerm));
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm b_73 (ATerm));
ATerm opt_1 (ATerm, ATerm z_0 (ATerm));
ATerm cf_1 (ATerm, ATerm y_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm w_101 (ATerm));
ATerm prod_3 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm c_88 (ATerm));
ATerm remove_x_1 (ATerm, ATerm j_86 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_94 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_108 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_113 (ATerm));
ATerm debug_1 (ATerm, ATerm d_105 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_102 (ATerm), ATerm j_102 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm crush_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_108 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_112 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm lit_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm h_94 (ATerm));
ATerm seq_1 (ATerm, ATerm l_78 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm o_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm iter_1 (ATerm, ATerm l_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm f_94 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm x_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_105 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_94 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_106 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_107 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_107 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_107 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_113 (ATerm), ATerm o_113 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_options_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
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
        t = term_b_9;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_c_9;
        return(t);
      }
      t = Option_3(t, b_0, c_0, e_0);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
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
              t = term_h_9;
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_i_9;
              return(t);
            }
            t = Option_3(t, f_0, h_1, l_1);
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
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
                    t = term_l_9;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_m_9;
                    return(t);
                  }
                  t = Option_3(t, m_1, n_1, r_1);
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm n_9 = t;
                    int o_9 = stack_ptr;
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
                          t = term_p_9;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_q_9;
                          return(t);
                        }
                        t = Option_3(t, s_1, t_1, u_1);
                        LocalPopChoice(o_9);
                      }
                    else
                      {
                        t = n_9;
                        {
                          ATerm r_9 = t;
                          int s_9 = stack_ptr;
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
                                t = term_t_9;
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_u_9;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, x_1);
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
                                      t = term_x_9;
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_y_9;
                                      return(t);
                                    }
                                    t = Option_3(t, y_1, z_1, a_2);
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
                                            t = term_b_10;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_c_10;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
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
                                                  t = term_f_10;
                                                  return(t);
                                                }
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = term_g_10;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_2, l_2, m_2);
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
                                                        t = term_j_10;
                                                        return(t);
                                                      }
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        t = term_k_10;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_2, r_2, s_2);
                                                      LocalPopChoice(i_10);
                                                    }
                                                  else
                                                    {
                                                      t = h_10;
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
                                                          t = term_l_10;
                                                          return(t);
                                                        }
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          t = term_m_10;
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
ATerm amb_1 (ATerm t, ATerm h_79 (ATerm))
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
            t = h_79(t);
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
                        ATerm n_10;
                        n_10 = t;
                        {
                          t = not_null(i_14);
                          t = is_conc_0(t);
                        }
                        t = n_10;
                        {
                          ATerm o_10;
                          o_10 = t;
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
                          t = o_10;
                          {
                            ATerm p_10;
                            p_10 = t;
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
                            t = p_10;
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
                                  ATerm q_10 = t;
                                  int r_10 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = conc_two_lists_0(t);
                                      LocalPopChoice(r_10);
                                    }
                                  else
                                    {
                                      t = q_10;
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
                                            ATerm s_10 = t;
                                            int t_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(c_15);
                                                {
                                                  ATerm u_10 = t;
                                                  int v_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(v_10);
                                                    }
                                                  else
                                                    {
                                                      t = u_10;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(c_15));
                                                    {
                                                      ATerm w_10 = t;
                                                      int x_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = conc_two_lists_0(t);
                                                          LocalPopChoice(x_10);
                                                        }
                                                      else
                                                        {
                                                          t = w_10;
                                                          t = conc_more_lists_0(t);
                                                        }
                                                    }
                                                  }
                                                }
                                                LocalPopChoice(t_10);
                                              }
                                            else
                                              {
                                                t = s_10;
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
ATerm ReplConsSome_1 (ATerm t, ATerm a_86 (ATerm))
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
                ATerm y_10;
                y_10 = t;
                {
                  t = not_null(r_16);
                  t = is_some_0(t);
                }
                t = y_10;
                {
                  ATerm y_16 = NULL;
                  t = not_null(t_16);
                  {
                    t = a_86(t);
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
ATerm ReplConsIns_1 (ATerm t, ATerm z_85 (ATerm))
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
                ATerm z_10;
                z_10 = t;
                {
                  t = not_null(m_18);
                  t = is_ins_0(t);
                }
                t = z_10;
                {
                  ATerm t_18 = NULL;
                  t = not_null(o_18);
                  {
                    t = z_85(t);
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
ATerm ReplConsNone_1 (ATerm t, ATerm y_85 (ATerm))
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
            t = term_a_11;
          }
        }
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
ATerm ReplConsNil_1 (ATerm t, ATerm x_85 (ATerm))
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
ATerm ReplNamedCons_1 (ATerm t, ATerm w_85 (ATerm))
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
        ATerm b_11;
        b_11 = t;
        {
          ATerm h_21 = NULL;
          t = not_null(c_21);
          {
            t = get_cons_0(t);
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Rename_Keyword_0(t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
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
        t = b_11;
        {
          ATerm e_11;
          e_11 = t;
          {
            ATerm j_21 = NULL;
            t = not_null(d_21);
            {
              t = map_1(t, w_85);
              {
                j_21 = t;
                if(((i_21 != NULL) && (i_21 != j_21)))
                  _fail(j_21);
                else
                  i_21 = j_21;
              }
            }
          }
          t = e_11;
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
ATerm ReplCons_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, d_86);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1(t, d_86);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1(t, d_86);
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
                  {
                    ATerm l_11 = t;
                    int m_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, d_86);
                        LocalPopChoice(m_11);
                      }
                    else
                      {
                        t = l_11;
                        {
                          ATerm n_11 = t;
                          int o_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, d_86);
                              LocalPopChoice(o_11);
                            }
                          else
                            {
                              t = n_11;
                              t = ReplConsConc_1(t, d_86);
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
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          ATerm r_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, c_3);
              LocalPopChoice(s_11);
            }
          else
            {
              t = r_11;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, b_3, _id);
        return(t);
      }
      t = appl_2(t, a_3, _id);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
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
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          {
            ATerm v_11 = t;
            int w_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm x_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_11;
                      }
                    return(t);
                  }
                  t = filter_1(t, f_3);
                  return(t);
                }
                t = appl_2(t, _id, e_3);
                {
                  ATerm y_11 = t;
                  int z_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
                      t = h_23(t);
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
                            t = ReplCons_1(t, h_23);
                            LocalPopChoice(b_12);
                          }
                        else
                          {
                            t = a_12;
                            {
                              ATerm c_12 = t;
                              int f_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0(t);
                                  t = h_23(t);
                                  LocalPopChoice(f_12);
                                }
                              else
                                {
                                  t = c_12;
                                  {
                                    ATerm g_12 = t;
                                    int h_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = h_23(t);
                                        LocalPopChoice(h_12);
                                      }
                                    else
                                      {
                                        t = g_12;
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
                LocalPopChoice(w_11);
              }
            else
              {
                t = v_11;
                {
                  ATerm i_12 = t;
                  int j_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = list_1(t, h_23);
                        return(t);
                      }
                      t = amb_1(t, g_3);
                      LocalPopChoice(j_12);
                    }
                  else
                    {
                      t = i_12;
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
      ATerm k_12;
      k_12 = t;
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
      t = k_12;
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
                ATerm l_12;
                l_12 = t;
                {
                  ATerm w_24 = NULL;
                  t = term_m_12;
                  {
                    w_24 = t;
                    if(((v_24 != NULL) && (v_24 != w_24)))
                      _fail(w_24);
                    else
                      v_24 = w_24;
                  }
                }
                t = l_12;
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
                        ATerm n_12;
                        n_12 = t;
                        {
                          ATerm b_25 = NULL;
                          t = term_m_12;
                          {
                            b_25 = t;
                            if(((a_25 != NULL) && (a_25 != b_25)))
                              _fail(b_25);
                            else
                              a_25 = b_25;
                          }
                        }
                        t = n_12;
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
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Tuple_0(t);
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
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
      ATerm t_12;
      t_12 = t;
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
      t = t_12;
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
ATerm Conc_2 (ATerm t, ATerm s_72 (ATerm), ATerm t_72 (ATerm))
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
            t = s_72(t);
            {
              s_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm w_27 = NULL;
                  t = t_72(t);
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
                ATerm u_12 = t;
                int v_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_29(t);
                    LocalPopChoice(v_12);
                  }
                else
                  {
                    t = u_12;
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
                    ATerm x_12 = t;
                    int s_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_29(t);
                        LocalPopChoice(s_13);
                      }
                    else
                      {
                        t = x_12;
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
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_2(t, i_3, _id);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm z_13 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC2_0(t);
              t = Cons_2(t, conc_to_cons_0, _id);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = CTC3_0(t);
            }
          LocalPopChoice(o_14);
        }
      else
        {
          t = z_13;
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
      t = term_r_14;
    }
  else
    {
      if(match_string(b_30, "imports"))
        {
          t = term_y_14;
        }
      else
        {
          if(match_string(b_30, "id"))
            {
              t = term_z_14;
            }
          else
            {
              if(match_string(b_30, "hiddens"))
                {
                  t = term_a_15;
                }
              else
                {
                  if(match_string(b_30, "exports"))
                    {
                      t = term_h_15;
                    }
                  else
                    {
                      if(match_string(b_30, "module"))
                        {
                          t = term_i_15;
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  b_32 = t;
  u_30 :
  if(match_cons(b_32, sym_prod_3))
    {
      c_32 = ATgetArgument(b_32, 0);
      g_32 = ATgetArgument(b_32, 1);
      k_32 = ATgetArgument(b_32, 2);
      v_30 :
      if(((ATgetType(c_32) == AT_LIST) && !(ATisEmpty(c_32))))
        {
          d_32 = ATgetFirst((ATermList) c_32);
          f_32 = (ATerm) ATgetNext((ATermList) c_32);
          w_30 :
          if(((ATgetType(f_32) == AT_LIST) && ATisEmpty(f_32)))
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
                    t = term_j_15;
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
                                t = term_j_15;
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
                                    t = term_k_15;
                                  }
                                }
                              else
                                {
                                  if(match_cons(h_32, sym_iter_sep_2))
                                    {
                                      i_32 = ATgetArgument(h_32, 0);
                                      j_32 = ATgetArgument(h_32, 1);
                                      {
                                        if(((e_32 != NULL) && (e_32 != i_32)))
                                          _fail(i_32);
                                        else
                                          e_32 = i_32;
                                        t = term_k_15;
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
                            t = term_k_15;
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
                                t = term_k_15;
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
              if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
                {
                  s_31 = ATgetFirst((ATermList) f_32);
                  t_31 = (ATerm) ATgetNext((ATermList) f_32);
                  d_31 :
                  if(((ATgetType(t_31) == AT_LIST) && ATisEmpty(t_31)))
                    {
                      e_31 :
                      if(match_cons(g_32, sym_iter_1))
                        {
                          h_32 = ATgetArgument(g_32, 0);
                          f_31 :
                          t = term_l_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
                        {
                          u_31 = ATgetFirst((ATermList) t_31);
                          v_31 = (ATerm) ATgetNext((ATermList) t_31);
                          g_31 :
                          if(((ATgetType(v_31) == AT_LIST) && ATisEmpty(v_31)))
                            {
                              h_31 :
                              if(match_cons(g_32, sym_iter_sep_2))
                                {
                                  h_32 = ATgetArgument(g_32, 0);
                                  a_32 = ATgetArgument(g_32, 1);
                                  i_31 :
                                  t = term_l_15;
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
                              if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
                                {
                                  w_31 = ATgetFirst((ATermList) v_31);
                                  x_31 = (ATerm) ATgetNext((ATermList) v_31);
                                  l_31 :
                                  if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
                                    {
                                      y_31 = ATgetFirst((ATermList) x_31);
                                      z_31 = (ATerm) ATgetNext((ATermList) x_31);
                                      m_31 :
                                      if(((ATgetType(z_31) == AT_LIST) && ATisEmpty(z_31)))
                                        {
                                          n_31 :
                                          if(match_cons(g_32, sym_cf_1))
                                            {
                                              h_32 = ATgetArgument(g_32, 0);
                                              o_31 :
                                              if(match_cons(h_32, sym_iter_sep_2))
                                                {
                                                  i_32 = ATgetArgument(h_32, 0);
                                                  j_32 = ATgetArgument(h_32, 1);
                                                  p_31 :
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
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
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
          if(((ATgetType(c_32) == AT_LIST) && ATisEmpty(c_32)))
            {
              q_31 :
              if(match_cons(g_32, sym_opt_1))
                {
                  h_32 = ATgetArgument(g_32, 0);
                  t = term_m_15;
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
                          t = term_m_15;
                        }
                      else
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
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_prod_3))
    {
      g_38 = ATgetArgument(f_38, 0);
      h_38 = ATgetArgument(f_38, 1);
      i_38 = ATgetArgument(f_38, 2);
      {
        ATerm k_38 = NULL;
        t = not_null(i_38);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_38 = NULL,m_38 = NULL;
            l_38 = t;
            d_38 :
            if(match_cons(l_38, sym_cons_1))
              {
                m_38 = ATgetArgument(l_38, 0);
                if(((k_38 != NULL) && (k_38 != m_38)))
                  _fail(m_38);
                else
                  k_38 = m_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, j_3);
        }
        t = not_null(k_38);
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
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_appl_2))
    {
      u_38 = ATgetArgument(t_38, 0);
      v_38 = ATgetArgument(t_38, 1);
      {
        ATerm y_38 = NULL,a_39 = NULL;
        ATerm n_15;
        n_15 = t;
        {
          ATerm z_38 = NULL;
          t = not_null(u_38);
          {
            ATerm o_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(p_15);
              }
            else
              {
                t = o_15;
                t = Constr1_0(t);
              }
            {
              ATerm q_15 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Rename_Keyword_0(t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = q_15;
                  {
                  }
                }
              {
                z_38 = t;
                if(((y_38 != NULL) && (y_38 != z_38)))
                  _fail(z_38);
                else
                  y_38 = z_38;
              }
            }
          }
        }
        t = n_15;
        {
          t = SSL_mkterm(not_null(y_38), not_null(v_38));
          {
            a_39 = t;
            t = not_null(a_39);
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
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,d_40 = NULL,e_40 = NULL;
  t_39 = t;
  o_39 :
  if(match_cons(t_39, sym_prod_3))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      e_40 = ATgetArgument(t_39, 2);
      p_39 :
      if(((ATgetType(u_39) == AT_LIST) && ATisEmpty(u_39)))
        {
          q_39 :
          if(match_cons(v_39, sym_iter_star_1))
            {
              w_39 = ATgetArgument(v_39, 0);
              t = term_i_16;
            }
          else
            {
              if(match_cons(v_39, sym_iter_star_sep_2))
                {
                  w_39 = ATgetArgument(v_39, 0);
                  s_39 = ATgetArgument(v_39, 1);
                  t = term_i_16;
                }
              else
                {
                  if(match_cons(v_39, sym_cf_1))
                    {
                      w_39 = ATgetArgument(v_39, 0);
                      r_39 :
                      if(match_cons(w_39, sym_iter_star_1))
                        {
                          x_39 = ATgetArgument(w_39, 0);
                          t = term_i_16;
                        }
                      else
                        {
                          if(match_cons(w_39, sym_iter_star_sep_2))
                            {
                              x_39 = ATgetArgument(w_39, 0);
                              d_40 = ATgetArgument(w_39, 1);
                              t = term_i_16;
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
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      t = CnsGeneric_0(t);
    }
  return(t);
}
ATerm replace_appl_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = appl_2(t, _id, _id);
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CnsNil_0(t);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              t = CnsGeneric_0(t);
            }
        }
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
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
      ATerm z_16;
      z_16 = t;
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
      t = z_16;
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
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FlatAlt_0(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
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
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,q_42 = NULL;
      ATerm e_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm q_3 (ATerm t)
              {
                ATerm z_17 = t;
                int a_18 = stack_ptr;
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
                    LocalPopChoice(a_18);
                  }
                else
                  {
                    t = z_17;
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
          LocalPopChoice(y_17);
        }
      else
        {
          t = e_17;
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
                  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
                  m_42 = t;
                  p_41 :
                  if(match_cons(m_42, sym_alt_2))
                    {
                      n_42 = ATgetArgument(m_42, 0);
                      o_42 = ATgetArgument(m_42, 1);
                      {
                        if(((c_42 != NULL) && (c_42 != n_42)))
                          _fail(n_42);
                        else
                          c_42 = n_42;
                        if(((d_42 != NULL) && (d_42 != o_42)))
                          _fail(o_42);
                        else
                          d_42 = o_42;
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
              ATerm p_42 = NULL;
              p_42 = t;
              if(((e_42 != NULL) && (e_42 != p_42)))
                _fail(p_42);
              else
                e_42 = p_42;
              return(t);
            }
            t = appl_2(t, t_3, u_3);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(c_42), not_null(d_42)), term_b_18);
        {
          ATerm u_43 (ATerm t)
          {
            ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
            ATerm v_43 (ATerm t)
            {
              ATerm w_42 = NULL;
              if(((b_42 != NULL) && (b_42 != s_42)))
                _fail(s_42);
              else
                b_42 = s_42;
              {
                if(((w_42 != NULL) && (w_42 != v_42)))
                  _fail(v_42);
                else
                  w_42 = v_42;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(w_42), not_null(e_42));
              }
              return(t);
            }
            ATerm w_43 (ATerm t)
            {
              ATerm z_42 = NULL;
              if(((b_42 != NULL) && (b_42 != t_42)))
                _fail(t_42);
              else
                b_42 = t_42;
              {
                if(((q_42 != NULL) && (q_42 != u_42)))
                  _fail(u_42);
                else
                  q_42 = u_42;
                {
                  if(((z_42 != NULL) && (z_42 != v_42)))
                    _fail(v_42);
                  else
                    z_42 = v_42;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(z_42), not_null(e_42));
                }
              }
              return(t);
            }
            ATerm x_43 (ATerm t)
            {
              ATerm f_43 = NULL;
              ATerm g_43 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), term_b_18);
              {
                t = add_0(t);
                {
                  g_43 = t;
                  if(((f_43 != NULL) && (f_43 != g_43)))
                    _fail(g_43);
                  else
                    f_43 = g_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_42), not_null(f_43));
                t = u_43(t);
              }
              return(t);
            }
            r_42 = t;
            v_41 :
            if(match_cons(r_42, sym__2))
              {
                s_42 = ATgetArgument(r_42, 0);
                v_42 = ATgetArgument(r_42, 1);
                w_41 :
                if(match_cons(s_42, sym_alt_2))
                  {
                    t_42 = ATgetArgument(s_42, 0);
                    u_42 = ATgetArgument(s_42, 1);
                    {
                      ATerm c_18 = t;
                      int d_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_43(t);
                          LocalPopChoice(d_18);
                        }
                      else
                        {
                          t = c_18;
                          {
                            ATerm e_18 = t;
                            int f_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_43(t);
                                LocalPopChoice(f_18);
                              }
                            else
                              {
                                t = e_18;
                                t = x_43(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = v_43(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = u_43(t);
        }
      }
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm h_43 = NULL;
        h_43 = t;
        a_42 :
        if(match_cons(h_43, sym_FlatAlt_0))
          {
            ATerm j_43 = NULL,l_43 = NULL;
            ATerm g_18;
            g_18 = t;
            {
              ATerm k_43 = NULL;
              t = SSLgetAnnotations(not_null(h_43));
              {
                k_43 = t;
                if(((j_43 != NULL) && (j_43 != k_43)))
                  _fail(k_43);
                else
                  j_43 = k_43;
              }
            }
            t = g_18;
            {
              ATerm m_43 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(j_43));
              {
                m_43 = t;
                if(((l_43 != NULL) && (l_43 != m_43)))
                  _fail(m_43);
                else
                  l_43 = m_43;
              }
              t = not_null(l_43);
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
  ATerm j_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_bracket_0))
    {
      ATerm h_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_44 = NULL,n_44 = NULL;
          ATerm r_18;
          r_18 = t;
          {
            ATerm m_44 = NULL;
            t = SSLgetAnnotations(not_null(j_44));
            {
              m_44 = t;
              if(((l_44 != NULL) && (l_44 != m_44)))
                _fail(m_44);
              else
                l_44 = m_44;
            }
          }
          t = r_18;
          {
            ATerm p_44 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(l_44));
            {
              p_44 = t;
              if(((n_44 != NULL) && (n_44 != p_44)))
                _fail(p_44);
              else
                n_44 = p_44;
            }
            t = not_null(n_44);
          }
          LocalPopChoice(q_18);
        }
      else
        {
          t = h_18;
          {
            ATerm r_44 = NULL,t_44 = NULL;
            ATerm u_18;
            u_18 = t;
            {
              ATerm s_44 = NULL;
              t = SSLgetAnnotations(not_null(j_44));
              {
                s_44 = t;
                if(((r_44 != NULL) && (r_44 != s_44)))
                  _fail(s_44);
                else
                  r_44 = s_44;
              }
            }
            t = u_18;
            {
              ATerm u_44 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(r_44));
              {
                u_44 = t;
                if(((t_44 != NULL) && (t_44 != u_44)))
                  _fail(u_44);
                else
                  t_44 = u_44;
              }
              t = not_null(t_44);
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
ATerm oncetd_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm b_45 (ATerm t)
  {
    ATerm v_18 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_89(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = v_18;
        t = _one(t, b_45);
      }
    return(t);
  }
  t = b_45(t);
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
        ATerm m_19 = t;
        int n_19 = stack_ptr;
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
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
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
        ATerm a_20 = t;
        int g_20 = stack_ptr;
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
            LocalPopChoice(g_20);
          }
        else
          {
            t = a_20;
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
        ATerm h_20 = t;
        int i_20 = stack_ptr;
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
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
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
  ATerm j_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(q_20);
    }
  else
    {
      t = j_20;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm b_1 (ATerm))
{
  ATerm a_50 = NULL,b_50 = NULL;
  a_50 = t;
  z_49 :
  if(match_cons(a_50, sym_varsym_1))
    {
      b_50 = ATgetArgument(a_50, 0);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_50 = NULL,g_50 = NULL;
            ATerm f_50 = NULL;
            t = SSLgetAnnotations(not_null(a_50));
            {
              f_50 = t;
              if(((e_50 != NULL) && (e_50 != f_50)))
                _fail(f_50);
              else
                e_50 = f_50;
            }
            {
              t = not_null(b_50);
              {
                ATerm i_50 = NULL;
                t = b_1(t);
                {
                  g_50 = t;
                  {
                    ATerm j_50 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(g_50)), not_null(e_50));
                    {
                      j_50 = t;
                      if(((i_50 != NULL) && (i_50 != j_50)))
                        _fail(j_50);
                      else
                        i_50 = j_50;
                    }
                    t = not_null(i_50);
                  }
                }
              }
            }
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm m_50 = NULL,o_50 = NULL;
              ATerm n_50 = NULL;
              t = SSLgetAnnotations(not_null(a_50));
              {
                n_50 = t;
                if(((m_50 != NULL) && (m_50 != n_50)))
                  _fail(n_50);
                else
                  m_50 = n_50;
              }
              {
                t = not_null(b_50);
                {
                  ATerm q_50 = NULL;
                  t = b_1(t);
                  {
                    o_50 = t;
                    {
                      ATerm r_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(o_50)), not_null(m_50));
                      {
                        r_50 = t;
                        if(((q_50 != NULL) && (q_50 != r_50)))
                          _fail(r_50);
                        else
                          q_50 = r_50;
                      }
                      t = not_null(q_50);
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
  ATerm y_20 = t;
  int z_20 = stack_ptr;
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
        ATerm e_21 = t;
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
            t = e_21;
          }
        return(t);
      }
      t = prod_3(t, z_3, _id, a_4);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm f_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              ATerm f_4 (ATerm t)
              {
                ATerm m_21 = t;
                int n_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(n_21);
                  }
                else
                  {
                    t = m_21;
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
              ATerm o_21 = t;
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
                  t = o_21;
                }
              return(t);
            }
            t = prod_3(t, d_4, injective_alt_0, e_4);
            LocalPopChoice(l_21);
          }
        else
          {
            t = f_21;
            {
              ATerm p_21 = t;
              int q_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm l_4 (ATerm t)
                    {
                      ATerm r_21 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = r_21;
                        }
                      return(t);
                    }
                    t = Cons_2(t, l_4, Nil_0);
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    ATerm s_21 = t;
                    int t_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
                        LocalPopChoice(t_21);
                      }
                    else
                      {
                        t = s_21;
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1(t, j_4);
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm b_23 = t;
                                int c_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1(t, j_4);
                                    LocalPopChoice(c_23);
                                  }
                                else
                                  {
                                    t = b_23;
                                    {
                                      ATerm d_23 = t;
                                      int e_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1(t, j_4);
                                          LocalPopChoice(e_23);
                                        }
                                      else
                                        {
                                          t = d_23;
                                          {
                                            ATerm f_23 = t;
                                            int g_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1(t, j_4);
                                                LocalPopChoice(g_23);
                                              }
                                            else
                                              {
                                                t = f_23;
                                                {
                                                  ATerm i_23 = t;
                                                  int n_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_4 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, j_4, m_4);
                                                      LocalPopChoice(n_23);
                                                    }
                                                  else
                                                    {
                                                      t = i_23;
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
                    ATerm o_23 = t;
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
                        t = o_23;
                      }
                    return(t);
                  }
                  t = prod_3(t, i_4, j_4, k_4);
                  LocalPopChoice(q_21);
                }
              else
                {
                  t = p_21;
                  {
                    ATerm p_23 = t;
                    int q_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
                        v_51 = t;
                        c_51 :
                        if(match_cons(v_51, sym_prod_3))
                          {
                            w_51 = ATgetArgument(v_51, 0);
                            e_52 = ATgetArgument(v_51, 1);
                            h_52 = ATgetArgument(v_51, 2);
                            d_51 :
                            if(((ATgetType(w_51) == AT_LIST) && !(ATisEmpty(w_51))))
                              {
                                x_51 = ATgetFirst((ATermList) w_51);
                                d_52 = (ATerm) ATgetNext((ATermList) w_51);
                                e_51 :
                                if(match_cons(x_51, sym_cf_1))
                                  {
                                    y_51 = ATgetArgument(x_51, 0);
                                    f_51 :
                                    if(match_cons(y_51, sym_iter_sep_2))
                                      {
                                        c_52 = ATgetArgument(y_51, 0);
                                        t_51 = ATgetArgument(y_51, 1);
                                        g_51 :
                                        if(((ATgetType(d_52) == AT_LIST) && ATisEmpty(d_52)))
                                          {
                                            h_51 :
                                            if(match_cons(e_52, sym_cf_1))
                                              {
                                                f_52 = ATgetArgument(e_52, 0);
                                                i_51 :
                                                if(match_cons(f_52, sym_iter_star_sep_2))
                                                  {
                                                    g_52 = ATgetArgument(f_52, 0);
                                                    u_51 = ATgetArgument(f_52, 1);
                                                    j_51 :
                                                    if(match_cons(h_52, sym_no_attrs_0))
                                                      {
                                                        if(((c_52 != NULL) && (c_52 != g_52)))
                                                          _fail(g_52);
                                                        else
                                                          c_52 = g_52;
                                                        if(((t_51 != NULL) && (t_51 != u_51)))
                                                          _fail(u_51);
                                                        else
                                                          t_51 = u_51;
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(y_51, sym_iter_1))
                                          {
                                            c_52 = ATgetArgument(y_51, 0);
                                            k_51 :
                                            if(((ATgetType(d_52) == AT_LIST) && ATisEmpty(d_52)))
                                              {
                                                l_51 :
                                                if(match_cons(e_52, sym_cf_1))
                                                  {
                                                    f_52 = ATgetArgument(e_52, 0);
                                                    m_51 :
                                                    if(match_cons(f_52, sym_iter_star_1))
                                                      {
                                                        g_52 = ATgetArgument(f_52, 0);
                                                        n_51 :
                                                        if(match_cons(h_52, sym_no_attrs_0))
                                                          {
                                                            if(((c_52 != NULL) && (c_52 != g_52)))
                                                              _fail(g_52);
                                                            else
                                                              c_52 = g_52;
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
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
                        LocalPopChoice(q_23);
                      }
                    else
                      {
                        t = p_23;
                        {
                          ATerm r_23 = t;
                          int u_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm q_4 (ATerm t)
                                {
                                  ATerm z_23 = t;
                                  int a_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm l_52 = NULL;
                                      l_52 = t;
                                      o_51 :
                                      if(!(match_string(l_52, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(a_24);
                                    }
                                  else
                                    {
                                      t = z_23;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, q_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, p_4);
                              LocalPopChoice(u_23);
                            }
                          else
                            {
                              t = r_23;
                              {
                                ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
                                m_52 = t;
                                p_51 :
                                if(match_cons(m_52, sym_prod_3))
                                  {
                                    n_52 = ATgetArgument(m_52, 0);
                                    o_52 = ATgetArgument(m_52, 1);
                                    q_52 = ATgetArgument(m_52, 2);
                                    q_51 :
                                    if(match_cons(o_52, sym_sort_1))
                                      {
                                        p_52 = ATgetArgument(o_52, 0);
                                        r_51 :
                                        if(match_string(p_52, "<START>"))
                                          {
                                            s_51 :
                                            if(!(match_cons(q_52, sym_no_attrs_0)))
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
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
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
  y_52 = t;
  v_52 :
  if(match_cons(y_52, sym_appl_2))
    {
      z_52 = ATgetArgument(y_52, 0);
      a_53 = ATgetArgument(y_52, 1);
      w_52 :
      if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
        {
          b_53 = ATgetFirst((ATermList) a_53);
          c_53 = (ATerm) ATgetNext((ATermList) a_53);
          x_52 :
          if(((ATgetType(c_53) == AT_LIST) && ATisEmpty(c_53)))
            {
              {
                t = not_null(z_52);
                t = injection_0(t);
                t = not_null(b_53);
              }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm bottomup_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = bottomup_1(t, d_88);
    return(t);
  }
  t = _all(t, t_4);
  t = d_88(t);
  return(t);
}
ATerm flat_injections_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Inj_0(t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
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
  ATerm k_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_FlatInj_0))
    {
      ATerm m_53 = NULL,o_53 = NULL;
      ATerm d_24;
      d_24 = t;
      {
        ATerm n_53 = NULL;
        t = SSLgetAnnotations(not_null(k_53));
        {
          n_53 = t;
          if(((m_53 != NULL) && (m_53 != n_53)))
            _fail(n_53);
          else
            m_53 = n_53;
        }
      }
      t = d_24;
      {
        ATerm p_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(m_53));
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
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        {
          ATerm w_4 (ATerm t)
          {
            ATerm g_24 = t;
            if((PushChoice() == 0))
              {
                t = lit_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_24;
              }
            return(t);
          }
          t = filter_1(t, w_4);
        }
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
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
  ATerm a_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym_RemoveLit_0))
    {
      ATerm c_54 = NULL,e_54 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm d_54 = NULL;
        t = SSLgetAnnotations(not_null(a_54));
        {
          d_54 = t;
          if(((c_54 != NULL) && (c_54 != d_54)))
            _fail(d_54);
          else
            c_54 = d_54;
        }
      }
      t = h_24;
      {
        ATerm f_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(c_54));
        {
          f_54 = t;
          if(((e_54 != NULL) && (e_54 != f_54)))
            _fail(f_54);
          else
            e_54 = f_54;
        }
        t = not_null(e_54);
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
    ATerm u_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FlatList_0(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = u_24;
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
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  ATerm x_61 (ATerm t)
  {
    ATerm f_58 = NULL;
    ATerm q_59 = NULL;
    ATerm g_62 (ATerm t)
    {
      ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
      g_58 = t;
      b_55 :
      if(match_cons(g_58, sym_appl_2))
        {
          h_58 = ATgetArgument(g_58, 0);
          o_58 = ATgetArgument(g_58, 1);
          c_55 :
          if(match_cons(h_58, sym_prod_3))
            {
              i_58 = ATgetArgument(h_58, 0);
              j_58 = ATgetArgument(h_58, 1);
              n_58 = ATgetArgument(h_58, 2);
              e_55 :
              if(match_cons(j_58, sym_cf_1))
                {
                  k_58 = ATgetArgument(j_58, 0);
                  f_55 :
                  if(match_cons(k_58, sym_iter_sep_2))
                    {
                      l_58 = ATgetArgument(k_58, 0);
                      m_58 = ATgetArgument(k_58, 1);
                      g_55 :
                      if(((ATgetType(o_58) == AT_LIST) && !(ATisEmpty(o_58))))
                        {
                          p_58 = ATgetFirst((ATermList) o_58);
                          q_58 = (ATerm) ATgetNext((ATermList) o_58);
                          h_55 :
                          if(((ATgetType(q_58) == AT_LIST) && ATisEmpty(q_58)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(p_58));
                            }
                          else
                            {
                              if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                                {
                                  r_58 = ATgetFirst((ATermList) q_58);
                                  s_58 = (ATerm) ATgetNext((ATermList) q_58);
                                  i_55 :
                                  if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
                                    {
                                      t_58 = ATgetFirst((ATermList) s_58);
                                      u_58 = (ATerm) ATgetNext((ATermList) s_58);
                                      j_55 :
                                      if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                        {
                                          {
                                            ATerm d_59 = NULL,f_59 = NULL;
                                            ATerm z_24;
                                            z_24 = t;
                                            {
                                              ATerm e_59 = NULL;
                                              t = not_null(p_58);
                                              {
                                                t = g_62(t);
                                                {
                                                  e_59 = t;
                                                  if(((d_59 != NULL) && (d_59 != e_59)))
                                                    _fail(e_59);
                                                  else
                                                    d_59 = e_59;
                                                }
                                              }
                                            }
                                            t = z_24;
                                            {
                                              ATerm g_59 = NULL;
                                              t = not_null(t_58);
                                              {
                                                t = g_62(t);
                                                {
                                                  g_59 = t;
                                                  if(((f_59 != NULL) && (f_59 != g_59)))
                                                    _fail(g_59);
                                                  else
                                                    f_59 = g_59;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_59)), (ATerm) ATinsert(ATempty, not_null(r_58))), not_null(d_59));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(u_58) == AT_LIST) && !(ATisEmpty(u_58))))
                                            {
                                              v_58 = ATgetFirst((ATermList) u_58);
                                              w_58 = (ATerm) ATgetNext((ATermList) u_58);
                                              k_55 :
                                              if(((ATgetType(w_58) == AT_LIST) && !(ATisEmpty(w_58))))
                                                {
                                                  x_58 = ATgetFirst((ATermList) w_58);
                                                  y_58 = (ATerm) ATgetNext((ATermList) w_58);
                                                  l_55 :
                                                  if(((ATgetType(y_58) == AT_LIST) && ATisEmpty(y_58)))
                                                    {
                                                      {
                                                        ATerm m_59 = NULL,o_59 = NULL;
                                                        ATerm d_25;
                                                        d_25 = t;
                                                        {
                                                          ATerm n_59 = NULL;
                                                          t = not_null(p_58);
                                                          {
                                                            t = g_62(t);
                                                            {
                                                              n_59 = t;
                                                              if(((m_59 != NULL) && (m_59 != n_59)))
                                                                _fail(n_59);
                                                              else
                                                                m_59 = n_59;
                                                            }
                                                          }
                                                        }
                                                        t = d_25;
                                                        {
                                                          ATerm p_59 = NULL;
                                                          t = not_null(x_58);
                                                          {
                                                            t = g_62(t);
                                                            {
                                                              p_59 = t;
                                                              if(((o_59 != NULL) && (o_59 != p_59)))
                                                                _fail(p_59);
                                                              else
                                                                o_59 = p_59;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_59)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_58)), not_null(t_58)), not_null(r_58))), not_null(m_59));
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
    t = g_62(t);
    {
      q_59 = t;
      if(((f_58 != NULL) && (f_58 != q_59)))
        _fail(q_59);
      else
        f_58 = q_59;
    }
    t = not_null(f_58);
    return(t);
  }
  ATerm y_61 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(a_58));
    return(t);
  }
  ATerm z_61 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm a_62 (ATerm t)
  {
    t = not_null(a_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm b_62 (ATerm t)
  {
    ATerm a_60 = NULL;
    ATerm o_61 = NULL;
    ATerm p_62 (ATerm t)
    {
      ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,m_60 = NULL,n_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
      b_60 = t;
      u_55 :
      if(match_cons(b_60, sym_appl_2))
        {
          c_60 = ATgetArgument(b_60, 0);
          m_60 = ATgetArgument(b_60, 1);
          v_55 :
          if(match_cons(c_60, sym_prod_3))
            {
              d_60 = ATgetArgument(c_60, 0);
              e_60 = ATgetArgument(c_60, 1);
              h_60 = ATgetArgument(c_60, 2);
              w_55 :
              if(match_cons(e_60, sym_cf_1))
                {
                  f_60 = ATgetArgument(e_60, 0);
                  x_55 :
                  if(match_cons(f_60, sym_iter_1))
                    {
                      g_60 = ATgetArgument(f_60, 0);
                      y_55 :
                      if(((ATgetType(m_60) == AT_LIST) && !(ATisEmpty(m_60))))
                        {
                          n_60 = ATgetFirst((ATermList) m_60);
                          q_60 = (ATerm) ATgetNext((ATermList) m_60);
                          z_55 :
                          if(((ATgetType(q_60) == AT_LIST) && ATisEmpty(q_60)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(n_60));
                            }
                          else
                            {
                              if(((ATgetType(q_60) == AT_LIST) && !(ATisEmpty(q_60))))
                                {
                                  r_60 = ATgetFirst((ATermList) q_60);
                                  s_60 = (ATerm) ATgetNext((ATermList) q_60);
                                  a_56 :
                                  if(((ATgetType(s_60) == AT_LIST) && ATisEmpty(s_60)))
                                    {
                                      {
                                        ATerm d_61 = NULL,f_61 = NULL;
                                        ATerm e_25;
                                        e_25 = t;
                                        {
                                          ATerm e_61 = NULL;
                                          t = not_null(n_60);
                                          {
                                            t = p_62(t);
                                            {
                                              e_61 = t;
                                              if(((d_61 != NULL) && (d_61 != e_61)))
                                                _fail(e_61);
                                              else
                                                d_61 = e_61;
                                            }
                                          }
                                        }
                                        t = e_25;
                                        {
                                          ATerm g_61 = NULL;
                                          t = not_null(r_60);
                                          {
                                            t = p_62(t);
                                            {
                                              g_61 = t;
                                              if(((f_61 != NULL) && (f_61 != g_61)))
                                                _fail(g_61);
                                              else
                                                f_61 = g_61;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_61)), not_null(d_61));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
                                        {
                                          t_60 = ATgetFirst((ATermList) s_60);
                                          u_60 = (ATerm) ATgetNext((ATermList) s_60);
                                          b_56 :
                                          if(((ATgetType(u_60) == AT_LIST) && ATisEmpty(u_60)))
                                            {
                                              {
                                                ATerm k_61 = NULL,m_61 = NULL;
                                                ATerm f_25;
                                                f_25 = t;
                                                {
                                                  ATerm l_61 = NULL;
                                                  t = not_null(n_60);
                                                  {
                                                    t = p_62(t);
                                                    {
                                                      l_61 = t;
                                                      if(((k_61 != NULL) && (k_61 != l_61)))
                                                        _fail(l_61);
                                                      else
                                                        k_61 = l_61;
                                                    }
                                                  }
                                                }
                                                t = f_25;
                                                {
                                                  ATerm n_61 = NULL;
                                                  t = not_null(t_60);
                                                  {
                                                    t = p_62(t);
                                                    {
                                                      n_61 = t;
                                                      if(((m_61 != NULL) && (m_61 != n_61)))
                                                        _fail(n_61);
                                                      else
                                                        m_61 = n_61;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_61)), (ATerm) ATinsert(ATempty, not_null(r_60))), not_null(k_61));
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
    t = p_62(t);
    {
      o_61 = t;
      if(((a_60 != NULL) && (a_60 != o_61)))
        _fail(o_61);
      else
        a_60 = o_61;
    }
    t = not_null(a_60);
    return(t);
  }
  ATerm c_62 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(a_58));
    return(t);
  }
  ATerm d_62 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm e_62 (ATerm t)
  {
    t = not_null(a_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm f_62 (ATerm t)
  {
    ATerm s_61 = NULL,u_61 = NULL;
    ATerm g_25;
    g_25 = t;
    {
      ATerm t_61 = NULL;
      t = SSLgetAnnotations(not_null(c_58));
      {
        t_61 = t;
        if(((s_61 != NULL) && (s_61 != t_61)))
          _fail(t_61);
        else
          s_61 = t_61;
      }
    }
    t = g_25;
    {
      ATerm w_61 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(s_61));
      {
        w_61 = t;
        if(((u_61 != NULL) && (u_61 != w_61)))
          _fail(w_61);
        else
          u_61 = w_61;
      }
      t = not_null(u_61);
    }
    return(t);
  }
  c_58 = t;
  f_56 :
  if(match_cons(c_58, sym_appl_2))
    {
      p_57 = ATgetArgument(c_58, 0);
      z_57 = ATgetArgument(c_58, 1);
      g_56 :
      if(match_cons(p_57, sym_prod_3))
        {
          q_57 = ATgetArgument(p_57, 0);
          v_57 = ATgetArgument(p_57, 1);
          y_57 = ATgetArgument(p_57, 2);
          h_56 :
          if(match_cons(v_57, sym_cf_1))
            {
              w_57 = ATgetArgument(v_57, 0);
              i_56 :
              if(match_cons(w_57, sym_iter_sep_2))
                {
                  x_57 = ATgetArgument(w_57, 0);
                  o_57 = ATgetArgument(w_57, 1);
                  l_56 :
                  if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                    {
                      a_58 = ATgetFirst((ATermList) z_57);
                      b_58 = (ATerm) ATgetNext((ATermList) z_57);
                      m_56 :
                      if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                        {
                          n_56 :
                          {
                            ATerm h_25 = t;
                            int i_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_61(t);
                                LocalPopChoice(i_25);
                              }
                            else
                              {
                                t = h_25;
                                t = y_61(t);
                              }
                          }
                        }
                      else
                        {
                          o_56 :
                          t = x_61(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(w_57, sym_iter_star_sep_2))
                    {
                      x_57 = ATgetArgument(w_57, 0);
                      o_57 = ATgetArgument(w_57, 1);
                      u_56 :
                      if(((ATgetType(q_57) == AT_LIST) && ATisEmpty(q_57)))
                        {
                          w_56 :
                          if(((ATgetType(z_57) == AT_LIST) && ATisEmpty(z_57)))
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
                          if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
                            {
                              r_57 = ATgetFirst((ATermList) q_57);
                              u_57 = (ATerm) ATgetNext((ATermList) q_57);
                              x_56 :
                              if(match_cons(r_57, sym_cf_1))
                                {
                                  s_57 = ATgetArgument(r_57, 0);
                                  y_56 :
                                  if(match_cons(s_57, sym_iter_sep_2))
                                    {
                                      t_57 = ATgetArgument(s_57, 0);
                                      n_57 = ATgetArgument(s_57, 1);
                                      z_56 :
                                      if(((ATgetType(u_57) == AT_LIST) && ATisEmpty(u_57)))
                                        {
                                          a_57 :
                                          if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                                            {
                                              a_58 = ATgetFirst((ATermList) z_57);
                                              b_58 = (ATerm) ATgetNext((ATermList) z_57);
                                              b_57 :
                                              if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                                                {
                                                  t = a_62(t);
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
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
                      if(match_cons(w_57, sym_iter_1))
                        {
                          x_57 = ATgetArgument(w_57, 0);
                          c_57 :
                          if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                            {
                              a_58 = ATgetFirst((ATermList) z_57);
                              b_58 = (ATerm) ATgetNext((ATermList) z_57);
                              d_57 :
                              if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                                {
                                  e_57 :
                                  {
                                    ATerm j_25 = t;
                                    int k_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = b_62(t);
                                        LocalPopChoice(k_25);
                                      }
                                    else
                                      {
                                        t = j_25;
                                        t = c_62(t);
                                      }
                                  }
                                }
                              else
                                {
                                  f_57 :
                                  t = b_62(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(w_57, sym_iter_star_1))
                            {
                              x_57 = ATgetArgument(w_57, 0);
                              g_57 :
                              if(((ATgetType(q_57) == AT_LIST) && ATisEmpty(q_57)))
                                {
                                  h_57 :
                                  if(((ATgetType(z_57) == AT_LIST) && ATisEmpty(z_57)))
                                    {
                                      t = d_62(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
                                    {
                                      r_57 = ATgetFirst((ATermList) q_57);
                                      u_57 = (ATerm) ATgetNext((ATermList) q_57);
                                      i_57 :
                                      if(match_cons(r_57, sym_cf_1))
                                        {
                                          s_57 = ATgetArgument(r_57, 0);
                                          j_57 :
                                          if(match_cons(s_57, sym_iter_1))
                                            {
                                              t_57 = ATgetArgument(s_57, 0);
                                              k_57 :
                                              if(((ATgetType(u_57) == AT_LIST) && ATisEmpty(u_57)))
                                                {
                                                  l_57 :
                                                  if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                                                    {
                                                      a_58 = ATgetFirst((ATermList) z_57);
                                                      b_58 = (ATerm) ATgetNext((ATermList) z_57);
                                                      m_57 :
                                                      if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                                                        {
                                                          t = e_62(t);
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
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
      if(match_cons(c_58, sym_FlatList_0))
        {
          t = f_62(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm d_63 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        t = d_63(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = d_87(t);
      }
    return(t);
  }
  t = d_63(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_87 (ATerm))
{
  t = repeat_2(t, f_87, _id);
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
  ATerm g_63 = NULL;
  g_63 = t;
  f_63 :
  if(((ATgetType(g_63) == AT_LIST) && ATisEmpty(g_63)))
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
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  k_63 :
  if(((ATgetType(l_63) == AT_LIST) && !(ATisEmpty(l_63))))
    {
      m_63 = ATgetFirst((ATermList) l_63);
      n_63 = (ATerm) ATgetNext((ATermList) l_63);
      {
        ATerm q_63 = NULL;
        ATerm r_63 = NULL;
        t = not_null(n_63);
        {
          t = De_Escape_0(t);
          {
            r_63 = t;
            if(((q_63 != NULL) && (q_63 != r_63)))
              _fail(r_63);
            else
              q_63 = r_63;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(q_63)), not_null(m_63));
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
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
  a_64 = t;
  w_63 :
  if(((ATgetType(a_64) == AT_LIST) && !(ATisEmpty(a_64))))
    {
      b_64 = ATgetFirst((ATermList) a_64);
      c_64 = (ATerm) ATgetNext((ATermList) a_64);
      x_63 :
      if(match_int(b_64, 92))
        {
          y_63 :
          if(((ATgetType(c_64) == AT_LIST) && !(ATisEmpty(c_64))))
            {
              d_64 = ATgetFirst((ATermList) c_64);
              e_64 = (ATerm) ATgetNext((ATermList) c_64);
              z_63 :
              if(match_int(d_64, 92))
                {
                  ATerm n_64 = NULL;
                  ATerm o_64 = NULL;
                  t = not_null(e_64);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_64)), term_p_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
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
              a_65 = ATgetFirst((ATermList) z_64);
              b_65 = (ATerm) ATgetNext((ATermList) z_64);
              w_64 :
              if(match_int(a_65, 34))
                {
                  ATerm d_65 = NULL;
                  ATerm e_65 = NULL;
                  t = not_null(b_65);
                  {
                    t = De_Escape_0(t);
                    {
                      e_65 = t;
                      if(((d_65 != NULL) && (d_65 != e_65)))
                        _fail(e_65);
                      else
                        d_65 = e_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_65)), term_u_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm x_25 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(b_26);
          }
        else
          {
            t = x_25;
            {
              ATerm c_26 = t;
              int d_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(d_26);
                }
              else
                {
                  t = c_26;
                  {
                    ATerm j_65 = NULL;
                    j_65 = t;
                    i_65 :
                    if(((ATgetType(j_65) == AT_LIST) && ATisEmpty(j_65)))
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
ATerm at_last_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm l_65 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = f_95(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = Cons_2(t, _id, l_65);
      }
    return(t);
  }
  t = l_65(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  n_65 :
  if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
    {
      p_65 = ATgetFirst((ATermList) o_65);
      q_65 = (ATerm) ATgetNext((ATermList) o_65);
      t = not_null(q_65);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  u_65 :
  if(((ATgetType(v_65) == AT_LIST) && !(ATisEmpty(v_65))))
    {
      w_65 = ATgetFirst((ATermList) v_65);
      x_65 = (ATerm) ATgetNext((ATermList) v_65);
      t = not_null(w_65);
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
    ATerm g_26;
    g_26 = t;
    {
      ATerm f_66 = NULL;
      t = Hd_0(t);
      {
        f_66 = t;
        a_66 :
        if(!(match_int(f_66, 34)))
          {
            _fail(t);
          }
      }
    }
    t = g_26;
    {
      t = Tl_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
          g_66 = t;
          c_66 :
          if(((ATgetType(g_66) == AT_LIST) && !(ATisEmpty(g_66))))
            {
              h_66 = ATgetFirst((ATermList) g_66);
              i_66 = (ATerm) ATgetNext((ATermList) g_66);
              d_66 :
              if(match_int(h_66, 34))
                {
                  e_66 :
                  if(((ATgetType(i_66) == AT_LIST) && ATisEmpty(i_66)))
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
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  j_68 = t;
  f_68 :
  if(match_cons(j_68, sym_cf_1))
    {
      h_68 = ATgetArgument(j_68, 0);
      {
        ATerm l_68 = NULL;
        ATerm m_68 = NULL;
        t = not_null(h_68);
        {
          t = PpSym_0(t);
          {
            m_68 = t;
            if(((l_68 != NULL) && (l_68 != m_68)))
              _fail(m_68);
            else
              l_68 = m_68;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_26)), not_null(l_68)), (ATerm) ATinsert(ATempty, term_r_26));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(j_68, sym_lex_1))
        {
          h_68 = ATgetArgument(j_68, 0);
          {
            ATerm o_68 = NULL;
            ATerm p_68 = NULL;
            t = not_null(h_68);
            {
              t = PpSym_0(t);
              {
                p_68 = t;
                if(((o_68 != NULL) && (o_68 != p_68)))
                  _fail(p_68);
                else
                  o_68 = p_68;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_26)), not_null(o_68)), (ATerm) ATinsert(ATempty, term_r_26));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(j_68, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_u_26);
            }
          else
            {
              if(match_cons(j_68, sym_seq_2))
                {
                  h_68 = ATgetArgument(j_68, 0);
                  i_68 = ATgetArgument(j_68, 1);
                  {
                    ATerm s_68 = NULL;
                    ATerm t_68 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(i_68)), not_null(h_68));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        t_68 = t;
                        if(((s_68 != NULL) && (s_68 != t_68)))
                          _fail(t_68);
                        else
                          s_68 = t_68;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_26)), not_null(s_68)), (ATerm) ATinsert(ATempty, term_v_26));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(j_68, sym_opt_1))
                    {
                      h_68 = ATgetArgument(j_68, 0);
                      {
                        t = not_null(h_68);
                        {
                          t = PpSym_0(t);
                          {
                            ATerm a_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_x_26);
                              return(t);
                            }
                            t = at_end_1(t, a_5);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_68, sym_iter_1))
                        {
                          h_68 = ATgetArgument(j_68, 0);
                          {
                            t = not_null(h_68);
                            {
                              t = PpSym_0(t);
                              {
                                ATerm b_5 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_y_26);
                                  return(t);
                                }
                                t = at_end_1(t, b_5);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(j_68, sym_iter_star_1))
                            {
                              h_68 = ATgetArgument(j_68, 0);
                              {
                                t = not_null(h_68);
                                {
                                  t = PpSym_0(t);
                                  {
                                    ATerm c_5 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_z_26);
                                      return(t);
                                    }
                                    t = at_end_1(t, c_5);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(j_68, sym_iter_sep_2))
                                {
                                  h_68 = ATgetArgument(j_68, 0);
                                  i_68 = ATgetArgument(j_68, 1);
                                  {
                                    ATerm z_68 = NULL,b_69 = NULL;
                                    ATerm a_27;
                                    a_27 = t;
                                    {
                                      ATerm a_69 = NULL;
                                      t = not_null(h_68);
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
                                    }
                                    t = a_27;
                                    {
                                      ATerm c_69 = NULL;
                                      t = not_null(i_68);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          c_69 = t;
                                          if(((b_69 != NULL) && (b_69 != c_69)))
                                            _fail(c_69);
                                          else
                                            b_69 = c_69;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_27)), not_null(b_69)), not_null(z_68)), (ATerm) ATinsert(ATempty, term_b_27));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_68, sym_iter_star_sep_2))
                                    {
                                      h_68 = ATgetArgument(j_68, 0);
                                      i_68 = ATgetArgument(j_68, 1);
                                      {
                                        ATerm f_69 = NULL,h_69 = NULL;
                                        ATerm d_27;
                                        d_27 = t;
                                        {
                                          ATerm g_69 = NULL;
                                          t = not_null(h_68);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              g_69 = t;
                                              if(((f_69 != NULL) && (f_69 != g_69)))
                                                _fail(g_69);
                                              else
                                                f_69 = g_69;
                                            }
                                          }
                                        }
                                        t = d_27;
                                        {
                                          ATerm i_69 = NULL;
                                          t = not_null(i_68);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              i_69 = t;
                                              if(((h_69 != NULL) && (h_69 != i_69)))
                                                _fail(i_69);
                                              else
                                                h_69 = i_69;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_27)), not_null(h_69)), not_null(f_69)), (ATerm) ATinsert(ATempty, term_b_27));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_68, sym_iter_n_2))
                                        {
                                          h_68 = ATgetArgument(j_68, 0);
                                          i_68 = ATgetArgument(j_68, 1);
                                          {
                                            ATerm k_69 = NULL;
                                            ATerm l_69 = NULL;
                                            t = not_null(h_68);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                l_69 = t;
                                                if(((k_69 != NULL) && (k_69 != l_69)))
                                                  _fail(l_69);
                                                else
                                                  k_69 = l_69;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_27)), not_null(k_69));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_68, sym_iter_sep_n_3))
                                            {
                                              h_68 = ATgetArgument(j_68, 0);
                                              i_68 = ATgetArgument(j_68, 1);
                                              g_68 = ATgetArgument(j_68, 2);
                                              {
                                                ATerm o_69 = NULL,q_69 = NULL;
                                                ATerm g_27;
                                                g_27 = t;
                                                {
                                                  ATerm p_69 = NULL;
                                                  t = not_null(h_68);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      p_69 = t;
                                                      if(((o_69 != NULL) && (o_69 != p_69)))
                                                        _fail(p_69);
                                                      else
                                                        o_69 = p_69;
                                                    }
                                                  }
                                                }
                                                t = g_27;
                                                {
                                                  ATerm r_69 = NULL;
                                                  t = not_null(i_68);
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
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_27)), not_null(q_69)), not_null(o_69));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(j_68, sym_set_1))
                                                {
                                                  h_68 = ATgetArgument(j_68, 0);
                                                  {
                                                    ATerm t_69 = NULL;
                                                    ATerm u_69 = NULL;
                                                    t = not_null(h_68);
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
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_69)), (ATerm) ATinsert(ATempty, term_h_27));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(j_68, sym_pair_2))
                                                    {
                                                      h_68 = ATgetArgument(j_68, 0);
                                                      i_68 = ATgetArgument(j_68, 1);
                                                      {
                                                        ATerm w_70 = NULL,y_70 = NULL;
                                                        ATerm i_27;
                                                        i_27 = t;
                                                        {
                                                          ATerm x_70 = NULL;
                                                          t = not_null(h_68);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              x_70 = t;
                                                              if(((w_70 != NULL) && (w_70 != x_70)))
                                                                _fail(x_70);
                                                              else
                                                                w_70 = x_70;
                                                            }
                                                          }
                                                        }
                                                        t = i_27;
                                                        {
                                                          ATerm z_70 = NULL;
                                                          t = not_null(i_68);
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
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_70)), (ATerm) ATinsert(ATempty, term_n_27)), not_null(w_70));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(j_68, sym_func_2))
                                                        {
                                                          h_68 = ATgetArgument(j_68, 0);
                                                          i_68 = ATgetArgument(j_68, 1);
                                                          {
                                                            ATerm i_71 = NULL,k_71 = NULL;
                                                            ATerm o_27;
                                                            o_27 = t;
                                                            {
                                                              ATerm j_71 = NULL;
                                                              t = not_null(h_68);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    j_71 = t;
                                                                    if(((i_71 != NULL) && (i_71 != j_71)))
                                                                      _fail(j_71);
                                                                    else
                                                                      i_71 = j_71;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = o_27;
                                                            {
                                                              ATerm l_71 = NULL;
                                                              t = not_null(i_68);
                                                              {
                                                                t = PpSym_0(t);
                                                                {
                                                                  l_71 = t;
                                                                  if(((k_71 != NULL) && (k_71 != l_71)))
                                                                    _fail(l_71);
                                                                  else
                                                                    k_71 = l_71;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_71)), (ATerm) ATinsert(ATempty, term_p_27)), not_null(i_71));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(j_68, sym_alt_2))
                                                            {
                                                              h_68 = ATgetArgument(j_68, 0);
                                                              i_68 = ATgetArgument(j_68, 1);
                                                              {
                                                                ATerm o_71 = NULL,q_71 = NULL;
                                                                ATerm t_27;
                                                                t_27 = t;
                                                                {
                                                                  ATerm p_71 = NULL;
                                                                  t = not_null(h_68);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      p_71 = t;
                                                                      if(((o_71 != NULL) && (o_71 != p_71)))
                                                                        _fail(p_71);
                                                                      else
                                                                        o_71 = p_71;
                                                                    }
                                                                  }
                                                                }
                                                                t = t_27;
                                                                {
                                                                  ATerm r_71 = NULL;
                                                                  t = not_null(i_68);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      r_71 = t;
                                                                      if(((q_71 != NULL) && (q_71 != r_71)))
                                                                        _fail(r_71);
                                                                      else
                                                                        q_71 = r_71;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_71)), (ATerm) ATinsert(ATempty, term_v_27)), not_null(o_71));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(j_68, sym_perm_1))
                                                                {
                                                                  h_68 = ATgetArgument(j_68, 0);
                                                                  {
                                                                    ATerm t_71 = NULL;
                                                                    ATerm u_71 = NULL;
                                                                    t = not_null(h_68);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          u_71 = t;
                                                                          if(((t_71 != NULL) && (t_71 != u_71)))
                                                                            _fail(u_71);
                                                                          else
                                                                            t_71 = u_71;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(t_71)), term_y_27);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(j_68, sym_sort_1))
                                                                    {
                                                                      h_68 = ATgetArgument(j_68, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(h_68));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_68, sym_lit_1))
                                                                        {
                                                                          h_68 = ATgetArgument(j_68, 0);
                                                                          {
                                                                            ATerm x_71 = NULL;
                                                                            ATerm y_71 = NULL;
                                                                            t = not_null(h_68);
                                                                            {
                                                                              ATerm z_27 = t;
                                                                              int a_28 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = de_quote_0(t);
                                                                                  t = de_escape_0(t);
                                                                                  LocalPopChoice(a_28);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_27;
                                                                                  {
                                                                                  }
                                                                                }
                                                                              {
                                                                                y_71 = t;
                                                                                if(((x_71 != NULL) && (x_71 != y_71)))
                                                                                  _fail(y_71);
                                                                                else
                                                                                  x_71 = y_71;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(x_71));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_68, sym_label_2))
                                                                            {
                                                                              h_68 = ATgetArgument(j_68, 0);
                                                                              i_68 = ATgetArgument(j_68, 1);
                                                                              {
                                                                                ATerm a_72 = NULL;
                                                                                ATerm b_72 = NULL;
                                                                                t = not_null(h_68);
                                                                                {
                                                                                  ATerm b_28 = t;
                                                                                  int c_28 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = de_quote_0(t);
                                                                                      t = de_escape_0(t);
                                                                                      LocalPopChoice(c_28);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_28;
                                                                                      {
                                                                                      }
                                                                                    }
                                                                                  {
                                                                                    b_72 = t;
                                                                                    if(((a_72 != NULL) && (a_72 != b_72)))
                                                                                      _fail(b_72);
                                                                                    else
                                                                                      a_72 = b_72;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(a_72));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_68, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_d_28);
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
        ATerm e_28 = t;
        int j_28 = stack_ptr;
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
            LocalPopChoice(j_28);
          }
        else
          {
            t = e_28;
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
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL;
  ATerm o_77 (ATerm t)
  {
    ATerm o_76 = NULL,v_76 = NULL;
    ATerm k_28;
    k_28 = t;
    {
      ATerm p_76 = NULL,q_76 = NULL;
      t = not_null(e_76);
      {
        p_76 = t;
        m_75 :
        if(match_cons(p_76, sym_cf_1))
          {
            q_76 = ATgetArgument(p_76, 0);
            {
              ATerm s_76 = NULL,u_76 = NULL;
              t = not_null(q_76);
              {
                ATerm l_28 = t;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_28;
                  }
                {
                  ATerm t_76 = NULL;
                  t = PpSym_0(t);
                  {
                    t_76 = t;
                    if(((s_76 != NULL) && (s_76 != t_76)))
                      _fail(t_76);
                    else
                      s_76 = t_76;
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_28)), not_null(s_76)), (ATerm) ATinsert(ATempty, term_m_28));
                    {
                      t = concat_0(t);
                      {
                        t = concat_strings_0(t);
                        {
                          u_76 = t;
                          if(((o_76 != NULL) && (o_76 != u_76)))
                            _fail(u_76);
                          else
                            o_76 = u_76;
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
    t = k_28;
    {
      t = SSL_mkterm(not_null(o_76), not_null(h_76));
      {
        v_76 = t;
        t = not_null(v_76);
      }
    }
    return(t);
  }
  ATerm p_77 (ATerm t)
  {
    ATerm a_77 = NULL,f_77 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm b_77 = NULL,c_77 = NULL;
      t = not_null(e_76);
      {
        b_77 = t;
        q_75 :
        if(match_cons(b_77, sym_cf_1))
          {
            c_77 = ATgetArgument(b_77, 0);
            {
              ATerm e_77 = NULL;
              t = not_null(c_77);
              {
                t = sort_1(t, _id);
                {
                  t = PpSym_0(t);
                  {
                    t = concat_strings_0(t);
                    {
                      e_77 = t;
                      if(((a_77 != NULL) && (a_77 != e_77)))
                        _fail(e_77);
                      else
                        a_77 = e_77;
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
    t = n_28;
    {
      t = SSL_mkterm(not_null(a_77), not_null(h_76));
      {
        f_77 = t;
        t = not_null(f_77);
      }
    }
    return(t);
  }
  ATerm q_77 (ATerm t)
  {
    t = not_null(i_76);
    return(t);
  }
  ATerm r_77 (ATerm t)
  {
    ATerm k_77 = NULL,m_77 = NULL;
    ATerm o_28;
    o_28 = t;
    {
      ATerm l_77 = NULL;
      t = SSLgetAnnotations(not_null(k_76));
      {
        l_77 = t;
        if(((k_77 != NULL) && (k_77 != l_77)))
          _fail(l_77);
        else
          k_77 = l_77;
      }
    }
    t = o_28;
    {
      ATerm n_77 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(k_77));
      {
        n_77 = t;
        if(((m_77 != NULL) && (m_77 != n_77)))
          _fail(n_77);
        else
          m_77 = n_77;
      }
      t = not_null(m_77);
    }
    return(t);
  }
  k_76 = t;
  u_75 :
  if(match_cons(k_76, sym_appl_2))
    {
      c_76 = ATgetArgument(k_76, 0);
      h_76 = ATgetArgument(k_76, 1);
      v_75 :
      if(match_cons(c_76, sym_prod_3))
        {
          d_76 = ATgetArgument(c_76, 0);
          e_76 = ATgetArgument(c_76, 1);
          g_76 = ATgetArgument(c_76, 2);
          w_75 :
          if(((ATgetType(h_76) == AT_LIST) && !(ATisEmpty(h_76))))
            {
              i_76 = ATgetFirst((ATermList) h_76);
              j_76 = (ATerm) ATgetNext((ATermList) h_76);
              x_75 :
              if(((ATgetType(j_76) == AT_LIST) && ATisEmpty(j_76)))
                {
                  y_75 :
                  if(match_cons(e_76, sym_sort_1))
                    {
                      f_76 = ATgetArgument(e_76, 0);
                      z_75 :
                      if(match_string(f_76, "<START>"))
                        {
                          ATerm p_28 = t;
                          int q_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_77(t);
                              LocalPopChoice(q_28);
                            }
                          else
                            {
                              t = p_28;
                              {
                                ATerm r_28 = t;
                                int s_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_77(t);
                                    LocalPopChoice(s_28);
                                  }
                                else
                                  {
                                    t = r_28;
                                    t = q_77(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          ATerm f_29 = t;
                          int g_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = o_77(t);
                              LocalPopChoice(g_29);
                            }
                          else
                            {
                              t = f_29;
                              t = p_77(t);
                            }
                        }
                    }
                  else
                    {
                      ATerm h_29 = t;
                      int i_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_77(t);
                          LocalPopChoice(i_29);
                        }
                      else
                        {
                          t = h_29;
                          t = p_77(t);
                        }
                    }
                }
              else
                {
                  a_76 :
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_77(t);
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        t = p_77(t);
                      }
                  }
                }
            }
          else
            {
              b_76 :
              {
                ATerm l_29 = t;
                int m_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = o_77(t);
                    LocalPopChoice(m_29);
                  }
                else
                  {
                    t = l_29;
                    t = p_77(t);
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
      if(match_cons(k_76, sym_ApplToSort_0))
        {
          t = r_77(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm i_78 = NULL,j_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_cons(i_78, sym_layout_1))
    {
      j_78 = ATgetArgument(i_78, 0);
      {
        ATerm n_78 = NULL,p_78 = NULL;
        ATerm o_78 = NULL;
        t = SSLgetAnnotations(not_null(i_78));
        {
          o_78 = t;
          if(((n_78 != NULL) && (n_78 != o_78)))
            _fail(o_78);
          else
            n_78 = o_78;
        }
        {
          t = not_null(j_78);
          {
            ATerm r_78 = NULL;
            t = b_73(t);
            {
              p_78 = t;
              {
                ATerm s_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(p_78)), not_null(n_78));
                {
                  s_78 = t;
                  if(((r_78 != NULL) && (r_78 != s_78)))
                    _fail(s_78);
                  else
                    r_78 = s_78;
                }
                t = not_null(r_78);
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
        ATerm n_29 = t;
        int o_29 = stack_ptr;
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
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
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
        ATerm t_29 = t;
        int u_29 = stack_ptr;
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
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
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
  ATerm v_29 = t;
  int w_29 = stack_ptr;
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
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, j_5);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_101 (ATerm))
{
  ATerm z_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = z_29;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              t = filter_1(t, w_101);
              return(t);
            }
            t = Cons_2(t, w_101, k_5);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
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
                    t = filter_1(t, w_101);
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
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_82 = NULL,w_82 = NULL;
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
                ATerm y_82 = NULL;
                t = v_0(t);
                {
                  w_82 = t;
                  {
                    t = not_null(o_82);
                    {
                      ATerm a_83 = NULL;
                      t = w_0(t);
                      {
                        y_82 = t;
                        {
                          t = not_null(p_82);
                          {
                            ATerm c_83 = NULL;
                            t = x_0(t);
                            {
                              a_83 = t;
                              {
                                ATerm d_83 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(w_82), not_null(y_82), not_null(a_83)), not_null(u_82));
                                {
                                  d_83 = t;
                                  if(((c_83 != NULL) && (c_83 != d_83)))
                                    _fail(d_83);
                                  else
                                    c_83 = d_83;
                                }
                                t = not_null(c_83);
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
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm i_83 = NULL,k_83 = NULL;
              ATerm j_83 = NULL;
              t = SSLgetAnnotations(not_null(m_82));
              {
                j_83 = t;
                if(((i_83 != NULL) && (i_83 != j_83)))
                  _fail(j_83);
                else
                  i_83 = j_83;
              }
              {
                t = not_null(n_82);
                {
                  ATerm m_83 = NULL;
                  t = v_0(t);
                  {
                    k_83 = t;
                    {
                      t = not_null(o_82);
                      {
                        ATerm o_83 = NULL;
                        t = w_0(t);
                        {
                          m_83 = t;
                          {
                            t = not_null(p_82);
                            {
                              ATerm q_83 = NULL;
                              t = x_0(t);
                              {
                                o_83 = t;
                                {
                                  ATerm r_83 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(k_83), not_null(m_83), not_null(o_83)), not_null(i_83));
                                  {
                                    r_83 = t;
                                    if(((q_83 != NULL) && (q_83 != r_83)))
                                      _fail(r_83);
                                    else
                                      q_83 = r_83;
                                  }
                                  t = not_null(q_83);
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
ATerm topdown_1 (ATerm t, ATerm c_88 (ATerm))
{
  t = c_88(t);
  {
    ATerm l_5 (ATerm t)
    {
      t = topdown_1(t, c_88);
      return(t);
    }
    t = _all(t, l_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 (ATerm t)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm q_5 (ATerm t)
            {
              ATerm j_30 = t;
              if((PushChoice() == 0))
                {
                  t = j_86(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_30;
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
            ATerm k_30 = t;
            if((PushChoice() == 0))
              {
                t = j_86(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_30;
              }
            return(t);
          }
          t = filter_1(t, r_5);
          return(t);
        }
        t = appl_2(t, n_5, o_5);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
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
  ATerm i_84 = NULL;
  i_84 = t;
  h_84 :
  if(match_cons(i_84, sym_RemoveLayout_0))
    {
      ATerm k_84 = NULL,m_84 = NULL;
      ATerm l_30;
      l_30 = t;
      {
        ATerm l_84 = NULL;
        t = SSLgetAnnotations(not_null(i_84));
        {
          l_84 = t;
          if(((k_84 != NULL) && (k_84 != l_84)))
            _fail(l_84);
          else
            k_84 = l_84;
        }
      }
      t = l_30;
      {
        ATerm n_84 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(k_84));
        {
          n_84 = t;
          if(((m_84 != NULL) && (m_84 != n_84)))
            _fail(n_84);
          else
            m_84 = n_84;
        }
        t = not_null(m_84);
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
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  b_85 = t;
  u_84 :
  if(match_cons(b_85, sym_appl_2))
    {
      c_85 = ATgetArgument(b_85, 0);
      i_85 = ATgetArgument(b_85, 1);
      v_84 :
      if(match_cons(c_85, sym_prod_3))
        {
          d_85 = ATgetArgument(c_85, 0);
          e_85 = ATgetArgument(c_85, 1);
          h_85 = ATgetArgument(c_85, 2);
          w_84 :
          if(match_cons(e_85, sym_cf_1))
            {
              f_85 = ATgetArgument(e_85, 0);
              x_84 :
              if(match_cons(f_85, sym_layout_0))
                {
                  t = not_null(i_85);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(f_85, sym_opt_1))
                    {
                      g_85 = ATgetArgument(f_85, 0);
                      y_84 :
                      if(match_cons(g_85, sym_layout_0))
                        {
                          z_84 :
                          if(((ATgetType(i_85) == AT_LIST) && ATisEmpty(i_85)))
                            {
                              t = term_m_30;
                            }
                          else
                            {
                              if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
                                {
                                  j_85 = ATgetFirst((ATermList) i_85);
                                  k_85 = (ATerm) ATgetNext((ATermList) i_85);
                                  a_85 :
                                  if(((ATgetType(k_85) == AT_LIST) && ATisEmpty(k_85)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(j_85)));
                                    }
                                  else
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
  ATerm r_85 = NULL;
  r_85 = t;
  t = (ATerm) ATinsert(ATempty, not_null(r_85));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,p_86 = NULL;
  l_86 = t;
  k_86 :
  if(match_cons(l_86, sym_appl_2))
    {
      m_86 = ATgetArgument(l_86, 0);
      p_86 = ATgetArgument(l_86, 1);
      {
        t = not_null(p_86);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym_appl_2))
    {
      a_87 = ATgetArgument(z_86, 0);
      b_87 = ATgetArgument(z_86, 1);
      {
        ATerm j_87 = NULL,l_87 = NULL;
        ATerm k_87 = NULL;
        t = SSLgetAnnotations(not_null(z_86));
        {
          k_87 = t;
          if(((j_87 != NULL) && (j_87 != k_87)))
            _fail(k_87);
          else
            j_87 = k_87;
        }
        {
          t = not_null(a_87);
          {
            ATerm n_87 = NULL;
            t = f_79(t);
            {
              l_87 = t;
              {
                t = not_null(b_87);
                {
                  ATerm p_87 = NULL;
                  t = g_79(t);
                  {
                    n_87 = t;
                    {
                      ATerm q_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(l_87), not_null(n_87)), not_null(j_87));
                      {
                        q_87 = t;
                        if(((p_87 != NULL) && (p_87 != q_87)))
                          _fail(q_87);
                        else
                          p_87 = q_87;
                      }
                      t = not_null(p_87);
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
  ATerm w_87 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, w_87);
          return(t);
        }
        t = appl_2(t, _id, s_5);
        t = Kids_0(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = w_87(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,u_89 = NULL;
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
  m_89 = t;
  q_88 :
  if(match_cons(m_89, sym_appl_2))
    {
      n_89 = ATgetArgument(m_89, 0);
      u_89 = ATgetArgument(m_89, 1);
      r_88 :
      if(match_cons(n_89, sym_prod_3))
        {
          o_89 = ATgetArgument(n_89, 0);
          p_89 = ATgetArgument(n_89, 1);
          r_89 = ATgetArgument(n_89, 2);
          s_88 :
          if(match_cons(p_89, sym_cf_1))
            {
              q_89 = ATgetArgument(p_89, 0);
              t_88 :
              if(((ATgetType(o_89) == AT_LIST) && !(ATisEmpty(o_89))))
                {
                  g_89 = ATgetFirst((ATermList) o_89);
                  i_89 = (ATerm) ATgetNext((ATermList) o_89);
                  u_88 :
                  if(match_cons(g_89, sym_lex_1))
                    {
                      h_89 = ATgetArgument(g_89, 0);
                      v_88 :
                      if(((ATgetType(i_89) == AT_LIST) && ATisEmpty(i_89)))
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
              if(match_cons(p_89, sym_lex_1))
                {
                  q_89 = ATgetArgument(p_89, 0);
                  w_88 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(p_89, sym_lit_1))
                    {
                      q_89 = ATgetArgument(p_89, 0);
                      x_88 :
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
                      if(match_cons(p_89, sym_varsym_1))
                        {
                          q_89 = ATgetArgument(p_89, 0);
                          y_88 :
                          if(match_cons(q_89, sym_cf_1))
                            {
                              j_89 = ATgetArgument(q_89, 0);
                              z_88 :
                              if(match_cons(j_89, sym_iter_star_1))
                                {
                                  k_89 = ATgetArgument(j_89, 0);
                                  a_89 :
                                  {
                                    ATerm p_30 = t;
                                    int q_30 = stack_ptr;
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
                                        LocalPopChoice(q_30);
                                      }
                                    else
                                      {
                                        t = p_30;
                                        t = o_90(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_89, sym_iter_star_sep_2))
                                    {
                                      k_89 = ATgetArgument(j_89, 0);
                                      l_89 = ATgetArgument(j_89, 1);
                                      b_89 :
                                      {
                                        ATerm r_30 = t;
                                        int s_30 = stack_ptr;
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
                                            LocalPopChoice(s_30);
                                          }
                                        else
                                          {
                                            t = r_30;
                                            t = o_90(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_89, sym_iter_1))
                                        {
                                          k_89 = ATgetArgument(j_89, 0);
                                          c_89 :
                                          {
                                            ATerm t_30 = t;
                                            int l_32 = stack_ptr;
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
                                                LocalPopChoice(l_32);
                                              }
                                            else
                                              {
                                                t = t_30;
                                                t = o_90(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_89, sym_iter_sep_2))
                                            {
                                              k_89 = ATgetArgument(j_89, 0);
                                              l_89 = ATgetArgument(j_89, 1);
                                              d_89 :
                                              {
                                                ATerm m_32 = t;
                                                int n_32 = stack_ptr;
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
                                                    LocalPopChoice(n_32);
                                                  }
                                                else
                                                  {
                                                    t = m_32;
                                                    t = o_90(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              e_89 :
                                              t = o_90(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              f_89 :
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
ATerm downup2_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm v_90 (ATerm t)
  {
    t = j_88(t);
    {
      t = _all(t, v_90);
      t = k_88(t);
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
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        {
        }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = flat_layout_0(t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
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
      ATerm s_32;
      s_32 = t;
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
      t = s_32;
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
  ATerm l_91 = NULL;
  l_91 = t;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 (ATerm t)
        {
          t = fetch_1(t, FlatLex_0);
          return(t);
        }
        t = _2(t, w_5, flat_lex_0);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
        }
      }
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
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
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
          }
        }
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              t = fetch_1(t, ApplToSort_0);
              return(t);
            }
            t = _2(t, z_5, appl_to_sort_0);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
            }
          }
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 (ATerm t)
              {
                t = fetch_1(t, FlatList_0);
                return(t);
              }
              t = _2(t, a_6, flat_list_0);
              LocalPopChoice(a_33);
            }
          else
            {
              t = z_32;
              {
              }
            }
          {
            ATerm b_33 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_6 (ATerm t)
                {
                  t = fetch_1(t, RemoveLit_0);
                  return(t);
                }
                t = _2(t, b_6, remove_lit_0);
                LocalPopChoice(c_33);
              }
            else
              {
                t = b_33;
                {
                }
              }
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_6 (ATerm t)
                  {
                    t = fetch_1(t, FlatInj_0);
                    return(t);
                  }
                  t = _2(t, c_6, flat_injections_0);
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  {
                  }
                }
              {
                ATerm f_33 = t;
                int g_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_6 (ATerm t)
                    {
                      t = fetch_1(t, FlatAlt_0);
                      return(t);
                    }
                    t = _2(t, d_6, flat_alt_0);
                    LocalPopChoice(g_33);
                  }
                else
                  {
                    t = f_33;
                    {
                    }
                  }
                {
                  ATerm h_33 = t;
                  int i_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_6 (ATerm t)
                      {
                        t = fetch_1(t, ReplaceAppl_0);
                        return(t);
                      }
                      t = _2(t, e_6, replace_appl_0);
                      LocalPopChoice(i_33);
                    }
                  else
                    {
                      t = h_33;
                      {
                      }
                    }
                  {
                    ATerm j_33 = t;
                    int k_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_6 (ATerm t)
                        {
                          t = fetch_1(t, RemoveSeq_0);
                          return(t);
                        }
                        t = _2(t, f_6, remove_seq_0);
                        LocalPopChoice(k_33);
                      }
                    else
                      {
                        t = j_33;
                        {
                        }
                      }
                    {
                      ATerm l_33 = t;
                      int m_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_6 (ATerm t)
                          {
                            t = fetch_1(t, RemovePT_0);
                            return(t);
                          }
                          t = _2(t, g_6, PT_0);
                          LocalPopChoice(m_33);
                        }
                      else
                        {
                          t = l_33;
                          {
                          }
                        }
                      {
                        ATerm n_33 = t;
                        int o_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_91 = NULL;
                            n_91 = t;
                            {
                              if(((l_91 != NULL) && (l_91 != n_91)))
                                _fail(n_91);
                              else
                                l_91 = n_91;
                              t = _2(t, _id, implodeAsfix_0);
                            }
                            LocalPopChoice(o_33);
                          }
                        else
                          {
                            t = n_33;
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
  ATerm s_91 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm t_91 = NULL,u_91 = NULL;
      t_91 = t;
      r_91 :
      if(match_cons(t_91, sym_Program_1))
        {
          u_91 = ATgetArgument(t_91, 0);
          if(((s_91 != NULL) && (s_91 != u_91)))
            _fail(u_91);
          else
            s_91 = u_91;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_33), not_null(s_91)), term_r_33));
      {
        t = printnl_0(t);
        {
          t = term_b_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_33;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
  y_91 = t;
  x_91 :
  if(match_cons(y_91, sym__2))
    {
      z_91 = ATgetArgument(y_91, 0);
      a_92 = ATgetArgument(y_91, 1);
      {
        ATerm t_33;
        t_33 = t;
        t = SSL_printnl(not_null(z_91), not_null(a_92));
        t = t_33;
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
  ATerm f_92 = NULL;
  f_92 = t;
  t = SSL_implode_string(not_null(f_92));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
        k_92 = t;
        j_92 :
        if(((ATgetType(k_92) == AT_LIST) && !(ATisEmpty(k_92))))
          {
            l_92 = ATgetFirst((ATermList) k_92);
            m_92 = (ATerm) ATgetNext((ATermList) k_92);
            {
              t = not_null(l_92);
              {
                ATerm i_6 (ATerm t)
                {
                  t = not_null(m_92);
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
  ATerm w_92 = NULL;
  ATerm y_92 = NULL;
  w_92 = t;
  {
    ATerm z_92 = NULL;
    ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL;
    t = not_null(w_92);
    {
      z_92 = t;
      {
        t = SSL_explode_term(not_null(z_92));
        {
          b_93 = t;
          u_92 :
          if(match_cons(b_93, sym__2))
            {
              c_93 = ATgetArgument(b_93, 0);
              d_93 = ATgetArgument(b_93, 1);
              v_92 :
              if(match_string(c_93, ""))
                {
                  if(((y_92 != NULL) && (y_92 != d_93)))
                    _fail(d_93);
                  else
                    y_92 = d_93;
                }
              else
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
      t = not_null(y_92);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm h_93 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_93);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        {
          t = Nil_0(t);
          t = u_94(t);
        }
      }
    return(t);
  }
  t = h_93(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym__2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      {
        t = not_null(l_93);
        {
          ATerm j_6 (ATerm t)
          {
            t = not_null(m_93);
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
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_93 = NULL;
  r_93 = t;
  t = SSL_explode_string(not_null(r_93));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_93 = NULL;
  v_93 = t;
  t = SSL_is_string(not_null(v_93));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              ATerm g_34 = t;
              int h_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = g_34;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, k_6);
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            {
              ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
              j_94 = t;
              e_94 :
              if(match_cons(j_94, sym_Path_1))
                {
                  k_94 = ATgetArgument(j_94, 0);
                  t = not_null(k_94);
                }
              else
                {
                  if(match_cons(j_94, sym_Var_1))
                    {
                      k_94 = ATgetArgument(j_94, 0);
                      {
                        t = not_null(k_94);
                        {
                          ATerm i_34 = t;
                          int j_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_34);
                            }
                          else
                            {
                              t = i_34;
                              {
                                ATerm l_6 (ATerm t)
                                {
                                  t = term_k_34;
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
                      if(match_cons(j_94, sym_Prefix_2))
                        {
                          k_94 = ATgetArgument(j_94, 0);
                          l_94 = ATgetArgument(j_94, 1);
                          {
                            ATerm s_94 = NULL,w_94 = NULL;
                            ATerm l_34;
                            l_34 = t;
                            {
                              ATerm t_94 = NULL;
                              t = not_null(k_94);
                              {
                                t = eval_config_0(t);
                                {
                                  t_94 = t;
                                  if(((s_94 != NULL) && (s_94 != t_94)))
                                    _fail(t_94);
                                  else
                                    s_94 = t_94;
                                }
                              }
                            }
                            t = l_34;
                            {
                              ATerm x_94 = NULL;
                              t = not_null(l_94);
                              {
                                t = eval_config_0(t);
                                {
                                  x_94 = t;
                                  if(((w_94 != NULL) && (w_94 != x_94)))
                                    _fail(x_94);
                                  else
                                    w_94 = x_94;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_94), not_null(w_94));
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
  ATerm h_95 = NULL;
  h_95 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_34, not_null(h_95));
    {
      t = table_get_0(t);
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_34;
              p_34 = t;
              {
                ATerm j_95 = NULL;
                ATerm k_95 = NULL;
                k_95 = t;
                if(((j_95 != NULL) && (j_95 != k_95)))
                  _fail(k_95);
                else
                  j_95 = k_95;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_34, not_null(h_95), not_null(j_95));
                  t = table_put_0(t);
                }
              }
              t = p_34;
            }
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_34;
      s_34 = t;
      {
        ATerm o_95 = NULL;
        ATerm p_95 = NULL;
        t = term_t_34;
        {
          t = get_config_0(t);
          {
            p_95 = t;
            if(((o_95 != NULL) && (o_95 != p_95)))
              _fail(p_95);
            else
              o_95 = p_95;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_95), term_u_34);
          t = geq_0(t);
        }
      }
      t = s_34;
      t = b_108(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL;
  t_95 = t;
  s_95 :
  if(match_cons(t_95, sym__2))
    {
      u_95 = ATgetArgument(t_95, 0);
      v_95 = ATgetArgument(t_95, 1);
      t = SSL_WriteToTextFile(not_null(u_95), not_null(v_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  f_96 = t;
  e_96 :
  if(match_cons(f_96, sym__2))
    {
      g_96 = ATgetArgument(f_96, 0);
      h_96 = ATgetArgument(f_96, 1);
      {
        ATerm l_96 = NULL,n_96 = NULL;
        ATerm m_96 = NULL;
        t = SSLgetAnnotations(not_null(f_96));
        {
          m_96 = t;
          if(((l_96 != NULL) && (l_96 != m_96)))
            _fail(m_96);
          else
            l_96 = m_96;
        }
        {
          t = not_null(g_96);
          {
            ATerm p_96 = NULL;
            t = g_71(t);
            {
              n_96 = t;
              {
                t = not_null(h_96);
                {
                  ATerm r_96 = NULL;
                  t = h_71(t);
                  {
                    p_96 = t;
                    {
                      ATerm s_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_96), not_null(p_96)), not_null(l_96));
                      {
                        s_96 = t;
                        if(((r_96 != NULL) && (r_96 != s_96)))
                          _fail(s_96);
                        else
                          r_96 = s_96;
                      }
                      t = not_null(r_96);
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
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
  a_97 = t;
  z_96 :
  if(match_cons(a_97, sym__2))
    {
      b_97 = ATgetArgument(a_97, 0);
      c_97 = ATgetArgument(a_97, 1);
      t = SSL_WriteToBinaryFile(not_null(b_97), not_null(c_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_97 = NULL;
  ATerm v_34;
  v_34 = t;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_6 (ATerm t)
          {
            ATerm l_97 = NULL,m_97 = NULL;
            l_97 = t;
            h_97 :
            if(match_cons(l_97, sym_Output_1))
              {
                m_97 = ATgetArgument(l_97, 0);
                if(((k_97 != NULL) && (k_97 != m_97)))
                  _fail(m_97);
                else
                  k_97 = m_97;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_6);
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm n_97 = NULL;
            t = term_y_34;
            {
              n_97 = t;
              if(((k_97 != NULL) && (k_97 != n_97)))
                _fail(n_97);
              else
                k_97 = n_97;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_6, _id);
  }
  t = v_34;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm p_6 (ATerm t)
      {
        t = not_null(k_97);
        return(t);
      }
      t = split_2(t, p_6, _id);
      return(t);
    }
    t = _2(t, _id, o_6);
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_6 (ATerm t)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm o_97 = NULL;
              o_97 = t;
              j_97 :
              if(!(match_cons(o_97, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_6);
            return(t);
          }
          t = _2(t, q_6, WriteToBinaryFile_0);
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_113 (ATerm))
{
  ATerm u_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  ATerm b_35;
  b_35 = t;
  t = dtime_0(t);
  t = b_35;
  {
    t = a_113(t);
    {
      ATerm c_35;
      c_35 = t;
      {
        ATerm v_97 = NULL;
        t = dtime_0(t);
        {
          v_97 = t;
          if(((u_97 != NULL) && (u_97 != v_97)))
            _fail(v_97);
          else
            u_97 = v_97;
        }
      }
      t = c_35;
      {
        w_97 = t;
        t_97 :
        if(match_cons(w_97, sym__2))
          {
            x_97 = ATgetArgument(w_97, 0);
            y_97 = ATgetArgument(w_97, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_97)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_97))), not_null(y_97));
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
ATerm debug_1 (ATerm t, ATerm d_105 (ATerm))
{
  ATerm d_35;
  d_35 = t;
  {
    ATerm f_98 = NULL,h_98 = NULL;
    ATerm e_35;
    e_35 = t;
    {
      ATerm g_98 = NULL;
      t = d_105(t);
      {
        g_98 = t;
        if(((f_98 != NULL) && (f_98 != g_98)))
          _fail(g_98);
        else
          f_98 = g_98;
      }
    }
    t = e_35;
    {
      ATerm i_98 = NULL;
      i_98 = t;
      if(((h_98 != NULL) && (h_98 != i_98)))
        _fail(i_98);
      else
        h_98 = i_98;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_98)), not_null(f_98)));
        t = printnl_0(t);
      }
    }
  }
  t = d_35;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm m_98 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_98 = NULL;
      n_98 = t;
      {
        if(((m_98 != NULL) && (m_98 != n_98)))
          _fail(n_98);
        else
          m_98 = n_98;
        t = SSL_ReadFromFile(not_null(m_98));
      }
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm s_6 (ATerm t)
        {
          t = term_h_35;
          return(t);
        }
        t = debug_1(t, s_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_102 (ATerm), ATerm j_102 (ATerm))
{
  ATerm r_98 = NULL,t_98 = NULL;
  ATerm i_35;
  i_35 = t;
  {
    ATerm s_98 = NULL;
    t = i_102(t);
    {
      s_98 = t;
      if(((r_98 != NULL) && (r_98 != s_98)))
        _fail(s_98);
      else
        r_98 = s_98;
    }
  }
  t = i_35;
  {
    ATerm u_98 = NULL;
    t = j_102(t);
    {
      u_98 = t;
      if(((t_98 != NULL) && (t_98 != u_98)))
        _fail(u_98);
      else
        t_98 = u_98;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_98), not_null(t_98));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_99 = NULL;
  ATerm j_35;
  j_35 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 (ATerm t)
        {
          ATerm b_99 = NULL,c_99 = NULL;
          b_99 = t;
          y_98 :
          if(match_cons(b_99, sym_Input_1))
            {
              c_99 = ATgetArgument(b_99, 0);
              if(((a_99 != NULL) && (a_99 != c_99)))
                _fail(c_99);
              else
                a_99 = c_99;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_6);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm d_99 = NULL;
          t = term_m_35;
          {
            d_99 = t;
            if(((a_99 != NULL) && (a_99 != d_99)))
              _fail(d_99);
            else
              a_99 = d_99;
          }
        }
      }
  }
  t = j_35;
  {
    ATerm u_6 (ATerm t)
    {
      t = not_null(a_99);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm h_99 = NULL;
    h_99 = t;
    g_99 :
    if(!(match_string(h_99, "-v")))
      {
        if(!(match_string(h_99, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_p_35;
    t = set_config_0(t);
    t = term_q_35;
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = term_r_35;
    return(t);
  }
  t = Option_3(t, v_6, w_6, x_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm k_99 = NULL;
    k_99 = t;
    i_99 :
    if(!(match_string(k_99, "-k")))
      {
        if(!(match_string(k_99, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm s_35;
    s_35 = t;
    {
      ATerm l_99 = NULL;
      ATerm m_99 = NULL;
      t = string_to_int_0(t);
      {
        m_99 = t;
        if(((l_99 != NULL) && (l_99 != m_99)))
          _fail(m_99);
        else
          l_99 = m_99;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_35, not_null(l_99));
        t = set_config_0(t);
      }
    }
    t = s_35;
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_u_35;
    return(t);
  }
  t = ArgOption_3(t, y_6, z_6, a_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_99 = NULL;
  p_99 = t;
  t = SSL_string_to_int(not_null(p_99));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm z_99 = NULL;
        z_99 = t;
        u_99 :
        if(!(match_string(z_99, "-S")))
          {
            if(!(match_string(z_99, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_y_35;
        t = set_config_0(t);
        t = term_z_35;
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        t = term_a_36;
        return(t);
      }
      t = Option_3(t, b_7, c_7, d_7);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              ATerm a_100 = NULL;
              a_100 = t;
              v_99 :
              if(!(match_string(a_100, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_7 (ATerm t)
            {
              ATerm d_100 = NULL;
              ATerm d_36;
              d_36 = t;
              {
                ATerm b_100 = NULL;
                ATerm c_100 = NULL;
                t = string_to_int_0(t);
                {
                  c_100 = t;
                  if(((b_100 != NULL) && (b_100 != c_100)))
                    _fail(c_100);
                  else
                    b_100 = c_100;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_34, not_null(b_100));
                  t = set_config_0(t);
                }
              }
              t = d_36;
              {
                ATerm e_100 = NULL;
                e_100 = t;
                if(((d_100 != NULL) && (d_100 != e_100)))
                  _fail(e_100);
                else
                  d_100 = e_100;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_100));
              }
              return(t);
            }
            ATerm g_7 (ATerm t)
            {
              t = term_e_36;
              return(t);
            }
            t = ArgOption_3(t, e_7, f_7, g_7);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm h_7 (ATerm t)
              {
                ATerm f_100 = NULL;
                f_100 = t;
                y_99 :
                if(!(match_string(f_100, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_7 (ATerm t)
              {
                t = term_g_36;
                t = set_config_0(t);
                t = term_h_36;
                return(t);
              }
              ATerm j_7 (ATerm t)
              {
                t = term_i_36;
                return(t);
              }
              t = Option_3(t, h_7, i_7, j_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm l_100 = NULL;
    l_100 = t;
    i_100 :
    if(!(match_string(l_100, "-o")))
      {
        if(!(match_string(l_100, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm o_100 = NULL;
    ATerm n_36;
    n_36 = t;
    {
      ATerm m_100 = NULL;
      ATerm n_100 = NULL;
      n_100 = t;
      if(((m_100 != NULL) && (m_100 != n_100)))
        _fail(n_100);
      else
        m_100 = n_100;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_36, not_null(m_100));
        t = set_config_0(t);
      }
    }
    t = n_36;
    {
      ATerm p_100 = NULL;
      p_100 = t;
      if(((o_100 != NULL) && (o_100 != p_100)))
        _fail(p_100);
      else
        o_100 = p_100;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_100));
    }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = term_p_36;
    return(t);
  }
  t = ArgOption_3(t, k_7, l_7, m_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      {
        ATerm n_7 (ATerm t)
        {
          ATerm v_100 = NULL;
          v_100 = t;
          s_100 :
          if(!(match_string(v_100, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          t = term_t_36;
          t = set_config_0(t);
          t = term_u_36;
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_v_36;
          return(t);
        }
        t = Option_3(t, n_7, o_7, p_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL;
  b_101 = t;
  z_100 :
  if(match_string(b_101, "register-usage-info"))
    {
      t = register_usage_1(t, u_0);
    }
  else
    {
      if(((ATgetType(b_101) == AT_LIST) && !(ATisEmpty(b_101))))
        {
          c_101 = ATgetFirst((ATermList) b_101);
          d_101 = (ATerm) ATgetNext((ATermList) b_101);
          a_101 :
          if(((ATgetType(d_101) == AT_LIST) && !(ATisEmpty(d_101))))
            {
              e_101 = ATgetFirst((ATermList) d_101);
              f_101 = (ATerm) ATgetNext((ATermList) d_101);
              {
                ATerm j_101 = NULL;
                ATerm w_36;
                w_36 = t;
                {
                  t = not_null(c_101);
                  t = s_0(t);
                }
                t = w_36;
                {
                  ATerm k_101 = NULL;
                  t = not_null(e_101);
                  {
                    t = t_0(t);
                    {
                      k_101 = t;
                      if(((j_101 != NULL) && (j_101 != k_101)))
                        _fail(k_101);
                      else
                        j_101 = k_101;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_101)), not_null(j_101));
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
  ATerm s_7 (ATerm t)
  {
    ATerm r_101 = NULL;
    r_101 = t;
    o_101 :
    if(!(match_string(r_101, "-i")))
      {
        if(!(match_string(r_101, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm u_101 = NULL;
    ATerm x_36;
    x_36 = t;
    {
      ATerm s_101 = NULL;
      ATerm t_101 = NULL;
      t_101 = t;
      if(((s_101 != NULL) && (s_101 != t_101)))
        _fail(t_101);
      else
        s_101 = t_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_36, not_null(s_101));
        t = set_config_0(t);
      }
    }
    t = x_36;
    {
      ATerm v_101 = NULL;
      v_101 = t;
      if(((u_101 != NULL) && (u_101 != v_101)))
        _fail(v_101);
      else
        u_101 = v_101;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_101));
    }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_z_36;
    return(t);
  }
  t = ArgOption_3(t, s_7, t_7, u_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATempty, term_e_37));
  {
    t = printnl_0(t);
    {
      t = term_b_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_102 = NULL;
  a_102 = t;
  t = SSL_TicksToSeconds(not_null(a_102));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(match_cons(f_102, sym__2))
    {
      g_102 = ATgetArgument(f_102, 0);
      h_102 = ATgetArgument(f_102, 1);
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_102), not_null(h_102));
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            t = SSL_addr(not_null(g_102), not_null(h_102));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_100(t);
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
        q_102 = t;
        p_102 :
        if(((ATgetType(q_102) == AT_LIST) && !(ATisEmpty(q_102))))
          {
            r_102 = ATgetFirst((ATermList) q_102);
            s_102 = (ATerm) ATgetNext((ATermList) q_102);
            {
              ATerm v_102 = NULL;
              ATerm w_102 = NULL;
              t = not_null(s_102);
              {
                t = foldr_2(t, t_100, u_100);
                {
                  w_102 = t;
                  if(((v_102 != NULL) && (v_102 != w_102)))
                    _fail(w_102);
                  else
                    v_102 = w_102;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_102), not_null(v_102));
                t = u_100(t);
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
ATerm crush_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm d_103 = NULL;
  ATerm f_103 = NULL;
  d_103 = t;
  {
    ATerm g_103 = NULL;
    ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL;
    t = not_null(d_103);
    {
      g_103 = t;
      {
        t = SSL_explode_term(not_null(g_103));
        {
          i_103 = t;
          c_103 :
          if(match_cons(i_103, sym__2))
            {
              j_103 = ATgetArgument(i_103, 0);
              k_103 = ATgetArgument(i_103, 1);
              if(((f_103 != NULL) && (f_103 != k_103)))
                _fail(k_103);
              else
                f_103 = k_103;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_103);
      t = foldr_2(t, r_99, s_99);
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
    ATerm v_7 (ATerm t)
    {
      t = term_x_35;
      return(t);
    }
    t = crush_2(t, v_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
  q_103 = t;
  p_103 :
  if(match_cons(q_103, sym__2))
    {
      r_103 = ATgetArgument(q_103, 0);
      s_103 = ATgetArgument(q_103, 1);
      {
        ATerm j_37;
        j_37 = t;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_103), not_null(s_103));
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              t = SSL_gtr(not_null(r_103), not_null(s_103));
            }
        }
        t = j_37;
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
  ATerm y_103 = NULL;
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL;
      z_103 = t;
      x_103 :
      if(match_cons(z_103, sym__2))
        {
          a_104 = ATgetArgument(z_103, 0);
          b_104 = ATgetArgument(z_103, 1);
          {
            if(((y_103 != NULL) && (y_103 != a_104)))
              _fail(a_104);
            else
              y_103 = a_104;
            if(((y_103 != NULL) && (y_103 != b_104)))
              _fail(b_104);
            else
              y_103 = b_104;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37;
      q_37 = t;
      {
        ATerm e_104 = NULL;
        ATerm f_104 = NULL;
        t = term_t_34;
        {
          t = get_config_0(t);
          {
            f_104 = t;
            if(((e_104 != NULL) && (e_104 != f_104)))
              _fail(f_104);
            else
              e_104 = f_104;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_104), term_b_18);
          t = geq_0(t);
        }
      }
      t = q_37;
      t = a_108(t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm j_104 = NULL,l_104 = NULL;
    ATerm r_37;
    r_37 = t;
    {
      ATerm k_104 = NULL;
      t = run_time_0(t);
      {
        k_104 = t;
        if(((j_104 != NULL) && (j_104 != k_104)))
          _fail(k_104);
        else
          j_104 = k_104;
      }
    }
    t = r_37;
    {
      ATerm m_104 = NULL;
      t = term_s_37;
      {
        t = get_config_0(t);
        {
          m_104 = t;
          if(((l_104 != NULL) && (l_104 != m_104)))
            _fail(m_104);
          else
            l_104 = m_104;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_37), not_null(j_104)), term_t_37), not_null(l_104)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_7);
  {
    t = term_x_35;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_104 = NULL;
  t_104 = t;
  s_104 :
  if(match_cons(t_104, sym_Version_0))
    {
      ATerm v_104 = NULL,x_104 = NULL;
      ATerm v_37;
      v_37 = t;
      {
        ATerm w_104 = NULL;
        t = SSLgetAnnotations(not_null(t_104));
        {
          w_104 = t;
          if(((v_104 != NULL) && (v_104 != w_104)))
            _fail(w_104);
          else
            v_104 = w_104;
        }
      }
      t = v_37;
      {
        ATerm y_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_104));
        {
          y_104 = t;
          if(((x_104 != NULL) && (x_104 != y_104)))
            _fail(y_104);
          else
            x_104 = y_104;
        }
        t = not_null(x_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_112 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm y_37 = t;
          int z_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_37);
            }
          else
            {
              t = y_37;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_7);
  t = y_112(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_table_create(not_null(f_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_105 = NULL;
  j_105 = t;
  {
    ATerm a_38;
    a_38 = t;
    {
      t = term_b_38;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_38, term_c_38, not_null(j_105));
          t = table_put_0(t);
        }
      }
    }
    t = a_38;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_105 = NULL;
  n_105 = t;
  t = SSL_table_destroy(not_null(n_105));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_105 = NULL;
  r_105 = t;
  t = SSL_exit(not_null(r_105));
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm b_106 = NULL;
  b_106 = t;
  a_106 :
  if(match_cons(b_106, sym_layout_0))
    {
      ATerm j_38 = t;
      int n_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_106 = NULL,f_106 = NULL;
          ATerm o_38;
          o_38 = t;
          {
            ATerm e_106 = NULL;
            t = SSLgetAnnotations(not_null(b_106));
            {
              e_106 = t;
              if(((d_106 != NULL) && (d_106 != e_106)))
                _fail(e_106);
              else
                d_106 = e_106;
            }
          }
          t = o_38;
          {
            ATerm h_106 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(d_106));
            {
              h_106 = t;
              if(((f_106 != NULL) && (f_106 != h_106)))
                _fail(h_106);
              else
                f_106 = h_106;
            }
            t = not_null(f_106);
          }
          LocalPopChoice(n_38);
        }
      else
        {
          t = j_38;
          {
            ATerm j_106 = NULL,l_106 = NULL;
            ATerm p_38;
            p_38 = t;
            {
              ATerm k_106 = NULL;
              t = SSLgetAnnotations(not_null(b_106));
              {
                k_106 = t;
                if(((j_106 != NULL) && (j_106 != k_106)))
                  _fail(k_106);
                else
                  j_106 = k_106;
              }
            }
            t = p_38;
            {
              ATerm m_106 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(j_106));
              {
                m_106 = t;
                if(((l_106 != NULL) && (l_106 != m_106)))
                  _fail(m_106);
                else
                  l_106 = m_106;
              }
              t = not_null(l_106);
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
  ATerm c_107 = NULL,d_107 = NULL;
  c_107 = t;
  b_107 :
  if(match_cons(c_107, sym_lit_1))
    {
      d_107 = ATgetArgument(c_107, 0);
      {
        ATerm q_38 = t;
        int r_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_107 = NULL,m_107 = NULL;
            ATerm h_107 = NULL;
            t = SSLgetAnnotations(not_null(c_107));
            {
              h_107 = t;
              if(((g_107 != NULL) && (g_107 != h_107)))
                _fail(h_107);
              else
                g_107 = h_107;
            }
            {
              t = not_null(d_107);
              {
                ATerm o_107 = NULL;
                t = r_0(t);
                {
                  m_107 = t;
                  {
                    ATerm p_107 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(m_107)), not_null(g_107));
                    {
                      p_107 = t;
                      if(((o_107 != NULL) && (o_107 != p_107)))
                        _fail(p_107);
                      else
                        o_107 = p_107;
                    }
                    t = not_null(o_107);
                  }
                }
              }
            }
            LocalPopChoice(r_38);
          }
        else
          {
            t = q_38;
            {
              ATerm s_107 = NULL,u_107 = NULL;
              ATerm t_107 = NULL;
              t = SSLgetAnnotations(not_null(c_107));
              {
                t_107 = t;
                if(((s_107 != NULL) && (s_107 != t_107)))
                  _fail(t_107);
                else
                  s_107 = t_107;
              }
              {
                t = not_null(d_107);
                {
                  ATerm w_107 = NULL;
                  t = r_0(t);
                  {
                    u_107 = t;
                    {
                      ATerm x_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(u_107)), not_null(s_107));
                      {
                        x_107 = t;
                        if(((w_107 != NULL) && (w_107 != x_107)))
                          _fail(x_107);
                        else
                          w_107 = x_107;
                      }
                      t = not_null(w_107);
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
ATerm list_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm i_108 (ATerm t)
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = Cons_2(t, h_94, i_108);
      }
    return(t);
  }
  t = i_108(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm l_78 (ATerm))
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
            t = l_78(t);
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
        ATerm b_39 = t;
        int c_39 = stack_ptr;
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
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            {
              ATerm e_110 = NULL,g_110 = NULL;
              ATerm f_110 = NULL;
              t = SSLgetAnnotations(not_null(n_109));
              {
                f_110 = t;
                if(((e_110 != NULL) && (e_110 != f_110)))
                  _fail(f_110);
                else
                  e_110 = f_110;
              }
              {
                t = not_null(o_109);
                {
                  ATerm i_110 = NULL;
                  t = p_0(t);
                  {
                    g_110 = t;
                    {
                      t = not_null(p_109);
                      {
                        ATerm k_110 = NULL;
                        t = q_0(t);
                        {
                          i_110 = t;
                          {
                            ATerm l_110 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(g_110), not_null(i_110)), not_null(e_110));
                            {
                              l_110 = t;
                              if(((k_110 != NULL) && (k_110 != l_110)))
                                _fail(l_110);
                              else
                                k_110 = l_110;
                            }
                            t = not_null(k_110);
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
  ATerm f_111 = NULL,g_111 = NULL;
  f_111 = t;
  e_111 :
  if(match_cons(f_111, sym_iter_star_1))
    {
      g_111 = ATgetArgument(f_111, 0);
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_111 = NULL,l_111 = NULL;
            ATerm k_111 = NULL;
            t = SSLgetAnnotations(not_null(f_111));
            {
              k_111 = t;
              if(((j_111 != NULL) && (j_111 != k_111)))
                _fail(k_111);
              else
                j_111 = k_111;
            }
            {
              t = not_null(g_111);
              {
                ATerm n_111 = NULL;
                t = o_0(t);
                {
                  l_111 = t;
                  {
                    ATerm o_111 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(l_111)), not_null(j_111));
                    {
                      o_111 = t;
                      if(((n_111 != NULL) && (n_111 != o_111)))
                        _fail(o_111);
                      else
                        n_111 = o_111;
                    }
                    t = not_null(n_111);
                  }
                }
              }
            }
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            {
              ATerm r_111 = NULL,t_111 = NULL;
              ATerm s_111 = NULL;
              t = SSLgetAnnotations(not_null(f_111));
              {
                s_111 = t;
                if(((r_111 != NULL) && (r_111 != s_111)))
                  _fail(s_111);
                else
                  r_111 = s_111;
              }
              {
                t = not_null(g_111);
                {
                  ATerm v_111 = NULL;
                  t = o_0(t);
                  {
                    t_111 = t;
                    {
                      ATerm w_111 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(t_111)), not_null(r_111));
                      {
                        w_111 = t;
                        if(((v_111 != NULL) && (v_111 != w_111)))
                          _fail(w_111);
                        else
                          v_111 = w_111;
                      }
                      t = not_null(v_111);
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
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym_iter_sep_2))
    {
      r_112 = ATgetArgument(q_112, 0);
      s_112 = ATgetArgument(q_112, 1);
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_112 = NULL,z_112 = NULL;
            ATerm x_112 = NULL;
            t = SSLgetAnnotations(not_null(q_112));
            {
              x_112 = t;
              if(((w_112 != NULL) && (w_112 != x_112)))
                _fail(x_112);
              else
                w_112 = x_112;
            }
            {
              t = not_null(r_112);
              {
                ATerm c_113 = NULL;
                t = m_0(t);
                {
                  z_112 = t;
                  {
                    t = not_null(s_112);
                    {
                      ATerm i_113 = NULL;
                      t = n_0(t);
                      {
                        c_113 = t;
                        {
                          ATerm j_113 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(z_112), not_null(c_113)), not_null(w_112));
                          {
                            j_113 = t;
                            if(((i_113 != NULL) && (i_113 != j_113)))
                              _fail(j_113);
                            else
                              i_113 = j_113;
                          }
                          t = not_null(i_113);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            {
              ATerm s_113 = NULL,u_113 = NULL;
              ATerm t_113 = NULL;
              t = SSLgetAnnotations(not_null(q_112));
              {
                t_113 = t;
                if(((s_113 != NULL) && (s_113 != t_113)))
                  _fail(t_113);
                else
                  s_113 = t_113;
              }
              {
                t = not_null(r_112);
                {
                  ATerm a_114 = NULL;
                  t = m_0(t);
                  {
                    u_113 = t;
                    {
                      t = not_null(s_112);
                      {
                        ATerm c_114 = NULL;
                        t = n_0(t);
                        {
                          a_114 = t;
                          {
                            ATerm d_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(u_113), not_null(a_114)), not_null(s_113));
                            {
                              d_114 = t;
                              if(((c_114 != NULL) && (c_114 != d_114)))
                                _fail(d_114);
                              else
                                c_114 = d_114;
                            }
                            t = not_null(c_114);
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
        ATerm h_39 = t;
        int i_39 = stack_ptr;
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
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
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
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm n_39 = t;
              int y_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(y_39);
                }
              else
                {
                  t = n_39;
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
  ATerm z_39 = t;
  int a_40 = stack_ptr;
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
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm c_116 (ATerm t)
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = list_sort_0(t);
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              {
                ATerm y_7 (ATerm t)
                {
                  ATerm z_7 (ATerm t)
                  {
                    ATerm f_40 = t;
                    int g_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = lit_1(t, _id);
                        LocalPopChoice(g_40);
                      }
                    else
                      {
                        t = f_40;
                        {
                          ATerm h_40 = t;
                          int i_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = layout_0(t);
                              LocalPopChoice(i_40);
                            }
                          else
                            {
                              t = h_40;
                              t = c_116(t);
                            }
                        }
                      }
                    return(t);
                  }
                  t = list_1(t, z_7);
                  return(t);
                }
                t = seq_1(t, y_7);
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
  ATerm j_40;
  j_40 = t;
  {
    ATerm f_116 = NULL;
    ATerm i_116 = NULL;
    ATerm k_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = k_40;
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
      t = (ATerm) ATmakeAppl(sym__2, term_y_34, not_null(f_116));
      t = printnl_0(t);
    }
  }
  t = j_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_40), term_t_40), term_q_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm l_116 (ATerm t)
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = Cons_2(t, f_94, l_116);
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
          ATerm x_40;
          x_40 = t;
          {
            ATerm y_116 = NULL,a_117 = NULL,c_117 = NULL;
            ATerm a_41;
            a_41 = t;
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
            t = a_41;
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
          t = x_40;
          {
            ATerm a_8 (ATerm t)
            {
              t = not_null(x_116);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_116) == AT_LIST) && ATisEmpty(u_116)))
        {
          {
            t = term_o_35;
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
  ATerm b_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm j_117 = NULL;
  ATerm k_117 = NULL;
  t = term_o_35;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_41), not_null(j_117)), term_f_41);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm r_117 = NULL,s_117 = NULL;
  r_117 = t;
  q_117 :
  if(match_cons(r_117, sym_Program_1))
    {
      s_117 = ATgetArgument(r_117, 0);
      {
        ATerm v_117 = NULL,x_117 = NULL;
        ATerm w_117 = NULL;
        t = SSLgetAnnotations(not_null(r_117));
        {
          w_117 = t;
          if(((v_117 != NULL) && (v_117 != w_117)))
            _fail(w_117);
          else
            v_117 = w_117;
        }
        {
          t = not_null(s_117);
          {
            ATerm z_117 = NULL;
            t = x_77(t);
            {
              x_117 = t;
              {
                ATerm a_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_117)), not_null(v_117));
                {
                  a_118 = t;
                  if(((z_117 != NULL) && (z_117 != a_118)))
                    _fail(a_118);
                  else
                    z_117 = a_118;
                }
                t = not_null(z_117);
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
  ATerm j_118 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_118 = NULL;
      t = term_s_37;
      {
        t = get_config_0(t);
        {
          k_118 = t;
          if(((j_118 != NULL) && (j_118 != k_118)))
            _fail(k_118);
          else
            j_118 = k_118;
        }
      }
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      {
        ATerm c_8 (ATerm t)
        {
          ATerm f_8 (ATerm t)
          {
            ATerm l_118 = NULL;
            l_118 = t;
            if(((j_118 != NULL) && (j_118 != l_118)))
              _fail(l_118);
            else
              j_118 = l_118;
            return(t);
          }
          t = Program_1(t, f_8);
          return(t);
        }
        t = fetch_1(t, c_8);
      }
    }
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_8 (ATerm t)
        {
          t = not_null(j_118);
          return(t);
        }
        t = short_description_1(t, g_8);
        t = echo_0(t);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        {
        }
      }
    {
      t = term_m_41;
      {
        t = echo_0(t);
        {
          t = term_q_41;
          {
            t = table_get_0(t);
            {
              ATerm h_8 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, h_8);
              {
                ATerm i_8 (ATerm t)
                {
                  ATerm m_118 = NULL;
                  ATerm n_118 = NULL;
                  n_118 = t;
                  if(((m_118 != NULL) && (m_118 != n_118)))
                    _fail(n_118);
                  else
                    m_118 = n_118;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_118)), term_r_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_8);
                {
                  ATerm s_41 = t;
                  int t_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_118 = NULL;
                      ATerm p_118 = NULL;
                      ATerm j_8 (ATerm t)
                      {
                        t = not_null(j_118);
                        return(t);
                      }
                      t = long_description_1(t, j_8);
                      {
                        p_118 = t;
                        if(((o_118 != NULL) && (o_118 != p_118)))
                          _fail(p_118);
                        else
                          o_118 = p_118;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(o_118)), term_u_41);
                        t = echo_0(t);
                      }
                      LocalPopChoice(t_41);
                    }
                  else
                    {
                      t = s_41;
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
  ATerm x_41;
  x_41 = t;
  {
    ATerm v_118 = NULL;
    ATerm w_118 = NULL;
    w_118 = t;
    if(((v_118 != NULL) && (v_118 != w_118)))
      _fail(w_118);
    else
      v_118 = w_118;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATempty, not_null(v_118)));
      t = printnl_0(t);
    }
  }
  t = x_41;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_105 (ATerm))
{
  ATerm y_41;
  y_41 = t;
  {
    t = e_105(t);
    t = debug_0(t);
  }
  t = y_41;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm d_119 = NULL,e_119 = NULL;
  d_119 = t;
  c_119 :
  if(match_cons(d_119, sym_Undefined_1))
    {
      e_119 = ATgetArgument(d_119, 0);
      {
        ATerm h_119 = NULL,j_119 = NULL;
        ATerm i_119 = NULL;
        t = SSLgetAnnotations(not_null(d_119));
        {
          i_119 = t;
          if(((h_119 != NULL) && (h_119 != i_119)))
            _fail(i_119);
          else
            h_119 = i_119;
        }
        {
          t = not_null(e_119);
          {
            ATerm l_119 = NULL;
            t = y_77(t);
            {
              j_119 = t;
              {
                ATerm m_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_119)), not_null(h_119));
                {
                  m_119 = t;
                  if(((l_119 != NULL) && (l_119 != m_119)))
                    _fail(m_119);
                  else
                    l_119 = m_119;
                }
                t = not_null(l_119);
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
ATerm fetch_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm r_119 (ATerm t)
  {
    ATerm z_41 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_94, _id);
        LocalPopChoice(x_42);
      }
    else
      {
        t = z_41;
        t = Cons_2(t, _id, r_119);
      }
    return(t);
  }
  t = r_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_106 (ATerm))
{
  t = fetch_1(t, g_106);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_119 = NULL;
  w_119 = t;
  v_119 :
  if(match_cons(w_119, sym_Help_0))
    {
      ATerm y_119 = NULL,a_120 = NULL;
      ATerm y_42;
      y_42 = t;
      {
        ATerm z_119 = NULL;
        t = SSLgetAnnotations(not_null(w_119));
        {
          z_119 = t;
          if(((y_119 != NULL) && (y_119 != z_119)))
            _fail(z_119);
          else
            y_119 = z_119;
        }
      }
      t = y_42;
      {
        ATerm b_120 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_119));
        {
          b_120 = t;
          if(((a_120 != NULL) && (a_120 != b_120)))
            _fail(b_120);
          else
            a_120 = b_120;
        }
        t = not_null(a_120);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_86(t);
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL;
  h_120 = t;
  g_120 :
  if(match_cons(h_120, sym__2))
    {
      i_120 = ATgetArgument(h_120, 0);
      j_120 = ATgetArgument(h_120, 1);
      t = SSL_table_get(not_null(i_120), not_null(j_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
  s_120 = t;
  r_120 :
  if(match_cons(s_120, sym__3))
    {
      t_120 = ATgetArgument(s_120, 0);
      u_120 = ATgetArgument(s_120, 1);
      v_120 = ATgetArgument(s_120, 2);
      {
        ATerm c_43;
        c_43 = t;
        {
          ATerm z_120 = NULL;
          ATerm a_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_120), not_null(u_120));
          {
            ATerm d_43 = t;
            int e_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_43);
              }
            else
              {
                t = d_43;
                t = (ATerm) ATempty;
              }
            {
              a_121 = t;
              if(((z_120 != NULL) && (z_120 != a_121)))
                _fail(a_121);
              else
                z_120 = a_121;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_120), not_null(u_120), (ATerm) ATinsert(CheckATermList(not_null(z_120)), not_null(v_120)));
            t = table_put_0(t);
          }
        }
        t = c_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_107 (ATerm))
{
  ATerm e_121 = NULL;
  ATerm f_121 = NULL;
  t = term_o_35;
  {
    t = l_107(t);
    {
      f_121 = t;
      if(((e_121 != NULL) && (e_121 != f_121)))
        _fail(f_121);
      else
        e_121 = f_121;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_41, term_o_41, not_null(e_121));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL;
  l_121 = t;
  k_121 :
  if(match_string(l_121, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_121) == AT_LIST) && !(ATisEmpty(l_121))))
        {
          m_121 = ATgetFirst((ATermList) l_121);
          n_121 = (ATerm) ATgetNext((ATermList) l_121);
          {
            ATerm s_121 = NULL;
            ATerm i_43;
            i_43 = t;
            {
              t = not_null(m_121);
              t = a_0(t);
            }
            t = i_43;
            {
              ATerm t_121 = NULL;
              t = term_o_35;
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
              t = (ATerm) ATinsert(CheckATermList(not_null(n_121)), not_null(s_121));
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
  ATerm k_8 (ATerm t)
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
  ATerm l_8 (ATerm t)
  {
    t = term_o_43;
    {
      t = set_config_0(t);
      t = term_p_43;
    }
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_q_43;
    return(t);
  }
  t = Option_3(t, k_8, l_8, m_8);
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
ATerm Cons_2 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm))
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
            t = p_72(t);
            {
              v_122 = t;
              {
                t = not_null(p_122);
                {
                  ATerm z_122 = NULL;
                  t = q_72(t);
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
        ATerm r_43;
        r_43 = t;
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
        t = r_43;
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
        t = (ATerm) ATmakeAppl(sym__3, term_m_34, not_null(w_123), not_null(x_123));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm s_43;
  s_43 = t;
  {
    ATerm t_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_43;
        t = j_107(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = t_43;
        {
        }
      }
  }
  t = s_43;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm f_124 = NULL;
      ATerm a_44;
      a_44 = t;
      {
        ATerm d_124 = NULL;
        ATerm e_124 = NULL;
        e_124 = t;
        if(((d_124 != NULL) && (d_124 != e_124)))
          _fail(e_124);
        else
          d_124 = e_124;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_37, not_null(d_124));
          t = set_config_0(t);
        }
      }
      t = a_44;
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
    ATerm o_8 (ATerm t)
    {
      ATerm b_44 = t;
      int c_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
              {
                t = j_107(t);
                t = Cons_2(t, _id, o_8);
              }
            }
          LocalPopChoice(c_44);
        }
      else
        {
          t = b_44;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_8, o_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL;
  ATerm f_44;
  f_44 = t;
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
  t = f_44;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm v_124 = NULL;
  ATerm g_44;
  g_44 = t;
  {
    t = term_h_44;
    t = table_put_0(t);
  }
  t = g_44;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm k_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_107(t);
          LocalPopChoice(o_44);
        }
      else
        {
          t = k_44;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_8);
    {
      ATerm q_44 = t;
      int v_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_44;
          w_44 = t;
          {
            ATerm x_44 = t;
            int y_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_43;
                t = get_config_0(t);
                LocalPopChoice(y_44);
              }
            else
              {
                t = x_44;
                t = fetch_1(t, Help_0);
              }
          }
          t = w_44;
          {
            t = system_usage_0(t);
            {
              t = term_x_35;
              t = exit_0(t);
            }
          }
          LocalPopChoice(v_44);
        }
      else
        {
          t = q_44;
          {
            ATerm z_44 = t;
            int a_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm r_8 (ATerm t)
                  {
                    ATerm w_124 = NULL;
                    w_124 = t;
                    if(((v_124 != NULL) && (v_124 != w_124)))
                      _fail(w_124);
                    else
                      v_124 = w_124;
                    return(t);
                  }
                  t = Undefined_1(t, r_8);
                  return(t);
                }
                t = fetch_1(t, q_8);
                {
                  ATerm s_8 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_124)), term_c_45);
                    return(t);
                  }
                  t = say_1(t, s_8);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_b_18;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_45);
              }
            else
              {
                t = z_44;
                {
                }
              }
          }
        }
      {
        ATerm d_45;
        d_45 = t;
        {
          t = term_n_41;
          t = table_destroy_0(t);
        }
        t = d_45;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm))
{
  t = parse_options_1(t, e_113);
  {
    t = store_options_0(t);
    {
      t = g_113(t);
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_113);
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            {
              ATerm g_45 = t;
              int h_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_113(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_45);
                }
              else
                {
                  t = g_45;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_113(t);
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_113);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_8, x_113, y_113, u_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm k_45;
      k_45 = t;
      {
        ATerm z_124 = NULL;
        ATerm a_125 = NULL;
        t = term_s_37;
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
          t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATempty, not_null(z_124)));
          t = printnl_0(t);
        }
      }
      t = k_45;
      return(t);
    }
    t = if_verbose2_1(t, x_8);
    return(t);
  }
  t = iowrap_4(t, p_113, q_113, r_113, v_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_113 (ATerm), ATerm o_113 (ATerm))
{
  t = iowrap_3(t, n_113, o_113, default_usage_0);
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

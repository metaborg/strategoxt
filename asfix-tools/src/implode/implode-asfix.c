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
ATerm term_p_44;
ATerm term_d_44;
ATerm term_n_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_b_43;
ATerm term_p_41;
ATerm term_l_41;
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
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_n_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_b_33;
ATerm term_z_32;
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
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_a_35);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_a_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_a_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_b_43, term_a_35);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__3, term_i_41, term_j_41, (ATerm) ATempty);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm o_75 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm h_82 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm g_82 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm f_82 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm e_82 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm d_82 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm k_82 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm a_86 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm alt_2 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm b_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm l_84 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_83 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm n_91 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm sort_1 (ATerm, ATerm a_1 (ATerm));
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm u_69 (ATerm));
ATerm opt_1 (ATerm, ATerm z_0 (ATerm));
ATerm cf_1 (ATerm, ATerm y_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm e_98 (ATerm));
ATerm prod_3 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm k_84 (ATerm));
ATerm remove_x_1 (ATerm, ATerm q_82 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_91 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_101 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_104 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_109 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm));
ATerm crush_2 (ATerm, ATerm z_95 (ATerm), ATerm a_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_104 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_109 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm lit_1 (ATerm, ATerm r_0 (ATerm));
ATerm list_1 (ATerm, ATerm p_90 (ATerm));
ATerm seq_1 (ATerm, ATerm s_74 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm o_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm iter_1 (ATerm, ATerm l_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm n_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm e_74 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_101 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_102 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_103 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_103 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_103 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_109 (ATerm), ATerm w_109 (ATerm));
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
ATerm amb_1 (ATerm t, ATerm o_75 (ATerm))
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
            t = o_75(t);
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
ATerm ReplConsSome_1 (ATerm t, ATerm h_82 (ATerm))
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
                    t = h_82(t);
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
ATerm ReplConsIns_1 (ATerm t, ATerm g_82 (ATerm))
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
                    t = g_82(t);
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
ATerm ReplConsNone_1 (ATerm t, ATerm f_82 (ATerm))
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
ATerm ReplConsNil_1 (ATerm t, ATerm e_82 (ATerm))
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
ATerm ReplNamedCons_1 (ATerm t, ATerm d_82 (ATerm))
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
              t = map_1(t, d_82);
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
ATerm ReplCons_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, k_82);
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
            t = ReplConsNil_1(t, k_82);
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
                  t = ReplConsNone_1(t, k_82);
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
                        t = ReplConsIns_1(t, k_82);
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
                              t = ReplConsSome_1(t, k_82);
                              LocalPopChoice(n_11);
                            }
                          else
                            {
                              t = m_11;
                              t = ReplConsConc_1(t, k_82);
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
ATerm Conc_2 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm))
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
            t = l_69(t);
            {
              s_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm w_27 = NULL;
                  t = m_69(t);
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
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  z_36 = t;
  f_32 :
  if(match_cons(z_36, sym_prod_3))
    {
      a_37 = ATgetArgument(z_36, 0);
      j_37 = ATgetArgument(z_36, 1);
      n_37 = ATgetArgument(z_36, 2);
      u_32 :
      if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
        {
          b_37 = ATgetFirst((ATermList) a_37);
          d_37 = (ATerm) ATgetNext((ATermList) a_37);
          v_32 :
          if(((ATgetType(d_37) == AT_LIST) && ATisEmpty(d_37)))
            {
              w_32 :
              if(match_cons(j_37, sym_opt_1))
                {
                  k_37 = ATgetArgument(j_37, 0);
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
                  if(match_cons(j_37, sym_cf_1))
                    {
                      k_37 = ATgetArgument(j_37, 0);
                      x_35 :
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
                      if(match_cons(j_37, sym_iter_1))
                        {
                          k_37 = ATgetArgument(j_37, 0);
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
                          if(match_cons(j_37, sym_iter_sep_2))
                            {
                              k_37 = ATgetArgument(j_37, 0);
                              y_36 = ATgetArgument(j_37, 1);
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
                      if(match_cons(j_37, sym_iter_1))
                        {
                          k_37 = ATgetArgument(j_37, 0);
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
                              if(match_cons(j_37, sym_iter_sep_2))
                                {
                                  k_37 = ATgetArgument(j_37, 0);
                                  y_36 = ATgetArgument(j_37, 1);
                                  g_36 :
                                  t = term_k_15;
                                }
                              else
                                {
                                  if(match_cons(j_37, sym_cf_1))
                                    {
                                      k_37 = ATgetArgument(j_37, 0);
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
                                          if(match_cons(j_37, sym_cf_1))
                                            {
                                              k_37 = ATgetArgument(j_37, 0);
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
              if(match_cons(j_37, sym_opt_1))
                {
                  k_37 = ATgetArgument(j_37, 0);
                  t = term_l_15;
                }
              else
                {
                  if(match_cons(j_37, sym_cf_1))
                    {
                      k_37 = ATgetArgument(j_37, 0);
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
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym_prod_3))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      u_38 = ATgetArgument(r_38, 2);
      {
        ATerm w_38 = NULL;
        t = not_null(u_38);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL;
            x_38 = t;
            p_38 :
            if(match_cons(x_38, sym_cons_1))
              {
                y_38 = ATgetArgument(x_38, 0);
                if(((w_38 != NULL) && (w_38 != y_38)))
                  _fail(y_38);
                else
                  w_38 = y_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, j_3);
        }
        t = not_null(w_38);
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
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_appl_2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      {
        ATerm k_39 = NULL,m_39 = NULL;
        ATerm m_15;
        m_15 = t;
        {
          ATerm l_39 = NULL;
          t = not_null(g_39);
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
                l_39 = t;
                if(((k_39 != NULL) && (k_39 != l_39)))
                  _fail(l_39);
                else
                  k_39 = l_39;
              }
            }
          }
        }
        t = m_15;
        {
          t = SSL_mkterm(not_null(k_39), not_null(h_39));
          {
            m_39 = t;
            t = not_null(m_39);
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
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  a_40 = t;
  v_39 :
  if(match_cons(a_40, sym_prod_3))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      g_40 = ATgetArgument(a_40, 2);
      w_39 :
      if(((ATgetType(b_40) == AT_LIST) && ATisEmpty(b_40)))
        {
          x_39 :
          if(match_cons(c_40, sym_iter_star_1))
            {
              d_40 = ATgetArgument(c_40, 0);
              t = term_h_16;
            }
          else
            {
              if(match_cons(c_40, sym_iter_star_sep_2))
                {
                  d_40 = ATgetArgument(c_40, 0);
                  z_39 = ATgetArgument(c_40, 1);
                  t = term_h_16;
                }
              else
                {
                  if(match_cons(c_40, sym_cf_1))
                    {
                      d_40 = ATgetArgument(c_40, 0);
                      y_39 :
                      if(match_cons(d_40, sym_iter_star_1))
                        {
                          e_40 = ATgetArgument(d_40, 0);
                          t = term_h_16;
                        }
                      else
                        {
                          if(match_cons(d_40, sym_iter_star_sep_2))
                            {
                              e_40 = ATgetArgument(d_40, 0);
                              f_40 = ATgetArgument(d_40, 1);
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
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym_appl_2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      {
        ATerm t_40 = NULL;
        ATerm u_40 = NULL;
        t = not_null(p_40);
        {
          t = ConstrNil_0(t);
          {
            u_40 = t;
            if(((t_40 != NULL) && (t_40 != u_40)))
              _fail(u_40);
            else
              t_40 = u_40;
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
  ATerm b_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_ReplaceAppl_0))
    {
      ATerm d_41 = NULL,f_41 = NULL;
      ATerm w_16;
      w_16 = t;
      {
        ATerm e_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
      }
      t = w_16;
      {
        ATerm g_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(d_41));
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
        t = not_null(f_41);
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
      ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,t_42 = NULL;
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
                      ATerm h_42 = NULL;
                      h_42 = t;
                      if(((d_42 != NULL) && (d_42 != h_42)))
                        _fail(h_42);
                      else
                        d_42 = h_42;
                      return(t);
                    }
                    t = cf_1(t, r_3);
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    {
                      ATerm i_42 = NULL;
                      i_42 = t;
                      if(((d_42 != NULL) && (d_42 != i_42)))
                        _fail(i_42);
                      else
                        d_42 = i_42;
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
                ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
                j_42 = t;
                n_41 :
                if(match_cons(j_42, sym_alt_2))
                  {
                    k_42 = ATgetArgument(j_42, 0);
                    l_42 = ATgetArgument(j_42, 1);
                    {
                      if(((e_42 != NULL) && (e_42 != k_42)))
                        _fail(k_42);
                      else
                        e_42 = k_42;
                      if(((f_42 != NULL) && (f_42 != l_42)))
                        _fail(l_42);
                      else
                        f_42 = l_42;
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
            ATerm m_42 = NULL;
            m_42 = t;
            if(((g_42 != NULL) && (g_42 != m_42)))
              _fail(m_42);
            else
              g_42 = m_42;
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
                  ATerm o_42 = NULL;
                  o_42 = t;
                  if(((d_42 != NULL) && (d_42 != o_42)))
                    _fail(o_42);
                  else
                    d_42 = o_42;
                  return(t);
                }
                t = Cons_2(t, x_3, Nil_0);
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
                  p_42 = t;
                  r_41 :
                  if(match_cons(p_42, sym_alt_2))
                    {
                      q_42 = ATgetArgument(p_42, 0);
                      r_42 = ATgetArgument(p_42, 1);
                      {
                        if(((e_42 != NULL) && (e_42 != q_42)))
                          _fail(q_42);
                        else
                          e_42 = q_42;
                        if(((f_42 != NULL) && (f_42 != r_42)))
                          _fail(r_42);
                        else
                          f_42 = r_42;
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
              ATerm s_42 = NULL;
              s_42 = t;
              if(((g_42 != NULL) && (g_42 != s_42)))
                _fail(s_42);
              else
                g_42 = s_42;
              return(t);
            }
            t = appl_2(t, t_3, u_3);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(e_42), not_null(f_42)), term_a_18);
        {
          ATerm z_43 (ATerm t)
          {
            ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
            ATerm a_44 (ATerm t)
            {
              ATerm z_42 = NULL;
              if(((d_42 != NULL) && (d_42 != v_42)))
                _fail(v_42);
              else
                d_42 = v_42;
              {
                if(((z_42 != NULL) && (z_42 != y_42)))
                  _fail(y_42);
                else
                  z_42 = y_42;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(z_42), not_null(g_42));
              }
              return(t);
            }
            ATerm b_44 (ATerm t)
            {
              ATerm c_43 = NULL;
              if(((d_42 != NULL) && (d_42 != w_42)))
                _fail(w_42);
              else
                d_42 = w_42;
              {
                if(((t_42 != NULL) && (t_42 != x_42)))
                  _fail(x_42);
                else
                  t_42 = x_42;
                {
                  if(((c_43 != NULL) && (c_43 != y_42)))
                    _fail(y_42);
                  else
                    c_43 = y_42;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(c_43), not_null(g_42));
                }
              }
              return(t);
            }
            ATerm c_44 (ATerm t)
            {
              ATerm i_43 = NULL;
              ATerm l_43 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_42), term_a_18);
              {
                t = add_0(t);
                {
                  l_43 = t;
                  if(((i_43 != NULL) && (i_43 != l_43)))
                    _fail(l_43);
                  else
                    i_43 = l_43;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(i_43));
                t = z_43(t);
              }
              return(t);
            }
            u_42 = t;
            x_41 :
            if(match_cons(u_42, sym__2))
              {
                v_42 = ATgetArgument(u_42, 0);
                y_42 = ATgetArgument(u_42, 1);
                y_41 :
                if(match_cons(v_42, sym_alt_2))
                  {
                    w_42 = ATgetArgument(v_42, 0);
                    x_42 = ATgetArgument(v_42, 1);
                    {
                      ATerm b_18 = t;
                      int c_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_44(t);
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
                                t = b_44(t);
                                LocalPopChoice(e_18);
                              }
                            else
                              {
                                t = d_18;
                                t = c_44(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = a_44(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = z_43(t);
        }
      }
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm m_43 = NULL;
        m_43 = t;
        c_42 :
        if(match_cons(m_43, sym_FlatAlt_0))
          {
            ATerm o_43 = NULL,q_43 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm p_43 = NULL;
              t = SSLgetAnnotations(not_null(m_43));
              {
                p_43 = t;
                if(((o_43 != NULL) && (o_43 != p_43)))
                  _fail(p_43);
                else
                  o_43 = p_43;
              }
            }
            t = f_18;
            {
              ATerm r_43 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(o_43));
              {
                r_43 = t;
                if(((q_43 != NULL) && (q_43 != r_43)))
                  _fail(r_43);
                else
                  q_43 = r_43;
              }
              t = not_null(q_43);
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
  ATerm o_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_bracket_0))
    {
      ATerm g_18 = t;
      int h_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_44 = NULL,s_44 = NULL;
          ATerm q_18;
          q_18 = t;
          {
            ATerm r_44 = NULL;
            t = SSLgetAnnotations(not_null(o_44));
            {
              r_44 = t;
              if(((q_44 != NULL) && (q_44 != r_44)))
                _fail(r_44);
              else
                q_44 = r_44;
            }
          }
          t = q_18;
          {
            ATerm t_44 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(q_44));
            {
              t_44 = t;
              if(((s_44 != NULL) && (s_44 != t_44)))
                _fail(t_44);
              else
                s_44 = t_44;
            }
            t = not_null(s_44);
          }
          LocalPopChoice(h_18);
        }
      else
        {
          t = g_18;
          {
            ATerm v_44 = NULL,x_44 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              ATerm w_44 = NULL;
              t = SSLgetAnnotations(not_null(o_44));
              {
                w_44 = t;
                if(((v_44 != NULL) && (v_44 != w_44)))
                  _fail(w_44);
                else
                  v_44 = w_44;
              }
            }
            t = r_18;
            {
              ATerm y_44 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(v_44));
              {
                y_44 = t;
                if(((x_44 != NULL) && (x_44 != y_44)))
                  _fail(y_44);
                else
                  x_44 = y_44;
              }
              t = not_null(x_44);
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
ATerm oncetd_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm f_45 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_86(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = _one(t, f_45);
      }
    return(t);
  }
  t = f_45(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm f_1 (ATerm))
{
  ATerm p_45 = NULL,q_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym_cons_1))
    {
      q_45 = ATgetArgument(p_45, 0);
      {
        ATerm g_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_45 = NULL,v_45 = NULL;
            ATerm u_45 = NULL;
            t = SSLgetAnnotations(not_null(p_45));
            {
              u_45 = t;
              if(((t_45 != NULL) && (t_45 != u_45)))
                _fail(u_45);
              else
                t_45 = u_45;
            }
            {
              t = not_null(q_45);
              {
                ATerm x_45 = NULL;
                t = f_1(t);
                {
                  v_45 = t;
                  {
                    ATerm y_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(v_45)), not_null(t_45));
                    {
                      y_45 = t;
                      if(((x_45 != NULL) && (x_45 != y_45)))
                        _fail(y_45);
                      else
                        x_45 = y_45;
                    }
                    t = not_null(x_45);
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
              ATerm b_46 = NULL,d_46 = NULL;
              ATerm c_46 = NULL;
              t = SSLgetAnnotations(not_null(p_45));
              {
                c_46 = t;
                if(((b_46 != NULL) && (b_46 != c_46)))
                  _fail(c_46);
                else
                  b_46 = c_46;
              }
              {
                t = not_null(q_45);
                {
                  ATerm f_46 = NULL;
                  t = f_1(t);
                  {
                    d_46 = t;
                    {
                      ATerm g_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(d_46)), not_null(b_46));
                      {
                        g_46 = t;
                        if(((f_46 != NULL) && (f_46 != g_46)))
                          _fail(g_46);
                        else
                          f_46 = g_46;
                      }
                      t = not_null(f_46);
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
  ATerm y_46 = NULL,z_46 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym_lex_1))
    {
      z_46 = ATgetArgument(y_46, 0);
      {
        ATerm n_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_47 = NULL,e_47 = NULL;
            ATerm d_47 = NULL;
            t = SSLgetAnnotations(not_null(y_46));
            {
              d_47 = t;
              if(((c_47 != NULL) && (c_47 != d_47)))
                _fail(d_47);
              else
                c_47 = d_47;
            }
            {
              t = not_null(z_46);
              {
                ATerm g_47 = NULL;
                t = e_1(t);
                {
                  e_47 = t;
                  {
                    ATerm h_47 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(e_47)), not_null(c_47));
                    {
                      h_47 = t;
                      if(((g_47 != NULL) && (g_47 != h_47)))
                        _fail(h_47);
                      else
                        g_47 = h_47;
                    }
                    t = not_null(g_47);
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
              ATerm k_47 = NULL,m_47 = NULL;
              ATerm l_47 = NULL;
              t = SSLgetAnnotations(not_null(y_46));
              {
                l_47 = t;
                if(((k_47 != NULL) && (k_47 != l_47)))
                  _fail(l_47);
                else
                  k_47 = l_47;
              }
              {
                t = not_null(z_46);
                {
                  ATerm o_47 = NULL;
                  t = e_1(t);
                  {
                    m_47 = t;
                    {
                      ATerm p_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(m_47)), not_null(k_47));
                      {
                        p_47 = t;
                        if(((o_47 != NULL) && (o_47 != p_47)))
                          _fail(p_47);
                        else
                          o_47 = p_47;
                      }
                      t = not_null(o_47);
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
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  i_48 :
  if(match_cons(j_48, sym_alt_2))
    {
      k_48 = ATgetArgument(j_48, 0);
      l_48 = ATgetArgument(j_48, 1);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = NULL,r_48 = NULL;
            ATerm q_48 = NULL;
            t = SSLgetAnnotations(not_null(j_48));
            {
              q_48 = t;
              if(((p_48 != NULL) && (p_48 != q_48)))
                _fail(q_48);
              else
                p_48 = q_48;
            }
            {
              t = not_null(k_48);
              {
                ATerm t_48 = NULL;
                t = c_1(t);
                {
                  r_48 = t;
                  {
                    t = not_null(l_48);
                    {
                      ATerm v_48 = NULL;
                      t = d_1(t);
                      {
                        t_48 = t;
                        {
                          ATerm w_48 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(r_48), not_null(t_48)), not_null(p_48));
                          {
                            w_48 = t;
                            if(((v_48 != NULL) && (v_48 != w_48)))
                              _fail(w_48);
                            else
                              v_48 = w_48;
                          }
                          t = not_null(v_48);
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
              ATerm a_49 = NULL,c_49 = NULL;
              ATerm b_49 = NULL;
              t = SSLgetAnnotations(not_null(j_48));
              {
                b_49 = t;
                if(((a_49 != NULL) && (a_49 != b_49)))
                  _fail(b_49);
                else
                  a_49 = b_49;
              }
              {
                t = not_null(k_48);
                {
                  ATerm e_49 = NULL;
                  t = c_1(t);
                  {
                    c_49 = t;
                    {
                      t = not_null(l_48);
                      {
                        ATerm g_49 = NULL;
                        t = d_1(t);
                        {
                          e_49 = t;
                          {
                            ATerm h_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(c_49), not_null(e_49)), not_null(a_49));
                            {
                              h_49 = t;
                              if(((g_49 != NULL) && (g_49 != h_49)))
                                _fail(h_49);
                              else
                                g_49 = h_49;
                            }
                            t = not_null(g_49);
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
  ATerm f_50 = NULL,g_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym_varsym_1))
    {
      g_50 = ATgetArgument(f_50, 0);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_50 = NULL,l_50 = NULL;
            ATerm k_50 = NULL;
            t = SSLgetAnnotations(not_null(f_50));
            {
              k_50 = t;
              if(((j_50 != NULL) && (j_50 != k_50)))
                _fail(k_50);
              else
                j_50 = k_50;
            }
            {
              t = not_null(g_50);
              {
                ATerm n_50 = NULL;
                t = b_1(t);
                {
                  l_50 = t;
                  {
                    ATerm o_50 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(l_50)), not_null(j_50));
                    {
                      o_50 = t;
                      if(((n_50 != NULL) && (n_50 != o_50)))
                        _fail(o_50);
                      else
                        n_50 = o_50;
                    }
                    t = not_null(n_50);
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
              ATerm r_50 = NULL,t_50 = NULL;
              ATerm s_50 = NULL;
              t = SSLgetAnnotations(not_null(f_50));
              {
                s_50 = t;
                if(((r_50 != NULL) && (r_50 != s_50)))
                  _fail(s_50);
                else
                  r_50 = s_50;
              }
              {
                t = not_null(g_50);
                {
                  ATerm v_50 = NULL;
                  t = b_1(t);
                  {
                    t_50 = t;
                    {
                      ATerm w_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(t_50)), not_null(r_50));
                      {
                        w_50 = t;
                        if(((v_50 != NULL) && (v_50 != w_50)))
                          _fail(w_50);
                        else
                          v_50 = w_50;
                      }
                      t = not_null(v_50);
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
                        ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
                        d_52 = t;
                        k_51 :
                        if(match_cons(d_52, sym_prod_3))
                          {
                            e_52 = ATgetArgument(d_52, 0);
                            l_52 = ATgetArgument(d_52, 1);
                            p_52 = ATgetArgument(d_52, 2);
                            l_51 :
                            if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
                              {
                                f_52 = ATgetFirst((ATermList) e_52);
                                k_52 = (ATerm) ATgetNext((ATermList) e_52);
                                m_51 :
                                if(match_cons(f_52, sym_cf_1))
                                  {
                                    i_52 = ATgetArgument(f_52, 0);
                                    n_51 :
                                    if(match_cons(i_52, sym_iter_sep_2))
                                      {
                                        j_52 = ATgetArgument(i_52, 0);
                                        b_52 = ATgetArgument(i_52, 1);
                                        o_51 :
                                        if(((ATgetType(k_52) == AT_LIST) && ATisEmpty(k_52)))
                                          {
                                            p_51 :
                                            if(match_cons(l_52, sym_cf_1))
                                              {
                                                n_52 = ATgetArgument(l_52, 0);
                                                q_51 :
                                                if(match_cons(n_52, sym_iter_star_sep_2))
                                                  {
                                                    o_52 = ATgetArgument(n_52, 0);
                                                    c_52 = ATgetArgument(n_52, 1);
                                                    r_51 :
                                                    if(match_cons(p_52, sym_no_attrs_0))
                                                      {
                                                        if(((j_52 != NULL) && (j_52 != o_52)))
                                                          _fail(o_52);
                                                        else
                                                          j_52 = o_52;
                                                        if(((b_52 != NULL) && (b_52 != c_52)))
                                                          _fail(c_52);
                                                        else
                                                          b_52 = c_52;
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(i_52, sym_iter_1))
                                          {
                                            j_52 = ATgetArgument(i_52, 0);
                                            s_51 :
                                            if(((ATgetType(k_52) == AT_LIST) && ATisEmpty(k_52)))
                                              {
                                                t_51 :
                                                if(match_cons(l_52, sym_cf_1))
                                                  {
                                                    n_52 = ATgetArgument(l_52, 0);
                                                    u_51 :
                                                    if(match_cons(n_52, sym_iter_star_1))
                                                      {
                                                        o_52 = ATgetArgument(n_52, 0);
                                                        v_51 :
                                                        if(match_cons(p_52, sym_no_attrs_0))
                                                          {
                                                            if(((j_52 != NULL) && (j_52 != o_52)))
                                                              _fail(o_52);
                                                            else
                                                              j_52 = o_52;
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
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
                                      ATerm t_52 = NULL;
                                      t_52 = t;
                                      w_51 :
                                      if(!(match_string(t_52, "bracket")))
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
                                ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
                                u_52 = t;
                                x_51 :
                                if(match_cons(u_52, sym_prod_3))
                                  {
                                    v_52 = ATgetArgument(u_52, 0);
                                    w_52 = ATgetArgument(u_52, 1);
                                    y_52 = ATgetArgument(u_52, 2);
                                    y_51 :
                                    if(match_cons(w_52, sym_sort_1))
                                      {
                                        x_52 = ATgetArgument(w_52, 0);
                                        z_51 :
                                        if(match_string(x_52, "<START>"))
                                          {
                                            a_52 :
                                            if(!(match_cons(y_52, sym_no_attrs_0)))
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
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
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  g_53 = t;
  d_53 :
  if(match_cons(g_53, sym_appl_2))
    {
      h_53 = ATgetArgument(g_53, 0);
      i_53 = ATgetArgument(g_53, 1);
      e_53 :
      if(((ATgetType(i_53) == AT_LIST) && !(ATisEmpty(i_53))))
        {
          j_53 = ATgetFirst((ATermList) i_53);
          k_53 = (ATerm) ATgetNext((ATermList) i_53);
          f_53 :
          if(((ATgetType(k_53) == AT_LIST) && ATisEmpty(k_53)))
            {
              {
                t = not_null(h_53);
                t = injection_0(t);
                t = not_null(j_53);
              }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm bottomup_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = bottomup_1(t, l_84);
    return(t);
  }
  t = _all(t, t_4);
  t = l_84(t);
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
  ATerm u_53 = NULL;
  u_53 = t;
  r_53 :
  if(match_cons(u_53, sym_FlatInj_0))
    {
      ATerm w_53 = NULL,d_54 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm x_53 = NULL;
        t = SSLgetAnnotations(not_null(u_53));
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
      }
      t = c_24;
      {
        ATerm f_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(w_53));
        {
          f_54 = t;
          if(((d_54 != NULL) && (d_54 != f_54)))
            _fail(f_54);
          else
            d_54 = f_54;
        }
        t = not_null(d_54);
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
  ATerm n_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_RemoveLit_0))
    {
      ATerm p_54 = NULL,r_54 = NULL;
      ATerm g_24;
      g_24 = t;
      {
        ATerm q_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
      }
      t = g_24;
      {
        ATerm s_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(p_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
        t = not_null(r_54);
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
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
  ATerm j_62 (ATerm t)
  {
    ATerm y_58 = NULL;
    ATerm m_60 = NULL;
    ATerm s_62 (ATerm t)
    {
      ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
      z_58 = t;
      m_55 :
      if(match_cons(z_58, sym_appl_2))
        {
          a_59 = ATgetArgument(z_58, 0);
          h_59 = ATgetArgument(z_58, 1);
          n_55 :
          if(match_cons(a_59, sym_prod_3))
            {
              b_59 = ATgetArgument(a_59, 0);
              c_59 = ATgetArgument(a_59, 1);
              g_59 = ATgetArgument(a_59, 2);
              o_55 :
              if(match_cons(c_59, sym_cf_1))
                {
                  d_59 = ATgetArgument(c_59, 0);
                  p_55 :
                  if(match_cons(d_59, sym_iter_sep_2))
                    {
                      e_59 = ATgetArgument(d_59, 0);
                      f_59 = ATgetArgument(d_59, 1);
                      q_55 :
                      if(((ATgetType(h_59) == AT_LIST) && !(ATisEmpty(h_59))))
                        {
                          i_59 = ATgetFirst((ATermList) h_59);
                          j_59 = (ATerm) ATgetNext((ATermList) h_59);
                          r_55 :
                          if(((ATgetType(j_59) == AT_LIST) && ATisEmpty(j_59)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(i_59));
                            }
                          else
                            {
                              if(((ATgetType(j_59) == AT_LIST) && !(ATisEmpty(j_59))))
                                {
                                  k_59 = ATgetFirst((ATermList) j_59);
                                  l_59 = (ATerm) ATgetNext((ATermList) j_59);
                                  s_55 :
                                  if(((ATgetType(l_59) == AT_LIST) && !(ATisEmpty(l_59))))
                                    {
                                      m_59 = ATgetFirst((ATermList) l_59);
                                      n_59 = (ATerm) ATgetNext((ATermList) l_59);
                                      t_55 :
                                      if(((ATgetType(n_59) == AT_LIST) && ATisEmpty(n_59)))
                                        {
                                          {
                                            ATerm z_59 = NULL,b_60 = NULL;
                                            ATerm y_24;
                                            y_24 = t;
                                            {
                                              ATerm a_60 = NULL;
                                              t = not_null(i_59);
                                              {
                                                t = s_62(t);
                                                {
                                                  a_60 = t;
                                                  if(((z_59 != NULL) && (z_59 != a_60)))
                                                    _fail(a_60);
                                                  else
                                                    z_59 = a_60;
                                                }
                                              }
                                            }
                                            t = y_24;
                                            {
                                              ATerm c_60 = NULL;
                                              t = not_null(m_59);
                                              {
                                                t = s_62(t);
                                                {
                                                  c_60 = t;
                                                  if(((b_60 != NULL) && (b_60 != c_60)))
                                                    _fail(c_60);
                                                  else
                                                    b_60 = c_60;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_60)), (ATerm) ATinsert(ATempty, not_null(k_59))), not_null(z_59));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(n_59) == AT_LIST) && !(ATisEmpty(n_59))))
                                            {
                                              r_59 = ATgetFirst((ATermList) n_59);
                                              s_59 = (ATerm) ATgetNext((ATermList) n_59);
                                              u_55 :
                                              if(((ATgetType(s_59) == AT_LIST) && !(ATisEmpty(s_59))))
                                                {
                                                  t_59 = ATgetFirst((ATermList) s_59);
                                                  u_59 = (ATerm) ATgetNext((ATermList) s_59);
                                                  v_55 :
                                                  if(((ATgetType(u_59) == AT_LIST) && ATisEmpty(u_59)))
                                                    {
                                                      {
                                                        ATerm i_60 = NULL,k_60 = NULL;
                                                        ATerm z_24;
                                                        z_24 = t;
                                                        {
                                                          ATerm j_60 = NULL;
                                                          t = not_null(i_59);
                                                          {
                                                            t = s_62(t);
                                                            {
                                                              j_60 = t;
                                                              if(((i_60 != NULL) && (i_60 != j_60)))
                                                                _fail(j_60);
                                                              else
                                                                i_60 = j_60;
                                                            }
                                                          }
                                                        }
                                                        t = z_24;
                                                        {
                                                          ATerm l_60 = NULL;
                                                          t = not_null(t_59);
                                                          {
                                                            t = s_62(t);
                                                            {
                                                              l_60 = t;
                                                              if(((k_60 != NULL) && (k_60 != l_60)))
                                                                _fail(l_60);
                                                              else
                                                                k_60 = l_60;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_60)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_59)), not_null(m_59)), not_null(k_59))), not_null(i_60));
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
    t = s_62(t);
    {
      m_60 = t;
      if(((y_58 != NULL) && (y_58 != m_60)))
        _fail(m_60);
      else
        y_58 = m_60;
    }
    t = not_null(y_58);
    return(t);
  }
  ATerm k_62 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(t_58));
    return(t);
  }
  ATerm l_62 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_62 (ATerm t)
  {
    t = not_null(t_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm n_62 (ATerm t)
  {
    ATerm r_60 = NULL;
    ATerm b_62 = NULL;
    ATerm b_63 (ATerm t)
    {
      ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
      s_60 = t;
      e_56 :
      if(match_cons(s_60, sym_appl_2))
        {
          t_60 = ATgetArgument(s_60, 0);
          g_61 = ATgetArgument(s_60, 1);
          k_56 :
          if(match_cons(t_60, sym_prod_3))
            {
              u_60 = ATgetArgument(t_60, 0);
              v_60 = ATgetArgument(t_60, 1);
              f_61 = ATgetArgument(t_60, 2);
              l_56 :
              if(match_cons(v_60, sym_cf_1))
                {
                  w_60 = ATgetArgument(v_60, 0);
                  m_56 :
                  if(match_cons(w_60, sym_iter_1))
                    {
                      x_60 = ATgetArgument(w_60, 0);
                      n_56 :
                      if(((ATgetType(g_61) == AT_LIST) && !(ATisEmpty(g_61))))
                        {
                          h_61 = ATgetFirst((ATermList) g_61);
                          i_61 = (ATerm) ATgetNext((ATermList) g_61);
                          o_56 :
                          if(((ATgetType(i_61) == AT_LIST) && ATisEmpty(i_61)))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(h_61));
                            }
                          else
                            {
                              if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
                                {
                                  j_61 = ATgetFirst((ATermList) i_61);
                                  k_61 = (ATerm) ATgetNext((ATermList) i_61);
                                  p_56 :
                                  if(((ATgetType(k_61) == AT_LIST) && ATisEmpty(k_61)))
                                    {
                                      {
                                        ATerm q_61 = NULL,s_61 = NULL;
                                        ATerm d_25;
                                        d_25 = t;
                                        {
                                          ATerm r_61 = NULL;
                                          t = not_null(h_61);
                                          {
                                            t = b_63(t);
                                            {
                                              r_61 = t;
                                              if(((q_61 != NULL) && (q_61 != r_61)))
                                                _fail(r_61);
                                              else
                                                q_61 = r_61;
                                            }
                                          }
                                        }
                                        t = d_25;
                                        {
                                          ATerm t_61 = NULL;
                                          t = not_null(j_61);
                                          {
                                            t = b_63(t);
                                            {
                                              t_61 = t;
                                              if(((s_61 != NULL) && (s_61 != t_61)))
                                                _fail(t_61);
                                              else
                                                s_61 = t_61;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_61)), not_null(q_61));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(k_61) == AT_LIST) && !(ATisEmpty(k_61))))
                                        {
                                          l_61 = ATgetFirst((ATermList) k_61);
                                          m_61 = (ATerm) ATgetNext((ATermList) k_61);
                                          q_56 :
                                          if(((ATgetType(m_61) == AT_LIST) && ATisEmpty(m_61)))
                                            {
                                              {
                                                ATerm x_61 = NULL,z_61 = NULL;
                                                ATerm e_25;
                                                e_25 = t;
                                                {
                                                  ATerm y_61 = NULL;
                                                  t = not_null(h_61);
                                                  {
                                                    t = b_63(t);
                                                    {
                                                      y_61 = t;
                                                      if(((x_61 != NULL) && (x_61 != y_61)))
                                                        _fail(y_61);
                                                      else
                                                        x_61 = y_61;
                                                    }
                                                  }
                                                }
                                                t = e_25;
                                                {
                                                  ATerm a_62 = NULL;
                                                  t = not_null(l_61);
                                                  {
                                                    t = b_63(t);
                                                    {
                                                      a_62 = t;
                                                      if(((z_61 != NULL) && (z_61 != a_62)))
                                                        _fail(a_62);
                                                      else
                                                        z_61 = a_62;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_61)), (ATerm) ATinsert(ATempty, not_null(j_61))), not_null(x_61));
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
    t = b_63(t);
    {
      b_62 = t;
      if(((r_60 != NULL) && (r_60 != b_62)))
        _fail(b_62);
      else
        r_60 = b_62;
    }
    t = not_null(r_60);
    return(t);
  }
  ATerm o_62 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(t_58));
    return(t);
  }
  ATerm p_62 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm q_62 (ATerm t)
  {
    t = not_null(t_58);
    t = FlatList_0(t);
    return(t);
  }
  ATerm r_62 (ATerm t)
  {
    ATerm f_62 = NULL,h_62 = NULL;
    ATerm f_25;
    f_25 = t;
    {
      ATerm g_62 = NULL;
      t = SSLgetAnnotations(not_null(v_58));
      {
        g_62 = t;
        if(((f_62 != NULL) && (f_62 != g_62)))
          _fail(g_62);
        else
          f_62 = g_62;
      }
    }
    t = f_25;
    {
      ATerm i_62 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(f_62));
      {
        i_62 = t;
        if(((h_62 != NULL) && (h_62 != i_62)))
          _fail(i_62);
        else
          h_62 = i_62;
      }
      t = not_null(h_62);
    }
    return(t);
  }
  v_58 = t;
  a_57 :
  if(match_cons(v_58, sym_appl_2))
    {
      h_58 = ATgetArgument(v_58, 0);
      r_58 = ATgetArgument(v_58, 1);
      b_57 :
      if(match_cons(h_58, sym_prod_3))
        {
          i_58 = ATgetArgument(h_58, 0);
          n_58 = ATgetArgument(h_58, 1);
          q_58 = ATgetArgument(h_58, 2);
          c_57 :
          if(match_cons(n_58, sym_cf_1))
            {
              o_58 = ATgetArgument(n_58, 0);
              d_57 :
              if(match_cons(o_58, sym_iter_sep_2))
                {
                  p_58 = ATgetArgument(o_58, 0);
                  g_58 = ATgetArgument(o_58, 1);
                  e_57 :
                  if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
                    {
                      t_58 = ATgetFirst((ATermList) r_58);
                      u_58 = (ATerm) ATgetNext((ATermList) r_58);
                      f_57 :
                      if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                        {
                          g_57 :
                          {
                            ATerm g_25 = t;
                            int h_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_62(t);
                                LocalPopChoice(h_25);
                              }
                            else
                              {
                                t = g_25;
                                t = k_62(t);
                              }
                          }
                        }
                      else
                        {
                          m_57 :
                          t = j_62(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(o_58, sym_iter_star_sep_2))
                    {
                      p_58 = ATgetArgument(o_58, 0);
                      g_58 = ATgetArgument(o_58, 1);
                      n_57 :
                      if(((ATgetType(i_58) == AT_LIST) && ATisEmpty(i_58)))
                        {
                          o_57 :
                          if(((ATgetType(r_58) == AT_LIST) && ATisEmpty(r_58)))
                            {
                              t = l_62(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
                            {
                              j_58 = ATgetFirst((ATermList) i_58);
                              m_58 = (ATerm) ATgetNext((ATermList) i_58);
                              p_57 :
                              if(match_cons(j_58, sym_cf_1))
                                {
                                  k_58 = ATgetArgument(j_58, 0);
                                  q_57 :
                                  if(match_cons(k_58, sym_iter_sep_2))
                                    {
                                      l_58 = ATgetArgument(k_58, 0);
                                      f_58 = ATgetArgument(k_58, 1);
                                      r_57 :
                                      if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                        {
                                          s_57 :
                                          if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
                                            {
                                              t_58 = ATgetFirst((ATermList) r_58);
                                              u_58 = (ATerm) ATgetNext((ATermList) r_58);
                                              t_57 :
                                              if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                                {
                                                  t = m_62(t);
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
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
                      if(match_cons(o_58, sym_iter_1))
                        {
                          p_58 = ATgetArgument(o_58, 0);
                          u_57 :
                          if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
                            {
                              t_58 = ATgetFirst((ATermList) r_58);
                              u_58 = (ATerm) ATgetNext((ATermList) r_58);
                              v_57 :
                              if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                {
                                  w_57 :
                                  {
                                    ATerm i_25 = t;
                                    int j_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_62(t);
                                        LocalPopChoice(j_25);
                                      }
                                    else
                                      {
                                        t = i_25;
                                        t = o_62(t);
                                      }
                                  }
                                }
                              else
                                {
                                  x_57 :
                                  t = n_62(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(o_58, sym_iter_star_1))
                            {
                              p_58 = ATgetArgument(o_58, 0);
                              y_57 :
                              if(((ATgetType(i_58) == AT_LIST) && ATisEmpty(i_58)))
                                {
                                  z_57 :
                                  if(((ATgetType(r_58) == AT_LIST) && ATisEmpty(r_58)))
                                    {
                                      t = p_62(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
                                    {
                                      j_58 = ATgetFirst((ATermList) i_58);
                                      m_58 = (ATerm) ATgetNext((ATermList) i_58);
                                      a_58 :
                                      if(match_cons(j_58, sym_cf_1))
                                        {
                                          k_58 = ATgetArgument(j_58, 0);
                                          b_58 :
                                          if(match_cons(k_58, sym_iter_1))
                                            {
                                              l_58 = ATgetArgument(k_58, 0);
                                              c_58 :
                                              if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
                                                {
                                                  d_58 :
                                                  if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
                                                    {
                                                      t_58 = ATgetFirst((ATermList) r_58);
                                                      u_58 = (ATerm) ATgetNext((ATermList) r_58);
                                                      e_58 :
                                                      if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
                                                        {
                                                          t = q_62(t);
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
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
      if(match_cons(v_58, sym_FlatList_0))
        {
          t = r_62(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm))
{
  ATerm m_63 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83(t);
        t = m_63(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = l_83(t);
      }
    return(t);
  }
  t = m_63(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_83 (ATerm))
{
  t = repeat_2(t, n_83, _id);
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
  ATerm p_63 = NULL;
  p_63 = t;
  o_63 :
  if(((ATgetType(p_63) == AT_LIST) && ATisEmpty(p_63)))
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  t_63 :
  if(((ATgetType(u_63) == AT_LIST) && !(ATisEmpty(u_63))))
    {
      v_63 = ATgetFirst((ATermList) u_63);
      w_63 = (ATerm) ATgetNext((ATermList) u_63);
      {
        ATerm z_63 = NULL;
        ATerm a_64 = NULL;
        t = not_null(w_63);
        {
          t = De_Escape_0(t);
          {
            a_64 = t;
            if(((z_63 != NULL) && (z_63 != a_64)))
              _fail(a_64);
            else
              z_63 = a_64;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(z_63)), not_null(v_63));
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
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  q_64 = t;
  m_64 :
  if(((ATgetType(q_64) == AT_LIST) && !(ATisEmpty(q_64))))
    {
      r_64 = ATgetFirst((ATermList) q_64);
      s_64 = (ATerm) ATgetNext((ATermList) q_64);
      n_64 :
      if(match_int(r_64, 92))
        {
          o_64 :
          if(((ATgetType(s_64) == AT_LIST) && !(ATisEmpty(s_64))))
            {
              t_64 = ATgetFirst((ATermList) s_64);
              u_64 = (ATerm) ATgetNext((ATermList) s_64);
              p_64 :
              if(match_int(t_64, 92))
                {
                  ATerm w_64 = NULL;
                  ATerm x_64 = NULL;
                  t = not_null(u_64);
                  {
                    t = De_Escape_0(t);
                    {
                      x_64 = t;
                      if(((w_64 != NULL) && (w_64 != x_64)))
                        _fail(x_64);
                      else
                        w_64 = x_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_64)), term_m_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL;
  g_65 = t;
  c_65 :
  if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
    {
      h_65 = ATgetFirst((ATermList) g_65);
      i_65 = (ATerm) ATgetNext((ATermList) g_65);
      d_65 :
      if(match_int(h_65, 92))
        {
          e_65 :
          if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
            {
              j_65 = ATgetFirst((ATermList) i_65);
              k_65 = (ATerm) ATgetNext((ATermList) i_65);
              f_65 :
              if(match_int(j_65, 34))
                {
                  ATerm m_65 = NULL;
                  ATerm n_65 = NULL;
                  t = not_null(k_65);
                  {
                    t = De_Escape_0(t);
                    {
                      n_65 = t;
                      if(((m_65 != NULL) && (m_65 != n_65)))
                        _fail(n_65);
                      else
                        m_65 = n_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_65)), term_p_25);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
                    ATerm s_65 = NULL;
                    s_65 = t;
                    r_65 :
                    if(((ATgetType(s_65) == AT_LIST) && ATisEmpty(s_65)))
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
ATerm at_last_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm u_65 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = n_91(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = Cons_2(t, _id, u_65);
      }
    return(t);
  }
  t = u_65(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  w_65 :
  if(((ATgetType(x_65) == AT_LIST) && !(ATisEmpty(x_65))))
    {
      y_65 = ATgetFirst((ATermList) x_65);
      z_65 = (ATerm) ATgetNext((ATermList) x_65);
      t = not_null(z_65);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  e_66 :
  if(((ATgetType(f_66) == AT_LIST) && !(ATisEmpty(f_66))))
    {
      g_66 = ATgetFirst((ATermList) f_66);
      h_66 = (ATerm) ATgetNext((ATermList) f_66);
      t = not_null(g_66);
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
      ATerm p_67 = NULL;
      t = Hd_0(t);
      {
        p_67 = t;
        l_66 :
        if(!(match_int(p_67, 34)))
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
          ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
          q_67 = t;
          n_66 :
          if(((ATgetType(q_67) == AT_LIST) && !(ATisEmpty(q_67))))
            {
              r_67 = ATgetFirst((ATermList) q_67);
              s_67 = (ATerm) ATgetNext((ATermList) q_67);
              o_66 :
              if(match_int(r_67, 34))
                {
                  o_67 :
                  if(((ATgetType(s_67) == AT_LIST) && ATisEmpty(s_67)))
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
  ATerm t_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
  x_69 = t;
  s_69 :
  if(match_cons(x_69, sym_cf_1))
    {
      v_69 = ATgetArgument(x_69, 0);
      {
        ATerm z_69 = NULL;
        ATerm a_70 = NULL;
        t = not_null(v_69);
        {
          t = PpSym_0(t);
          {
            a_70 = t;
            if(((z_69 != NULL) && (z_69 != a_70)))
              _fail(a_70);
            else
              z_69 = a_70;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_26)), not_null(z_69)), (ATerm) ATinsert(ATempty, term_g_26));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(x_69, sym_lex_1))
        {
          v_69 = ATgetArgument(x_69, 0);
          {
            ATerm c_70 = NULL;
            ATerm d_70 = NULL;
            t = not_null(v_69);
            {
              t = PpSym_0(t);
              {
                d_70 = t;
                if(((c_70 != NULL) && (c_70 != d_70)))
                  _fail(d_70);
                else
                  c_70 = d_70;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_26)), not_null(c_70)), (ATerm) ATinsert(ATempty, term_g_26));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(x_69, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_t_26);
            }
          else
            {
              if(match_cons(x_69, sym_seq_2))
                {
                  v_69 = ATgetArgument(x_69, 0);
                  w_69 = ATgetArgument(x_69, 1);
                  {
                    ATerm g_70 = NULL;
                    ATerm h_70 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(w_69)), not_null(v_69));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        h_70 = t;
                        if(((g_70 != NULL) && (g_70 != h_70)))
                          _fail(h_70);
                        else
                          g_70 = h_70;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_26)), not_null(g_70)), (ATerm) ATinsert(ATempty, term_u_26));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(x_69, sym_opt_1))
                    {
                      v_69 = ATgetArgument(x_69, 0);
                      {
                        t = not_null(v_69);
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
                      if(match_cons(x_69, sym_iter_1))
                        {
                          v_69 = ATgetArgument(x_69, 0);
                          {
                            t = not_null(v_69);
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
                          if(match_cons(x_69, sym_iter_star_1))
                            {
                              v_69 = ATgetArgument(x_69, 0);
                              {
                                t = not_null(v_69);
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
                              if(match_cons(x_69, sym_iter_sep_2))
                                {
                                  v_69 = ATgetArgument(x_69, 0);
                                  w_69 = ATgetArgument(x_69, 1);
                                  {
                                    ATerm n_70 = NULL,p_70 = NULL;
                                    ATerm z_26;
                                    z_26 = t;
                                    {
                                      ATerm o_70 = NULL;
                                      t = not_null(v_69);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          o_70 = t;
                                          if(((n_70 != NULL) && (n_70 != o_70)))
                                            _fail(o_70);
                                          else
                                            n_70 = o_70;
                                        }
                                      }
                                    }
                                    t = z_26;
                                    {
                                      ATerm q_70 = NULL;
                                      t = not_null(w_69);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          q_70 = t;
                                          if(((p_70 != NULL) && (p_70 != q_70)))
                                            _fail(q_70);
                                          else
                                            p_70 = q_70;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_27)), not_null(p_70)), not_null(n_70)), (ATerm) ATinsert(ATempty, term_a_27));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(x_69, sym_iter_star_sep_2))
                                    {
                                      v_69 = ATgetArgument(x_69, 0);
                                      w_69 = ATgetArgument(x_69, 1);
                                      {
                                        ATerm t_70 = NULL,v_70 = NULL;
                                        ATerm c_27;
                                        c_27 = t;
                                        {
                                          ATerm u_70 = NULL;
                                          t = not_null(v_69);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              u_70 = t;
                                              if(((t_70 != NULL) && (t_70 != u_70)))
                                                _fail(u_70);
                                              else
                                                t_70 = u_70;
                                            }
                                          }
                                        }
                                        t = c_27;
                                        {
                                          ATerm w_70 = NULL;
                                          t = not_null(w_69);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              w_70 = t;
                                              if(((v_70 != NULL) && (v_70 != w_70)))
                                                _fail(w_70);
                                              else
                                                v_70 = w_70;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_27)), not_null(v_70)), not_null(t_70)), (ATerm) ATinsert(ATempty, term_a_27));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(x_69, sym_iter_n_2))
                                        {
                                          v_69 = ATgetArgument(x_69, 0);
                                          w_69 = ATgetArgument(x_69, 1);
                                          {
                                            ATerm y_70 = NULL;
                                            ATerm z_70 = NULL;
                                            t = not_null(v_69);
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
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_27)), not_null(y_70));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(x_69, sym_iter_sep_n_3))
                                            {
                                              v_69 = ATgetArgument(x_69, 0);
                                              w_69 = ATgetArgument(x_69, 1);
                                              t_69 = ATgetArgument(x_69, 2);
                                              {
                                                ATerm c_71 = NULL,e_71 = NULL;
                                                ATerm f_27;
                                                f_27 = t;
                                                {
                                                  ATerm d_71 = NULL;
                                                  t = not_null(v_69);
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
                                                }
                                                t = f_27;
                                                {
                                                  ATerm f_71 = NULL;
                                                  t = not_null(w_69);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      f_71 = t;
                                                      if(((e_71 != NULL) && (e_71 != f_71)))
                                                        _fail(f_71);
                                                      else
                                                        e_71 = f_71;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_27)), not_null(e_71)), not_null(c_71));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(x_69, sym_set_1))
                                                {
                                                  v_69 = ATgetArgument(x_69, 0);
                                                  {
                                                    ATerm h_71 = NULL;
                                                    ATerm i_71 = NULL;
                                                    t = not_null(v_69);
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
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_71)), (ATerm) ATinsert(ATempty, term_g_27));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(x_69, sym_pair_2))
                                                    {
                                                      v_69 = ATgetArgument(x_69, 0);
                                                      w_69 = ATgetArgument(x_69, 1);
                                                      {
                                                        ATerm l_71 = NULL,n_71 = NULL;
                                                        ATerm h_27;
                                                        h_27 = t;
                                                        {
                                                          ATerm m_71 = NULL;
                                                          t = not_null(v_69);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              m_71 = t;
                                                              if(((l_71 != NULL) && (l_71 != m_71)))
                                                                _fail(m_71);
                                                              else
                                                                l_71 = m_71;
                                                            }
                                                          }
                                                        }
                                                        t = h_27;
                                                        {
                                                          ATerm o_71 = NULL;
                                                          t = not_null(w_69);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              o_71 = t;
                                                              if(((n_71 != NULL) && (n_71 != o_71)))
                                                                _fail(o_71);
                                                              else
                                                                n_71 = o_71;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_71)), (ATerm) ATinsert(ATempty, term_i_27)), not_null(l_71));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(x_69, sym_func_2))
                                                        {
                                                          v_69 = ATgetArgument(x_69, 0);
                                                          w_69 = ATgetArgument(x_69, 1);
                                                          {
                                                            ATerm r_71 = NULL,t_71 = NULL;
                                                            ATerm n_27;
                                                            n_27 = t;
                                                            {
                                                              ATerm s_71 = NULL;
                                                              t = not_null(v_69);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    s_71 = t;
                                                                    if(((r_71 != NULL) && (r_71 != s_71)))
                                                                      _fail(s_71);
                                                                    else
                                                                      r_71 = s_71;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = n_27;
                                                            {
                                                              ATerm u_71 = NULL;
                                                              t = not_null(w_69);
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
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_71)), (ATerm) ATinsert(ATempty, term_o_27)), not_null(r_71));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(x_69, sym_alt_2))
                                                            {
                                                              v_69 = ATgetArgument(x_69, 0);
                                                              w_69 = ATgetArgument(x_69, 1);
                                                              {
                                                                ATerm x_71 = NULL,z_71 = NULL;
                                                                ATerm p_27;
                                                                p_27 = t;
                                                                {
                                                                  ATerm y_71 = NULL;
                                                                  t = not_null(v_69);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      y_71 = t;
                                                                      if(((x_71 != NULL) && (x_71 != y_71)))
                                                                        _fail(y_71);
                                                                      else
                                                                        x_71 = y_71;
                                                                    }
                                                                  }
                                                                }
                                                                t = p_27;
                                                                {
                                                                  ATerm a_72 = NULL;
                                                                  t = not_null(w_69);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      a_72 = t;
                                                                      if(((z_71 != NULL) && (z_71 != a_72)))
                                                                        _fail(a_72);
                                                                      else
                                                                        z_71 = a_72;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_71)), (ATerm) ATinsert(ATempty, term_t_27)), not_null(x_71));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(x_69, sym_perm_1))
                                                                {
                                                                  v_69 = ATgetArgument(x_69, 0);
                                                                  {
                                                                    ATerm c_72 = NULL;
                                                                    ATerm d_72 = NULL;
                                                                    t = not_null(v_69);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          d_72 = t;
                                                                          if(((c_72 != NULL) && (c_72 != d_72)))
                                                                            _fail(d_72);
                                                                          else
                                                                            c_72 = d_72;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(c_72)), term_v_27);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(x_69, sym_sort_1))
                                                                    {
                                                                      v_69 = ATgetArgument(x_69, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(v_69));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(x_69, sym_lit_1))
                                                                        {
                                                                          v_69 = ATgetArgument(x_69, 0);
                                                                          {
                                                                            ATerm g_72 = NULL;
                                                                            ATerm h_72 = NULL;
                                                                            t = not_null(v_69);
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
                                                                                h_72 = t;
                                                                                if(((g_72 != NULL) && (g_72 != h_72)))
                                                                                  _fail(h_72);
                                                                                else
                                                                                  g_72 = h_72;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(g_72));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(x_69, sym_label_2))
                                                                            {
                                                                              v_69 = ATgetArgument(x_69, 0);
                                                                              w_69 = ATgetArgument(x_69, 1);
                                                                              {
                                                                                ATerm j_72 = NULL;
                                                                                ATerm k_72 = NULL;
                                                                                t = not_null(v_69);
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
                                                                                    k_72 = t;
                                                                                    if(((j_72 != NULL) && (j_72 != k_72)))
                                                                                      _fail(k_72);
                                                                                    else
                                                                                      j_72 = k_72;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(j_72));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(x_69, sym_layout_0))
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
  ATerm l_74 = NULL,m_74 = NULL;
  l_74 = t;
  k_74 :
  if(match_cons(l_74, sym_sort_1))
    {
      m_74 = ATgetArgument(l_74, 0);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_74 = NULL,r_74 = NULL;
            ATerm q_74 = NULL;
            t = SSLgetAnnotations(not_null(l_74));
            {
              q_74 = t;
              if(((p_74 != NULL) && (p_74 != q_74)))
                _fail(q_74);
              else
                p_74 = q_74;
            }
            {
              t = not_null(m_74);
              {
                ATerm u_74 = NULL;
                t = a_1(t);
                {
                  r_74 = t;
                  {
                    ATerm v_74 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(r_74)), not_null(p_74));
                    {
                      v_74 = t;
                      if(((u_74 != NULL) && (u_74 != v_74)))
                        _fail(v_74);
                      else
                        u_74 = v_74;
                    }
                    t = not_null(u_74);
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
              ATerm y_74 = NULL,a_75 = NULL;
              ATerm z_74 = NULL;
              t = SSLgetAnnotations(not_null(l_74));
              {
                z_74 = t;
                if(((y_74 != NULL) && (y_74 != z_74)))
                  _fail(z_74);
                else
                  y_74 = z_74;
              }
              {
                t = not_null(m_74);
                {
                  ATerm c_75 = NULL;
                  t = a_1(t);
                  {
                    a_75 = t;
                    {
                      ATerm d_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(a_75)), not_null(y_74));
                      {
                        d_75 = t;
                        if(((c_75 != NULL) && (c_75 != d_75)))
                          _fail(d_75);
                        else
                          c_75 = d_75;
                      }
                      t = not_null(c_75);
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
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  ATerm y_77 (ATerm t)
  {
    ATerm y_76 = NULL,f_77 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm z_76 = NULL,a_77 = NULL;
      t = not_null(o_76);
      {
        z_76 = t;
        w_75 :
        if(match_cons(z_76, sym_cf_1))
          {
            a_77 = ATgetArgument(z_76, 0);
            {
              ATerm c_77 = NULL,e_77 = NULL;
              t = not_null(a_77);
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
                  ATerm d_77 = NULL;
                  t = PpSym_0(t);
                  {
                    d_77 = t;
                    if(((c_77 != NULL) && (c_77 != d_77)))
                      _fail(d_77);
                    else
                      c_77 = d_77;
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_28)), not_null(c_77)), (ATerm) ATinsert(ATempty, term_l_28));
                    {
                      t = concat_0(t);
                      {
                        t = concat_strings_0(t);
                        {
                          e_77 = t;
                          if(((y_76 != NULL) && (y_76 != e_77)))
                            _fail(e_77);
                          else
                            y_76 = e_77;
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
      t = SSL_mkterm(not_null(y_76), not_null(r_76));
      {
        f_77 = t;
        t = not_null(f_77);
      }
    }
    return(t);
  }
  ATerm z_77 (ATerm t)
  {
    ATerm k_77 = NULL,p_77 = NULL;
    ATerm m_28;
    m_28 = t;
    {
      ATerm l_77 = NULL,m_77 = NULL;
      t = not_null(o_76);
      {
        l_77 = t;
        a_76 :
        if(match_cons(l_77, sym_cf_1))
          {
            m_77 = ATgetArgument(l_77, 0);
            {
              ATerm o_77 = NULL;
              t = not_null(m_77);
              {
                t = sort_1(t, _id);
                {
                  t = PpSym_0(t);
                  {
                    t = concat_strings_0(t);
                    {
                      o_77 = t;
                      if(((k_77 != NULL) && (k_77 != o_77)))
                        _fail(o_77);
                      else
                        k_77 = o_77;
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
      t = SSL_mkterm(not_null(k_77), not_null(r_76));
      {
        p_77 = t;
        t = not_null(p_77);
      }
    }
    return(t);
  }
  ATerm a_78 (ATerm t)
  {
    t = not_null(s_76);
    return(t);
  }
  ATerm b_78 (ATerm t)
  {
    ATerm u_77 = NULL,w_77 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm v_77 = NULL;
      t = SSLgetAnnotations(not_null(u_76));
      {
        v_77 = t;
        if(((u_77 != NULL) && (u_77 != v_77)))
          _fail(v_77);
        else
          u_77 = v_77;
      }
    }
    t = n_28;
    {
      ATerm x_77 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(u_77));
      {
        x_77 = t;
        if(((w_77 != NULL) && (w_77 != x_77)))
          _fail(x_77);
        else
          w_77 = x_77;
      }
      t = not_null(w_77);
    }
    return(t);
  }
  u_76 = t;
  e_76 :
  if(match_cons(u_76, sym_appl_2))
    {
      m_76 = ATgetArgument(u_76, 0);
      r_76 = ATgetArgument(u_76, 1);
      f_76 :
      if(match_cons(m_76, sym_prod_3))
        {
          n_76 = ATgetArgument(m_76, 0);
          o_76 = ATgetArgument(m_76, 1);
          q_76 = ATgetArgument(m_76, 2);
          g_76 :
          if(((ATgetType(r_76) == AT_LIST) && !(ATisEmpty(r_76))))
            {
              s_76 = ATgetFirst((ATermList) r_76);
              t_76 = (ATerm) ATgetNext((ATermList) r_76);
              h_76 :
              if(((ATgetType(t_76) == AT_LIST) && ATisEmpty(t_76)))
                {
                  i_76 :
                  if(match_cons(o_76, sym_sort_1))
                    {
                      p_76 = ATgetArgument(o_76, 0);
                      j_76 :
                      if(match_string(p_76, "<START>"))
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_77(t);
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
                                    t = z_77(t);
                                    LocalPopChoice(r_28);
                                  }
                                else
                                  {
                                    t = q_28;
                                    t = a_78(t);
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
                              t = y_77(t);
                              LocalPopChoice(f_29);
                            }
                          else
                            {
                              t = s_28;
                              t = z_77(t);
                            }
                        }
                    }
                  else
                    {
                      ATerm g_29 = t;
                      int h_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_77(t);
                          LocalPopChoice(h_29);
                        }
                      else
                        {
                          t = g_29;
                          t = z_77(t);
                        }
                    }
                }
              else
                {
                  k_76 :
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_77(t);
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        t = z_77(t);
                      }
                  }
                }
            }
          else
            {
              l_76 :
              {
                ATerm k_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_77(t);
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = k_29;
                    t = z_77(t);
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
      if(match_cons(u_76, sym_ApplToSort_0))
        {
          t = b_78(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm q_78 = NULL,r_78 = NULL;
  q_78 = t;
  p_78 :
  if(match_cons(q_78, sym_layout_1))
    {
      r_78 = ATgetArgument(q_78, 0);
      {
        ATerm u_78 = NULL,w_78 = NULL;
        ATerm v_78 = NULL;
        t = SSLgetAnnotations(not_null(q_78));
        {
          v_78 = t;
          if(((u_78 != NULL) && (u_78 != v_78)))
            _fail(v_78);
          else
            u_78 = v_78;
        }
        {
          t = not_null(r_78);
          {
            ATerm y_78 = NULL;
            t = u_69(t);
            {
              w_78 = t;
              {
                ATerm z_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(w_78)), not_null(u_78));
                {
                  z_78 = t;
                  if(((y_78 != NULL) && (y_78 != z_78)))
                    _fail(z_78);
                  else
                    y_78 = z_78;
                }
                t = not_null(y_78);
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
  ATerm n_79 = NULL,o_79 = NULL;
  n_79 = t;
  m_79 :
  if(match_cons(n_79, sym_opt_1))
    {
      o_79 = ATgetArgument(n_79, 0);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_79 = NULL,t_79 = NULL;
            ATerm s_79 = NULL;
            t = SSLgetAnnotations(not_null(n_79));
            {
              s_79 = t;
              if(((r_79 != NULL) && (r_79 != s_79)))
                _fail(s_79);
              else
                r_79 = s_79;
            }
            {
              t = not_null(o_79);
              {
                ATerm v_79 = NULL;
                t = z_0(t);
                {
                  t_79 = t;
                  {
                    ATerm w_79 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(t_79)), not_null(r_79));
                    {
                      w_79 = t;
                      if(((v_79 != NULL) && (v_79 != w_79)))
                        _fail(w_79);
                      else
                        v_79 = w_79;
                    }
                    t = not_null(v_79);
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
              ATerm z_79 = NULL,b_80 = NULL;
              ATerm a_80 = NULL;
              t = SSLgetAnnotations(not_null(n_79));
              {
                a_80 = t;
                if(((z_79 != NULL) && (z_79 != a_80)))
                  _fail(a_80);
                else
                  z_79 = a_80;
              }
              {
                t = not_null(o_79);
                {
                  ATerm d_80 = NULL;
                  t = z_0(t);
                  {
                    b_80 = t;
                    {
                      ATerm e_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(b_80)), not_null(z_79));
                      {
                        e_80 = t;
                        if(((d_80 != NULL) && (d_80 != e_80)))
                          _fail(e_80);
                        else
                          d_80 = e_80;
                      }
                      t = not_null(d_80);
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
  ATerm w_80 = NULL,x_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_cf_1))
    {
      x_80 = ATgetArgument(w_80, 0);
      {
        ATerm o_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_81 = NULL,c_81 = NULL;
            ATerm b_81 = NULL;
            t = SSLgetAnnotations(not_null(w_80));
            {
              b_81 = t;
              if(((a_81 != NULL) && (a_81 != b_81)))
                _fail(b_81);
              else
                a_81 = b_81;
            }
            {
              t = not_null(x_80);
              {
                ATerm e_81 = NULL;
                t = y_0(t);
                {
                  c_81 = t;
                  {
                    ATerm f_81 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(c_81)), not_null(a_81));
                    {
                      f_81 = t;
                      if(((e_81 != NULL) && (e_81 != f_81)))
                        _fail(f_81);
                      else
                        e_81 = f_81;
                    }
                    t = not_null(e_81);
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
              ATerm i_81 = NULL,k_81 = NULL;
              ATerm j_81 = NULL;
              t = SSLgetAnnotations(not_null(w_80));
              {
                j_81 = t;
                if(((i_81 != NULL) && (i_81 != j_81)))
                  _fail(j_81);
                else
                  i_81 = j_81;
              }
              {
                t = not_null(x_80);
                {
                  ATerm m_81 = NULL;
                  t = y_0(t);
                  {
                    k_81 = t;
                    {
                      ATerm n_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(k_81)), not_null(i_81));
                      {
                        n_81 = t;
                        if(((m_81 != NULL) && (m_81 != n_81)))
                          _fail(n_81);
                        else
                          m_81 = n_81;
                      }
                      t = not_null(m_81);
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
ATerm filter_1 (ATerm t, ATerm e_98 (ATerm))
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
              t = filter_1(t, e_98);
              return(t);
            }
            t = Cons_2(t, e_98, k_5);
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm y_81 = NULL,i_82 = NULL,j_82 = NULL;
              y_81 = t;
              x_81 :
              if(((ATgetType(y_81) == AT_LIST) && !(ATisEmpty(y_81))))
                {
                  i_82 = ATgetFirst((ATermList) y_81);
                  j_82 = (ATerm) ATgetNext((ATermList) y_81);
                  {
                    t = not_null(j_82);
                    t = filter_1(t, e_98);
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
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,o_83 = NULL;
  h_83 = t;
  g_83 :
  if(match_cons(h_83, sym_prod_3))
    {
      i_83 = ATgetArgument(h_83, 0);
      j_83 = ATgetArgument(h_83, 1);
      o_83 = ATgetArgument(h_83, 2);
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_83 = NULL,v_83 = NULL;
            ATerm u_83 = NULL;
            t = SSLgetAnnotations(not_null(h_83));
            {
              u_83 = t;
              if(((t_83 != NULL) && (t_83 != u_83)))
                _fail(u_83);
              else
                t_83 = u_83;
            }
            {
              t = not_null(i_83);
              {
                ATerm x_83 = NULL;
                t = v_0(t);
                {
                  v_83 = t;
                  {
                    t = not_null(j_83);
                    {
                      ATerm z_83 = NULL;
                      t = w_0(t);
                      {
                        x_83 = t;
                        {
                          t = not_null(o_83);
                          {
                            ATerm b_84 = NULL;
                            t = x_0(t);
                            {
                              z_83 = t;
                              {
                                ATerm c_84 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(v_83), not_null(x_83), not_null(z_83)), not_null(t_83));
                                {
                                  c_84 = t;
                                  if(((b_84 != NULL) && (b_84 != c_84)))
                                    _fail(c_84);
                                  else
                                    b_84 = c_84;
                                }
                                t = not_null(b_84);
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
              ATerm h_84 = NULL,j_84 = NULL;
              ATerm i_84 = NULL;
              t = SSLgetAnnotations(not_null(h_83));
              {
                i_84 = t;
                if(((h_84 != NULL) && (h_84 != i_84)))
                  _fail(i_84);
                else
                  h_84 = i_84;
              }
              {
                t = not_null(i_83);
                {
                  ATerm n_84 = NULL;
                  t = v_0(t);
                  {
                    j_84 = t;
                    {
                      t = not_null(j_83);
                      {
                        ATerm p_84 = NULL;
                        t = w_0(t);
                        {
                          n_84 = t;
                          {
                            t = not_null(o_83);
                            {
                              ATerm u_84 = NULL;
                              t = x_0(t);
                              {
                                p_84 = t;
                                {
                                  ATerm v_84 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(j_84), not_null(n_84), not_null(p_84)), not_null(h_84));
                                  {
                                    v_84 = t;
                                    if(((u_84 != NULL) && (u_84 != v_84)))
                                      _fail(v_84);
                                    else
                                      u_84 = v_84;
                                  }
                                  t = not_null(u_84);
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
ATerm topdown_1 (ATerm t, ATerm k_84 (ATerm))
{
  t = k_84(t);
  {
    ATerm l_5 (ATerm t)
    {
      t = topdown_1(t, k_84);
      return(t);
    }
    t = _all(t, l_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm q_82 (ATerm))
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
                  t = q_82(t);
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
                t = q_82(t);
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
  ATerm m_85 = NULL;
  m_85 = t;
  l_85 :
  if(match_cons(m_85, sym_RemoveLayout_0))
    {
      ATerm o_85 = NULL,q_85 = NULL;
      ATerm k_30;
      k_30 = t;
      {
        ATerm p_85 = NULL;
        t = SSLgetAnnotations(not_null(m_85));
        {
          p_85 = t;
          if(((o_85 != NULL) && (o_85 != p_85)))
            _fail(p_85);
          else
            o_85 = p_85;
        }
      }
      t = k_30;
      {
        ATerm r_85 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(o_85));
        {
          r_85 = t;
          if(((q_85 != NULL) && (q_85 != r_85)))
            _fail(r_85);
          else
            q_85 = r_85;
        }
        t = not_null(q_85);
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
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL;
  h_86 = t;
  y_85 :
  if(match_cons(h_86, sym_appl_2))
    {
      i_86 = ATgetArgument(h_86, 0);
      o_86 = ATgetArgument(h_86, 1);
      z_85 :
      if(match_cons(i_86, sym_prod_3))
        {
          j_86 = ATgetArgument(i_86, 0);
          k_86 = ATgetArgument(i_86, 1);
          n_86 = ATgetArgument(i_86, 2);
          c_86 :
          if(match_cons(k_86, sym_cf_1))
            {
              l_86 = ATgetArgument(k_86, 0);
              d_86 :
              if(match_cons(l_86, sym_layout_0))
                {
                  t = not_null(o_86);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(l_86, sym_opt_1))
                    {
                      m_86 = ATgetArgument(l_86, 0);
                      e_86 :
                      if(match_cons(m_86, sym_layout_0))
                        {
                          f_86 :
                          if(((ATgetType(o_86) == AT_LIST) && ATisEmpty(o_86)))
                            {
                              t = term_l_30;
                            }
                          else
                            {
                              if(((ATgetType(o_86) == AT_LIST) && !(ATisEmpty(o_86))))
                                {
                                  p_86 = ATgetFirst((ATermList) o_86);
                                  q_86 = (ATerm) ATgetNext((ATermList) o_86);
                                  g_86 :
                                  if(((ATgetType(q_86) == AT_LIST) && ATisEmpty(q_86)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(p_86)));
                                    }
                                  else
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
  ATerm x_86 = NULL;
  x_86 = t;
  t = (ATerm) ATinsert(ATempty, not_null(x_86));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
  c_87 = t;
  b_87 :
  if(match_cons(c_87, sym_appl_2))
    {
      d_87 = ATgetArgument(c_87, 0);
      e_87 = ATgetArgument(c_87, 1);
      {
        t = not_null(e_87);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym_appl_2))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      {
        ATerm u_87 = NULL,w_87 = NULL;
        ATerm v_87 = NULL;
        t = SSLgetAnnotations(not_null(o_87));
        {
          v_87 = t;
          if(((u_87 != NULL) && (u_87 != v_87)))
            _fail(v_87);
          else
            u_87 = v_87;
        }
        {
          t = not_null(p_87);
          {
            ATerm y_87 = NULL;
            t = m_75(t);
            {
              w_87 = t;
              {
                t = not_null(q_87);
                {
                  ATerm a_88 = NULL;
                  t = n_75(t);
                  {
                    y_87 = t;
                    {
                      ATerm b_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(w_87), not_null(y_87)), not_null(u_87));
                      {
                        b_88 = t;
                        if(((a_88 != NULL) && (a_88 != b_88)))
                          _fail(b_88);
                        else
                          a_88 = b_88;
                      }
                      t = not_null(a_88);
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
  ATerm h_88 (ATerm t)
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, h_88);
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
  t = h_88(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL;
  ATerm z_90 (ATerm t)
  {
    ATerm j_90 = NULL;
    ATerm k_90 = NULL;
    t = yield_0(t);
    {
      k_90 = t;
      if(((j_90 != NULL) && (j_90 != k_90)))
        _fail(k_90);
      else
        j_90 = k_90;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(j_90));
    return(t);
  }
  s_89 = t;
  w_88 :
  if(match_cons(s_89, sym_appl_2))
    {
      t_89 = ATgetArgument(s_89, 0);
      y_89 = ATgetArgument(s_89, 1);
      x_88 :
      if(match_cons(t_89, sym_prod_3))
        {
          u_89 = ATgetArgument(t_89, 0);
          v_89 = ATgetArgument(t_89, 1);
          x_89 = ATgetArgument(t_89, 2);
          y_88 :
          if(match_cons(v_89, sym_cf_1))
            {
              w_89 = ATgetArgument(v_89, 0);
              z_88 :
              if(((ATgetType(u_89) == AT_LIST) && !(ATisEmpty(u_89))))
                {
                  m_89 = ATgetFirst((ATermList) u_89);
                  o_89 = (ATerm) ATgetNext((ATermList) u_89);
                  a_89 :
                  if(match_cons(m_89, sym_lex_1))
                    {
                      n_89 = ATgetArgument(m_89, 0);
                      b_89 :
                      if(((ATgetType(o_89) == AT_LIST) && ATisEmpty(o_89)))
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
              if(match_cons(v_89, sym_lex_1))
                {
                  w_89 = ATgetArgument(v_89, 0);
                  c_89 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(v_89, sym_lit_1))
                    {
                      w_89 = ATgetArgument(v_89, 0);
                      d_89 :
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
                        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(z_89));
                      }
                    }
                  else
                    {
                      if(match_cons(v_89, sym_varsym_1))
                        {
                          w_89 = ATgetArgument(v_89, 0);
                          e_89 :
                          if(match_cons(w_89, sym_cf_1))
                            {
                              p_89 = ATgetArgument(w_89, 0);
                              f_89 :
                              if(match_cons(p_89, sym_iter_star_1))
                                {
                                  q_89 = ATgetArgument(p_89, 0);
                                  g_89 :
                                  {
                                    ATerm o_30 = t;
                                    int p_30 = stack_ptr;
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
                                        LocalPopChoice(p_30);
                                      }
                                    else
                                      {
                                        t = o_30;
                                        t = z_90(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(p_89, sym_iter_star_sep_2))
                                    {
                                      q_89 = ATgetArgument(p_89, 0);
                                      r_89 = ATgetArgument(p_89, 1);
                                      h_89 :
                                      {
                                        ATerm q_30 = t;
                                        int r_30 = stack_ptr;
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
                                            LocalPopChoice(r_30);
                                          }
                                        else
                                          {
                                            t = q_30;
                                            t = z_90(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(p_89, sym_iter_1))
                                        {
                                          q_89 = ATgetArgument(p_89, 0);
                                          i_89 :
                                          {
                                            ATerm s_30 = t;
                                            int t_30 = stack_ptr;
                                            if((PushChoice() == 0))
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
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(f_90));
                                                LocalPopChoice(t_30);
                                              }
                                            else
                                              {
                                                t = s_30;
                                                t = z_90(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(p_89, sym_iter_sep_2))
                                            {
                                              q_89 = ATgetArgument(p_89, 0);
                                              r_89 = ATgetArgument(p_89, 1);
                                              j_89 :
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm h_90 = NULL;
                                                    ATerm i_90 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      i_90 = t;
                                                      if(((h_90 != NULL) && (h_90 != i_90)))
                                                        _fail(i_90);
                                                      else
                                                        h_90 = i_90;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(h_90));
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    t = z_90(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              k_89 :
                                              t = z_90(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              l_89 :
                              t = z_90(t);
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
ATerm downup2_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm i_91 (ATerm t)
  {
    t = r_84(t);
    {
      t = _all(t, i_91);
      t = s_84(t);
    }
    return(t);
  }
  t = i_91(t);
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
  ATerm p_91 = NULL;
  p_91 = t;
  m_91 :
  if(match_cons(p_91, sym_FlatLex_0))
    {
      ATerm r_91 = NULL,t_91 = NULL;
      ATerm a_31;
      a_31 = t;
      {
        ATerm s_91 = NULL;
        t = SSLgetAnnotations(not_null(p_91));
        {
          s_91 = t;
          if(((r_91 != NULL) && (r_91 != s_91)))
            _fail(s_91);
          else
            r_91 = s_91;
        }
      }
      t = a_31;
      {
        ATerm u_91 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(r_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        t = not_null(t_91);
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
  ATerm a_92 = NULL;
  a_92 = t;
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
                            ATerm c_92 = NULL;
                            c_92 = t;
                            {
                              if(((a_92 != NULL) && (a_92 != c_92)))
                                _fail(c_92);
                              else
                                a_92 = c_92;
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
  ATerm h_92 = NULL;
  ATerm x_31;
  x_31 = t;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm i_92 = NULL,j_92 = NULL;
      i_92 = t;
      g_92 :
      if(match_cons(i_92, sym_Program_1))
        {
          j_92 = ATgetArgument(i_92, 0);
          if(((h_92 != NULL) && (h_92 != j_92)))
            _fail(j_92);
          else
            h_92 = j_92;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_32), not_null(h_92)), term_z_31));
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
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  m_92 :
  if(match_cons(n_92, sym__2))
    {
      o_92 = ATgetArgument(n_92, 0);
      p_92 = ATgetArgument(n_92, 1);
      {
        ATerm b_32;
        b_32 = t;
        t = SSL_printnl(not_null(o_92), not_null(p_92));
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
  ATerm u_92 = NULL;
  u_92 = t;
  t = SSL_implode_string(not_null(u_92));
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
        ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
        z_92 = t;
        y_92 :
        if(((ATgetType(z_92) == AT_LIST) && !(ATisEmpty(z_92))))
          {
            a_93 = ATgetFirst((ATermList) z_92);
            b_93 = (ATerm) ATgetNext((ATermList) z_92);
            {
              t = not_null(a_93);
              {
                ATerm i_6 (ATerm t)
                {
                  t = not_null(b_93);
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
  ATerm l_93 = NULL;
  ATerm n_93 = NULL;
  l_93 = t;
  {
    ATerm o_93 = NULL;
    ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
    t = not_null(l_93);
    {
      o_93 = t;
      {
        t = SSL_explode_term(not_null(o_93));
        {
          q_93 = t;
          j_93 :
          if(match_cons(q_93, sym__2))
            {
              r_93 = ATgetArgument(q_93, 0);
              s_93 = ATgetArgument(q_93, 1);
              k_93 :
              if(match_string(r_93, ""))
                {
                  if(((n_93 != NULL) && (n_93 != s_93)))
                    _fail(s_93);
                  else
                    n_93 = s_93;
                }
              else
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
      t = not_null(n_93);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm w_93 (ATerm t)
  {
    ATerm e_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_93);
        LocalPopChoice(g_32);
      }
    else
      {
        t = e_32;
        {
          t = Nil_0(t);
          t = c_91(t);
        }
      }
    return(t);
  }
  t = w_93(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
  z_93 = t;
  y_93 :
  if(match_cons(z_93, sym__2))
    {
      a_94 = ATgetArgument(z_93, 0);
      b_94 = ATgetArgument(z_93, 1);
      {
        t = not_null(a_94);
        {
          ATerm j_6 (ATerm t)
          {
            t = not_null(b_94);
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
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_94 = NULL;
  g_94 = t;
  t = SSL_explode_string(not_null(g_94));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm l_32;
  l_32 = t;
  {
    ATerm l_94 = NULL,n_94 = NULL;
    ATerm m_32;
    m_32 = t;
    {
      ATerm m_94 = NULL;
      t = m_101(t);
      {
        m_94 = t;
        if(((l_94 != NULL) && (l_94 != m_94)))
          _fail(m_94);
        else
          l_94 = m_94;
      }
    }
    t = m_32;
    {
      ATerm o_94 = NULL;
      o_94 = t;
      if(((n_94 != NULL) && (n_94 != o_94)))
        _fail(o_94);
      else
        n_94 = o_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_94)), not_null(l_94)));
        t = printnl_0(t);
      }
    }
  }
  t = l_32;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_94 = NULL;
  s_94 = t;
  t = SSL_is_string(not_null(s_94));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, k_6);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
              b_95 = t;
              a_95 :
              if(match_cons(b_95, sym_Path_1))
                {
                  c_95 = ATgetArgument(b_95, 0);
                  t = not_null(c_95);
                }
              else
                {
                  if(match_cons(b_95, sym_Var_1))
                    {
                      c_95 = ATgetArgument(b_95, 0);
                      {
                        t = not_null(c_95);
                        {
                          ATerm t_32 = t;
                          int y_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_32);
                            }
                          else
                            {
                              t = t_32;
                              {
                                ATerm l_6 (ATerm t)
                                {
                                  t = term_z_32;
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
                      if(match_cons(b_95, sym_Prefix_2))
                        {
                          c_95 = ATgetArgument(b_95, 0);
                          d_95 = ATgetArgument(b_95, 1);
                          {
                            ATerm i_95 = NULL,k_95 = NULL;
                            ATerm a_33;
                            a_33 = t;
                            {
                              ATerm j_95 = NULL;
                              t = not_null(c_95);
                              {
                                t = eval_config_0(t);
                                {
                                  j_95 = t;
                                  if(((i_95 != NULL) && (i_95 != j_95)))
                                    _fail(j_95);
                                  else
                                    i_95 = j_95;
                                }
                              }
                            }
                            t = a_33;
                            {
                              ATerm l_95 = NULL;
                              t = not_null(d_95);
                              {
                                t = eval_config_0(t);
                                {
                                  l_95 = t;
                                  if(((k_95 != NULL) && (k_95 != l_95)))
                                    _fail(l_95);
                                  else
                                    k_95 = l_95;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_95), not_null(k_95));
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
  ATerm t_95 = NULL;
  t_95 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_33, not_null(t_95));
    {
      t = table_get_0(t);
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_33;
              e_33 = t;
              {
                ATerm v_95 = NULL;
                ATerm w_95 = NULL;
                w_95 = t;
                if(((v_95 != NULL) && (v_95 != w_95)))
                  _fail(w_95);
                else
                  v_95 = w_95;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_33, not_null(t_95), not_null(v_95));
                  t = table_put_0(t);
                }
              }
              t = e_33;
            }
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_104 (ATerm))
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_33;
      h_33 = t;
      {
        ATerm c_96 = NULL;
        ATerm d_96 = NULL;
        t = term_i_33;
        {
          t = get_config_0(t);
          {
            d_96 = t;
            if(((c_96 != NULL) && (c_96 != d_96)))
              _fail(d_96);
            else
              c_96 = d_96;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_96), term_j_33);
          t = geq_0(t);
        }
      }
      t = h_33;
      t = k_104(t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
  h_96 = t;
  g_96 :
  if(match_cons(h_96, sym__2))
    {
      i_96 = ATgetArgument(h_96, 0);
      j_96 = ATgetArgument(h_96, 1);
      t = SSL_WriteToTextFile(not_null(i_96), not_null(j_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  t_96 = t;
  s_96 :
  if(match_cons(t_96, sym__2))
    {
      u_96 = ATgetArgument(t_96, 0);
      v_96 = ATgetArgument(t_96, 1);
      {
        ATerm z_96 = NULL,d_97 = NULL;
        ATerm a_97 = NULL;
        t = SSLgetAnnotations(not_null(t_96));
        {
          a_97 = t;
          if(((z_96 != NULL) && (z_96 != a_97)))
            _fail(a_97);
          else
            z_96 = a_97;
        }
        {
          t = not_null(u_96);
          {
            ATerm f_97 = NULL;
            t = z_67(t);
            {
              d_97 = t;
              {
                t = not_null(v_96);
                {
                  ATerm h_97 = NULL;
                  t = a_68(t);
                  {
                    f_97 = t;
                    {
                      ATerm i_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_97), not_null(f_97)), not_null(z_96));
                      {
                        i_97 = t;
                        if(((h_97 != NULL) && (h_97 != i_97)))
                          _fail(i_97);
                        else
                          h_97 = i_97;
                      }
                      t = not_null(h_97);
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
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  q_97 = t;
  p_97 :
  if(match_cons(q_97, sym__2))
    {
      r_97 = ATgetArgument(q_97, 0);
      s_97 = ATgetArgument(q_97, 1);
      t = SSL_WriteToBinaryFile(not_null(r_97), not_null(s_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_98 = NULL;
  ATerm k_33;
  k_33 = t;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm l_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_6 (ATerm t)
          {
            ATerm b_98 = NULL,c_98 = NULL;
            b_98 = t;
            x_97 :
            if(match_cons(b_98, sym_Output_1))
              {
                c_98 = ATgetArgument(b_98, 0);
                if(((a_98 != NULL) && (a_98 != c_98)))
                  _fail(c_98);
                else
                  a_98 = c_98;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_6);
          LocalPopChoice(m_33);
        }
      else
        {
          t = l_33;
          {
            ATerm d_98 = NULL;
            t = term_n_33;
            {
              d_98 = t;
              if(((a_98 != NULL) && (a_98 != d_98)))
                _fail(d_98);
              else
                a_98 = d_98;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_6, _id);
  }
  t = k_33;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm p_6 (ATerm t)
      {
        t = not_null(a_98);
        return(t);
      }
      t = split_2(t, p_6, _id);
      return(t);
    }
    t = _2(t, _id, o_6);
    {
      ATerm o_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_6 (ATerm t)
          {
            ATerm r_6 (ATerm t)
            {
              ATerm f_98 = NULL;
              f_98 = t;
              z_97 :
              if(!(match_cons(f_98, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_6);
            return(t);
          }
          t = _2(t, q_6, WriteToBinaryFile_0);
          LocalPopChoice(p_33);
        }
      else
        {
          t = o_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm i_109 (ATerm))
{
  ATerm l_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL;
  ATerm q_33;
  q_33 = t;
  t = dtime_0(t);
  t = q_33;
  {
    t = i_109(t);
    {
      ATerm r_33;
      r_33 = t;
      {
        ATerm m_98 = NULL;
        t = dtime_0(t);
        {
          m_98 = t;
          if(((l_98 != NULL) && (l_98 != m_98)))
            _fail(m_98);
          else
            l_98 = m_98;
        }
      }
      t = r_33;
      {
        n_98 = t;
        k_98 :
        if(match_cons(n_98, sym__2))
          {
            o_98 = ATgetArgument(n_98, 0);
            p_98 = ATgetArgument(n_98, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_98)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_98))), not_null(p_98));
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
  ATerm x_98 = NULL;
  x_98 = t;
  t = SSL_ReadFromFile(not_null(x_98));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  ATerm c_99 = NULL,e_99 = NULL;
  ATerm s_33;
  s_33 = t;
  {
    ATerm d_99 = NULL;
    t = q_98(t);
    {
      d_99 = t;
      if(((c_99 != NULL) && (c_99 != d_99)))
        _fail(d_99);
      else
        c_99 = d_99;
    }
  }
  t = s_33;
  {
    ATerm f_99 = NULL;
    t = r_98(t);
    {
      f_99 = t;
      if(((e_99 != NULL) && (e_99 != f_99)))
        _fail(f_99);
      else
        e_99 = f_99;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_99), not_null(e_99));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_99 = NULL;
  ATerm t_33;
  t_33 = t;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 (ATerm t)
        {
          ATerm m_99 = NULL,n_99 = NULL;
          m_99 = t;
          j_99 :
          if(match_cons(m_99, sym_Input_1))
            {
              n_99 = ATgetArgument(m_99, 0);
              if(((l_99 != NULL) && (l_99 != n_99)))
                _fail(n_99);
              else
                l_99 = n_99;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, s_6);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          ATerm o_99 = NULL;
          t = term_w_33;
          {
            o_99 = t;
            if(((l_99 != NULL) && (l_99 != o_99)))
              _fail(o_99);
            else
              l_99 = o_99;
          }
        }
      }
  }
  t = t_33;
  {
    ATerm t_6 (ATerm t)
    {
      t = not_null(l_99);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_6);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_99 = NULL;
  s_99 = t;
  t = SSL_string_to_int(not_null(s_99));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL;
  a_100 = t;
  y_99 :
  if(match_string(a_100, "register-usage-info"))
    {
      t = register_usage_1(t, u_0);
    }
  else
    {
      if(((ATgetType(a_100) == AT_LIST) && !(ATisEmpty(a_100))))
        {
          b_100 = ATgetFirst((ATermList) a_100);
          c_100 = (ATerm) ATgetNext((ATermList) a_100);
          z_99 :
          if(((ATgetType(c_100) == AT_LIST) && !(ATisEmpty(c_100))))
            {
              d_100 = ATgetFirst((ATermList) c_100);
              e_100 = (ATerm) ATgetNext((ATermList) c_100);
              {
                ATerm i_100 = NULL;
                ATerm x_33;
                x_33 = t;
                {
                  t = not_null(b_100);
                  t = s_0(t);
                }
                t = x_33;
                {
                  ATerm j_100 = NULL;
                  t = not_null(d_100);
                  {
                    t = t_0(t);
                    {
                      j_100 = t;
                      if(((i_100 != NULL) && (i_100 != j_100)))
                        _fail(j_100);
                      else
                        i_100 = j_100;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_100)), not_null(i_100));
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
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm c_101 = NULL;
        c_101 = t;
        n_100 :
        if(!(match_string(c_101, "-i")))
          {
            if(!(match_string(c_101, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        ATerm f_101 = NULL;
        ATerm a_34;
        a_34 = t;
        {
          ATerm d_101 = NULL;
          ATerm e_101 = NULL;
          e_101 = t;
          if(((d_101 != NULL) && (d_101 != e_101)))
            _fail(e_101);
          else
            d_101 = e_101;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_34, not_null(d_101));
            t = set_config_0(t);
          }
        }
        t = a_34;
        {
          ATerm g_101 = NULL;
          g_101 = t;
          if(((f_101 != NULL) && (f_101 != g_101)))
            _fail(g_101);
          else
            f_101 = g_101;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_101));
        }
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_c_34;
        return(t);
      }
      t = ArgOption_3(t, u_6, v_6, w_6);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              ATerm h_101 = NULL;
              h_101 = t;
              q_100 :
              if(!(match_string(h_101, "-o")))
                {
                  if(!(match_string(h_101, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_6 (ATerm t)
            {
              ATerm k_101 = NULL;
              ATerm f_34;
              f_34 = t;
              {
                ATerm i_101 = NULL;
                ATerm j_101 = NULL;
                j_101 = t;
                if(((i_101 != NULL) && (i_101 != j_101)))
                  _fail(j_101);
                else
                  i_101 = j_101;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_34, not_null(i_101));
                  t = set_config_0(t);
                }
              }
              t = f_34;
              {
                ATerm l_101 = NULL;
                l_101 = t;
                if(((k_101 != NULL) && (k_101 != l_101)))
                  _fail(l_101);
                else
                  k_101 = l_101;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_101));
              }
              return(t);
            }
            ATerm z_6 (ATerm t)
            {
              t = term_h_34;
              return(t);
            }
            t = ArgOption_3(t, x_6, y_6, z_6);
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_7 (ATerm t)
                  {
                    ATerm o_101 = NULL;
                    o_101 = t;
                    t_100 :
                    if(!(match_string(o_101, "-S")))
                      {
                        if(!(match_string(o_101, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_7 (ATerm t)
                  {
                    t = term_l_34;
                    t = set_config_0(t);
                    t = term_m_34;
                    return(t);
                  }
                  ATerm c_7 (ATerm t)
                  {
                    t = term_n_34;
                    return(t);
                  }
                  t = Option_3(t, a_7, b_7, c_7);
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  {
                    ATerm o_34 = t;
                    int p_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_7 (ATerm t)
                        {
                          ATerm p_101 = NULL;
                          p_101 = t;
                          u_100 :
                          if(!(match_string(p_101, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_7 (ATerm t)
                        {
                          ATerm s_101 = NULL;
                          ATerm q_34;
                          q_34 = t;
                          {
                            ATerm q_101 = NULL;
                            ATerm r_101 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_101 = t;
                              if(((q_101 != NULL) && (q_101 != r_101)))
                                _fail(r_101);
                              else
                                q_101 = r_101;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_33, not_null(q_101));
                              t = set_config_0(t);
                            }
                          }
                          t = q_34;
                          {
                            ATerm t_101 = NULL;
                            t_101 = t;
                            if(((s_101 != NULL) && (s_101 != t_101)))
                              _fail(t_101);
                            else
                              s_101 = t_101;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_101));
                          }
                          return(t);
                        }
                        ATerm f_7 (ATerm t)
                        {
                          t = term_r_34;
                          return(t);
                        }
                        t = ArgOption_3(t, d_7, e_7, f_7);
                        LocalPopChoice(p_34);
                      }
                    else
                      {
                        t = o_34;
                        {
                          ATerm s_34 = t;
                          int t_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_7 (ATerm t)
                              {
                                ATerm u_101 = NULL;
                                u_101 = t;
                                x_100 :
                                if(!(match_string(u_101, "-k")))
                                  {
                                    if(!(match_string(u_101, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm h_7 (ATerm t)
                              {
                                ATerm u_34;
                                u_34 = t;
                                {
                                  ATerm v_101 = NULL;
                                  ATerm w_101 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_101 = t;
                                    if(((v_101 != NULL) && (v_101 != w_101)))
                                      _fail(w_101);
                                    else
                                      v_101 = w_101;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_v_34, not_null(v_101));
                                    t = set_config_0(t);
                                  }
                                }
                                t = u_34;
                                return(t);
                              }
                              ATerm i_7 (ATerm t)
                              {
                                t = term_w_34;
                                return(t);
                              }
                              t = ArgOption_3(t, g_7, h_7, i_7);
                              LocalPopChoice(t_34);
                            }
                          else
                            {
                              t = s_34;
                              {
                                ATerm x_34 = t;
                                int y_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm x_101 = NULL;
                                      x_101 = t;
                                      z_100 :
                                      if(!(match_string(x_101, "-v")))
                                        {
                                          if(!(match_string(x_101, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm k_7 (ATerm t)
                                    {
                                      t = term_b_35;
                                      t = set_config_0(t);
                                      t = term_c_35;
                                      return(t);
                                    }
                                    ATerm l_7 (ATerm t)
                                    {
                                      t = term_d_35;
                                      return(t);
                                    }
                                    t = Option_3(t, j_7, k_7, l_7);
                                    LocalPopChoice(y_34);
                                  }
                                else
                                  {
                                    t = x_34;
                                    {
                                      ATerm e_35 = t;
                                      int f_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_7 (ATerm t)
                                          {
                                            ATerm y_101 = NULL;
                                            y_101 = t;
                                            a_101 :
                                            if(!(match_string(y_101, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm n_7 (ATerm t)
                                          {
                                            t = term_h_35;
                                            t = set_config_0(t);
                                            t = term_i_35;
                                            return(t);
                                          }
                                          ATerm o_7 (ATerm t)
                                          {
                                            t = term_j_35;
                                            return(t);
                                          }
                                          t = Option_3(t, m_7, n_7, o_7);
                                          LocalPopChoice(f_35);
                                        }
                                      else
                                        {
                                          t = e_35;
                                          {
                                            ATerm p_7 (ATerm t)
                                            {
                                              ATerm z_101 = NULL;
                                              z_101 = t;
                                              b_101 :
                                              if(!(match_string(z_101, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_7 (ATerm t)
                                            {
                                              t = term_l_35;
                                              t = set_config_0(t);
                                              t = term_m_35;
                                              return(t);
                                            }
                                            ATerm t_7 (ATerm t)
                                            {
                                              t = term_n_35;
                                              return(t);
                                            }
                                            t = Option_3(t, p_7, s_7, t_7);
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
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, term_o_35));
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
  ATerm i_102 = NULL;
  i_102 = t;
  t = SSL_TicksToSeconds(not_null(i_102));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,q_102 = NULL;
  n_102 = t;
  m_102 :
  if(match_cons(n_102, sym__2))
    {
      o_102 = ATgetArgument(n_102, 0);
      q_102 = ATgetArgument(n_102, 1);
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_102), not_null(q_102));
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = SSL_addr(not_null(o_102), not_null(q_102));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm))
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_97(t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
        x_102 = t;
        w_102 :
        if(((ATgetType(x_102) == AT_LIST) && !(ATisEmpty(x_102))))
          {
            y_102 = ATgetFirst((ATermList) x_102);
            z_102 = (ATerm) ATgetNext((ATermList) x_102);
            {
              ATerm c_103 = NULL;
              ATerm d_103 = NULL;
              t = not_null(z_102);
              {
                t = foldr_2(t, b_97, c_97);
                {
                  d_103 = t;
                  if(((c_103 != NULL) && (c_103 != d_103)))
                    _fail(d_103);
                  else
                    c_103 = d_103;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_102), not_null(c_103));
                t = c_97(t);
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
ATerm crush_2 (ATerm t, ATerm z_95 (ATerm), ATerm a_96 (ATerm))
{
  ATerm k_103 = NULL;
  ATerm m_103 = NULL;
  k_103 = t;
  {
    ATerm n_103 = NULL;
    ATerm p_103 = NULL,q_103 = NULL,v_103 = NULL;
    t = not_null(k_103);
    {
      n_103 = t;
      {
        t = SSL_explode_term(not_null(n_103));
        {
          p_103 = t;
          j_103 :
          if(match_cons(p_103, sym__2))
            {
              q_103 = ATgetArgument(p_103, 0);
              v_103 = ATgetArgument(p_103, 1);
              if(((m_103 != NULL) && (m_103 != v_103)))
                _fail(v_103);
              else
                m_103 = v_103;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_103);
      t = foldr_2(t, z_95, a_96);
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
      t = term_k_34;
      return(t);
    }
    t = crush_2(t, u_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
  b_104 = t;
  a_104 :
  if(match_cons(b_104, sym__2))
    {
      c_104 = ATgetArgument(b_104, 0);
      d_104 = ATgetArgument(b_104, 1);
      {
        ATerm t_35;
        t_35 = t;
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_104), not_null(d_104));
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              t = SSL_gtr(not_null(c_104), not_null(d_104));
            }
        }
        t = t_35;
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
  ATerm l_104 = NULL;
  ATerm w_35 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL;
      m_104 = t;
      i_104 :
      if(match_cons(m_104, sym__2))
        {
          n_104 = ATgetArgument(m_104, 0);
          o_104 = ATgetArgument(m_104, 1);
          {
            if(((l_104 != NULL) && (l_104 != n_104)))
              _fail(n_104);
            else
              l_104 = n_104;
            if(((l_104 != NULL) && (l_104 != o_104)))
              _fail(o_104);
            else
              l_104 = o_104;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_37);
    }
  else
    {
      t = w_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_104 (ATerm))
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37;
      h_37 = t;
      {
        ATerm r_104 = NULL;
        ATerm s_104 = NULL;
        t = term_i_33;
        {
          t = get_config_0(t);
          {
            s_104 = t;
            if(((r_104 != NULL) && (r_104 != s_104)))
              _fail(s_104);
            else
              r_104 = s_104;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_104), term_a_18);
          t = geq_0(t);
        }
      }
      t = h_37;
      t = j_104(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm w_104 = NULL,y_104 = NULL;
    ATerm i_37;
    i_37 = t;
    {
      ATerm x_104 = NULL;
      t = run_time_0(t);
      {
        x_104 = t;
        if(((w_104 != NULL) && (w_104 != x_104)))
          _fail(x_104);
        else
          w_104 = x_104;
      }
    }
    t = i_37;
    {
      ATerm z_104 = NULL;
      t = term_o_37;
      {
        t = get_config_0(t);
        {
          z_104 = t;
          if(((y_104 != NULL) && (y_104 != z_104)))
            _fail(z_104);
          else
            y_104 = z_104;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_37), not_null(w_104)), term_p_37), not_null(y_104)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_7);
  {
    t = term_k_34;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  f_105 :
  if(match_cons(g_105, sym_Version_0))
    {
      ATerm i_105 = NULL,k_105 = NULL;
      ATerm r_37;
      r_37 = t;
      {
        ATerm j_105 = NULL;
        t = SSLgetAnnotations(not_null(g_105));
        {
          j_105 = t;
          if(((i_105 != NULL) && (i_105 != j_105)))
            _fail(j_105);
          else
            i_105 = j_105;
        }
      }
      t = r_37;
      {
        ATerm l_105 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_105));
        {
          l_105 = t;
          if(((k_105 != NULL) && (k_105 != l_105)))
            _fail(l_105);
          else
            k_105 = l_105;
        }
        t = not_null(k_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_109 (ATerm))
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
  t = g_109(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_105 = NULL;
  q_105 = t;
  t = SSL_table_create(not_null(q_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  {
    ATerm w_37;
    w_37 = t;
    {
      t = term_x_37;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_37, term_y_37, not_null(u_105));
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
  ATerm y_105 = NULL;
  y_105 = t;
  t = SSL_table_destroy(not_null(y_105));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_106 = NULL;
  c_106 = t;
  t = SSL_exit(not_null(c_106));
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm m_106 = NULL;
  m_106 = t;
  l_106 :
  if(match_cons(m_106, sym_layout_0))
    {
      ATerm z_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_106 = NULL,q_106 = NULL;
          ATerm b_38;
          b_38 = t;
          {
            ATerm p_106 = NULL;
            t = SSLgetAnnotations(not_null(m_106));
            {
              p_106 = t;
              if(((o_106 != NULL) && (o_106 != p_106)))
                _fail(p_106);
              else
                o_106 = p_106;
            }
          }
          t = b_38;
          {
            ATerm r_106 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(o_106));
            {
              r_106 = t;
              if(((q_106 != NULL) && (q_106 != r_106)))
                _fail(r_106);
              else
                q_106 = r_106;
            }
            t = not_null(q_106);
          }
          LocalPopChoice(a_38);
        }
      else
        {
          t = z_37;
          {
            ATerm t_106 = NULL,v_106 = NULL;
            ATerm c_38;
            c_38 = t;
            {
              ATerm u_106 = NULL;
              t = SSLgetAnnotations(not_null(m_106));
              {
                u_106 = t;
                if(((t_106 != NULL) && (t_106 != u_106)))
                  _fail(u_106);
                else
                  t_106 = u_106;
              }
            }
            t = c_38;
            {
              ATerm w_106 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(t_106));
              {
                w_106 = t;
                if(((v_106 != NULL) && (v_106 != w_106)))
                  _fail(w_106);
                else
                  v_106 = w_106;
              }
              t = not_null(v_106);
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
  ATerm m_107 = NULL,n_107 = NULL;
  m_107 = t;
  l_107 :
  if(match_cons(m_107, sym_lit_1))
    {
      n_107 = ATgetArgument(m_107, 0);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_107 = NULL,s_107 = NULL;
            ATerm r_107 = NULL;
            t = SSLgetAnnotations(not_null(m_107));
            {
              r_107 = t;
              if(((q_107 != NULL) && (q_107 != r_107)))
                _fail(r_107);
              else
                q_107 = r_107;
            }
            {
              t = not_null(n_107);
              {
                ATerm u_107 = NULL;
                t = r_0(t);
                {
                  s_107 = t;
                  {
                    ATerm v_107 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(s_107)), not_null(q_107));
                    {
                      v_107 = t;
                      if(((u_107 != NULL) && (u_107 != v_107)))
                        _fail(v_107);
                      else
                        u_107 = v_107;
                    }
                    t = not_null(u_107);
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
              ATerm y_107 = NULL,a_108 = NULL;
              ATerm z_107 = NULL;
              t = SSLgetAnnotations(not_null(m_107));
              {
                z_107 = t;
                if(((y_107 != NULL) && (y_107 != z_107)))
                  _fail(z_107);
                else
                  y_107 = z_107;
              }
              {
                t = not_null(n_107);
                {
                  ATerm c_108 = NULL;
                  t = r_0(t);
                  {
                    a_108 = t;
                    {
                      ATerm d_108 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(a_108)), not_null(y_107));
                      {
                        d_108 = t;
                        if(((c_108 != NULL) && (c_108 != d_108)))
                          _fail(d_108);
                        else
                          c_108 = d_108;
                      }
                      t = not_null(c_108);
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
ATerm list_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm m_108 (ATerm t)
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
        t = Cons_2(t, p_90, m_108);
      }
    return(t);
  }
  t = m_108(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm s_108 = NULL,t_108 = NULL;
  s_108 = t;
  r_108 :
  if(match_cons(s_108, sym_seq_1))
    {
      t_108 = ATgetArgument(s_108, 0);
      {
        ATerm w_108 = NULL,y_108 = NULL;
        ATerm x_108 = NULL;
        t = SSLgetAnnotations(not_null(s_108));
        {
          x_108 = t;
          if(((w_108 != NULL) && (w_108 != x_108)))
            _fail(x_108);
          else
            w_108 = x_108;
        }
        {
          t = not_null(t_108);
          {
            ATerm a_109 = NULL;
            t = s_74(t);
            {
              y_108 = t;
              {
                ATerm b_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(y_108)), not_null(w_108));
                {
                  b_109 = t;
                  if(((a_109 != NULL) && (a_109 != b_109)))
                    _fail(b_109);
                  else
                    a_109 = b_109;
                }
                t = not_null(a_109);
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
  ATerm c_110 = NULL,h_110 = NULL,i_110 = NULL;
  c_110 = t;
  b_110 :
  if(match_cons(c_110, sym_iter_star_sep_2))
    {
      h_110 = ATgetArgument(c_110, 0);
      i_110 = ATgetArgument(c_110, 1);
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_110 = NULL,o_110 = NULL;
            ATerm n_110 = NULL;
            t = SSLgetAnnotations(not_null(c_110));
            {
              n_110 = t;
              if(((m_110 != NULL) && (m_110 != n_110)))
                _fail(n_110);
              else
                m_110 = n_110;
            }
            {
              t = not_null(h_110);
              {
                ATerm q_110 = NULL;
                t = p_0(t);
                {
                  o_110 = t;
                  {
                    t = not_null(i_110);
                    {
                      ATerm s_110 = NULL;
                      t = q_0(t);
                      {
                        q_110 = t;
                        {
                          ATerm t_110 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(o_110), not_null(q_110)), not_null(m_110));
                          {
                            t_110 = t;
                            if(((s_110 != NULL) && (s_110 != t_110)))
                              _fail(t_110);
                            else
                              s_110 = t_110;
                          }
                          t = not_null(s_110);
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
              ATerm y_110 = NULL,a_111 = NULL;
              ATerm z_110 = NULL;
              t = SSLgetAnnotations(not_null(c_110));
              {
                z_110 = t;
                if(((y_110 != NULL) && (y_110 != z_110)))
                  _fail(z_110);
                else
                  y_110 = z_110;
              }
              {
                t = not_null(h_110);
                {
                  ATerm c_111 = NULL;
                  t = p_0(t);
                  {
                    a_111 = t;
                    {
                      t = not_null(i_110);
                      {
                        ATerm e_111 = NULL;
                        t = q_0(t);
                        {
                          c_111 = t;
                          {
                            ATerm f_111 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(a_111), not_null(c_111)), not_null(y_110));
                            {
                              f_111 = t;
                              if(((e_111 != NULL) && (e_111 != f_111)))
                                _fail(f_111);
                              else
                                e_111 = f_111;
                            }
                            t = not_null(e_111);
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
  ATerm z_111 = NULL,a_112 = NULL;
  z_111 = t;
  y_111 :
  if(match_cons(z_111, sym_iter_star_1))
    {
      a_112 = ATgetArgument(z_111, 0);
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_112 = NULL,f_112 = NULL;
            ATerm e_112 = NULL;
            t = SSLgetAnnotations(not_null(z_111));
            {
              e_112 = t;
              if(((d_112 != NULL) && (d_112 != e_112)))
                _fail(e_112);
              else
                d_112 = e_112;
            }
            {
              t = not_null(a_112);
              {
                ATerm h_112 = NULL;
                t = o_0(t);
                {
                  f_112 = t;
                  {
                    ATerm i_112 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(f_112)), not_null(d_112));
                    {
                      i_112 = t;
                      if(((h_112 != NULL) && (h_112 != i_112)))
                        _fail(i_112);
                      else
                        h_112 = i_112;
                    }
                    t = not_null(h_112);
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
              ATerm l_112 = NULL,n_112 = NULL;
              ATerm m_112 = NULL;
              t = SSLgetAnnotations(not_null(z_111));
              {
                m_112 = t;
                if(((l_112 != NULL) && (l_112 != m_112)))
                  _fail(m_112);
                else
                  l_112 = m_112;
              }
              {
                t = not_null(a_112);
                {
                  ATerm p_112 = NULL;
                  t = o_0(t);
                  {
                    n_112 = t;
                    {
                      ATerm q_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(n_112)), not_null(l_112));
                      {
                        q_112 = t;
                        if(((p_112 != NULL) && (p_112 != q_112)))
                          _fail(q_112);
                        else
                          p_112 = q_112;
                      }
                      t = not_null(p_112);
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
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL;
  k_113 = t;
  j_113 :
  if(match_cons(k_113, sym_iter_sep_2))
    {
      l_113 = ATgetArgument(k_113, 0);
      m_113 = ATgetArgument(k_113, 1);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_113 = NULL,s_113 = NULL;
            ATerm r_113 = NULL;
            t = SSLgetAnnotations(not_null(k_113));
            {
              r_113 = t;
              if(((q_113 != NULL) && (q_113 != r_113)))
                _fail(r_113);
              else
                q_113 = r_113;
            }
            {
              t = not_null(l_113);
              {
                ATerm u_113 = NULL;
                t = m_0(t);
                {
                  s_113 = t;
                  {
                    t = not_null(m_113);
                    {
                      ATerm w_113 = NULL;
                      t = n_0(t);
                      {
                        u_113 = t;
                        {
                          ATerm x_113 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(s_113), not_null(u_113)), not_null(q_113));
                          {
                            x_113 = t;
                            if(((w_113 != NULL) && (w_113 != x_113)))
                              _fail(x_113);
                            else
                              w_113 = x_113;
                          }
                          t = not_null(w_113);
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
              ATerm b_114 = NULL,d_114 = NULL;
              ATerm c_114 = NULL;
              t = SSLgetAnnotations(not_null(k_113));
              {
                c_114 = t;
                if(((b_114 != NULL) && (b_114 != c_114)))
                  _fail(c_114);
                else
                  b_114 = c_114;
              }
              {
                t = not_null(l_113);
                {
                  ATerm f_114 = NULL;
                  t = m_0(t);
                  {
                    d_114 = t;
                    {
                      t = not_null(m_113);
                      {
                        ATerm h_114 = NULL;
                        t = n_0(t);
                        {
                          f_114 = t;
                          {
                            ATerm i_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(d_114), not_null(f_114)), not_null(b_114));
                            {
                              i_114 = t;
                              if(((h_114 != NULL) && (h_114 != i_114)))
                                _fail(i_114);
                              else
                                h_114 = i_114;
                            }
                            t = not_null(h_114);
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
  ATerm c_115 = NULL,d_115 = NULL;
  c_115 = t;
  b_115 :
  if(match_cons(c_115, sym_iter_1))
    {
      d_115 = ATgetArgument(c_115, 0);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_115 = NULL,i_115 = NULL;
            ATerm h_115 = NULL;
            t = SSLgetAnnotations(not_null(c_115));
            {
              h_115 = t;
              if(((g_115 != NULL) && (g_115 != h_115)))
                _fail(h_115);
              else
                g_115 = h_115;
            }
            {
              t = not_null(d_115);
              {
                ATerm k_115 = NULL;
                t = l_0(t);
                {
                  i_115 = t;
                  {
                    ATerm l_115 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(i_115)), not_null(g_115));
                    {
                      l_115 = t;
                      if(((k_115 != NULL) && (k_115 != l_115)))
                        _fail(l_115);
                      else
                        k_115 = l_115;
                    }
                    t = not_null(k_115);
                  }
                }
              }
            }
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm o_115 = NULL,q_115 = NULL;
              ATerm p_115 = NULL;
              t = SSLgetAnnotations(not_null(c_115));
              {
                p_115 = t;
                if(((o_115 != NULL) && (o_115 != p_115)))
                  _fail(p_115);
                else
                  o_115 = p_115;
              }
              {
                t = not_null(d_115);
                {
                  ATerm s_115 = NULL;
                  t = l_0(t);
                  {
                    q_115 = t;
                    {
                      ATerm t_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(q_115)), not_null(o_115));
                      {
                        t_115 = t;
                        if(((s_115 != NULL) && (s_115 != t_115)))
                          _fail(t_115);
                        else
                          s_115 = t_115;
                      }
                      t = not_null(s_115);
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
  ATerm v_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(z_38);
    }
  else
    {
      t = v_38;
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
              ATerm c_39 = t;
              int d_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(d_39);
                }
              else
                {
                  t = c_39;
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
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
      d_116 = t;
      c_116 :
      if(((ATgetType(d_116) == AT_LIST) && ATisEmpty(d_116)))
        {
          {
          }
        }
      else
        {
          if(((ATgetType(d_116) == AT_LIST) && !(ATisEmpty(d_116))))
            {
              e_116 = ATgetFirst((ATermList) d_116);
              f_116 = (ATerm) ATgetNext((ATermList) d_116);
              {
              }
            }
          else
            {
              _fail(t);
            }
        }
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      {
        ATerm g_116 (ATerm t)
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
                              t = g_116(t);
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
        t = g_116(t);
      }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm t_39;
  t_39 = t;
  {
    ATerm j_116 = NULL;
    ATerm m_116 = NULL;
    ATerm u_39 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = u_39;
        {
          ATerm k_116 = NULL;
          ATerm l_116 = NULL;
          l_116 = t;
          if(((k_116 != NULL) && (k_116 != l_116)))
            _fail(l_116);
          else
            k_116 = l_116;
          t = (ATerm) ATinsert(ATempty, not_null(k_116));
        }
      }
    {
      m_116 = t;
      if(((j_116 != NULL) && (j_116 != m_116)))
        _fail(m_116);
      else
        j_116 = m_116;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(j_116));
      t = printnl_0(t);
    }
  }
  t = t_39;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_40), term_j_40), term_i_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm p_116 (ATerm t)
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = Cons_2(t, n_90, p_116);
      }
    return(t);
  }
  t = p_116(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL;
  a_117 = t;
  x_116 :
  if(((ATgetType(a_117) == AT_LIST) && !(ATisEmpty(a_117))))
    {
      y_116 = ATgetFirst((ATermList) a_117);
      z_116 = (ATerm) ATgetNext((ATermList) a_117);
      {
        ATerm d_117 = NULL;
        t = not_null(z_116);
        {
          ATerm r_40;
          r_40 = t;
          {
            ATerm e_117 = NULL,g_117 = NULL,i_117 = NULL;
            ATerm s_40;
            s_40 = t;
            {
              ATerm f_117 = NULL;
              t = j_0(t);
              {
                f_117 = t;
                if(((e_117 != NULL) && (e_117 != f_117)))
                  _fail(f_117);
                else
                  e_117 = f_117;
              }
            }
            t = s_40;
            {
              ATerm h_117 = NULL;
              t = not_null(y_116);
              {
                t = i_0(t);
                {
                  h_117 = t;
                  if(((g_117 != NULL) && (g_117 != h_117)))
                    _fail(h_117);
                  else
                    g_117 = h_117;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_117)), not_null(g_117));
                {
                  i_117 = t;
                  if(((d_117 != NULL) && (d_117 != i_117)))
                    _fail(i_117);
                  else
                    d_117 = i_117;
                }
              }
            }
          }
          t = r_40;
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(d_117);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_117) == AT_LIST) && ATisEmpty(a_117)))
        {
          {
            t = term_a_35;
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
  ATerm p_117 = NULL;
  ATerm q_117 = NULL;
  t = term_a_35;
  {
    t = h_0(t);
    {
      q_117 = t;
      if(((p_117 != NULL) && (p_117 != q_117)))
        _fail(q_117);
      else
        p_117 = q_117;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_40), not_null(p_117)), term_v_40);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm z_117 = NULL,a_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym_Program_1))
    {
      a_118 = ATgetArgument(z_117, 0);
      {
        ATerm d_118 = NULL,f_118 = NULL;
        ATerm e_118 = NULL;
        t = SSLgetAnnotations(not_null(z_117));
        {
          e_118 = t;
          if(((d_118 != NULL) && (d_118 != e_118)))
            _fail(e_118);
          else
            d_118 = e_118;
        }
        {
          t = not_null(a_118);
          {
            ATerm h_118 = NULL;
            t = e_74(t);
            {
              f_118 = t;
              {
                ATerm i_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_118)), not_null(d_118));
                {
                  i_118 = t;
                  if(((h_118 != NULL) && (h_118 != i_118)))
                    _fail(i_118);
                  else
                    h_118 = i_118;
                }
                t = not_null(h_118);
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
  ATerm r_118 = NULL;
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_118 = NULL;
      t = term_o_37;
      {
        t = get_config_0(t);
        {
          s_118 = t;
          if(((r_118 != NULL) && (r_118 != s_118)))
            _fail(s_118);
          else
            r_118 = s_118;
        }
      }
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      {
        ATerm b_8 (ATerm t)
        {
          ATerm c_8 (ATerm t)
          {
            ATerm t_118 = NULL;
            t_118 = t;
            if(((r_118 != NULL) && (r_118 != t_118)))
              _fail(t_118);
            else
              r_118 = t_118;
            return(t);
          }
          t = Program_1(t, c_8);
          return(t);
        }
        t = fetch_1(t, b_8);
      }
    }
  {
    ATerm z_40 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          t = not_null(r_118);
          return(t);
        }
        t = short_description_1(t, f_8);
        t = echo_0(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = z_40;
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
                  ATerm u_118 = NULL;
                  ATerm v_118 = NULL;
                  v_118 = t;
                  if(((u_118 != NULL) && (u_118 != v_118)))
                    _fail(v_118);
                  else
                    u_118 = v_118;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_118)), term_l_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_8);
                {
                  ATerm m_41 = t;
                  int o_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_118 = NULL;
                      ATerm x_118 = NULL;
                      ATerm i_8 (ATerm t)
                      {
                        t = not_null(r_118);
                        return(t);
                      }
                      t = long_description_1(t, i_8);
                      {
                        x_118 = t;
                        if(((w_118 != NULL) && (w_118 != x_118)))
                          _fail(x_118);
                        else
                          w_118 = x_118;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(w_118)), term_p_41);
                        t = echo_0(t);
                      }
                      LocalPopChoice(o_41);
                    }
                  else
                    {
                      t = m_41;
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
  ATerm q_41;
  q_41 = t;
  {
    ATerm d_119 = NULL;
    ATerm e_119 = NULL;
    e_119 = t;
    if(((d_119 != NULL) && (d_119 != e_119)))
      _fail(e_119);
    else
      d_119 = e_119;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, not_null(d_119)));
      t = printnl_0(t);
    }
  }
  t = q_41;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm s_41;
  s_41 = t;
  {
    t = n_101(t);
    t = debug_0(t);
  }
  t = s_41;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm l_119 = NULL,m_119 = NULL;
  l_119 = t;
  k_119 :
  if(match_cons(l_119, sym_Undefined_1))
    {
      m_119 = ATgetArgument(l_119, 0);
      {
        ATerm p_119 = NULL,r_119 = NULL;
        ATerm q_119 = NULL;
        t = SSLgetAnnotations(not_null(l_119));
        {
          q_119 = t;
          if(((p_119 != NULL) && (p_119 != q_119)))
            _fail(q_119);
          else
            p_119 = q_119;
        }
        {
          t = not_null(m_119);
          {
            ATerm t_119 = NULL;
            t = f_74(t);
            {
              r_119 = t;
              {
                ATerm u_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_119)), not_null(p_119));
                {
                  u_119 = t;
                  if(((t_119 != NULL) && (t_119 != u_119)))
                    _fail(u_119);
                  else
                    t_119 = u_119;
                }
                t = not_null(t_119);
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
ATerm fetch_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm z_119 (ATerm t)
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_90, _id);
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = Cons_2(t, _id, z_119);
      }
    return(t);
  }
  t = z_119(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_102 (ATerm))
{
  t = fetch_1(t, p_102);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_120 = NULL;
  e_120 = t;
  d_120 :
  if(match_cons(e_120, sym_Help_0))
    {
      ATerm g_120 = NULL,i_120 = NULL;
      ATerm v_41;
      v_41 = t;
      {
        ATerm h_120 = NULL;
        t = SSLgetAnnotations(not_null(e_120));
        {
          h_120 = t;
          if(((g_120 != NULL) && (g_120 != h_120)))
            _fail(h_120);
          else
            g_120 = h_120;
        }
      }
      t = v_41;
      {
        ATerm j_120 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_120));
        {
          j_120 = t;
          if(((i_120 != NULL) && (i_120 != j_120)))
            _fail(j_120);
          else
            i_120 = j_120;
        }
        t = not_null(i_120);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm w_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_82(t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = w_41;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  p_120 = t;
  o_120 :
  if(match_cons(p_120, sym__2))
    {
      q_120 = ATgetArgument(p_120, 0);
      r_120 = ATgetArgument(p_120, 1);
      t = SSL_table_get(not_null(q_120), not_null(r_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_120 = NULL,z_120 = NULL,a_121 = NULL,b_121 = NULL;
  y_120 = t;
  x_120 :
  if(match_cons(y_120, sym__3))
    {
      z_120 = ATgetArgument(y_120, 0);
      a_121 = ATgetArgument(y_120, 1);
      b_121 = ATgetArgument(y_120, 2);
      {
        ATerm a_42;
        a_42 = t;
        {
          ATerm f_121 = NULL;
          ATerm g_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_120), not_null(a_121));
          {
            ATerm b_42 = t;
            int n_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_42);
              }
            else
              {
                t = b_42;
                t = (ATerm) ATempty;
              }
            {
              g_121 = t;
              if(((f_121 != NULL) && (f_121 != g_121)))
                _fail(g_121);
              else
                f_121 = g_121;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_120), not_null(a_121), (ATerm) ATinsert(CheckATermList(not_null(f_121)), not_null(b_121)));
            t = table_put_0(t);
          }
        }
        t = a_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_103 (ATerm))
{
  ATerm k_121 = NULL;
  ATerm l_121 = NULL;
  t = term_a_35;
  {
    t = u_103(t);
    {
      l_121 = t;
      if(((k_121 != NULL) && (k_121 != l_121)))
        _fail(l_121);
      else
        k_121 = l_121;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_41, term_j_41, not_null(k_121));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL;
  r_121 = t;
  q_121 :
  if(match_string(r_121, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_121) == AT_LIST) && !(ATisEmpty(r_121))))
        {
          s_121 = ATgetFirst((ATermList) r_121);
          t_121 = (ATerm) ATgetNext((ATermList) r_121);
          {
            ATerm w_121 = NULL;
            ATerm a_43;
            a_43 = t;
            {
              t = not_null(s_121);
              t = a_0(t);
            }
            t = a_43;
            {
              ATerm x_121 = NULL;
              t = term_a_35;
              {
                t = d_0(t);
                {
                  x_121 = t;
                  if(((w_121 != NULL) && (w_121 != x_121)))
                    _fail(x_121);
                  else
                    w_121 = x_121;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_121)), not_null(w_121));
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
    ATerm c_122 = NULL;
    c_122 = t;
    b_122 :
    if(!(match_string(c_122, "--help")))
      {
        if(!(match_string(c_122, "-h")))
          {
            if(!(match_string(c_122, "-?")))
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
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  f_122 = t;
  e_122 :
  if(((ATgetType(f_122) == AT_LIST) && !(ATisEmpty(f_122))))
    {
      g_122 = ATgetFirst((ATermList) f_122);
      h_122 = (ATerm) ATgetNext((ATermList) f_122);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_122)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_122)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL;
  r_122 = t;
  q_122 :
  if(((ATgetType(r_122) == AT_LIST) && !(ATisEmpty(r_122))))
    {
      s_122 = ATgetFirst((ATermList) r_122);
      t_122 = (ATerm) ATgetNext((ATermList) r_122);
      {
        ATerm x_122 = NULL,z_122 = NULL;
        ATerm y_122 = NULL;
        t = SSLgetAnnotations(not_null(r_122));
        {
          y_122 = t;
          if(((x_122 != NULL) && (x_122 != y_122)))
            _fail(y_122);
          else
            x_122 = y_122;
        }
        {
          t = not_null(s_122);
          {
            ATerm b_123 = NULL;
            t = i_69(t);
            {
              z_122 = t;
              {
                t = not_null(t_122);
                {
                  ATerm d_123 = NULL;
                  t = j_69(t);
                  {
                    b_123 = t;
                    {
                      ATerm e_123 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_123)), not_null(z_122)), not_null(x_122));
                      {
                        e_123 = t;
                        if(((d_123 != NULL) && (d_123 != e_123)))
                          _fail(e_123);
                        else
                          d_123 = e_123;
                      }
                      t = not_null(d_123);
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
  ATerm o_123 = NULL;
  o_123 = t;
  n_123 :
  if(((ATgetType(o_123) == AT_LIST) && ATisEmpty(o_123)))
    {
      {
        ATerm q_123 = NULL,s_123 = NULL;
        ATerm g_43;
        g_43 = t;
        {
          ATerm r_123 = NULL;
          t = SSLgetAnnotations(not_null(o_123));
          {
            r_123 = t;
            if(((q_123 != NULL) && (q_123 != r_123)))
              _fail(r_123);
            else
              q_123 = r_123;
          }
        }
        t = g_43;
        {
          ATerm t_123 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_123));
          {
            t_123 = t;
            if(((s_123 != NULL) && (s_123 != t_123)))
              _fail(t_123);
            else
              s_123 = t_123;
          }
          t = not_null(s_123);
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
  ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL;
  z_123 = t;
  y_123 :
  if(match_cons(z_123, sym__2))
    {
      a_124 = ATgetArgument(z_123, 0);
      b_124 = ATgetArgument(z_123, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_33, not_null(a_124), not_null(b_124));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm h_43;
  h_43 = t;
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_43;
        t = s_103(t);
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        {
        }
      }
  }
  t = h_43;
  {
    ATerm m_8 (ATerm t)
    {
      ATerm j_124 = NULL;
      ATerm s_43;
      s_43 = t;
      {
        ATerm h_124 = NULL;
        ATerm i_124 = NULL;
        i_124 = t;
        if(((h_124 != NULL) && (h_124 != i_124)))
          _fail(i_124);
        else
          h_124 = i_124;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_37, not_null(h_124));
          t = set_config_0(t);
        }
      }
      t = s_43;
      {
        ATerm k_124 = NULL;
        k_124 = t;
        if(((j_124 != NULL) && (j_124 != k_124)))
          _fail(k_124);
        else
          j_124 = k_124;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_124));
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
                t = s_103(t);
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
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL;
  ATerm x_43;
  x_43 = t;
  {
    ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL;
    t_124 = t;
    p_124 :
    if(match_cons(t_124, sym__3))
      {
        u_124 = ATgetArgument(t_124, 0);
        v_124 = ATgetArgument(t_124, 1);
        w_124 = ATgetArgument(t_124, 2);
        {
          if(((q_124 != NULL) && (q_124 != u_124)))
            _fail(u_124);
          else
            q_124 = u_124;
          {
            if(((r_124 != NULL) && (r_124 != v_124)))
              _fail(v_124);
            else
              r_124 = v_124;
            {
              if(((s_124 != NULL) && (s_124 != w_124)))
                _fail(w_124);
              else
                s_124 = w_124;
              t = SSL_table_put(not_null(q_124), not_null(r_124), not_null(s_124));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_43;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm z_124 = NULL;
  ATerm y_43;
  y_43 = t;
  {
    t = term_d_44;
    t = table_put_0(t);
  }
  t = y_43;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm e_44 = t;
      int f_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_103(t);
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
                t = term_b_43;
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
              t = term_k_34;
              t = exit_0(t);
            }
          }
          LocalPopChoice(h_44);
        }
      else
        {
          t = g_44;
          {
            ATerm l_44 = t;
            int m_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_8 (ATerm t)
                {
                  ATerm q_8 (ATerm t)
                  {
                    ATerm a_125 = NULL;
                    a_125 = t;
                    if(((z_124 != NULL) && (z_124 != a_125)))
                      _fail(a_125);
                    else
                      z_124 = a_125;
                    return(t);
                  }
                  t = Undefined_1(t, q_8);
                  return(t);
                }
                t = fetch_1(t, p_8);
                {
                  ATerm r_8 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_124)), term_p_44);
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
                LocalPopChoice(m_44);
              }
            else
              {
                t = l_44;
                {
                }
              }
          }
        }
      {
        ATerm u_44;
        u_44 = t;
        {
          t = term_i_41;
          t = table_destroy_0(t);
        }
        t = u_44;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm))
{
  t = parse_options_1(t, m_109);
  {
    t = store_options_0(t);
    {
      t = o_109(t);
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_109);
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
                  t = p_109(t);
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
ATerm iowrap_4 (ATerm t, ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_110(t);
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_110);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_8, f_110, g_110, t_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm v_8 (ATerm t)
    {
      ATerm g_45;
      g_45 = t;
      {
        ATerm d_125 = NULL;
        ATerm e_125 = NULL;
        t = term_o_37;
        {
          t = get_config_0(t);
          {
            e_125 = t;
            if(((d_125 != NULL) && (d_125 != e_125)))
              _fail(e_125);
            else
              d_125 = e_125;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_31, (ATerm) ATinsert(ATempty, not_null(d_125)));
          t = printnl_0(t);
        }
      }
      t = g_45;
      return(t);
    }
    t = if_verbose2_1(t, v_8);
    return(t);
  }
  t = iowrap_4(t, x_109, y_109, z_109, u_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_109 (ATerm), ATerm w_109 (ATerm))
{
  t = iowrap_3(t, v_109, w_109, default_usage_0);
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

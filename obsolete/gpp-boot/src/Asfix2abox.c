#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_lit_1;
Symbol sym_aliases_1;
Symbol sym_alias_2;
Symbol sym_Alias_s_1;
Symbol sym_CharClass_1;
Symbol sym_CharClass_Lookaheads_2;
Symbol sym_Lookahead_1;
Symbol sym_bar_2;
Symbol sym_comma_1;
Symbol sym_follow_restriction_2;
Symbol sym_Restriction_s_1;
Symbol sym_restrictions_1;
Symbol sym_reject_0;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
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
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
Symbol sym_qlit_1;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_sort_1;
Symbol sym_Sorts_1;
Symbol sym_NumChar_1;
Symbol sym_ShortChar_1;
Symbol sym_Character_dunno_a__0_0;
Symbol sym_Character_dunno_b__0_0;
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
Symbol sym_char_class_1;
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
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_renamings_1;
Symbol sym_sort_renaming_2;
Symbol sym_prod_renaming_2;
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
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_TagId_empty_0;
Symbol sym_Symbol_s_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_START_0;
Symbol sym_START_p__0;
Symbol sym_lexical_priorities_1;
Symbol sym_context_free_priorities_1;
Symbol sym_lexical_restrictions_1;
Symbol sym_context_free_restrictions_1;
Symbol sym_Definition_1;
Symbol sym_Injections_0;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
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
Symbol sym_atr_1;
Symbol sym_cons_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_parsetree_2;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_aliases_1 = ATmakeSymbol("aliases", 1, ATfalse);
  ATprotectSymbol(sym_aliases_1);
  sym_alias_2 = ATmakeSymbol("alias", 2, ATfalse);
  ATprotectSymbol(sym_alias_2);
  sym_Alias_s_1 = ATmakeSymbol("Alias-s", 1, ATfalse);
  ATprotectSymbol(sym_Alias_s_1);
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
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_NumChar_1 = ATmakeSymbol("NumChar", 1, ATfalse);
  ATprotectSymbol(sym_NumChar_1);
  sym_ShortChar_1 = ATmakeSymbol("ShortChar", 1, ATfalse);
  ATprotectSymbol(sym_ShortChar_1);
  sym_Character_dunno_a__0_0 = ATmakeSymbol("Character-dunno-a_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_a__0_0);
  sym_Character_dunno_b__0_0 = ATmakeSymbol("Character-dunno-b_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_b__0_0);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
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
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
  ATprotectSymbol(sym_renamings_1);
  sym_sort_renaming_2 = ATmakeSymbol("sort-renaming", 2, ATfalse);
  ATprotectSymbol(sym_sort_renaming_2);
  sym_prod_renaming_2 = ATmakeSymbol("prod-renaming", 2, ATfalse);
  ATprotectSymbol(sym_prod_renaming_2);
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
  sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
  ATprotectSymbol(sym_empty_grammar_0);
  sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
  ATprotectSymbol(sym_conc_grammars_2);
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  sym_Symbol_s_1 = ATmakeSymbol("Symbol-s", 1, ATfalse);
  ATprotectSymbol(sym_Symbol_s_1);
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
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
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
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
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
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm obsolete_1 (ATerm, ATerm z_66 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm));
ATerm Option_2 (ATerm, ATerm f_65 (ATerm), ATerm g_65 (ATerm));
ATerm layout2box_0 (ATerm);
ATerm is_significant_layout_0 (ATerm);
ATerm InsLayout_1 (ATerm, ATerm f_61 (ATerm));
ATerm insert_layout_0 (ATerm);
ATerm layout_1 (ATerm, ATerm n_60 (ATerm));
ATerm collect_p__1 (ATerm, ATerm m_61 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm t_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm p_77 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm S_1 (ATerm, ATerm s_0 (ATerm));
ATerm Arg2_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm filter_literals_0 (ATerm);
ATerm make_path_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm j_61 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_4 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm t_73 (ATerm));
ATerm build_sep_list_0 (ATerm);
ATerm build_list_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm seq2abox_0 (ATerm);
ATerm lit_1 (ATerm, ATerm p_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm pp_table_get_0 (ATerm);
ATerm StoreEntryIfNotExists_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm o_0 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm t_61 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Make_0 (ATerm);
ATerm pair_0 (ATerm);
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm w_61 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm s_61 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm get_pp_entry_0 (ATerm);
ATerm prod_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm add_attributes_0 (ATerm);
ATerm normalize_constr_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm isAlpha_0 (ATerm);
ATerm string_Hd_0 (ATerm);
ATerm strs2constr_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm new_0 (ATerm);
ATerm Sym2Strs_0 (ATerm);
ATerm sym2strs_0 (ATerm);
ATerm syms2strs_0 (ATerm);
ATerm empty_string_0 (ATerm);
ATerm empty_test_0 (ATerm);
ATerm isHyphen_0 (ATerm);
ATerm isLower_0 (ATerm);
ATerm isUpper_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm isNum_0 (ATerm);
ATerm isAlphaNumHyphen_0 (ATerm);
ATerm toAlphaNum_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm j_76 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_76 (ATerm));
ATerm Lit2Str_0 (ATerm);
ATerm Singleton_0 (ATerm);
ATerm list_ana_1 (ATerm, ATerm y_60 (ATerm));
ATerm lit2str_0 (ATerm);
ATerm lits2strs_0 (ATerm);
ATerm mk_constr_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm g_0 (ATerm));
ATerm iter_1 (ATerm, ATerm f_0 (ATerm));
ATerm alt_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm syntaxless_sort_0 (ATerm);
ATerm is_injection_0 (ATerm);
ATerm is_reject_0 (ATerm);
ATerm is_bracket_0 (ATerm);
ATerm get_constr_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm uq2q_0 (ATerm);
ATerm cons_1 (ATerm, ATerm c_0 (ATerm));
ATerm at_cons_1 (ATerm, ATerm c_61 (ATerm));
ATerm prodcons_0 (ATerm);
ATerm sort_1 (ATerm, ATerm b_0 (ATerm));
ATerm get_templ_0 (ATerm);
ATerm appl2abox_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm a_0 (ATerm));
ATerm filter_1 (ATerm, ATerm d_69 (ATerm));
ATerm is_list_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_77 (ATerm));
ATerm sometd_1 (ATerm, ATerm k_79 (ATerm));
ATerm repeat_2 (ATerm, ATerm o_80 (ATerm), ATerm p_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_80 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm w_75 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_66 (ATerm));
ATerm oncetd_1 (ATerm, ATerm d_79 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm e_66 (ATerm));
ATerm notify_1 (ATerm, ATerm r_61 (ATerm));
ATerm map_1 (ATerm, ATerm x_74 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm g_71 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm b_70 (ATerm));
ATerm crush_3 (ATerm, ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm collect_1 (ATerm, ATerm z_71 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_66 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_65 (ATerm));
ATerm need_help_1 (ATerm, ATerm h_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm Asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm e_14;
  e_14 = t;
  t = z_66(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, u_0);
  }
  t = e_14;
  return(t);
}
ATerm usage_p__0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
    return(t);
  }
  t = obsolete_1(t, v_0);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm))
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  i_4 = t;
  g_4 :
  if(match_cons(i_4, sym_Cons_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      h_4 :
      if(match_cons(k_4, sym_Cons_2))
        {
          l_4 = ATgetArgument(k_4, 0);
          m_4 = ATgetArgument(k_4, 1);
          {
            ATerm q_4 = NULL;
            t = not_null(j_4);
            t = h_65(t);
            t = not_null(l_4);
            t = i_65(t);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_4), not_null(m_4));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm f_65 (ATerm), ATerm g_65 (ATerm))
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym_Cons_2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm c_5 = NULL;
        t = not_null(y_4);
        t = f_65(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = g_65(t);
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_5), not_null(z_4));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm layout2box_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym_layout_1))
    {
      k_5 = ATgetArgument(j_5, 0);
      {
        ATerm m_5 = NULL;
        t = not_null(k_5);
        t = concat_strings_0(t);
        m_5 = t;
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_S_1, not_null(m_5)), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_significant_layout_0 (ATerm t)
{
  ATerm v_5 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm w_5 = NULL,x_5 = NULL;
    w_5 = t;
    u_5 :
    if(match_cons(w_5, sym_layout_1))
      {
        x_5 = ATgetArgument(w_5, 0);
        if(v_5 != NULL && v_5 != x_5)
          _fail(x_5);
        else
          v_5 = x_5;
        t = not_null(v_5);
        t = concat_strings_0(t);
        t = explode_string_0(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm g_14 = t;
            if(PushChoice()==0)
              {
                ATerm y_5 = NULL;
                y_5 = t;
                r_5 :
                if(!(match_int(y_5, 9)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              t = g_14;
            {
              ATerm h_14 = t;
              if(PushChoice()==0)
                {
                  ATerm z_5 = NULL;
                  z_5 = t;
                  s_5 :
                  if(!(match_int(z_5, 10)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = h_14;
              {
                ATerm i_14 = t;
                if(PushChoice()==0)
                  {
                    ATerm a_6 = NULL;
                    a_6 = t;
                    t_5 :
                    if(!(match_int(a_6, 32)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = i_14;
              }
            }
            return(t);
          }
          t = filter_1(t, w_0);
          {
            ATerm j_14 = t;
            if(PushChoice()==0)
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              t = j_14;
          }
        }
      }
    else
      _fail(t);
  }
  t = f_14;
  return(t);
}
ATerm InsLayout_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        ATerm x_0 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, Nil_0, x_0);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
          j_7 = t;
          s_6 :
          if(match_cons(j_7, sym_TCons_2))
            {
              k_7 = ATgetArgument(j_7, 0);
              p_7 = ATgetArgument(j_7, 1);
              t_6 :
              if(match_cons(k_7, sym_Cons_2))
                {
                  l_7 = ATgetArgument(k_7, 0);
                  m_7 = ATgetArgument(k_7, 1);
                  u_6 :
                  if(match_cons(m_7, sym_Nil_0))
                    {
                      v_6 :
                      if(match_cons(p_7, sym_TCons_2))
                        {
                          q_7 = ATgetArgument(p_7, 0);
                          r_7 = ATgetArgument(p_7, 1);
                          w_6 :
                          if(match_cons(r_7, sym_TNil_0))
                            {
                              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
                              if(z_6 != NULL && z_6 != l_7)
                                _fail(l_7);
                              else
                                z_6 = l_7;
                              if(e_7 != NULL && e_7 != q_7)
                                _fail(q_7);
                              else
                                e_7 = q_7;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = f_61(t);
                              s_7 = t;
                              f_6 :
                              if(match_cons(s_7, sym_TCons_2))
                                {
                                  t_7 = ATgetArgument(s_7, 0);
                                  u_7 = ATgetArgument(s_7, 1);
                                  g_6 :
                                  if(match_cons(u_7, sym_TCons_2))
                                    {
                                      v_7 = ATgetArgument(u_7, 0);
                                      w_7 = ATgetArgument(u_7, 1);
                                      h_6 :
                                      if(match_cons(w_7, sym_TNil_0))
                                        {
                                          if(a_7 != NULL && a_7 != t_7)
                                            _fail(t_7);
                                          else
                                            a_7 = t_7;
                                          if(f_7 != NULL && f_7 != v_7)
                                            _fail(v_7);
                                          else
                                            f_7 = v_7;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(m_7, sym_Cons_2))
                        {
                          n_7 = ATgetArgument(m_7, 0);
                          o_7 = ATgetArgument(m_7, 1);
                          x_6 :
                          if(match_cons(p_7, sym_TCons_2))
                            {
                              q_7 = ATgetArgument(p_7, 0);
                              r_7 = ATgetArgument(p_7, 1);
                              y_6 :
                              if(match_cons(r_7, sym_TNil_0))
                                {
                                  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
                                  if(z_6 != NULL && z_6 != l_7)
                                    _fail(l_7);
                                  else
                                    z_6 = l_7;
                                  if(c_7 != NULL && c_7 != n_7)
                                    _fail(n_7);
                                  else
                                    c_7 = n_7;
                                  if(d_7 != NULL && d_7 != o_7)
                                    _fail(o_7);
                                  else
                                    d_7 = o_7;
                                  if(e_7 != NULL && e_7 != q_7)
                                    _fail(q_7);
                                  else
                                    e_7 = q_7;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = f_61(t);
                                  x_7 = t;
                                  o_6 :
                                  if(match_cons(x_7, sym_TCons_2))
                                    {
                                      y_7 = ATgetArgument(x_7, 0);
                                      z_7 = ATgetArgument(x_7, 1);
                                      p_6 :
                                      if(match_cons(z_7, sym_TCons_2))
                                        {
                                          a_8 = ATgetArgument(z_7, 0);
                                          d_8 = ATgetArgument(z_7, 1);
                                          q_6 :
                                          if(match_cons(a_8, sym_Cons_2))
                                            {
                                              b_8 = ATgetArgument(a_8, 0);
                                              c_8 = ATgetArgument(a_8, 1);
                                              r_6 :
                                              if(match_cons(d_8, sym_TNil_0))
                                                {
                                                  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
                                                  if(a_7 != NULL && a_7 != y_7)
                                                    _fail(y_7);
                                                  else
                                                    a_7 = y_7;
                                                  if(b_7 != NULL && b_7 != b_8)
                                                    _fail(b_8);
                                                  else
                                                    b_7 = b_8;
                                                  if(f_7 != NULL && f_7 != c_8)
                                                    _fail(c_8);
                                                  else
                                                    f_7 = c_8;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_7), not_null(d_7)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = l_8(t);
                                                  e_8 = t;
                                                  l_6 :
                                                  if(match_cons(e_8, sym_TCons_2))
                                                    {
                                                      f_8 = ATgetArgument(e_8, 0);
                                                      g_8 = ATgetArgument(e_8, 1);
                                                      m_6 :
                                                      if(match_cons(g_8, sym_TCons_2))
                                                        {
                                                          h_8 = ATgetArgument(g_8, 0);
                                                          i_8 = ATgetArgument(g_8, 1);
                                                          n_6 :
                                                          if(match_cons(i_8, sym_TNil_0))
                                                            {
                                                              if(h_7 != NULL && h_7 != f_8)
                                                                _fail(f_8);
                                                              else
                                                                h_7 = f_8;
                                                              if(g_7 != NULL && g_7 != h_8)
                                                                _fail(h_8);
                                                              else
                                                                g_7 = h_8;
                                                              {
                                                                ATerm u_14 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    ATerm j_8 = NULL;
                                                                    t = not_null(b_7);
                                                                    t = is_significant_layout_0(t);
                                                                    t = not_null(b_7);
                                                                    t = layout2box_0(t);
                                                                    j_8 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_8), not_null(h_7))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_14;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_7), not_null(h_7)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = l_8(t);
  return(t);
}
ATerm insert_layout_0 (ATerm t)
{
  ATerm y_12 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
      z_12 = t;
      t_8 :
      if(match_cons(z_12, sym_Cons_2))
        {
          a_13 = ATgetArgument(z_12, 0);
          b_13 = ATgetArgument(z_12, 1);
          if(y_12 != NULL && y_12 != a_13)
            _fail(a_13);
          else
            y_12 = a_13;
          t = Tl_0(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = TCons_2(t, z_0, TNil_0);
    return(t);
  }
  t = TCons_2(t, _id, y_0);
  {
    ATerm c_23 (ATerm t)
    {
      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL;
      ATerm v_14 = t;
      if(PushChoice()==0)
        {
          ATerm m_13 = NULL,n_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
          n_13 = t;
          w_10 :
          if(match_cons(n_13, sym_TCons_2))
            {
              x_13 = ATgetArgument(n_13, 0);
              k_14 = ATgetArgument(n_13, 1);
              x_10 :
              if(match_cons(x_13, sym_H_2))
                {
                  y_13 = ATgetArgument(x_13, 0);
                  z_13 = ATgetArgument(x_13, 1);
                  y_10 :
                  if(match_cons(k_14, sym_TCons_2))
                    {
                      l_14 = ATgetArgument(k_14, 0);
                      m_14 = ATgetArgument(k_14, 1);
                      z_10 :
                      if(match_cons(m_14, sym_TNil_0))
                        {
                          ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
                          if(c_13 != NULL && c_13 != y_13)
                            _fail(y_13);
                          else
                            c_13 = y_13;
                          if(e_13 != NULL && e_13 != z_13)
                            _fail(z_13);
                          else
                            e_13 = z_13;
                          if(f_13 != NULL && f_13 != l_14)
                            _fail(l_14);
                          else
                            f_13 = l_14;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = InsLayout_1(t, c_23);
                          n_14 = t;
                          f_9 :
                          if(match_cons(n_14, sym_TCons_2))
                            {
                              o_14 = ATgetArgument(n_14, 0);
                              p_14 = ATgetArgument(n_14, 1);
                              g_9 :
                              if(match_cons(p_14, sym_TCons_2))
                                {
                                  q_14 = ATgetArgument(p_14, 0);
                                  r_14 = ATgetArgument(p_14, 1);
                                  h_9 :
                                  if(match_cons(r_14, sym_TNil_0))
                                    {
                                      if(h_13 != NULL && h_13 != o_14)
                                        _fail(o_14);
                                      else
                                        h_13 = o_14;
                                      if(j_13 != NULL && j_13 != q_14)
                                        _fail(q_14);
                                      else
                                        j_13 = q_14;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_13, sym_HV_2))
                    {
                      y_13 = ATgetArgument(x_13, 0);
                      z_13 = ATgetArgument(x_13, 1);
                      a_11 :
                      if(match_cons(k_14, sym_TCons_2))
                        {
                          l_14 = ATgetArgument(k_14, 0);
                          m_14 = ATgetArgument(k_14, 1);
                          b_11 :
                          if(match_cons(m_14, sym_TNil_0))
                            {
                              ATerm s_14 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
                              if(c_13 != NULL && c_13 != y_13)
                                _fail(y_13);
                              else
                                c_13 = y_13;
                              if(e_13 != NULL && e_13 != z_13)
                                _fail(z_13);
                              else
                                e_13 = z_13;
                              if(f_13 != NULL && f_13 != l_14)
                                _fail(l_14);
                              else
                                f_13 = l_14;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = InsLayout_1(t, c_23);
                              s_14 = t;
                              j_9 :
                              if(match_cons(s_14, sym_TCons_2))
                                {
                                  i_16 = ATgetArgument(s_14, 0);
                                  j_16 = ATgetArgument(s_14, 1);
                                  k_9 :
                                  if(match_cons(j_16, sym_TCons_2))
                                    {
                                      k_16 = ATgetArgument(j_16, 0);
                                      l_16 = ATgetArgument(j_16, 1);
                                      l_9 :
                                      if(match_cons(l_16, sym_TNil_0))
                                        {
                                          if(h_13 != NULL && h_13 != i_16)
                                            _fail(i_16);
                                          else
                                            h_13 = i_16;
                                          if(j_13 != NULL && j_13 != k_16)
                                            _fail(k_16);
                                          else
                                            j_13 = k_16;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_HV_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(x_13, sym_V_2))
                        {
                          y_13 = ATgetArgument(x_13, 0);
                          z_13 = ATgetArgument(x_13, 1);
                          c_11 :
                          if(match_cons(k_14, sym_TCons_2))
                            {
                              l_14 = ATgetArgument(k_14, 0);
                              m_14 = ATgetArgument(k_14, 1);
                              d_11 :
                              if(match_cons(m_14, sym_TNil_0))
                                {
                                  ATerm m_16 = NULL,v_17 = NULL,w_17 = NULL,a_19 = NULL,b_19 = NULL;
                                  if(c_13 != NULL && c_13 != y_13)
                                    _fail(y_13);
                                  else
                                    c_13 = y_13;
                                  if(e_13 != NULL && e_13 != z_13)
                                    _fail(z_13);
                                  else
                                    e_13 = z_13;
                                  if(f_13 != NULL && f_13 != l_14)
                                    _fail(l_14);
                                  else
                                    f_13 = l_14;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = InsLayout_1(t, c_23);
                                  m_16 = t;
                                  n_9 :
                                  if(match_cons(m_16, sym_TCons_2))
                                    {
                                      v_17 = ATgetArgument(m_16, 0);
                                      w_17 = ATgetArgument(m_16, 1);
                                      o_9 :
                                      if(match_cons(w_17, sym_TCons_2))
                                        {
                                          a_19 = ATgetArgument(w_17, 0);
                                          b_19 = ATgetArgument(w_17, 1);
                                          p_9 :
                                          if(match_cons(b_19, sym_TNil_0))
                                            {
                                              if(h_13 != NULL && h_13 != v_17)
                                                _fail(v_17);
                                              else
                                                h_13 = v_17;
                                              if(j_13 != NULL && j_13 != a_19)
                                                _fail(a_19);
                                              else
                                                j_13 = a_19;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(x_13, sym_A_3))
                            {
                              y_13 = ATgetArgument(x_13, 0);
                              z_13 = ATgetArgument(x_13, 1);
                              m_13 = ATgetArgument(x_13, 2);
                              e_11 :
                              if(match_cons(k_14, sym_TCons_2))
                                {
                                  l_14 = ATgetArgument(k_14, 0);
                                  m_14 = ATgetArgument(k_14, 1);
                                  f_11 :
                                  if(match_cons(m_14, sym_TNil_0))
                                    {
                                      ATerm c_19 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
                                      if(c_13 != NULL && c_13 != y_13)
                                        _fail(y_13);
                                      else
                                        c_13 = y_13;
                                      if(d_13 != NULL && d_13 != z_13)
                                        _fail(z_13);
                                      else
                                        d_13 = z_13;
                                      if(e_13 != NULL && e_13 != m_13)
                                        _fail(m_13);
                                      else
                                        e_13 = m_13;
                                      if(f_13 != NULL && f_13 != l_14)
                                        _fail(l_14);
                                      else
                                        f_13 = l_14;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = InsLayout_1(t, c_23);
                                      c_19 = t;
                                      r_9 :
                                      if(match_cons(c_19, sym_TCons_2))
                                        {
                                          a_21 = ATgetArgument(c_19, 0);
                                          b_21 = ATgetArgument(c_19, 1);
                                          s_9 :
                                          if(match_cons(b_21, sym_TCons_2))
                                            {
                                              c_21 = ATgetArgument(b_21, 0);
                                              d_21 = ATgetArgument(b_21, 1);
                                              t_9 :
                                              if(match_cons(d_21, sym_TNil_0))
                                                {
                                                  if(h_13 != NULL && h_13 != a_21)
                                                    _fail(a_21);
                                                  else
                                                    h_13 = a_21;
                                                  if(j_13 != NULL && j_13 != c_21)
                                                    _fail(c_21);
                                                  else
                                                    j_13 = c_21;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_A_3, not_null(c_13), not_null(d_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(x_13, sym_R_2))
                                {
                                  y_13 = ATgetArgument(x_13, 0);
                                  z_13 = ATgetArgument(x_13, 1);
                                  g_11 :
                                  if(match_cons(k_14, sym_TCons_2))
                                    {
                                      l_14 = ATgetArgument(k_14, 0);
                                      m_14 = ATgetArgument(k_14, 1);
                                      h_11 :
                                      if(match_cons(m_14, sym_TNil_0))
                                        {
                                          ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
                                          if(c_13 != NULL && c_13 != y_13)
                                            _fail(y_13);
                                          else
                                            c_13 = y_13;
                                          if(e_13 != NULL && e_13 != z_13)
                                            _fail(z_13);
                                          else
                                            e_13 = z_13;
                                          if(f_13 != NULL && f_13 != l_14)
                                            _fail(l_14);
                                          else
                                            f_13 = l_14;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = InsLayout_1(t, c_23);
                                          e_21 = t;
                                          v_9 :
                                          if(match_cons(e_21, sym_TCons_2))
                                            {
                                              f_21 = ATgetArgument(e_21, 0);
                                              g_21 = ATgetArgument(e_21, 1);
                                              w_9 :
                                              if(match_cons(g_21, sym_TCons_2))
                                                {
                                                  h_21 = ATgetArgument(g_21, 0);
                                                  i_21 = ATgetArgument(g_21, 1);
                                                  x_9 :
                                                  if(match_cons(i_21, sym_TNil_0))
                                                    {
                                                      if(h_13 != NULL && h_13 != f_21)
                                                        _fail(f_21);
                                                      else
                                                        h_13 = f_21;
                                                      if(j_13 != NULL && j_13 != h_21)
                                                        _fail(h_21);
                                                      else
                                                        j_13 = h_21;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(x_13, sym_ALT_2))
                                    {
                                      y_13 = ATgetArgument(x_13, 0);
                                      z_13 = ATgetArgument(x_13, 1);
                                      i_12 :
                                      if(match_cons(k_14, sym_TCons_2))
                                        {
                                          l_14 = ATgetArgument(k_14, 0);
                                          m_14 = ATgetArgument(k_14, 1);
                                          j_12 :
                                          if(match_cons(m_14, sym_TNil_0))
                                            {
                                              ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
                                              if(c_13 != NULL && c_13 != y_13)
                                                _fail(y_13);
                                              else
                                                c_13 = y_13;
                                              if(e_13 != NULL && e_13 != z_13)
                                                _fail(z_13);
                                              else
                                                e_13 = z_13;
                                              if(f_13 != NULL && f_13 != l_14)
                                                _fail(l_14);
                                              else
                                                f_13 = l_14;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = InsLayout_1(t, c_23);
                                              j_21 = t;
                                              d_10 :
                                              if(match_cons(j_21, sym_TCons_2))
                                                {
                                                  k_21 = ATgetArgument(j_21, 0);
                                                  l_21 = ATgetArgument(j_21, 1);
                                                  e_10 :
                                                  if(match_cons(l_21, sym_TCons_2))
                                                    {
                                                      m_21 = ATgetArgument(l_21, 0);
                                                      n_21 = ATgetArgument(l_21, 1);
                                                      f_10 :
                                                      if(match_cons(n_21, sym_TNil_0))
                                                        {
                                                          ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
                                                          if(d_13 != NULL && d_13 != k_21)
                                                            _fail(k_21);
                                                          else
                                                            d_13 = k_21;
                                                          if(j_13 != NULL && j_13 != m_21)
                                                            _fail(m_21);
                                                          else
                                                            j_13 = m_21;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = InsLayout_1(t, c_23);
                                                          o_21 = t;
                                                          a_10 :
                                                          if(match_cons(o_21, sym_TCons_2))
                                                            {
                                                              p_21 = ATgetArgument(o_21, 0);
                                                              q_21 = ATgetArgument(o_21, 1);
                                                              b_10 :
                                                              if(match_cons(q_21, sym_TCons_2))
                                                                {
                                                                  r_21 = ATgetArgument(q_21, 0);
                                                                  s_21 = ATgetArgument(q_21, 1);
                                                                  c_10 :
                                                                  if(match_cons(s_21, sym_TNil_0))
                                                                    {
                                                                      if(h_13 != NULL && h_13 != p_21)
                                                                        _fail(p_21);
                                                                      else
                                                                        h_13 = p_21;
                                                                      if(k_13 != NULL && k_13 != r_21)
                                                                        _fail(r_21);
                                                                      else
                                                                        k_13 = r_21;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_ALT_2, not_null(d_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(x_13, sym_LBL_2))
                                        {
                                          y_13 = ATgetArgument(x_13, 0);
                                          z_13 = ATgetArgument(x_13, 1);
                                          k_12 :
                                          if(match_cons(k_14, sym_TCons_2))
                                            {
                                              l_14 = ATgetArgument(k_14, 0);
                                              m_14 = ATgetArgument(k_14, 1);
                                              l_12 :
                                              if(match_cons(m_14, sym_TNil_0))
                                                {
                                                  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
                                                  if(c_13 != NULL && c_13 != y_13)
                                                    _fail(y_13);
                                                  else
                                                    c_13 = y_13;
                                                  if(e_13 != NULL && e_13 != z_13)
                                                    _fail(z_13);
                                                  else
                                                    e_13 = z_13;
                                                  if(f_13 != NULL && f_13 != l_14)
                                                    _fail(l_14);
                                                  else
                                                    f_13 = l_14;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = InsLayout_1(t, c_23);
                                                  t_21 = t;
                                                  h_10 :
                                                  if(match_cons(t_21, sym_TCons_2))
                                                    {
                                                      u_21 = ATgetArgument(t_21, 0);
                                                      v_21 = ATgetArgument(t_21, 1);
                                                      i_10 :
                                                      if(match_cons(v_21, sym_TCons_2))
                                                        {
                                                          w_21 = ATgetArgument(v_21, 0);
                                                          x_21 = ATgetArgument(v_21, 1);
                                                          j_10 :
                                                          if(match_cons(x_21, sym_TNil_0))
                                                            {
                                                              if(h_13 != NULL && h_13 != u_21)
                                                                _fail(u_21);
                                                              else
                                                                h_13 = u_21;
                                                              if(j_13 != NULL && j_13 != w_21)
                                                                _fail(w_21);
                                                              else
                                                                j_13 = w_21;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_LBL_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(match_cons(x_13, sym_REF_2))
                                            {
                                              y_13 = ATgetArgument(x_13, 0);
                                              z_13 = ATgetArgument(x_13, 1);
                                              m_12 :
                                              if(match_cons(k_14, sym_TCons_2))
                                                {
                                                  l_14 = ATgetArgument(k_14, 0);
                                                  m_14 = ATgetArgument(k_14, 1);
                                                  n_12 :
                                                  if(match_cons(m_14, sym_TNil_0))
                                                    {
                                                      ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
                                                      if(c_13 != NULL && c_13 != y_13)
                                                        _fail(y_13);
                                                      else
                                                        c_13 = y_13;
                                                      if(e_13 != NULL && e_13 != z_13)
                                                        _fail(z_13);
                                                      else
                                                        e_13 = z_13;
                                                      if(f_13 != NULL && f_13 != l_14)
                                                        _fail(l_14);
                                                      else
                                                        f_13 = l_14;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      t = InsLayout_1(t, c_23);
                                                      y_21 = t;
                                                      l_10 :
                                                      if(match_cons(y_21, sym_TCons_2))
                                                        {
                                                          z_21 = ATgetArgument(y_21, 0);
                                                          a_22 = ATgetArgument(y_21, 1);
                                                          m_10 :
                                                          if(match_cons(a_22, sym_TCons_2))
                                                            {
                                                              b_22 = ATgetArgument(a_22, 0);
                                                              c_22 = ATgetArgument(a_22, 1);
                                                              n_10 :
                                                              if(match_cons(c_22, sym_TNil_0))
                                                                {
                                                                  if(h_13 != NULL && h_13 != z_21)
                                                                    _fail(z_21);
                                                                  else
                                                                    h_13 = z_21;
                                                                  if(j_13 != NULL && j_13 != b_22)
                                                                    _fail(b_22);
                                                                  else
                                                                    j_13 = b_22;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_REF_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            {
                                              if(match_cons(x_13, sym_L_2))
                                                {
                                                  y_13 = ATgetArgument(x_13, 0);
                                                  z_13 = ATgetArgument(x_13, 1);
                                                  o_12 :
                                                  if(match_cons(k_14, sym_TCons_2))
                                                    {
                                                      l_14 = ATgetArgument(k_14, 0);
                                                      m_14 = ATgetArgument(k_14, 1);
                                                      p_12 :
                                                      if(match_cons(m_14, sym_TNil_0))
                                                        {
                                                          ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL;
                                                          if(c_13 != NULL && c_13 != y_13)
                                                            _fail(y_13);
                                                          else
                                                            c_13 = y_13;
                                                          if(e_13 != NULL && e_13 != z_13)
                                                            _fail(z_13);
                                                          else
                                                            e_13 = z_13;
                                                          if(f_13 != NULL && f_13 != l_14)
                                                            _fail(l_14);
                                                          else
                                                            f_13 = l_14;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = InsLayout_1(t, c_23);
                                                          d_22 = t;
                                                          p_10 :
                                                          if(match_cons(d_22, sym_TCons_2))
                                                            {
                                                              e_22 = ATgetArgument(d_22, 0);
                                                              f_22 = ATgetArgument(d_22, 1);
                                                              q_10 :
                                                              if(match_cons(f_22, sym_TCons_2))
                                                                {
                                                                  g_22 = ATgetArgument(f_22, 0);
                                                                  j_22 = ATgetArgument(f_22, 1);
                                                                  r_10 :
                                                                  if(match_cons(j_22, sym_TNil_0))
                                                                    {
                                                                      if(h_13 != NULL && h_13 != e_22)
                                                                        _fail(e_22);
                                                                      else
                                                                        h_13 = e_22;
                                                                      if(j_13 != NULL && j_13 != g_22)
                                                                        _fail(g_22);
                                                                      else
                                                                        j_13 = g_22;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_L_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(x_13, sym_LNAT_2))
                                                    {
                                                      y_13 = ATgetArgument(x_13, 0);
                                                      z_13 = ATgetArgument(x_13, 1);
                                                      q_12 :
                                                      if(match_cons(k_14, sym_TCons_2))
                                                        {
                                                          l_14 = ATgetArgument(k_14, 0);
                                                          m_14 = ATgetArgument(k_14, 1);
                                                          r_12 :
                                                          if(match_cons(m_14, sym_TNil_0))
                                                            {
                                                              ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
                                                              if(c_13 != NULL && c_13 != y_13)
                                                                _fail(y_13);
                                                              else
                                                                c_13 = y_13;
                                                              if(e_13 != NULL && e_13 != z_13)
                                                                _fail(z_13);
                                                              else
                                                                e_13 = z_13;
                                                              if(f_13 != NULL && f_13 != l_14)
                                                                _fail(l_14);
                                                              else
                                                                f_13 = l_14;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                              t = InsLayout_1(t, c_23);
                                                              k_22 = t;
                                                              t_10 :
                                                              if(match_cons(k_22, sym_TCons_2))
                                                                {
                                                                  l_22 = ATgetArgument(k_22, 0);
                                                                  m_22 = ATgetArgument(k_22, 1);
                                                                  u_10 :
                                                                  if(match_cons(m_22, sym_TCons_2))
                                                                    {
                                                                      n_22 = ATgetArgument(m_22, 0);
                                                                      o_22 = ATgetArgument(m_22, 1);
                                                                      v_10 :
                                                                      if(match_cons(o_22, sym_TNil_0))
                                                                        {
                                                                          if(h_13 != NULL && h_13 != l_22)
                                                                            _fail(l_22);
                                                                          else
                                                                            h_13 = l_22;
                                                                          if(j_13 != NULL && j_13 != n_22)
                                                                            _fail(n_22);
                                                                          else
                                                                            j_13 = n_22;
                                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_LNAT_2, not_null(c_13), not_null(h_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
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
          else
            _fail(t);
          PopChoice();
        }
      else
        {
          t = v_14;
          {
            ATerm w_14 = t;
            if(PushChoice()==0)
              {
                ATerm a_1 (ATerm t)
                {
                  t = Cons_2(t, _id, _id);
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  t = TCons_2(t, _id, TNil_0);
                  return(t);
                }
                t = TCons_2(t, a_1, b_1);
                t = InsLayout_1(t, c_23);
                PopChoice();
              }
            else
              t = w_14;
          }
        }
      return(t);
    }
    t = c_23(t);
    p_22 = t;
    u_12 :
    if(match_cons(p_22, sym_TCons_2))
      {
        q_22 = ATgetArgument(p_22, 0);
        r_22 = ATgetArgument(p_22, 1);
        v_12 :
        if(match_cons(r_22, sym_TCons_2))
          {
            s_22 = ATgetArgument(r_22, 0);
            v_22 = ATgetArgument(r_22, 1);
            w_12 :
            if(match_cons(s_22, sym_Cons_2))
              {
                t_22 = ATgetArgument(s_22, 0);
                u_22 = ATgetArgument(s_22, 1);
                x_12 :
                if(match_cons(v_22, sym_TNil_0))
                  {
                    ATerm z_22 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_22), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_Nil_0))));
                    {
                      ATerm c_1 (ATerm t)
                      {
                        ATerm x_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm y_14 = t;
                            if(PushChoice()==0)
                              {
                                t = layout_1(t, _id);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = y_14;
                            PopChoice();
                          }
                        else
                          {
                            t = x_14;
                            t = layout_1(t, _id);
                            t = is_significant_layout_0(t);
                            t = layout2box_0(t);
                          }
                        return(t);
                      }
                      t = filter_1(t, c_1);
                      t = flat_list_0(t);
                      z_22 = t;
                      t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(z_22));
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym_layout_1))
    {
      k_24 = ATgetArgument(j_24, 0);
      {
        ATerm m_24 = NULL;
        t = not_null(k_24);
        t = n_60(t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, not_null(m_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm t_24 (ATerm t)
  {
    ATerm z_14 = t;
    if(PushChoice()==0)
      {
        ATerm r_24 = NULL;
        t = m_61(t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_24), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = z_14;
        {
          ATerm d_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, d_1, conc_0, t_24);
        }
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  ATerm a_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_15;
      {
        ATerm b_15 = t;
        if(PushChoice()==0)
          {
            ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
            ATerm h_25 (ATerm t)
            {
              if(z_24 != NULL && z_24 != c_25)
                _fail(c_25);
              else
                z_24 = c_25;
              if(a_25 != NULL && a_25 != d_25)
                _fail(d_25);
              else
                a_25 = d_25;
              t = not_null(z_24);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              t = flat_list_0(t);
              return(t);
            }
            b_25 = t;
            x_24 :
            if(match_cons(b_25, sym_Cons_2))
              {
                c_25 = ATgetArgument(b_25, 0);
                d_25 = ATgetArgument(b_25, 1);
                y_24 :
                if(match_cons(c_25, sym_Nil_0))
                  {
                    ATerm c_15 = t;
                    if(PushChoice()==0)
                      {
                        if(a_25 != NULL && a_25 != d_25)
                          _fail(d_25);
                        else
                          a_25 = d_25;
                        {
                          ATerm e_1 (ATerm t)
                          {
                            t = not_null(a_25);
                            t = flat_list_0(t);
                            return(t);
                          }
                          t = Cons_2(t, Nil_0, e_1);
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = c_15;
                        t = h_25(t);
                      }
                  }
                else
                  t = h_25(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = b_15;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_Arg_1))
    {
      r_25 = ATgetArgument(q_25, 0);
      {
        ATerm u_25 = NULL;
        ATerm v_25 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm d_26 = NULL;
          t = t_0(t);
          v_25 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_25), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = index_0(t);
          d_26 = t;
          if(u_25 != NULL && u_25 != d_26)
            _fail(d_26);
          else
            u_25 = d_26;
        }
        t = not_null(u_25);
      }
    }
  else
    {
      if(match_cons(q_25, sym_Arg2_2))
        {
          r_25 = ATgetArgument(q_25, 0);
          s_25 = ATgetArgument(q_25, 1);
          {
            ATerm g_26 = NULL,r_26 = NULL;
            ATerm z_26 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm b_27 = NULL;
              t = t_0(t);
              z_26 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm c_27 = NULL;
                t = index_0(t);
                b_27 = t;
                if(g_26 != NULL && g_26 != b_27)
                  _fail(b_27);
                else
                  g_26 = b_27;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = index_0(t);
                c_27 = t;
                if(r_26 != NULL && r_26 != c_27)
                  _fail(c_27);
                else
                  r_26 = c_27;
              }
            }
            t = not_null(r_26);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm k_27 (ATerm t)
  {
    t = _all(t, k_27);
    t = p_77(t);
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm x_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  x_27 = t;
  p_27 :
  if(match_cons(x_27, sym_TCons_2))
    {
      z_27 = ATgetArgument(x_27, 0);
      a_28 = ATgetArgument(x_27, 1);
      q_27 :
      if(match_cons(a_28, sym_TCons_2))
        {
          b_28 = ATgetArgument(a_28, 0);
          c_28 = ATgetArgument(a_28, 1);
          r_27 :
          if(match_cons(c_28, sym_TNil_0))
            {
              ATerm f_28 = NULL;
              ATerm g_28 = NULL;
              t = not_null(z_27);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm d_15 = t;
                    if(PushChoice()==0)
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = not_null(b_28);
                          return(t);
                        }
                        t = Instantiate_1(t, h_1);
                        PopChoice();
                      }
                    else
                      {
                        t = d_15;
                        t = flat_list_0(t);
                      }
                    return(t);
                  }
                  t = try_1(t, g_1);
                  return(t);
                }
                t = bottomup_1(t, f_1);
                g_28 = t;
                if(f_28 != NULL && f_28 != g_28)
                  _fail(g_28);
                else
                  f_28 = g_28;
              }
              t = not_null(f_28);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm S_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  n_28 :
  if(match_cons(q_28, sym_S_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm e_15 = t;
        if(PushChoice()==0)
          {
            ATerm t_28 = NULL;
            t = not_null(r_28);
            t = s_0(t);
            t_28 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(t_28));
            PopChoice();
          }
        else
          {
            t = e_15;
            {
              ATerm y_28 = NULL;
              t = not_null(r_28);
              t = s_0(t);
              y_28 = t;
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm l_29 = NULL,q_29 = NULL,r_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Arg2_2))
    {
      q_29 = ATgetArgument(l_29, 0);
      r_29 = ATgetArgument(l_29, 1);
      {
        ATerm f_15 = t;
        if(PushChoice()==0)
          {
            ATerm v_29 = NULL;
            t = not_null(q_29);
            {
              ATerm z_29 = NULL;
              t = q_0(t);
              v_29 = t;
              t = not_null(r_29);
              t = r_0(t);
              z_29 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(v_29), not_null(z_29));
            }
            PopChoice();
          }
        else
          {
            t = f_15;
            {
              ATerm d_30 = NULL;
              t = not_null(q_29);
              {
                ATerm f_30 = NULL;
                t = q_0(t);
                d_30 = t;
                t = not_null(r_29);
                t = r_0(t);
                f_30 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(d_30), not_null(f_30));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_literals_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  y_31 = t;
  v_31 :
  if(match_cons(y_31, sym_TCons_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      w_31 :
      if(match_cons(a_32, sym_TCons_2))
        {
          b_32 = ATgetArgument(a_32, 0);
          c_32 = ATgetArgument(a_32, 1);
          x_31 :
          if(match_cons(c_32, sym_TNil_0))
            {
              ATerm f_32 = NULL,g_32 = NULL;
              ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
              ATerm i_1 (ATerm t)
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm g_15 = t;
                  if(PushChoice()==0)
                    {
                      t = Arg_1(t, _id);
                      PopChoice();
                    }
                  else
                    {
                      t = g_15;
                      {
                        ATerm h_15 = t;
                        if(PushChoice()==0)
                          {
                            t = Arg2_2(t, _id, _id);
                            PopChoice();
                          }
                        else
                          {
                            t = h_15;
                            t = S_1(t, _id);
                          }
                      }
                    }
                  return(t);
                }
                t = collect_p__1(t, k_1);
                return(t);
              }
              ATerm j_1 (ATerm t)
              {
                t = TCons_2(t, _id, TNil_0);
                return(t);
              }
              t = TCons_2(t, i_1, j_1);
              {
                ATerm u_33 (ATerm t)
                {
                  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
                  ATerm i_15 = t;
                  if(PushChoice()==0)
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = TCons_2(t, Nil_0, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, l_1);
                      PopChoice();
                    }
                  else
                    {
                      t = i_15;
                      {
                        ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
                        ATerm x_33 (ATerm t)
                        {
                          ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
                          if(n_32 != NULL && n_32 != s_32)
                            _fail(s_32);
                          else
                            n_32 = s_32;
                          if(i_32 != NULL && i_32 != t_32)
                            _fail(t_32);
                          else
                            i_32 = t_32;
                          if(m_32 != NULL && m_32 != w_32)
                            _fail(w_32);
                          else
                            m_32 = w_32;
                          if(k_32 != NULL && k_32 != x_32)
                            _fail(x_32);
                          else
                            k_32 = x_32;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = u_33(t);
                          j_33 = t;
                          i_31 :
                          if(match_cons(j_33, sym_TCons_2))
                            {
                              k_33 = ATgetArgument(j_33, 0);
                              l_33 = ATgetArgument(j_33, 1);
                              j_31 :
                              if(match_cons(l_33, sym_TCons_2))
                                {
                                  m_33 = ATgetArgument(l_33, 0);
                                  n_33 = ATgetArgument(l_33, 1);
                                  k_31 :
                                  if(match_cons(n_33, sym_TNil_0))
                                    {
                                      if(j_32 != NULL && j_32 != k_33)
                                        _fail(k_33);
                                      else
                                        j_32 = k_33;
                                      if(l_32 != NULL && l_32 != m_33)
                                        _fail(m_33);
                                      else
                                        l_32 = m_33;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_32), not_null(j_32)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        q_32 = t;
                        l_31 :
                        if(match_cons(q_32, sym_TCons_2))
                          {
                            r_32 = ATgetArgument(q_32, 0);
                            u_32 = ATgetArgument(q_32, 1);
                            m_31 :
                            if(match_cons(r_32, sym_Cons_2))
                              {
                                s_32 = ATgetArgument(r_32, 0);
                                t_32 = ATgetArgument(r_32, 1);
                                n_31 :
                                if(match_cons(u_32, sym_TCons_2))
                                  {
                                    v_32 = ATgetArgument(u_32, 0);
                                    y_32 = ATgetArgument(u_32, 1);
                                    o_31 :
                                    if(match_cons(v_32, sym_Cons_2))
                                      {
                                        w_32 = ATgetArgument(v_32, 0);
                                        x_32 = ATgetArgument(v_32, 1);
                                        p_31 :
                                        if(match_cons(y_32, sym_TNil_0))
                                          {
                                            q_31 :
                                            if(match_cons(s_32, sym_Arg_1))
                                              {
                                                o_32 = ATgetArgument(s_32, 0);
                                                {
                                                  ATerm j_15 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
                                                      if(h_32 != NULL && h_32 != o_32)
                                                        _fail(o_32);
                                                      else
                                                        h_32 = o_32;
                                                      if(i_32 != NULL && i_32 != t_32)
                                                        _fail(t_32);
                                                      else
                                                        i_32 = t_32;
                                                      if(m_32 != NULL && m_32 != w_32)
                                                        _fail(w_32);
                                                      else
                                                        m_32 = w_32;
                                                      if(k_32 != NULL && k_32 != x_32)
                                                        _fail(x_32);
                                                      else
                                                        k_32 = x_32;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      t = u_33(t);
                                                      z_32 = t;
                                                      u_30 :
                                                      if(match_cons(z_32, sym_TCons_2))
                                                        {
                                                          a_33 = ATgetArgument(z_32, 0);
                                                          b_33 = ATgetArgument(z_32, 1);
                                                          y_30 :
                                                          if(match_cons(b_33, sym_TCons_2))
                                                            {
                                                              c_33 = ATgetArgument(b_33, 0);
                                                              d_33 = ATgetArgument(b_33, 1);
                                                              z_30 :
                                                              if(match_cons(d_33, sym_TNil_0))
                                                                {
                                                                  if(j_32 != NULL && j_32 != a_33)
                                                                    _fail(a_33);
                                                                  else
                                                                    j_32 = a_33;
                                                                  if(l_32 != NULL && l_32 != c_33)
                                                                    _fail(c_33);
                                                                  else
                                                                    l_32 = c_33;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Arg_1, not_null(h_32)), not_null(j_32)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_32), not_null(l_32)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = j_15;
                                                      t = x_33(t);
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(s_32, sym_Arg2_2))
                                                  {
                                                    o_32 = ATgetArgument(s_32, 0);
                                                    p_32 = ATgetArgument(s_32, 1);
                                                    {
                                                      ATerm k_15 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
                                                          if(h_32 != NULL && h_32 != o_32)
                                                            _fail(o_32);
                                                          else
                                                            h_32 = o_32;
                                                          if(f_32 != NULL && f_32 != p_32)
                                                            _fail(p_32);
                                                          else
                                                            f_32 = p_32;
                                                          if(i_32 != NULL && i_32 != t_32)
                                                            _fail(t_32);
                                                          else
                                                            i_32 = t_32;
                                                          if(m_32 != NULL && m_32 != w_32)
                                                            _fail(w_32);
                                                          else
                                                            m_32 = w_32;
                                                          if(k_32 != NULL && k_32 != x_32)
                                                            _fail(x_32);
                                                          else
                                                            k_32 = x_32;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = u_33(t);
                                                          e_33 = t;
                                                          e_31 :
                                                          if(match_cons(e_33, sym_TCons_2))
                                                            {
                                                              f_33 = ATgetArgument(e_33, 0);
                                                              g_33 = ATgetArgument(e_33, 1);
                                                              f_31 :
                                                              if(match_cons(g_33, sym_TCons_2))
                                                                {
                                                                  h_33 = ATgetArgument(g_33, 0);
                                                                  i_33 = ATgetArgument(g_33, 1);
                                                                  g_31 :
                                                                  if(match_cons(i_33, sym_TNil_0))
                                                                    {
                                                                      if(j_32 != NULL && j_32 != f_33)
                                                                        _fail(f_33);
                                                                      else
                                                                        j_32 = f_33;
                                                                      if(l_32 != NULL && l_32 != h_33)
                                                                        _fail(h_33);
                                                                      else
                                                                        l_32 = h_33;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Arg2_2, not_null(h_32), not_null(f_32)), not_null(j_32)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_32), not_null(l_32)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          t = x_33(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  t = x_33(t);
                                              }
                                          }
                                        else
                                          _fail(t);
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    }
                  return(t);
                }
                t = u_33(t);
                o_33 = t;
                s_31 :
                if(match_cons(o_33, sym_TCons_2))
                  {
                    p_33 = ATgetArgument(o_33, 0);
                    q_33 = ATgetArgument(o_33, 1);
                    t_31 :
                    if(match_cons(q_33, sym_TCons_2))
                      {
                        r_33 = ATgetArgument(q_33, 0);
                        s_33 = ATgetArgument(q_33, 1);
                        u_31 :
                        if(match_cons(s_33, sym_TNil_0))
                          {
                            if(g_32 != NULL && g_32 != r_33)
                              _fail(r_33);
                            else
                              g_32 = r_33;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_32), (ATerm) ATmakeAppl(sym_TNil_0)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm make_path_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  h_34 = t;
  e_34 :
  if(match_cons(h_34, sym_TCons_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      o_34 = ATgetArgument(h_34, 1);
      f_34 :
      if(match_cons(o_34, sym_TCons_2))
        {
          p_34 = ATgetArgument(o_34, 0);
          q_34 = ATgetArgument(o_34, 1);
          g_34 :
          if(match_cons(q_34, sym_TNil_0))
            {
              ATerm t_34 = NULL;
              ATerm u_34 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              u_34 = t;
              if(t_34 != NULL && t_34 != u_34)
                _fail(u_34);
              else
                t_34 = u_34;
              t = not_null(t_34);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Ind1_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  e_35 = t;
  z_34 :
  if(match_cons(e_35, sym_TCons_2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      a_35 :
      if(match_int(f_35, 1))
        {
          b_35 :
          if(match_cons(g_35, sym_TCons_2))
            {
              h_35 = ATgetArgument(g_35, 0);
              k_35 = ATgetArgument(g_35, 1);
              c_35 :
              if(match_cons(h_35, sym_Cons_2))
                {
                  i_35 = ATgetArgument(h_35, 0);
                  j_35 = ATgetArgument(h_35, 1);
                  d_35 :
                  if(match_cons(k_35, sym_TNil_0))
                    t = not_null(i_35);
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  s_35 = t;
  p_35 :
  if(match_cons(s_35, sym_TCons_2))
    {
      t_35 = ATgetArgument(s_35, 0);
      u_35 = ATgetArgument(s_35, 1);
      q_35 :
      if(match_cons(u_35, sym_TCons_2))
        {
          v_35 = ATgetArgument(u_35, 0);
          w_35 = ATgetArgument(u_35, 1);
          r_35 :
          if(match_cons(w_35, sym_TNil_0))
            {
              ATerm l_15 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(t_35), not_null(v_35));
                  PopChoice();
                }
              else
                {
                  t = l_15;
                  t = SSL_subtr(not_null(t_35), not_null(v_35));
                }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm g_36 = NULL;
  ATerm m_15 = t;
  if(PushChoice()==0)
    {
      ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
      h_36 = t;
      b_36 :
      if(match_cons(h_36, sym_TCons_2))
        {
          i_36 = ATgetArgument(h_36, 0);
          j_36 = ATgetArgument(h_36, 1);
          c_36 :
          if(match_cons(j_36, sym_TCons_2))
            {
              k_36 = ATgetArgument(j_36, 0);
              l_36 = ATgetArgument(j_36, 1);
              f_36 :
              if(match_cons(l_36, sym_TNil_0))
                {
                  if(g_36 != NULL && g_36 != i_36)
                    _fail(i_36);
                  else
                    g_36 = i_36;
                  if(g_36 != NULL && g_36 != k_36)
                    _fail(k_36);
                  else
                    g_36 = k_36;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = m_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  t_36 = t;
  p_36 :
  if(match_cons(t_36, sym_TCons_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      q_36 :
      if(match_cons(v_36, sym_TCons_2))
        {
          w_36 = ATgetArgument(v_36, 0);
          z_36 = ATgetArgument(v_36, 1);
          r_36 :
          if(match_cons(w_36, sym_Cons_2))
            {
              x_36 = ATgetArgument(w_36, 0);
              y_36 = ATgetArgument(w_36, 1);
              s_36 :
              if(match_cons(z_36, sym_TNil_0))
                {
                  ATerm d_37 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = geq_0(t);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = subt_0(t);
                  d_37 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_36), (ATerm) ATmakeAppl(sym_TNil_0)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm b_38 (ATerm t)
  {
    ATerm n_37 = NULL,q_37 = NULL,r_37 = NULL;
    ATerm n_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_15;
        {
          ATerm o_15 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, Nil_0);
              PopChoice();
            }
          else
            {
              t = o_15;
              {
                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
                s_37 = t;
                l_37 :
                if(match_cons(s_37, sym_Cons_2))
                  {
                    t_37 = ATgetArgument(s_37, 0);
                    u_37 = ATgetArgument(s_37, 1);
                    m_37 :
                    if(match_cons(u_37, sym_Cons_2))
                      {
                        v_37 = ATgetArgument(u_37, 0);
                        w_37 = ATgetArgument(u_37, 1);
                        if(n_37 != NULL && n_37 != t_37)
                          _fail(t_37);
                        else
                          n_37 = t_37;
                        if(q_37 != NULL && q_37 != v_37)
                          _fail(v_37);
                        else
                          q_37 = v_37;
                        if(r_37 != NULL && r_37 != w_37)
                          _fail(w_37);
                        else
                          r_37 = w_37;
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm z_37 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = j_61(t);
                            z_37 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_37), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_37), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = instantiate_0(t);
                            return(t);
                          }
                          ATerm n_1 (ATerm t)
                          {
                            t = not_null(r_37);
                            t = b_38(t);
                            return(t);
                          }
                          t = Cons_2(t, m_1, n_1);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = b_38(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  i_38 = t;
  f_38 :
  if(match_cons(i_38, sym_TCons_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      g_38 :
      if(match_cons(k_38, sym_TCons_2))
        {
          l_38 = ATgetArgument(k_38, 0);
          m_38 = ATgetArgument(k_38, 1);
          h_38 :
          if(match_cons(m_38, sym_TNil_0))
            t = SSL_mod(not_null(j_38), not_null(l_38));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm s_38 = NULL;
  ATerm u_38 = NULL;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = mod_0(t);
  u_38 = t;
  r_38 :
  if(!(match_int(u_38, 0)))
    _fail(t);
  return(t);
}
ATerm BuildSepList_4 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  h_39 = t;
  e_39 :
  if(match_cons(h_39, sym_TCons_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      f_39 :
      if(match_cons(j_39, sym_TCons_2))
        {
          k_39 = ATgetArgument(j_39, 0);
          l_39 = ATgetArgument(j_39, 1);
          g_39 :
          if(match_cons(l_39, sym_TNil_0))
            {
              ATerm o_39 = NULL;
              ATerm i_40 = NULL;
              ATerm p_15 = t;
              if(PushChoice()==0)
                {
                  ATerm p_39 = NULL;
                  t = not_null(i_39);
                  t = even_0(t);
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm r_39 = NULL;
                    t = x_81(t);
                    p_39 = t;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = y_81(t);
                    r_39 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)))));
                    t = symbol2abox_0(t);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        ATerm t_39 = NULL;
                        t_39 = t;
                        {
                          ATerm q_15 = t;
                          if(PushChoice()==0)
                            {
                              t = is_list_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = q_15;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_39), (ATerm) ATmakeAppl(sym_Nil_0));
                        }
                        return(t);
                      }
                      t = try_1(t, o_1);
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = p_15;
                  {
                    ATerm c_40 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    {
                      ATerm e_40 = NULL;
                      t = w_81(t);
                      c_40 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = y_81(t);
                      e_40 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_40), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                      t = symbol2abox_0(t);
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm g_40 = NULL;
                          g_40 = t;
                          {
                            ATerm r_15 = t;
                            if(PushChoice()==0)
                              {
                                t = is_list_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = r_15;
                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_Nil_0));
                          }
                          return(t);
                        }
                        t = try_1(t, p_1);
                      }
                    }
                  }
                }
              i_40 = t;
              if(o_39 != NULL && o_39 != i_40)
                _fail(i_40);
              else
                o_39 = i_40;
              t = not_null(o_39);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  a_41 = t;
  s_40 :
  if(match_cons(a_41, sym_TCons_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      t_40 :
      if(match_cons(c_41, sym_TCons_2))
        {
          d_41 = ATgetArgument(c_41, 0);
          e_41 = ATgetArgument(c_41, 1);
          z_40 :
          if(match_cons(e_41, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_41), not_null(d_41));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,y_41 = NULL;
  o_41 = t;
  k_41 :
  if(match_cons(o_41, sym_TCons_2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      l_41 :
      if(match_cons(q_41, sym_TCons_2))
        {
          r_41 = ATgetArgument(q_41, 0);
          y_41 = ATgetArgument(q_41, 1);
          m_41 :
          if(match_cons(r_41, sym_Cons_2))
            {
              s_41 = ATgetArgument(r_41, 0);
              t_41 = ATgetArgument(r_41, 1);
              n_41 :
              if(match_cons(y_41, sym_TNil_0))
                {
                  ATerm c_42 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  c_42 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_41), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_41), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip1_0 (ATerm t)
{
  ATerm q_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  q_42 = t;
  m_42 :
  if(match_cons(q_42, sym_TCons_2))
    {
      x_42 = ATgetArgument(q_42, 0);
      y_42 = ATgetArgument(q_42, 1);
      n_42 :
      if(match_cons(y_42, sym_TCons_2))
        {
          z_42 = ATgetArgument(y_42, 0);
          a_43 = ATgetArgument(y_42, 1);
          o_42 :
          if(match_cons(z_42, sym_Nil_0))
            {
              p_42 :
              if(match_cons(a_43, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Nil_0);
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm d_43 (ATerm t)
  {
    ATerm s_15 = t;
    if(PushChoice()==0)
      {
        t = h_73(t);
        PopChoice();
      }
    else
      {
        t = s_15;
        t = i_73(t);
        {
          ATerm q_1 (ATerm t)
          {
            t = TCons_2(t, d_43, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_73, q_1);
          t = j_73(t);
        }
      }
    return(t);
  }
  t = d_43(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_43), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm t_73 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, t_73);
  return(t);
}
ATerm build_sep_list_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  w_49 = t;
  r_49 :
  if(match_cons(w_49, sym_TCons_2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      s_49 :
      if(match_cons(y_49, sym_TCons_2))
        {
          z_49 = ATgetArgument(y_49, 0);
          a_50 = ATgetArgument(y_49, 1);
          t_49 :
          if(match_cons(a_50, sym_TCons_2))
            {
              b_50 = ATgetArgument(a_50, 0);
              c_50 = ATgetArgument(a_50, 1);
              u_49 :
              if(match_cons(c_50, sym_TCons_2))
                {
                  d_50 = ATgetArgument(c_50, 0);
                  e_50 = ATgetArgument(c_50, 1);
                  v_49 :
                  if(match_cons(e_50, sym_TNil_0))
                    {
                      ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
                      ATerm p_50 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_50), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm u_50 = NULL;
                        t = make_path_0(t);
                        p_50 = t;
                        if(l_50 != NULL && l_50 != p_50)
                          _fail(p_50);
                        else
                          l_50 = p_50;
                        t = not_null(x_49);
                        {
                          ATerm t_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm r_1 (ATerm t)
                              {
                                ATerm q_50 = NULL;
                                q_50 = t;
                                if(j_50 != NULL && j_50 != q_50)
                                  _fail(q_50);
                                else
                                  j_50 = q_50;
                                return(t);
                              }
                              ATerm s_1 (ATerm t)
                              {
                                ATerm r_50 = NULL;
                                r_50 = t;
                                if(k_50 != NULL && k_50 != r_50)
                                  _fail(r_50);
                                else
                                  k_50 = r_50;
                                return(t);
                              }
                              t = iter_sep_2(t, r_1, s_1);
                              PopChoice();
                            }
                          else
                            {
                              t = t_15;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  ATerm s_50 = NULL;
                                  s_50 = t;
                                  if(j_50 != NULL && j_50 != s_50)
                                    _fail(s_50);
                                  else
                                    j_50 = s_50;
                                  return(t);
                                }
                                ATerm u_1 (ATerm t)
                                {
                                  ATerm t_50 = NULL;
                                  t_50 = t;
                                  if(k_50 != NULL && k_50 != t_50)
                                    _fail(t_50);
                                  else
                                    k_50 = t_50;
                                  return(t);
                                }
                                t = iter_star_sep_2(t, t_1, u_1);
                              }
                            }
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_50), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm v_50 = NULL;
                            t = get_pp_entry_0(t);
                            u_50 = t;
                            if(m_50 != NULL && m_50 != u_50)
                              _fail(u_50);
                            else
                              m_50 = u_50;
                            t = not_null(z_49);
                            {
                              ATerm w_50 = NULL;
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = not_null(j_50);
                                  return(t);
                                }
                                ATerm x_1 (ATerm t)
                                {
                                  t = not_null(k_50);
                                  return(t);
                                }
                                ATerm y_1 (ATerm t)
                                {
                                  t = not_null(l_50);
                                  return(t);
                                }
                                ATerm z_1 (ATerm t)
                                {
                                  t = not_null(d_50);
                                  return(t);
                                }
                                t = BuildSepList_4(t, w_1, x_1, y_1, z_1);
                                return(t);
                              }
                              t = nzip_1(t, v_1);
                              v_50 = t;
                              if(n_50 != NULL && n_50 != v_50)
                                _fail(v_50);
                              else
                                n_50 = v_50;
                              t = not_null(n_50);
                              {
                                ATerm a_2 (ATerm t)
                                {
                                  t = not_null(m_50);
                                  return(t);
                                }
                                t = instantiate_sep_list_1(t, a_2);
                                w_50 = t;
                                if(o_50 != NULL && o_50 != w_50)
                                  _fail(w_50);
                                else
                                  o_50 = w_50;
                              }
                            }
                          }
                        }
                      }
                      t = not_null(o_50);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm build_list_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  u_51 = t;
  p_51 :
  if(match_cons(u_51, sym_TCons_2))
    {
      v_51 = ATgetArgument(u_51, 0);
      w_51 = ATgetArgument(u_51, 1);
      q_51 :
      if(match_cons(w_51, sym_TCons_2))
        {
          x_51 = ATgetArgument(w_51, 0);
          y_51 = ATgetArgument(w_51, 1);
          r_51 :
          if(match_cons(y_51, sym_TCons_2))
            {
              z_51 = ATgetArgument(y_51, 0);
              a_52 = ATgetArgument(y_51, 1);
              s_51 :
              if(match_cons(a_52, sym_TCons_2))
                {
                  b_52 = ATgetArgument(a_52, 0);
                  c_52 = ATgetArgument(a_52, 1);
                  t_51 :
                  if(match_cons(c_52, sym_TNil_0))
                    {
                      ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
                      ATerm m_52 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm p_52 = NULL;
                        t = make_path_0(t);
                        m_52 = t;
                        if(i_52 != NULL && i_52 != m_52)
                          _fail(m_52);
                        else
                          i_52 = m_52;
                        t = not_null(v_51);
                        {
                          ATerm u_15 = t;
                          if(PushChoice()==0)
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm n_52 = NULL;
                                n_52 = t;
                                if(h_52 != NULL && h_52 != n_52)
                                  _fail(n_52);
                                else
                                  h_52 = n_52;
                                return(t);
                              }
                              t = iter_1(t, b_2);
                              PopChoice();
                            }
                          else
                            {
                              t = u_15;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  ATerm o_52 = NULL;
                                  o_52 = t;
                                  if(h_52 != NULL && h_52 != o_52)
                                    _fail(o_52);
                                  else
                                    h_52 = o_52;
                                  return(t);
                                }
                                t = iter_star_1(t, c_2);
                              }
                            }
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm v_52 = NULL;
                            t = get_pp_entry_0(t);
                            p_52 = t;
                            if(j_52 != NULL && j_52 != p_52)
                              _fail(p_52);
                            else
                              j_52 = p_52;
                            t = not_null(x_51);
                            {
                              ATerm w_52 = NULL;
                              ATerm d_2 (ATerm t)
                              {
                                ATerm q_52 = NULL;
                                ATerm s_52 = NULL;
                                q_52 = t;
                                {
                                  ATerm t_52 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_52), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                  t = symbol2abox_0(t);
                                  t_52 = t;
                                  if(s_52 != NULL && s_52 != t_52)
                                    _fail(t_52);
                                  else
                                    s_52 = t_52;
                                  t = not_null(s_52);
                                }
                                return(t);
                              }
                              t = map_1(t, d_2);
                              v_52 = t;
                              if(k_52 != NULL && k_52 != v_52)
                                _fail(v_52);
                              else
                                k_52 = v_52;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_52), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_52), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = instantiate_0(t);
                              w_52 = t;
                              if(l_52 != NULL && l_52 != w_52)
                                _fail(w_52);
                              else
                                l_52 = w_52;
                            }
                          }
                        }
                      }
                      t = not_null(l_52);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_53 = NULL;
  h_53 = t;
  t = SSL_is_string(not_null(h_53));
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  w_57 = t;
  w_55 :
  if(match_cons(w_57, sym_TCons_2))
    {
      x_57 = ATgetArgument(w_57, 0);
      z_57 = ATgetArgument(w_57, 1);
      x_55 :
      if(match_cons(x_57, sym_lit_1))
        {
          y_57 = ATgetArgument(x_57, 0);
          y_55 :
          if(match_cons(z_57, sym_TCons_2))
            {
              a_58 = ATgetArgument(z_57, 0);
              d_58 = ATgetArgument(z_57, 1);
              z_55 :
              if(match_cons(d_58, sym_TCons_2))
                {
                  e_58 = ATgetArgument(d_58, 0);
                  f_58 = ATgetArgument(d_58, 1);
                  a_56 :
                  if(match_cons(f_58, sym_TCons_2))
                    {
                      g_58 = ATgetArgument(f_58, 0);
                      h_58 = ATgetArgument(f_58, 1);
                      b_56 :
                      if(match_cons(h_58, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_57));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(x_57, sym_sort_1))
            {
              y_57 = ATgetArgument(x_57, 0);
              c_56 :
              if(match_cons(z_57, sym_TCons_2))
                {
                  a_58 = ATgetArgument(z_57, 0);
                  d_58 = ATgetArgument(z_57, 1);
                  d_56 :
                  if(match_cons(d_58, sym_TCons_2))
                    {
                      e_58 = ATgetArgument(d_58, 0);
                      f_58 = ATgetArgument(d_58, 1);
                      e_56 :
                      if(match_cons(f_58, sym_TCons_2))
                        {
                          g_58 = ATgetArgument(f_58, 0);
                          h_58 = ATgetArgument(f_58, 1);
                          f_56 :
                          if(match_cons(h_58, sym_TNil_0))
                            {
                              ATerm v_15 = t;
                              if(PushChoice()==0)
                                {
                                  t = not_null(a_58);
                                  t = is_string_0(t);
                                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_58));
                                  PopChoice();
                                }
                              else
                                {
                                  t = v_15;
                                  {
                                    ATerm z_58 = NULL;
                                    ATerm a_59 = NULL;
                                    t = not_null(a_58);
                                    {
                                      ATerm w_15 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = is_string_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = w_15;
                                      t = not_null(a_58);
                                      t = appl2abox_0(t);
                                      a_59 = t;
                                      if(z_58 != NULL && z_58 != a_59)
                                        _fail(a_59);
                                      else
                                        z_58 = a_59;
                                    }
                                    t = not_null(z_58);
                                  }
                                }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(x_57, sym_char_class_1))
                {
                  y_57 = ATgetArgument(x_57, 0);
                  g_56 :
                  if(match_cons(z_57, sym_TCons_2))
                    {
                      a_58 = ATgetArgument(z_57, 0);
                      d_58 = ATgetArgument(z_57, 1);
                      h_56 :
                      if(match_cons(d_58, sym_TCons_2))
                        {
                          e_58 = ATgetArgument(d_58, 0);
                          f_58 = ATgetArgument(d_58, 1);
                          i_56 :
                          if(match_cons(f_58, sym_TCons_2))
                            {
                              g_58 = ATgetArgument(f_58, 0);
                              h_58 = ATgetArgument(f_58, 1);
                              j_56 :
                              if(match_cons(h_58, sym_TNil_0))
                                {
                                  ATerm t_58 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_Nil_0));
                                  t = implode_string_0(t);
                                  t_58 = t;
                                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(t_58));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_57, sym_opt_1))
                    {
                      y_57 = ATgetArgument(x_57, 0);
                      k_56 :
                      if(match_cons(z_57, sym_TCons_2))
                        {
                          a_58 = ATgetArgument(z_57, 0);
                          d_58 = ATgetArgument(z_57, 1);
                          l_56 :
                          if(match_cons(a_58, sym_appl_2))
                            {
                              b_58 = ATgetArgument(a_58, 0);
                              c_58 = ATgetArgument(a_58, 1);
                              m_56 :
                              if(match_cons(c_58, sym_Nil_0))
                                {
                                  n_56 :
                                  if(match_cons(d_58, sym_TCons_2))
                                    {
                                      e_58 = ATgetArgument(d_58, 0);
                                      f_58 = ATgetArgument(d_58, 1);
                                      o_56 :
                                      if(match_cons(f_58, sym_TCons_2))
                                        {
                                          g_58 = ATgetArgument(f_58, 0);
                                          h_58 = ATgetArgument(f_58, 1);
                                          p_56 :
                                          if(match_cons(h_58, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Nil_0);
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(c_58, sym_Cons_2))
                                    {
                                      t_57 = ATgetArgument(c_58, 0);
                                      u_57 = ATgetArgument(c_58, 1);
                                      q_56 :
                                      if(match_cons(u_57, sym_Nil_0))
                                        {
                                          r_56 :
                                          if(match_cons(d_58, sym_TCons_2))
                                            {
                                              e_58 = ATgetArgument(d_58, 0);
                                              f_58 = ATgetArgument(d_58, 1);
                                              s_56 :
                                              if(match_cons(f_58, sym_TCons_2))
                                                {
                                                  g_58 = ATgetArgument(f_58, 0);
                                                  h_58 = ATgetArgument(f_58, 1);
                                                  t_56 :
                                                  if(match_cons(h_58, sym_TNil_0))
                                                    {
                                                      ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
                                                      ATerm n_59 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      {
                                                        ATerm o_59 = NULL;
                                                        t = make_path_0(t);
                                                        n_59 = t;
                                                        if(j_59 != NULL && j_59 != n_59)
                                                          _fail(n_59);
                                                        else
                                                          j_59 = n_59;
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_opt_1, not_null(y_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                        {
                                                          ATerm p_59 = NULL;
                                                          t = get_pp_entry_0(t);
                                                          o_59 = t;
                                                          if(k_59 != NULL && k_59 != o_59)
                                                            _fail(o_59);
                                                          else
                                                            k_59 = o_59;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                          {
                                                            ATerm q_59 = NULL;
                                                            t = symbol2abox_0(t);
                                                            p_59 = t;
                                                            if(l_59 != NULL && l_59 != p_59)
                                                              _fail(p_59);
                                                            else
                                                              l_59 = p_59;
                                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_59), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                            t = filter_literals_0(t);
                                                            t = instantiate_0(t);
                                                            q_59 = t;
                                                            if(m_59 != NULL && m_59 != q_59)
                                                              _fail(q_59);
                                                            else
                                                              m_59 = q_59;
                                                          }
                                                        }
                                                      }
                                                      t = not_null(m_59);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(x_57, sym_iter_1))
                        {
                          y_57 = ATgetArgument(x_57, 0);
                          u_56 :
                          if(match_cons(z_57, sym_TCons_2))
                            {
                              a_58 = ATgetArgument(z_57, 0);
                              d_58 = ATgetArgument(z_57, 1);
                              v_56 :
                              if(match_cons(d_58, sym_TCons_2))
                                {
                                  e_58 = ATgetArgument(d_58, 0);
                                  f_58 = ATgetArgument(d_58, 1);
                                  w_56 :
                                  if(match_cons(f_58, sym_TCons_2))
                                    {
                                      g_58 = ATgetArgument(f_58, 0);
                                      h_58 = ATgetArgument(f_58, 1);
                                      x_56 :
                                      if(match_cons(h_58, sym_TNil_0))
                                        {
                                          ATerm v_59 = NULL;
                                          ATerm w_59 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_1, not_null(y_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                          t = build_list_0(t);
                                          w_59 = t;
                                          if(v_59 != NULL && v_59 != w_59)
                                            _fail(w_59);
                                          else
                                            v_59 = w_59;
                                          t = not_null(v_59);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(x_57, sym_iter_star_1))
                            {
                              y_57 = ATgetArgument(x_57, 0);
                              y_56 :
                              if(match_cons(z_57, sym_TCons_2))
                                {
                                  a_58 = ATgetArgument(z_57, 0);
                                  d_58 = ATgetArgument(z_57, 1);
                                  z_56 :
                                  if(match_cons(d_58, sym_TCons_2))
                                    {
                                      e_58 = ATgetArgument(d_58, 0);
                                      f_58 = ATgetArgument(d_58, 1);
                                      a_57 :
                                      if(match_cons(f_58, sym_TCons_2))
                                        {
                                          g_58 = ATgetArgument(f_58, 0);
                                          h_58 = ATgetArgument(f_58, 1);
                                          b_57 :
                                          if(match_cons(h_58, sym_TNil_0))
                                            {
                                              ATerm b_60 = NULL;
                                              ATerm c_60 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(y_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                              t = build_list_0(t);
                                              c_60 = t;
                                              if(b_60 != NULL && b_60 != c_60)
                                                _fail(c_60);
                                              else
                                                b_60 = c_60;
                                              t = not_null(b_60);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(x_57, sym_iter_sep_2))
                                {
                                  y_57 = ATgetArgument(x_57, 0);
                                  v_57 = ATgetArgument(x_57, 1);
                                  c_57 :
                                  if(match_cons(z_57, sym_TCons_2))
                                    {
                                      a_58 = ATgetArgument(z_57, 0);
                                      d_58 = ATgetArgument(z_57, 1);
                                      d_57 :
                                      if(match_cons(d_58, sym_TCons_2))
                                        {
                                          e_58 = ATgetArgument(d_58, 0);
                                          f_58 = ATgetArgument(d_58, 1);
                                          e_57 :
                                          if(match_cons(f_58, sym_TCons_2))
                                            {
                                              g_58 = ATgetArgument(f_58, 0);
                                              h_58 = ATgetArgument(f_58, 1);
                                              f_57 :
                                              if(match_cons(h_58, sym_TNil_0))
                                                {
                                                  ATerm j_60 = NULL;
                                                  ATerm k_60 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(y_57), not_null(v_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                  t = build_sep_list_0(t);
                                                  k_60 = t;
                                                  if(j_60 != NULL && j_60 != k_60)
                                                    _fail(k_60);
                                                  else
                                                    j_60 = k_60;
                                                  t = not_null(j_60);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(x_57, sym_iter_star_sep_2))
                                    {
                                      y_57 = ATgetArgument(x_57, 0);
                                      v_57 = ATgetArgument(x_57, 1);
                                      g_57 :
                                      if(match_cons(z_57, sym_TCons_2))
                                        {
                                          a_58 = ATgetArgument(z_57, 0);
                                          d_58 = ATgetArgument(z_57, 1);
                                          h_57 :
                                          if(match_cons(d_58, sym_TCons_2))
                                            {
                                              e_58 = ATgetArgument(d_58, 0);
                                              f_58 = ATgetArgument(d_58, 1);
                                              i_57 :
                                              if(match_cons(f_58, sym_TCons_2))
                                                {
                                                  g_58 = ATgetArgument(f_58, 0);
                                                  h_58 = ATgetArgument(f_58, 1);
                                                  j_57 :
                                                  if(match_cons(h_58, sym_TNil_0))
                                                    {
                                                      ATerm w_60 = NULL;
                                                      ATerm x_60 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(y_57), not_null(v_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                      t = build_sep_list_0(t);
                                                      x_60 = t;
                                                      if(w_60 != NULL && w_60 != x_60)
                                                        _fail(x_60);
                                                      else
                                                        w_60 = x_60;
                                                      t = not_null(w_60);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(x_57, sym_alt_2))
                                        {
                                          y_57 = ATgetArgument(x_57, 0);
                                          v_57 = ATgetArgument(x_57, 1);
                                          k_57 :
                                          if(match_cons(z_57, sym_TCons_2))
                                            {
                                              a_58 = ATgetArgument(z_57, 0);
                                              d_58 = ATgetArgument(z_57, 1);
                                              l_57 :
                                              if(match_cons(d_58, sym_TCons_2))
                                                {
                                                  e_58 = ATgetArgument(d_58, 0);
                                                  f_58 = ATgetArgument(d_58, 1);
                                                  m_57 :
                                                  if(match_cons(f_58, sym_TCons_2))
                                                    {
                                                      g_58 = ATgetArgument(f_58, 0);
                                                      h_58 = ATgetArgument(f_58, 1);
                                                      n_57 :
                                                      if(match_cons(h_58, sym_TNil_0))
                                                        {
                                                          ATerm p_61 = NULL,q_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
                                                          ATerm c_62 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          {
                                                            ATerm d_62 = NULL;
                                                            t = make_path_0(t);
                                                            c_62 = t;
                                                            if(p_61 != NULL && p_61 != c_62)
                                                              _fail(c_62);
                                                            else
                                                              p_61 = c_62;
                                                            {
                                                              ATerm e_64 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_alt_2, not_null(y_57), not_null(v_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                              d_62 = t;
                                                              if(q_61 != NULL && q_61 != d_62)
                                                                _fail(d_62);
                                                              else
                                                                q_61 = d_62;
                                                              {
                                                                ATerm z_65 (ATerm t)
                                                                {
                                                                  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
                                                                  ATerm a_66 (ATerm t)
                                                                  {
                                                                    ATerm d_63 = NULL,e_63 = NULL,g_63 = NULL,h_63 = NULL;
                                                                    if(e_62 != NULL && e_62 != h_62)
                                                                      _fail(h_62);
                                                                    else
                                                                      e_62 = h_62;
                                                                    if(e_62 != NULL && e_62 != k_62)
                                                                      _fail(k_62);
                                                                    else
                                                                      e_62 = k_62;
                                                                    if(f_62 != NULL && f_62 != l_62)
                                                                      _fail(l_62);
                                                                    else
                                                                      f_62 = l_62;
                                                                    if(e_63 != NULL && e_63 != m_62)
                                                                      _fail(m_62);
                                                                    else
                                                                      e_63 = m_62;
                                                                    if(d_63 != NULL && d_63 != s_62)
                                                                      _fail(s_62);
                                                                    else
                                                                      d_63 = s_62;
                                                                    if(h_63 != NULL && h_63 != w_62)
                                                                      _fail(w_62);
                                                                    else
                                                                      h_63 = w_62;
                                                                    if(g_63 != NULL && g_63 != y_62)
                                                                      _fail(y_62);
                                                                    else
                                                                      g_63 = y_62;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_62), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(e_62), not_null(e_63)), not_null(d_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_63), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                    t = z_65(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm b_66 (ATerm t)
                                                                  {
                                                                    ATerm l_63 = NULL,m_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
                                                                    if(e_62 != NULL && e_62 != k_62)
                                                                      _fail(k_62);
                                                                    else
                                                                      e_62 = k_62;
                                                                    if(f_62 != NULL && f_62 != l_62)
                                                                      _fail(l_62);
                                                                    else
                                                                      f_62 = l_62;
                                                                    if(m_63 != NULL && m_63 != m_62)
                                                                      _fail(m_62);
                                                                    else
                                                                      m_63 = m_62;
                                                                    if(l_63 != NULL && l_63 != s_62)
                                                                      _fail(s_62);
                                                                    else
                                                                      l_63 = s_62;
                                                                    if(p_63 != NULL && p_63 != w_62)
                                                                      _fail(w_62);
                                                                    else
                                                                      p_63 = w_62;
                                                                    if(o_63 != NULL && o_63 != y_62)
                                                                      _fail(y_62);
                                                                    else
                                                                      o_63 = y_62;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    t = add_0(t);
                                                                    q_63 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_62), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(f_62), not_null(m_63)), not_null(l_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_63), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                    t = z_65(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm c_66 (ATerm t)
                                                                  {
                                                                    ATerm a_64 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    {
                                                                      ATerm b_64 = NULL;
                                                                      t = get_pp_entry_0(t);
                                                                      a_64 = t;
                                                                      if(z_61 != NULL && z_61 != a_64)
                                                                        _fail(a_64);
                                                                      else
                                                                        z_61 = a_64;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_62), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                      {
                                                                        ATerm c_64 = NULL;
                                                                        t = symbol2abox_0(t);
                                                                        b_64 = t;
                                                                        if(a_62 != NULL && a_62 != b_64)
                                                                          _fail(b_64);
                                                                        else
                                                                          a_62 = b_64;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = index_0(t);
                                                                        c_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_64), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_62), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = instantiate_0(t);
                                                                      }
                                                                    }
                                                                    return(t);
                                                                  }
                                                                  n_62 = t;
                                                                  p_54 :
                                                                  if(match_cons(n_62, sym_TCons_2))
                                                                    {
                                                                      o_62 = ATgetArgument(n_62, 0);
                                                                      p_62 = ATgetArgument(n_62, 1);
                                                                      q_54 :
                                                                      if(match_cons(p_62, sym_TCons_2))
                                                                        {
                                                                          q_62 = ATgetArgument(p_62, 0);
                                                                          v_62 = ATgetArgument(p_62, 1);
                                                                          r_54 :
                                                                          if(match_cons(q_62, sym_appl_2))
                                                                            {
                                                                              r_62 = ATgetArgument(q_62, 0);
                                                                              s_62 = ATgetArgument(q_62, 1);
                                                                              s_54 :
                                                                              if(match_cons(v_62, sym_TCons_2))
                                                                                {
                                                                                  w_62 = ATgetArgument(v_62, 0);
                                                                                  x_62 = ATgetArgument(v_62, 1);
                                                                                  t_54 :
                                                                                  if(match_cons(x_62, sym_TCons_2))
                                                                                    {
                                                                                      y_62 = ATgetArgument(x_62, 0);
                                                                                      z_62 = ATgetArgument(x_62, 1);
                                                                                      u_54 :
                                                                                      if(match_cons(z_62, sym_TNil_0))
                                                                                        {
                                                                                          v_54 :
                                                                                          if(match_cons(s_62, sym_Cons_2))
                                                                                            {
                                                                                              t_62 = ATgetArgument(s_62, 0);
                                                                                              u_62 = ATgetArgument(s_62, 1);
                                                                                              w_54 :
                                                                                              if(match_cons(u_62, sym_Nil_0))
                                                                                                {
                                                                                                  x_54 :
                                                                                                  if(match_cons(r_62, sym_prod_3))
                                                                                                    {
                                                                                                      g_62 = ATgetArgument(r_62, 0);
                                                                                                      j_62 = ATgetArgument(r_62, 1);
                                                                                                      m_62 = ATgetArgument(r_62, 2);
                                                                                                      y_54 :
                                                                                                      if(match_cons(j_62, sym_alt_2))
                                                                                                        {
                                                                                                          k_62 = ATgetArgument(j_62, 0);
                                                                                                          l_62 = ATgetArgument(j_62, 1);
                                                                                                          z_54 :
                                                                                                          if(match_cons(g_62, sym_Cons_2))
                                                                                                            {
                                                                                                              h_62 = ATgetArgument(g_62, 0);
                                                                                                              i_62 = ATgetArgument(g_62, 1);
                                                                                                              a_55 :
                                                                                                              if(match_cons(i_62, sym_Nil_0))
                                                                                                                {
                                                                                                                  b_55 :
                                                                                                                  if(match_cons(o_62, sym_alt_2))
                                                                                                                    {
                                                                                                                      e_62 = ATgetArgument(o_62, 0);
                                                                                                                      f_62 = ATgetArgument(o_62, 1);
                                                                                                                      {
                                                                                                                        ATerm x_15 = t;
                                                                                                                        if(PushChoice()==0)
                                                                                                                          {
                                                                                                                            t = a_66(t);
                                                                                                                            PopChoice();
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = x_15;
                                                                                                                            {
                                                                                                                              ATerm y_15 = t;
                                                                                                                              if(PushChoice()==0)
                                                                                                                                {
                                                                                                                                  t = b_66(t);
                                                                                                                                  PopChoice();
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = y_15;
                                                                                                                                  t = c_66(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    t = c_66(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  c_55 :
                                                                                                                  t = c_66(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              d_55 :
                                                                                                              t = c_66(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          e_55 :
                                                                                                          f_55 :
                                                                                                          t = c_66(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      g_55 :
                                                                                                      t = c_66(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  h_55 :
                                                                                                  if(match_cons(r_62, sym_prod_3))
                                                                                                    {
                                                                                                      g_62 = ATgetArgument(r_62, 0);
                                                                                                      j_62 = ATgetArgument(r_62, 1);
                                                                                                      m_62 = ATgetArgument(r_62, 2);
                                                                                                      i_55 :
                                                                                                      if(match_cons(o_62, sym_alt_2))
                                                                                                        {
                                                                                                          e_62 = ATgetArgument(o_62, 0);
                                                                                                          f_62 = ATgetArgument(o_62, 1);
                                                                                                          j_55 :
                                                                                                          if(match_cons(g_62, sym_Cons_2))
                                                                                                            {
                                                                                                              h_62 = ATgetArgument(g_62, 0);
                                                                                                              i_62 = ATgetArgument(g_62, 1);
                                                                                                              k_55 :
                                                                                                              if(match_cons(i_62, sym_Nil_0))
                                                                                                                {
                                                                                                                  l_55 :
                                                                                                                  if(match_cons(j_62, sym_alt_2))
                                                                                                                    {
                                                                                                                      k_62 = ATgetArgument(j_62, 0);
                                                                                                                      l_62 = ATgetArgument(j_62, 1);
                                                                                                                      {
                                                                                                                        ATerm z_15 = t;
                                                                                                                        if(PushChoice()==0)
                                                                                                                          {
                                                                                                                            t = a_66(t);
                                                                                                                            PopChoice();
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = z_15;
                                                                                                                            t = b_66(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              m_55 :
                                                                                              if(match_cons(r_62, sym_prod_3))
                                                                                                {
                                                                                                  g_62 = ATgetArgument(r_62, 0);
                                                                                                  j_62 = ATgetArgument(r_62, 1);
                                                                                                  m_62 = ATgetArgument(r_62, 2);
                                                                                                  n_55 :
                                                                                                  if(match_cons(o_62, sym_alt_2))
                                                                                                    {
                                                                                                      e_62 = ATgetArgument(o_62, 0);
                                                                                                      f_62 = ATgetArgument(o_62, 1);
                                                                                                      o_55 :
                                                                                                      if(match_cons(g_62, sym_Cons_2))
                                                                                                        {
                                                                                                          h_62 = ATgetArgument(g_62, 0);
                                                                                                          i_62 = ATgetArgument(g_62, 1);
                                                                                                          p_55 :
                                                                                                          if(match_cons(i_62, sym_Nil_0))
                                                                                                            {
                                                                                                              q_55 :
                                                                                                              if(match_cons(j_62, sym_alt_2))
                                                                                                                {
                                                                                                                  k_62 = ATgetArgument(j_62, 0);
                                                                                                                  l_62 = ATgetArgument(j_62, 1);
                                                                                                                  {
                                                                                                                    ATerm a_16 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        t = a_66(t);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = a_16;
                                                                                                                        t = b_66(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  return(t);
                                                                }
                                                                t = z_65(t);
                                                                e_64 = t;
                                                                if(b_62 != NULL && b_62 != e_64)
                                                                  _fail(e_64);
                                                                else
                                                                  b_62 = e_64;
                                                              }
                                                            }
                                                          }
                                                          t = not_null(b_62);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(match_cons(x_57, sym_seq_1))
                                            {
                                              y_57 = ATgetArgument(x_57, 0);
                                              o_57 :
                                              if(match_cons(z_57, sym_TCons_2))
                                                {
                                                  a_58 = ATgetArgument(z_57, 0);
                                                  d_58 = ATgetArgument(z_57, 1);
                                                  p_57 :
                                                  if(match_cons(a_58, sym_appl_2))
                                                    {
                                                      b_58 = ATgetArgument(a_58, 0);
                                                      c_58 = ATgetArgument(a_58, 1);
                                                      q_57 :
                                                      if(match_cons(d_58, sym_TCons_2))
                                                        {
                                                          e_58 = ATgetArgument(d_58, 0);
                                                          f_58 = ATgetArgument(d_58, 1);
                                                          r_57 :
                                                          if(match_cons(f_58, sym_TCons_2))
                                                            {
                                                              g_58 = ATgetArgument(f_58, 0);
                                                              h_58 = ATgetArgument(f_58, 1);
                                                              s_57 :
                                                              if(match_cons(h_58, sym_TNil_0))
                                                                {
                                                                  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
                                                                  ATerm n_64 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                  {
                                                                    ATerm o_64 = NULL;
                                                                    t = make_path_0(t);
                                                                    n_64 = t;
                                                                    if(j_64 != NULL && j_64 != n_64)
                                                                      _fail(n_64);
                                                                    else
                                                                      j_64 = n_64;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_seq_1, not_null(y_57)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    {
                                                                      ATerm p_64 = NULL;
                                                                      t = get_pp_entry_0(t);
                                                                      o_64 = t;
                                                                      if(k_64 != NULL && k_64 != o_64)
                                                                        _fail(o_64);
                                                                      else
                                                                        k_64 = o_64;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                      {
                                                                        ATerm q_64 = NULL;
                                                                        t = seq2abox_0(t);
                                                                        p_64 = t;
                                                                        if(l_64 != NULL && l_64 != p_64)
                                                                          _fail(p_64);
                                                                        else
                                                                          l_64 = p_64;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_64), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = filter_literals_0(t);
                                                                        t = instantiate_0(t);
                                                                        q_64 = t;
                                                                        if(m_64 != NULL && m_64 != q_64)
                                                                          _fail(q_64);
                                                                        else
                                                                          m_64 = q_64;
                                                                      }
                                                                    }
                                                                  }
                                                                  t = not_null(m_64);
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
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
  else
    _fail(t);
  return(t);
}
ATerm seq2abox_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  i_67 = t;
  v_66 :
  if(match_cons(i_67, sym_TCons_2))
    {
      j_67 = ATgetArgument(i_67, 0);
      m_67 = ATgetArgument(i_67, 1);
      w_66 :
      if(match_cons(j_67, sym_Nil_0))
        {
          x_66 :
          if(match_cons(m_67, sym_TCons_2))
            {
              o_67 = ATgetArgument(m_67, 0);
              r_67 = ATgetArgument(m_67, 1);
              y_66 :
              if(match_cons(o_67, sym_Nil_0))
                {
                  a_67 :
                  if(match_cons(r_67, sym_TCons_2))
                    {
                      s_67 = ATgetArgument(r_67, 0);
                      t_67 = ATgetArgument(r_67, 1);
                      b_67 :
                      if(match_cons(t_67, sym_TCons_2))
                        {
                          u_67 = ATgetArgument(t_67, 0);
                          v_67 = ATgetArgument(t_67, 1);
                          c_67 :
                          if(match_cons(v_67, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Nil_0);
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(j_67, sym_Cons_2))
            {
              k_67 = ATgetArgument(j_67, 0);
              l_67 = ATgetArgument(j_67, 1);
              d_67 :
              if(match_cons(m_67, sym_TCons_2))
                {
                  o_67 = ATgetArgument(m_67, 0);
                  r_67 = ATgetArgument(m_67, 1);
                  e_67 :
                  if(match_cons(o_67, sym_Cons_2))
                    {
                      p_67 = ATgetArgument(o_67, 0);
                      q_67 = ATgetArgument(o_67, 1);
                      f_67 :
                      if(match_cons(r_67, sym_TCons_2))
                        {
                          s_67 = ATgetArgument(r_67, 0);
                          t_67 = ATgetArgument(r_67, 1);
                          g_67 :
                          if(match_cons(t_67, sym_TCons_2))
                            {
                              u_67 = ATgetArgument(t_67, 0);
                              v_67 = ATgetArgument(t_67, 1);
                              h_67 :
                              if(match_cons(v_67, sym_TNil_0))
                                {
                                  ATerm j_68 = NULL,k_68 = NULL,o_68 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_67), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                  {
                                    ATerm p_68 = NULL;
                                    t = symbol2abox_0(t);
                                    o_68 = t;
                                    if(j_68 != NULL && j_68 != o_68)
                                      _fail(o_68);
                                    else
                                      j_68 = o_68;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_67), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm r_68 = NULL;
                                      t = add_0(t);
                                      p_68 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_67), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_68), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                      t = seq2abox_0(t);
                                      r_68 = t;
                                      if(k_68 != NULL && k_68 != r_68)
                                        _fail(r_68);
                                      else
                                        k_68 = r_68;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_68), not_null(k_68));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm lit_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm f_69 = NULL,g_69 = NULL;
  f_69 = t;
  c_69 :
  if(match_cons(f_69, sym_lit_1))
    {
      g_69 = ATgetArgument(f_69, 0);
      {
        ATerm b_16 = t;
        if(PushChoice()==0)
          {
            ATerm i_69 = NULL;
            t = not_null(g_69);
            t = p_0(t);
            i_69 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, not_null(i_69));
            PopChoice();
          }
        else
          {
            t = b_16;
            {
              ATerm l_69 = NULL;
              t = not_null(g_69);
              t = p_0(t);
              l_69 = t;
              t = (ATerm) ATmakeAppl(sym_lit_1, not_null(l_69));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL;
  u_69 = t;
  s_69 :
  if(match_cons(u_69, sym_TCons_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      t_69 :
      if(match_cons(w_69, sym_TCons_2))
        {
          x_69 = ATgetArgument(w_69, 0);
          y_69 = ATgetArgument(w_69, 1);
          t = not_null(x_69);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm m_70 = NULL;
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_70), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  o_70 = t;
  j_70 :
  if(match_cons(o_70, sym_TCons_2))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      k_70 :
      if(match_cons(q_70, sym_TCons_2))
        {
          r_70 = ATgetArgument(q_70, 0);
          s_70 = ATgetArgument(q_70, 1);
          l_70 :
          if(match_cons(s_70, sym_TNil_0))
            {
              ATerm c_16;
              c_16 = t;
              t = not_null(p_70);
              t = path_to_string_0(t);
              {
                ATerm e_2 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
                  return(t);
                }
                t = notify_1(t, e_2);
              }
              t = c_16;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm StoreEntryIfNotExists_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  a_71 = t;
  z_70 :
  if(match_cons(a_71, sym_PP_Entry_2))
    {
      b_71 = ATgetArgument(a_71, 0);
      c_71 = ATgetArgument(a_71, 1);
      {
        ATerm d_16 = t;
        if(PushChoice()==0)
          {
            ATerm e_16;
            e_16 = t;
            {
              ATerm f_71 = NULL;
              t = not_null(b_71);
              t = mk_key_0(t);
              f_71 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_71), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_get_0(t);
            }
            t = e_16;
            PopChoice();
          }
        else
          {
            t = d_16;
            t = StoreEntry_0(t);
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm m_71 = NULL;
      m_71 = t;
      {
        ATerm f_16 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = f_16;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_71), (ATerm) ATmakeAppl(sym_Nil_0));
      }
      return(t);
    }
    t = try_1(t, g_2);
    return(t);
  }
  t = map_1(t, f_2);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm x_71 = NULL,y_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym_Arg_1))
    {
      y_71 = ATgetArgument(x_71, 0);
      {
        ATerm g_16 = t;
        if(PushChoice()==0)
          {
            ATerm c_72 = NULL;
            t = not_null(y_71);
            t = o_0(t);
            c_72 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_72));
            PopChoice();
          }
        else
          {
            t = g_16;
            {
              ATerm f_72 = NULL;
              t = not_null(y_71);
              t = o_0(t);
              f_72 = t;
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_72));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  p_72 = t;
  m_72 :
  if(match_cons(p_72, sym_TCons_2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      n_72 :
      if(match_cons(r_72, sym_TCons_2))
        {
          s_72 = ATgetArgument(r_72, 0);
          t_72 = ATgetArgument(r_72, 1);
          o_72 :
          if(match_cons(t_72, sym_TNil_0))
            t = SSL_mkterm(not_null(q_72), not_null(s_72));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
  ATerm x_73 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_73), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_73), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  e_73 = t;
  a_73 :
  if(match_cons(e_73, sym_alt_2))
    {
      f_73 = ATgetArgument(e_73, 0);
      g_73 = ATgetArgument(e_73, 1);
      b_73 :
      if(match_cons(g_73, sym_alt_2))
        {
          c_73 = ATgetArgument(g_73, 0);
          d_73 = ATgetArgument(g_73, 1);
          {
            ATerm h_16 = t;
            if(PushChoice()==0)
              {
                ATerm p_73 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(c_73), not_null(d_73));
                t = flat_alt_0(t);
                p_73 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_73), not_null(p_73));
                PopChoice();
              }
            else
              {
                t = h_16;
                t = x_73(t);
              }
          }
        }
      else
        t = x_73(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = t_61(t);
    return(t);
  }
  t = split_2(t, h_2, _id);
  {
    ATerm b_78 (ATerm t)
    {
      ATerm v_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
      ATerm d_78 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm e_78 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm f_78 (ATerm t)
      {
        ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
        if(s_75 != NULL && s_75 != d_76)
          _fail(d_76);
        else
          s_75 = d_76;
        if(t_75 != NULL && t_75 != f_76)
          _fail(f_76);
        else
          t_75 = f_76;
        if(u_75 != NULL && u_75 != n_76)
          _fail(n_76);
        else
          u_75 = n_76;
        if(s_76 != NULL && s_76 != v_75)
          _fail(v_75);
        else
          s_76 = v_75;
        if(t_76 != NULL && t_76 != z_75)
          _fail(z_75);
        else
          t_76 = z_75;
        if(u_76 != NULL && u_76 != a_76)
          _fail(a_76);
        else
          u_76 = a_76;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(s_76), (ATerm) ATmakeAppl(sym_alt_2, not_null(t_76), not_null(u_76)));
        {
          ATerm x_76 = NULL;
          t = flat_alt_0(t);
          v_76 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_76), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          x_76 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_75), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_76), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = b_78(t);
          {
            ATerm i_2 (ATerm t)
            {
              ATerm j_2 (ATerm t)
              {
                ATerm k_2 (ATerm t)
                {
                  t = Arg_1(t, _id);
                  t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                  return(t);
                }
                t = try_1(t, k_2);
                return(t);
              }
              t = topdown_1(t, j_2);
              return(t);
            }
            t = Cons_2(t, i_2, _id);
          }
        }
        return(t);
      }
      ATerm g_78 (ATerm t)
      {
        ATerm d_77 = NULL,e_77 = NULL,m_77 = NULL;
        ATerm f_77 = NULL;
        ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
        t = not_null(p_76);
        f_77 = t;
        t = SSL_explode_term(not_null(f_77));
        h_77 = t;
        i_74 :
        if(match_cons(h_77, sym_TCons_2))
          {
            i_77 = ATgetArgument(h_77, 0);
            j_77 = ATgetArgument(h_77, 1);
            j_74 :
            if(match_cons(j_77, sym_TCons_2))
              {
                k_77 = ATgetArgument(j_77, 0);
                l_77 = ATgetArgument(j_77, 1);
                k_74 :
                if(match_cons(l_77, sym_TNil_0))
                  {
                    if(d_77 != NULL && d_77 != i_77)
                      _fail(i_77);
                    else
                      d_77 = i_77;
                    if(e_77 != NULL && e_77 != k_77)
                      _fail(k_77);
                    else
                      e_77 = k_77;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_76), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(n_76), not_null(d_77)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm s_77 = NULL,z_77 = NULL;
          t = conc_0(t);
          m_77 = t;
          t = not_null(e_77);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm n_16;
            n_16 = t;
            {
              ATerm t_77 = NULL;
              t = make_0(t);
              t_77 = t;
              if(s_77 != NULL && s_77 != t_77)
                _fail(t_77);
              else
                s_77 = t_77;
            }
            t = n_16;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm u_77 = NULL;
                ATerm w_77 = NULL;
                u_77 = t;
                {
                  ATerm x_77 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_77), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = b_78(t);
                  x_77 = t;
                  if(w_77 != NULL && w_77 != x_77)
                    _fail(x_77);
                  else
                    w_77 = x_77;
                  t = not_null(w_77);
                }
                return(t);
              }
              t = map_1(t, l_2);
              t = concat_0(t);
              z_77 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(d_76), not_null(m_77)), not_null(s_77)), not_null(z_77));
            }
          }
        }
        return(t);
      }
      b_76 = t;
      q_74 :
      if(match_cons(b_76, sym_TCons_2))
        {
          c_76 = ATgetArgument(b_76, 0);
          h_76 = ATgetArgument(b_76, 1);
          r_74 :
          if(match_cons(h_76, sym_TCons_2))
            {
              m_76 = ATgetArgument(h_76, 0);
              r_76 = ATgetArgument(h_76, 1);
              s_74 :
              if(match_cons(m_76, sym_lit_1))
                {
                  n_76 = ATgetArgument(m_76, 0);
                  t_74 :
                  if(match_cons(r_76, sym_TNil_0))
                    {
                      u_74 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(m_76, sym_TCons_2))
                    {
                      n_76 = ATgetArgument(m_76, 0);
                      o_76 = ATgetArgument(m_76, 1);
                      v_74 :
                      if(match_cons(o_76, sym_TCons_2))
                        {
                          p_76 = ATgetArgument(o_76, 0);
                          q_76 = ATgetArgument(o_76, 1);
                          w_74 :
                          if(match_cons(q_76, sym_TNil_0))
                            {
                              z_74 :
                              if(match_cons(r_76, sym_TNil_0))
                                {
                                  a_75 :
                                  if(match_cons(p_76, sym_sort_1))
                                    {
                                      v_75 = ATgetArgument(p_76, 0);
                                      b_75 :
                                      if(match_cons(c_76, sym_TCons_2))
                                        {
                                          d_76 = ATgetArgument(c_76, 0);
                                          e_76 = ATgetArgument(c_76, 1);
                                          c_75 :
                                          if(match_cons(e_76, sym_TCons_2))
                                            {
                                              f_76 = ATgetArgument(e_76, 0);
                                              g_76 = ATgetArgument(e_76, 1);
                                              d_75 :
                                              if(match_cons(g_76, sym_TNil_0))
                                                {
                                                  ATerm o_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = d_78(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = o_16;
                                                      t = g_78(t);
                                                    }
                                                }
                                              else
                                                t = d_78(t);
                                            }
                                          else
                                            t = d_78(t);
                                        }
                                      else
                                        t = d_78(t);
                                    }
                                  else
                                    {
                                      if(match_cons(p_76, sym_char_class_1))
                                        {
                                          v_75 = ATgetArgument(p_76, 0);
                                          e_75 :
                                          if(match_cons(c_76, sym_TCons_2))
                                            {
                                              d_76 = ATgetArgument(c_76, 0);
                                              e_76 = ATgetArgument(c_76, 1);
                                              f_75 :
                                              if(match_cons(e_76, sym_TCons_2))
                                                {
                                                  f_76 = ATgetArgument(e_76, 0);
                                                  g_76 = ATgetArgument(e_76, 1);
                                                  i_75 :
                                                  if(match_cons(g_76, sym_TNil_0))
                                                    {
                                                      ATerm p_16 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = e_78(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = p_16;
                                                          t = g_78(t);
                                                        }
                                                    }
                                                  else
                                                    t = e_78(t);
                                                }
                                              else
                                                t = e_78(t);
                                            }
                                          else
                                            t = e_78(t);
                                        }
                                      else
                                        {
                                          if(match_cons(p_76, sym_alt_2))
                                            {
                                              v_75 = ATgetArgument(p_76, 0);
                                              y_75 = ATgetArgument(p_76, 1);
                                              j_75 :
                                              if(match_cons(c_76, sym_TCons_2))
                                                {
                                                  d_76 = ATgetArgument(c_76, 0);
                                                  e_76 = ATgetArgument(c_76, 1);
                                                  k_75 :
                                                  if(match_cons(e_76, sym_TCons_2))
                                                    {
                                                      f_76 = ATgetArgument(e_76, 0);
                                                      g_76 = ATgetArgument(e_76, 1);
                                                      l_75 :
                                                      if(match_cons(g_76, sym_TNil_0))
                                                        {
                                                          o_75 :
                                                          if(match_cons(y_75, sym_alt_2))
                                                            {
                                                              z_75 = ATgetArgument(y_75, 0);
                                                              a_76 = ATgetArgument(y_75, 1);
                                                              {
                                                                ATerm q_16 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = f_78(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_16;
                                                                    t = g_78(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = g_78(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            {
                                              p_75 :
                                              if(match_cons(c_76, sym_TCons_2))
                                                {
                                                  d_76 = ATgetArgument(c_76, 0);
                                                  e_76 = ATgetArgument(c_76, 1);
                                                  q_75 :
                                                  if(match_cons(e_76, sym_TCons_2))
                                                    {
                                                      f_76 = ATgetArgument(e_76, 0);
                                                      g_76 = ATgetArgument(e_76, 1);
                                                      r_75 :
                                                      if(match_cons(g_76, sym_TNil_0))
                                                        t = g_78(t);
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                        }
                                    }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      return(t);
    }
    t = b_78(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  s_78 = t;
  r_78 :
  if(match_cons(s_78, sym_TCons_2))
    {
      t_78 = ATgetArgument(s_78, 0);
      u_78 = ATgetArgument(s_78, 1);
      t = not_null(t_78);
    }
  else
    _fail(t);
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  i_79 = t;
  a_79 :
  if(match_cons(i_79, sym_TCons_2))
    {
      j_79 = ATgetArgument(i_79, 0);
      f_79 = ATgetArgument(i_79, 1);
      b_79 :
      if(match_cons(f_79, sym_TCons_2))
        {
          g_79 = ATgetArgument(f_79, 0);
          h_79 = ATgetArgument(f_79, 1);
          c_79 :
          if(match_cons(h_79, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(j_79));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(i_79, sym_lit_1))
        {
          j_79 = ATgetArgument(i_79, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(j_79)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm r_16 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_16;
      {
        ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
        u_79 = t;
        s_79 :
        if(match_cons(u_79, sym_Cons_2))
          {
            v_79 = ATgetArgument(u_79, 0);
            w_79 = ATgetArgument(u_79, 1);
            t_79 :
            if(match_cons(w_79, sym_Cons_2))
              {
                x_79 = ATgetArgument(w_79, 0);
                y_79 = ATgetArgument(w_79, 1);
                {
                  ATerm c_80 = NULL;
                  t = not_null(y_79);
                  t = pair_0(t);
                  c_80 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(v_79), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_79), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(c_80));
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  ATerm s_16 = t;
  if(PushChoice()==0)
    {
      ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
      t = reverse_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm p_2 (ATerm t)
            {
              ATerm t_16 = t;
              if(PushChoice()==0)
                {
                  t = iter_1(t, _id);
                  PopChoice();
                }
              else
                {
                  t = t_16;
                  {
                    ATerm u_16 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = u_16;
                        {
                          ATerm v_16 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = v_16;
                              t = iter_star_sep_2(t, _id, _id);
                            }
                        }
                      }
                  }
                }
              return(t);
            }
            t = TCons_2(t, p_2, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, o_2);
          t = Make_0(t);
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, q_2);
          return(t);
        }
        t = Cons_2(t, m_2, n_2);
        y_80 = t;
        j_80 :
        if(match_cons(y_80, sym_Cons_2))
          {
            z_80 = ATgetArgument(y_80, 0);
            a_81 = ATgetArgument(y_80, 1);
            {
              ATerm b_81 = NULL;
              if(u_80 != NULL && u_80 != z_80)
                _fail(z_80);
              else
                u_80 = z_80;
              if(t_80 != NULL && t_80 != a_81)
                _fail(a_81);
              else
                t_80 = a_81;
              {
                ATerm w_16 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = w_16;
                t = not_null(t_80);
                t = reverse_0(t);
                b_81 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(b_81)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_80), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
          }
        else
          _fail(t);
      }
      PopChoice();
    }
  else
    {
      t = s_16;
      {
        ATerm x_16 = t;
        if(PushChoice()==0)
          {
            ATerm j_81 = NULL;
            t = reverse_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                ATerm d_81 = NULL;
                t = Make_0(t);
                d_81 = t;
                if(x_80 != NULL && x_80 != d_81)
                  _fail(d_81);
                else
                  x_80 = d_81;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                ATerm e_81 = NULL;
                ATerm y_16 = t;
                if(PushChoice()==0)
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = y_16;
                t = reverse_0(t);
                e_81 = t;
                if(v_80 != NULL && v_80 != e_81)
                  _fail(e_81);
                else
                  v_80 = e_81;
                return(t);
              }
              t = Cons_2(t, r_2, s_2);
              t = not_null(v_80);
              t = pair_0(t);
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm f_81 = NULL,g_81 = NULL;
                  ATerm u_2 (ATerm t)
                  {
                    ATerm h_81 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    h_81 = t;
                    if(f_81 != NULL && f_81 != h_81)
                      _fail(h_81);
                    else
                      f_81 = h_81;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    ATerm w_2 (ATerm t)
                    {
                      ATerm i_81 = NULL;
                      ATerm x_2 (ATerm t)
                      {
                        ATerm y_2 (ATerm t)
                        {
                          ATerm z_16 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = z_16;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = TCons_2(t, y_2, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, _id, x_2);
                      t = Make_0(t);
                      i_81 = t;
                      if(g_81 != NULL && g_81 != i_81)
                        _fail(i_81);
                      else
                        g_81 = i_81;
                      return(t);
                    }
                    t = TCons_2(t, w_2, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, u_2, v_2);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_81), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_81), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, t_2);
                j_81 = t;
                if(w_80 != NULL && w_80 != j_81)
                  _fail(j_81);
                else
                  w_80 = j_81;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_80), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_80), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = x_16;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm a_17 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = a_17;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  d_82 = t;
  t_81 :
  if(match_cons(d_82, sym_TCons_2))
    {
      e_82 = ATgetArgument(d_82, 0);
      f_82 = ATgetArgument(d_82, 1);
      u_81 :
      if(match_cons(f_82, sym_TCons_2))
        {
          g_82 = ATgetArgument(f_82, 0);
          h_82 = ATgetArgument(f_82, 1);
          v_81 :
          if(match_cons(h_82, sym_TNil_0))
            {
              ATerm b_17 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(e_82), not_null(g_82));
                  PopChoice();
                }
              else
                {
                  t = b_17;
                  t = SSL_addr(not_null(e_82), not_null(g_82));
                }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm number_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, z_2, _id);
  {
    ATerm m_83 (ATerm t)
    {
      ATerm u_82 = NULL,v_82 = NULL,x_82 = NULL;
      ATerm c_17 = t;
      if(PushChoice()==0)
        {
          ATerm a_3 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, a_3);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
          PopChoice();
        }
      else
        {
          t = c_17;
          {
            ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
            z_82 = t;
            q_82 :
            if(match_cons(z_82, sym_TCons_2))
              {
                a_83 = ATgetArgument(z_82, 0);
                b_83 = ATgetArgument(z_82, 1);
                r_82 :
                if(match_cons(b_83, sym_TCons_2))
                  {
                    c_83 = ATgetArgument(b_83, 0);
                    f_83 = ATgetArgument(b_83, 1);
                    s_82 :
                    if(match_cons(c_83, sym_Cons_2))
                      {
                        d_83 = ATgetArgument(c_83, 0);
                        e_83 = ATgetArgument(c_83, 1);
                        t_82 :
                        if(match_cons(f_83, sym_TNil_0))
                          {
                            ATerm d_17 = t;
                            if(PushChoice()==0)
                              {
                                ATerm g_83 = NULL;
                                if(u_82 != NULL && u_82 != a_83)
                                  _fail(a_83);
                                else
                                  u_82 = a_83;
                                if(v_82 != NULL && v_82 != d_83)
                                  _fail(d_83);
                                else
                                  v_82 = d_83;
                                if(x_82 != NULL && x_82 != e_83)
                                  _fail(e_83);
                                else
                                  x_82 = e_83;
                                t = not_null(v_82);
                                t = w_61(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm i_83 = NULL;
                                  t = add_0(t);
                                  g_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_83), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = m_83(t);
                                  i_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_82), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(i_83));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = d_17;
                                {
                                  ATerm k_83 = NULL;
                                  if(u_82 != NULL && u_82 != a_83)
                                    _fail(a_83);
                                  else
                                    u_82 = a_83;
                                  if(v_82 != NULL && v_82 != d_83)
                                    _fail(d_83);
                                  else
                                    v_82 = d_83;
                                  if(x_82 != NULL && x_82 != e_83)
                                    _fail(e_83);
                                  else
                                    x_82 = e_83;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = m_83(t);
                                  k_83 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_82), not_null(k_83));
                                }
                              }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
      return(t);
    }
    t = m_83(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
      u_83 = t;
      t_83 :
      if(match_cons(u_83, sym_label_2))
        {
          v_83 = ATgetArgument(u_83, 0);
          w_83 = ATgetArgument(u_83, 1);
          t = not_null(w_83);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, c_3);
    return(t);
  }
  t = map_1(t, b_3);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm f_84 = NULL,h_84 = NULL,m_84 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm g_84 = NULL;
      t = make_0(t);
      g_84 = t;
      if(f_84 != NULL && f_84 != g_84)
        _fail(g_84);
      else
        f_84 = g_84;
    }
    t = e_17;
    {
      ATerm l_84 = NULL;
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm i_84 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = s_61(t);
          i_84 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_84), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, e_3);
        return(t);
      }
      t = map_1(t, d_3);
      t = concat_0(t);
      l_84 = t;
      if(h_84 != NULL && h_84 != l_84)
        _fail(l_84);
      else
        h_84 = l_84;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = s_61(t);
      m_84 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(m_84)), not_null(f_84)), not_null(h_84));
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL;
  ATerm f_17 = t;
  if(PushChoice()==0)
    {
      ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,j_85 = NULL,k_85 = NULL;
      f_85 = t;
      z_84 :
      if(match_cons(f_85, sym_prod_3))
        {
          g_85 = ATgetArgument(f_85, 0);
          h_85 = ATgetArgument(f_85, 1);
          j_85 = ATgetArgument(f_85, 2);
          if(c_85 != NULL && c_85 != g_85)
            _fail(g_85);
          else
            c_85 = g_85;
          if(d_85 != NULL && d_85 != h_85)
            _fail(h_85);
          else
            d_85 = h_85;
          if(e_85 != NULL && e_85 != j_85)
            _fail(j_85);
          else
            e_85 = j_85;
          t = not_null(e_85);
          {
            ATerm f_3 (ATerm t)
            {
              ATerm l_85 = NULL,m_85 = NULL;
              l_85 = t;
              w_84 :
              if(match_cons(l_85, sym_cons_1))
                {
                  m_85 = ATgetArgument(l_85, 0);
                  if(a_85 != NULL && a_85 != m_85)
                    _fail(m_85);
                  else
                    a_85 = m_85;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, f_3);
          }
          t = not_null(c_85);
          {
            ATerm g_3 (ATerm t)
            {
              t = not_null(a_85);
              return(t);
            }
            t = symbols2pp_entries_1(t, g_3);
          }
        }
      else
        {
          if(match_cons(f_85, sym_prod_fun_4))
            {
              g_85 = ATgetArgument(f_85, 0);
              h_85 = ATgetArgument(f_85, 1);
              j_85 = ATgetArgument(f_85, 2);
              k_85 = ATgetArgument(f_85, 3);
              {
                ATerm n_85 = NULL;
                if(b_85 != NULL && b_85 != g_85)
                  _fail(g_85);
                else
                  b_85 = g_85;
                if(c_85 != NULL && c_85 != h_85)
                  _fail(h_85);
                else
                  c_85 = h_85;
                if(d_85 != NULL && d_85 != j_85)
                  _fail(j_85);
                else
                  d_85 = j_85;
                if(e_85 != NULL && e_85 != k_85)
                  _fail(k_85);
                else
                  e_85 = k_85;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(b_85)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_85), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                n_85 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(n_85), not_null(d_85), not_null(e_85));
                t = generate_pp_entries_0(t);
              }
            }
          else
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = f_17;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm g_17 = t;
          if(PushChoice()==0)
            {
              ATerm i_3 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Silent_0);
                return(t);
              }
              t = has_option_1(t, i_3);
              PopChoice();
              _fail(t);
            }
          else
            t = g_17;
          {
            ATerm j_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, j_3);
          }
          return(t);
        }
        t = try_1(t, h_3);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm get_pp_entry_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,s_86 = NULL;
  ATerm r_87 (ATerm t)
  {
    ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
    ATerm h_17 = t;
    if(PushChoice()==0)
      {
        t = not_null(q_86);
        t = pp_table_get_0(t);
        t = Snd_0(t);
        PopChoice();
      }
    else
      {
        t = h_17;
        {
          ATerm f_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,p_87 = NULL;
          t = not_null(q_86);
          t = reverse_0(t);
          {
            ATerm k_3 (ATerm t)
            {
              ATerm d_87 = NULL;
              d_87 = t;
              if(c_87 != NULL && c_87 != d_87)
                _fail(d_87);
              else
                c_87 = d_87;
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm e_87 = NULL;
              t = reverse_0(t);
              e_87 = t;
              if(a_87 != NULL && a_87 != e_87)
                _fail(e_87);
              else
                a_87 = e_87;
              return(t);
            }
            t = Cons_2(t, k_3, l_3);
            t = not_null(a_87);
            t = pp_table_get_0(t);
            t = Fst_0(t);
            j_87 = t;
            b_86 :
            if(match_cons(j_87, sym_Path_2))
              {
                k_87 = ATgetArgument(j_87, 0);
                f_87 = ATgetArgument(j_87, 1);
                c_86 :
                if(match_cons(f_87, sym_Cons_2))
                  {
                    h_87 = ATgetArgument(f_87, 0);
                    i_87 = ATgetArgument(f_87, 1);
                    d_86 :
                    if(match_cons(i_87, sym_Nil_0))
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_87), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_87), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              {
                if(match_cons(j_87, sym_Path1_1))
                  {
                    k_87 = ATgetArgument(j_87, 0);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_87), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                  }
                else
                  _fail(t);
              }
            p_87 = t;
            if(b_87 != NULL && b_87 != p_87)
              _fail(p_87);
            else
              b_87 = p_87;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_86), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm m_3 (ATerm t)
              {
                t = not_null(b_87);
                return(t);
              }
              t = symbol2abox_1(t, m_3);
              t = map_1(t, StoreEntryIfNotExists_0);
              t = not_null(q_86);
              t = pp_table_get_0(t);
              t = Snd_0(t);
            }
          }
        }
      }
    return(t);
  }
  n_86 = t;
  f_86 :
  if(match_cons(n_86, sym_TCons_2))
    {
      o_86 = ATgetArgument(n_86, 0);
      p_86 = ATgetArgument(n_86, 1);
      g_86 :
      if(match_cons(p_86, sym_TCons_2))
        {
          q_86 = ATgetArgument(p_86, 0);
          s_86 = ATgetArgument(p_86, 1);
          i_86 :
          if(match_cons(s_86, sym_TNil_0))
            {
              j_86 :
              if(match_cons(o_86, sym_prod_3))
                {
                  k_86 = ATgetArgument(o_86, 0);
                  l_86 = ATgetArgument(o_86, 1);
                  m_86 = ATgetArgument(o_86, 2);
                  {
                    ATerm i_17 = t;
                    if(PushChoice()==0)
                      {
                        t = not_null(q_86);
                        t = pp_table_get_0(t);
                        t = Snd_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm j_17 = t;
                          if(PushChoice()==0)
                            {
                              t = (ATerm) ATmakeAppl(sym_prod_3, not_null(k_86), not_null(l_86), not_null(m_86));
                              t = generate_pp_entries_0(t);
                              t = map_1(t, StoreEntryIfNotExists_0);
                              t = not_null(q_86);
                              t = pp_table_get_0(t);
                              t = Snd_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_17;
                              t = r_87(t);
                            }
                        }
                      }
                  }
                }
              else
                t = r_87(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm prod_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm i_88 = NULL,j_88 = NULL,l_88 = NULL,m_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym_prod_3))
    {
      j_88 = ATgetArgument(i_88, 0);
      l_88 = ATgetArgument(i_88, 1);
      m_88 = ATgetArgument(i_88, 2);
      {
        ATerm k_17 = t;
        if(PushChoice()==0)
          {
            ATerm q_88 = NULL;
            t = not_null(j_88);
            {
              ATerm s_88 = NULL;
              t = l_0(t);
              q_88 = t;
              t = not_null(l_88);
              {
                ATerm u_88 = NULL;
                t = m_0(t);
                s_88 = t;
                t = not_null(m_88);
                t = n_0(t);
                u_88 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(q_88), not_null(s_88), not_null(u_88));
              }
            }
            PopChoice();
          }
        else
          {
            t = k_17;
            {
              ATerm a_89 = NULL;
              t = not_null(j_88);
              {
                ATerm c_89 = NULL;
                t = l_0(t);
                a_89 = t;
                t = not_null(l_88);
                {
                  ATerm e_89 = NULL;
                  t = m_0(t);
                  c_89 = t;
                  t = not_null(m_88);
                  t = n_0(t);
                  e_89 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, not_null(a_89), not_null(c_89), not_null(e_89));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_attributes_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL;
  i_90 = t;
  v_89 :
  if(match_cons(i_90, sym_TCons_2))
    {
      j_90 = ATgetArgument(i_90, 0);
      p_90 = ATgetArgument(i_90, 1);
      w_89 :
      if(match_cons(j_90, sym_prod_3))
        {
          k_90 = ATgetArgument(j_90, 0);
          l_90 = ATgetArgument(j_90, 1);
          m_90 = ATgetArgument(j_90, 2);
          x_89 :
          if(match_cons(m_90, sym_no_attrs_0))
            {
              y_89 :
              if(match_cons(p_90, sym_TCons_2))
                {
                  q_90 = ATgetArgument(p_90, 0);
                  r_90 = ATgetArgument(p_90, 1);
                  z_89 :
                  if(match_cons(r_90, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(k_90), not_null(l_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(q_90)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(m_90, sym_attrs_1))
                {
                  h_90 = ATgetArgument(m_90, 0);
                  a_90 :
                  if(match_cons(p_90, sym_TCons_2))
                    {
                      q_90 = ATgetArgument(p_90, 0);
                      r_90 = ATgetArgument(p_90, 1);
                      b_90 :
                      if(match_cons(r_90, sym_TNil_0))
                        {
                          ATerm z_90 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_90), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          z_90 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(k_90), not_null(l_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(z_90)));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(j_90, sym_prod_fun_4))
            {
              k_90 = ATgetArgument(j_90, 0);
              l_90 = ATgetArgument(j_90, 1);
              m_90 = ATgetArgument(j_90, 2);
              n_90 = ATgetArgument(j_90, 3);
              c_90 :
              if(match_cons(n_90, sym_no_attrs_0))
                {
                  d_90 :
                  if(match_cons(p_90, sym_TCons_2))
                    {
                      q_90 = ATgetArgument(p_90, 0);
                      r_90 = ATgetArgument(p_90, 1);
                      e_90 :
                      if(match_cons(r_90, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(k_90), not_null(l_90), not_null(m_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(q_90)));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(n_90, sym_attrs_1))
                    {
                      o_90 = ATgetArgument(n_90, 0);
                      f_90 :
                      if(match_cons(p_90, sym_TCons_2))
                        {
                          q_90 = ATgetArgument(p_90, 0);
                          r_90 = ATgetArgument(p_90, 1);
                          g_90 :
                          if(match_cons(r_90, sym_TNil_0))
                            {
                              ATerm k_91 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_90), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              k_91 = t;
                              t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(k_90), not_null(l_90), not_null(m_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(k_91)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm normalize_constr_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm l_17;
    l_17 = t;
    {
      ATerm m_17 = t;
      if(PushChoice()==0)
        {
          t = de_quote_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = m_17;
    }
    t = l_17;
    t = quote_0(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm quote_0 (ATerm t)
{
  t = explode_string_0(t);
  t = Quote_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  ATerm j_92 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_92), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm k_92 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(c_92)));
    return(t);
  }
  ATerm l_92 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(c_92)));
    return(t);
  }
  ATerm m_92 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(110), not_null(c_92)));
    return(t);
  }
  a_92 = t;
  y_91 :
  if(match_int(a_92, 34))
    {
      ATerm n_17 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)));
          PopChoice();
        }
      else
        {
          t = n_17;
          t = j_92(t);
        }
    }
  else
    {
      if(match_int(a_92, 92))
        {
          ATerm o_17 = t;
          if(PushChoice()==0)
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Nil_0)));
              PopChoice();
            }
          else
            {
              t = o_17;
              t = j_92(t);
            }
        }
      else
        {
          if(match_cons(a_92, sym_Cons_2))
            {
              b_92 = ATgetArgument(a_92, 0);
              c_92 = ATgetArgument(a_92, 1);
              z_91 :
              if(match_int(b_92, 34))
                {
                  ATerm p_17 = t;
                  if(PushChoice()==0)
                    {
                      t = j_92(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_17;
                      t = k_92(t);
                    }
                }
              else
                {
                  if(match_int(b_92, 92))
                    {
                      ATerm q_17 = t;
                      if(PushChoice()==0)
                        {
                          t = j_92(t);
                          PopChoice();
                        }
                      else
                        {
                          t = q_17;
                          t = l_92(t);
                        }
                    }
                  else
                    {
                      if(match_int(b_92, 10))
                        {
                          ATerm r_17 = t;
                          if(PushChoice()==0)
                            {
                              t = j_92(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_17;
                              t = m_92(t);
                            }
                        }
                      else
                        t = j_92(t);
                    }
                }
            }
          else
            t = j_92(t);
        }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  ATerm s_17 = t;
  if(PushChoice()==0)
    {
      t = explode_string_0(t);
      t = map_1(t, Escape_0);
      t = concat_0(t);
      t = implode_string_0(t);
      PopChoice();
    }
  else
    {
      t = s_17;
      t = explode_string_0(t);
      {
        ATerm n_92 (ATerm t)
        {
          ATerm t_17 = t;
          if(PushChoice()==0)
            {
              t = Escape_0(t);
              {
                ATerm o_3 (ATerm t)
                {
                  t = Cons_2(t, _id, n_92);
                  return(t);
                }
                t = Cons_2(t, _id, o_3);
              }
              PopChoice();
            }
          else
            {
              t = t_17;
              {
                ATerm u_17 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, n_92);
                    PopChoice();
                  }
                else
                  {
                    t = u_17;
                    t = Nil_0(t);
                  }
              }
            }
          return(t);
        }
        t = n_92(t);
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm isAlpha_0 (ATerm t)
{
  ATerm x_17 = t;
  if(PushChoice()==0)
    {
      t = isUpper_0(t);
      PopChoice();
    }
  else
    {
      t = x_17;
      t = isLower_0(t);
    }
  return(t);
}
ATerm string_Hd_0 (ATerm t)
{
  t = explode_string_0(t);
  t = Hd_0(t);
  return(t);
}
ATerm strs2constr_0 (ATerm t)
{
  ATerm p_92 = NULL;
  ATerm p_3 (ATerm t)
  {
    ATerm y_17 = t;
    if(PushChoice()==0)
      {
        t = empty_string_0(t);
        PopChoice();
        _fail(t);
      }
    else
      t = y_17;
    return(t);
  }
  t = filter_1(t, p_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm z_17;
      z_17 = t;
      t = string_Hd_0(t);
      t = isAlpha_0(t);
      t = z_17;
      return(t);
    }
    t = Cons_2(t, q_3, _id);
    {
      ATerm r_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
        return(t);
      }
      t = separate_by_1(t, r_3);
      t = concat_strings_0(t);
      p_92 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_92), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("START", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("some", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("all", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("id", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("L", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm a_18 = t;
        if(PushChoice()==0)
          {
            t = in_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = a_18;
        t = not_null(p_92);
        t = escape_0(t);
        t = quote_0(t);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  w_92 = t;
  t_92 :
  if(match_cons(w_92, sym_TCons_2))
    {
      x_92 = ATgetArgument(w_92, 0);
      y_92 = ATgetArgument(w_92, 1);
      u_92 :
      if(match_cons(y_92, sym_TCons_2))
        {
          z_92 = ATgetArgument(y_92, 0);
          a_93 = ATgetArgument(y_92, 1);
          v_92 :
          if(match_cons(a_93, sym_TNil_0))
            {
              t = not_null(x_92);
              {
                ATerm s_3 (ATerm t)
                {
                  t = not_null(z_92);
                  return(t);
                }
                t = at_end_1(t, s_3);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Sym2Strs_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  o_94 :
  if(match_cons(q_94, sym_cf_1))
    {
      r_94 = ATgetArgument(q_94, 0);
      t = not_null(r_94);
      t = Sym2Strs_0(t);
    }
  else
    {
      if(match_cons(q_94, sym_lex_1))
        {
          r_94 = ATgetArgument(q_94, 0);
          t = not_null(r_94);
          t = Sym2Strs_0(t);
        }
      else
        {
          if(match_cons(q_94, sym_empty_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
          else
            {
              if(match_cons(q_94, sym_seq_2))
                {
                  r_94 = ATgetArgument(q_94, 0);
                  s_94 = ATgetArgument(q_94, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_94), not_null(s_94));
                  t = filter_1(t, Sym2Strs_0);
                  t = concat_0(t);
                }
              else
                {
                  if(match_cons(q_94, sym_opt_1))
                    {
                      r_94 = ATgetArgument(q_94, 0);
                      t = not_null(r_94);
                      t = Sym2Strs_0(t);
                      {
                        ATerm t_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                          return(t);
                        }
                        t = at_end_1(t, t_3);
                      }
                    }
                  else
                    {
                      if(match_cons(q_94, sym_iter_1))
                        {
                          r_94 = ATgetArgument(q_94, 0);
                          t = not_null(r_94);
                          t = Sym2Strs_0(t);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("p", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                              return(t);
                            }
                            t = at_end_1(t, u_3);
                          }
                        }
                      else
                        {
                          if(match_cons(q_94, sym_iter_star_1))
                            {
                              r_94 = ATgetArgument(q_94, 0);
                              t = not_null(r_94);
                              t = Sym2Strs_0(t);
                              {
                                ATerm v_3 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("s", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                                  return(t);
                                }
                                t = at_end_1(t, v_3);
                              }
                            }
                          else
                            {
                              if(match_cons(q_94, sym_iter_sep_2))
                                {
                                  r_94 = ATgetArgument(q_94, 0);
                                  s_94 = ATgetArgument(q_94, 1);
                                  {
                                    ATerm c_95 = NULL;
                                    t = not_null(r_94);
                                    {
                                      ATerm e_95 = NULL;
                                      t = Sym2Strs_0(t);
                                      c_95 = t;
                                      t = not_null(s_94);
                                      t = Sym2Strs_0(t);
                                      e_95 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_95), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("p", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                      t = concat_0(t);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(q_94, sym_iter_star_sep_2))
                                    {
                                      r_94 = ATgetArgument(q_94, 0);
                                      s_94 = ATgetArgument(q_94, 1);
                                      {
                                        ATerm i_95 = NULL;
                                        t = not_null(r_94);
                                        {
                                          ATerm k_95 = NULL;
                                          t = Sym2Strs_0(t);
                                          i_95 = t;
                                          t = not_null(s_94);
                                          t = Sym2Strs_0(t);
                                          k_95 = t;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_95), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("s", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(q_94, sym_iter_n_2))
                                        {
                                          r_94 = ATgetArgument(q_94, 0);
                                          s_94 = ATgetArgument(q_94, 1);
                                          {
                                            ATerm n_95 = NULL;
                                            t = not_null(r_94);
                                            t = Sym2Strs_0(t);
                                            n_95 = t;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)));
                                            t = concat_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(q_94, sym_iter_sep_n_3))
                                            {
                                              r_94 = ATgetArgument(q_94, 0);
                                              s_94 = ATgetArgument(q_94, 1);
                                              p_94 = ATgetArgument(q_94, 2);
                                              {
                                                ATerm r_95 = NULL;
                                                t = not_null(r_94);
                                                {
                                                  ATerm t_95 = NULL;
                                                  t = Sym2Strs_0(t);
                                                  r_95 = t;
                                                  t = not_null(s_94);
                                                  t = Sym2Strs_0(t);
                                                  t_95 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_95), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_95), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                  t = concat_0(t);
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(q_94, sym_set_1))
                                                {
                                                  r_94 = ATgetArgument(q_94, 0);
                                                  {
                                                    ATerm w_95 = NULL;
                                                    t = not_null(r_94);
                                                    t = Sym2Strs_0(t);
                                                    w_95 = t;
                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_95), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(q_94, sym_pair_2))
                                                    {
                                                      r_94 = ATgetArgument(q_94, 0);
                                                      s_94 = ATgetArgument(q_94, 1);
                                                      {
                                                        ATerm a_96 = NULL;
                                                        t = not_null(r_94);
                                                        {
                                                          ATerm c_96 = NULL;
                                                          t = Sym2Strs_0(t);
                                                          a_96 = t;
                                                          t = not_null(s_94);
                                                          t = Sym2Strs_0(t);
                                                          c_96 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("and", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_96), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                          t = concat_0(t);
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(q_94, sym_func_2))
                                                        {
                                                          r_94 = ATgetArgument(q_94, 0);
                                                          s_94 = ATgetArgument(q_94, 1);
                                                          {
                                                            ATerm g_96 = NULL;
                                                            t = not_null(r_94);
                                                            t = filter_1(t, Sym2Strs_0);
                                                            {
                                                              ATerm i_96 = NULL;
                                                              t = concat_0(t);
                                                              g_96 = t;
                                                              t = not_null(s_94);
                                                              t = Sym2Strs_0(t);
                                                              i_96 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("to", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_96), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                              t = concat_0(t);
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(q_94, sym_alt_2))
                                                            {
                                                              r_94 = ATgetArgument(q_94, 0);
                                                              s_94 = ATgetArgument(q_94, 1);
                                                              {
                                                                ATerm m_96 = NULL;
                                                                t = not_null(r_94);
                                                                {
                                                                  ATerm o_96 = NULL;
                                                                  t = Sym2Strs_0(t);
                                                                  m_96 = t;
                                                                  t = not_null(s_94);
                                                                  t = Sym2Strs_0(t);
                                                                  o_96 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("or", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_96), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                                  t = concat_0(t);
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(q_94, sym_perm_1))
                                                                {
                                                                  r_94 = ATgetArgument(q_94, 0);
                                                                  {
                                                                    ATerm r_96 = NULL;
                                                                    t = not_null(r_94);
                                                                    t = filter_1(t, Sym2Strs_0);
                                                                    t = concat_0(t);
                                                                    r_96 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue)), not_null(r_96));
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(q_94, sym_sort_1))
                                                                    {
                                                                      r_94 = ATgetArgument(q_94, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_94), (ATerm) ATmakeAppl(sym_Nil_0));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(q_94, sym_lit_1))
                                                                        {
                                                                          r_94 = ATgetArgument(q_94, 0);
                                                                          {
                                                                            ATerm v_96 = NULL;
                                                                            t = not_null(r_94);
                                                                            {
                                                                              ATerm w_3 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, w_3);
                                                                              v_96 = t;
                                                                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_96), (ATerm) ATmakeAppl(sym_Nil_0));
                                                                            }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(q_94, sym_label_2))
                                                                            {
                                                                              r_94 = ATgetArgument(q_94, 0);
                                                                              s_94 = ATgetArgument(q_94, 1);
                                                                              {
                                                                                ATerm y_96 = NULL;
                                                                                t = not_null(r_94);
                                                                                {
                                                                                  ATerm x_3 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, x_3);
                                                                                  y_96 = t;
                                                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_96), (ATerm) ATmakeAppl(sym_Nil_0));
                                                                                }
                                                                              }
                                                                            }
                                                                          else
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
  return(t);
}
ATerm sym2strs_0 (ATerm t)
{
  t = Sym2Strs_0(t);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm b_18 = t;
      if(PushChoice()==0)
        {
          t = toAlphaNum_0(t);
          PopChoice();
        }
      else
        t = b_18;
      return(t);
    }
    t = map_1(t, y_3);
  }
  return(t);
}
ATerm syms2strs_0 (ATerm t)
{
  t = filter_1(t, sym2strs_0);
  t = concat_0(t);
  return(t);
}
ATerm empty_string_0 (ATerm t)
{
  ATerm m_98 = NULL;
  m_98 = t;
  l_98 :
  if(!(match_string(m_98, "")))
    _fail(t);
  return(t);
}
ATerm empty_test_0 (ATerm t)
{
  ATerm c_18;
  c_18 = t;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm d_18 = t;
      if(PushChoice()==0)
        {
          t = empty_string_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = d_18;
      return(t);
    }
    t = filter_1(t, z_3);
    t = Hd_0(t);
  }
  t = c_18;
  return(t);
}
ATerm isHyphen_0 (ATerm t)
{
  ATerm p_98 = NULL;
  p_98 = t;
  o_98 :
  if(match_int(p_98, 45))
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  else
    _fail(t);
  return(t);
}
ATerm isLower_0 (ATerm t)
{
  ATerm s_98 = NULL;
  s_98 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_98), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(122), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_98), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm isUpper_0 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_98), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(90), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_98), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL;
  d_99 = t;
  a_99 :
  if(match_cons(d_99, sym_TCons_2))
    {
      e_99 = ATgetArgument(d_99, 0);
      f_99 = ATgetArgument(d_99, 1);
      b_99 :
      if(match_cons(f_99, sym_TCons_2))
        {
          g_99 = ATgetArgument(f_99, 0);
          h_99 = ATgetArgument(f_99, 1);
          c_99 :
          if(match_cons(h_99, sym_TNil_0))
            {
              ATerm e_18;
              e_18 = t;
              {
                ATerm f_18 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(e_99), not_null(g_99));
                    PopChoice();
                  }
                else
                  {
                    t = f_18;
                    t = SSL_gtr(not_null(e_99), not_null(g_99));
                  }
              }
              t = e_18;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm g_18 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = g_18;
  return(t);
}
ATerm isNum_0 (ATerm t)
{
  ATerm m_99 = NULL;
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_99), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(57), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_99), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm isAlphaNumHyphen_0 (ATerm t)
{
  ATerm h_18 = t;
  if(PushChoice()==0)
    {
      t = isNum_0(t);
      PopChoice();
    }
  else
    {
      t = h_18;
      {
        ATerm i_18 = t;
        if(PushChoice()==0)
          {
            t = isUpper_0(t);
            PopChoice();
          }
        else
          {
            t = i_18;
            {
              ATerm j_18 = t;
              if(PushChoice()==0)
                {
                  t = isLower_0(t);
                  PopChoice();
                }
              else
                {
                  t = j_18;
                  t = isHyphen_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0 (ATerm t)
{
  ATerm e_101 = NULL;
  ATerm t_102 (ATerm t)
  {
    t = not_null(e_101);
    t = explode_string_0(t);
    {
      ATerm k_18 = t;
      if(PushChoice()==0)
        {
          t = map_1(t, isAlphaNumHyphen_0);
          PopChoice();
          _fail(t);
        }
      else
        t = k_18;
    }
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  e_101 = t;
  d_101 :
  if(match_string(e_101, ","))
    {
      ATerm l_18 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
          PopChoice();
        }
      else
        {
          t = l_18;
          t = t_102(t);
        }
    }
  else
    {
      if(match_string(e_101, ":"))
        {
          ATerm m_18 = t;
          if(PushChoice()==0)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
              PopChoice();
            }
          else
            {
              t = m_18;
              t = t_102(t);
            }
        }
      else
        {
          if(match_string(e_101, ";"))
            {
              ATerm n_18 = t;
              if(PushChoice()==0)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
                  PopChoice();
                }
              else
                {
                  t = n_18;
                  t = t_102(t);
                }
            }
          else
            {
              if(match_string(e_101, "+"))
                {
                  ATerm o_18 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
                      PopChoice();
                    }
                  else
                    {
                      t = o_18;
                      t = t_102(t);
                    }
                }
              else
                {
                  if(match_string(e_101, "++"))
                    {
                      ATerm p_18 = t;
                      if(PushChoice()==0)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
                          PopChoice();
                        }
                      else
                        {
                          t = p_18;
                          t = t_102(t);
                        }
                    }
                  else
                    {
                      if(match_string(e_101, "-"))
                        {
                          ATerm q_18 = t;
                          if(PushChoice()==0)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
                              PopChoice();
                            }
                          else
                            {
                              t = q_18;
                              {
                                ATerm r_18 = t;
                                if(PushChoice()==0)
                                  {
                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_18;
                                    t = t_102(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(e_101, "--"))
                            {
                              ATerm s_18 = t;
                              if(PushChoice()==0)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
                                  PopChoice();
                                }
                              else
                                {
                                  t = s_18;
                                  t = t_102(t);
                                }
                            }
                          else
                            {
                              if(match_string(e_101, "*"))
                                {
                                  ATerm t_18 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = t_18;
                                      t = t_102(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(e_101, "/"))
                                    {
                                      ATerm u_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_18;
                                          t = t_102(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(e_101, "&"))
                                        {
                                          ATerm v_18 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = v_18;
                                              t = t_102(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(e_101, "&&"))
                                            {
                                              ATerm w_18 = t;
                                              if(PushChoice()==0)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = w_18;
                                                  t = t_102(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(e_101, "!"))
                                                {
                                                  ATerm x_18 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_18;
                                                      t = t_102(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(e_101, "~"))
                                                    {
                                                      ATerm y_18 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = y_18;
                                                          t = t_102(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(e_101, "%"))
                                                        {
                                                          ATerm z_18 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = z_18;
                                                              t = t_102(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(e_101, "<<"))
                                                            {
                                                              ATerm d_19 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = d_19;
                                                                  t = t_102(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(e_101, ">>"))
                                                                {
                                                                  ATerm e_19 = t;
                                                                  if(PushChoice()==0)
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
                                                                      PopChoice();
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_19;
                                                                      t = t_102(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(e_101, "!="))
                                                                    {
                                                                      ATerm f_19 = t;
                                                                      if(PushChoice()==0)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
                                                                          PopChoice();
                                                                        }
                                                                      else
                                                                        {
                                                                          t = f_19;
                                                                          t = t_102(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(e_101, "<"))
                                                                        {
                                                                          ATerm g_19 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_19;
                                                                              t = t_102(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(e_101, "<="))
                                                                            {
                                                                              ATerm h_19 = t;
                                                                              if(PushChoice()==0)
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
                                                                                  PopChoice();
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_19;
                                                                                  t = t_102(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(e_101, ">"))
                                                                                {
                                                                                  ATerm i_19 = t;
                                                                                  if(PushChoice()==0)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
                                                                                      PopChoice();
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_19;
                                                                                      t = t_102(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(e_101, ">="))
                                                                                    {
                                                                                      ATerm j_19 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_19;
                                                                                          t = t_102(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(e_101, "|"))
                                                                                        {
                                                                                          ATerm k_19 = t;
                                                                                          if(PushChoice()==0)
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
                                                                                              PopChoice();
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_19;
                                                                                              t = t_102(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(e_101, "="))
                                                                                            {
                                                                                              ATerm l_19 = t;
                                                                                              if(PushChoice()==0)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
                                                                                                  PopChoice();
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_19;
                                                                                                  t = t_102(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(e_101, "=="))
                                                                                                {
                                                                                                  ATerm m_19 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_19;
                                                                                                      t = t_102(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(e_101, "||"))
                                                                                                    {
                                                                                                      ATerm n_19 = t;
                                                                                                      if(PushChoice()==0)
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
                                                                                                          PopChoice();
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_19;
                                                                                                          t = t_102(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(e_101, ":="))
                                                                                                        {
                                                                                                          ATerm o_19 = t;
                                                                                                          if(PushChoice()==0)
                                                                                                            {
                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = o_19;
                                                                                                              t = t_102(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(e_101, "->"))
                                                                                                            {
                                                                                                              ATerm p_19 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_19;
                                                                                                                  t = t_102(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(e_101, "=>"))
                                                                                                                {
                                                                                                                  ATerm q_19 = t;
                                                                                                                  if(PushChoice()==0)
                                                                                                                    {
                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
                                                                                                                      PopChoice();
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_19;
                                                                                                                      t = t_102(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(e_101, "*="))
                                                                                                                    {
                                                                                                                      ATerm r_19 = t;
                                                                                                                      if(PushChoice()==0)
                                                                                                                        {
                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
                                                                                                                          PopChoice();
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_19;
                                                                                                                          t = t_102(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(e_101, "/="))
                                                                                                                        {
                                                                                                                          ATerm s_19 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_19;
                                                                                                                              t = t_102(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(e_101, "%="))
                                                                                                                            {
                                                                                                                              ATerm t_19 = t;
                                                                                                                              if(PushChoice()==0)
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
                                                                                                                                  PopChoice();
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = t_19;
                                                                                                                                  t = t_102(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(e_101, "+="))
                                                                                                                                {
                                                                                                                                  ATerm u_19 = t;
                                                                                                                                  if(PushChoice()==0)
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
                                                                                                                                      PopChoice();
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = u_19;
                                                                                                                                      t = t_102(t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(e_101, "-="))
                                                                                                                                    {
                                                                                                                                      ATerm v_19 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = v_19;
                                                                                                                                          t = t_102(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(e_101, "<<="))
                                                                                                                                        {
                                                                                                                                          ATerm w_19 = t;
                                                                                                                                          if(PushChoice()==0)
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
                                                                                                                                              PopChoice();
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = w_19;
                                                                                                                                              t = t_102(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(e_101, ">>="))
                                                                                                                                            {
                                                                                                                                              ATerm x_19 = t;
                                                                                                                                              if(PushChoice()==0)
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
                                                                                                                                                  PopChoice();
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = x_19;
                                                                                                                                                  t = t_102(t);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(e_101, "&="))
                                                                                                                                                {
                                                                                                                                                  ATerm y_19 = t;
                                                                                                                                                  if(PushChoice()==0)
                                                                                                                                                    {
                                                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_19;
                                                                                                                                                      t = t_102(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(e_101, "^="))
                                                                                                                                                    {
                                                                                                                                                      ATerm z_19 = t;
                                                                                                                                                      if(PushChoice()==0)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
                                                                                                                                                          PopChoice();
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = z_19;
                                                                                                                                                          t = t_102(t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(e_101, "|="))
                                                                                                                                                        {
                                                                                                                                                          ATerm a_20 = t;
                                                                                                                                                          if(PushChoice()==0)
                                                                                                                                                            {
                                                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
                                                                                                                                                              PopChoice();
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = a_20;
                                                                                                                                                              t = t_102(t);
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        t = t_102(t);
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
ATerm Sep_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
  x_102 = t;
  w_102 :
  if(match_cons(x_102, sym_Cons_2))
    {
      y_102 = ATgetArgument(x_102, 0);
      z_102 = ATgetArgument(x_102, 1);
      {
        ATerm c_103 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = j_76(t);
        c_103 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_103), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_102), not_null(z_102)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm b_20 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_20;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm c_20 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_20;
              t = Cons_2(t, _id, a_4);
              t = Sep_1(t, k_76);
            }
          return(t);
        }
        t = Cons_2(t, _id, a_4);
      }
    }
  return(t);
}
ATerm Lit2Str_0 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym_lit_1))
    {
      k_103 = ATgetArgument(j_103, 0);
      t = not_null(k_103);
      {
        ATerm b_4 (ATerm t)
        {
          t = de_quote_0(t);
          t = de_escape_0(t);
          return(t);
        }
        t = try_1(t, b_4);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Singleton_0 (ATerm t)
{
  ATerm o_103 = NULL;
  o_103 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_103), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm list_ana_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm h_104 (ATerm t)
  {
    ATerm d_20 = t;
    if(PushChoice()==0)
      {
        t = y_60(t);
        t = Singleton_0(t);
        PopChoice();
      }
    else
      {
        t = d_20;
        {
          ATerm e_20 = t;
          if(PushChoice()==0)
            {
              ATerm x_103 = NULL;
              ATerm z_103 = NULL;
              x_103 = t;
              {
                ATerm a_104 = NULL;
                ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
                t = not_null(x_103);
                a_104 = t;
                t = SSL_explode_term(not_null(a_104));
                c_104 = t;
                u_103 :
                if(match_cons(c_104, sym_TCons_2))
                  {
                    d_104 = ATgetArgument(c_104, 0);
                    e_104 = ATgetArgument(c_104, 1);
                    v_103 :
                    if(match_cons(e_104, sym_TCons_2))
                      {
                        f_104 = ATgetArgument(e_104, 0);
                        g_104 = ATgetArgument(e_104, 1);
                        w_103 :
                        if(match_cons(g_104, sym_TNil_0))
                          {
                            if(z_103 != NULL && z_103 != f_104)
                              _fail(f_104);
                            else
                              z_103 = f_104;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                t = not_null(z_103);
                t = filter_1(t, h_104);
                t = concat_0(t);
              }
              PopChoice();
            }
          else
            {
              t = e_20;
              t = (ATerm) ATmakeAppl(sym_Nil_0);
            }
        }
      }
    return(t);
  }
  t = h_104(t);
  return(t);
}
ATerm lit2str_0 (ATerm t)
{
  t = list_ana_1(t, Lit2Str_0);
  {
    ATerm c_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
      return(t);
    }
    t = separate_by_1(t, c_4);
    t = concat_strings_0(t);
    {
      ATerm f_20 = t;
      if(PushChoice()==0)
        {
          t = toAlphaNum_0(t);
          PopChoice();
        }
      else
        t = f_20;
    }
  }
  return(t);
}
ATerm lits2strs_0 (ATerm t)
{
  t = filter_1(t, lit2str_0);
  return(t);
}
ATerm mk_constr_0 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL;
  ATerm d_106 (ATerm t)
  {
    ATerm o_105 = NULL;
    ATerm g_20 = t;
    if(PushChoice()==0)
      {
        ATerm p_105 = NULL;
        t = not_null(d_105);
        t = lits2strs_0(t);
        t = strs2constr_0(t);
        p_105 = t;
        if(o_105 != NULL && o_105 != p_105)
          _fail(p_105);
        else
          o_105 = p_105;
        PopChoice();
      }
    else
      {
        t = g_20;
        {
          ATerm h_20 = t;
          if(PushChoice()==0)
            {
              ATerm q_105 = NULL;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_105), (ATerm) ATmakeAppl(sym_Nil_0));
              {
                ATerm s_105 = NULL;
                t = syms2strs_0(t);
                q_105 = t;
                t = not_null(d_105);
                t = lits2strs_0(t);
                {
                  ATerm u_105 = NULL;
                  t = empty_test_0(t);
                  s_105 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_105), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_105), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = conc_0(t);
                  t = strs2constr_0(t);
                  u_105 = t;
                  if(o_105 != NULL && o_105 != u_105)
                    _fail(u_105);
                  else
                    o_105 = u_105;
                }
              }
              PopChoice();
            }
          else
            {
              t = h_20;
              {
                ATerm i_20 = t;
                if(PushChoice()==0)
                  {
                    ATerm v_105 = NULL;
                    t = not_null(d_105);
                    t = syms2strs_0(t);
                    t = strs2constr_0(t);
                    v_105 = t;
                    if(o_105 != NULL && o_105 != v_105)
                      _fail(v_105);
                    else
                      o_105 = v_105;
                    PopChoice();
                  }
                else
                  {
                    t = i_20;
                    {
                      ATerm w_105 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_105), (ATerm) ATmakeAppl(sym_Nil_0));
                      {
                        ATerm y_105 = NULL;
                        t = syms2strs_0(t);
                        w_105 = t;
                        t = (ATerm) ATmakeAppl(sym_TNil_0);
                        {
                          ATerm a_106 = NULL;
                          t = new_0(t);
                          y_105 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_105), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_105), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          t = strs2constr_0(t);
                          a_106 = t;
                          if(o_105 != NULL && o_105 != a_106)
                            _fail(a_106);
                          else
                            o_105 = a_106;
                        }
                      }
                    }
                  }
              }
            }
        }
      }
    t = not_null(o_105);
    return(t);
  }
  ATerm e_106 (ATerm t)
  {
    t = not_null(d_105);
    t = normalize_constr_0(t);
    return(t);
  }
  c_105 = t;
  a_105 :
  if(match_cons(c_105, sym_prod_3))
    {
      d_105 = ATgetArgument(c_105, 0);
      e_105 = ATgetArgument(c_105, 1);
      f_105 = ATgetArgument(c_105, 2);
      b_105 :
      if(match_cons(d_105, sym_Nil_0))
        {
          ATerm j_20 = t;
          if(PushChoice()==0)
            {
              ATerm i_105 = NULL;
              ATerm j_105 = NULL;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_105), (ATerm) ATmakeAppl(sym_Nil_0));
              {
                ATerm l_105 = NULL;
                t = syms2strs_0(t);
                j_105 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_105), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = strs2constr_0(t);
                l_105 = t;
                if(i_105 != NULL && i_105 != l_105)
                  _fail(l_105);
                else
                  i_105 = l_105;
              }
              t = not_null(i_105);
              PopChoice();
            }
          else
            {
              t = j_20;
              t = d_106(t);
            }
        }
      else
        t = d_106(t);
    }
  else
    {
      if(match_cons(c_105, sym_prod_fun_4))
        {
          d_105 = ATgetArgument(c_105, 0);
          e_105 = ATgetArgument(c_105, 1);
          f_105 = ATgetArgument(c_105, 2);
          g_105 = ATgetArgument(c_105, 3);
          t = e_106(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
  x_106 = t;
  v_106 :
  if(match_cons(x_106, sym_iter_star_sep_2))
    {
      y_106 = ATgetArgument(x_106, 0);
      z_106 = ATgetArgument(x_106, 1);
      {
        ATerm k_20 = t;
        if(PushChoice()==0)
          {
            ATerm c_107 = NULL;
            t = not_null(y_106);
            {
              ATerm e_107 = NULL;
              t = j_0(t);
              c_107 = t;
              t = not_null(z_106);
              t = k_0(t);
              e_107 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(c_107), not_null(e_107));
            }
            PopChoice();
          }
        else
          {
            t = k_20;
            {
              ATerm j_107 = NULL;
              t = not_null(y_106);
              {
                ATerm l_107 = NULL;
                t = j_0(t);
                j_107 = t;
                t = not_null(z_106);
                t = k_0(t);
                l_107 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(j_107), not_null(l_107));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_108 = NULL,c_108 = NULL,e_108 = NULL;
  b_108 = t;
  a_108 :
  if(match_cons(b_108, sym_iter_sep_2))
    {
      c_108 = ATgetArgument(b_108, 0);
      e_108 = ATgetArgument(b_108, 1);
      {
        ATerm l_20 = t;
        if(PushChoice()==0)
          {
            ATerm h_108 = NULL;
            t = not_null(c_108);
            {
              ATerm j_108 = NULL;
              t = h_0(t);
              h_108 = t;
              t = not_null(e_108);
              t = i_0(t);
              j_108 = t;
              t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(h_108), not_null(j_108));
            }
            PopChoice();
          }
        else
          {
            t = l_20;
            {
              ATerm n_108 = NULL;
              t = not_null(c_108);
              {
                ATerm p_108 = NULL;
                t = h_0(t);
                n_108 = t;
                t = not_null(e_108);
                t = i_0(t);
                p_108 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(n_108), not_null(p_108));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm e_109 = NULL,f_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_iter_star_1))
    {
      f_109 = ATgetArgument(e_109, 0);
      {
        ATerm m_20 = t;
        if(PushChoice()==0)
          {
            ATerm h_109 = NULL;
            t = not_null(f_109);
            t = g_0(t);
            h_109 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(h_109));
            PopChoice();
          }
        else
          {
            t = m_20;
            {
              ATerm k_109 = NULL;
              t = not_null(f_109);
              t = g_0(t);
              k_109 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(k_109));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm v_109 = NULL,w_109 = NULL;
  v_109 = t;
  u_109 :
  if(match_cons(v_109, sym_iter_1))
    {
      w_109 = ATgetArgument(v_109, 0);
      {
        ATerm n_20 = t;
        if(PushChoice()==0)
          {
            ATerm y_109 = NULL;
            t = not_null(w_109);
            t = f_0(t);
            y_109 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, not_null(y_109));
            PopChoice();
          }
        else
          {
            t = n_20;
            {
              ATerm b_110 = NULL;
              t = not_null(w_109);
              t = f_0(t);
              b_110 = t;
              t = (ATerm) ATmakeAppl(sym_iter_1, not_null(b_110));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm alt_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL;
  o_110 = t;
  n_110 :
  if(match_cons(o_110, sym_alt_2))
    {
      p_110 = ATgetArgument(o_110, 0);
      q_110 = ATgetArgument(o_110, 1);
      {
        ATerm o_20 = t;
        if(PushChoice()==0)
          {
            ATerm t_110 = NULL;
            t = not_null(p_110);
            {
              ATerm v_110 = NULL;
              t = d_0(t);
              t_110 = t;
              t = not_null(q_110);
              t = e_0(t);
              v_110 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, not_null(t_110), not_null(v_110));
            }
            PopChoice();
          }
        else
          {
            t = o_20;
            {
              ATerm z_110 = NULL;
              t = not_null(p_110);
              {
                ATerm b_111 = NULL;
                t = d_0(t);
                z_110 = t;
                t = not_null(q_110);
                t = e_0(t);
                b_111 = t;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(z_110), not_null(b_111));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm syntaxless_sort_0 (ATerm t)
{
  ATerm p_20 = t;
  if(PushChoice()==0)
    {
      t = sort_1(t, _id);
      PopChoice();
    }
  else
    {
      t = p_20;
      {
        ATerm q_20 = t;
        if(PushChoice()==0)
          {
            t = alt_2(t, syntaxless_sort_0, syntaxless_sort_0);
            PopChoice();
          }
        else
          {
            t = q_20;
            {
              ATerm r_20 = t;
              if(PushChoice()==0)
                {
                  t = opt_1(t, syntaxless_sort_0);
                  PopChoice();
                }
              else
                {
                  t = r_20;
                  {
                    ATerm s_20 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_1(t, syntaxless_sort_0);
                        PopChoice();
                      }
                    else
                      {
                        t = s_20;
                        {
                          ATerm t_20 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_star_1(t, syntaxless_sort_0);
                              PopChoice();
                            }
                          else
                            {
                              t = t_20;
                              {
                                ATerm u_20 = t;
                                if(PushChoice()==0)
                                  {
                                    t = iter_sep_2(t, syntaxless_sort_0, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_20;
                                    t = iter_star_sep_2(t, syntaxless_sort_0, _id);
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
ATerm is_injection_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = Cons_2(t, syntaxless_sort_0, Nil_0);
    return(t);
  }
  t = prod_3(t, d_4, _id, _id);
  {
    ATerm e_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Injections_0);
      return(t);
    }
    t = has_option_1(t, e_4);
  }
  return(t);
}
ATerm is_reject_0 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL;
  p_111 = t;
  o_111 :
  if(match_cons(p_111, sym_prod_3))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      s_111 = ATgetArgument(p_111, 2);
      t = not_null(s_111);
      {
        ATerm f_4 (ATerm t)
        {
          ATerm x_111 = NULL;
          x_111 = t;
          m_111 :
          if(!(match_cons(x_111, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, f_4);
      }
      t = (ATerm) ATmakeAppl(sym_TNil_0);
    }
  else
    {
      if(match_cons(p_111, sym_prod_fun_4))
        {
          q_111 = ATgetArgument(p_111, 0);
          r_111 = ATgetArgument(p_111, 1);
          s_111 = ATgetArgument(p_111, 2);
          t_111 = ATgetArgument(p_111, 3);
          t = not_null(t_111);
          {
            ATerm n_4 (ATerm t)
            {
              ATerm c_112 = NULL;
              c_112 = t;
              n_111 :
              if(!(match_cons(c_112, sym_reject_0)))
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, n_4);
          }
          t = (ATerm) ATmakeAppl(sym_TNil_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm is_bracket_0 (ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL;
  k_112 = t;
  j_112 :
  if(match_cons(k_112, sym_prod_3))
    {
      l_112 = ATgetArgument(k_112, 0);
      m_112 = ATgetArgument(k_112, 1);
      n_112 = ATgetArgument(k_112, 2);
      t = not_null(n_112);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm s_112 = NULL;
          s_112 = t;
          h_112 :
          if(!(match_cons(s_112, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, o_4);
      }
      t = (ATerm) ATmakeAppl(sym_TNil_0);
    }
  else
    {
      if(match_cons(k_112, sym_prod_fun_4))
        {
          l_112 = ATgetArgument(k_112, 0);
          m_112 = ATgetArgument(k_112, 1);
          n_112 = ATgetArgument(k_112, 2);
          o_112 = ATgetArgument(k_112, 3);
          t = not_null(o_112);
          {
            ATerm p_4 (ATerm t)
            {
              ATerm x_112 = NULL;
              x_112 = t;
              i_112 :
              if(!(match_cons(x_112, sym_bracket_0)))
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, p_4);
          }
          t = (ATerm) ATmakeAppl(sym_TNil_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm get_constr_0 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  h_113 = t;
  g_113 :
  if(match_cons(h_113, sym_prod_3))
    {
      i_113 = ATgetArgument(h_113, 0);
      j_113 = ATgetArgument(h_113, 1);
      k_113 = ATgetArgument(h_113, 2);
      {
        ATerm p_113 = NULL;
        t = not_null(k_113);
        {
          ATerm r_4 (ATerm t)
          {
            ATerm q_113 = NULL,r_113 = NULL;
            q_113 = t;
            d_113 :
            if(match_cons(q_113, sym_cons_1))
              {
                r_113 = ATgetArgument(q_113, 0);
                if(p_113 != NULL && p_113 != r_113)
                  _fail(r_113);
                else
                  p_113 = r_113;
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, r_4);
        }
        t = not_null(p_113);
      }
    }
  else
    {
      if(match_cons(h_113, sym_prod_fun_4))
        {
          i_113 = ATgetArgument(h_113, 0);
          j_113 = ATgetArgument(h_113, 1);
          k_113 = ATgetArgument(h_113, 2);
          l_113 = ATgetArgument(h_113, 3);
          {
            ATerm x_113 = NULL;
            t = not_null(l_113);
            {
              ATerm s_4 (ATerm t)
              {
                ATerm y_113 = NULL,z_113 = NULL;
                y_113 = t;
                f_113 :
                if(match_cons(y_113, sym_cons_1))
                  {
                    z_113 = ATgetArgument(y_113, 0);
                    if(x_113 != NULL && x_113 != z_113)
                      _fail(z_113);
                    else
                      x_113 = z_113;
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, s_4);
            }
            t = not_null(x_113);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm f_114 = NULL;
  f_114 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_114), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
  t = concat_0(t);
  return(t);
}
ATerm uq2q_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm v_20;
    v_20 = t;
    {
      ATerm w_20 = t;
      if(PushChoice()==0)
        {
          ATerm n_114 = NULL;
          t = Hd_0(t);
          n_114 = t;
          j_114 :
          if(!(match_int(n_114, 34)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = w_20;
    }
    t = v_20;
    {
      ATerm x_20;
      x_20 = t;
      {
        ATerm y_20 = t;
        if(PushChoice()==0)
          {
            ATerm t_4 (ATerm t)
            {
              ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
              o_114 = t;
              k_114 :
              if(match_cons(o_114, sym_Cons_2))
                {
                  p_114 = ATgetArgument(o_114, 0);
                  q_114 = ATgetArgument(o_114, 1);
                  l_114 :
                  if(match_int(p_114, 34))
                    {
                      m_114 :
                      if(!(match_cons(q_114, sym_Nil_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              return(t);
            }
            t = at_last_1(t, t_4);
            PopChoice();
            _fail(t);
          }
        else
          t = y_20;
      }
      t = x_20;
      t = Quote_0(t);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm cons_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm w_114 = NULL,x_114 = NULL;
  w_114 = t;
  v_114 :
  if(match_cons(w_114, sym_cons_1))
    {
      x_114 = ATgetArgument(w_114, 0);
      {
        ATerm z_20 = t;
        if(PushChoice()==0)
          {
            ATerm z_114 = NULL;
            t = not_null(x_114);
            t = c_0(t);
            z_114 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, not_null(z_114));
            PopChoice();
          }
        else
          {
            t = z_20;
            {
              ATerm c_115 = NULL;
              t = not_null(x_114);
              t = c_0(t);
              c_115 = t;
              t = (ATerm) ATmakeAppl(sym_cons_1, not_null(c_115));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm at_cons_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = cons_1(t, c_61);
    return(t);
  }
  t = oncetd_1(t, u_4);
  return(t);
}
ATerm prodcons_0 (ATerm t)
{
  ATerm m_115 = NULL;
  m_115 = t;
  {
    ATerm h_22 = t;
    if(PushChoice()==0)
      {
        ATerm o_115 = NULL;
        ATerm p_115 = NULL;
        t = not_null(m_115);
        t = get_constr_0(t);
        p_115 = t;
        if(o_115 != NULL && o_115 != p_115)
          _fail(p_115);
        else
          o_115 = p_115;
        t = not_null(m_115);
        {
          ATerm v_4 (ATerm t)
          {
            t = not_null(o_115);
            t = uq2q_0(t);
            return(t);
          }
          t = at_cons_1(t, v_4);
        }
        PopChoice();
      }
    else
      {
        t = h_22;
        {
          ATerm r_115 = NULL;
          t = not_null(m_115);
          {
            ATerm i_22 = t;
            if(PushChoice()==0)
              {
                ATerm w_22 = t;
                if(PushChoice()==0)
                  {
                    t = get_constr_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = w_22;
                    {
                      ATerm x_22 = t;
                      if(PushChoice()==0)
                        {
                          t = is_bracket_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = x_22;
                          {
                            ATerm y_22 = t;
                            if(PushChoice()==0)
                              {
                                t = is_reject_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = y_22;
                                t = is_injection_0(t);
                              }
                          }
                        }
                    }
                  }
                PopChoice();
                _fail(t);
              }
            else
              t = i_22;
          }
          t = not_null(m_115);
          t = mk_constr_0(t);
          r_115 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_115), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_cons_1, not_null(r_115)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = add_attributes_0(t);
        }
      }
  }
  return(t);
}
ATerm sort_1 (ATerm t, ATerm b_0 (ATerm))
{
  ATerm c_116 = NULL,d_116 = NULL;
  c_116 = t;
  b_116 :
  if(match_cons(c_116, sym_sort_1))
    {
      d_116 = ATgetArgument(c_116, 0);
      {
        ATerm a_23 = t;
        if(PushChoice()==0)
          {
            ATerm f_116 = NULL;
            t = not_null(d_116);
            t = b_0(t);
            f_116 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, not_null(f_116));
            PopChoice();
          }
        else
          {
            t = a_23;
            {
              ATerm i_116 = NULL;
              t = not_null(d_116);
              t = b_0(t);
              i_116 = t;
              t = (ATerm) ATmakeAppl(sym_sort_1, not_null(i_116));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm get_templ_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL;
  x_116 = t;
  v_116 :
  if(match_cons(x_116, sym_appl_2))
    {
      y_116 = ATgetArgument(x_116, 0);
      c_117 = ATgetArgument(x_116, 1);
      w_116 :
      if(match_cons(y_116, sym_prod_3))
        {
          z_116 = ATgetArgument(y_116, 0);
          a_117 = ATgetArgument(y_116, 1);
          b_117 = ATgetArgument(y_116, 2);
          {
            ATerm h_117 = NULL,i_117 = NULL;
            ATerm o_117 = NULL;
            ATerm b_23 = t;
            if(PushChoice()==0)
              {
                t = not_null(b_117);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm j_117 = NULL,k_117 = NULL;
                    j_117 = t;
                    q_116 :
                    if(match_cons(j_117, sym_cons_1))
                      {
                        k_117 = ATgetArgument(j_117, 0);
                        if(h_117 != NULL && h_117 != k_117)
                          _fail(k_117);
                        else
                          h_117 = k_117;
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1(t, a_5);
                }
                PopChoice();
              }
            else
              {
                t = b_23;
                {
                  ATerm d_23 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(a_117);
                      t = sort_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_prod_3, not_null(z_116), not_null(a_117), not_null(b_117));
                      t = prodcons_0(t);
                      {
                        ATerm b_5 (ATerm t)
                        {
                          ATerm d_5 (ATerm t)
                          {
                            ATerm l_117 = NULL,m_117 = NULL;
                            l_117 = t;
                            s_116 :
                            if(match_cons(l_117, sym_cons_1))
                              {
                                m_117 = ATgetArgument(l_117, 0);
                                if(h_117 != NULL && h_117 != m_117)
                                  _fail(m_117);
                                else
                                  h_117 = m_117;
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = oncetd_1(t, d_5);
                          return(t);
                        }
                        t = prod_3(t, _id, _id, b_5);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = d_23;
                      {
                        ATerm n_117 = NULL;
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
                        n_117 = t;
                        if(h_117 != NULL && h_117 != n_117)
                          _fail(n_117);
                        else
                          h_117 = n_117;
                      }
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(z_116), not_null(a_117), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_cons_1, not_null(h_117)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_117), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = get_pp_entry_0(t);
            o_117 = t;
            if(i_117 != NULL && i_117 != o_117)
              _fail(o_117);
            else
              i_117 = o_117;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_117), (ATerm) ATmakeAppl(sym_TNil_0)));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm appl2abox_0 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL;
  g_118 = t;
  e_118 :
  if(match_cons(g_118, sym_appl_2))
    {
      h_118 = ATgetArgument(g_118, 0);
      l_118 = ATgetArgument(g_118, 1);
      f_118 :
      if(match_cons(h_118, sym_prod_3))
        {
          i_118 = ATgetArgument(h_118, 0);
          j_118 = ATgetArgument(h_118, 1);
          k_118 = ATgetArgument(h_118, 2);
          {
            ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
            ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL;
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(i_118), not_null(j_118), not_null(k_118)), not_null(l_118));
            t = get_templ_0(t);
            u_118 = t;
            b_118 :
            if(match_cons(u_118, sym_TCons_2))
              {
                v_118 = ATgetArgument(u_118, 0);
                w_118 = ATgetArgument(u_118, 1);
                c_118 :
                if(match_cons(w_118, sym_TCons_2))
                  {
                    x_118 = ATgetArgument(w_118, 0);
                    y_118 = ATgetArgument(w_118, 1);
                    d_118 :
                    if(match_cons(y_118, sym_TNil_0))
                      {
                        ATerm z_118 = NULL;
                        if(q_118 != NULL && q_118 != v_118)
                          _fail(v_118);
                        else
                          q_118 = v_118;
                        if(r_118 != NULL && r_118 != x_118)
                          _fail(x_118);
                        else
                          r_118 = x_118;
                        t = not_null(i_118);
                        {
                          ATerm b_119 = NULL;
                          ATerm e_5 (ATerm t)
                          {
                            ATerm e_23 = t;
                            if(PushChoice()==0)
                              {
                                t = lit_1(t, _id);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = e_23;
                            return(t);
                          }
                          t = filter_1(t, e_5);
                          z_118 = t;
                          t = not_null(l_118);
                          {
                            ATerm d_119 = NULL;
                            ATerm f_5 (ATerm t)
                            {
                              ATerm f_23 = t;
                              if(PushChoice()==0)
                                {
                                  t = lit_1(t, _id);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = f_23;
                              return(t);
                            }
                            t = filter_1(t, f_5);
                            b_119 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_119), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_118), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                            {
                              ATerm e_119 = NULL;
                              t = seq2abox_0(t);
                              d_119 = t;
                              if(s_118 != NULL && s_118 != d_119)
                                _fail(d_119);
                              else
                                s_118 = d_119;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_118), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = instantiate_0(t);
                              e_119 = t;
                              if(t_118 != NULL && t_118 != e_119)
                                _fail(e_119);
                              else
                                t_118 = e_119;
                            }
                          }
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(t_118);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm n_119 = NULL;
  n_119 = t;
  m_119 :
  if(!(match_cons(n_119, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm opt_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm t_119 = NULL,u_119 = NULL;
  t_119 = t;
  s_119 :
  if(match_cons(t_119, sym_opt_1))
    {
      u_119 = ATgetArgument(t_119, 0);
      {
        ATerm g_23 = t;
        if(PushChoice()==0)
          {
            ATerm w_119 = NULL;
            t = not_null(u_119);
            t = a_0(t);
            w_119 = t;
            t = (ATerm) ATmakeAppl(sym_opt_1, not_null(w_119));
            PopChoice();
          }
        else
          {
            t = g_23;
            {
              ATerm z_119 = NULL;
              t = not_null(u_119);
              t = a_0(t);
              z_119 = t;
              t = (ATerm) ATmakeAppl(sym_opt_1, not_null(z_119));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm f_120 (ATerm t)
  {
    ATerm h_23 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_23;
        {
          ATerm i_23 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, d_69, f_120);
              PopChoice();
            }
          else
            {
              t = i_23;
              t = Tl_0(t);
              t = f_120(t);
            }
        }
      }
    return(t);
  }
  t = f_120(t);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_23 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_23;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm h_120 (ATerm t)
  {
    t = n_77(t);
    t = _all(t, h_120);
    return(t);
  }
  t = h_120(t);
  return(t);
}
ATerm sometd_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm i_120 (ATerm t)
  {
    ATerm k_23 = t;
    if(PushChoice()==0)
      {
        t = k_79(t);
        PopChoice();
      }
    else
      {
        t = k_23;
        t = _some(t, i_120);
      }
    return(t);
  }
  t = i_120(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm o_80 (ATerm), ATerm p_80 (ATerm))
{
  ATerm j_120 (ATerm t)
  {
    ATerm l_23 = t;
    if(PushChoice()==0)
      {
        t = o_80(t);
        t = j_120(t);
        PopChoice();
      }
    else
      {
        t = l_23;
        t = p_80(t);
      }
    return(t);
  }
  t = j_120(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_80 (ATerm))
{
  t = repeat_2(t, r_80, _id);
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm k_120 (ATerm t)
  {
    ATerm m_23 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, k_120);
        PopChoice();
      }
    else
      {
        t = m_23;
        t = Nil_0(t);
        t = m_75(t);
      }
    return(t);
  }
  t = k_120(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_23 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_23;
      {
        ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL;
        n_120 = t;
        m_120 :
        if(match_cons(n_120, sym_Cons_2))
          {
            o_120 = ATgetArgument(n_120, 0);
            p_120 = ATgetArgument(n_120, 1);
            t = not_null(o_120);
            {
              ATerm g_5 (ATerm t)
              {
                t = not_null(p_120);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, g_5);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_120 = NULL;
  v_120 = t;
  t = SSL_int_to_string(not_null(v_120));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL;
  f_121 = t;
  e_121 :
  if(match_cons(f_121, sym_Path1_1))
    {
      g_121 = ATgetArgument(f_121, 0);
      t = not_null(g_121);
    }
  else
    {
      if(match_cons(f_121, sym_Path_2))
        {
          g_121 = ATgetArgument(f_121, 0);
          h_121 = ATgetArgument(f_121, 1);
          {
            ATerm p_121 = NULL,y_121 = NULL;
            t = not_null(h_121);
            {
              ATerm h_5 (ATerm t)
              {
                ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
                q_121 = t;
                c_121 :
                if(match_cons(q_121, sym_selector_2))
                  {
                    r_121 = ATgetArgument(q_121, 0);
                    s_121 = ATgetArgument(q_121, 1);
                    {
                      ATerm v_121 = NULL;
                      t = not_null(r_121);
                      t = int_to_string_0(t);
                      v_121 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_121), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_121), (ATerm) ATmakeAppl(sym_Nil_0)))));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, h_5);
              t = concat_0(t);
              y_121 = t;
              if(p_121 != NULL && p_121 != y_121)
                _fail(y_121);
              else
                p_121 = y_121;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_121), not_null(p_121));
              t = concat_strings_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL;
  l_122 = t;
  k_122 :
  if(match_cons(l_122, sym_Path1_1))
    {
      m_122 = ATgetArgument(l_122, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_122), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(l_122, sym_Path_2))
        {
          m_122 = ATgetArgument(l_122, 0);
          n_122 = ATgetArgument(l_122, 1);
          {
            ATerm w_122 = NULL,e_123 = NULL;
            t = not_null(n_122);
            {
              ATerm l_5 (ATerm t)
              {
                ATerm x_122 = NULL,y_122 = NULL,z_122 = NULL;
                x_122 = t;
                i_122 :
                if(match_cons(x_122, sym_selector_2))
                  {
                    y_122 = ATgetArgument(x_122, 0);
                    z_122 = ATgetArgument(x_122, 1);
                    t = not_null(y_122);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, l_5);
              e_123 = t;
              if(w_122 != NULL && w_122 != e_123)
                _fail(e_123);
              else
                w_122 = e_123;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_122), not_null(w_122));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm StoreEntry_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL;
  m_123 = t;
  l_123 :
  if(match_cons(m_123, sym_PP_Entry_2))
    {
      n_123 = ATgetArgument(m_123, 0);
      o_123 = ATgetArgument(m_123, 1);
      {
        ATerm r_123 = NULL;
        t = not_null(n_123);
        t = mk_key_0(t);
        r_123 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_123), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(n_123), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_123), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = table_put_0(t);
        t = not_null(n_123);
        t = path_to_string_0(t);
        {
          ATerm n_5 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
            return(t);
          }
          t = notify_1(t, n_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_123 = NULL;
  w_123 = t;
  t = SSL_string_to_int(not_null(w_123));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm n_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL;
  ATerm g_125 (ATerm t)
  {
    ATerm b_125 = NULL;
    t = not_null(r_124);
    t = De_Escape_0(t);
    b_125 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_124), not_null(b_125));
    return(t);
  }
  ATerm h_125 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  s_124 = t;
  g_124 :
  if(match_cons(s_124, sym_Cons_2))
    {
      q_124 = ATgetArgument(s_124, 0);
      r_124 = ATgetArgument(s_124, 1);
      h_124 :
      if(match_cons(r_124, sym_Cons_2))
        {
          n_124 = ATgetArgument(r_124, 0);
          p_124 = ATgetArgument(r_124, 1);
          i_124 :
          if(match_int(n_124, 34))
            {
              j_124 :
              if(match_int(q_124, 92))
                {
                  ATerm o_23 = t;
                  if(PushChoice()==0)
                    {
                      ATerm u_124 = NULL;
                      t = not_null(p_124);
                      t = De_Escape_0(t);
                      u_124 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(u_124));
                      PopChoice();
                    }
                  else
                    {
                      t = o_23;
                      t = g_125(t);
                    }
                }
              else
                t = g_125(t);
            }
          else
            {
              if(match_int(n_124, 92))
                {
                  k_124 :
                  if(match_int(q_124, 92))
                    {
                      ATerm p_23 = t;
                      if(PushChoice()==0)
                        {
                          ATerm x_124 = NULL;
                          t = not_null(p_124);
                          t = De_Escape_0(t);
                          x_124 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(x_124));
                          PopChoice();
                        }
                      else
                        {
                          t = p_23;
                          t = g_125(t);
                        }
                    }
                  else
                    t = g_125(t);
                }
              else
                {
                  l_124 :
                  t = g_125(t);
                }
            }
        }
      else
        {
          m_124 :
          t = g_125(t);
        }
    }
  else
    {
      if(match_cons(s_124, sym_Nil_0))
        t = h_125(t);
      else
        _fail(t);
    }
  return(t);
}
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  t = De_Escape_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_125 = NULL;
  m_125 = t;
  t = SSL_implode_string(not_null(m_125));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm p_125 (ATerm t)
  {
    ATerm q_23 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = w_75(t);
        PopChoice();
      }
    else
      {
        t = q_23;
        t = Cons_2(t, _id, p_125);
      }
    return(t);
  }
  t = p_125(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_125 = NULL,u_125 = NULL,v_125 = NULL;
  s_125 = t;
  r_125 :
  if(match_cons(s_125, sym_Cons_2))
    {
      u_125 = ATgetArgument(s_125, 0);
      v_125 = ATgetArgument(s_125, 1);
      t = not_null(v_125);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
  b_126 = t;
  a_126 :
  if(match_cons(b_126, sym_Cons_2))
    {
      c_126 = ATgetArgument(b_126, 0);
      d_126 = ATgetArgument(b_126, 1);
      t = not_null(c_126);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_126 = NULL;
  i_126 = t;
  t = SSL_explode_string(not_null(i_126));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_23;
    r_23 = t;
    {
      ATerm q_126 = NULL;
      t = Hd_0(t);
      q_126 = t;
      l_126 :
      if(!(match_int(q_126, 34)))
        _fail(t);
    }
    t = r_23;
    t = Tl_0(t);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
        r_126 = t;
        n_126 :
        if(match_cons(r_126, sym_Cons_2))
          {
            s_126 = ATgetArgument(r_126, 0);
            t_126 = ATgetArgument(r_126, 1);
            o_126 :
            if(match_int(s_126, 34))
              {
                p_126 :
                if(match_cons(t_126, sym_Nil_0))
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_last_1(t, o_5);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  g_127 = t;
  f_127 :
  if(match_cons(g_127, sym_Arg_1))
    {
      h_127 = ATgetArgument(g_127, 0);
      {
        ATerm m_127 = NULL;
        t = not_null(h_127);
        t = string_to_int_0(t);
        m_127 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_127));
      }
    }
  else
    {
      if(match_cons(g_127, sym_Arg2_2))
        {
          h_127 = ATgetArgument(g_127, 0);
          i_127 = ATgetArgument(g_127, 1);
          {
            ATerm r_127 = NULL;
            t = not_null(h_127);
            {
              ATerm t_127 = NULL;
              t = string_to_int_0(t);
              r_127 = t;
              t = not_null(i_127);
              t = string_to_int_0(t);
              t_127 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(r_127), not_null(t_127));
            }
          }
        }
      else
        {
          if(match_cons(g_127, sym_SOpt_2))
            {
              h_127 = ATgetArgument(g_127, 0);
              i_127 = ATgetArgument(g_127, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(h_127), not_null(i_127));
            }
          else
            {
              if(match_cons(g_127, sym_S_1))
                {
                  h_127 = ATgetArgument(g_127, 0);
                  {
                    ATerm b_128 = NULL;
                    t = not_null(h_127);
                    t = de_quote_0(t);
                    t = de_escape_0(t);
                    b_128 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(b_128));
                  }
                }
              else
                {
                  if(match_cons(g_127, sym_selector_2))
                    {
                      h_127 = ATgetArgument(g_127, 0);
                      i_127 = ATgetArgument(g_127, 1);
                      {
                        ATerm h_128 = NULL;
                        t = not_null(h_127);
                        t = string_to_int_0(t);
                        h_128 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(h_128), not_null(i_127));
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, p_5);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL;
  w_128 = t;
  v_128 :
  if(match_cons(w_128, sym_PP_Table_1))
    {
      x_128 = ATgetArgument(w_128, 0);
      t = not_null(x_128);
      t = reverse_0(t);
      {
        ATerm q_5 (ATerm t)
        {
          t = makePPEntry_0(t);
          t = StoreEntry_0(t);
          return(t);
        }
        t = map_1(t, q_5);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm s_23;
  s_23 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      ATerm c_129 = NULL;
      ATerm e_129 = NULL;
      c_129 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = s_66(t);
      e_129 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_129), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_129), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, b_6, c_6);
    t = printnl_0(t);
  }
  t = s_23;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm i_129 (ATerm t)
  {
    ATerm t_23 = t;
    if(PushChoice()==0)
      {
        t = d_79(t);
        PopChoice();
      }
    else
      {
        t = t_23;
        t = _one(t, i_129);
      }
    return(t);
  }
  t = i_129(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,s_129 = NULL;
  o_129 = t;
  l_129 :
  if(match_cons(o_129, sym_TCons_2))
    {
      p_129 = ATgetArgument(o_129, 0);
      q_129 = ATgetArgument(o_129, 1);
      m_129 :
      if(match_cons(q_129, sym_TCons_2))
        {
          r_129 = ATgetArgument(q_129, 0);
          s_129 = ATgetArgument(q_129, 1);
          n_129 :
          if(match_cons(s_129, sym_TNil_0))
            {
              t = not_null(r_129);
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm v_129 = NULL;
                  v_129 = t;
                  if(p_129 != NULL && p_129 != v_129)
                    _fail(v_129);
                  else
                    p_129 = v_129;
                  return(t);
                }
                t = oncetd_1(t, d_6);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL;
  d_130 = t;
  a_130 :
  if(match_cons(d_130, sym_TCons_2))
    {
      e_130 = ATgetArgument(d_130, 0);
      f_130 = ATgetArgument(d_130, 1);
      b_130 :
      if(match_cons(f_130, sym_TCons_2))
        {
          g_130 = ATgetArgument(f_130, 0);
          h_130 = ATgetArgument(f_130, 1);
          c_130 :
          if(match_cons(h_130, sym_TNil_0))
            t = SSL_table_get(not_null(e_130), not_null(g_130));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm o_130 = NULL;
  ATerm q_130 = NULL;
  o_130 = t;
  {
    ATerm r_130 = NULL;
    t = get_options_0(t);
    r_130 = t;
    if(q_130 != NULL && q_130 != r_130)
      _fail(r_130);
    else
      q_130 = r_130;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_130), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_130), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm u_23;
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = e_66(t);
  t = check_option_0(t);
  t = u_23;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm v_23;
    v_23 = t;
    {
      ATerm w_23;
      w_23 = t;
      {
        ATerm i_6 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = has_option_1(t, i_6);
      }
      t = w_23;
      t = debug_1(t, r_61);
    }
    t = v_23;
    return(t);
  }
  t = try_1(t, e_6);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm v_130 (ATerm t)
  {
    ATerm x_23 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = x_23;
        t = Cons_2(t, x_74, v_130);
      }
    return(t);
  }
  t = v_130(t);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm x_130 = NULL;
  x_130 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  t = table_create_0(t);
  t = not_null(x_130);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
        return(t);
      }
      t = notify_1(t, k_6);
      t = ReadFromFile_0(t);
      t = build_pp_table_0(t);
      return(t);
    }
    t = map_1(t, j_6);
  }
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL;
  g_131 = t;
  c_131 :
  if(match_cons(g_131, sym_TCons_2))
    {
      h_131 = ATgetArgument(g_131, 0);
      i_131 = ATgetArgument(g_131, 1);
      d_131 :
      if(match_cons(h_131, sym_Nil_0))
        {
          e_131 :
          if(match_cons(i_131, sym_TCons_2))
            {
              j_131 = ATgetArgument(i_131, 0);
              k_131 = ATgetArgument(i_131, 1);
              f_131 :
              if(match_cons(k_131, sym_TNil_0))
                t = not_null(j_131);
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rev_0 (ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL;
  t_131 = t;
  p_131 :
  if(match_cons(t_131, sym_TCons_2))
    {
      u_131 = ATgetArgument(t_131, 0);
      y_131 = ATgetArgument(t_131, 1);
      q_131 :
      if(match_cons(u_131, sym_Cons_2))
        {
          w_131 = ATgetArgument(u_131, 0);
          x_131 = ATgetArgument(u_131, 1);
          r_131 :
          if(match_cons(y_131, sym_TCons_2))
            {
              z_131 = ATgetArgument(y_131, 0);
              a_132 = ATgetArgument(y_131, 1);
              s_131 :
              if(match_cons(a_132, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_131), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_131), not_null(z_131)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm g_132 = NULL;
  g_132 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_132), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL;
  m_132 = t;
  l_132 :
  if(match_cons(m_132, sym_Cons_2))
    {
      n_132 = ATgetArgument(m_132, 0);
      o_132 = ATgetArgument(m_132, 1);
      t = g_71(t);
      {
        ATerm i_7 (ATerm t)
        {
          ATerm r_132 = NULL;
          r_132 = t;
          if(n_132 != NULL && n_132 != r_132)
            _fail(r_132);
          else
            n_132 = r_132;
          return(t);
        }
        t = fetch_1(t, i_7);
      }
      t = not_null(o_132);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL;
  y_132 = t;
  v_132 :
  if(match_cons(y_132, sym_TCons_2))
    {
      z_132 = ATgetArgument(y_132, 0);
      a_133 = ATgetArgument(y_132, 1);
      w_132 :
      if(match_cons(a_133, sym_TCons_2))
        {
          b_133 = ATgetArgument(a_133, 0);
          c_133 = ATgetArgument(a_133, 1);
          x_132 :
          if(match_cons(c_133, sym_TNil_0))
            {
              t = not_null(z_132);
              {
                ATerm g_133 (ATerm t)
                {
                  ATerm y_23 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(b_133);
                      PopChoice();
                    }
                  else
                    {
                      t = y_23;
                      {
                        ATerm z_23 = t;
                        if(PushChoice()==0)
                          {
                            ATerm k_8 (ATerm t)
                            {
                              t = not_null(b_133);
                              return(t);
                            }
                            t = HdMember_1(t, k_8);
                            t = g_133(t);
                            PopChoice();
                          }
                        else
                          {
                            t = z_23;
                            t = Cons_2(t, _id, g_133);
                          }
                      }
                    }
                  return(t);
                }
                t = g_133(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm b_70 (ATerm))
{
  ATerm v_133 (ATerm t)
  {
    ATerm a_24 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = z_69(t);
        PopChoice();
      }
    else
      {
        t = a_24;
        {
          ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL;
          m_133 = t;
          l_133 :
          if(match_cons(m_133, sym_Cons_2))
            {
              n_133 = ATgetArgument(m_133, 0);
              o_133 = ATgetArgument(m_133, 1);
              {
                ATerm r_133 = NULL;
                t = not_null(n_133);
                {
                  ATerm t_133 = NULL;
                  t = b_70(t);
                  r_133 = t;
                  t = not_null(o_133);
                  t = v_133(t);
                  t_133 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_133), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_133), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = a_70(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = v_133(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm g_134 = NULL;
  ATerm i_134 = NULL;
  g_134 = t;
  {
    ATerm j_134 = NULL;
    ATerm l_134 = NULL,m_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL;
    t = not_null(g_134);
    j_134 = t;
    t = SSL_explode_term(not_null(j_134));
    l_134 = t;
    c_134 :
    if(match_cons(l_134, sym_TCons_2))
      {
        m_134 = ATgetArgument(l_134, 0);
        o_134 = ATgetArgument(l_134, 1);
        d_134 :
        if(match_cons(o_134, sym_TCons_2))
          {
            p_134 = ATgetArgument(o_134, 0);
            q_134 = ATgetArgument(o_134, 1);
            f_134 :
            if(match_cons(q_134, sym_TNil_0))
              {
                if(i_134 != NULL && i_134 != p_134)
                  _fail(p_134);
                else
                  i_134 = p_134;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_134);
    t = foldr_3(t, q_71, r_71, s_71);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm x_134 (ATerm t)
  {
    ATerm b_24 = t;
    if(PushChoice()==0)
      {
        ATerm v_134 = NULL;
        t = z_71(t);
        v_134 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_134), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = b_24;
        {
          ATerm m_8 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, m_8, union_0, x_134);
        }
      }
    return(t);
  }
  t = x_134(t);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm h_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
  h_135 = t;
  e_135 :
  if(match_cons(h_135, sym_TCons_2))
    {
      i_135 = ATgetArgument(h_135, 0);
      j_135 = ATgetArgument(h_135, 1);
      f_135 :
      if(match_cons(j_135, sym_TCons_2))
        {
          k_135 = ATgetArgument(j_135, 0);
          l_135 = ATgetArgument(j_135, 1);
          g_135 :
          if(match_cons(l_135, sym_TNil_0))
            {
              t = not_null(i_135);
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm o_135 = NULL,p_135 = NULL;
                  o_135 = t;
                  b_135 :
                  if(match_cons(o_135, sym_PP_Table_1))
                    {
                      p_135 = ATgetArgument(o_135, 0);
                      t = not_null(p_135);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = collect_1(t, n_8);
                t = reverse_0(t);
                t = read_pp_tables_0(t);
                t = not_null(k_135);
                {
                  ATerm o_8 (ATerm t)
                  {
                    ATerm p_8 (ATerm t)
                    {
                      ATerm r_135 = NULL,s_135 = NULL;
                      r_135 = t;
                      d_135 :
                      if(match_cons(r_135, sym_cf_1))
                        {
                          s_135 = ATgetArgument(r_135, 0);
                          t = not_null(s_135);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = sometd_1(t, p_8);
                    return(t);
                  }
                  t = repeat_1(t, o_8);
                  {
                    ATerm q_8 (ATerm t)
                    {
                      ATerm s_8 (ATerm t)
                      {
                        ATerm u_8 (ATerm t)
                        {
                          t = is_list_0(t);
                          {
                            ATerm v_8 (ATerm t)
                            {
                              ATerm c_24 = t;
                              if(PushChoice()==0)
                                {
                                  t = opt_1(t, layout_0);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = c_24;
                              {
                                ATerm d_24 = t;
                                if(PushChoice()==0)
                                  {
                                    t = layout_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = d_24;
                              }
                              return(t);
                            }
                            t = filter_1(t, v_8);
                          }
                          return(t);
                        }
                        t = try_1(t, u_8);
                        return(t);
                      }
                      t = topdown_1(t, s_8);
                      t = appl2abox_0(t);
                      return(t);
                    }
                    ATerm r_8 (ATerm t)
                    {
                      ATerm w_8 (ATerm t)
                      {
                        t = layout_1(t, _id);
                        return(t);
                      }
                      t = collect_p__1(t, w_8);
                      return(t);
                    }
                    t = split_2(t, q_8, r_8);
                    t = insert_layout_0(t);
                    {
                      ATerm x_8 (ATerm t)
                      {
                        t = not_null(i_135);
                        return(t);
                      }
                      t = split_2(t, x_8, _id);
                    }
                  }
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_136 = NULL;
  a_136 = t;
  t = SSL_exit(not_null(a_136));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
  h_136 = t;
  e_136 :
  if(match_cons(h_136, sym_TCons_2))
    {
      i_136 = ATgetArgument(h_136, 0);
      j_136 = ATgetArgument(h_136, 1);
      f_136 :
      if(match_cons(j_136, sym_TCons_2))
        {
          k_136 = ATgetArgument(j_136, 0);
          l_136 = ATgetArgument(j_136, 1);
          g_136 :
          if(match_cons(l_136, sym_TNil_0))
            {
              ATerm e_24;
              e_24 = t;
              t = SSL_printnl(not_null(i_136), not_null(k_136));
              t = e_24;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm f_24 = t;
  if(PushChoice()==0)
    {
      t = l_81(t);
      PopChoice();
    }
  else
    t = f_24;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL;
  ATerm y_8 (ATerm t)
  {
    ATerm z_8 (ATerm t)
    {
      ATerm g_24 = t;
      if(PushChoice()==0)
        {
          ATerm b_9 (ATerm t)
          {
            ATerm w_136 = NULL;
            w_136 = t;
            p_136 :
            if(!(match_cons(w_136, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_9);
          PopChoice();
          _fail(t);
        }
      else
        t = g_24;
      return(t);
    }
    ATerm a_9 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_8, a_9);
    {
      ATerm c_9 (ATerm t)
      {
        ATerm e_9 (ATerm t)
        {
          ATerm x_136 = NULL,y_136 = NULL;
          x_136 = t;
          r_136 :
          if(match_cons(x_136, sym_Runtime_1))
            {
              y_136 = ATgetArgument(x_136, 0);
              if(v_136 != NULL && v_136 != y_136)
                _fail(y_136);
              else
                v_136 = y_136;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_9);
        return(t);
      }
      ATerm d_9 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, c_9, d_9);
      {
        ATerm i_9 (ATerm t)
        {
          ATerm q_9 (ATerm t)
          {
            ATerm z_136 = NULL,a_137 = NULL;
            z_136 = t;
            t_136 :
            if(match_cons(z_136, sym_Program_1))
              {
                a_137 = ATgetArgument(z_136, 0);
                if(u_136 != NULL && u_136 != a_137)
                  _fail(a_137);
                else
                  u_136 = a_137;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_9);
          return(t);
        }
        ATerm m_9 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, i_9, m_9);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_136), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_136), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, y_8);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm f_137 = NULL;
  f_137 = t;
  e_137 :
  if(!(match_cons(f_137, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL,m_137 = NULL,n_137 = NULL,o_137 = NULL;
  k_137 = t;
  h_137 :
  if(match_cons(k_137, sym_TCons_2))
    {
      l_137 = ATgetArgument(k_137, 0);
      m_137 = ATgetArgument(k_137, 1);
      i_137 :
      if(match_cons(m_137, sym_TCons_2))
        {
          n_137 = ATgetArgument(m_137, 0);
          o_137 = ATgetArgument(m_137, 1);
          j_137 :
          if(match_cons(o_137, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(l_137), not_null(n_137));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  ATerm w_137 = NULL,x_137 = NULL,y_137 = NULL;
  w_137 = t;
  v_137 :
  if(match_cons(w_137, sym_TCons_2))
    {
      x_137 = ATgetArgument(w_137, 0);
      y_137 = ATgetArgument(w_137, 1);
      {
        ATerm d_138 = NULL;
        t = not_null(x_137);
        {
          ATerm f_138 = NULL;
          t = o_60(t);
          d_138 = t;
          t = not_null(y_137);
          t = p_60(t);
          f_138 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_138), not_null(f_138));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL,t_138 = NULL;
  o_138 = t;
  l_138 :
  if(match_cons(o_138, sym_TCons_2))
    {
      q_138 = ATgetArgument(o_138, 0);
      r_138 = ATgetArgument(o_138, 1);
      m_138 :
      if(match_cons(r_138, sym_TCons_2))
        {
          s_138 = ATgetArgument(r_138, 0);
          t_138 = ATgetArgument(r_138, 1);
          n_138 :
          if(match_cons(t_138, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(q_138), not_null(s_138));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_139 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm u_9 (ATerm t)
    {
      ATerm l_24 = t;
      if(PushChoice()==0)
        {
          ATerm z_9 (ATerm t)
          {
            ATerm d_139 = NULL,e_139 = NULL;
            d_139 = t;
            z_138 :
            if(match_cons(d_139, sym_Output_1))
              {
                e_139 = ATgetArgument(d_139, 0);
                if(c_139 != NULL && c_139 != e_139)
                  _fail(e_139);
                else
                  c_139 = e_139;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_9);
          PopChoice();
        }
      else
        {
          t = l_24;
          {
            ATerm f_139 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_139 = t;
            if(c_139 != NULL && c_139 != f_139)
              _fail(f_139);
            else
              c_139 = f_139;
          }
        }
      return(t);
    }
    ATerm y_9 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_9, y_9);
  }
  t = h_24;
  {
    ATerm g_10 (ATerm t)
    {
      ATerm k_10 (ATerm t)
      {
        ATerm o_10 (ATerm t)
        {
          t = not_null(c_139);
          return(t);
        }
        t = split_2(t, o_10, _id);
        return(t);
      }
      t = TCons_2(t, k_10, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_10);
    {
      ATerm n_24 = t;
      if(PushChoice()==0)
        {
          ATerm s_10 (ATerm t)
          {
            ATerm j_11 (ATerm t)
            {
              ATerm g_139 = NULL;
              g_139 = t;
              b_139 :
              if(!(match_cons(g_139, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, j_11);
            return(t);
          }
          ATerm i_11 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, s_10, i_11);
          PopChoice();
        }
      else
        {
          t = n_24;
          {
            ATerm k_11 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, k_11);
          }
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
ATerm apply_strategy_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm o_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL,u_139 = NULL;
  ATerm o_24;
  o_24 = t;
  t = dtime_0(t);
  t = o_24;
  t = i_66(t);
  {
    ATerm p_24;
    p_24 = t;
    {
      ATerm p_139 = NULL;
      t = dtime_0(t);
      p_139 = t;
      if(o_139 != NULL && o_139 != p_139)
        _fail(p_139);
      else
        o_139 = p_139;
    }
    t = p_24;
    q_139 = t;
    l_139 :
    if(match_cons(q_139, sym_TCons_2))
      {
        r_139 = ATgetArgument(q_139, 0);
        s_139 = ATgetArgument(q_139, 1);
        m_139 :
        if(match_cons(s_139, sym_TCons_2))
          {
            t_139 = ATgetArgument(s_139, 0);
            u_139 = ATgetArgument(s_139, 1);
            n_139 :
            if(match_cons(u_139, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_139)), not_null(r_139)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_139), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_140 = NULL;
  b_140 = t;
  t = SSL_ReadFromFile(not_null(b_140));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm h_140 = NULL;
  ATerm j_140 = NULL;
  h_140 = t;
  {
    ATerm l_140 = NULL;
    t = l_68(t);
    j_140 = t;
    t = not_null(h_140);
    t = m_68(t);
    l_140 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_140), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_140), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_140 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    ATerm s_24 = t;
    if(PushChoice()==0)
      {
        ATerm l_11 (ATerm t)
        {
          ATerm u_140 = NULL,v_140 = NULL;
          u_140 = t;
          r_140 :
          if(match_cons(u_140, sym_Input_1))
            {
              v_140 = ATgetArgument(u_140, 0);
              if(t_140 != NULL && t_140 != v_140)
                _fail(v_140);
              else
                t_140 = v_140;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_11);
        PopChoice();
      }
    else
      {
        t = s_24;
        {
          ATerm w_140 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_140 = t;
          if(t_140 != NULL && t_140 != w_140)
            _fail(w_140);
          else
            t_140 = w_140;
        }
      }
  }
  t = q_24;
  {
    ATerm m_11 (ATerm t)
    {
      t = not_null(t_140);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_11);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_141 = NULL;
  a_141 = t;
  z_140 :
  if(!(match_cons(a_141, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm e_141 = NULL,f_141 = NULL;
  e_141 = t;
  d_141 :
  if(match_cons(e_141, sym_Undefined_1))
    {
      f_141 = ATgetArgument(e_141, 0);
      {
        ATerm h_141 = NULL;
        t = not_null(f_141);
        t = g_60(t);
        h_141 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_141));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_141 = NULL;
  m_141 = t;
  l_141 :
  if(!(match_cons(m_141, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm n_141 (ATerm t)
  {
    ATerm u_24 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, g_75, _id);
        PopChoice();
      }
    else
      {
        t = u_24;
        t = Cons_2(t, _id, n_141);
      }
    return(t);
  }
  t = n_141(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_65 (ATerm))
{
  t = fetch_1(t, m_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm n_11 (ATerm t)
  {
    ATerm v_24 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = v_24;
        {
          ATerm w_24 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = w_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_11);
  t = h_66(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_141 = NULL,u_141 = NULL,v_141 = NULL;
  ATerm e_25;
  e_25 = t;
  {
    ATerm w_141 = NULL,x_141 = NULL,y_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL;
    w_141 = t;
    p_141 :
    if(match_cons(w_141, sym_TCons_2))
      {
        x_141 = ATgetArgument(w_141, 0);
        y_141 = ATgetArgument(w_141, 1);
        q_141 :
        if(match_cons(y_141, sym_TCons_2))
          {
            z_141 = ATgetArgument(y_141, 0);
            a_142 = ATgetArgument(y_141, 1);
            r_141 :
            if(match_cons(a_142, sym_TCons_2))
              {
                b_142 = ATgetArgument(a_142, 0);
                c_142 = ATgetArgument(a_142, 1);
                s_141 :
                if(match_cons(c_142, sym_TNil_0))
                  {
                    if(t_141 != NULL && t_141 != x_141)
                      _fail(x_141);
                    else
                      t_141 = x_141;
                    if(u_141 != NULL && u_141 != z_141)
                      _fail(z_141);
                    else
                      u_141 = z_141;
                    if(v_141 != NULL && v_141 != b_142)
                      _fail(b_142);
                    else
                      v_141 = b_142;
                    t = SSL_table_put(not_null(t_141), not_null(u_141), not_null(v_141));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = e_25;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_142 = NULL;
  f_142 = t;
  t = SSL_table_create(not_null(f_142));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_142 = NULL;
  j_142 = t;
  {
    ATerm f_25;
    f_25 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_142), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = f_25;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_25 = t;
  if(PushChoice()==0)
    {
      ATerm o_11 (ATerm t)
      {
        ATerm g_143 = NULL;
        g_143 = t;
        m_142 :
        if(!(match_string(g_143, "-S")))
          _fail(t);
        return(t);
      }
      ATerm p_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, o_11, p_11);
      PopChoice();
    }
  else
    {
      t = g_25;
      {
        ATerm i_25 = t;
        if(PushChoice()==0)
          {
            ATerm q_11 (ATerm t)
            {
              ATerm h_143 = NULL;
              h_143 = t;
              n_142 :
              if(!(match_string(h_143, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm r_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, q_11, r_11);
            PopChoice();
          }
        else
          {
            t = i_25;
            {
              ATerm j_25 = t;
              if(PushChoice()==0)
                {
                  ATerm s_11 (ATerm t)
                  {
                    ATerm i_143 = NULL;
                    i_143 = t;
                    o_142 :
                    if(!(match_string(i_143, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm t_11 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, s_11, t_11);
                  PopChoice();
                }
              else
                {
                  t = j_25;
                  {
                    ATerm k_25 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_11 (ATerm t)
                        {
                          ATerm j_143 = NULL;
                          j_143 = t;
                          p_142 :
                          if(!(match_string(j_143, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_11 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, u_11, v_11);
                        PopChoice();
                      }
                    else
                      {
                        t = k_25;
                        {
                          ATerm l_25 = t;
                          if(PushChoice()==0)
                            {
                              ATerm w_11 (ATerm t)
                              {
                                ATerm k_143 = NULL;
                                k_143 = t;
                                q_142 :
                                if(!(match_string(k_143, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm x_11 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, w_11, x_11);
                              PopChoice();
                            }
                          else
                            {
                              t = l_25;
                              {
                                ATerm m_25 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm y_11 (ATerm t)
                                    {
                                      ATerm l_143 = NULL;
                                      l_143 = t;
                                      r_142 :
                                      if(!(match_string(l_143, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm z_11 (ATerm t)
                                    {
                                      ATerm m_143 = NULL;
                                      m_143 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_143));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, y_11, z_11);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_25;
                                    {
                                      ATerm n_25 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm a_12 (ATerm t)
                                          {
                                            ATerm o_143 = NULL;
                                            o_143 = t;
                                            t_142 :
                                            if(!(match_string(o_143, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm b_12 (ATerm t)
                                          {
                                            ATerm p_143 = NULL;
                                            p_143 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_143));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, a_12, b_12);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_25;
                                          {
                                            ATerm o_25 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm c_12 (ATerm t)
                                                {
                                                  ATerm r_143 = NULL;
                                                  r_143 = t;
                                                  v_142 :
                                                  if(!(match_string(r_143, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm d_12 (ATerm t)
                                                {
                                                  ATerm s_143 = NULL;
                                                  s_143 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_143));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, c_12, d_12);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = o_25;
                                                {
                                                  ATerm t_25 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm e_12 (ATerm t)
                                                      {
                                                        ATerm u_143 = NULL;
                                                        u_143 = t;
                                                        x_142 :
                                                        if(!(match_string(u_143, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm f_12 (ATerm t)
                                                      {
                                                        ATerm v_143 = NULL;
                                                        v_143 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_143));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, e_12, f_12);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_25;
                                                      {
                                                        ATerm w_25 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm g_12 (ATerm t)
                                                            {
                                                              ATerm x_143 = NULL;
                                                              x_143 = t;
                                                              z_142 :
                                                              if(!(match_string(x_143, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm h_12 (ATerm t)
                                                            {
                                                              ATerm y_143 = NULL;
                                                              y_143 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_143));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, g_12, h_12);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = w_25;
                                                            {
                                                              ATerm x_25 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm s_12 (ATerm t)
                                                                  {
                                                                    ATerm a_144 = NULL;
                                                                    a_144 = t;
                                                                    b_143 :
                                                                    if(!(match_string(a_144, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_12 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, s_12, t_12);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = x_25;
                                                                  {
                                                                    ATerm y_25 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm g_13 (ATerm t)
                                                                        {
                                                                          ATerm b_144 = NULL;
                                                                          b_144 = t;
                                                                          c_143 :
                                                                          if(!(match_string(b_144, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm i_13 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, g_13, i_13);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_25;
                                                                        {
                                                                          ATerm z_25 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm l_13 (ATerm t)
                                                                              {
                                                                                ATerm c_144 = NULL;
                                                                                c_144 = t;
                                                                                d_143 :
                                                                                if(!(match_string(c_144, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm o_13 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, l_13, o_13);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_25;
                                                                              {
                                                                                ATerm a_26 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm p_13 (ATerm t)
                                                                                    {
                                                                                      ATerm d_144 = NULL;
                                                                                      d_144 = t;
                                                                                      e_143 :
                                                                                      if(!(match_string(d_144, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm q_13 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, p_13, q_13);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_26;
                                                                                    {
                                                                                      ATerm r_13 (ATerm t)
                                                                                      {
                                                                                        ATerm e_144 = NULL;
                                                                                        e_144 = t;
                                                                                        f_143 :
                                                                                        if(!(match_string(e_144, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm s_13 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, r_13, s_13);
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
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_144 = NULL,n_144 = NULL,o_144 = NULL;
  m_144 = t;
  l_144 :
  if(match_cons(m_144, sym_Cons_2))
    {
      n_144 = ATgetArgument(m_144, 0);
      o_144 = ATgetArgument(m_144, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_144)), not_null(o_144));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm))
{
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL;
  w_144 = t;
  v_144 :
  if(match_cons(w_144, sym_Cons_2))
    {
      x_144 = ATgetArgument(w_144, 0);
      y_144 = ATgetArgument(w_144, 1);
      {
        ATerm b_145 = NULL;
        t = not_null(x_144);
        {
          ATerm d_145 = NULL;
          t = s_60(t);
          b_145 = t;
          t = not_null(y_144);
          t = t_60(t);
          d_145 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_145), not_null(d_145));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm j_145 = NULL;
  j_145 = t;
  i_145 :
  if(!(match_cons(j_145, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm t_13 (ATerm t)
  {
    ATerm l_145 = NULL;
    l_145 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_145));
    return(t);
  }
  ATerm u_13 (ATerm t)
  {
    ATerm b_26 = t;
    if(PushChoice()==0)
      {
        ATerm c_26 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = c_26;
            t = d_65(t);
            t = Cons_2(t, _id, u_13);
          }
        PopChoice();
      }
    else
      {
        t = b_26;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, t_13, u_13);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm v_13 (ATerm t)
  {
    ATerm e_26 = t;
    if(PushChoice()==0)
      {
        t = x_65(t);
        PopChoice();
      }
    else
      {
        t = e_26;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_13);
  t = store_options_0(t);
  {
    ATerm f_26 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, y_65);
        PopChoice();
      }
    else
      {
        t = f_26;
        {
          ATerm h_26 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, w_65);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = h_26;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Asfix2abox_0 (ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm i_26 = t;
    if(PushChoice()==0)
      {
        ATerm a_14 (ATerm t)
        {
          ATerm s_145 = NULL;
          s_145 = t;
          p_145 :
          if(!(match_string(s_145, "-v")))
            _fail(t);
          return(t);
        }
        ATerm b_14 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, a_14, b_14);
        PopChoice();
      }
    else
      {
        t = i_26;
        {
          ATerm c_14 (ATerm t)
          {
            ATerm t_145 = NULL;
            t_145 = t;
            q_145 :
            if(!(match_string(t_145, "-p")))
              _fail(t);
            return(t);
          }
          ATerm d_14 (ATerm t)
          {
            ATerm u_145 = NULL;
            u_145 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(u_145));
            return(t);
          }
          t = ArgOption_2(t, c_14, d_14);
        }
      }
    return(t);
  }
  t = iowrap_3(t, asfix2abox_0, w_13, usage_p__0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Asfix2abox_0(t);
  return(t);
}

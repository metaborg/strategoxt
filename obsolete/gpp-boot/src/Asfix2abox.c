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
ATerm obsolete_1 (ATerm, ATerm j_66 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm Option_2 (ATerm, ATerm q_64 (ATerm), ATerm r_64 (ATerm));
ATerm layout2box_0 (ATerm);
ATerm is_significant_layout_0 (ATerm);
ATerm InsLayout_1 (ATerm, ATerm q_60 (ATerm));
ATerm insert_layout_0 (ATerm);
ATerm layout_1 (ATerm, ATerm y_59 (ATerm));
ATerm collect_p__1 (ATerm, ATerm x_60 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm t_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm v_76 (ATerm));
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
ATerm instantiate_sep_list_1 (ATerm, ATerm u_60 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_4 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm b_73 (ATerm));
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
ATerm symbol2abox_1 (ATerm, ATerm e_61 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Make_0 (ATerm);
ATerm pair_0 (ATerm);
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm h_61 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm d_61 (ATerm));
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
ATerm Sep_1 (ATerm, ATerm p_75 (ATerm));
ATerm separate_by_1 (ATerm, ATerm q_75 (ATerm));
ATerm Lit2Str_0 (ATerm);
ATerm Singleton_0 (ATerm);
ATerm list_ana_1 (ATerm, ATerm j_60 (ATerm));
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
ATerm at_cons_1 (ATerm, ATerm n_60 (ATerm));
ATerm prodcons_0 (ATerm);
ATerm sort_1 (ATerm, ATerm b_0 (ATerm));
ATerm get_templ_0 (ATerm);
ATerm appl2abox_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm a_0 (ATerm));
ATerm filter_1 (ATerm, ATerm l_68 (ATerm));
ATerm is_list_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm t_76 (ATerm));
ATerm sometd_1 (ATerm, ATerm q_78 (ATerm));
ATerm repeat_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_79 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm c_75 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_66 (ATerm));
ATerm oncetd_1 (ATerm, ATerm j_78 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm p_65 (ATerm));
ATerm notify_1 (ATerm, ATerm c_61 (ATerm));
ATerm map_1 (ATerm, ATerm d_74 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm o_70 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm crush_3 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm collect_1 (ATerm, ATerm h_71 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_80 (ATerm));
ATerm report_success_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm m_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_64 (ATerm));
ATerm need_help_1 (ATerm, ATerm s_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm Asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm x_14;
  x_14 = t;
  t = j_66(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, u_0);
  }
  t = x_14;
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
ATerm ArgOption_2 (ATerm t, ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  l_4 = t;
  h_4 :
  if(match_cons(l_4, sym_Cons_2))
    {
      m_4 = ATgetArgument(l_4, 0);
      p_4 = ATgetArgument(l_4, 1);
      j_4 :
      if(match_cons(p_4, sym_Cons_2))
        {
          q_4 = ATgetArgument(p_4, 0);
          r_4 = ATgetArgument(p_4, 1);
          {
            ATerm v_4 = NULL;
            t = not_null(m_4);
            t = s_64(t);
            t = not_null(q_4);
            t = t_64(t);
            v_4 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_4), not_null(r_4));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm q_64 (ATerm), ATerm r_64 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_Cons_2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm h_5 = NULL;
        t = not_null(d_5);
        t = q_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = r_64(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_5), not_null(e_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm layout2box_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym_layout_1))
    {
      p_5 = ATgetArgument(o_5, 0);
      {
        ATerm r_5 = NULL;
        t = not_null(p_5);
        t = concat_strings_0(t);
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_S_1, not_null(r_5)), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_significant_layout_0 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm y_14;
  y_14 = t;
  {
    ATerm c_6 = NULL,d_6 = NULL;
    c_6 = t;
    a_6 :
    if(match_cons(c_6, sym_layout_1))
      {
        d_6 = ATgetArgument(c_6, 0);
        if(b_6 != NULL && b_6 != d_6)
          _fail(d_6);
        else
          b_6 = d_6;
        t = not_null(b_6);
        t = concat_strings_0(t);
        t = explode_string_0(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm z_14 = t;
            if(PushChoice()==0)
              {
                ATerm e_6 = NULL;
                e_6 = t;
                w_5 :
                if(!(match_int(e_6, 9)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              t = z_14;
            {
              ATerm a_15 = t;
              if(PushChoice()==0)
                {
                  ATerm f_6 = NULL;
                  f_6 = t;
                  x_5 :
                  if(!(match_int(f_6, 10)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = a_15;
              {
                ATerm b_15 = t;
                if(PushChoice()==0)
                  {
                    ATerm g_6 = NULL;
                    g_6 = t;
                    y_5 :
                    if(!(match_int(g_6, 32)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = b_15;
              }
            }
            return(t);
          }
          t = filter_1(t, w_0);
          {
            ATerm c_15 = t;
            if(PushChoice()==0)
              {
                ATerm h_6 = NULL;
                h_6 = t;
                z_5 :
                if(!(match_cons(h_6, sym_Nil_0)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              t = c_15;
          }
        }
      }
    else
      _fail(t);
  }
  t = y_14;
  return(t);
}
ATerm InsLayout_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
    ATerm d_15 = t;
    if(PushChoice()==0)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm s_7 = NULL;
          s_7 = t;
          j_6 :
          if(!(match_cons(s_7, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            ATerm t_7 = NULL;
            t_7 = t;
            k_6 :
            if(!(match_cons(t_7, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, z_0);
          return(t);
        }
        t = TCons_2(t, x_0, y_0);
        PopChoice();
      }
    else
      {
        t = d_15;
        {
          ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
          u_7 = t;
          b_7 :
          if(match_cons(u_7, sym_TCons_2))
            {
              v_7 = ATgetArgument(u_7, 0);
              a_8 = ATgetArgument(u_7, 1);
              c_7 :
              if(match_cons(v_7, sym_Cons_2))
                {
                  w_7 = ATgetArgument(v_7, 0);
                  x_7 = ATgetArgument(v_7, 1);
                  d_7 :
                  if(match_cons(x_7, sym_Nil_0))
                    {
                      e_7 :
                      if(match_cons(a_8, sym_TCons_2))
                        {
                          b_8 = ATgetArgument(a_8, 0);
                          c_8 = ATgetArgument(a_8, 1);
                          f_7 :
                          if(match_cons(c_8, sym_TNil_0))
                            {
                              ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
                              if(i_7 != NULL && i_7 != w_7)
                                _fail(w_7);
                              else
                                i_7 = w_7;
                              if(n_7 != NULL && n_7 != b_8)
                                _fail(b_8);
                              else
                                n_7 = b_8;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = q_60(t);
                              d_8 = t;
                              o_6 :
                              if(match_cons(d_8, sym_TCons_2))
                                {
                                  e_8 = ATgetArgument(d_8, 0);
                                  f_8 = ATgetArgument(d_8, 1);
                                  p_6 :
                                  if(match_cons(f_8, sym_TCons_2))
                                    {
                                      g_8 = ATgetArgument(f_8, 0);
                                      h_8 = ATgetArgument(f_8, 1);
                                      q_6 :
                                      if(match_cons(h_8, sym_TNil_0))
                                        {
                                          if(j_7 != NULL && j_7 != e_8)
                                            _fail(e_8);
                                          else
                                            j_7 = e_8;
                                          if(o_7 != NULL && o_7 != g_8)
                                            _fail(g_8);
                                          else
                                            o_7 = g_8;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      if(match_cons(x_7, sym_Cons_2))
                        {
                          y_7 = ATgetArgument(x_7, 0);
                          z_7 = ATgetArgument(x_7, 1);
                          g_7 :
                          if(match_cons(a_8, sym_TCons_2))
                            {
                              b_8 = ATgetArgument(a_8, 0);
                              c_8 = ATgetArgument(a_8, 1);
                              h_7 :
                              if(match_cons(c_8, sym_TNil_0))
                                {
                                  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
                                  if(i_7 != NULL && i_7 != w_7)
                                    _fail(w_7);
                                  else
                                    i_7 = w_7;
                                  if(l_7 != NULL && l_7 != y_7)
                                    _fail(y_7);
                                  else
                                    l_7 = y_7;
                                  if(m_7 != NULL && m_7 != z_7)
                                    _fail(z_7);
                                  else
                                    m_7 = z_7;
                                  if(n_7 != NULL && n_7 != b_8)
                                    _fail(b_8);
                                  else
                                    n_7 = b_8;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = q_60(t);
                                  i_8 = t;
                                  x_6 :
                                  if(match_cons(i_8, sym_TCons_2))
                                    {
                                      j_8 = ATgetArgument(i_8, 0);
                                      k_8 = ATgetArgument(i_8, 1);
                                      y_6 :
                                      if(match_cons(k_8, sym_TCons_2))
                                        {
                                          l_8 = ATgetArgument(k_8, 0);
                                          o_8 = ATgetArgument(k_8, 1);
                                          z_6 :
                                          if(match_cons(l_8, sym_Cons_2))
                                            {
                                              m_8 = ATgetArgument(l_8, 0);
                                              n_8 = ATgetArgument(l_8, 1);
                                              a_7 :
                                              if(match_cons(o_8, sym_TNil_0))
                                                {
                                                  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
                                                  if(j_7 != NULL && j_7 != j_8)
                                                    _fail(j_8);
                                                  else
                                                    j_7 = j_8;
                                                  if(k_7 != NULL && k_7 != m_8)
                                                    _fail(m_8);
                                                  else
                                                    k_7 = m_8;
                                                  if(o_7 != NULL && o_7 != n_8)
                                                    _fail(n_8);
                                                  else
                                                    o_7 = n_8;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_7), not_null(m_7)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = w_8(t);
                                                  p_8 = t;
                                                  u_6 :
                                                  if(match_cons(p_8, sym_TCons_2))
                                                    {
                                                      q_8 = ATgetArgument(p_8, 0);
                                                      r_8 = ATgetArgument(p_8, 1);
                                                      v_6 :
                                                      if(match_cons(r_8, sym_TCons_2))
                                                        {
                                                          s_8 = ATgetArgument(r_8, 0);
                                                          t_8 = ATgetArgument(r_8, 1);
                                                          w_6 :
                                                          if(match_cons(t_8, sym_TNil_0))
                                                            {
                                                              if(q_7 != NULL && q_7 != q_8)
                                                                _fail(q_8);
                                                              else
                                                                q_7 = q_8;
                                                              if(p_7 != NULL && p_7 != s_8)
                                                                _fail(s_8);
                                                              else
                                                                p_7 = s_8;
                                                              {
                                                                ATerm e_15 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    ATerm u_8 = NULL;
                                                                    t = not_null(k_7);
                                                                    t = is_significant_layout_0(t);
                                                                    t = not_null(k_7);
                                                                    t = layout2box_0(t);
                                                                    u_8 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_7), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_8), not_null(q_7))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_15;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_7), not_null(q_7)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  t = w_8(t);
  return(t);
}
ATerm insert_layout_0 (ATerm t)
{
  ATerm x_13 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm y_13 = NULL,z_13 = NULL,k_14 = NULL;
      y_13 = t;
      e_9 :
      if(match_cons(y_13, sym_Cons_2))
        {
          z_13 = ATgetArgument(y_13, 0);
          k_14 = ATgetArgument(y_13, 1);
          if(x_13 != NULL && x_13 != z_13)
            _fail(z_13);
          else
            x_13 = z_13;
          t = Tl_0(t);
        }
      else
        _fail(t);
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm l_14 = NULL;
      l_14 = t;
      f_9 :
      if(!(match_cons(l_14, sym_TNil_0)))
        _fail(t);
      return(t);
    }
    t = TCons_2(t, b_1, c_1);
    return(t);
  }
  t = TCons_2(t, _id, a_1);
  {
    ATerm o_23 (ATerm t)
    {
      ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
      ATerm f_15 = t;
      if(PushChoice()==0)
        {
          ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,v_17 = NULL,w_17 = NULL,a_19 = NULL;
          j_16 = t;
          i_12 :
          if(match_cons(j_16, sym_TCons_2))
            {
              k_16 = ATgetArgument(j_16, 0);
              v_17 = ATgetArgument(j_16, 1);
              j_12 :
              if(match_cons(k_16, sym_H_2))
                {
                  l_16 = ATgetArgument(k_16, 0);
                  m_16 = ATgetArgument(k_16, 1);
                  k_12 :
                  if(match_cons(v_17, sym_TCons_2))
                    {
                      w_17 = ATgetArgument(v_17, 0);
                      a_19 = ATgetArgument(v_17, 1);
                      l_12 :
                      if(match_cons(a_19, sym_TNil_0))
                        {
                          ATerm b_19 = NULL,c_19 = NULL,i_19 = NULL,j_19 = NULL,i_20 = NULL;
                          if(m_14 != NULL && m_14 != l_16)
                            _fail(l_16);
                          else
                            m_14 = l_16;
                          if(o_14 != NULL && o_14 != m_16)
                            _fail(m_16);
                          else
                            o_14 = m_16;
                          if(p_14 != NULL && p_14 != w_17)
                            _fail(w_17);
                          else
                            p_14 = w_17;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = InsLayout_1(t, o_23);
                          b_19 = t;
                          r_9 :
                          if(match_cons(b_19, sym_TCons_2))
                            {
                              c_19 = ATgetArgument(b_19, 0);
                              i_19 = ATgetArgument(b_19, 1);
                              s_9 :
                              if(match_cons(i_19, sym_TCons_2))
                                {
                                  j_19 = ATgetArgument(i_19, 0);
                                  i_20 = ATgetArgument(i_19, 1);
                                  t_9 :
                                  if(match_cons(i_20, sym_TNil_0))
                                    {
                                      if(q_14 != NULL && q_14 != c_19)
                                        _fail(c_19);
                                      else
                                        q_14 = c_19;
                                      if(r_14 != NULL && r_14 != j_19)
                                        _fail(j_19);
                                      else
                                        r_14 = j_19;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_H_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                  if(match_cons(k_16, sym_HV_2))
                    {
                      l_16 = ATgetArgument(k_16, 0);
                      m_16 = ATgetArgument(k_16, 1);
                      m_12 :
                      if(match_cons(v_17, sym_TCons_2))
                        {
                          w_17 = ATgetArgument(v_17, 0);
                          a_19 = ATgetArgument(v_17, 1);
                          n_12 :
                          if(match_cons(a_19, sym_TNil_0))
                            {
                              ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
                              if(m_14 != NULL && m_14 != l_16)
                                _fail(l_16);
                              else
                                m_14 = l_16;
                              if(o_14 != NULL && o_14 != m_16)
                                _fail(m_16);
                              else
                                o_14 = m_16;
                              if(p_14 != NULL && p_14 != w_17)
                                _fail(w_17);
                              else
                                p_14 = w_17;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = InsLayout_1(t, o_23);
                              a_21 = t;
                              v_9 :
                              if(match_cons(a_21, sym_TCons_2))
                                {
                                  b_21 = ATgetArgument(a_21, 0);
                                  c_21 = ATgetArgument(a_21, 1);
                                  w_9 :
                                  if(match_cons(c_21, sym_TCons_2))
                                    {
                                      d_21 = ATgetArgument(c_21, 0);
                                      e_21 = ATgetArgument(c_21, 1);
                                      x_9 :
                                      if(match_cons(e_21, sym_TNil_0))
                                        {
                                          if(q_14 != NULL && q_14 != b_21)
                                            _fail(b_21);
                                          else
                                            q_14 = b_21;
                                          if(r_14 != NULL && r_14 != d_21)
                                            _fail(d_21);
                                          else
                                            r_14 = d_21;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_HV_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                      if(match_cons(k_16, sym_V_2))
                        {
                          l_16 = ATgetArgument(k_16, 0);
                          m_16 = ATgetArgument(k_16, 1);
                          o_12 :
                          if(match_cons(v_17, sym_TCons_2))
                            {
                              w_17 = ATgetArgument(v_17, 0);
                              a_19 = ATgetArgument(v_17, 1);
                              p_12 :
                              if(match_cons(a_19, sym_TNil_0))
                                {
                                  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
                                  if(m_14 != NULL && m_14 != l_16)
                                    _fail(l_16);
                                  else
                                    m_14 = l_16;
                                  if(o_14 != NULL && o_14 != m_16)
                                    _fail(m_16);
                                  else
                                    o_14 = m_16;
                                  if(p_14 != NULL && p_14 != w_17)
                                    _fail(w_17);
                                  else
                                    p_14 = w_17;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = InsLayout_1(t, o_23);
                                  f_21 = t;
                                  z_9 :
                                  if(match_cons(f_21, sym_TCons_2))
                                    {
                                      g_21 = ATgetArgument(f_21, 0);
                                      h_21 = ATgetArgument(f_21, 1);
                                      a_10 :
                                      if(match_cons(h_21, sym_TCons_2))
                                        {
                                          i_21 = ATgetArgument(h_21, 0);
                                          j_21 = ATgetArgument(h_21, 1);
                                          b_10 :
                                          if(match_cons(j_21, sym_TNil_0))
                                            {
                                              if(q_14 != NULL && q_14 != g_21)
                                                _fail(g_21);
                                              else
                                                q_14 = g_21;
                                              if(r_14 != NULL && r_14 != i_21)
                                                _fail(i_21);
                                              else
                                                r_14 = i_21;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_V_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(k_16, sym_A_3))
                            {
                              l_16 = ATgetArgument(k_16, 0);
                              m_16 = ATgetArgument(k_16, 1);
                              i_16 = ATgetArgument(k_16, 2);
                              q_12 :
                              if(match_cons(v_17, sym_TCons_2))
                                {
                                  w_17 = ATgetArgument(v_17, 0);
                                  a_19 = ATgetArgument(v_17, 1);
                                  r_12 :
                                  if(match_cons(a_19, sym_TNil_0))
                                    {
                                      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
                                      if(m_14 != NULL && m_14 != l_16)
                                        _fail(l_16);
                                      else
                                        m_14 = l_16;
                                      if(n_14 != NULL && n_14 != m_16)
                                        _fail(m_16);
                                      else
                                        n_14 = m_16;
                                      if(o_14 != NULL && o_14 != i_16)
                                        _fail(i_16);
                                      else
                                        o_14 = i_16;
                                      if(p_14 != NULL && p_14 != w_17)
                                        _fail(w_17);
                                      else
                                        p_14 = w_17;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = InsLayout_1(t, o_23);
                                      k_21 = t;
                                      d_10 :
                                      if(match_cons(k_21, sym_TCons_2))
                                        {
                                          l_21 = ATgetArgument(k_21, 0);
                                          m_21 = ATgetArgument(k_21, 1);
                                          e_10 :
                                          if(match_cons(m_21, sym_TCons_2))
                                            {
                                              n_21 = ATgetArgument(m_21, 0);
                                              o_21 = ATgetArgument(m_21, 1);
                                              f_10 :
                                              if(match_cons(o_21, sym_TNil_0))
                                                {
                                                  if(q_14 != NULL && q_14 != l_21)
                                                    _fail(l_21);
                                                  else
                                                    q_14 = l_21;
                                                  if(r_14 != NULL && r_14 != n_21)
                                                    _fail(n_21);
                                                  else
                                                    r_14 = n_21;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_A_3, not_null(m_14), not_null(n_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                              if(match_cons(k_16, sym_R_2))
                                {
                                  l_16 = ATgetArgument(k_16, 0);
                                  m_16 = ATgetArgument(k_16, 1);
                                  s_12 :
                                  if(match_cons(v_17, sym_TCons_2))
                                    {
                                      w_17 = ATgetArgument(v_17, 0);
                                      a_19 = ATgetArgument(v_17, 1);
                                      t_12 :
                                      if(match_cons(a_19, sym_TNil_0))
                                        {
                                          ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
                                          if(m_14 != NULL && m_14 != l_16)
                                            _fail(l_16);
                                          else
                                            m_14 = l_16;
                                          if(o_14 != NULL && o_14 != m_16)
                                            _fail(m_16);
                                          else
                                            o_14 = m_16;
                                          if(p_14 != NULL && p_14 != w_17)
                                            _fail(w_17);
                                          else
                                            p_14 = w_17;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = InsLayout_1(t, o_23);
                                          p_21 = t;
                                          h_10 :
                                          if(match_cons(p_21, sym_TCons_2))
                                            {
                                              q_21 = ATgetArgument(p_21, 0);
                                              r_21 = ATgetArgument(p_21, 1);
                                              i_10 :
                                              if(match_cons(r_21, sym_TCons_2))
                                                {
                                                  s_21 = ATgetArgument(r_21, 0);
                                                  t_21 = ATgetArgument(r_21, 1);
                                                  j_10 :
                                                  if(match_cons(t_21, sym_TNil_0))
                                                    {
                                                      if(q_14 != NULL && q_14 != q_21)
                                                        _fail(q_21);
                                                      else
                                                        q_14 = q_21;
                                                      if(r_14 != NULL && r_14 != s_21)
                                                        _fail(s_21);
                                                      else
                                                        r_14 = s_21;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_R_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                  if(match_cons(k_16, sym_ALT_2))
                                    {
                                      l_16 = ATgetArgument(k_16, 0);
                                      m_16 = ATgetArgument(k_16, 1);
                                      u_12 :
                                      if(match_cons(v_17, sym_TCons_2))
                                        {
                                          w_17 = ATgetArgument(v_17, 0);
                                          a_19 = ATgetArgument(v_17, 1);
                                          v_12 :
                                          if(match_cons(a_19, sym_TNil_0))
                                            {
                                              ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
                                              if(m_14 != NULL && m_14 != l_16)
                                                _fail(l_16);
                                              else
                                                m_14 = l_16;
                                              if(o_14 != NULL && o_14 != m_16)
                                                _fail(m_16);
                                              else
                                                o_14 = m_16;
                                              if(p_14 != NULL && p_14 != w_17)
                                                _fail(w_17);
                                              else
                                                p_14 = w_17;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = InsLayout_1(t, o_23);
                                              u_21 = t;
                                              p_10 :
                                              if(match_cons(u_21, sym_TCons_2))
                                                {
                                                  v_21 = ATgetArgument(u_21, 0);
                                                  w_21 = ATgetArgument(u_21, 1);
                                                  q_10 :
                                                  if(match_cons(w_21, sym_TCons_2))
                                                    {
                                                      x_21 = ATgetArgument(w_21, 0);
                                                      y_21 = ATgetArgument(w_21, 1);
                                                      r_10 :
                                                      if(match_cons(y_21, sym_TNil_0))
                                                        {
                                                          ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
                                                          if(n_14 != NULL && n_14 != v_21)
                                                            _fail(v_21);
                                                          else
                                                            n_14 = v_21;
                                                          if(r_14 != NULL && r_14 != x_21)
                                                            _fail(x_21);
                                                          else
                                                            r_14 = x_21;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = InsLayout_1(t, o_23);
                                                          z_21 = t;
                                                          m_10 :
                                                          if(match_cons(z_21, sym_TCons_2))
                                                            {
                                                              a_22 = ATgetArgument(z_21, 0);
                                                              b_22 = ATgetArgument(z_21, 1);
                                                              n_10 :
                                                              if(match_cons(b_22, sym_TCons_2))
                                                                {
                                                                  c_22 = ATgetArgument(b_22, 0);
                                                                  d_22 = ATgetArgument(b_22, 1);
                                                                  o_10 :
                                                                  if(match_cons(d_22, sym_TNil_0))
                                                                    {
                                                                      if(q_14 != NULL && q_14 != a_22)
                                                                        _fail(a_22);
                                                                      else
                                                                        q_14 = a_22;
                                                                      if(s_14 != NULL && s_14 != c_22)
                                                                        _fail(c_22);
                                                                      else
                                                                        s_14 = c_22;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_ALT_2, not_null(n_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                      if(match_cons(k_16, sym_LBL_2))
                                        {
                                          l_16 = ATgetArgument(k_16, 0);
                                          m_16 = ATgetArgument(k_16, 1);
                                          w_12 :
                                          if(match_cons(v_17, sym_TCons_2))
                                            {
                                              w_17 = ATgetArgument(v_17, 0);
                                              a_19 = ATgetArgument(v_17, 1);
                                              x_12 :
                                              if(match_cons(a_19, sym_TNil_0))
                                                {
                                                  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL,k_22 = NULL;
                                                  if(m_14 != NULL && m_14 != l_16)
                                                    _fail(l_16);
                                                  else
                                                    m_14 = l_16;
                                                  if(o_14 != NULL && o_14 != m_16)
                                                    _fail(m_16);
                                                  else
                                                    o_14 = m_16;
                                                  if(p_14 != NULL && p_14 != w_17)
                                                    _fail(w_17);
                                                  else
                                                    p_14 = w_17;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = InsLayout_1(t, o_23);
                                                  e_22 = t;
                                                  t_10 :
                                                  if(match_cons(e_22, sym_TCons_2))
                                                    {
                                                      f_22 = ATgetArgument(e_22, 0);
                                                      g_22 = ATgetArgument(e_22, 1);
                                                      u_10 :
                                                      if(match_cons(g_22, sym_TCons_2))
                                                        {
                                                          j_22 = ATgetArgument(g_22, 0);
                                                          k_22 = ATgetArgument(g_22, 1);
                                                          v_10 :
                                                          if(match_cons(k_22, sym_TNil_0))
                                                            {
                                                              if(q_14 != NULL && q_14 != f_22)
                                                                _fail(f_22);
                                                              else
                                                                q_14 = f_22;
                                                              if(r_14 != NULL && r_14 != j_22)
                                                                _fail(j_22);
                                                              else
                                                                r_14 = j_22;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_LBL_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                          if(match_cons(k_16, sym_REF_2))
                                            {
                                              l_16 = ATgetArgument(k_16, 0);
                                              m_16 = ATgetArgument(k_16, 1);
                                              y_12 :
                                              if(match_cons(v_17, sym_TCons_2))
                                                {
                                                  w_17 = ATgetArgument(v_17, 0);
                                                  a_19 = ATgetArgument(v_17, 1);
                                                  z_12 :
                                                  if(match_cons(a_19, sym_TNil_0))
                                                    {
                                                      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                                      if(m_14 != NULL && m_14 != l_16)
                                                        _fail(l_16);
                                                      else
                                                        m_14 = l_16;
                                                      if(o_14 != NULL && o_14 != m_16)
                                                        _fail(m_16);
                                                      else
                                                        o_14 = m_16;
                                                      if(p_14 != NULL && p_14 != w_17)
                                                        _fail(w_17);
                                                      else
                                                        p_14 = w_17;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      t = InsLayout_1(t, o_23);
                                                      l_22 = t;
                                                      x_10 :
                                                      if(match_cons(l_22, sym_TCons_2))
                                                        {
                                                          m_22 = ATgetArgument(l_22, 0);
                                                          n_22 = ATgetArgument(l_22, 1);
                                                          y_10 :
                                                          if(match_cons(n_22, sym_TCons_2))
                                                            {
                                                              o_22 = ATgetArgument(n_22, 0);
                                                              p_22 = ATgetArgument(n_22, 1);
                                                              z_10 :
                                                              if(match_cons(p_22, sym_TNil_0))
                                                                {
                                                                  if(q_14 != NULL && q_14 != m_22)
                                                                    _fail(m_22);
                                                                  else
                                                                    q_14 = m_22;
                                                                  if(r_14 != NULL && r_14 != o_22)
                                                                    _fail(o_22);
                                                                  else
                                                                    r_14 = o_22;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_REF_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                              if(match_cons(k_16, sym_L_2))
                                                {
                                                  l_16 = ATgetArgument(k_16, 0);
                                                  m_16 = ATgetArgument(k_16, 1);
                                                  a_13 :
                                                  if(match_cons(v_17, sym_TCons_2))
                                                    {
                                                      w_17 = ATgetArgument(v_17, 0);
                                                      a_19 = ATgetArgument(v_17, 1);
                                                      b_13 :
                                                      if(match_cons(a_19, sym_TNil_0))
                                                        {
                                                          ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
                                                          if(m_14 != NULL && m_14 != l_16)
                                                            _fail(l_16);
                                                          else
                                                            m_14 = l_16;
                                                          if(o_14 != NULL && o_14 != m_16)
                                                            _fail(m_16);
                                                          else
                                                            o_14 = m_16;
                                                          if(p_14 != NULL && p_14 != w_17)
                                                            _fail(w_17);
                                                          else
                                                            p_14 = w_17;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = InsLayout_1(t, o_23);
                                                          q_22 = t;
                                                          b_11 :
                                                          if(match_cons(q_22, sym_TCons_2))
                                                            {
                                                              r_22 = ATgetArgument(q_22, 0);
                                                              s_22 = ATgetArgument(q_22, 1);
                                                              c_11 :
                                                              if(match_cons(s_22, sym_TCons_2))
                                                                {
                                                                  t_22 = ATgetArgument(s_22, 0);
                                                                  u_22 = ATgetArgument(s_22, 1);
                                                                  d_11 :
                                                                  if(match_cons(u_22, sym_TNil_0))
                                                                    {
                                                                      if(q_14 != NULL && q_14 != r_22)
                                                                        _fail(r_22);
                                                                      else
                                                                        q_14 = r_22;
                                                                      if(r_14 != NULL && r_14 != t_22)
                                                                        _fail(t_22);
                                                                      else
                                                                        r_14 = t_22;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_L_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                                  if(match_cons(k_16, sym_LNAT_2))
                                                    {
                                                      l_16 = ATgetArgument(k_16, 0);
                                                      m_16 = ATgetArgument(k_16, 1);
                                                      c_13 :
                                                      if(match_cons(v_17, sym_TCons_2))
                                                        {
                                                          w_17 = ATgetArgument(v_17, 0);
                                                          a_19 = ATgetArgument(v_17, 1);
                                                          d_13 :
                                                          if(match_cons(a_19, sym_TNil_0))
                                                            {
                                                              ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
                                                              if(m_14 != NULL && m_14 != l_16)
                                                                _fail(l_16);
                                                              else
                                                                m_14 = l_16;
                                                              if(o_14 != NULL && o_14 != m_16)
                                                                _fail(m_16);
                                                              else
                                                                o_14 = m_16;
                                                              if(p_14 != NULL && p_14 != w_17)
                                                                _fail(w_17);
                                                              else
                                                                p_14 = w_17;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                              t = InsLayout_1(t, o_23);
                                                              v_22 = t;
                                                              f_11 :
                                                              if(match_cons(v_22, sym_TCons_2))
                                                                {
                                                                  w_22 = ATgetArgument(v_22, 0);
                                                                  x_22 = ATgetArgument(v_22, 1);
                                                                  g_11 :
                                                                  if(match_cons(x_22, sym_TCons_2))
                                                                    {
                                                                      y_22 = ATgetArgument(x_22, 0);
                                                                      z_22 = ATgetArgument(x_22, 1);
                                                                      h_11 :
                                                                      if(match_cons(z_22, sym_TNil_0))
                                                                        {
                                                                          if(q_14 != NULL && q_14 != w_22)
                                                                            _fail(w_22);
                                                                          else
                                                                            q_14 = w_22;
                                                                          if(r_14 != NULL && r_14 != y_22)
                                                                            _fail(y_22);
                                                                          else
                                                                            r_14 = y_22;
                                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_LNAT_2, not_null(m_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
          t = f_15;
          {
            ATerm g_15 = t;
            if(PushChoice()==0)
              {
                ATerm d_1 (ATerm t)
                {
                  t = Cons_2(t, _id, _id);
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    ATerm a_23 = NULL;
                    a_23 = t;
                    e_13 :
                    if(!(match_cons(a_23, sym_TNil_0)))
                      _fail(t);
                    return(t);
                  }
                  t = TCons_2(t, _id, f_1);
                  return(t);
                }
                t = TCons_2(t, d_1, e_1);
                t = InsLayout_1(t, o_23);
                PopChoice();
              }
            else
              t = g_15;
          }
        }
      return(t);
    }
    t = o_23(t);
    b_23 = t;
    j_13 :
    if(match_cons(b_23, sym_TCons_2))
      {
        c_23 = ATgetArgument(b_23, 0);
        d_23 = ATgetArgument(b_23, 1);
        k_13 :
        if(match_cons(d_23, sym_TCons_2))
          {
            e_23 = ATgetArgument(d_23, 0);
            h_23 = ATgetArgument(d_23, 1);
            m_13 :
            if(match_cons(e_23, sym_Cons_2))
              {
                f_23 = ATgetArgument(e_23, 0);
                g_23 = ATgetArgument(e_23, 1);
                n_13 :
                if(match_cons(h_23, sym_TNil_0))
                  {
                    ATerm l_23 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_23), (ATerm) ATmakeAppl(sym_Nil_0))));
                    {
                      ATerm g_1 (ATerm t)
                      {
                        ATerm h_15 = t;
                        if(PushChoice()==0)
                          {
                            ATerm i_15 = t;
                            if(PushChoice()==0)
                              {
                                t = layout_1(t, _id);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = i_15;
                            PopChoice();
                          }
                        else
                          {
                            t = h_15;
                            t = layout_1(t, _id);
                            t = is_significant_layout_0(t);
                            t = layout2box_0(t);
                          }
                        return(t);
                      }
                      t = filter_1(t, g_1);
                      t = flat_list_0(t);
                      l_23 = t;
                      t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_23));
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
ATerm layout_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_layout_1))
    {
      w_24 = ATgetArgument(v_24, 0);
      {
        ATerm y_24 = NULL;
        t = not_null(w_24);
        t = y_59(t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, not_null(y_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm j_15 = t;
    if(PushChoice()==0)
      {
        ATerm d_25 = NULL;
        t = x_60(t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_25), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = j_15;
        {
          ATerm h_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, h_1, conc_0, g_25);
        }
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  ATerm k_15 = t;
  if(PushChoice()==0)
    {
      ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
      ATerm v_25 (ATerm t)
      {
        if(n_25 != NULL && n_25 != q_25)
          _fail(q_25);
        else
          n_25 = q_25;
        if(o_25 != NULL && o_25 != r_25)
          _fail(r_25);
        else
          o_25 = r_25;
        t = not_null(n_25);
        t = is_list_0(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_25), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        t = flat_list_0(t);
        return(t);
      }
      p_25 = t;
      l_25 :
      if(!(match_cons(p_25, sym_Nil_0)))
        {
          if(match_cons(p_25, sym_Cons_2))
            {
              q_25 = ATgetArgument(p_25, 0);
              r_25 = ATgetArgument(p_25, 1);
              m_25 :
              if(match_cons(q_25, sym_Nil_0))
                {
                  ATerm l_15 = t;
                  if(PushChoice()==0)
                    {
                      if(o_25 != NULL && o_25 != r_25)
                        _fail(r_25);
                      else
                        o_25 = r_25;
                      {
                        ATerm i_1 (ATerm t)
                        {
                          ATerm s_25 = NULL;
                          s_25 = t;
                          k_25 :
                          if(!(match_cons(s_25, sym_Nil_0)))
                            _fail(t);
                          return(t);
                        }
                        ATerm j_1 (ATerm t)
                        {
                          t = not_null(o_25);
                          t = flat_list_0(t);
                          return(t);
                        }
                        t = Cons_2(t, i_1, j_1);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = l_15;
                      t = v_25(t);
                    }
                }
              else
                t = v_25(t);
            }
          else
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = k_15;
      t = Cons_2(t, _id, flat_list_0);
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Arg_1))
    {
      c_27 = ATgetArgument(b_27, 0);
      {
        ATerm f_27 = NULL;
        ATerm g_27 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm k_27 = NULL;
          t = t_0(t);
          g_27 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_27), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = index_0(t);
          k_27 = t;
          if(f_27 != NULL && f_27 != k_27)
            _fail(k_27);
          else
            f_27 = k_27;
        }
        t = not_null(f_27);
      }
    }
  else
    {
      if(match_cons(b_27, sym_Arg2_2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          {
            ATerm n_27 = NULL,o_27 = NULL;
            ATerm u_27 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm x_27 = NULL;
              t = t_0(t);
              u_27 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_27), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm y_27 = NULL;
                t = index_0(t);
                x_27 = t;
                if(n_27 != NULL && n_27 != x_27)
                  _fail(x_27);
                else
                  n_27 = x_27;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_27), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = index_0(t);
                y_27 = t;
                if(o_27 != NULL && o_27 != y_27)
                  _fail(y_27);
                else
                  o_27 = y_27;
              }
            }
            t = not_null(o_27);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    t = _all(t, g_28);
    t = v_76(t);
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL;
  o_28 = t;
  j_28 :
  if(match_cons(o_28, sym_TCons_2))
    {
      p_28 = ATgetArgument(o_28, 0);
      q_28 = ATgetArgument(o_28, 1);
      k_28 :
      if(match_cons(q_28, sym_TCons_2))
        {
          t_28 = ATgetArgument(q_28, 0);
          u_28 = ATgetArgument(q_28, 1);
          n_28 :
          if(match_cons(u_28, sym_TNil_0))
            {
              ATerm x_28 = NULL;
              ATerm y_28 = NULL;
              t = not_null(p_28);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm m_15 = t;
                  if(PushChoice()==0)
                    {
                      ATerm n_15 = t;
                      if(PushChoice()==0)
                        {
                          ATerm l_1 (ATerm t)
                          {
                            t = not_null(t_28);
                            return(t);
                          }
                          t = Instantiate_1(t, l_1);
                          PopChoice();
                        }
                      else
                        {
                          t = n_15;
                          t = flat_list_0(t);
                        }
                      PopChoice();
                    }
                  else
                    t = m_15;
                  return(t);
                }
                t = bottomup_1(t, k_1);
                y_28 = t;
                if(x_28 != NULL && x_28 != y_28)
                  _fail(y_28);
                else
                  x_28 = y_28;
              }
              t = not_null(x_28);
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
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_S_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm o_15 = t;
        if(PushChoice()==0)
          {
            ATerm n_29 = NULL;
            t = not_null(h_29);
            t = s_0(t);
            n_29 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(n_29));
            PopChoice();
          }
        else
          {
            t = o_15;
            {
              ATerm q_29 = NULL;
              t = not_null(h_29);
              t = s_0(t);
              q_29 = t;
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(q_29));
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
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym_Arg2_2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      {
        ATerm p_15 = t;
        if(PushChoice()==0)
          {
            ATerm n_30 = NULL;
            t = not_null(j_30);
            {
              ATerm p_30 = NULL;
              t = q_0(t);
              n_30 = t;
              t = not_null(k_30);
              t = r_0(t);
              p_30 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(n_30), not_null(p_30));
            }
            PopChoice();
          }
        else
          {
            t = p_15;
            {
              ATerm w_30 = NULL;
              t = not_null(j_30);
              {
                ATerm b_31 = NULL;
                t = q_0(t);
                w_30 = t;
                t = not_null(k_30);
                t = r_0(t);
                b_31 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(w_30), not_null(b_31));
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
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  q_32 = t;
  n_32 :
  if(match_cons(q_32, sym_TCons_2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      o_32 :
      if(match_cons(s_32, sym_TCons_2))
        {
          t_32 = ATgetArgument(s_32, 0);
          u_32 = ATgetArgument(s_32, 1);
          p_32 :
          if(match_cons(u_32, sym_TNil_0))
            {
              ATerm x_32 = NULL,y_32 = NULL;
              ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
              ATerm m_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm q_15 = t;
                  if(PushChoice()==0)
                    {
                      t = Arg_1(t, _id);
                      PopChoice();
                    }
                  else
                    {
                      t = q_15;
                      {
                        ATerm r_15 = t;
                        if(PushChoice()==0)
                          {
                            t = Arg2_2(t, _id, _id);
                            PopChoice();
                          }
                        else
                          {
                            t = r_15;
                            t = S_1(t, _id);
                          }
                      }
                    }
                  return(t);
                }
                t = collect_p__1(t, o_1);
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                ATerm p_1 (ATerm t)
                {
                  ATerm z_32 = NULL;
                  z_32 = t;
                  k_31 :
                  if(!(match_cons(z_32, sym_TNil_0)))
                    _fail(t);
                  return(t);
                }
                t = TCons_2(t, _id, p_1);
                return(t);
              }
              t = TCons_2(t, m_1, n_1);
              {
                ATerm w_34 (ATerm t)
                {
                  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
                  ATerm s_15 = t;
                  if(PushChoice()==0)
                    {
                      ATerm q_1 (ATerm t)
                      {
                        ATerm h_33 = NULL;
                        h_33 = t;
                        l_31 :
                        if(!(match_cons(h_33, sym_Nil_0)))
                          _fail(t);
                        return(t);
                      }
                      ATerm r_1 (ATerm t)
                      {
                        ATerm s_1 (ATerm t)
                        {
                          ATerm i_33 = NULL;
                          i_33 = t;
                          m_31 :
                          if(!(match_cons(i_33, sym_Nil_0)))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          ATerm j_33 = NULL;
                          j_33 = t;
                          n_31 :
                          if(!(match_cons(j_33, sym_TNil_0)))
                            _fail(t);
                          return(t);
                        }
                        t = TCons_2(t, s_1, t_1);
                        return(t);
                      }
                      t = TCons_2(t, q_1, r_1);
                      PopChoice();
                    }
                  else
                    {
                      t = s_15;
                      {
                        ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
                        ATerm z_34 (ATerm t)
                        {
                          ATerm f_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
                          if(g_33 != NULL && g_33 != o_33)
                            _fail(o_33);
                          else
                            g_33 = o_33;
                          if(b_33 != NULL && b_33 != p_33)
                            _fail(p_33);
                          else
                            b_33 = p_33;
                          if(f_33 != NULL && f_33 != s_33)
                            _fail(s_33);
                          else
                            f_33 = s_33;
                          if(d_33 != NULL && d_33 != t_33)
                            _fail(t_33);
                          else
                            d_33 = t_33;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = w_34(t);
                          f_34 = t;
                          a_32 :
                          if(match_cons(f_34, sym_TCons_2))
                            {
                              l_34 = ATgetArgument(f_34, 0);
                              m_34 = ATgetArgument(f_34, 1);
                              b_32 :
                              if(match_cons(m_34, sym_TCons_2))
                                {
                                  n_34 = ATgetArgument(m_34, 0);
                                  o_34 = ATgetArgument(m_34, 1);
                                  c_32 :
                                  if(match_cons(o_34, sym_TNil_0))
                                    {
                                      if(c_33 != NULL && c_33 != l_34)
                                        _fail(l_34);
                                      else
                                        c_33 = l_34;
                                      if(e_33 != NULL && e_33 != n_34)
                                        _fail(n_34);
                                      else
                                        e_33 = n_34;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_33), not_null(c_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                        m_33 = t;
                        d_32 :
                        if(match_cons(m_33, sym_TCons_2))
                          {
                            n_33 = ATgetArgument(m_33, 0);
                            q_33 = ATgetArgument(m_33, 1);
                            e_32 :
                            if(match_cons(n_33, sym_Cons_2))
                              {
                                o_33 = ATgetArgument(n_33, 0);
                                p_33 = ATgetArgument(n_33, 1);
                                f_32 :
                                if(match_cons(q_33, sym_TCons_2))
                                  {
                                    r_33 = ATgetArgument(q_33, 0);
                                    u_33 = ATgetArgument(q_33, 1);
                                    g_32 :
                                    if(match_cons(r_33, sym_Cons_2))
                                      {
                                        s_33 = ATgetArgument(r_33, 0);
                                        t_33 = ATgetArgument(r_33, 1);
                                        h_32 :
                                        if(match_cons(u_33, sym_TNil_0))
                                          {
                                            i_32 :
                                            if(match_cons(o_33, sym_Arg_1))
                                              {
                                                k_33 = ATgetArgument(o_33, 0);
                                                {
                                                  ATerm t_15 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
                                                      if(a_33 != NULL && a_33 != k_33)
                                                        _fail(k_33);
                                                      else
                                                        a_33 = k_33;
                                                      if(b_33 != NULL && b_33 != p_33)
                                                        _fail(p_33);
                                                      else
                                                        b_33 = p_33;
                                                      if(f_33 != NULL && f_33 != s_33)
                                                        _fail(s_33);
                                                      else
                                                        f_33 = s_33;
                                                      if(d_33 != NULL && d_33 != t_33)
                                                        _fail(t_33);
                                                      else
                                                        d_33 = t_33;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      t = w_34(t);
                                                      v_33 = t;
                                                      s_31 :
                                                      if(match_cons(v_33, sym_TCons_2))
                                                        {
                                                          w_33 = ATgetArgument(v_33, 0);
                                                          x_33 = ATgetArgument(v_33, 1);
                                                          t_31 :
                                                          if(match_cons(x_33, sym_TCons_2))
                                                            {
                                                              y_33 = ATgetArgument(x_33, 0);
                                                              z_33 = ATgetArgument(x_33, 1);
                                                              u_31 :
                                                              if(match_cons(z_33, sym_TNil_0))
                                                                {
                                                                  if(c_33 != NULL && c_33 != w_33)
                                                                    _fail(w_33);
                                                                  else
                                                                    c_33 = w_33;
                                                                  if(e_33 != NULL && e_33 != y_33)
                                                                    _fail(y_33);
                                                                  else
                                                                    e_33 = y_33;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Arg_1, not_null(a_33)), not_null(c_33)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_33), not_null(e_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                                      t = t_15;
                                                      t = z_34(t);
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(o_33, sym_Arg2_2))
                                                  {
                                                    k_33 = ATgetArgument(o_33, 0);
                                                    l_33 = ATgetArgument(o_33, 1);
                                                    {
                                                      ATerm u_15 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
                                                          if(a_33 != NULL && a_33 != k_33)
                                                            _fail(k_33);
                                                          else
                                                            a_33 = k_33;
                                                          if(x_32 != NULL && x_32 != l_33)
                                                            _fail(l_33);
                                                          else
                                                            x_32 = l_33;
                                                          if(b_33 != NULL && b_33 != p_33)
                                                            _fail(p_33);
                                                          else
                                                            b_33 = p_33;
                                                          if(f_33 != NULL && f_33 != s_33)
                                                            _fail(s_33);
                                                          else
                                                            f_33 = s_33;
                                                          if(d_33 != NULL && d_33 != t_33)
                                                            _fail(t_33);
                                                          else
                                                            d_33 = t_33;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          t = w_34(t);
                                                          a_34 = t;
                                                          w_31 :
                                                          if(match_cons(a_34, sym_TCons_2))
                                                            {
                                                              b_34 = ATgetArgument(a_34, 0);
                                                              c_34 = ATgetArgument(a_34, 1);
                                                              x_31 :
                                                              if(match_cons(c_34, sym_TCons_2))
                                                                {
                                                                  d_34 = ATgetArgument(c_34, 0);
                                                                  e_34 = ATgetArgument(c_34, 1);
                                                                  y_31 :
                                                                  if(match_cons(e_34, sym_TNil_0))
                                                                    {
                                                                      if(c_33 != NULL && c_33 != b_34)
                                                                        _fail(b_34);
                                                                      else
                                                                        c_33 = b_34;
                                                                      if(e_33 != NULL && e_33 != d_34)
                                                                        _fail(d_34);
                                                                      else
                                                                        e_33 = d_34;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Arg2_2, not_null(a_33), not_null(x_32)), not_null(c_33)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_33), not_null(e_33)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                                                          t = u_15;
                                                          t = z_34(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  t = z_34(t);
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
                t = w_34(t);
                p_34 = t;
                k_32 :
                if(match_cons(p_34, sym_TCons_2))
                  {
                    q_34 = ATgetArgument(p_34, 0);
                    r_34 = ATgetArgument(p_34, 1);
                    l_32 :
                    if(match_cons(r_34, sym_TCons_2))
                      {
                        s_34 = ATgetArgument(r_34, 0);
                        t_34 = ATgetArgument(r_34, 1);
                        m_32 :
                        if(match_cons(t_34, sym_TNil_0))
                          {
                            if(y_32 != NULL && y_32 != s_34)
                              _fail(s_34);
                            else
                              y_32 = s_34;
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
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  j_35 = t;
  g_35 :
  if(match_cons(j_35, sym_TCons_2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      h_35 :
      if(match_cons(l_35, sym_TCons_2))
        {
          m_35 = ATgetArgument(l_35, 0);
          n_35 = ATgetArgument(l_35, 1);
          i_35 :
          if(match_cons(n_35, sym_TNil_0))
            {
              ATerm q_35 = NULL;
              ATerm r_35 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              r_35 = t;
              if(q_35 != NULL && q_35 != r_35)
                _fail(r_35);
              else
                q_35 = r_35;
              t = not_null(q_35);
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
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  c_36 = t;
  v_35 :
  if(match_cons(c_36, sym_TCons_2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      w_35 :
      if(match_int(d_36, 1))
        {
          x_35 :
          if(match_cons(e_36, sym_TCons_2))
            {
              f_36 = ATgetArgument(e_36, 0);
              i_36 = ATgetArgument(e_36, 1);
              y_35 :
              if(match_cons(f_36, sym_Cons_2))
                {
                  g_36 = ATgetArgument(f_36, 0);
                  h_36 = ATgetArgument(f_36, 1);
                  z_35 :
                  if(match_cons(i_36, sym_TNil_0))
                    t = not_null(g_36);
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
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  q_36 = t;
  n_36 :
  if(match_cons(q_36, sym_TCons_2))
    {
      r_36 = ATgetArgument(q_36, 0);
      s_36 = ATgetArgument(q_36, 1);
      o_36 :
      if(match_cons(s_36, sym_TCons_2))
        {
          t_36 = ATgetArgument(s_36, 0);
          u_36 = ATgetArgument(s_36, 1);
          p_36 :
          if(match_cons(u_36, sym_TNil_0))
            {
              ATerm v_15 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(r_36), not_null(t_36));
                  PopChoice();
                }
              else
                {
                  t = v_15;
                  t = SSL_subtr(not_null(r_36), not_null(t_36));
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
  ATerm c_37 = NULL;
  ATerm w_15 = t;
  if(PushChoice()==0)
    {
      ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,i_37 = NULL,j_37 = NULL;
      d_37 = t;
      z_36 :
      if(match_cons(d_37, sym_TCons_2))
        {
          e_37 = ATgetArgument(d_37, 0);
          f_37 = ATgetArgument(d_37, 1);
          a_37 :
          if(match_cons(f_37, sym_TCons_2))
            {
              i_37 = ATgetArgument(f_37, 0);
              j_37 = ATgetArgument(f_37, 1);
              b_37 :
              if(match_cons(j_37, sym_TNil_0))
                {
                  if(c_37 != NULL && c_37 != e_37)
                    _fail(e_37);
                  else
                    c_37 = e_37;
                  if(c_37 != NULL && c_37 != i_37)
                    _fail(i_37);
                  else
                    c_37 = i_37;
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
      t = w_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm t_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  t_37 = t;
  p_37 :
  if(match_cons(t_37, sym_TCons_2))
    {
      w_37 = ATgetArgument(t_37, 0);
      x_37 = ATgetArgument(t_37, 1);
      q_37 :
      if(match_cons(x_37, sym_TCons_2))
        {
          y_37 = ATgetArgument(x_37, 0);
          b_38 = ATgetArgument(x_37, 1);
          r_37 :
          if(match_cons(y_37, sym_Cons_2))
            {
              z_37 = ATgetArgument(y_37, 0);
              a_38 = ATgetArgument(y_37, 1);
              s_37 :
              if(match_cons(b_38, sym_TNil_0))
                {
                  ATerm f_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = geq_0(t);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_37), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = subt_0(t);
                  f_38 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_38), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
    ATerm x_15 = t;
    if(PushChoice()==0)
      {
        ATerm s_38 = NULL;
        s_38 = t;
        j_38 :
        if(!(match_cons(s_38, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_15;
        {
          ATerm y_15 = t;
          if(PushChoice()==0)
            {
              ATerm u_1 (ATerm t)
              {
                ATerm t_38 = NULL;
                t_38 = t;
                k_38 :
                if(!(match_cons(t_38, sym_Nil_0)))
                  _fail(t);
                return(t);
              }
              t = Cons_2(t, _id, u_1);
              PopChoice();
            }
          else
            {
              t = y_15;
              {
                ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
                u_38 = t;
                n_38 :
                if(match_cons(u_38, sym_Cons_2))
                  {
                    v_38 = ATgetArgument(u_38, 0);
                    w_38 = ATgetArgument(u_38, 1);
                    o_38 :
                    if(match_cons(w_38, sym_Cons_2))
                      {
                        x_38 = ATgetArgument(w_38, 0);
                        y_38 = ATgetArgument(w_38, 1);
                        if(p_38 != NULL && p_38 != v_38)
                          _fail(v_38);
                        else
                          p_38 = v_38;
                        if(q_38 != NULL && q_38 != x_38)
                          _fail(x_38);
                        else
                          q_38 = x_38;
                        if(r_38 != NULL && r_38 != y_38)
                          _fail(y_38);
                        else
                          r_38 = y_38;
                        {
                          ATerm v_1 (ATerm t)
                          {
                            ATerm z_38 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = u_60(t);
                            z_38 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_38), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = instantiate_0(t);
                            return(t);
                          }
                          ATerm w_1 (ATerm t)
                          {
                            t = not_null(r_38);
                            t = b_39(t);
                            return(t);
                          }
                          t = Cons_2(t, v_1, w_1);
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
  t = b_39(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  i_39 = t;
  f_39 :
  if(match_cons(i_39, sym_TCons_2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      g_39 :
      if(match_cons(k_39, sym_TCons_2))
        {
          l_39 = ATgetArgument(k_39, 0);
          m_39 = ATgetArgument(k_39, 1);
          h_39 :
          if(match_cons(m_39, sym_TNil_0))
            t = SSL_mod(not_null(j_39), not_null(l_39));
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
  ATerm z_39 = NULL;
  ATerm b_40 = NULL;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = mod_0(t);
  b_40 = t;
  r_39 :
  if(!(match_int(b_40, 0)))
    _fail(t);
  return(t);
}
ATerm BuildSepList_4 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,w_40 = NULL,x_40 = NULL;
  o_40 = t;
  l_40 :
  if(match_cons(o_40, sym_TCons_2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      m_40 :
      if(match_cons(q_40, sym_TCons_2))
        {
          w_40 = ATgetArgument(q_40, 0);
          x_40 = ATgetArgument(q_40, 1);
          n_40 :
          if(match_cons(x_40, sym_TNil_0))
            {
              ATerm a_41 = NULL;
              ATerm r_41 = NULL;
              ATerm z_15 = t;
              if(PushChoice()==0)
                {
                  ATerm b_41 = NULL;
                  t = not_null(p_40);
                  t = even_0(t);
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm d_41 = NULL;
                    t = d_81(t);
                    b_41 = t;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = e_81(t);
                    d_41 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)))));
                    t = symbol2abox_0(t);
                    {
                      ATerm a_16 = t;
                      if(PushChoice()==0)
                        {
                          ATerm j_41 = NULL;
                          j_41 = t;
                          {
                            ATerm b_16 = t;
                            if(PushChoice()==0)
                              {
                                t = is_list_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = b_16;
                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_Nil_0));
                          }
                          PopChoice();
                        }
                      else
                        t = a_16;
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = z_15;
                  {
                    ATerm l_41 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    {
                      ATerm n_41 = NULL;
                      t = c_81(t);
                      l_41 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      t = e_81(t);
                      n_41 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_41), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                      t = symbol2abox_0(t);
                      {
                        ATerm c_16 = t;
                        if(PushChoice()==0)
                          {
                            ATerm p_41 = NULL;
                            p_41 = t;
                            {
                              ATerm d_16 = t;
                              if(PushChoice()==0)
                                {
                                  t = is_list_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = d_16;
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_41), (ATerm) ATmakeAppl(sym_Nil_0));
                            }
                            PopChoice();
                          }
                        else
                          t = c_16;
                      }
                    }
                  }
                }
              r_41 = t;
              if(a_41 != NULL && a_41 != r_41)
                _fail(r_41);
              else
                a_41 = r_41;
              t = not_null(a_41);
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
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  p_42 = t;
  m_42 :
  if(match_cons(p_42, sym_TCons_2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      n_42 :
      if(match_cons(r_42, sym_TCons_2))
        {
          s_42 = ATgetArgument(r_42, 0);
          t_42 = ATgetArgument(r_42, 1);
          o_42 :
          if(match_cons(t_42, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_42), not_null(s_42));
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
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  b_49 = t;
  x_48 :
  if(match_cons(b_49, sym_TCons_2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      y_48 :
      if(match_cons(d_49, sym_TCons_2))
        {
          e_49 = ATgetArgument(d_49, 0);
          h_49 = ATgetArgument(d_49, 1);
          z_48 :
          if(match_cons(e_49, sym_Cons_2))
            {
              f_49 = ATgetArgument(e_49, 0);
              g_49 = ATgetArgument(e_49, 1);
              a_49 :
              if(match_cons(h_49, sym_TNil_0))
                {
                  ATerm l_49 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_49), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  l_49 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_49), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(l_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_49), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  u_49 = t;
  q_49 :
  if(match_cons(u_49, sym_TCons_2))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      r_49 :
      if(match_cons(w_49, sym_TCons_2))
        {
          x_49 = ATgetArgument(w_49, 0);
          y_49 = ATgetArgument(w_49, 1);
          s_49 :
          if(match_cons(x_49, sym_Nil_0))
            {
              t_49 :
              if(match_cons(y_49, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm))
{
  ATerm d_50 (ATerm t)
  {
    ATerm e_16 = t;
    if(PushChoice()==0)
      {
        t = p_72(t);
        PopChoice();
      }
    else
      {
        t = e_16;
        t = q_72(t);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm y_1 (ATerm t)
            {
              ATerm c_50 = NULL;
              c_50 = t;
              b_50 :
              if(!(match_cons(c_50, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, d_50, y_1);
            return(t);
          }
          t = TCons_2(t, s_72, x_1);
          t = r_72(t);
        }
      }
    return(t);
  }
  t = d_50(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_50), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm b_73 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, b_73);
  return(t);
}
ATerm build_sep_list_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  w_50 = t;
  r_50 :
  if(match_cons(w_50, sym_TCons_2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      s_50 :
      if(match_cons(y_50, sym_TCons_2))
        {
          z_50 = ATgetArgument(y_50, 0);
          a_51 = ATgetArgument(y_50, 1);
          t_50 :
          if(match_cons(a_51, sym_TCons_2))
            {
              b_51 = ATgetArgument(a_51, 0);
              c_51 = ATgetArgument(a_51, 1);
              u_50 :
              if(match_cons(c_51, sym_TCons_2))
                {
                  d_51 = ATgetArgument(c_51, 0);
                  e_51 = ATgetArgument(c_51, 1);
                  v_50 :
                  if(match_cons(e_51, sym_TNil_0))
                    {
                      ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
                      ATerm p_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm u_51 = NULL;
                        t = make_path_0(t);
                        p_51 = t;
                        if(l_51 != NULL && l_51 != p_51)
                          _fail(p_51);
                        else
                          l_51 = p_51;
                        t = not_null(x_50);
                        {
                          ATerm f_16 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm q_51 = NULL;
                                q_51 = t;
                                if(j_51 != NULL && j_51 != q_51)
                                  _fail(q_51);
                                else
                                  j_51 = q_51;
                                return(t);
                              }
                              ATerm a_2 (ATerm t)
                              {
                                ATerm r_51 = NULL;
                                r_51 = t;
                                if(k_51 != NULL && k_51 != r_51)
                                  _fail(r_51);
                                else
                                  k_51 = r_51;
                                return(t);
                              }
                              t = iter_sep_2(t, z_1, a_2);
                              PopChoice();
                            }
                          else
                            {
                              t = f_16;
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  ATerm s_51 = NULL;
                                  s_51 = t;
                                  if(j_51 != NULL && j_51 != s_51)
                                    _fail(s_51);
                                  else
                                    j_51 = s_51;
                                  return(t);
                                }
                                ATerm c_2 (ATerm t)
                                {
                                  ATerm t_51 = NULL;
                                  t_51 = t;
                                  if(k_51 != NULL && k_51 != t_51)
                                    _fail(t_51);
                                  else
                                    k_51 = t_51;
                                  return(t);
                                }
                                t = iter_star_sep_2(t, b_2, c_2);
                              }
                            }
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm v_51 = NULL;
                            t = get_pp_entry_0(t);
                            u_51 = t;
                            if(m_51 != NULL && m_51 != u_51)
                              _fail(u_51);
                            else
                              m_51 = u_51;
                            t = not_null(z_50);
                            {
                              ATerm w_51 = NULL;
                              ATerm d_2 (ATerm t)
                              {
                                ATerm e_2 (ATerm t)
                                {
                                  t = not_null(j_51);
                                  return(t);
                                }
                                ATerm f_2 (ATerm t)
                                {
                                  t = not_null(k_51);
                                  return(t);
                                }
                                ATerm g_2 (ATerm t)
                                {
                                  t = not_null(l_51);
                                  return(t);
                                }
                                ATerm h_2 (ATerm t)
                                {
                                  t = not_null(d_51);
                                  return(t);
                                }
                                t = BuildSepList_4(t, e_2, f_2, g_2, h_2);
                                return(t);
                              }
                              t = nzip_1(t, d_2);
                              v_51 = t;
                              if(n_51 != NULL && n_51 != v_51)
                                _fail(v_51);
                              else
                                n_51 = v_51;
                              t = not_null(n_51);
                              {
                                ATerm i_2 (ATerm t)
                                {
                                  t = not_null(m_51);
                                  return(t);
                                }
                                t = instantiate_sep_list_1(t, i_2);
                                w_51 = t;
                                if(o_51 != NULL && o_51 != w_51)
                                  _fail(w_51);
                                else
                                  o_51 = w_51;
                              }
                            }
                          }
                        }
                      }
                      t = not_null(o_51);
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
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
  u_52 = t;
  p_52 :
  if(match_cons(u_52, sym_TCons_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      q_52 :
      if(match_cons(w_52, sym_TCons_2))
        {
          x_52 = ATgetArgument(w_52, 0);
          y_52 = ATgetArgument(w_52, 1);
          r_52 :
          if(match_cons(y_52, sym_TCons_2))
            {
              z_52 = ATgetArgument(y_52, 0);
              a_53 = ATgetArgument(y_52, 1);
              s_52 :
              if(match_cons(a_53, sym_TCons_2))
                {
                  b_53 = ATgetArgument(a_53, 0);
                  c_53 = ATgetArgument(a_53, 1);
                  t_52 :
                  if(match_cons(c_53, sym_TNil_0))
                    {
                      ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
                      ATerm m_53 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_53), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm p_53 = NULL;
                        t = make_path_0(t);
                        m_53 = t;
                        if(i_53 != NULL && i_53 != m_53)
                          _fail(m_53);
                        else
                          i_53 = m_53;
                        t = not_null(v_52);
                        {
                          ATerm g_16 = t;
                          if(PushChoice()==0)
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm n_53 = NULL;
                                n_53 = t;
                                if(h_53 != NULL && h_53 != n_53)
                                  _fail(n_53);
                                else
                                  h_53 = n_53;
                                return(t);
                              }
                              t = iter_1(t, j_2);
                              PopChoice();
                            }
                          else
                            {
                              t = g_16;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  ATerm o_53 = NULL;
                                  o_53 = t;
                                  if(h_53 != NULL && h_53 != o_53)
                                    _fail(o_53);
                                  else
                                    h_53 = o_53;
                                  return(t);
                                }
                                t = iter_star_1(t, k_2);
                              }
                            }
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_53), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm v_53 = NULL;
                            t = get_pp_entry_0(t);
                            p_53 = t;
                            if(j_53 != NULL && j_53 != p_53)
                              _fail(p_53);
                            else
                              j_53 = p_53;
                            t = not_null(x_52);
                            {
                              ATerm w_53 = NULL;
                              ATerm l_2 (ATerm t)
                              {
                                ATerm q_53 = NULL;
                                ATerm s_53 = NULL;
                                q_53 = t;
                                {
                                  ATerm t_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_53), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                  t = symbol2abox_0(t);
                                  t_53 = t;
                                  if(s_53 != NULL && s_53 != t_53)
                                    _fail(t_53);
                                  else
                                    s_53 = t_53;
                                  t = not_null(s_53);
                                }
                                return(t);
                              }
                              t = map_1(t, l_2);
                              v_53 = t;
                              if(k_53 != NULL && k_53 != v_53)
                                _fail(v_53);
                              else
                                k_53 = v_53;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_53), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_53), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = instantiate_0(t);
                              w_53 = t;
                              if(l_53 != NULL && l_53 != w_53)
                                _fail(w_53);
                              else
                                l_53 = w_53;
                            }
                          }
                        }
                      }
                      t = not_null(l_53);
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
  ATerm h_54 = NULL;
  h_54 = t;
  t = SSL_is_string(not_null(h_54));
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  w_58 = t;
  w_56 :
  if(match_cons(w_58, sym_TCons_2))
    {
      x_58 = ATgetArgument(w_58, 0);
      z_58 = ATgetArgument(w_58, 1);
      x_56 :
      if(match_cons(x_58, sym_lit_1))
        {
          y_58 = ATgetArgument(x_58, 0);
          y_56 :
          if(match_cons(z_58, sym_TCons_2))
            {
              a_59 = ATgetArgument(z_58, 0);
              d_59 = ATgetArgument(z_58, 1);
              z_56 :
              if(match_cons(d_59, sym_TCons_2))
                {
                  e_59 = ATgetArgument(d_59, 0);
                  f_59 = ATgetArgument(d_59, 1);
                  a_57 :
                  if(match_cons(f_59, sym_TCons_2))
                    {
                      g_59 = ATgetArgument(f_59, 0);
                      h_59 = ATgetArgument(f_59, 1);
                      b_57 :
                      if(match_cons(h_59, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_58));
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
          if(match_cons(x_58, sym_sort_1))
            {
              y_58 = ATgetArgument(x_58, 0);
              c_57 :
              if(match_cons(z_58, sym_TCons_2))
                {
                  a_59 = ATgetArgument(z_58, 0);
                  d_59 = ATgetArgument(z_58, 1);
                  d_57 :
                  if(match_cons(d_59, sym_TCons_2))
                    {
                      e_59 = ATgetArgument(d_59, 0);
                      f_59 = ATgetArgument(d_59, 1);
                      e_57 :
                      if(match_cons(f_59, sym_TCons_2))
                        {
                          g_59 = ATgetArgument(f_59, 0);
                          h_59 = ATgetArgument(f_59, 1);
                          f_57 :
                          if(match_cons(h_59, sym_TNil_0))
                            {
                              ATerm h_16 = t;
                              if(PushChoice()==0)
                                {
                                  t = not_null(a_59);
                                  t = is_string_0(t);
                                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_59));
                                  PopChoice();
                                }
                              else
                                {
                                  t = h_16;
                                  {
                                    ATerm g_60 = NULL;
                                    ATerm h_60 = NULL;
                                    t = not_null(a_59);
                                    {
                                      ATerm n_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = is_string_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = n_16;
                                      t = not_null(a_59);
                                      t = appl2abox_0(t);
                                      h_60 = t;
                                      if(g_60 != NULL && g_60 != h_60)
                                        _fail(h_60);
                                      else
                                        g_60 = h_60;
                                    }
                                    t = not_null(g_60);
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
              if(match_cons(x_58, sym_char_class_1))
                {
                  y_58 = ATgetArgument(x_58, 0);
                  g_57 :
                  if(match_cons(z_58, sym_TCons_2))
                    {
                      a_59 = ATgetArgument(z_58, 0);
                      d_59 = ATgetArgument(z_58, 1);
                      h_57 :
                      if(match_cons(d_59, sym_TCons_2))
                        {
                          e_59 = ATgetArgument(d_59, 0);
                          f_59 = ATgetArgument(d_59, 1);
                          i_57 :
                          if(match_cons(f_59, sym_TCons_2))
                            {
                              g_59 = ATgetArgument(f_59, 0);
                              h_59 = ATgetArgument(f_59, 1);
                              j_57 :
                              if(match_cons(h_59, sym_TNil_0))
                                {
                                  ATerm u_59 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_Nil_0));
                                  t = implode_string_0(t);
                                  u_59 = t;
                                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(u_59));
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
                  if(match_cons(x_58, sym_opt_1))
                    {
                      y_58 = ATgetArgument(x_58, 0);
                      k_57 :
                      if(match_cons(z_58, sym_TCons_2))
                        {
                          a_59 = ATgetArgument(z_58, 0);
                          d_59 = ATgetArgument(z_58, 1);
                          l_57 :
                          if(match_cons(a_59, sym_appl_2))
                            {
                              b_59 = ATgetArgument(a_59, 0);
                              c_59 = ATgetArgument(a_59, 1);
                              m_57 :
                              if(match_cons(c_59, sym_Nil_0))
                                {
                                  n_57 :
                                  if(match_cons(d_59, sym_TCons_2))
                                    {
                                      e_59 = ATgetArgument(d_59, 0);
                                      f_59 = ATgetArgument(d_59, 1);
                                      o_57 :
                                      if(match_cons(f_59, sym_TCons_2))
                                        {
                                          g_59 = ATgetArgument(f_59, 0);
                                          h_59 = ATgetArgument(f_59, 1);
                                          p_57 :
                                          if(match_cons(h_59, sym_TNil_0))
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
                                  if(match_cons(c_59, sym_Cons_2))
                                    {
                                      t_58 = ATgetArgument(c_59, 0);
                                      u_58 = ATgetArgument(c_59, 1);
                                      q_57 :
                                      if(match_cons(u_58, sym_Nil_0))
                                        {
                                          r_57 :
                                          if(match_cons(d_59, sym_TCons_2))
                                            {
                                              e_59 = ATgetArgument(d_59, 0);
                                              f_59 = ATgetArgument(d_59, 1);
                                              s_57 :
                                              if(match_cons(f_59, sym_TCons_2))
                                                {
                                                  g_59 = ATgetArgument(f_59, 0);
                                                  h_59 = ATgetArgument(f_59, 1);
                                                  t_57 :
                                                  if(match_cons(h_59, sym_TNil_0))
                                                    {
                                                      ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
                                                      ATerm o_61 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                      {
                                                        ATerm p_61 = NULL;
                                                        t = make_path_0(t);
                                                        o_61 = t;
                                                        if(k_61 != NULL && k_61 != o_61)
                                                          _fail(o_61);
                                                        else
                                                          k_61 = o_61;
                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_opt_1, not_null(y_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                        {
                                                          ATerm q_61 = NULL;
                                                          t = get_pp_entry_0(t);
                                                          p_61 = t;
                                                          if(l_61 != NULL && l_61 != p_61)
                                                            _fail(p_61);
                                                          else
                                                            l_61 = p_61;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                          {
                                                            ATerm r_61 = NULL;
                                                            t = symbol2abox_0(t);
                                                            q_61 = t;
                                                            if(m_61 != NULL && m_61 != q_61)
                                                              _fail(q_61);
                                                            else
                                                              m_61 = q_61;
                                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_61), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                            t = filter_literals_0(t);
                                                            t = instantiate_0(t);
                                                            r_61 = t;
                                                            if(n_61 != NULL && n_61 != r_61)
                                                              _fail(r_61);
                                                            else
                                                              n_61 = r_61;
                                                          }
                                                        }
                                                      }
                                                      t = not_null(n_61);
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
                      if(match_cons(x_58, sym_iter_1))
                        {
                          y_58 = ATgetArgument(x_58, 0);
                          u_57 :
                          if(match_cons(z_58, sym_TCons_2))
                            {
                              a_59 = ATgetArgument(z_58, 0);
                              d_59 = ATgetArgument(z_58, 1);
                              v_57 :
                              if(match_cons(d_59, sym_TCons_2))
                                {
                                  e_59 = ATgetArgument(d_59, 0);
                                  f_59 = ATgetArgument(d_59, 1);
                                  w_57 :
                                  if(match_cons(f_59, sym_TCons_2))
                                    {
                                      g_59 = ATgetArgument(f_59, 0);
                                      h_59 = ATgetArgument(f_59, 1);
                                      x_57 :
                                      if(match_cons(h_59, sym_TNil_0))
                                        {
                                          ATerm w_61 = NULL;
                                          ATerm x_61 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_1, not_null(y_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                          t = build_list_0(t);
                                          x_61 = t;
                                          if(w_61 != NULL && w_61 != x_61)
                                            _fail(x_61);
                                          else
                                            w_61 = x_61;
                                          t = not_null(w_61);
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
                          if(match_cons(x_58, sym_iter_star_1))
                            {
                              y_58 = ATgetArgument(x_58, 0);
                              y_57 :
                              if(match_cons(z_58, sym_TCons_2))
                                {
                                  a_59 = ATgetArgument(z_58, 0);
                                  d_59 = ATgetArgument(z_58, 1);
                                  z_57 :
                                  if(match_cons(d_59, sym_TCons_2))
                                    {
                                      e_59 = ATgetArgument(d_59, 0);
                                      f_59 = ATgetArgument(d_59, 1);
                                      a_58 :
                                      if(match_cons(f_59, sym_TCons_2))
                                        {
                                          g_59 = ATgetArgument(f_59, 0);
                                          h_59 = ATgetArgument(f_59, 1);
                                          b_58 :
                                          if(match_cons(h_59, sym_TNil_0))
                                            {
                                              ATerm c_62 = NULL;
                                              ATerm d_62 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(y_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                              t = build_list_0(t);
                                              d_62 = t;
                                              if(c_62 != NULL && c_62 != d_62)
                                                _fail(d_62);
                                              else
                                                c_62 = d_62;
                                              t = not_null(c_62);
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
                              if(match_cons(x_58, sym_iter_sep_2))
                                {
                                  y_58 = ATgetArgument(x_58, 0);
                                  v_58 = ATgetArgument(x_58, 1);
                                  c_58 :
                                  if(match_cons(z_58, sym_TCons_2))
                                    {
                                      a_59 = ATgetArgument(z_58, 0);
                                      d_59 = ATgetArgument(z_58, 1);
                                      d_58 :
                                      if(match_cons(d_59, sym_TCons_2))
                                        {
                                          e_59 = ATgetArgument(d_59, 0);
                                          f_59 = ATgetArgument(d_59, 1);
                                          e_58 :
                                          if(match_cons(f_59, sym_TCons_2))
                                            {
                                              g_59 = ATgetArgument(f_59, 0);
                                              h_59 = ATgetArgument(f_59, 1);
                                              f_58 :
                                              if(match_cons(h_59, sym_TNil_0))
                                                {
                                                  ATerm j_62 = NULL;
                                                  ATerm k_62 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(y_58), not_null(v_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                  t = build_sep_list_0(t);
                                                  k_62 = t;
                                                  if(j_62 != NULL && j_62 != k_62)
                                                    _fail(k_62);
                                                  else
                                                    j_62 = k_62;
                                                  t = not_null(j_62);
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
                                  if(match_cons(x_58, sym_iter_star_sep_2))
                                    {
                                      y_58 = ATgetArgument(x_58, 0);
                                      v_58 = ATgetArgument(x_58, 1);
                                      g_58 :
                                      if(match_cons(z_58, sym_TCons_2))
                                        {
                                          a_59 = ATgetArgument(z_58, 0);
                                          d_59 = ATgetArgument(z_58, 1);
                                          h_58 :
                                          if(match_cons(d_59, sym_TCons_2))
                                            {
                                              e_59 = ATgetArgument(d_59, 0);
                                              f_59 = ATgetArgument(d_59, 1);
                                              i_58 :
                                              if(match_cons(f_59, sym_TCons_2))
                                                {
                                                  g_59 = ATgetArgument(f_59, 0);
                                                  h_59 = ATgetArgument(f_59, 1);
                                                  j_58 :
                                                  if(match_cons(h_59, sym_TNil_0))
                                                    {
                                                      ATerm q_62 = NULL;
                                                      ATerm r_62 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(y_58), not_null(v_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                      t = build_sep_list_0(t);
                                                      r_62 = t;
                                                      if(q_62 != NULL && q_62 != r_62)
                                                        _fail(r_62);
                                                      else
                                                        q_62 = r_62;
                                                      t = not_null(q_62);
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
                                      if(match_cons(x_58, sym_alt_2))
                                        {
                                          y_58 = ATgetArgument(x_58, 0);
                                          v_58 = ATgetArgument(x_58, 1);
                                          k_58 :
                                          if(match_cons(z_58, sym_TCons_2))
                                            {
                                              a_59 = ATgetArgument(z_58, 0);
                                              d_59 = ATgetArgument(z_58, 1);
                                              l_58 :
                                              if(match_cons(d_59, sym_TCons_2))
                                                {
                                                  e_59 = ATgetArgument(d_59, 0);
                                                  f_59 = ATgetArgument(d_59, 1);
                                                  m_58 :
                                                  if(match_cons(f_59, sym_TCons_2))
                                                    {
                                                      g_59 = ATgetArgument(f_59, 0);
                                                      h_59 = ATgetArgument(f_59, 1);
                                                      n_58 :
                                                      if(match_cons(h_59, sym_TNil_0))
                                                        {
                                                          ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL;
                                                          ATerm c_63 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                          {
                                                            ATerm d_63 = NULL;
                                                            t = make_path_0(t);
                                                            c_63 = t;
                                                            if(x_62 != NULL && x_62 != c_63)
                                                              _fail(c_63);
                                                            else
                                                              x_62 = c_63;
                                                            {
                                                              ATerm o_65 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_alt_2, not_null(y_58), not_null(v_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_62), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                              d_63 = t;
                                                              if(y_62 != NULL && y_62 != d_63)
                                                                _fail(d_63);
                                                              else
                                                                y_62 = d_63;
                                                              {
                                                                ATerm f_67 (ATerm t)
                                                                {
                                                                  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
                                                                  ATerm g_67 (ATerm t)
                                                                  {
                                                                    ATerm d_64 = NULL,e_64 = NULL,g_64 = NULL,h_64 = NULL;
                                                                    if(e_63 != NULL && e_63 != h_63)
                                                                      _fail(h_63);
                                                                    else
                                                                      e_63 = h_63;
                                                                    if(e_63 != NULL && e_63 != k_63)
                                                                      _fail(k_63);
                                                                    else
                                                                      e_63 = k_63;
                                                                    if(f_63 != NULL && f_63 != l_63)
                                                                      _fail(l_63);
                                                                    else
                                                                      f_63 = l_63;
                                                                    if(e_64 != NULL && e_64 != m_63)
                                                                      _fail(m_63);
                                                                    else
                                                                      e_64 = m_63;
                                                                    if(d_64 != NULL && d_64 != s_63)
                                                                      _fail(s_63);
                                                                    else
                                                                      d_64 = s_63;
                                                                    if(h_64 != NULL && h_64 != w_63)
                                                                      _fail(w_63);
                                                                    else
                                                                      h_64 = w_63;
                                                                    if(g_64 != NULL && g_64 != y_63)
                                                                      _fail(y_63);
                                                                    else
                                                                      g_64 = y_63;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(e_63), not_null(e_64)), not_null(d_64)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                    t = f_67(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm h_67 (ATerm t)
                                                                  {
                                                                    ATerm l_64 = NULL,m_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
                                                                    if(e_63 != NULL && e_63 != k_63)
                                                                      _fail(k_63);
                                                                    else
                                                                      e_63 = k_63;
                                                                    if(f_63 != NULL && f_63 != l_63)
                                                                      _fail(l_63);
                                                                    else
                                                                      f_63 = l_63;
                                                                    if(m_64 != NULL && m_64 != m_63)
                                                                      _fail(m_63);
                                                                    else
                                                                      m_64 = m_63;
                                                                    if(l_64 != NULL && l_64 != s_63)
                                                                      _fail(s_63);
                                                                    else
                                                                      l_64 = s_63;
                                                                    if(v_64 != NULL && v_64 != w_63)
                                                                      _fail(w_63);
                                                                    else
                                                                      v_64 = w_63;
                                                                    if(u_64 != NULL && u_64 != y_63)
                                                                      _fail(y_63);
                                                                    else
                                                                      u_64 = y_63;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_64), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    t = add_0(t);
                                                                    w_64 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(f_63), not_null(m_64)), not_null(l_64)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_64), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                    t = f_67(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm i_67 (ATerm t)
                                                                  {
                                                                    ATerm k_65 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_62), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    {
                                                                      ATerm l_65 = NULL;
                                                                      t = get_pp_entry_0(t);
                                                                      k_65 = t;
                                                                      if(z_62 != NULL && z_62 != k_65)
                                                                        _fail(k_65);
                                                                      else
                                                                        z_62 = k_65;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_63), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                      {
                                                                        ATerm m_65 = NULL;
                                                                        t = symbol2abox_0(t);
                                                                        l_65 = t;
                                                                        if(a_63 != NULL && a_63 != l_65)
                                                                          _fail(l_65);
                                                                        else
                                                                          a_63 = l_65;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_62), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = index_0(t);
                                                                        m_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_65), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_63), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = instantiate_0(t);
                                                                      }
                                                                    }
                                                                    return(t);
                                                                  }
                                                                  n_63 = t;
                                                                  p_55 :
                                                                  if(match_cons(n_63, sym_TCons_2))
                                                                    {
                                                                      o_63 = ATgetArgument(n_63, 0);
                                                                      p_63 = ATgetArgument(n_63, 1);
                                                                      q_55 :
                                                                      if(match_cons(p_63, sym_TCons_2))
                                                                        {
                                                                          q_63 = ATgetArgument(p_63, 0);
                                                                          v_63 = ATgetArgument(p_63, 1);
                                                                          r_55 :
                                                                          if(match_cons(q_63, sym_appl_2))
                                                                            {
                                                                              r_63 = ATgetArgument(q_63, 0);
                                                                              s_63 = ATgetArgument(q_63, 1);
                                                                              s_55 :
                                                                              if(match_cons(v_63, sym_TCons_2))
                                                                                {
                                                                                  w_63 = ATgetArgument(v_63, 0);
                                                                                  x_63 = ATgetArgument(v_63, 1);
                                                                                  t_55 :
                                                                                  if(match_cons(x_63, sym_TCons_2))
                                                                                    {
                                                                                      y_63 = ATgetArgument(x_63, 0);
                                                                                      z_63 = ATgetArgument(x_63, 1);
                                                                                      u_55 :
                                                                                      if(match_cons(z_63, sym_TNil_0))
                                                                                        {
                                                                                          v_55 :
                                                                                          if(match_cons(s_63, sym_Cons_2))
                                                                                            {
                                                                                              t_63 = ATgetArgument(s_63, 0);
                                                                                              u_63 = ATgetArgument(s_63, 1);
                                                                                              w_55 :
                                                                                              if(match_cons(u_63, sym_Nil_0))
                                                                                                {
                                                                                                  x_55 :
                                                                                                  if(match_cons(r_63, sym_prod_3))
                                                                                                    {
                                                                                                      g_63 = ATgetArgument(r_63, 0);
                                                                                                      j_63 = ATgetArgument(r_63, 1);
                                                                                                      m_63 = ATgetArgument(r_63, 2);
                                                                                                      y_55 :
                                                                                                      if(match_cons(j_63, sym_alt_2))
                                                                                                        {
                                                                                                          k_63 = ATgetArgument(j_63, 0);
                                                                                                          l_63 = ATgetArgument(j_63, 1);
                                                                                                          z_55 :
                                                                                                          if(match_cons(g_63, sym_Cons_2))
                                                                                                            {
                                                                                                              h_63 = ATgetArgument(g_63, 0);
                                                                                                              i_63 = ATgetArgument(g_63, 1);
                                                                                                              a_56 :
                                                                                                              if(match_cons(i_63, sym_Nil_0))
                                                                                                                {
                                                                                                                  b_56 :
                                                                                                                  if(match_cons(o_63, sym_alt_2))
                                                                                                                    {
                                                                                                                      e_63 = ATgetArgument(o_63, 0);
                                                                                                                      f_63 = ATgetArgument(o_63, 1);
                                                                                                                      {
                                                                                                                        ATerm o_16 = t;
                                                                                                                        if(PushChoice()==0)
                                                                                                                          {
                                                                                                                            t = g_67(t);
                                                                                                                            PopChoice();
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = o_16;
                                                                                                                            {
                                                                                                                              ATerm p_16 = t;
                                                                                                                              if(PushChoice()==0)
                                                                                                                                {
                                                                                                                                  t = h_67(t);
                                                                                                                                  PopChoice();
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_16;
                                                                                                                                  t = i_67(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    t = i_67(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  c_56 :
                                                                                                                  t = i_67(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              d_56 :
                                                                                                              t = i_67(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          e_56 :
                                                                                                          f_56 :
                                                                                                          t = i_67(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      g_56 :
                                                                                                      t = i_67(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  h_56 :
                                                                                                  if(match_cons(r_63, sym_prod_3))
                                                                                                    {
                                                                                                      g_63 = ATgetArgument(r_63, 0);
                                                                                                      j_63 = ATgetArgument(r_63, 1);
                                                                                                      m_63 = ATgetArgument(r_63, 2);
                                                                                                      i_56 :
                                                                                                      if(match_cons(o_63, sym_alt_2))
                                                                                                        {
                                                                                                          e_63 = ATgetArgument(o_63, 0);
                                                                                                          f_63 = ATgetArgument(o_63, 1);
                                                                                                          j_56 :
                                                                                                          if(match_cons(g_63, sym_Cons_2))
                                                                                                            {
                                                                                                              h_63 = ATgetArgument(g_63, 0);
                                                                                                              i_63 = ATgetArgument(g_63, 1);
                                                                                                              k_56 :
                                                                                                              if(match_cons(i_63, sym_Nil_0))
                                                                                                                {
                                                                                                                  l_56 :
                                                                                                                  if(match_cons(j_63, sym_alt_2))
                                                                                                                    {
                                                                                                                      k_63 = ATgetArgument(j_63, 0);
                                                                                                                      l_63 = ATgetArgument(j_63, 1);
                                                                                                                      {
                                                                                                                        ATerm q_16 = t;
                                                                                                                        if(PushChoice()==0)
                                                                                                                          {
                                                                                                                            t = g_67(t);
                                                                                                                            PopChoice();
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = q_16;
                                                                                                                            t = h_67(t);
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
                                                                                              m_56 :
                                                                                              if(match_cons(r_63, sym_prod_3))
                                                                                                {
                                                                                                  g_63 = ATgetArgument(r_63, 0);
                                                                                                  j_63 = ATgetArgument(r_63, 1);
                                                                                                  m_63 = ATgetArgument(r_63, 2);
                                                                                                  n_56 :
                                                                                                  if(match_cons(o_63, sym_alt_2))
                                                                                                    {
                                                                                                      e_63 = ATgetArgument(o_63, 0);
                                                                                                      f_63 = ATgetArgument(o_63, 1);
                                                                                                      o_56 :
                                                                                                      if(match_cons(g_63, sym_Cons_2))
                                                                                                        {
                                                                                                          h_63 = ATgetArgument(g_63, 0);
                                                                                                          i_63 = ATgetArgument(g_63, 1);
                                                                                                          p_56 :
                                                                                                          if(match_cons(i_63, sym_Nil_0))
                                                                                                            {
                                                                                                              q_56 :
                                                                                                              if(match_cons(j_63, sym_alt_2))
                                                                                                                {
                                                                                                                  k_63 = ATgetArgument(j_63, 0);
                                                                                                                  l_63 = ATgetArgument(j_63, 1);
                                                                                                                  {
                                                                                                                    ATerm r_16 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        t = g_67(t);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_16;
                                                                                                                        t = h_67(t);
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
                                                                t = f_67(t);
                                                                o_65 = t;
                                                                if(b_63 != NULL && b_63 != o_65)
                                                                  _fail(o_65);
                                                                else
                                                                  b_63 = o_65;
                                                              }
                                                            }
                                                          }
                                                          t = not_null(b_63);
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
                                          if(match_cons(x_58, sym_seq_1))
                                            {
                                              y_58 = ATgetArgument(x_58, 0);
                                              o_58 :
                                              if(match_cons(z_58, sym_TCons_2))
                                                {
                                                  a_59 = ATgetArgument(z_58, 0);
                                                  d_59 = ATgetArgument(z_58, 1);
                                                  p_58 :
                                                  if(match_cons(a_59, sym_appl_2))
                                                    {
                                                      b_59 = ATgetArgument(a_59, 0);
                                                      c_59 = ATgetArgument(a_59, 1);
                                                      q_58 :
                                                      if(match_cons(d_59, sym_TCons_2))
                                                        {
                                                          e_59 = ATgetArgument(d_59, 0);
                                                          f_59 = ATgetArgument(d_59, 1);
                                                          r_58 :
                                                          if(match_cons(f_59, sym_TCons_2))
                                                            {
                                                              g_59 = ATgetArgument(f_59, 0);
                                                              h_59 = ATgetArgument(f_59, 1);
                                                              s_58 :
                                                              if(match_cons(h_59, sym_TNil_0))
                                                                {
                                                                  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
                                                                  ATerm a_66 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                  {
                                                                    ATerm b_66 = NULL;
                                                                    t = make_path_0(t);
                                                                    a_66 = t;
                                                                    if(w_65 != NULL && w_65 != a_66)
                                                                      _fail(a_66);
                                                                    else
                                                                      w_65 = a_66;
                                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_seq_1, not_null(y_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                    {
                                                                      ATerm d_66 = NULL;
                                                                      t = get_pp_entry_0(t);
                                                                      b_66 = t;
                                                                      if(x_65 != NULL && x_65 != b_66)
                                                                        _fail(b_66);
                                                                      else
                                                                        x_65 = b_66;
                                                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_65), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                                                      {
                                                                        ATerm e_66 = NULL;
                                                                        t = seq2abox_0(t);
                                                                        d_66 = t;
                                                                        if(y_65 != NULL && y_65 != d_66)
                                                                          _fail(d_66);
                                                                        else
                                                                          y_65 = d_66;
                                                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_65), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                                        t = filter_literals_0(t);
                                                                        t = instantiate_0(t);
                                                                        e_66 = t;
                                                                        if(z_65 != NULL && z_65 != e_66)
                                                                          _fail(e_66);
                                                                        else
                                                                          z_65 = e_66;
                                                                      }
                                                                    }
                                                                  }
                                                                  t = not_null(z_65);
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
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  n_68 = t;
  z_67 :
  if(match_cons(n_68, sym_TCons_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      r_68 = ATgetArgument(n_68, 1);
      a_68 :
      if(match_cons(o_68, sym_Nil_0))
        {
          b_68 :
          if(match_cons(r_68, sym_TCons_2))
            {
              s_68 = ATgetArgument(r_68, 0);
              v_68 = ATgetArgument(r_68, 1);
              c_68 :
              if(match_cons(s_68, sym_Nil_0))
                {
                  d_68 :
                  if(match_cons(v_68, sym_TCons_2))
                    {
                      w_68 = ATgetArgument(v_68, 0);
                      x_68 = ATgetArgument(v_68, 1);
                      e_68 :
                      if(match_cons(x_68, sym_TCons_2))
                        {
                          y_68 = ATgetArgument(x_68, 0);
                          z_68 = ATgetArgument(x_68, 1);
                          f_68 :
                          if(match_cons(z_68, sym_TNil_0))
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
          if(match_cons(o_68, sym_Cons_2))
            {
              p_68 = ATgetArgument(o_68, 0);
              q_68 = ATgetArgument(o_68, 1);
              g_68 :
              if(match_cons(r_68, sym_TCons_2))
                {
                  s_68 = ATgetArgument(r_68, 0);
                  v_68 = ATgetArgument(r_68, 1);
                  h_68 :
                  if(match_cons(s_68, sym_Cons_2))
                    {
                      t_68 = ATgetArgument(s_68, 0);
                      u_68 = ATgetArgument(s_68, 1);
                      i_68 :
                      if(match_cons(v_68, sym_TCons_2))
                        {
                          w_68 = ATgetArgument(v_68, 0);
                          x_68 = ATgetArgument(v_68, 1);
                          j_68 :
                          if(match_cons(x_68, sym_TCons_2))
                            {
                              y_68 = ATgetArgument(x_68, 0);
                              z_68 = ATgetArgument(x_68, 1);
                              k_68 :
                              if(match_cons(z_68, sym_TNil_0))
                                {
                                  ATerm r_69 = NULL,s_69 = NULL,u_69 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_68), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                  {
                                    ATerm v_69 = NULL;
                                    t = symbol2abox_0(t);
                                    u_69 = t;
                                    if(r_69 != NULL && r_69 != u_69)
                                      _fail(u_69);
                                    else
                                      r_69 = u_69;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    {
                                      ATerm x_69 = NULL;
                                      t = add_0(t);
                                      v_69 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_69), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                      t = seq2abox_0(t);
                                      x_69 = t;
                                      if(s_69 != NULL && s_69 != x_69)
                                        _fail(x_69);
                                      else
                                        s_69 = x_69;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_69), not_null(s_69));
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
  ATerm j_70 = NULL,k_70 = NULL;
  j_70 = t;
  i_70 :
  if(match_cons(j_70, sym_lit_1))
    {
      k_70 = ATgetArgument(j_70, 0);
      {
        ATerm s_16 = t;
        if(PushChoice()==0)
          {
            ATerm m_70 = NULL;
            t = not_null(k_70);
            t = p_0(t);
            m_70 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, not_null(m_70));
            PopChoice();
          }
        else
          {
            t = s_16;
            {
              ATerm q_70 = NULL;
              t = not_null(k_70);
              t = p_0(t);
              q_70 = t;
              t = (ATerm) ATmakeAppl(sym_lit_1, not_null(q_70));
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
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,j_71 = NULL;
  d_71 = t;
  b_71 :
  if(match_cons(d_71, sym_TCons_2))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      c_71 :
      if(match_cons(f_71, sym_TCons_2))
        {
          g_71 = ATgetArgument(f_71, 0);
          j_71 = ATgetArgument(f_71, 1);
          t = not_null(g_71);
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
  ATerm t_71 = NULL;
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_71), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  v_71 = t;
  q_71 :
  if(match_cons(v_71, sym_TCons_2))
    {
      w_71 = ATgetArgument(v_71, 0);
      x_71 = ATgetArgument(v_71, 1);
      r_71 :
      if(match_cons(x_71, sym_TCons_2))
        {
          y_71 = ATgetArgument(x_71, 0);
          z_71 = ATgetArgument(x_71, 1);
          s_71 :
          if(match_cons(z_71, sym_TNil_0))
            {
              ATerm t_16;
              t_16 = t;
              t = not_null(w_71);
              t = path_to_string_0(t);
              {
                ATerm m_2 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
                  return(t);
                }
                t = notify_1(t, m_2);
              }
              t = t_16;
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
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
  h_72 = t;
  g_72 :
  if(match_cons(h_72, sym_PP_Entry_2))
    {
      i_72 = ATgetArgument(h_72, 0);
      j_72 = ATgetArgument(h_72, 1);
      {
        ATerm u_16 = t;
        if(PushChoice()==0)
          {
            ATerm v_16;
            v_16 = t;
            {
              ATerm m_72 = NULL;
              t = not_null(i_72);
              t = mk_key_0(t);
              m_72 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_72), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_get_0(t);
            }
            t = v_16;
            PopChoice();
          }
        else
          {
            t = u_16;
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
  ATerm n_2 (ATerm t)
  {
    ATerm w_16 = t;
    if(PushChoice()==0)
      {
        ATerm w_72 = NULL;
        w_72 = t;
        {
          ATerm x_16 = t;
          if(PushChoice()==0)
            {
              t = is_list_0(t);
              PopChoice();
              _fail(t);
            }
          else
            t = x_16;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_72), (ATerm) ATmakeAppl(sym_Nil_0));
        }
        PopChoice();
      }
    else
      t = w_16;
    return(t);
  }
  t = map_1(t, n_2);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_73 = NULL,g_73 = NULL;
  f_73 = t;
  e_73 :
  if(match_cons(f_73, sym_Arg_1))
    {
      g_73 = ATgetArgument(f_73, 0);
      {
        ATerm y_16 = t;
        if(PushChoice()==0)
          {
            ATerm i_73 = NULL;
            t = not_null(g_73);
            t = o_0(t);
            i_73 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(i_73));
            PopChoice();
          }
        else
          {
            t = y_16;
            {
              ATerm l_73 = NULL;
              t = not_null(g_73);
              t = o_0(t);
              l_73 = t;
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(l_73));
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
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL;
  v_73 = t;
  s_73 :
  if(match_cons(v_73, sym_TCons_2))
    {
      w_73 = ATgetArgument(v_73, 0);
      x_73 = ATgetArgument(v_73, 1);
      t_73 :
      if(match_cons(x_73, sym_TCons_2))
        {
          y_73 = ATgetArgument(x_73, 0);
          z_73 = ATgetArgument(x_73, 1);
          u_73 :
          if(match_cons(z_73, sym_TNil_0))
            t = SSL_mkterm(not_null(w_73), not_null(y_73));
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
  ATerm k_74 = NULL,l_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
  ATerm f_75 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_74), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_74), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  o_74 = t;
  i_74 :
  if(match_cons(o_74, sym_alt_2))
    {
      p_74 = ATgetArgument(o_74, 0);
      q_74 = ATgetArgument(o_74, 1);
      j_74 :
      if(match_cons(q_74, sym_alt_2))
        {
          k_74 = ATgetArgument(q_74, 0);
          l_74 = ATgetArgument(q_74, 1);
          {
            ATerm z_16 = t;
            if(PushChoice()==0)
              {
                ATerm w_74 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(k_74), not_null(l_74));
                t = flat_alt_0(t);
                w_74 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_74), not_null(w_74));
                PopChoice();
              }
            else
              {
                t = z_16;
                t = f_75(t);
              }
          }
        }
      else
        t = f_75(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = e_61(t);
    return(t);
  }
  t = split_2(t, o_2, _id);
  {
    ATerm f_79 (ATerm t)
    {
      ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
      ATerm h_79 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm i_79 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm j_79 (ATerm t)
      {
        ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
        if(c_77 != NULL && c_77 != l_77)
          _fail(l_77);
        else
          c_77 = l_77;
        if(d_77 != NULL && d_77 != n_77)
          _fail(n_77);
        else
          d_77 = n_77;
        if(e_77 != NULL && e_77 != r_77)
          _fail(r_77);
        else
          e_77 = r_77;
        if(w_77 != NULL && w_77 != f_77)
          _fail(f_77);
        else
          w_77 = f_77;
        if(x_77 != NULL && x_77 != h_77)
          _fail(h_77);
        else
          x_77 = h_77;
        if(y_77 != NULL && y_77 != i_77)
          _fail(i_77);
        else
          y_77 = i_77;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(w_77), (ATerm) ATmakeAppl(sym_alt_2, not_null(x_77), not_null(y_77)));
        {
          ATerm b_78 = NULL;
          t = flat_alt_0(t);
          z_77 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_77), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          b_78 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_77), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(e_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_78), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = f_79(t);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm q_2 (ATerm t)
              {
                ATerm a_17 = t;
                if(PushChoice()==0)
                  {
                    t = Arg_1(t, _id);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                    PopChoice();
                  }
                else
                  t = a_17;
                return(t);
              }
              t = topdown_1(t, q_2);
              return(t);
            }
            t = Cons_2(t, p_2, _id);
          }
        }
        return(t);
      }
      ATerm k_79 (ATerm t)
      {
        ATerm h_78 = NULL,i_78 = NULL,u_78 = NULL;
        ATerm l_78 = NULL;
        ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,s_78 = NULL,t_78 = NULL;
        t = not_null(t_77);
        l_78 = t;
        t = SSL_explode_term(not_null(l_78));
        n_78 = t;
        u_75 :
        if(match_cons(n_78, sym_TCons_2))
          {
            o_78 = ATgetArgument(n_78, 0);
            p_78 = ATgetArgument(n_78, 1);
            v_75 :
            if(match_cons(p_78, sym_TCons_2))
              {
                s_78 = ATgetArgument(p_78, 0);
                t_78 = ATgetArgument(p_78, 1);
                w_75 :
                if(match_cons(t_78, sym_TNil_0))
                  {
                    if(h_78 != NULL && h_78 != o_78)
                      _fail(o_78);
                    else
                      h_78 = o_78;
                    if(i_78 != NULL && i_78 != s_78)
                      _fail(s_78);
                    else
                      i_78 = s_78;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(r_77), not_null(h_78)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm w_78 = NULL,d_79 = NULL;
          t = conc_0(t);
          u_78 = t;
          t = not_null(i_78);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm b_17;
            b_17 = t;
            {
              ATerm x_78 = NULL;
              t = make_0(t);
              x_78 = t;
              if(w_78 != NULL && w_78 != x_78)
                _fail(x_78);
              else
                w_78 = x_78;
            }
            t = b_17;
            {
              ATerm r_2 (ATerm t)
              {
                ATerm y_78 = NULL;
                ATerm a_79 = NULL;
                y_78 = t;
                {
                  ATerm b_79 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_78), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_78), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = f_79(t);
                  b_79 = t;
                  if(a_79 != NULL && a_79 != b_79)
                    _fail(b_79);
                  else
                    a_79 = b_79;
                  t = not_null(a_79);
                }
                return(t);
              }
              t = map_1(t, r_2);
              t = concat_0(t);
              d_79 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(l_77), not_null(u_78)), not_null(w_78)), not_null(d_79));
            }
          }
        }
        return(t);
      }
      j_77 = t;
      c_76 :
      if(match_cons(j_77, sym_TCons_2))
        {
          k_77 = ATgetArgument(j_77, 0);
          p_77 = ATgetArgument(j_77, 1);
          d_76 :
          if(match_cons(p_77, sym_TCons_2))
            {
              q_77 = ATgetArgument(p_77, 0);
              v_77 = ATgetArgument(p_77, 1);
              e_76 :
              if(match_cons(q_77, sym_lit_1))
                {
                  r_77 = ATgetArgument(q_77, 0);
                  f_76 :
                  if(match_cons(v_77, sym_TNil_0))
                    {
                      g_76 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(q_77, sym_TCons_2))
                    {
                      r_77 = ATgetArgument(q_77, 0);
                      s_77 = ATgetArgument(q_77, 1);
                      h_76 :
                      if(match_cons(s_77, sym_TCons_2))
                        {
                          t_77 = ATgetArgument(s_77, 0);
                          u_77 = ATgetArgument(s_77, 1);
                          i_76 :
                          if(match_cons(u_77, sym_TNil_0))
                            {
                              j_76 :
                              if(match_cons(v_77, sym_TNil_0))
                                {
                                  k_76 :
                                  if(match_cons(t_77, sym_sort_1))
                                    {
                                      f_77 = ATgetArgument(t_77, 0);
                                      l_76 :
                                      if(match_cons(k_77, sym_TCons_2))
                                        {
                                          l_77 = ATgetArgument(k_77, 0);
                                          m_77 = ATgetArgument(k_77, 1);
                                          m_76 :
                                          if(match_cons(m_77, sym_TCons_2))
                                            {
                                              n_77 = ATgetArgument(m_77, 0);
                                              o_77 = ATgetArgument(m_77, 1);
                                              n_76 :
                                              if(match_cons(o_77, sym_TNil_0))
                                                {
                                                  ATerm c_17 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = h_79(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = c_17;
                                                      t = k_79(t);
                                                    }
                                                }
                                              else
                                                t = h_79(t);
                                            }
                                          else
                                            t = h_79(t);
                                        }
                                      else
                                        t = h_79(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t_77, sym_char_class_1))
                                        {
                                          f_77 = ATgetArgument(t_77, 0);
                                          o_76 :
                                          if(match_cons(k_77, sym_TCons_2))
                                            {
                                              l_77 = ATgetArgument(k_77, 0);
                                              m_77 = ATgetArgument(k_77, 1);
                                              p_76 :
                                              if(match_cons(m_77, sym_TCons_2))
                                                {
                                                  n_77 = ATgetArgument(m_77, 0);
                                                  o_77 = ATgetArgument(m_77, 1);
                                                  q_76 :
                                                  if(match_cons(o_77, sym_TNil_0))
                                                    {
                                                      ATerm d_17 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = i_79(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = d_17;
                                                          t = k_79(t);
                                                        }
                                                    }
                                                  else
                                                    t = i_79(t);
                                                }
                                              else
                                                t = i_79(t);
                                            }
                                          else
                                            t = i_79(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t_77, sym_alt_2))
                                            {
                                              f_77 = ATgetArgument(t_77, 0);
                                              g_77 = ATgetArgument(t_77, 1);
                                              r_76 :
                                              if(match_cons(k_77, sym_TCons_2))
                                                {
                                                  l_77 = ATgetArgument(k_77, 0);
                                                  m_77 = ATgetArgument(k_77, 1);
                                                  s_76 :
                                                  if(match_cons(m_77, sym_TCons_2))
                                                    {
                                                      n_77 = ATgetArgument(m_77, 0);
                                                      o_77 = ATgetArgument(m_77, 1);
                                                      x_76 :
                                                      if(match_cons(o_77, sym_TNil_0))
                                                        {
                                                          y_76 :
                                                          if(match_cons(g_77, sym_alt_2))
                                                            {
                                                              h_77 = ATgetArgument(g_77, 0);
                                                              i_77 = ATgetArgument(g_77, 1);
                                                              {
                                                                ATerm e_17 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = j_79(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_17;
                                                                    t = k_79(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = k_79(t);
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
                                              z_76 :
                                              if(match_cons(k_77, sym_TCons_2))
                                                {
                                                  l_77 = ATgetArgument(k_77, 0);
                                                  m_77 = ATgetArgument(k_77, 1);
                                                  a_77 :
                                                  if(match_cons(m_77, sym_TCons_2))
                                                    {
                                                      n_77 = ATgetArgument(m_77, 0);
                                                      o_77 = ATgetArgument(m_77, 1);
                                                      b_77 :
                                                      if(match_cons(o_77, sym_TNil_0))
                                                        t = k_79(t);
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
    t = f_79(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  z_79 :
  if(match_cons(a_80, sym_TCons_2))
    {
      b_80 = ATgetArgument(a_80, 0);
      c_80 = ATgetArgument(a_80, 1);
      t = not_null(b_80);
    }
  else
    _fail(t);
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
  o_80 = t;
  i_80 :
  if(match_cons(o_80, sym_TCons_2))
    {
      p_80 = ATgetArgument(o_80, 0);
      l_80 = ATgetArgument(o_80, 1);
      j_80 :
      if(match_cons(l_80, sym_TCons_2))
        {
          m_80 = ATgetArgument(l_80, 0);
          n_80 = ATgetArgument(l_80, 1);
          k_80 :
          if(match_cons(n_80, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(p_80));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(o_80, sym_lit_1))
        {
          p_80 = ATgetArgument(o_80, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(p_80)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,j_81 = NULL,k_81 = NULL;
  z_80 = t;
  x_80 :
  if(!(match_cons(z_80, sym_Nil_0)))
    {
      if(match_cons(z_80, sym_Cons_2))
        {
          a_81 = ATgetArgument(z_80, 0);
          b_81 = ATgetArgument(z_80, 1);
          y_80 :
          if(match_cons(b_81, sym_Cons_2))
            {
              j_81 = ATgetArgument(b_81, 0);
              k_81 = ATgetArgument(b_81, 1);
              {
                ATerm o_81 = NULL;
                t = not_null(k_81);
                t = pair_0(t);
                o_81 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_81), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(o_81));
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL;
  ATerm f_17 = t;
  if(PushChoice()==0)
    {
      ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
      t = reverse_0(t);
      {
        ATerm s_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm g_17 = t;
              if(PushChoice()==0)
                {
                  t = iter_1(t, _id);
                  PopChoice();
                }
              else
                {
                  t = g_17;
                  {
                    ATerm h_17 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = h_17;
                        {
                          ATerm i_17 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = i_17;
                              t = iter_star_sep_2(t, _id, _id);
                            }
                        }
                      }
                  }
                }
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm l_82 = NULL;
              l_82 = t;
              t_81 :
              if(!(match_cons(l_82, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, v_2, w_2);
            return(t);
          }
          t = TCons_2(t, _id, u_2);
          t = Make_0(t);
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, x_2);
          return(t);
        }
        t = Cons_2(t, s_2, t_2);
        m_82 = t;
        x_81 :
        if(match_cons(m_82, sym_Cons_2))
          {
            n_82 = ATgetArgument(m_82, 0);
            o_82 = ATgetArgument(m_82, 1);
            {
              ATerm q_82 = NULL;
              if(h_82 != NULL && h_82 != n_82)
                _fail(n_82);
              else
                h_82 = n_82;
              if(g_82 != NULL && g_82 != o_82)
                _fail(o_82);
              else
                g_82 = o_82;
              {
                ATerm j_17 = t;
                if(PushChoice()==0)
                  {
                    ATerm y_2 (ATerm t)
                    {
                      ATerm p_82 = NULL;
                      p_82 = t;
                      v_81 :
                      if(!(match_cons(p_82, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, _id, y_2);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = j_17;
                t = not_null(g_82);
                t = reverse_0(t);
                q_82 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(q_82)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_82), (ATerm) ATmakeAppl(sym_Nil_0))));
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
      t = f_17;
      {
        ATerm k_17 = t;
        if(PushChoice()==0)
          {
            ATerm b_83 = NULL;
            t = reverse_0(t);
            {
              ATerm z_2 (ATerm t)
              {
                ATerm s_82 = NULL;
                t = Make_0(t);
                s_82 = t;
                if(k_82 != NULL && k_82 != s_82)
                  _fail(s_82);
                else
                  k_82 = s_82;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                ATerm u_82 = NULL;
                ATerm l_17 = t;
                if(PushChoice()==0)
                  {
                    ATerm t_82 = NULL;
                    t_82 = t;
                    z_81 :
                    if(!(match_cons(t_82, sym_Nil_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = l_17;
                t = reverse_0(t);
                u_82 = t;
                if(i_82 != NULL && i_82 != u_82)
                  _fail(u_82);
                else
                  i_82 = u_82;
                return(t);
              }
              t = Cons_2(t, z_2, a_3);
              t = not_null(i_82);
              t = pair_0(t);
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm v_82 = NULL,w_82 = NULL;
                  ATerm c_3 (ATerm t)
                  {
                    ATerm x_82 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    x_82 = t;
                    if(v_82 != NULL && v_82 != x_82)
                      _fail(x_82);
                    else
                      v_82 = x_82;
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    ATerm e_3 (ATerm t)
                    {
                      ATerm z_82 = NULL;
                      ATerm g_3 (ATerm t)
                      {
                        ATerm h_3 (ATerm t)
                        {
                          ATerm m_17 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = m_17;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          ATerm y_82 = NULL;
                          y_82 = t;
                          c_82 :
                          if(!(match_cons(y_82, sym_TNil_0)))
                            _fail(t);
                          return(t);
                        }
                        t = TCons_2(t, h_3, i_3);
                        return(t);
                      }
                      t = TCons_2(t, _id, g_3);
                      t = Make_0(t);
                      z_82 = t;
                      if(w_82 != NULL && w_82 != z_82)
                        _fail(z_82);
                      else
                        w_82 = z_82;
                      return(t);
                    }
                    ATerm f_3 (ATerm t)
                    {
                      ATerm a_83 = NULL;
                      a_83 = t;
                      e_82 :
                      if(!(match_cons(a_83, sym_TNil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = TCons_2(t, e_3, f_3);
                    return(t);
                  }
                  t = TCons_2(t, c_3, d_3);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_82), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_82), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, b_3);
                b_83 = t;
                if(j_82 != NULL && j_82 != b_83)
                  _fail(b_83);
                else
                  j_82 = b_83;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_82), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_82), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = k_17;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm n_17 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = n_17;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL;
  o_83 = t;
  l_83 :
  if(match_cons(o_83, sym_TCons_2))
    {
      q_83 = ATgetArgument(o_83, 0);
      r_83 = ATgetArgument(o_83, 1);
      m_83 :
      if(match_cons(r_83, sym_TCons_2))
        {
          s_83 = ATgetArgument(r_83, 0);
          t_83 = ATgetArgument(r_83, 1);
          n_83 :
          if(match_cons(t_83, sym_TNil_0))
            {
              ATerm o_17 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(q_83), not_null(s_83));
                  PopChoice();
                }
              else
                {
                  t = o_17;
                  t = SSL_addr(not_null(q_83), not_null(s_83));
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
ATerm number_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, j_3, _id);
  {
    ATerm h_85 (ATerm t)
    {
      ATerm k_84 = NULL,l_84 = NULL,n_84 = NULL;
      ATerm p_17 = t;
      if(PushChoice()==0)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm l_3 (ATerm t)
            {
              ATerm q_84 = NULL;
              q_84 = t;
              x_83 :
              if(!(match_cons(q_84, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm r_84 = NULL;
              r_84 = t;
              y_83 :
              if(!(match_cons(r_84, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, l_3, m_3);
            return(t);
          }
          t = TCons_2(t, _id, k_3);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
          PopChoice();
        }
      else
        {
          t = p_17;
          {
            ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,z_84 = NULL;
            s_84 = t;
            g_84 :
            if(match_cons(s_84, sym_TCons_2))
              {
                t_84 = ATgetArgument(s_84, 0);
                u_84 = ATgetArgument(s_84, 1);
                h_84 :
                if(match_cons(u_84, sym_TCons_2))
                  {
                    v_84 = ATgetArgument(u_84, 0);
                    z_84 = ATgetArgument(u_84, 1);
                    i_84 :
                    if(match_cons(v_84, sym_Cons_2))
                      {
                        w_84 = ATgetArgument(v_84, 0);
                        x_84 = ATgetArgument(v_84, 1);
                        j_84 :
                        if(match_cons(z_84, sym_TNil_0))
                          {
                            ATerm q_17 = t;
                            if(PushChoice()==0)
                              {
                                ATerm a_85 = NULL;
                                if(k_84 != NULL && k_84 != t_84)
                                  _fail(t_84);
                                else
                                  k_84 = t_84;
                                if(l_84 != NULL && l_84 != w_84)
                                  _fail(w_84);
                                else
                                  l_84 = w_84;
                                if(n_84 != NULL && n_84 != x_84)
                                  _fail(x_84);
                                else
                                  n_84 = x_84;
                                t = not_null(l_84);
                                t = h_61(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_84), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm c_85 = NULL;
                                  t = add_0(t);
                                  a_85 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_85), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = h_85(t);
                                  c_85 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_84), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(c_85));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = q_17;
                                {
                                  ATerm f_85 = NULL;
                                  if(k_84 != NULL && k_84 != t_84)
                                    _fail(t_84);
                                  else
                                    k_84 = t_84;
                                  if(l_84 != NULL && l_84 != w_84)
                                    _fail(w_84);
                                  else
                                    l_84 = w_84;
                                  if(n_84 != NULL && n_84 != x_84)
                                    _fail(x_84);
                                  else
                                    n_84 = x_84;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = h_85(t);
                                  f_85 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_84), not_null(f_85));
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
    t = h_85(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm r_17 = t;
    if(PushChoice()==0)
      {
        ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
        q_85 = t;
        p_85 :
        if(match_cons(q_85, sym_label_2))
          {
            r_85 = ATgetArgument(q_85, 0);
            s_85 = ATgetArgument(q_85, 1);
            t = not_null(s_85);
          }
        else
          _fail(t);
        PopChoice();
      }
    else
      t = r_17;
    return(t);
  }
  t = map_1(t, n_3);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm b_86 = NULL,e_86 = NULL,i_86 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm s_17;
    s_17 = t;
    {
      ATerm d_86 = NULL;
      t = make_0(t);
      d_86 = t;
      if(b_86 != NULL && b_86 != d_86)
        _fail(d_86);
      else
        b_86 = d_86;
    }
    t = s_17;
    {
      ATerm h_86 = NULL;
      ATerm o_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          ATerm f_86 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = d_61(t);
          f_86 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_86), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, p_3);
        return(t);
      }
      t = map_1(t, o_3);
      t = concat_0(t);
      h_86 = t;
      if(e_86 != NULL && e_86 != h_86)
        _fail(h_86);
      else
        e_86 = h_86;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = d_61(t);
      i_86 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(i_86)), not_null(b_86)), not_null(e_86));
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  ATerm t_17 = t;
  if(PushChoice()==0)
    {
      ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,h_87 = NULL;
      c_87 = t;
      v_86 :
      if(match_cons(c_87, sym_prod_3))
        {
          d_87 = ATgetArgument(c_87, 0);
          e_87 = ATgetArgument(c_87, 1);
          f_87 = ATgetArgument(c_87, 2);
          if(y_86 != NULL && y_86 != d_87)
            _fail(d_87);
          else
            y_86 = d_87;
          if(z_86 != NULL && z_86 != e_87)
            _fail(e_87);
          else
            z_86 = e_87;
          if(a_87 != NULL && a_87 != f_87)
            _fail(f_87);
          else
            a_87 = f_87;
          t = not_null(a_87);
          {
            ATerm q_3 (ATerm t)
            {
              ATerm i_87 = NULL,j_87 = NULL;
              i_87 = t;
              t_86 :
              if(match_cons(i_87, sym_cons_1))
                {
                  j_87 = ATgetArgument(i_87, 0);
                  if(w_86 != NULL && w_86 != j_87)
                    _fail(j_87);
                  else
                    w_86 = j_87;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, q_3);
          }
          t = not_null(y_86);
          {
            ATerm r_3 (ATerm t)
            {
              t = not_null(w_86);
              return(t);
            }
            t = symbols2pp_entries_1(t, r_3);
          }
        }
      else
        {
          if(match_cons(c_87, sym_prod_fun_4))
            {
              d_87 = ATgetArgument(c_87, 0);
              e_87 = ATgetArgument(c_87, 1);
              f_87 = ATgetArgument(c_87, 2);
              h_87 = ATgetArgument(c_87, 3);
              {
                ATerm k_87 = NULL;
                if(x_86 != NULL && x_86 != d_87)
                  _fail(d_87);
                else
                  x_86 = d_87;
                if(y_86 != NULL && y_86 != e_87)
                  _fail(e_87);
                else
                  y_86 = e_87;
                if(z_86 != NULL && z_86 != f_87)
                  _fail(f_87);
                else
                  z_86 = f_87;
                if(a_87 != NULL && a_87 != h_87)
                  _fail(h_87);
                else
                  a_87 = h_87;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(x_86)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_86), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                k_87 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(k_87), not_null(z_86), not_null(a_87));
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
      t = t_17;
      {
        ATerm u_17 = t;
        if(PushChoice()==0)
          {
            ATerm x_17 = t;
            if(PushChoice()==0)
              {
                ATerm s_3 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Silent_0);
                  return(t);
                }
                t = has_option_1(t, s_3);
                PopChoice();
                _fail(t);
              }
            else
              t = x_17;
            {
              ATerm t_3 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, t_3);
            }
            PopChoice();
          }
        else
          t = u_17;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm get_pp_entry_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL;
  ATerm k_89 (ATerm t)
  {
    ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
    ATerm y_17 = t;
    if(PushChoice()==0)
      {
        t = not_null(m_88);
        t = pp_table_get_0(t);
        t = Snd_0(t);
        PopChoice();
      }
    else
      {
        t = y_17;
        {
          ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,i_89 = NULL;
          t = not_null(m_88);
          t = reverse_0(t);
          {
            ATerm u_3 (ATerm t)
            {
              ATerm y_88 = NULL;
              y_88 = t;
              if(x_88 != NULL && x_88 != y_88)
                _fail(y_88);
              else
                x_88 = y_88;
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              ATerm z_88 = NULL;
              t = reverse_0(t);
              z_88 = t;
              if(v_88 != NULL && v_88 != z_88)
                _fail(z_88);
              else
                v_88 = z_88;
              return(t);
            }
            t = Cons_2(t, u_3, v_3);
            t = not_null(v_88);
            t = pp_table_get_0(t);
            t = Fst_0(t);
            d_89 = t;
            x_87 :
            if(match_cons(d_89, sym_Path_2))
              {
                e_89 = ATgetArgument(d_89, 0);
                a_89 = ATgetArgument(d_89, 1);
                y_87 :
                if(match_cons(a_89, sym_Cons_2))
                  {
                    b_89 = ATgetArgument(a_89, 0);
                    c_89 = ATgetArgument(a_89, 1);
                    z_87 :
                    if(match_cons(c_89, sym_Nil_0))
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_89), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              {
                if(match_cons(d_89, sym_Path1_1))
                  {
                    e_89 = ATgetArgument(d_89, 0);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                  }
                else
                  _fail(t);
              }
            i_89 = t;
            if(w_88 != NULL && w_88 != i_89)
              _fail(i_89);
            else
              w_88 = i_89;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_88), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm w_3 (ATerm t)
              {
                t = not_null(w_88);
                return(t);
              }
              t = symbol2abox_1(t, w_3);
              t = map_1(t, StoreEntryIfNotExists_0);
              t = not_null(m_88);
              t = pp_table_get_0(t);
              t = Snd_0(t);
            }
          }
        }
      }
    return(t);
  }
  j_88 = t;
  b_88 :
  if(match_cons(j_88, sym_TCons_2))
    {
      k_88 = ATgetArgument(j_88, 0);
      l_88 = ATgetArgument(j_88, 1);
      c_88 :
      if(match_cons(l_88, sym_TCons_2))
        {
          m_88 = ATgetArgument(l_88, 0);
          n_88 = ATgetArgument(l_88, 1);
          d_88 :
          if(match_cons(n_88, sym_TNil_0))
            {
              e_88 :
              if(match_cons(k_88, sym_prod_3))
                {
                  g_88 = ATgetArgument(k_88, 0);
                  h_88 = ATgetArgument(k_88, 1);
                  i_88 = ATgetArgument(k_88, 2);
                  {
                    ATerm z_17 = t;
                    if(PushChoice()==0)
                      {
                        t = not_null(m_88);
                        t = pp_table_get_0(t);
                        t = Snd_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = z_17;
                        {
                          ATerm a_18 = t;
                          if(PushChoice()==0)
                            {
                              t = (ATerm) ATmakeAppl(sym_prod_3, not_null(g_88), not_null(h_88), not_null(i_88));
                              t = generate_pp_entries_0(t);
                              t = map_1(t, StoreEntryIfNotExists_0);
                              t = not_null(m_88);
                              t = pp_table_get_0(t);
                              t = Snd_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = a_18;
                              t = k_89(t);
                            }
                        }
                      }
                  }
                }
              else
                t = k_89(t);
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
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
  z_89 = t;
  y_89 :
  if(match_cons(z_89, sym_prod_3))
    {
      a_90 = ATgetArgument(z_89, 0);
      b_90 = ATgetArgument(z_89, 1);
      c_90 = ATgetArgument(z_89, 2);
      {
        ATerm b_18 = t;
        if(PushChoice()==0)
          {
            ATerm g_90 = NULL;
            t = not_null(a_90);
            {
              ATerm i_90 = NULL;
              t = l_0(t);
              g_90 = t;
              t = not_null(b_90);
              {
                ATerm k_90 = NULL;
                t = m_0(t);
                i_90 = t;
                t = not_null(c_90);
                t = n_0(t);
                k_90 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(g_90), not_null(i_90), not_null(k_90));
              }
            }
            PopChoice();
          }
        else
          {
            t = b_18;
            {
              ATerm p_90 = NULL;
              t = not_null(a_90);
              {
                ATerm r_90 = NULL;
                t = l_0(t);
                p_90 = t;
                t = not_null(b_90);
                {
                  ATerm t_90 = NULL;
                  t = m_0(t);
                  r_90 = t;
                  t = not_null(c_90);
                  t = n_0(t);
                  t_90 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, not_null(p_90), not_null(r_90), not_null(t_90));
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
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  w_91 = t;
  j_91 :
  if(match_cons(w_91, sym_TCons_2))
    {
      x_91 = ATgetArgument(w_91, 0);
      d_92 = ATgetArgument(w_91, 1);
      k_91 :
      if(match_cons(x_91, sym_prod_3))
        {
          y_91 = ATgetArgument(x_91, 0);
          z_91 = ATgetArgument(x_91, 1);
          a_92 = ATgetArgument(x_91, 2);
          l_91 :
          if(match_cons(a_92, sym_no_attrs_0))
            {
              m_91 :
              if(match_cons(d_92, sym_TCons_2))
                {
                  e_92 = ATgetArgument(d_92, 0);
                  f_92 = ATgetArgument(d_92, 1);
                  n_91 :
                  if(match_cons(f_92, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(y_91), not_null(z_91), (ATerm) ATmakeAppl(sym_attrs_1, not_null(e_92)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(a_92, sym_attrs_1))
                {
                  v_91 = ATgetArgument(a_92, 0);
                  o_91 :
                  if(match_cons(d_92, sym_TCons_2))
                    {
                      e_92 = ATgetArgument(d_92, 0);
                      f_92 = ATgetArgument(d_92, 1);
                      p_91 :
                      if(match_cons(f_92, sym_TNil_0))
                        {
                          ATerm n_92 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_92), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          n_92 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(y_91), not_null(z_91), (ATerm) ATmakeAppl(sym_attrs_1, not_null(n_92)));
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
          if(match_cons(x_91, sym_prod_fun_4))
            {
              y_91 = ATgetArgument(x_91, 0);
              z_91 = ATgetArgument(x_91, 1);
              a_92 = ATgetArgument(x_91, 2);
              b_92 = ATgetArgument(x_91, 3);
              q_91 :
              if(match_cons(b_92, sym_no_attrs_0))
                {
                  r_91 :
                  if(match_cons(d_92, sym_TCons_2))
                    {
                      e_92 = ATgetArgument(d_92, 0);
                      f_92 = ATgetArgument(d_92, 1);
                      s_91 :
                      if(match_cons(f_92, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(y_91), not_null(z_91), not_null(a_92), (ATerm) ATmakeAppl(sym_attrs_1, not_null(e_92)));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(b_92, sym_attrs_1))
                    {
                      c_92 = ATgetArgument(b_92, 0);
                      t_91 :
                      if(match_cons(d_92, sym_TCons_2))
                        {
                          e_92 = ATgetArgument(d_92, 0);
                          f_92 = ATgetArgument(d_92, 1);
                          u_91 :
                          if(match_cons(f_92, sym_TNil_0))
                            {
                              ATerm y_92 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_92), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              y_92 = t;
                              t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(y_91), not_null(z_91), not_null(a_92), (ATerm) ATmakeAppl(sym_attrs_1, not_null(y_92)));
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
  ATerm c_18 = t;
  if(PushChoice()==0)
    {
      ATerm d_18;
      d_18 = t;
      {
        ATerm e_18 = t;
        if(PushChoice()==0)
          {
            t = de_quote_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = e_18;
      }
      t = d_18;
      t = quote_0(t);
      PopChoice();
    }
  else
    t = c_18;
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
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  ATerm x_93 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_93), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm y_93 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(q_93)));
    return(t);
  }
  ATerm z_93 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(q_93)));
    return(t);
  }
  ATerm a_94 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(110), not_null(q_93)));
    return(t);
  }
  o_93 = t;
  m_93 :
  if(match_int(o_93, 34))
    {
      ATerm f_18 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)));
          PopChoice();
        }
      else
        {
          t = f_18;
          t = x_93(t);
        }
    }
  else
    {
      if(match_int(o_93, 92))
        {
          ATerm g_18 = t;
          if(PushChoice()==0)
            {
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), (ATerm) ATmakeAppl(sym_Nil_0)));
              PopChoice();
            }
          else
            {
              t = g_18;
              t = x_93(t);
            }
        }
      else
        {
          if(match_cons(o_93, sym_Cons_2))
            {
              p_93 = ATgetArgument(o_93, 0);
              q_93 = ATgetArgument(o_93, 1);
              n_93 :
              if(match_int(p_93, 34))
                {
                  ATerm h_18 = t;
                  if(PushChoice()==0)
                    {
                      t = x_93(t);
                      PopChoice();
                    }
                  else
                    {
                      t = h_18;
                      t = y_93(t);
                    }
                }
              else
                {
                  if(match_int(p_93, 92))
                    {
                      ATerm i_18 = t;
                      if(PushChoice()==0)
                        {
                          t = x_93(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_18;
                          t = z_93(t);
                        }
                    }
                  else
                    {
                      if(match_int(p_93, 10))
                        {
                          ATerm j_18 = t;
                          if(PushChoice()==0)
                            {
                              t = x_93(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_18;
                              t = a_94(t);
                            }
                        }
                      else
                        t = x_93(t);
                    }
                }
            }
          else
            t = x_93(t);
        }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  ATerm k_18 = t;
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
      t = k_18;
      t = explode_string_0(t);
      {
        ATerm d_94 (ATerm t)
        {
          ATerm l_18 = t;
          if(PushChoice()==0)
            {
              t = Escape_0(t);
              {
                ATerm x_3 (ATerm t)
                {
                  t = Cons_2(t, _id, d_94);
                  return(t);
                }
                t = Cons_2(t, _id, x_3);
              }
              PopChoice();
            }
          else
            {
              t = l_18;
              {
                ATerm m_18 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, d_94);
                    PopChoice();
                  }
                else
                  {
                    t = m_18;
                    {
                      ATerm c_94 = NULL;
                      c_94 = t;
                      b_94 :
                      if(!(match_cons(c_94, sym_Nil_0)))
                        _fail(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = d_94(t);
        t = implode_string_0(t);
      }
    }
  return(t);
}
ATerm isAlpha_0 (ATerm t)
{
  ATerm n_18 = t;
  if(PushChoice()==0)
    {
      t = isUpper_0(t);
      PopChoice();
    }
  else
    {
      t = n_18;
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
  ATerm h_94 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm o_18 = t;
    if(PushChoice()==0)
      {
        ATerm g_94 = NULL;
        g_94 = t;
        e_94 :
        if(!(match_string(g_94, "")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = o_18;
    return(t);
  }
  t = filter_1(t, y_3);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm p_18;
      p_18 = t;
      t = string_Hd_0(t);
      {
        ATerm q_18 = t;
        if(PushChoice()==0)
          {
            t = isUpper_0(t);
            PopChoice();
          }
        else
          {
            t = q_18;
            t = isLower_0(t);
          }
      }
      t = p_18;
      return(t);
    }
    t = Cons_2(t, z_3, _id);
    {
      ATerm a_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
        return(t);
      }
      t = separate_by_1(t, a_4);
      t = concat_strings_0(t);
      h_94 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_94), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("START", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("some", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("all", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("id", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("L", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))))))))))))), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm r_18 = t;
        if(PushChoice()==0)
          {
            t = in_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = r_18;
        t = not_null(h_94);
        t = escape_0(t);
        t = quote_0(t);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  o_94 = t;
  l_94 :
  if(match_cons(o_94, sym_TCons_2))
    {
      p_94 = ATgetArgument(o_94, 0);
      q_94 = ATgetArgument(o_94, 1);
      m_94 :
      if(match_cons(q_94, sym_TCons_2))
        {
          r_94 = ATgetArgument(q_94, 0);
          s_94 = ATgetArgument(q_94, 1);
          n_94 :
          if(match_cons(s_94, sym_TNil_0))
            {
              t = not_null(p_94);
              {
                ATerm b_4 (ATerm t)
                {
                  t = not_null(r_94);
                  return(t);
                }
                t = at_end_1(t, b_4);
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
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
  i_96 = t;
  g_96 :
  if(match_cons(i_96, sym_cf_1))
    {
      j_96 = ATgetArgument(i_96, 0);
      t = not_null(j_96);
      t = Sym2Strs_0(t);
    }
  else
    {
      if(match_cons(i_96, sym_lex_1))
        {
          j_96 = ATgetArgument(i_96, 0);
          t = not_null(j_96);
          t = Sym2Strs_0(t);
        }
      else
        {
          if(match_cons(i_96, sym_empty_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
          else
            {
              if(match_cons(i_96, sym_seq_2))
                {
                  j_96 = ATgetArgument(i_96, 0);
                  k_96 = ATgetArgument(i_96, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_96), not_null(k_96));
                  t = filter_1(t, Sym2Strs_0);
                  t = concat_0(t);
                }
              else
                {
                  if(match_cons(i_96, sym_opt_1))
                    {
                      j_96 = ATgetArgument(i_96, 0);
                      t = not_null(j_96);
                      t = Sym2Strs_0(t);
                      {
                        ATerm c_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                          return(t);
                        }
                        t = at_end_1(t, c_4);
                      }
                    }
                  else
                    {
                      if(match_cons(i_96, sym_iter_1))
                        {
                          j_96 = ATgetArgument(i_96, 0);
                          t = not_null(j_96);
                          t = Sym2Strs_0(t);
                          {
                            ATerm d_4 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("p", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                              return(t);
                            }
                            t = at_end_1(t, d_4);
                          }
                        }
                      else
                        {
                          if(match_cons(i_96, sym_iter_star_1))
                            {
                              j_96 = ATgetArgument(i_96, 0);
                              t = not_null(j_96);
                              t = Sym2Strs_0(t);
                              {
                                ATerm e_4 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("s", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
                                  return(t);
                                }
                                t = at_end_1(t, e_4);
                              }
                            }
                          else
                            {
                              if(match_cons(i_96, sym_iter_sep_2))
                                {
                                  j_96 = ATgetArgument(i_96, 0);
                                  k_96 = ATgetArgument(i_96, 1);
                                  {
                                    ATerm u_96 = NULL;
                                    t = not_null(j_96);
                                    {
                                      ATerm w_96 = NULL;
                                      t = Sym2Strs_0(t);
                                      u_96 = t;
                                      t = not_null(k_96);
                                      t = Sym2Strs_0(t);
                                      w_96 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_96), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_96), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("p", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                      t = concat_0(t);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(i_96, sym_iter_star_sep_2))
                                    {
                                      j_96 = ATgetArgument(i_96, 0);
                                      k_96 = ATgetArgument(i_96, 1);
                                      {
                                        ATerm a_97 = NULL;
                                        t = not_null(j_96);
                                        {
                                          ATerm c_97 = NULL;
                                          t = Sym2Strs_0(t);
                                          a_97 = t;
                                          t = not_null(k_96);
                                          t = Sym2Strs_0(t);
                                          c_97 = t;
                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_97), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_97), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("s", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                          t = concat_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_96, sym_iter_n_2))
                                        {
                                          j_96 = ATgetArgument(i_96, 0);
                                          k_96 = ATgetArgument(i_96, 1);
                                          {
                                            ATerm f_97 = NULL;
                                            t = not_null(j_96);
                                            t = Sym2Strs_0(t);
                                            f_97 = t;
                                            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_97), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)));
                                            t = concat_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_96, sym_iter_sep_n_3))
                                            {
                                              j_96 = ATgetArgument(i_96, 0);
                                              k_96 = ATgetArgument(i_96, 1);
                                              h_96 = ATgetArgument(i_96, 2);
                                              {
                                                ATerm j_97 = NULL;
                                                t = not_null(j_96);
                                                {
                                                  ATerm l_97 = NULL;
                                                  t = Sym2Strs_0(t);
                                                  j_97 = t;
                                                  t = not_null(k_96);
                                                  t = Sym2Strs_0(t);
                                                  l_97 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_97), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_97), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                  t = concat_0(t);
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(i_96, sym_set_1))
                                                {
                                                  j_96 = ATgetArgument(i_96, 0);
                                                  {
                                                    ATerm o_97 = NULL;
                                                    t = not_null(j_96);
                                                    t = Sym2Strs_0(t);
                                                    o_97 = t;
                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_97), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(i_96, sym_pair_2))
                                                    {
                                                      j_96 = ATgetArgument(i_96, 0);
                                                      k_96 = ATgetArgument(i_96, 1);
                                                      {
                                                        ATerm s_97 = NULL;
                                                        t = not_null(j_96);
                                                        {
                                                          ATerm u_97 = NULL;
                                                          t = Sym2Strs_0(t);
                                                          s_97 = t;
                                                          t = not_null(k_96);
                                                          t = Sym2Strs_0(t);
                                                          u_97 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_97), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("and", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_97), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                          t = concat_0(t);
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_96, sym_func_2))
                                                        {
                                                          j_96 = ATgetArgument(i_96, 0);
                                                          k_96 = ATgetArgument(i_96, 1);
                                                          {
                                                            ATerm y_97 = NULL;
                                                            t = not_null(j_96);
                                                            t = filter_1(t, Sym2Strs_0);
                                                            {
                                                              ATerm a_98 = NULL;
                                                              t = concat_0(t);
                                                              y_97 = t;
                                                              t = not_null(k_96);
                                                              t = Sym2Strs_0(t);
                                                              a_98 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_97), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("to", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_98), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                              t = concat_0(t);
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_96, sym_alt_2))
                                                            {
                                                              j_96 = ATgetArgument(i_96, 0);
                                                              k_96 = ATgetArgument(i_96, 1);
                                                              {
                                                                ATerm e_98 = NULL;
                                                                t = not_null(j_96);
                                                                {
                                                                  ATerm g_98 = NULL;
                                                                  t = Sym2Strs_0(t);
                                                                  e_98 = t;
                                                                  t = not_null(k_96);
                                                                  t = Sym2Strs_0(t);
                                                                  g_98 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_98), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("or", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_98), (ATerm) ATmakeAppl(sym_Nil_0))));
                                                                  t = concat_0(t);
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(i_96, sym_perm_1))
                                                                {
                                                                  j_96 = ATgetArgument(i_96, 0);
                                                                  {
                                                                    ATerm j_98 = NULL;
                                                                    t = not_null(j_96);
                                                                    t = filter_1(t, Sym2Strs_0);
                                                                    t = concat_0(t);
                                                                    j_98 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue)), not_null(j_98));
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(i_96, sym_sort_1))
                                                                    {
                                                                      j_96 = ATgetArgument(i_96, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_96), (ATerm) ATmakeAppl(sym_Nil_0));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(i_96, sym_lit_1))
                                                                        {
                                                                          j_96 = ATgetArgument(i_96, 0);
                                                                          {
                                                                            ATerm n_98 = NULL;
                                                                            t = not_null(j_96);
                                                                            {
                                                                              ATerm s_18 = t;
                                                                              if(PushChoice()==0)
                                                                                {
                                                                                  t = de_quote_0(t);
                                                                                  t = de_escape_0(t);
                                                                                  PopChoice();
                                                                                }
                                                                              else
                                                                                t = s_18;
                                                                              n_98 = t;
                                                                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_98), (ATerm) ATmakeAppl(sym_Nil_0));
                                                                            }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(i_96, sym_label_2))
                                                                            {
                                                                              j_96 = ATgetArgument(i_96, 0);
                                                                              k_96 = ATgetArgument(i_96, 1);
                                                                              {
                                                                                ATerm q_98 = NULL;
                                                                                t = not_null(j_96);
                                                                                {
                                                                                  ATerm t_18 = t;
                                                                                  if(PushChoice()==0)
                                                                                    {
                                                                                      t = de_quote_0(t);
                                                                                      t = de_escape_0(t);
                                                                                      PopChoice();
                                                                                    }
                                                                                  else
                                                                                    t = t_18;
                                                                                  q_98 = t;
                                                                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_98), (ATerm) ATmakeAppl(sym_Nil_0));
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
    ATerm f_4 (ATerm t)
    {
      ATerm u_18 = t;
      if(PushChoice()==0)
        {
          t = toAlphaNum_0(t);
          PopChoice();
        }
      else
        t = u_18;
      return(t);
    }
    t = map_1(t, f_4);
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
  ATerm e_100 = NULL;
  e_100 = t;
  d_100 :
  if(!(match_string(e_100, "")))
    _fail(t);
  return(t);
}
ATerm empty_test_0 (ATerm t)
{
  ATerm v_18;
  v_18 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm w_18 = t;
      if(PushChoice()==0)
        {
          ATerm g_100 = NULL;
          g_100 = t;
          f_100 :
          if(!(match_string(g_100, "")))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = w_18;
      return(t);
    }
    t = filter_1(t, g_4);
    t = Hd_0(t);
  }
  t = v_18;
  return(t);
}
ATerm isHyphen_0 (ATerm t)
{
  ATerm j_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_int(j_100, 45))
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  else
    _fail(t);
  return(t);
}
ATerm isLower_0 (ATerm t)
{
  ATerm m_100 = NULL;
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_100), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(122), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(97), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_100), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm isUpper_0 (ATerm t)
{
  ATerm q_100 = NULL;
  q_100 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_100), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(90), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_100), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL;
  x_100 = t;
  u_100 :
  if(match_cons(x_100, sym_TCons_2))
    {
      y_100 = ATgetArgument(x_100, 0);
      z_100 = ATgetArgument(x_100, 1);
      v_100 :
      if(match_cons(z_100, sym_TCons_2))
        {
          a_101 = ATgetArgument(z_100, 0);
          b_101 = ATgetArgument(z_100, 1);
          w_100 :
          if(match_cons(b_101, sym_TNil_0))
            {
              ATerm x_18;
              x_18 = t;
              {
                ATerm y_18 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(y_100), not_null(a_101));
                    PopChoice();
                  }
                else
                  {
                    t = y_18;
                    t = SSL_gtr(not_null(y_100), not_null(a_101));
                  }
              }
              t = x_18;
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
  ATerm z_18 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = z_18;
  return(t);
}
ATerm isNum_0 (ATerm t)
{
  ATerm g_101 = NULL;
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_101), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(57), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_101), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = leq_0(t);
  return(t);
}
ATerm isAlphaNumHyphen_0 (ATerm t)
{
  ATerm d_19 = t;
  if(PushChoice()==0)
    {
      t = isNum_0(t);
      PopChoice();
    }
  else
    {
      t = d_19;
      {
        ATerm e_19 = t;
        if(PushChoice()==0)
          {
            t = isUpper_0(t);
            PopChoice();
          }
        else
          {
            t = e_19;
            {
              ATerm f_19 = t;
              if(PushChoice()==0)
                {
                  t = isLower_0(t);
                  PopChoice();
                }
              else
                {
                  t = f_19;
                  {
                    ATerm l_101 = NULL;
                    l_101 = t;
                    k_101 :
                    if(match_int(l_101, 45))
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                    else
                      _fail(t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0 (ATerm t)
{
  ATerm c_103 = NULL;
  ATerm t_104 (ATerm t)
  {
    t = not_null(c_103);
    t = explode_string_0(t);
    {
      ATerm g_19 = t;
      if(PushChoice()==0)
        {
          t = map_1(t, isAlphaNumHyphen_0);
          PopChoice();
          _fail(t);
        }
      else
        t = g_19;
    }
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  c_103 = t;
  b_103 :
  if(match_string(c_103, ","))
    {
      ATerm h_19 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
          PopChoice();
        }
      else
        {
          t = h_19;
          t = t_104(t);
        }
    }
  else
    {
      if(match_string(c_103, ":"))
        {
          ATerm k_19 = t;
          if(PushChoice()==0)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
              PopChoice();
            }
          else
            {
              t = k_19;
              t = t_104(t);
            }
        }
      else
        {
          if(match_string(c_103, ";"))
            {
              ATerm l_19 = t;
              if(PushChoice()==0)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
                  PopChoice();
                }
              else
                {
                  t = l_19;
                  t = t_104(t);
                }
            }
          else
            {
              if(match_string(c_103, "+"))
                {
                  ATerm m_19 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
                      PopChoice();
                    }
                  else
                    {
                      t = m_19;
                      t = t_104(t);
                    }
                }
              else
                {
                  if(match_string(c_103, "++"))
                    {
                      ATerm n_19 = t;
                      if(PushChoice()==0)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
                          PopChoice();
                        }
                      else
                        {
                          t = n_19;
                          t = t_104(t);
                        }
                    }
                  else
                    {
                      if(match_string(c_103, "-"))
                        {
                          ATerm o_19 = t;
                          if(PushChoice()==0)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
                              PopChoice();
                            }
                          else
                            {
                              t = o_19;
                              {
                                ATerm p_19 = t;
                                if(PushChoice()==0)
                                  {
                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_19;
                                    t = t_104(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(c_103, "--"))
                            {
                              ATerm q_19 = t;
                              if(PushChoice()==0)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
                                  PopChoice();
                                }
                              else
                                {
                                  t = q_19;
                                  t = t_104(t);
                                }
                            }
                          else
                            {
                              if(match_string(c_103, "*"))
                                {
                                  ATerm r_19 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = r_19;
                                      t = t_104(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(c_103, "/"))
                                    {
                                      ATerm s_19 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_19;
                                          t = t_104(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(c_103, "&"))
                                        {
                                          ATerm t_19 = t;
                                          if(PushChoice()==0)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = t_19;
                                              t = t_104(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(c_103, "&&"))
                                            {
                                              ATerm u_19 = t;
                                              if(PushChoice()==0)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = u_19;
                                                  t = t_104(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(c_103, "!"))
                                                {
                                                  ATerm v_19 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_19;
                                                      t = t_104(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(c_103, "~"))
                                                    {
                                                      ATerm w_19 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = w_19;
                                                          t = t_104(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(c_103, "%"))
                                                        {
                                                          ATerm x_19 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = x_19;
                                                              t = t_104(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(c_103, "<<"))
                                                            {
                                                              ATerm y_19 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = y_19;
                                                                  t = t_104(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(c_103, ">>"))
                                                                {
                                                                  ATerm z_19 = t;
                                                                  if(PushChoice()==0)
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
                                                                      PopChoice();
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_19;
                                                                      t = t_104(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(c_103, "!="))
                                                                    {
                                                                      ATerm a_20 = t;
                                                                      if(PushChoice()==0)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
                                                                          PopChoice();
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_20;
                                                                          t = t_104(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(c_103, "<"))
                                                                        {
                                                                          ATerm b_20 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_20;
                                                                              t = t_104(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(c_103, "<="))
                                                                            {
                                                                              ATerm c_20 = t;
                                                                              if(PushChoice()==0)
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
                                                                                  PopChoice();
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_20;
                                                                                  t = t_104(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(c_103, ">"))
                                                                                {
                                                                                  ATerm d_20 = t;
                                                                                  if(PushChoice()==0)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
                                                                                      PopChoice();
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_20;
                                                                                      t = t_104(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(c_103, ">="))
                                                                                    {
                                                                                      ATerm e_20 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_20;
                                                                                          t = t_104(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(c_103, "|"))
                                                                                        {
                                                                                          ATerm f_20 = t;
                                                                                          if(PushChoice()==0)
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
                                                                                              PopChoice();
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_20;
                                                                                              t = t_104(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(c_103, "="))
                                                                                            {
                                                                                              ATerm g_20 = t;
                                                                                              if(PushChoice()==0)
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
                                                                                                  PopChoice();
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_20;
                                                                                                  t = t_104(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(c_103, "=="))
                                                                                                {
                                                                                                  ATerm h_20 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_20;
                                                                                                      t = t_104(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(c_103, "||"))
                                                                                                    {
                                                                                                      ATerm j_20 = t;
                                                                                                      if(PushChoice()==0)
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
                                                                                                          PopChoice();
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_20;
                                                                                                          t = t_104(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(c_103, ":="))
                                                                                                        {
                                                                                                          ATerm k_20 = t;
                                                                                                          if(PushChoice()==0)
                                                                                                            {
                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_20;
                                                                                                              t = t_104(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(c_103, "->"))
                                                                                                            {
                                                                                                              ATerm l_20 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_20;
                                                                                                                  t = t_104(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(c_103, "=>"))
                                                                                                                {
                                                                                                                  ATerm m_20 = t;
                                                                                                                  if(PushChoice()==0)
                                                                                                                    {
                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
                                                                                                                      PopChoice();
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = m_20;
                                                                                                                      t = t_104(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(c_103, "*="))
                                                                                                                    {
                                                                                                                      ATerm n_20 = t;
                                                                                                                      if(PushChoice()==0)
                                                                                                                        {
                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
                                                                                                                          PopChoice();
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_20;
                                                                                                                          t = t_104(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(c_103, "/="))
                                                                                                                        {
                                                                                                                          ATerm o_20 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = o_20;
                                                                                                                              t = t_104(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(c_103, "%="))
                                                                                                                            {
                                                                                                                              ATerm p_20 = t;
                                                                                                                              if(PushChoice()==0)
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
                                                                                                                                  PopChoice();
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_20;
                                                                                                                                  t = t_104(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(c_103, "+="))
                                                                                                                                {
                                                                                                                                  ATerm q_20 = t;
                                                                                                                                  if(PushChoice()==0)
                                                                                                                                    {
                                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
                                                                                                                                      PopChoice();
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_20;
                                                                                                                                      t = t_104(t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(c_103, "-="))
                                                                                                                                    {
                                                                                                                                      ATerm r_20 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_20;
                                                                                                                                          t = t_104(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(c_103, "<<="))
                                                                                                                                        {
                                                                                                                                          ATerm s_20 = t;
                                                                                                                                          if(PushChoice()==0)
                                                                                                                                            {
                                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
                                                                                                                                              PopChoice();
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = s_20;
                                                                                                                                              t = t_104(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(c_103, ">>="))
                                                                                                                                            {
                                                                                                                                              ATerm t_20 = t;
                                                                                                                                              if(PushChoice()==0)
                                                                                                                                                {
                                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
                                                                                                                                                  PopChoice();
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = t_20;
                                                                                                                                                  t = t_104(t);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(c_103, "&="))
                                                                                                                                                {
                                                                                                                                                  ATerm u_20 = t;
                                                                                                                                                  if(PushChoice()==0)
                                                                                                                                                    {
                                                                                                                                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = u_20;
                                                                                                                                                      t = t_104(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(c_103, "^="))
                                                                                                                                                    {
                                                                                                                                                      ATerm v_20 = t;
                                                                                                                                                      if(PushChoice()==0)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
                                                                                                                                                          PopChoice();
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_20;
                                                                                                                                                          t = t_104(t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(c_103, "|="))
                                                                                                                                                        {
                                                                                                                                                          ATerm w_20 = t;
                                                                                                                                                          if(PushChoice()==0)
                                                                                                                                                            {
                                                                                                                                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
                                                                                                                                                              PopChoice();
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = w_20;
                                                                                                                                                              t = t_104(t);
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        t = t_104(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm Sep_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL;
  x_104 = t;
  w_104 :
  if(match_cons(x_104, sym_Cons_2))
    {
      y_104 = ATgetArgument(x_104, 0);
      z_104 = ATgetArgument(x_104, 1);
      {
        ATerm c_105 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = p_75(t);
        c_105 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_105), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_104), not_null(z_104)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm x_20 = t;
  if(PushChoice()==0)
    {
      ATerm i_105 = NULL;
      i_105 = t;
      g_105 :
      if(!(match_cons(i_105, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = x_20;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm y_20 = t;
          if(PushChoice()==0)
            {
              ATerm j_105 = NULL;
              j_105 = t;
              h_105 :
              if(!(match_cons(j_105, sym_Nil_0)))
                _fail(t);
              PopChoice();
            }
          else
            {
              t = y_20;
              t = Cons_2(t, _id, i_4);
              t = Sep_1(t, q_75);
            }
          return(t);
        }
        t = Cons_2(t, _id, i_4);
      }
    }
  return(t);
}
ATerm Lit2Str_0 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL;
  n_105 = t;
  m_105 :
  if(match_cons(n_105, sym_lit_1))
    {
      o_105 = ATgetArgument(n_105, 0);
      t = not_null(o_105);
      {
        ATerm z_20 = t;
        if(PushChoice()==0)
          {
            t = de_quote_0(t);
            t = de_escape_0(t);
            PopChoice();
          }
        else
          t = z_20;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Singleton_0 (ATerm t)
{
  ATerm s_105 = NULL;
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_105), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm list_ana_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm n_106 (ATerm t)
  {
    ATerm h_22 = t;
    if(PushChoice()==0)
      {
        t = j_60(t);
        t = Singleton_0(t);
        PopChoice();
      }
    else
      {
        t = h_22;
        {
          ATerm i_22 = t;
          if(PushChoice()==0)
            {
              ATerm b_106 = NULL;
              ATerm e_106 = NULL;
              b_106 = t;
              {
                ATerm f_106 = NULL;
                ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL;
                t = not_null(b_106);
                f_106 = t;
                t = SSL_explode_term(not_null(f_106));
                h_106 = t;
                y_105 :
                if(match_cons(h_106, sym_TCons_2))
                  {
                    i_106 = ATgetArgument(h_106, 0);
                    j_106 = ATgetArgument(h_106, 1);
                    z_105 :
                    if(match_cons(j_106, sym_TCons_2))
                      {
                        k_106 = ATgetArgument(j_106, 0);
                        l_106 = ATgetArgument(j_106, 1);
                        a_106 :
                        if(match_cons(l_106, sym_TNil_0))
                          {
                            if(e_106 != NULL && e_106 != k_106)
                              _fail(k_106);
                            else
                              e_106 = k_106;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                t = not_null(e_106);
                t = filter_1(t, n_106);
                t = concat_0(t);
              }
              PopChoice();
            }
          else
            {
              t = i_22;
              t = (ATerm) ATmakeAppl(sym_Nil_0);
            }
        }
      }
    return(t);
  }
  t = n_106(t);
  return(t);
}
ATerm lit2str_0 (ATerm t)
{
  t = list_ana_1(t, Lit2Str_0);
  {
    ATerm k_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
      return(t);
    }
    t = separate_by_1(t, k_4);
    t = concat_strings_0(t);
    {
      ATerm i_23 = t;
      if(PushChoice()==0)
        {
          t = toAlphaNum_0(t);
          PopChoice();
        }
      else
        t = i_23;
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
  ATerm h_107 = NULL,i_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL;
  ATerm l_108 (ATerm t)
  {
    ATerm u_107 = NULL;
    ATerm j_23 = t;
    if(PushChoice()==0)
      {
        ATerm v_107 = NULL;
        t = not_null(i_107);
        t = filter_1(t, lit2str_0);
        t = strs2constr_0(t);
        v_107 = t;
        if(u_107 != NULL && u_107 != v_107)
          _fail(v_107);
        else
          u_107 = v_107;
        PopChoice();
      }
    else
      {
        t = j_23;
        {
          ATerm k_23 = t;
          if(PushChoice()==0)
            {
              ATerm x_107 = NULL;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_107), (ATerm) ATmakeAppl(sym_Nil_0));
              {
                ATerm z_107 = NULL;
                t = syms2strs_0(t);
                x_107 = t;
                t = not_null(i_107);
                t = filter_1(t, lit2str_0);
                {
                  ATerm c_108 = NULL;
                  t = empty_test_0(t);
                  z_107 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_107), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_107), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = conc_0(t);
                  t = strs2constr_0(t);
                  c_108 = t;
                  if(u_107 != NULL && u_107 != c_108)
                    _fail(c_108);
                  else
                    u_107 = c_108;
                }
              }
              PopChoice();
            }
          else
            {
              t = k_23;
              {
                ATerm m_23 = t;
                if(PushChoice()==0)
                  {
                    ATerm d_108 = NULL;
                    t = not_null(i_107);
                    t = syms2strs_0(t);
                    t = strs2constr_0(t);
                    d_108 = t;
                    if(u_107 != NULL && u_107 != d_108)
                      _fail(d_108);
                    else
                      u_107 = d_108;
                    PopChoice();
                  }
                else
                  {
                    t = m_23;
                    {
                      ATerm e_108 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_107), (ATerm) ATmakeAppl(sym_Nil_0));
                      {
                        ATerm g_108 = NULL;
                        t = syms2strs_0(t);
                        e_108 = t;
                        t = (ATerm) ATmakeAppl(sym_TNil_0);
                        {
                          ATerm i_108 = NULL;
                          t = new_0(t);
                          g_108 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_108), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_108), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          t = strs2constr_0(t);
                          i_108 = t;
                          if(u_107 != NULL && u_107 != i_108)
                            _fail(i_108);
                          else
                            u_107 = i_108;
                        }
                      }
                    }
                  }
              }
            }
        }
      }
    t = not_null(u_107);
    return(t);
  }
  ATerm m_108 (ATerm t)
  {
    t = not_null(i_107);
    t = normalize_constr_0(t);
    return(t);
  }
  h_107 = t;
  f_107 :
  if(match_cons(h_107, sym_prod_3))
    {
      i_107 = ATgetArgument(h_107, 0);
      k_107 = ATgetArgument(h_107, 1);
      l_107 = ATgetArgument(h_107, 2);
      g_107 :
      if(match_cons(i_107, sym_Nil_0))
        {
          ATerm n_23 = t;
          if(PushChoice()==0)
            {
              ATerm o_107 = NULL;
              ATerm p_107 = NULL;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_107), (ATerm) ATmakeAppl(sym_Nil_0));
              {
                ATerm r_107 = NULL;
                t = syms2strs_0(t);
                p_107 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_107), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = conc_0(t);
                t = strs2constr_0(t);
                r_107 = t;
                if(o_107 != NULL && o_107 != r_107)
                  _fail(r_107);
                else
                  o_107 = r_107;
              }
              t = not_null(o_107);
              PopChoice();
            }
          else
            {
              t = n_23;
              t = l_108(t);
            }
        }
      else
        t = l_108(t);
    }
  else
    {
      if(match_cons(h_107, sym_prod_fun_4))
        {
          i_107 = ATgetArgument(h_107, 0);
          k_107 = ATgetArgument(h_107, 1);
          l_107 = ATgetArgument(h_107, 2);
          m_107 = ATgetArgument(h_107, 3);
          t = m_108(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_iter_star_sep_2))
    {
      f_109 = ATgetArgument(e_109, 0);
      g_109 = ATgetArgument(e_109, 1);
      {
        ATerm p_23 = t;
        if(PushChoice()==0)
          {
            ATerm j_109 = NULL;
            t = not_null(f_109);
            {
              ATerm l_109 = NULL;
              t = j_0(t);
              j_109 = t;
              t = not_null(g_109);
              t = k_0(t);
              l_109 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(j_109), not_null(l_109));
            }
            PopChoice();
          }
        else
          {
            t = p_23;
            {
              ATerm p_109 = NULL;
              t = not_null(f_109);
              {
                ATerm r_109 = NULL;
                t = j_0(t);
                p_109 = t;
                t = not_null(g_109);
                t = k_0(t);
                r_109 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(p_109), not_null(r_109));
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
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL;
  g_110 = t;
  f_110 :
  if(match_cons(g_110, sym_iter_sep_2))
    {
      h_110 = ATgetArgument(g_110, 0);
      i_110 = ATgetArgument(g_110, 1);
      {
        ATerm q_23 = t;
        if(PushChoice()==0)
          {
            ATerm l_110 = NULL;
            t = not_null(h_110);
            {
              ATerm n_110 = NULL;
              t = h_0(t);
              l_110 = t;
              t = not_null(i_110);
              t = i_0(t);
              n_110 = t;
              t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(l_110), not_null(n_110));
            }
            PopChoice();
          }
        else
          {
            t = q_23;
            {
              ATerm r_110 = NULL;
              t = not_null(h_110);
              {
                ATerm t_110 = NULL;
                t = h_0(t);
                r_110 = t;
                t = not_null(i_110);
                t = i_0(t);
                t_110 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(r_110), not_null(t_110));
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
  ATerm g_111 = NULL,h_111 = NULL;
  g_111 = t;
  f_111 :
  if(match_cons(g_111, sym_iter_star_1))
    {
      h_111 = ATgetArgument(g_111, 0);
      {
        ATerm r_23 = t;
        if(PushChoice()==0)
          {
            ATerm j_111 = NULL;
            t = not_null(h_111);
            t = g_0(t);
            j_111 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(j_111));
            PopChoice();
          }
        else
          {
            t = r_23;
            {
              ATerm m_111 = NULL;
              t = not_null(h_111);
              t = g_0(t);
              m_111 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(m_111));
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
  ATerm x_111 = NULL,y_111 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym_iter_1))
    {
      y_111 = ATgetArgument(x_111, 0);
      {
        ATerm s_23 = t;
        if(PushChoice()==0)
          {
            ATerm a_112 = NULL;
            t = not_null(y_111);
            t = f_0(t);
            a_112 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, not_null(a_112));
            PopChoice();
          }
        else
          {
            t = s_23;
            {
              ATerm d_112 = NULL;
              t = not_null(y_111);
              t = f_0(t);
              d_112 = t;
              t = (ATerm) ATmakeAppl(sym_iter_1, not_null(d_112));
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
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym_alt_2))
    {
      r_112 = ATgetArgument(q_112, 0);
      s_112 = ATgetArgument(q_112, 1);
      {
        ATerm t_23 = t;
        if(PushChoice()==0)
          {
            ATerm v_112 = NULL;
            t = not_null(r_112);
            {
              ATerm x_112 = NULL;
              t = d_0(t);
              v_112 = t;
              t = not_null(s_112);
              t = e_0(t);
              x_112 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, not_null(v_112), not_null(x_112));
            }
            PopChoice();
          }
        else
          {
            t = t_23;
            {
              ATerm c_113 = NULL;
              t = not_null(r_112);
              {
                ATerm e_113 = NULL;
                t = d_0(t);
                c_113 = t;
                t = not_null(s_112);
                t = e_0(t);
                e_113 = t;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(c_113), not_null(e_113));
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
  ATerm u_23 = t;
  if(PushChoice()==0)
    {
      t = sort_1(t, _id);
      PopChoice();
    }
  else
    {
      t = u_23;
      {
        ATerm v_23 = t;
        if(PushChoice()==0)
          {
            t = alt_2(t, syntaxless_sort_0, syntaxless_sort_0);
            PopChoice();
          }
        else
          {
            t = v_23;
            {
              ATerm w_23 = t;
              if(PushChoice()==0)
                {
                  t = opt_1(t, syntaxless_sort_0);
                  PopChoice();
                }
              else
                {
                  t = w_23;
                  {
                    ATerm x_23 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_1(t, syntaxless_sort_0);
                        PopChoice();
                      }
                    else
                      {
                        t = x_23;
                        {
                          ATerm y_23 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_star_1(t, syntaxless_sort_0);
                              PopChoice();
                            }
                          else
                            {
                              t = y_23;
                              {
                                ATerm z_23 = t;
                                if(PushChoice()==0)
                                  {
                                    t = iter_sep_2(t, syntaxless_sort_0, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_23;
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
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm p_113 = NULL;
      p_113 = t;
      o_113 :
      if(!(match_cons(p_113, sym_Nil_0)))
        _fail(t);
      return(t);
    }
    t = Cons_2(t, syntaxless_sort_0, o_4);
    return(t);
  }
  t = prod_3(t, n_4, _id, _id);
  {
    ATerm s_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Injections_0);
      return(t);
    }
    t = has_option_1(t, s_4);
  }
  return(t);
}
ATerm is_reject_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL;
  v_113 = t;
  u_113 :
  if(match_cons(v_113, sym_prod_3))
    {
      w_113 = ATgetArgument(v_113, 0);
      x_113 = ATgetArgument(v_113, 1);
      y_113 = ATgetArgument(v_113, 2);
      t = not_null(y_113);
      {
        ATerm t_4 (ATerm t)
        {
          ATerm d_114 = NULL;
          d_114 = t;
          s_113 :
          if(!(match_cons(d_114, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, t_4);
      }
      t = (ATerm) ATmakeAppl(sym_TNil_0);
    }
  else
    {
      if(match_cons(v_113, sym_prod_fun_4))
        {
          w_113 = ATgetArgument(v_113, 0);
          x_113 = ATgetArgument(v_113, 1);
          y_113 = ATgetArgument(v_113, 2);
          z_113 = ATgetArgument(v_113, 3);
          t = not_null(z_113);
          {
            ATerm u_4 (ATerm t)
            {
              ATerm i_114 = NULL;
              i_114 = t;
              t_113 :
              if(!(match_cons(i_114, sym_reject_0)))
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, u_4);
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
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL;
  q_114 = t;
  p_114 :
  if(match_cons(q_114, sym_prod_3))
    {
      r_114 = ATgetArgument(q_114, 0);
      s_114 = ATgetArgument(q_114, 1);
      t_114 = ATgetArgument(q_114, 2);
      t = not_null(t_114);
      {
        ATerm w_4 (ATerm t)
        {
          ATerm y_114 = NULL;
          y_114 = t;
          n_114 :
          if(!(match_cons(y_114, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, w_4);
      }
      t = (ATerm) ATmakeAppl(sym_TNil_0);
    }
  else
    {
      if(match_cons(q_114, sym_prod_fun_4))
        {
          r_114 = ATgetArgument(q_114, 0);
          s_114 = ATgetArgument(q_114, 1);
          t_114 = ATgetArgument(q_114, 2);
          u_114 = ATgetArgument(q_114, 3);
          t = not_null(u_114);
          {
            ATerm x_4 (ATerm t)
            {
              ATerm d_115 = NULL;
              d_115 = t;
              o_114 :
              if(!(match_cons(d_115, sym_bracket_0)))
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, x_4);
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
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL;
  n_115 = t;
  m_115 :
  if(match_cons(n_115, sym_prod_3))
    {
      o_115 = ATgetArgument(n_115, 0);
      p_115 = ATgetArgument(n_115, 1);
      q_115 = ATgetArgument(n_115, 2);
      {
        ATerm v_115 = NULL;
        t = not_null(q_115);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm w_115 = NULL,x_115 = NULL;
            w_115 = t;
            j_115 :
            if(match_cons(w_115, sym_cons_1))
              {
                x_115 = ATgetArgument(w_115, 0);
                if(v_115 != NULL && v_115 != x_115)
                  _fail(x_115);
                else
                  v_115 = x_115;
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, y_4);
        }
        t = not_null(v_115);
      }
    }
  else
    {
      if(match_cons(n_115, sym_prod_fun_4))
        {
          o_115 = ATgetArgument(n_115, 0);
          p_115 = ATgetArgument(n_115, 1);
          q_115 = ATgetArgument(n_115, 2);
          r_115 = ATgetArgument(n_115, 3);
          {
            ATerm c_116 = NULL;
            t = not_null(r_115);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm d_116 = NULL,e_116 = NULL;
                d_116 = t;
                l_115 :
                if(match_cons(d_116, sym_cons_1))
                  {
                    e_116 = ATgetArgument(d_116, 0);
                    if(c_116 != NULL && c_116 != e_116)
                      _fail(e_116);
                    else
                      c_116 = e_116;
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, z_4);
            }
            t = not_null(c_116);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm k_116 = NULL;
  k_116 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_116), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
  t = concat_0(t);
  return(t);
}
ATerm uq2q_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm b_24 = t;
      if(PushChoice()==0)
        {
          ATerm r_116 = NULL;
          t = Hd_0(t);
          r_116 = t;
          n_116 :
          if(!(match_int(r_116, 34)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = b_24;
    }
    t = a_24;
    {
      ATerm c_24;
      c_24 = t;
      {
        ATerm d_24 = t;
        if(PushChoice()==0)
          {
            ATerm a_5 (ATerm t)
            {
              ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL;
              s_116 = t;
              o_116 :
              if(match_cons(s_116, sym_Cons_2))
                {
                  t_116 = ATgetArgument(s_116, 0);
                  u_116 = ATgetArgument(s_116, 1);
                  p_116 :
                  if(match_int(t_116, 34))
                    {
                      q_116 :
                      if(!(match_cons(u_116, sym_Nil_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              return(t);
            }
            t = at_last_1(t, a_5);
            PopChoice();
            _fail(t);
          }
        else
          t = d_24;
      }
      t = c_24;
      t = Quote_0(t);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm cons_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm a_117 = NULL,b_117 = NULL;
  a_117 = t;
  z_116 :
  if(match_cons(a_117, sym_cons_1))
    {
      b_117 = ATgetArgument(a_117, 0);
      {
        ATerm e_24 = t;
        if(PushChoice()==0)
          {
            ATerm d_117 = NULL;
            t = not_null(b_117);
            t = c_0(t);
            d_117 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, not_null(d_117));
            PopChoice();
          }
        else
          {
            t = e_24;
            {
              ATerm h_117 = NULL;
              t = not_null(b_117);
              t = c_0(t);
              h_117 = t;
              t = (ATerm) ATmakeAppl(sym_cons_1, not_null(h_117));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm at_cons_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    t = cons_1(t, n_60);
    return(t);
  }
  t = oncetd_1(t, f_5);
  return(t);
}
ATerm prodcons_0 (ATerm t)
{
  ATerm r_117 = NULL;
  r_117 = t;
  {
    ATerm f_24 = t;
    if(PushChoice()==0)
      {
        ATerm t_117 = NULL;
        ATerm u_117 = NULL;
        t = not_null(r_117);
        t = get_constr_0(t);
        u_117 = t;
        if(t_117 != NULL && t_117 != u_117)
          _fail(u_117);
        else
          t_117 = u_117;
        t = not_null(r_117);
        {
          ATerm g_5 (ATerm t)
          {
            t = not_null(t_117);
            t = uq2q_0(t);
            return(t);
          }
          t = at_cons_1(t, g_5);
        }
        PopChoice();
      }
    else
      {
        t = f_24;
        {
          ATerm w_117 = NULL;
          t = not_null(r_117);
          {
            ATerm g_24 = t;
            if(PushChoice()==0)
              {
                ATerm h_24 = t;
                if(PushChoice()==0)
                  {
                    t = get_constr_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = h_24;
                    {
                      ATerm i_24 = t;
                      if(PushChoice()==0)
                        {
                          t = is_bracket_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_24;
                          {
                            ATerm j_24 = t;
                            if(PushChoice()==0)
                              {
                                t = is_reject_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = j_24;
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
              t = g_24;
          }
          t = not_null(r_117);
          t = mk_constr_0(t);
          w_117 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_cons_1, not_null(w_117)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = add_attributes_0(t);
        }
      }
  }
  return(t);
}
ATerm sort_1 (ATerm t, ATerm b_0 (ATerm))
{
  ATerm h_118 = NULL,i_118 = NULL;
  h_118 = t;
  g_118 :
  if(match_cons(h_118, sym_sort_1))
    {
      i_118 = ATgetArgument(h_118, 0);
      {
        ATerm k_24 = t;
        if(PushChoice()==0)
          {
            ATerm k_118 = NULL;
            t = not_null(i_118);
            t = b_0(t);
            k_118 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, not_null(k_118));
            PopChoice();
          }
        else
          {
            t = k_24;
            {
              ATerm n_118 = NULL;
              t = not_null(i_118);
              t = b_0(t);
              n_118 = t;
              t = (ATerm) ATmakeAppl(sym_sort_1, not_null(n_118));
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
  ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL;
  d_119 = t;
  b_119 :
  if(match_cons(d_119, sym_appl_2))
    {
      e_119 = ATgetArgument(d_119, 0);
      i_119 = ATgetArgument(d_119, 1);
      c_119 :
      if(match_cons(e_119, sym_prod_3))
        {
          f_119 = ATgetArgument(e_119, 0);
          g_119 = ATgetArgument(e_119, 1);
          h_119 = ATgetArgument(e_119, 2);
          {
            ATerm o_119 = NULL,p_119 = NULL;
            ATerm v_119 = NULL;
            ATerm l_24 = t;
            if(PushChoice()==0)
              {
                t = not_null(h_119);
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm q_119 = NULL,r_119 = NULL;
                    q_119 = t;
                    w_118 :
                    if(match_cons(q_119, sym_cons_1))
                      {
                        r_119 = ATgetArgument(q_119, 0);
                        if(o_119 != NULL && o_119 != r_119)
                          _fail(r_119);
                        else
                          o_119 = r_119;
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1(t, i_5);
                }
                PopChoice();
              }
            else
              {
                t = l_24;
                {
                  ATerm m_24 = t;
                  if(PushChoice()==0)
                    {
                      t = not_null(g_119);
                      t = sort_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_prod_3, not_null(f_119), not_null(g_119), not_null(h_119));
                      t = prodcons_0(t);
                      {
                        ATerm j_5 (ATerm t)
                        {
                          ATerm k_5 (ATerm t)
                          {
                            ATerm s_119 = NULL,t_119 = NULL;
                            s_119 = t;
                            y_118 :
                            if(match_cons(s_119, sym_cons_1))
                              {
                                t_119 = ATgetArgument(s_119, 0);
                                if(o_119 != NULL && o_119 != t_119)
                                  _fail(t_119);
                                else
                                  o_119 = t_119;
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = oncetd_1(t, k_5);
                          return(t);
                        }
                        t = prod_3(t, _id, _id, j_5);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = m_24;
                      {
                        ATerm u_119 = NULL;
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
                        u_119 = t;
                        if(o_119 != NULL && o_119 != u_119)
                          _fail(u_119);
                        else
                          o_119 = u_119;
                      }
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(f_119), not_null(g_119), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_cons_1, not_null(o_119)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_119), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = get_pp_entry_0(t);
            v_119 = t;
            if(p_119 != NULL && p_119 != v_119)
              _fail(v_119);
            else
              p_119 = v_119;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_119), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_119), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL;
  m_120 = t;
  k_120 :
  if(match_cons(m_120, sym_appl_2))
    {
      n_120 = ATgetArgument(m_120, 0);
      r_120 = ATgetArgument(m_120, 1);
      l_120 :
      if(match_cons(n_120, sym_prod_3))
        {
          o_120 = ATgetArgument(n_120, 0);
          p_120 = ATgetArgument(n_120, 1);
          q_120 = ATgetArgument(n_120, 2);
          {
            ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL;
            ATerm a_121 = NULL,b_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL;
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(o_120), not_null(p_120), not_null(q_120)), not_null(r_120));
            t = get_templ_0(t);
            a_121 = t;
            h_120 :
            if(match_cons(a_121, sym_TCons_2))
              {
                b_121 = ATgetArgument(a_121, 0);
                d_121 = ATgetArgument(a_121, 1);
                i_120 :
                if(match_cons(d_121, sym_TCons_2))
                  {
                    e_121 = ATgetArgument(d_121, 0);
                    f_121 = ATgetArgument(d_121, 1);
                    j_120 :
                    if(match_cons(f_121, sym_TNil_0))
                      {
                        ATerm g_121 = NULL;
                        if(w_120 != NULL && w_120 != b_121)
                          _fail(b_121);
                        else
                          w_120 = b_121;
                        if(x_120 != NULL && x_120 != e_121)
                          _fail(e_121);
                        else
                          x_120 = e_121;
                        t = not_null(o_120);
                        {
                          ATerm i_121 = NULL;
                          ATerm l_5 (ATerm t)
                          {
                            ATerm n_24 = t;
                            if(PushChoice()==0)
                              {
                                t = lit_1(t, _id);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = n_24;
                            return(t);
                          }
                          t = filter_1(t, l_5);
                          g_121 = t;
                          t = not_null(r_120);
                          {
                            ATerm k_121 = NULL;
                            ATerm m_5 (ATerm t)
                            {
                              ATerm o_24 = t;
                              if(PushChoice()==0)
                                {
                                  t = lit_1(t, _id);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = o_24;
                              return(t);
                            }
                            t = filter_1(t, m_5);
                            i_121 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_121), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_121), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_120), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)))));
                            {
                              ATerm l_121 = NULL;
                              t = seq2abox_0(t);
                              k_121 = t;
                              if(y_120 != NULL && y_120 != k_121)
                                _fail(k_121);
                              else
                                y_120 = k_121;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_120), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_120), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = instantiate_0(t);
                              l_121 = t;
                              if(z_120 != NULL && z_120 != l_121)
                                _fail(l_121);
                              else
                                z_120 = l_121;
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
            t = not_null(z_120);
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
  ATerm u_121 = NULL;
  u_121 = t;
  t_121 :
  if(!(match_cons(u_121, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm opt_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm b_122 = NULL,c_122 = NULL;
  b_122 = t;
  a_122 :
  if(match_cons(b_122, sym_opt_1))
    {
      c_122 = ATgetArgument(b_122, 0);
      {
        ATerm p_24 = t;
        if(PushChoice()==0)
          {
            ATerm e_122 = NULL;
            t = not_null(c_122);
            t = a_0(t);
            e_122 = t;
            t = (ATerm) ATmakeAppl(sym_opt_1, not_null(e_122));
            PopChoice();
          }
        else
          {
            t = p_24;
            {
              ATerm h_122 = NULL;
              t = not_null(c_122);
              t = a_0(t);
              h_122 = t;
              t = (ATerm) ATmakeAppl(sym_opt_1, not_null(h_122));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm p_122 (ATerm t)
  {
    ATerm q_24 = t;
    if(PushChoice()==0)
      {
        ATerm o_122 = NULL;
        o_122 = t;
        n_122 :
        if(!(match_cons(o_122, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = q_24;
        {
          ATerm r_24 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, l_68, p_122);
              PopChoice();
            }
          else
            {
              t = r_24;
              t = Tl_0(t);
              t = p_122(t);
            }
        }
      }
    return(t);
  }
  t = p_122(t);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_24 = t;
  if(PushChoice()==0)
    {
      ATerm r_122 = NULL;
      r_122 = t;
      q_122 :
      if(!(match_cons(r_122, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = s_24;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm s_122 (ATerm t)
  {
    t = t_76(t);
    t = _all(t, s_122);
    return(t);
  }
  t = s_122(t);
  return(t);
}
ATerm sometd_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm t_122 (ATerm t)
  {
    ATerm t_24 = t;
    if(PushChoice()==0)
      {
        t = q_78(t);
        PopChoice();
      }
    else
      {
        t = t_24;
        t = _some(t, t_122);
      }
    return(t);
  }
  t = t_122(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
{
  ATerm u_122 (ATerm t)
  {
    ATerm x_24 = t;
    if(PushChoice()==0)
      {
        t = u_79(t);
        t = u_122(t);
        PopChoice();
      }
    else
      {
        t = x_24;
        t = v_79(t);
      }
    return(t);
  }
  t = u_122(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_79 (ATerm))
{
  t = repeat_2(t, x_79, _id);
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm y_122 (ATerm t)
  {
    ATerm z_24 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_122);
        PopChoice();
      }
    else
      {
        t = z_24;
        {
          ATerm x_122 = NULL;
          x_122 = t;
          w_122 :
          if(match_cons(x_122, sym_Nil_0))
            t = s_74(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = y_122(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL;
  c_123 = t;
  b_123 :
  if(!(match_cons(c_123, sym_Nil_0)))
    {
      if(match_cons(c_123, sym_Cons_2))
        {
          d_123 = ATgetArgument(c_123, 0);
          e_123 = ATgetArgument(c_123, 1);
          t = not_null(d_123);
          {
            ATerm q_5 (ATerm t)
            {
              t = not_null(e_123);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, q_5);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_123 = NULL;
  k_123 = t;
  t = SSL_int_to_string(not_null(k_123));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
  v_123 = t;
  t_123 :
  if(match_cons(v_123, sym_Path1_1))
    {
      w_123 = ATgetArgument(v_123, 0);
      t = not_null(w_123);
    }
  else
    {
      if(match_cons(v_123, sym_Path_2))
        {
          w_123 = ATgetArgument(v_123, 0);
          x_123 = ATgetArgument(v_123, 1);
          {
            ATerm f_124 = NULL,o_124 = NULL;
            t = not_null(x_123);
            {
              ATerm s_5 (ATerm t)
              {
                ATerm g_124 = NULL,h_124 = NULL,j_124 = NULL;
                g_124 = t;
                r_123 :
                if(match_cons(g_124, sym_selector_2))
                  {
                    h_124 = ATgetArgument(g_124, 0);
                    j_124 = ATgetArgument(g_124, 1);
                    {
                      ATerm m_124 = NULL;
                      t = not_null(h_124);
                      t = int_to_string_0(t);
                      m_124 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_124), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_124), (ATerm) ATmakeAppl(sym_Nil_0)))));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, s_5);
              t = concat_0(t);
              o_124 = t;
              if(f_124 != NULL && f_124 != o_124)
                _fail(o_124);
              else
                f_124 = o_124;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_123), not_null(f_124));
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
  ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL;
  b_125 = t;
  a_125 :
  if(match_cons(b_125, sym_Path1_1))
    {
      c_125 = ATgetArgument(b_125, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_125), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(b_125, sym_Path_2))
        {
          c_125 = ATgetArgument(b_125, 0);
          d_125 = ATgetArgument(b_125, 1);
          {
            ATerm l_125 = NULL,t_125 = NULL;
            t = not_null(d_125);
            {
              ATerm t_5 (ATerm t)
              {
                ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
                m_125 = t;
                x_124 :
                if(match_cons(m_125, sym_selector_2))
                  {
                    n_125 = ATgetArgument(m_125, 0);
                    o_125 = ATgetArgument(m_125, 1);
                    t = not_null(n_125);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, t_5);
              t_125 = t;
              if(l_125 != NULL && l_125 != t_125)
                _fail(t_125);
              else
                l_125 = t_125;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_125), not_null(l_125));
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
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
  b_126 = t;
  a_126 :
  if(match_cons(b_126, sym_PP_Entry_2))
    {
      c_126 = ATgetArgument(b_126, 0);
      d_126 = ATgetArgument(b_126, 1);
      {
        ATerm g_126 = NULL;
        t = not_null(c_126);
        t = mk_key_0(t);
        g_126 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_126), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_126), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_126), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = table_put_0(t);
        t = not_null(c_126);
        t = path_to_string_0(t);
        {
          ATerm u_5 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
            return(t);
          }
          t = notify_1(t, u_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_126 = NULL;
  l_126 = t;
  t = SSL_string_to_int(not_null(l_126));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL;
  ATerm u_127 (ATerm t)
  {
    ATerm q_127 = NULL;
    t = not_null(f_127);
    t = De_Escape_0(t);
    q_127 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_127), not_null(q_127));
    return(t);
  }
  ATerm w_127 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  g_127 = t;
  v_126 :
  if(match_cons(g_127, sym_Cons_2))
    {
      e_127 = ATgetArgument(g_127, 0);
      f_127 = ATgetArgument(g_127, 1);
      w_126 :
      if(match_cons(f_127, sym_Cons_2))
        {
          c_127 = ATgetArgument(f_127, 0);
          d_127 = ATgetArgument(f_127, 1);
          x_126 :
          if(match_int(c_127, 34))
            {
              y_126 :
              if(match_int(e_127, 92))
                {
                  ATerm a_25 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_127 = NULL;
                      t = not_null(d_127);
                      t = De_Escape_0(t);
                      j_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(j_127));
                      PopChoice();
                    }
                  else
                    {
                      t = a_25;
                      t = u_127(t);
                    }
                }
              else
                t = u_127(t);
            }
          else
            {
              if(match_int(c_127, 92))
                {
                  z_126 :
                  if(match_int(e_127, 92))
                    {
                      ATerm b_25 = t;
                      if(PushChoice()==0)
                        {
                          ATerm m_127 = NULL;
                          t = not_null(d_127);
                          t = De_Escape_0(t);
                          m_127 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(m_127));
                          PopChoice();
                        }
                      else
                        {
                          t = b_25;
                          t = u_127(t);
                        }
                    }
                  else
                    t = u_127(t);
                }
              else
                {
                  a_127 :
                  t = u_127(t);
                }
            }
        }
      else
        {
          b_127 :
          t = u_127(t);
        }
    }
  else
    {
      if(match_cons(g_127, sym_Nil_0))
        t = w_127(t);
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
  ATerm b_128 = NULL;
  b_128 = t;
  t = SSL_implode_string(not_null(b_128));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm g_128 (ATerm t)
  {
    ATerm c_25 = t;
    if(PushChoice()==0)
      {
        ATerm v_5 (ATerm t)
        {
          ATerm f_128 = NULL;
          f_128 = t;
          e_128 :
          if(!(match_cons(f_128, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, _id, v_5);
        t = c_75(t);
        PopChoice();
      }
    else
      {
        t = c_25;
        t = Cons_2(t, _id, g_128);
      }
    return(t);
  }
  t = g_128(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL;
  j_128 = t;
  i_128 :
  if(match_cons(j_128, sym_Cons_2))
    {
      k_128 = ATgetArgument(j_128, 0);
      l_128 = ATgetArgument(j_128, 1);
      t = not_null(l_128);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL;
  r_128 = t;
  q_128 :
  if(match_cons(r_128, sym_Cons_2))
    {
      s_128 = ATgetArgument(r_128, 0);
      t_128 = ATgetArgument(r_128, 1);
      t = not_null(s_128);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_128 = NULL;
  y_128 = t;
  t = SSL_explode_string(not_null(y_128));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm e_25;
    e_25 = t;
    {
      ATerm h_129 = NULL;
      t = Hd_0(t);
      h_129 = t;
      b_129 :
      if(!(match_int(h_129, 34)))
        _fail(t);
    }
    t = e_25;
    t = Tl_0(t);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL;
        i_129 = t;
        d_129 :
        if(match_cons(i_129, sym_Cons_2))
          {
            j_129 = ATgetArgument(i_129, 0);
            k_129 = ATgetArgument(i_129, 1);
            f_129 :
            if(match_int(j_129, 34))
              {
                g_129 :
                if(match_cons(k_129, sym_Nil_0))
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
      t = at_last_1(t, i_6);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,b_130 = NULL;
  y_129 = t;
  x_129 :
  if(match_cons(y_129, sym_Arg_1))
    {
      z_129 = ATgetArgument(y_129, 0);
      {
        ATerm g_130 = NULL;
        t = not_null(z_129);
        t = string_to_int_0(t);
        g_130 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(g_130));
      }
    }
  else
    {
      if(match_cons(y_129, sym_Arg2_2))
        {
          z_129 = ATgetArgument(y_129, 0);
          b_130 = ATgetArgument(y_129, 1);
          {
            ATerm l_130 = NULL;
            t = not_null(z_129);
            {
              ATerm n_130 = NULL;
              t = string_to_int_0(t);
              l_130 = t;
              t = not_null(b_130);
              t = string_to_int_0(t);
              n_130 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(l_130), not_null(n_130));
            }
          }
        }
      else
        {
          if(match_cons(y_129, sym_SOpt_2))
            {
              z_129 = ATgetArgument(y_129, 0);
              b_130 = ATgetArgument(y_129, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(z_129), not_null(b_130));
            }
          else
            {
              if(match_cons(y_129, sym_S_1))
                {
                  z_129 = ATgetArgument(y_129, 0);
                  {
                    ATerm w_130 = NULL;
                    t = not_null(z_129);
                    t = de_quote_0(t);
                    t = de_escape_0(t);
                    w_130 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(w_130));
                  }
                }
              else
                {
                  if(match_cons(y_129, sym_selector_2))
                    {
                      z_129 = ATgetArgument(y_129, 0);
                      b_130 = ATgetArgument(y_129, 1);
                      {
                        ATerm c_131 = NULL;
                        t = not_null(z_129);
                        t = string_to_int_0(t);
                        c_131 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(c_131), not_null(b_130));
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
  ATerm l_6 (ATerm t)
  {
    ATerm f_25 = t;
    if(PushChoice()==0)
      {
        t = MakePPTerm_0(t);
        PopChoice();
      }
    else
      t = f_25;
    return(t);
  }
  t = topdown_1(t, l_6);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm q_131 = NULL,r_131 = NULL;
  q_131 = t;
  p_131 :
  if(match_cons(q_131, sym_PP_Table_1))
    {
      r_131 = ATgetArgument(q_131, 0);
      t = not_null(r_131);
      t = reverse_0(t);
      {
        ATerm m_6 (ATerm t)
        {
          t = makePPEntry_0(t);
          t = StoreEntry_0(t);
          return(t);
        }
        t = map_1(t, m_6);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm h_25;
  h_25 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm r_6 (ATerm t)
    {
      ATerm w_131 = NULL;
      ATerm y_131 = NULL;
      w_131 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = c_66(t);
      y_131 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_131), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_131), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, n_6, r_6);
    t = printnl_0(t);
  }
  t = h_25;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm c_132 (ATerm t)
  {
    ATerm i_25 = t;
    if(PushChoice()==0)
      {
        t = j_78(t);
        PopChoice();
      }
    else
      {
        t = i_25;
        t = _one(t, c_132);
      }
    return(t);
  }
  t = c_132(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL;
  i_132 = t;
  f_132 :
  if(match_cons(i_132, sym_TCons_2))
    {
      j_132 = ATgetArgument(i_132, 0);
      k_132 = ATgetArgument(i_132, 1);
      g_132 :
      if(match_cons(k_132, sym_TCons_2))
        {
          l_132 = ATgetArgument(k_132, 0);
          m_132 = ATgetArgument(k_132, 1);
          h_132 :
          if(match_cons(m_132, sym_TNil_0))
            {
              t = not_null(l_132);
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm p_132 = NULL;
                  p_132 = t;
                  if(j_132 != NULL && j_132 != p_132)
                    _fail(p_132);
                  else
                    j_132 = p_132;
                  return(t);
                }
                t = oncetd_1(t, s_6);
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
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL;
  x_132 = t;
  u_132 :
  if(match_cons(x_132, sym_TCons_2))
    {
      y_132 = ATgetArgument(x_132, 0);
      z_132 = ATgetArgument(x_132, 1);
      v_132 :
      if(match_cons(z_132, sym_TCons_2))
        {
          a_133 = ATgetArgument(z_132, 0);
          b_133 = ATgetArgument(z_132, 1);
          w_132 :
          if(match_cons(b_133, sym_TNil_0))
            t = SSL_table_get(not_null(y_132), not_null(a_133));
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
  ATerm h_133 = NULL;
  ATerm j_133 = NULL;
  h_133 = t;
  {
    ATerm l_133 = NULL;
    t = get_options_0(t);
    l_133 = t;
    if(j_133 != NULL && j_133 != l_133)
      _fail(l_133);
    else
      j_133 = l_133;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_133), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_133), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm j_25;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = p_65(t);
  t = check_option_0(t);
  t = j_25;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm t_25 = t;
  if(PushChoice()==0)
    {
      ATerm u_25;
      u_25 = t;
      {
        ATerm w_25;
        w_25 = t;
        {
          ATerm t_6 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Verbose_0);
            return(t);
          }
          t = has_option_1(t, t_6);
        }
        t = w_25;
        t = debug_1(t, c_61);
      }
      t = u_25;
      PopChoice();
    }
  else
    t = t_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm q_133 (ATerm t)
  {
    ATerm x_25 = t;
    if(PushChoice()==0)
      {
        ATerm p_133 = NULL;
        p_133 = t;
        o_133 :
        if(!(match_cons(p_133, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_25;
        t = Cons_2(t, d_74, q_133);
      }
    return(t);
  }
  t = q_133(t);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm s_133 = NULL;
  s_133 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  t = table_create_0(t);
  t = not_null(s_133);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm v_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
        return(t);
      }
      t = notify_1(t, v_8);
      t = ReadFromFile_0(t);
      t = build_pp_table_0(t);
      return(t);
    }
    t = map_1(t, r_7);
  }
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL;
  b_134 = t;
  x_133 :
  if(match_cons(b_134, sym_TCons_2))
    {
      c_134 = ATgetArgument(b_134, 0);
      d_134 = ATgetArgument(b_134, 1);
      y_133 :
      if(match_cons(c_134, sym_Nil_0))
        {
          z_133 :
          if(match_cons(d_134, sym_TCons_2))
            {
              e_134 = ATgetArgument(d_134, 0);
              f_134 = ATgetArgument(d_134, 1);
              a_134 :
              if(match_cons(f_134, sym_TNil_0))
                t = not_null(e_134);
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
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL,s_134 = NULL,t_134 = NULL;
  n_134 = t;
  j_134 :
  if(match_cons(n_134, sym_TCons_2))
    {
      o_134 = ATgetArgument(n_134, 0);
      r_134 = ATgetArgument(n_134, 1);
      k_134 :
      if(match_cons(o_134, sym_Cons_2))
        {
          p_134 = ATgetArgument(o_134, 0);
          q_134 = ATgetArgument(o_134, 1);
          l_134 :
          if(match_cons(r_134, sym_TCons_2))
            {
              s_134 = ATgetArgument(r_134, 0);
              t_134 = ATgetArgument(r_134, 1);
              m_134 :
              if(match_cons(t_134, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_134), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_134), not_null(s_134)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_134 = NULL;
  z_134 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_134), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm h_135 = NULL,i_135 = NULL,j_135 = NULL;
  h_135 = t;
  g_135 :
  if(match_cons(h_135, sym_Cons_2))
    {
      i_135 = ATgetArgument(h_135, 0);
      j_135 = ATgetArgument(h_135, 1);
      t = o_70(t);
      {
        ATerm x_8 (ATerm t)
        {
          ATerm m_135 = NULL;
          m_135 = t;
          if(i_135 != NULL && i_135 != m_135)
            _fail(m_135);
          else
            i_135 = m_135;
          return(t);
        }
        t = fetch_1(t, x_8);
      }
      t = not_null(j_135);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  v_135 = t;
  s_135 :
  if(match_cons(v_135, sym_TCons_2))
    {
      w_135 = ATgetArgument(v_135, 0);
      x_135 = ATgetArgument(v_135, 1);
      t_135 :
      if(match_cons(x_135, sym_TCons_2))
        {
          y_135 = ATgetArgument(x_135, 0);
          z_135 = ATgetArgument(x_135, 1);
          u_135 :
          if(match_cons(z_135, sym_TNil_0))
            {
              t = not_null(w_135);
              {
                ATerm e_136 (ATerm t)
                {
                  ATerm y_25 = t;
                  if(PushChoice()==0)
                    {
                      ATerm c_136 = NULL;
                      c_136 = t;
                      r_135 :
                      if(match_cons(c_136, sym_Nil_0))
                        t = not_null(y_135);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = y_25;
                      {
                        ATerm z_25 = t;
                        if(PushChoice()==0)
                          {
                            ATerm y_8 (ATerm t)
                            {
                              t = not_null(y_135);
                              return(t);
                            }
                            t = HdMember_1(t, y_8);
                            t = e_136(t);
                            PopChoice();
                          }
                        else
                          {
                            t = z_25;
                            t = Cons_2(t, _id, e_136);
                          }
                      }
                    }
                  return(t);
                }
                t = e_136(t);
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
ATerm foldr_3 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm v_136 (ATerm t)
  {
    ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
    m_136 = t;
    l_136 :
    if(match_cons(m_136, sym_Nil_0))
      t = h_69(t);
    else
      {
        if(match_cons(m_136, sym_Cons_2))
          {
            n_136 = ATgetArgument(m_136, 0);
            o_136 = ATgetArgument(m_136, 1);
            {
              ATerm r_136 = NULL;
              t = not_null(n_136);
              {
                ATerm t_136 = NULL;
                t = j_69(t);
                r_136 = t;
                t = not_null(o_136);
                t = v_136(t);
                t_136 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_136), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_136), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = i_69(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = v_136(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm g_137 = NULL;
  ATerm k_137 = NULL;
  g_137 = t;
  {
    ATerm l_137 = NULL;
    ATerm n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL;
    t = not_null(g_137);
    l_137 = t;
    t = SSL_explode_term(not_null(l_137));
    n_137 = t;
    d_137 :
    if(match_cons(n_137, sym_TCons_2))
      {
        o_137 = ATgetArgument(n_137, 0);
        p_137 = ATgetArgument(n_137, 1);
        e_137 :
        if(match_cons(p_137, sym_TCons_2))
          {
            q_137 = ATgetArgument(p_137, 0);
            r_137 = ATgetArgument(p_137, 1);
            f_137 :
            if(match_cons(r_137, sym_TNil_0))
              {
                if(k_137 != NULL && k_137 != q_137)
                  _fail(q_137);
                else
                  k_137 = q_137;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(k_137);
    t = foldr_3(t, y_70, z_70, a_71);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm z_137 (ATerm t)
  {
    ATerm a_26 = t;
    if(PushChoice()==0)
      {
        ATerm x_137 = NULL;
        t = h_71(t);
        x_137 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_137), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = a_26;
        {
          ATerm z_8 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, z_8, union_0, z_137);
        }
      }
    return(t);
  }
  t = z_137(t);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL;
  l_138 = t;
  i_138 :
  if(match_cons(l_138, sym_TCons_2))
    {
      m_138 = ATgetArgument(l_138, 0);
      n_138 = ATgetArgument(l_138, 1);
      j_138 :
      if(match_cons(n_138, sym_TCons_2))
        {
          o_138 = ATgetArgument(n_138, 0);
          p_138 = ATgetArgument(n_138, 1);
          k_138 :
          if(match_cons(p_138, sym_TNil_0))
            {
              t = not_null(m_138);
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm s_138 = NULL,t_138 = NULL;
                  s_138 = t;
                  d_138 :
                  if(match_cons(s_138, sym_PP_Table_1))
                    {
                      t_138 = ATgetArgument(s_138, 0);
                      t = not_null(t_138);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = collect_1(t, a_9);
                t = reverse_0(t);
                t = read_pp_tables_0(t);
                t = not_null(o_138);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm c_9 (ATerm t)
                    {
                      ATerm v_138 = NULL,w_138 = NULL;
                      v_138 = t;
                      g_138 :
                      if(match_cons(v_138, sym_cf_1))
                        {
                          w_138 = ATgetArgument(v_138, 0);
                          t = not_null(w_138);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = sometd_1(t, c_9);
                    return(t);
                  }
                  t = repeat_1(t, b_9);
                  {
                    ATerm d_9 (ATerm t)
                    {
                      ATerm h_9 (ATerm t)
                      {
                        ATerm b_26 = t;
                        if(PushChoice()==0)
                          {
                            t = is_list_0(t);
                            {
                              ATerm i_9 (ATerm t)
                              {
                                ATerm c_26 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_9 (ATerm t)
                                    {
                                      ATerm y_138 = NULL;
                                      y_138 = t;
                                      h_138 :
                                      if(!(match_cons(y_138, sym_layout_0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = opt_1(t, j_9);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = c_26;
                                {
                                  ATerm d_26 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = layout_1(t, _id);
                                      PopChoice();
                                      _fail(t);
                                    }
                                  else
                                    t = d_26;
                                }
                                return(t);
                              }
                              t = filter_1(t, i_9);
                            }
                            PopChoice();
                          }
                        else
                          t = b_26;
                        return(t);
                      }
                      t = topdown_1(t, h_9);
                      t = appl2abox_0(t);
                      return(t);
                    }
                    ATerm g_9 (ATerm t)
                    {
                      ATerm k_9 (ATerm t)
                      {
                        t = layout_1(t, _id);
                        return(t);
                      }
                      t = collect_p__1(t, k_9);
                      return(t);
                    }
                    t = split_2(t, d_9, g_9);
                    t = insert_layout_0(t);
                    {
                      ATerm l_9 (ATerm t)
                      {
                        t = not_null(m_138);
                        return(t);
                      }
                      t = split_2(t, l_9, _id);
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
  ATerm d_139 = NULL;
  d_139 = t;
  t = SSL_exit(not_null(d_139));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL,p_139 = NULL;
  l_139 = t;
  i_139 :
  if(match_cons(l_139, sym_TCons_2))
    {
      m_139 = ATgetArgument(l_139, 0);
      n_139 = ATgetArgument(l_139, 1);
      j_139 :
      if(match_cons(n_139, sym_TCons_2))
        {
          o_139 = ATgetArgument(n_139, 0);
          p_139 = ATgetArgument(n_139, 1);
          k_139 :
          if(match_cons(p_139, sym_TNil_0))
            {
              ATerm e_26;
              e_26 = t;
              t = SSL_printnl(not_null(m_139), not_null(o_139));
              t = e_26;
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
ATerm try_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm f_26 = t;
  if(PushChoice()==0)
    {
      t = r_80(t);
      PopChoice();
    }
  else
    t = f_26;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL;
  ATerm g_26 = t;
  if(PushChoice()==0)
    {
      ATerm m_9 (ATerm t)
      {
        ATerm h_26 = t;
        if(PushChoice()==0)
          {
            ATerm o_9 (ATerm t)
            {
              ATerm d_140 = NULL;
              d_140 = t;
              t_139 :
              if(!(match_cons(d_140, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, o_9);
            PopChoice();
            _fail(t);
          }
        else
          t = h_26;
        return(t);
      }
      ATerm n_9 (ATerm t)
      {
        ATerm p_9 (ATerm t)
        {
          ATerm e_140 = NULL;
          e_140 = t;
          u_139 :
          if(!(match_cons(e_140, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, p_9);
        return(t);
      }
      t = TCons_2(t, m_9, n_9);
      {
        ATerm q_9 (ATerm t)
        {
          ATerm y_9 (ATerm t)
          {
            ATerm f_140 = NULL,g_140 = NULL;
            f_140 = t;
            w_139 :
            if(match_cons(f_140, sym_Runtime_1))
              {
                g_140 = ATgetArgument(f_140, 0);
                if(c_140 != NULL && c_140 != g_140)
                  _fail(g_140);
                else
                  c_140 = g_140;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, y_9);
          return(t);
        }
        ATerm u_9 (ATerm t)
        {
          ATerm c_10 (ATerm t)
          {
            ATerm h_140 = NULL;
            h_140 = t;
            x_139 :
            if(!(match_cons(h_140, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, c_10);
          return(t);
        }
        t = TCons_2(t, q_9, u_9);
        {
          ATerm g_10 (ATerm t)
          {
            ATerm l_10 (ATerm t)
            {
              ATerm i_140 = NULL,j_140 = NULL;
              i_140 = t;
              z_139 :
              if(match_cons(i_140, sym_Program_1))
                {
                  j_140 = ATgetArgument(i_140, 0);
                  if(b_140 != NULL && b_140 != j_140)
                    _fail(j_140);
                  else
                    b_140 = j_140;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, l_10);
            return(t);
          }
          ATerm k_10 (ATerm t)
          {
            ATerm s_10 (ATerm t)
            {
              ATerm k_140 = NULL;
              k_140 = t;
              a_140 :
              if(!(match_cons(k_140, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, s_10);
            return(t);
          }
          t = TCons_2(t, g_10, k_10);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_140), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_140), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = g_26;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm o_140 = NULL;
  o_140 = t;
  n_140 :
  if(!(match_cons(o_140, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL,w_140 = NULL,x_140 = NULL;
  t_140 = t;
  q_140 :
  if(match_cons(t_140, sym_TCons_2))
    {
      u_140 = ATgetArgument(t_140, 0);
      v_140 = ATgetArgument(t_140, 1);
      r_140 :
      if(match_cons(v_140, sym_TCons_2))
        {
          w_140 = ATgetArgument(v_140, 0);
          x_140 = ATgetArgument(v_140, 1);
          s_140 :
          if(match_cons(x_140, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(u_140), not_null(w_140));
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
ATerm TCons_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL;
  f_141 = t;
  e_141 :
  if(match_cons(f_141, sym_TCons_2))
    {
      g_141 = ATgetArgument(f_141, 0);
      h_141 = ATgetArgument(f_141, 1);
      {
        ATerm k_141 = NULL;
        t = not_null(g_141);
        {
          ATerm m_141 = NULL;
          t = z_59(t);
          k_141 = t;
          t = not_null(h_141);
          t = a_60(t);
          m_141 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_141), not_null(m_141));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_141 = NULL,w_141 = NULL,x_141 = NULL,y_141 = NULL,z_141 = NULL;
  v_141 = t;
  s_141 :
  if(match_cons(v_141, sym_TCons_2))
    {
      w_141 = ATgetArgument(v_141, 0);
      x_141 = ATgetArgument(v_141, 1);
      t_141 :
      if(match_cons(x_141, sym_TCons_2))
        {
          y_141 = ATgetArgument(x_141, 0);
          z_141 = ATgetArgument(x_141, 1);
          u_141 :
          if(match_cons(z_141, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_141), not_null(y_141));
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
  ATerm l_142 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    ATerm w_10 (ATerm t)
    {
      ATerm j_26 = t;
      if(PushChoice()==0)
        {
          ATerm e_11 (ATerm t)
          {
            ATerm m_142 = NULL,n_142 = NULL;
            m_142 = t;
            e_142 :
            if(match_cons(m_142, sym_Output_1))
              {
                n_142 = ATgetArgument(m_142, 0);
                if(l_142 != NULL && l_142 != n_142)
                  _fail(n_142);
                else
                  l_142 = n_142;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, e_11);
          PopChoice();
        }
      else
        {
          t = j_26;
          {
            ATerm o_142 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            o_142 = t;
            if(l_142 != NULL && l_142 != o_142)
              _fail(o_142);
            else
              l_142 = o_142;
          }
        }
      return(t);
    }
    ATerm a_11 (ATerm t)
    {
      ATerm i_11 (ATerm t)
      {
        ATerm p_142 = NULL;
        p_142 = t;
        g_142 :
        if(!(match_cons(p_142, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, i_11);
      return(t);
    }
    t = TCons_2(t, w_10, a_11);
  }
  t = i_26;
  {
    ATerm j_11 (ATerm t)
    {
      ATerm k_11 (ATerm t)
      {
        ATerm m_11 (ATerm t)
        {
          t = not_null(l_142);
          return(t);
        }
        t = split_2(t, m_11, _id);
        return(t);
      }
      ATerm l_11 (ATerm t)
      {
        ATerm q_142 = NULL;
        q_142 = t;
        h_142 :
        if(!(match_cons(q_142, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, k_11, l_11);
      return(t);
    }
    t = TCons_2(t, _id, j_11);
    {
      ATerm k_26 = t;
      if(PushChoice()==0)
        {
          ATerm n_11 (ATerm t)
          {
            ATerm p_11 (ATerm t)
            {
              ATerm r_142 = NULL;
              r_142 = t;
              i_142 :
              if(!(match_cons(r_142, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, p_11);
            return(t);
          }
          ATerm o_11 (ATerm t)
          {
            ATerm q_11 (ATerm t)
            {
              ATerm s_142 = NULL;
              s_142 = t;
              j_142 :
              if(!(match_cons(s_142, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, q_11);
            return(t);
          }
          t = TCons_2(t, n_11, o_11);
          PopChoice();
        }
      else
        {
          t = k_26;
          {
            ATerm r_11 (ATerm t)
            {
              ATerm s_11 (ATerm t)
              {
                ATerm t_142 = NULL;
                t_142 = t;
                k_142 :
                if(!(match_cons(t_142, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, s_11);
              return(t);
            }
            t = TCons_2(t, _id, r_11);
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
ATerm apply_strategy_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm b_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL;
  ATerm l_26;
  l_26 = t;
  t = dtime_0(t);
  t = l_26;
  t = t_65(t);
  {
    ATerm m_26;
    m_26 = t;
    {
      ATerm c_143 = NULL;
      t = dtime_0(t);
      c_143 = t;
      if(b_143 != NULL && b_143 != c_143)
        _fail(c_143);
      else
        b_143 = c_143;
    }
    t = m_26;
    d_143 = t;
    y_142 :
    if(match_cons(d_143, sym_TCons_2))
      {
        e_143 = ATgetArgument(d_143, 0);
        f_143 = ATgetArgument(d_143, 1);
        z_142 :
        if(match_cons(f_143, sym_TCons_2))
          {
            g_143 = ATgetArgument(f_143, 0);
            h_143 = ATgetArgument(f_143, 1);
            a_143 :
            if(match_cons(h_143, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(b_143)), not_null(e_143)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_143), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_143 = NULL;
  n_143 = t;
  t = SSL_ReadFromFile(not_null(n_143));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm t_143 = NULL;
  ATerm v_143 = NULL;
  t_143 = t;
  {
    ATerm x_143 = NULL;
    t = t_67(t);
    v_143 = t;
    t = not_null(t_143);
    t = u_67(t);
    x_143 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_143), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_143), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_144 = NULL;
  ATerm n_26;
  n_26 = t;
  {
    ATerm o_26 = t;
    if(PushChoice()==0)
      {
        ATerm t_11 (ATerm t)
        {
          ATerm g_144 = NULL,h_144 = NULL;
          g_144 = t;
          d_144 :
          if(match_cons(g_144, sym_Input_1))
            {
              h_144 = ATgetArgument(g_144, 0);
              if(f_144 != NULL && f_144 != h_144)
                _fail(h_144);
              else
                f_144 = h_144;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, t_11);
        PopChoice();
      }
    else
      {
        t = o_26;
        {
          ATerm i_144 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          i_144 = t;
          if(f_144 != NULL && f_144 != i_144)
            _fail(i_144);
          else
            f_144 = i_144;
        }
      }
  }
  t = n_26;
  {
    ATerm u_11 (ATerm t)
    {
      t = not_null(f_144);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_11);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_144 = NULL;
  m_144 = t;
  l_144 :
  if(!(match_cons(m_144, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm q_144 = NULL,r_144 = NULL;
  q_144 = t;
  p_144 :
  if(match_cons(q_144, sym_Undefined_1))
    {
      r_144 = ATgetArgument(q_144, 0);
      {
        ATerm t_144 = NULL;
        t = not_null(r_144);
        t = r_59(t);
        t_144 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_144));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_144 = NULL;
  y_144 = t;
  x_144 :
  if(!(match_cons(y_144, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm z_144 (ATerm t)
  {
    ATerm p_26 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, m_74, _id);
        PopChoice();
      }
    else
      {
        t = p_26;
        t = Cons_2(t, _id, z_144);
      }
    return(t);
  }
  t = z_144(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_64 (ATerm))
{
  t = fetch_1(t, x_64);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm v_11 (ATerm t)
  {
    ATerm q_26 = t;
    if(PushChoice()==0)
      {
        ATerm c_145 = NULL;
        c_145 = t;
        a_145 :
        if(!(match_cons(c_145, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = q_26;
        {
          ATerm r_26 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = r_26;
              {
                ATerm d_145 = NULL;
                d_145 = t;
                b_145 :
                if(!(match_cons(d_145, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_11);
  t = s_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    ATerm m_145 = NULL,n_145 = NULL,o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL;
    m_145 = t;
    f_145 :
    if(match_cons(m_145, sym_TCons_2))
      {
        n_145 = ATgetArgument(m_145, 0);
        o_145 = ATgetArgument(m_145, 1);
        g_145 :
        if(match_cons(o_145, sym_TCons_2))
          {
            p_145 = ATgetArgument(o_145, 0);
            q_145 = ATgetArgument(o_145, 1);
            h_145 :
            if(match_cons(q_145, sym_TCons_2))
              {
                r_145 = ATgetArgument(q_145, 0);
                s_145 = ATgetArgument(q_145, 1);
                i_145 :
                if(match_cons(s_145, sym_TNil_0))
                  {
                    if(j_145 != NULL && j_145 != n_145)
                      _fail(n_145);
                    else
                      j_145 = n_145;
                    if(k_145 != NULL && k_145 != p_145)
                      _fail(p_145);
                    else
                      k_145 = p_145;
                    if(l_145 != NULL && l_145 != r_145)
                      _fail(r_145);
                    else
                      l_145 = r_145;
                    t = SSL_table_put(not_null(j_145), not_null(k_145), not_null(l_145));
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
  t = s_26;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_145 = NULL;
  v_145 = t;
  t = SSL_table_create(not_null(v_145));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_145 = NULL;
  z_145 = t;
  {
    ATerm t_26;
    t_26 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_145), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = t_26;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_26 = t;
  if(PushChoice()==0)
    {
      ATerm w_11 (ATerm t)
      {
        ATerm w_146 = NULL;
        w_146 = t;
        c_146 :
        if(!(match_string(w_146, "-S")))
          _fail(t);
        return(t);
      }
      ATerm x_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, w_11, x_11);
      PopChoice();
    }
  else
    {
      t = u_26;
      {
        ATerm v_26 = t;
        if(PushChoice()==0)
          {
            ATerm y_11 (ATerm t)
            {
              ATerm x_146 = NULL;
              x_146 = t;
              d_146 :
              if(!(match_string(x_146, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm z_11 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, y_11, z_11);
            PopChoice();
          }
        else
          {
            t = v_26;
            {
              ATerm w_26 = t;
              if(PushChoice()==0)
                {
                  ATerm a_12 (ATerm t)
                  {
                    ATerm y_146 = NULL;
                    y_146 = t;
                    e_146 :
                    if(!(match_string(y_146, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm b_12 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, a_12, b_12);
                  PopChoice();
                }
              else
                {
                  t = w_26;
                  {
                    ATerm x_26 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_12 (ATerm t)
                        {
                          ATerm z_146 = NULL;
                          z_146 = t;
                          f_146 :
                          if(!(match_string(z_146, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_12 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, c_12, d_12);
                        PopChoice();
                      }
                    else
                      {
                        t = x_26;
                        {
                          ATerm y_26 = t;
                          if(PushChoice()==0)
                            {
                              ATerm e_12 (ATerm t)
                              {
                                ATerm a_147 = NULL;
                                a_147 = t;
                                g_146 :
                                if(!(match_string(a_147, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm f_12 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, e_12, f_12);
                              PopChoice();
                            }
                          else
                            {
                              t = y_26;
                              {
                                ATerm z_26 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_12 (ATerm t)
                                    {
                                      ATerm b_147 = NULL;
                                      b_147 = t;
                                      h_146 :
                                      if(!(match_string(b_147, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_12 (ATerm t)
                                    {
                                      ATerm c_147 = NULL;
                                      c_147 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(c_147));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, g_12, h_12);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_26;
                                    {
                                      ATerm e_27 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm f_13 (ATerm t)
                                          {
                                            ATerm e_147 = NULL;
                                            e_147 = t;
                                            j_146 :
                                            if(!(match_string(e_147, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_13 (ATerm t)
                                          {
                                            ATerm f_147 = NULL;
                                            f_147 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_147));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, f_13, g_13);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_27;
                                          {
                                            ATerm h_27 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm h_13 (ATerm t)
                                                {
                                                  ATerm h_147 = NULL;
                                                  h_147 = t;
                                                  l_146 :
                                                  if(!(match_string(h_147, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm i_13 (ATerm t)
                                                {
                                                  ATerm i_147 = NULL;
                                                  i_147 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_147));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, h_13, i_13);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_27;
                                                {
                                                  ATerm i_27 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm l_13 (ATerm t)
                                                      {
                                                        ATerm k_147 = NULL;
                                                        k_147 = t;
                                                        n_146 :
                                                        if(!(match_string(k_147, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_13 (ATerm t)
                                                      {
                                                        ATerm l_147 = NULL;
                                                        l_147 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_147));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, l_13, o_13);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = i_27;
                                                      {
                                                        ATerm j_27 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_13 (ATerm t)
                                                            {
                                                              ATerm n_147 = NULL;
                                                              n_147 = t;
                                                              p_146 :
                                                              if(!(match_string(n_147, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_13 (ATerm t)
                                                            {
                                                              ATerm o_147 = NULL;
                                                              o_147 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_147));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_13, q_13);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = j_27;
                                                            {
                                                              ATerm l_27 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_13 (ATerm t)
                                                                  {
                                                                    ATerm q_147 = NULL;
                                                                    q_147 = t;
                                                                    r_146 :
                                                                    if(!(match_string(q_147, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_13 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_13, s_13);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = l_27;
                                                                  {
                                                                    ATerm m_27 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_13 (ATerm t)
                                                                        {
                                                                          ATerm r_147 = NULL;
                                                                          r_147 = t;
                                                                          s_146 :
                                                                          if(!(match_string(r_147, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm u_13 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_13, u_13);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_27;
                                                                        {
                                                                          ATerm p_27 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm v_13 (ATerm t)
                                                                              {
                                                                                ATerm s_147 = NULL;
                                                                                s_147 = t;
                                                                                t_146 :
                                                                                if(!(match_string(s_147, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm w_13 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, v_13, w_13);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_27;
                                                                              {
                                                                                ATerm q_27 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm a_14 (ATerm t)
                                                                                    {
                                                                                      ATerm t_147 = NULL;
                                                                                      t_147 = t;
                                                                                      u_146 :
                                                                                      if(!(match_string(t_147, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_14 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, a_14, b_14);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_27;
                                                                                    {
                                                                                      ATerm c_14 (ATerm t)
                                                                                      {
                                                                                        ATerm u_147 = NULL;
                                                                                        u_147 = t;
                                                                                        v_146 :
                                                                                        if(!(match_string(u_147, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm d_14 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, c_14, d_14);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL;
  c_148 = t;
  b_148 :
  if(match_cons(c_148, sym_Cons_2))
    {
      d_148 = ATgetArgument(c_148, 0);
      e_148 = ATgetArgument(c_148, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_148)), not_null(e_148));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm m_148 = NULL,n_148 = NULL,o_148 = NULL;
  m_148 = t;
  l_148 :
  if(match_cons(m_148, sym_Cons_2))
    {
      n_148 = ATgetArgument(m_148, 0);
      o_148 = ATgetArgument(m_148, 1);
      {
        ATerm r_148 = NULL;
        t = not_null(n_148);
        {
          ATerm t_148 = NULL;
          t = d_60(t);
          r_148 = t;
          t = not_null(o_148);
          t = e_60(t);
          t_148 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_148), not_null(t_148));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_148 = NULL;
  z_148 = t;
  y_148 :
  if(!(match_cons(z_148, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm e_14 (ATerm t)
  {
    ATerm c_149 = NULL;
    c_149 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_149));
    return(t);
  }
  ATerm f_14 (ATerm t)
  {
    ATerm r_27 = t;
    if(PushChoice()==0)
      {
        ATerm s_27 = t;
        if(PushChoice()==0)
          {
            ATerm e_149 = NULL;
            e_149 = t;
            b_149 :
            if(!(match_cons(e_149, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = s_27;
            t = o_64(t);
            t = Cons_2(t, _id, f_14);
          }
        PopChoice();
      }
    else
      {
        t = r_27;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, e_14, f_14);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm g_14 (ATerm t)
  {
    ATerm t_27 = t;
    if(PushChoice()==0)
      {
        t = i_65(t);
        PopChoice();
      }
    else
      {
        t = t_27;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_14);
  t = store_options_0(t);
  {
    ATerm v_27 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, j_65);
        PopChoice();
      }
    else
      {
        t = v_27;
        {
          ATerm w_27 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, h_65);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = w_27;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Asfix2abox_0 (ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm z_27 = t;
    if(PushChoice()==0)
      {
        ATerm j_14 (ATerm t)
        {
          ATerm k_149 = NULL;
          k_149 = t;
          h_149 :
          if(!(match_string(k_149, "-v")))
            _fail(t);
          return(t);
        }
        ATerm t_14 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, j_14, t_14);
        PopChoice();
      }
    else
      {
        t = z_27;
        {
          ATerm u_14 (ATerm t)
          {
            ATerm l_149 = NULL;
            l_149 = t;
            i_149 :
            if(!(match_string(l_149, "-p")))
              _fail(t);
            return(t);
          }
          ATerm v_14 (ATerm t)
          {
            ATerm m_149 = NULL;
            m_149 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(m_149));
            return(t);
          }
          t = ArgOption_2(t, u_14, v_14);
        }
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    ATerm w_14 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
      return(t);
    }
    t = obsolete_1(t, w_14);
    return(t);
  }
  t = iowrap_3(t, asfix2abox_0, h_14, i_14);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Asfix2abox_0(t);
  return(t);
}

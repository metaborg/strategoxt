#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_qlit_1;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_TagId_empty_0;
Symbol sym_Symbol_s_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
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
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
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
ATerm obsolete_1 (ATerm, ATerm x_42 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm Option_2 (ATerm, ATerm d_41 (ATerm), ATerm e_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_53 (ATerm));
ATerm concat_0 (ATerm);
ATerm filter_1 (ATerm, ATerm b_45 (ATerm));
ATerm debug_1 (ATerm, ATerm q_42 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm c_42 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm z_36 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm v_57 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm u_34 (ATerm));
ATerm iter_1 (ATerm, ATerm t_34 (ATerm));
ATerm pair_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_56 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm r_34 (ATerm), ATerm s_34 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm p_34 (ATerm), ATerm q_34 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm o_34 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm y_57 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm u_57 (ATerm));
ATerm oncetd_1 (ATerm, ATerm b_55 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm map_1 (ATerm, ATerm v_50 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm u_51 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_51 (ATerm));
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm));
ATerm crush_3 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm), ATerm q_47 (ATerm));
ATerm collect_p__1 (ATerm, ATerm r_37 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm k_37 (ATerm), ATerm l_37 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_42 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_44 (ATerm), ATerm k_44 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_34 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm e_51 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_41 (ATerm));
ATerm need_help_1 (ATerm, ATerm f_42 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm f_41 (ATerm), ATerm g_41 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_37 (ATerm), ATerm p_37 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_41 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm), ATerm w_41 (ATerm));
ATerm Ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm x_42 (ATerm))
{
  ATerm e_2;
  e_2 = t;
  t = x_42(t);
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, a_0);
  }
  t = e_2;
  return(t);
}
ATerm usage_p__0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
    return(t);
  }
  t = obsolete_1(t, b_0);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm d_41 (ATerm), ATerm e_41 (ATerm))
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL;
  d_1 = t;
  c_1 :
  if(match_cons(d_1, sym_Cons_2))
    {
      e_1 = ATgetArgument(d_1, 0);
      f_1 = ATgetArgument(d_1, 1);
      {
        ATerm i_1 = NULL;
        t = not_null(e_1);
        t = d_41(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = e_41(t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_1), not_null(f_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  m_1 :
  if(!(match_cons(n_1, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_1), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
  t = concat_0(t);
  return(t);
}
ATerm quote_0 (ATerm t)
{
  t = explode_string_0(t);
  t = Quote_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t_1 = t;
  t = SSL_int_to_string(not_null(t_1));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = l_53(t);
    t = _all(t, w_1);
    return(t);
  }
  t = w_1(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_5 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = q_5;
      {
        ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
        z_1 = t;
        y_1 :
        if(match_cons(z_1, sym_Cons_2))
          {
            a_2 = ATgetArgument(z_1, 0);
            b_2 = ATgetArgument(z_1, 1);
            t = not_null(a_2);
            {
              ATerm c_0 (ATerm t)
              {
                t = not_null(b_2);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, c_0);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm b_45 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        {
          ATerm l_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, b_45, g_2);
              PopChoice();
            }
          else
            {
              t = l_8;
              t = Tl_0(t);
              t = g_2(t);
            }
        }
      }
    return(t);
  }
  t = g_2(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm m_8;
  m_8 = t;
  {
    ATerm d_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm e_0 (ATerm t)
    {
      ATerm j_2 = NULL;
      ATerm l_2 = NULL;
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = q_42(t);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_2), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_2), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, d_0, e_0);
    t = printnl_0(t);
  }
  t = m_8;
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  u_2 = t;
  r_2 :
  if(match_cons(u_2, sym_TCons_2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      s_2 :
      if(match_cons(w_2, sym_TCons_2))
        {
          x_2 = ATgetArgument(w_2, 0);
          y_2 = ATgetArgument(w_2, 1);
          t_2 :
          if(match_cons(y_2, sym_TNil_0))
            {
              t = not_null(x_2);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm b_3 = NULL;
                  b_3 = t;
                  if(v_2 != NULL && v_2 != b_3)
                    _fail(b_3);
                  else
                    v_2 = b_3;
                  return(t);
                }
                t = oncetd_1(t, f_0);
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
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  i_3 = t;
  f_3 :
  if(match_cons(i_3, sym_TCons_2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      g_3 :
      if(match_cons(k_3, sym_TCons_2))
        {
          l_3 = ATgetArgument(k_3, 0);
          m_3 = ATgetArgument(k_3, 1);
          h_3 :
          if(match_cons(m_3, sym_TNil_0))
            t = SSL_table_get(not_null(j_3), not_null(l_3));
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
  ATerm s_3 = NULL;
  ATerm u_3 = NULL;
  s_3 = t;
  {
    ATerm v_3 = NULL;
    t = get_options_0(t);
    v_3 = t;
    if(u_3 != NULL && u_3 != v_3)
      _fail(v_3);
    else
      u_3 = v_3;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_3), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm c_42 (ATerm))
{
  ATerm n_8;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = c_42(t);
  t = check_option_0(t);
  t = n_8;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = o_8;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm z_3 = NULL;
      z_3 = t;
      {
        ATerm p_8 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = p_8;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_3), (ATerm) ATmakeAppl(sym_Nil_0));
      }
      return(t);
    }
    t = try_1(t, h_0);
    return(t);
  }
  t = map_1(t, g_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm z_36 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym_Arg_1))
    {
      g_4 = ATgetArgument(f_4, 0);
      {
        ATerm i_4 = NULL;
        t = not_null(g_4);
        t = z_36(t);
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(i_4));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  q_4 = t;
  n_4 :
  if(match_cons(q_4, sym_TCons_2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      o_4 :
      if(match_cons(s_4, sym_TCons_2))
        {
          t_4 = ATgetArgument(s_4, 0);
          u_4 = ATgetArgument(s_4, 1);
          p_4 :
          if(match_cons(u_4, sym_TNil_0))
            t = SSL_mkterm(not_null(r_4), not_null(t_4));
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
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
  ATerm s_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_5), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  f_5 = t;
  b_5 :
  if(match_cons(f_5, sym_alt_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      c_5 :
      if(match_cons(h_5, sym_alt_2))
        {
          d_5 = ATgetArgument(h_5, 0);
          e_5 = ATgetArgument(h_5, 1);
          {
            ATerm r_8 = t;
            if(PushChoice()==0)
              {
                ATerm l_5 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(d_5), not_null(e_5));
                t = flat_alt_0(t);
                l_5 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_5), not_null(l_5));
                PopChoice();
              }
            else
              {
                t = r_8;
                t = s_5(t);
              }
          }
        }
      else
        t = s_5(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  ATerm i_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = v_57(t);
    return(t);
  }
  t = split_2(t, i_0, _id);
  {
    ATerm p_9 (ATerm t)
    {
      ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
      ATerm r_9 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm s_9 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm t_9 (ATerm t)
      {
        ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
        if(k_7 != NULL && k_7 != t_7)
          _fail(t_7);
        else
          k_7 = t_7;
        if(l_7 != NULL && l_7 != v_7)
          _fail(v_7);
        else
          l_7 = v_7;
        if(m_7 != NULL && m_7 != z_7)
          _fail(z_7);
        else
          m_7 = z_7;
        if(e_8 != NULL && e_8 != n_7)
          _fail(n_7);
        else
          e_8 = n_7;
        if(f_8 != NULL && f_8 != p_7)
          _fail(p_7);
        else
          f_8 = p_7;
        if(g_8 != NULL && g_8 != q_7)
          _fail(q_7);
        else
          g_8 = q_7;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(e_8), (ATerm) ATmakeAppl(sym_alt_2, not_null(f_8), not_null(g_8)));
        {
          ATerm j_8 = NULL;
          t = flat_alt_0(t);
          h_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_8), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          j_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_7), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_8), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = p_9(t);
          {
            ATerm j_0 (ATerm t)
            {
              ATerm k_0 (ATerm t)
              {
                ATerm l_0 (ATerm t)
                {
                  t = Arg_1(t, _id);
                  t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                  return(t);
                }
                t = try_1(t, l_0);
                return(t);
              }
              t = topdown_1(t, k_0);
              return(t);
            }
            t = Cons_2(t, j_0, _id);
          }
        }
        return(t);
      }
      ATerm u_9 (ATerm t)
      {
        ATerm q_8 = NULL,w_8 = NULL,e_9 = NULL;
        ATerm x_8 = NULL;
        ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
        t = not_null(b_8);
        x_8 = t;
        t = SSL_explode_term(not_null(x_8));
        z_8 = t;
        e_6 :
        if(match_cons(z_8, sym_TCons_2))
          {
            a_9 = ATgetArgument(z_8, 0);
            b_9 = ATgetArgument(z_8, 1);
            f_6 :
            if(match_cons(b_9, sym_TCons_2))
              {
                c_9 = ATgetArgument(b_9, 0);
                d_9 = ATgetArgument(b_9, 1);
                g_6 :
                if(match_cons(d_9, sym_TNil_0))
                  {
                    if(q_8 != NULL && q_8 != a_9)
                      _fail(a_9);
                    else
                      q_8 = a_9;
                    if(w_8 != NULL && w_8 != c_9)
                      _fail(c_9);
                    else
                      w_8 = c_9;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(z_7), not_null(q_8)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm g_9 = NULL,n_9 = NULL;
          t = conc_0(t);
          e_9 = t;
          t = not_null(w_8);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm s_8;
            s_8 = t;
            {
              ATerm h_9 = NULL;
              t = make_0(t);
              h_9 = t;
              if(g_9 != NULL && g_9 != h_9)
                _fail(h_9);
              else
                g_9 = h_9;
            }
            t = s_8;
            {
              ATerm m_0 (ATerm t)
              {
                ATerm i_9 = NULL;
                ATerm k_9 = NULL;
                i_9 = t;
                {
                  ATerm l_9 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_9), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = p_9(t);
                  l_9 = t;
                  if(k_9 != NULL && k_9 != l_9)
                    _fail(l_9);
                  else
                    k_9 = l_9;
                  t = not_null(k_9);
                }
                return(t);
              }
              t = map_1(t, m_0);
              t = concat_0(t);
              n_9 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(t_7), not_null(e_9)), not_null(g_9)), not_null(n_9));
            }
          }
        }
        return(t);
      }
      r_7 = t;
      m_6 :
      if(match_cons(r_7, sym_TCons_2))
        {
          s_7 = ATgetArgument(r_7, 0);
          x_7 = ATgetArgument(r_7, 1);
          n_6 :
          if(match_cons(x_7, sym_TCons_2))
            {
              y_7 = ATgetArgument(x_7, 0);
              d_8 = ATgetArgument(x_7, 1);
              o_6 :
              if(match_cons(y_7, sym_lit_1))
                {
                  z_7 = ATgetArgument(y_7, 0);
                  p_6 :
                  if(match_cons(d_8, sym_TNil_0))
                    {
                      q_6 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_7, sym_TCons_2))
                    {
                      z_7 = ATgetArgument(y_7, 0);
                      a_8 = ATgetArgument(y_7, 1);
                      r_6 :
                      if(match_cons(a_8, sym_TCons_2))
                        {
                          b_8 = ATgetArgument(a_8, 0);
                          c_8 = ATgetArgument(a_8, 1);
                          s_6 :
                          if(match_cons(c_8, sym_TNil_0))
                            {
                              t_6 :
                              if(match_cons(d_8, sym_TNil_0))
                                {
                                  u_6 :
                                  if(match_cons(b_8, sym_sort_1))
                                    {
                                      n_7 = ATgetArgument(b_8, 0);
                                      v_6 :
                                      if(match_cons(s_7, sym_TCons_2))
                                        {
                                          t_7 = ATgetArgument(s_7, 0);
                                          u_7 = ATgetArgument(s_7, 1);
                                          w_6 :
                                          if(match_cons(u_7, sym_TCons_2))
                                            {
                                              v_7 = ATgetArgument(u_7, 0);
                                              w_7 = ATgetArgument(u_7, 1);
                                              x_6 :
                                              if(match_cons(w_7, sym_TNil_0))
                                                {
                                                  ATerm t_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = r_9(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_8;
                                                      t = u_9(t);
                                                    }
                                                }
                                              else
                                                t = r_9(t);
                                            }
                                          else
                                            t = r_9(t);
                                        }
                                      else
                                        t = r_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_8, sym_char_class_1))
                                        {
                                          n_7 = ATgetArgument(b_8, 0);
                                          y_6 :
                                          if(match_cons(s_7, sym_TCons_2))
                                            {
                                              t_7 = ATgetArgument(s_7, 0);
                                              u_7 = ATgetArgument(s_7, 1);
                                              z_6 :
                                              if(match_cons(u_7, sym_TCons_2))
                                                {
                                                  v_7 = ATgetArgument(u_7, 0);
                                                  w_7 = ATgetArgument(u_7, 1);
                                                  a_7 :
                                                  if(match_cons(w_7, sym_TNil_0))
                                                    {
                                                      ATerm u_8 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = s_9(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = u_8;
                                                          t = u_9(t);
                                                        }
                                                    }
                                                  else
                                                    t = s_9(t);
                                                }
                                              else
                                                t = s_9(t);
                                            }
                                          else
                                            t = s_9(t);
                                        }
                                      else
                                        {
                                          if(match_cons(b_8, sym_alt_2))
                                            {
                                              n_7 = ATgetArgument(b_8, 0);
                                              o_7 = ATgetArgument(b_8, 1);
                                              b_7 :
                                              if(match_cons(s_7, sym_TCons_2))
                                                {
                                                  t_7 = ATgetArgument(s_7, 0);
                                                  u_7 = ATgetArgument(s_7, 1);
                                                  c_7 :
                                                  if(match_cons(u_7, sym_TCons_2))
                                                    {
                                                      v_7 = ATgetArgument(u_7, 0);
                                                      w_7 = ATgetArgument(u_7, 1);
                                                      f_7 :
                                                      if(match_cons(w_7, sym_TNil_0))
                                                        {
                                                          g_7 :
                                                          if(match_cons(o_7, sym_alt_2))
                                                            {
                                                              p_7 = ATgetArgument(o_7, 0);
                                                              q_7 = ATgetArgument(o_7, 1);
                                                              {
                                                                ATerm v_8 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = t_9(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_8;
                                                                    t = u_9(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = u_9(t);
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
                                              h_7 :
                                              if(match_cons(s_7, sym_TCons_2))
                                                {
                                                  t_7 = ATgetArgument(s_7, 0);
                                                  u_7 = ATgetArgument(s_7, 1);
                                                  i_7 :
                                                  if(match_cons(u_7, sym_TCons_2))
                                                    {
                                                      v_7 = ATgetArgument(u_7, 0);
                                                      w_7 = ATgetArgument(u_7, 1);
                                                      j_7 :
                                                      if(match_cons(w_7, sym_TNil_0))
                                                        t = u_9(t);
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
    t = p_9(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  n_10 = t;
  h_10 :
  if(match_cons(n_10, sym_TCons_2))
    {
      o_10 = ATgetArgument(n_10, 0);
      k_10 = ATgetArgument(n_10, 1);
      i_10 :
      if(match_cons(k_10, sym_TCons_2))
        {
          l_10 = ATgetArgument(k_10, 0);
          m_10 = ATgetArgument(k_10, 1);
          j_10 :
          if(match_cons(m_10, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(o_10));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(n_10, sym_lit_1))
        {
          o_10 = ATgetArgument(n_10, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(o_10)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm u_34 (ATerm))
{
  ATerm c_11 = NULL,n_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym_iter_star_1))
    {
      n_11 = ATgetArgument(c_11, 0);
      {
        ATerm w_11 = NULL;
        t = not_null(n_11);
        t = u_34(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(w_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm t_34 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_iter_1))
    {
      e_12 = ATgetArgument(d_12, 0);
      {
        ATerm g_12 = NULL;
        t = not_null(e_12);
        t = t_34(t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, not_null(g_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm y_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = y_8;
      {
        ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
        w_12 = t;
        t_12 :
        if(match_cons(w_12, sym_Cons_2))
          {
            x_12 = ATgetArgument(w_12, 0);
            y_12 = ATgetArgument(w_12, 1);
            v_12 :
            if(match_cons(y_12, sym_Cons_2))
              {
                z_12 = ATgetArgument(y_12, 0);
                a_13 = ATgetArgument(y_12, 1);
                {
                  ATerm e_13 = NULL;
                  t = not_null(a_13);
                  t = pair_0(t);
                  e_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(e_13));
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
ATerm RevExit_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  q_13 = t;
  m_13 :
  if(match_cons(q_13, sym_TCons_2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      n_13 :
      if(match_cons(r_13, sym_Nil_0))
        {
          o_13 :
          if(match_cons(s_13, sym_TCons_2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              p_13 :
              if(match_cons(u_13, sym_TNil_0))
                t = not_null(t_13);
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
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  c_14 = t;
  y_13 :
  if(match_cons(c_14, sym_TCons_2))
    {
      d_14 = ATgetArgument(c_14, 0);
      g_14 = ATgetArgument(c_14, 1);
      z_13 :
      if(match_cons(d_14, sym_Cons_2))
        {
          e_14 = ATgetArgument(d_14, 0);
          f_14 = ATgetArgument(d_14, 1);
          a_14 :
          if(match_cons(g_14, sym_TCons_2))
            {
              h_14 = ATgetArgument(g_14, 0);
              i_14 = ATgetArgument(g_14, 1);
              b_14 :
              if(match_cons(i_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_14), not_null(h_14)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm n_14 (ATerm t)
  {
    ATerm f_9 = t;
    if(PushChoice()==0)
      {
        t = m_56(t);
        t = n_14(t);
        PopChoice();
      }
    else
      {
        t = f_9;
        t = n_56(t);
      }
    return(t);
  }
  t = n_14(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_56 (ATerm))
{
  t = repeat_2(t, p_56, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm r_34 (ATerm), ATerm s_34 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_iter_star_sep_2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        ATerm c_15 = NULL;
        t = not_null(y_14);
        {
          ATerm g_15 = NULL;
          t = r_34(t);
          c_15 = t;
          t = not_null(z_14);
          t = s_34(t);
          g_15 = t;
          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(c_15), not_null(g_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm p_34 (ATerm), ATerm q_34 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_iter_sep_2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm w_15 = NULL;
        t = not_null(q_15);
        {
          ATerm y_15 = NULL;
          t = p_34(t);
          w_15 = t;
          t = not_null(r_15);
          t = q_34(t);
          y_15 = t;
          t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(w_15), not_null(y_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
      t = reverse_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm m_9 = t;
              if(PushChoice()==0)
                {
                  t = iter_1(t, _id);
                  PopChoice();
                }
              else
                {
                  t = m_9;
                  {
                    ATerm o_9 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = o_9;
                        {
                          ATerm q_9 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = q_9;
                              t = iter_star_sep_2(t, _id, _id);
                            }
                        }
                      }
                  }
                }
              return(t);
            }
            t = TCons_2(t, q_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, p_0);
          t = Make_0(t);
          return(t);
        }
        ATerm o_0 (ATerm t)
        {
          ATerm r_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, r_0);
          return(t);
        }
        t = Cons_2(t, n_0, o_0);
        q_16 = t;
        f_16 :
        if(match_cons(q_16, sym_Cons_2))
          {
            r_16 = ATgetArgument(q_16, 0);
            s_16 = ATgetArgument(q_16, 1);
            {
              ATerm t_16 = NULL;
              if(m_16 != NULL && m_16 != r_16)
                _fail(r_16);
              else
                m_16 = r_16;
              if(l_16 != NULL && l_16 != s_16)
                _fail(s_16);
              else
                l_16 = s_16;
              {
                ATerm v_9 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = v_9;
                t = not_null(l_16);
                t = reverse_0(t);
                t_16 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(t_16)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_16), (ATerm) ATmakeAppl(sym_Nil_0))));
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
      t = j_9;
      {
        ATerm w_9 = t;
        if(PushChoice()==0)
          {
            ATerm b_17 = NULL;
            t = reverse_0(t);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm v_16 = NULL;
                t = Make_0(t);
                v_16 = t;
                if(p_16 != NULL && p_16 != v_16)
                  _fail(v_16);
                else
                  p_16 = v_16;
                return(t);
              }
              ATerm t_0 (ATerm t)
              {
                ATerm w_16 = NULL;
                ATerm x_9 = t;
                if(PushChoice()==0)
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = x_9;
                t = reverse_0(t);
                w_16 = t;
                if(n_16 != NULL && n_16 != w_16)
                  _fail(w_16);
                else
                  n_16 = w_16;
                return(t);
              }
              t = Cons_2(t, s_0, t_0);
              t = not_null(n_16);
              t = pair_0(t);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm x_16 = NULL,y_16 = NULL;
                  ATerm v_0 (ATerm t)
                  {
                    ATerm z_16 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    z_16 = t;
                    if(x_16 != NULL && x_16 != z_16)
                      _fail(z_16);
                    else
                      x_16 = z_16;
                    return(t);
                  }
                  ATerm w_0 (ATerm t)
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm a_17 = NULL;
                      ATerm y_0 (ATerm t)
                      {
                        ATerm z_0 (ATerm t)
                        {
                          ATerm y_9 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = y_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = TCons_2(t, z_0, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, _id, y_0);
                      t = Make_0(t);
                      a_17 = t;
                      if(y_16 != NULL && y_16 != a_17)
                        _fail(a_17);
                      else
                        y_16 = a_17;
                      return(t);
                    }
                    t = TCons_2(t, x_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, v_0, w_0);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, u_0);
                b_17 = t;
                if(o_16 != NULL && o_16 != b_17)
                  _fail(b_17);
                else
                  o_16 = b_17;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_16), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_16), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = w_9;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm o_34 (ATerm))
{
  ATerm m_17 = NULL,n_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_lit_1))
    {
      n_17 = ATgetArgument(m_17, 0);
      {
        ATerm p_17 = NULL;
        t = not_null(n_17);
        t = o_34(t);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(p_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = z_9;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  u_17 :
  if(match_cons(x_17, sym_TCons_2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      v_17 :
      if(match_cons(z_17, sym_TCons_2))
        {
          a_18 = ATgetArgument(z_17, 0);
          b_18 = ATgetArgument(z_17, 1);
          w_17 :
          if(match_cons(b_18, sym_TNil_0))
            {
              ATerm a_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(y_17), not_null(a_18));
                  PopChoice();
                }
              else
                {
                  t = a_10;
                  t = SSL_addr(not_null(y_17), not_null(a_18));
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
ATerm number_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, a_1, _id);
  {
    ATerm g_19 (ATerm t)
    {
      ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL;
      ATerm b_10 = t;
      if(PushChoice()==0)
        {
          ATerm b_1 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, b_1);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
          PopChoice();
        }
      else
        {
          t = b_10;
          {
            ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
            t_18 = t;
            k_18 :
            if(match_cons(t_18, sym_TCons_2))
              {
                u_18 = ATgetArgument(t_18, 0);
                v_18 = ATgetArgument(t_18, 1);
                l_18 :
                if(match_cons(v_18, sym_TCons_2))
                  {
                    w_18 = ATgetArgument(v_18, 0);
                    z_18 = ATgetArgument(v_18, 1);
                    m_18 :
                    if(match_cons(w_18, sym_Cons_2))
                      {
                        x_18 = ATgetArgument(w_18, 0);
                        y_18 = ATgetArgument(w_18, 1);
                        n_18 :
                        if(match_cons(z_18, sym_TNil_0))
                          {
                            ATerm c_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm a_19 = NULL;
                                if(o_18 != NULL && o_18 != u_18)
                                  _fail(u_18);
                                else
                                  o_18 = u_18;
                                if(p_18 != NULL && p_18 != x_18)
                                  _fail(x_18);
                                else
                                  p_18 = x_18;
                                if(r_18 != NULL && r_18 != y_18)
                                  _fail(y_18);
                                else
                                  r_18 = y_18;
                                t = not_null(p_18);
                                t = y_57(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm c_19 = NULL;
                                  t = add_0(t);
                                  a_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = g_19(t);
                                  c_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(c_19));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = c_10;
                                {
                                  ATerm e_19 = NULL;
                                  if(o_18 != NULL && o_18 != u_18)
                                    _fail(u_18);
                                  else
                                    o_18 = u_18;
                                  if(p_18 != NULL && p_18 != x_18)
                                    _fail(x_18);
                                  else
                                    p_18 = x_18;
                                  if(r_18 != NULL && r_18 != y_18)
                                    _fail(y_18);
                                  else
                                    r_18 = y_18;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = g_19(t);
                                  e_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_18), not_null(e_19));
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
    t = g_19(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
      o_19 = t;
      n_19 :
      if(match_cons(o_19, sym_label_2))
        {
          p_19 = ATgetArgument(o_19, 0);
          q_19 = ATgetArgument(o_19, 1);
          t = not_null(q_19);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, h_1);
    return(t);
  }
  t = map_1(t, g_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm z_19 = NULL,b_20 = NULL,f_20 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm a_20 = NULL;
      t = make_0(t);
      a_20 = t;
      if(z_19 != NULL && z_19 != a_20)
        _fail(a_20);
      else
        z_19 = a_20;
    }
    t = d_10;
    {
      ATerm e_20 = NULL;
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm c_20 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = u_57(t);
          c_20 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_20), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, k_1);
        return(t);
      }
      t = map_1(t, j_1);
      t = concat_0(t);
      e_20 = t;
      if(b_20 != NULL && b_20 != e_20)
        _fail(e_20);
      else
        b_20 = e_20;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = u_57(t);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(f_20)), not_null(z_19)), not_null(b_20));
    }
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm l_20 (ATerm t)
  {
    ATerm e_10 = t;
    if(PushChoice()==0)
      {
        t = b_55(t);
        PopChoice();
      }
    else
      {
        t = e_10;
        t = _one(t, l_20);
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  ATerm f_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
      x_20 = t;
      r_20 :
      if(match_cons(x_20, sym_prod_3))
        {
          y_20 = ATgetArgument(x_20, 0);
          b_21 = ATgetArgument(x_20, 1);
          c_21 = ATgetArgument(x_20, 2);
          if(u_20 != NULL && u_20 != y_20)
            _fail(y_20);
          else
            u_20 = y_20;
          if(v_20 != NULL && v_20 != b_21)
            _fail(b_21);
          else
            v_20 = b_21;
          if(w_20 != NULL && w_20 != c_21)
            _fail(c_21);
          else
            w_20 = c_21;
          t = not_null(w_20);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm e_21 = NULL,f_21 = NULL;
              e_21 = t;
              p_20 :
              if(match_cons(e_21, sym_cons_1))
                {
                  f_21 = ATgetArgument(e_21, 0);
                  if(s_20 != NULL && s_20 != f_21)
                    _fail(f_21);
                  else
                    s_20 = f_21;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, l_1);
          }
          t = not_null(u_20);
          {
            ATerm o_1 (ATerm t)
            {
              t = not_null(s_20);
              return(t);
            }
            t = symbols2pp_entries_1(t, o_1);
          }
        }
      else
        {
          if(match_cons(x_20, sym_prod_fun_4))
            {
              y_20 = ATgetArgument(x_20, 0);
              b_21 = ATgetArgument(x_20, 1);
              c_21 = ATgetArgument(x_20, 2);
              d_21 = ATgetArgument(x_20, 3);
              {
                ATerm g_21 = NULL;
                if(t_20 != NULL && t_20 != y_20)
                  _fail(y_20);
                else
                  t_20 = y_20;
                if(u_20 != NULL && u_20 != b_21)
                  _fail(b_21);
                else
                  u_20 = b_21;
                if(v_20 != NULL && v_20 != c_21)
                  _fail(c_21);
                else
                  v_20 = c_21;
                if(w_20 != NULL && w_20 != d_21)
                  _fail(d_21);
                else
                  w_20 = d_21;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(t_20)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                g_21 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(g_21), not_null(v_20), not_null(w_20));
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
      t = f_10;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm g_10 = t;
          if(PushChoice()==0)
            {
              ATerm r_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Silent_0);
                return(t);
              }
              t = has_option_1(t, r_1);
              PopChoice();
              _fail(t);
            }
          else
            t = g_10;
          {
            ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, s_1);
          }
          return(t);
        }
        t = try_1(t, q_1);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm m_21 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        t = Cons_2(t, v_50, m_21);
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = SSL_implode_string(not_null(o_21));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm r_21 (ATerm t)
  {
    ATerm q_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = u_51(t);
        PopChoice();
      }
    else
      {
        t = q_10;
        t = Cons_2(t, _id, r_21);
      }
    return(t);
  }
  t = r_21(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Cons_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      t = not_null(w_21);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Cons_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      t = not_null(d_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  t = SSL_explode_string(not_null(j_22));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_10;
    r_10 = t;
    {
      ATerm r_22 = NULL;
      t = Hd_0(t);
      r_22 = t;
      m_22 :
      if(!(match_int(r_22, 34)))
        _fail(t);
    }
    t = r_10;
    t = Tl_0(t);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm s_22 = NULL,u_22 = NULL,v_22 = NULL;
        s_22 = t;
        o_22 :
        if(match_cons(s_22, sym_Cons_2))
          {
            u_22 = ATgetArgument(s_22, 0);
            v_22 = ATgetArgument(s_22, 1);
            p_22 :
            if(match_int(u_22, 34))
              {
                q_22 :
                if(match_cons(v_22, sym_Nil_0))
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
      t = at_last_1(t, u_1);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm x_22 (ATerm t)
  {
    ATerm s_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, x_22);
        PopChoice();
      }
    else
      {
        t = s_10;
        t = Nil_0(t);
        t = k_51(t);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  c_23 = t;
  z_22 :
  if(match_cons(c_23, sym_TCons_2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      a_23 :
      if(match_cons(e_23, sym_TCons_2))
        {
          f_23 = ATgetArgument(e_23, 0);
          g_23 = ATgetArgument(e_23, 1);
          b_23 :
          if(match_cons(g_23, sym_TNil_0))
            {
              t = not_null(d_23);
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(f_23);
                  return(t);
                }
                t = at_end_1(t, v_1);
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
ATerm foldr_3 (ATerm t, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm))
{
  ATerm x_23 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = x_45(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        {
          ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
          o_23 = t;
          n_23 :
          if(match_cons(o_23, sym_Cons_2))
            {
              p_23 = ATgetArgument(o_23, 0);
              q_23 = ATgetArgument(o_23, 1);
              {
                ATerm t_23 = NULL;
                t = not_null(p_23);
                {
                  ATerm v_23 = NULL;
                  t = z_45(t);
                  t_23 = t;
                  t = not_null(q_23);
                  t = x_23(t);
                  v_23 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_23), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = y_45(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm), ATerm q_47 (ATerm))
{
  ATerm h_24 = NULL;
  ATerm j_24 = NULL;
  h_24 = t;
  {
    ATerm k_24 = NULL;
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
    t = not_null(h_24);
    k_24 = t;
    t = SSL_explode_term(not_null(k_24));
    m_24 = t;
    e_24 :
    if(match_cons(m_24, sym_TCons_2))
      {
        n_24 = ATgetArgument(m_24, 0);
        o_24 = ATgetArgument(m_24, 1);
        f_24 :
        if(match_cons(o_24, sym_TCons_2))
          {
            p_24 = ATgetArgument(o_24, 0);
            q_24 = ATgetArgument(o_24, 1);
            g_24 :
            if(match_cons(q_24, sym_TNil_0))
              {
                if(j_24 != NULL && j_24 != p_24)
                  _fail(p_24);
                else
                  j_24 = p_24;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(j_24);
    t = foldr_3(t, o_47, p_47, q_47);
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm r_37 (ATerm))
{
  ATerm x_24 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        ATerm v_24 = NULL;
        t = r_37(t);
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_24), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = u_10;
        {
          ATerm x_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, x_1, conc_0, x_24);
        }
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm g_26 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm r_25 = NULL,s_25 = NULL;
    r_25 = t;
    a_25 :
    if(match_cons(r_25, sym_context_free_syntax_1))
      {
        s_25 = ATgetArgument(r_25, 0);
        t = not_null(s_25);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_p__1(t, c_2);
  t = concat_0(t);
  {
    ATerm d_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm u_25 = NULL,v_25 = NULL;
        u_25 = t;
        h_25 :
        if(match_cons(u_25, sym_cons_1))
          {
            v_25 = ATgetArgument(u_25, 0);
            {
              ATerm x_25 = NULL;
              t = not_null(v_25);
              t = de_quote_0(t);
              x_25 = t;
              t = (ATerm) ATmakeAppl(sym_cons_1, not_null(x_25));
            }
          }
        else
          {
            if(match_cons(u_25, sym_lit_1))
              {
                v_25 = ATgetArgument(u_25, 0);
                {
                  ATerm a_26 = NULL;
                  t = not_null(v_25);
                  t = de_quote_0(t);
                  a_26 = t;
                  t = (ATerm) ATmakeAppl(sym_lit_1, not_null(a_26));
                }
              }
            else
              {
                if(match_cons(u_25, sym_sort_1))
                  {
                    v_25 = ATgetArgument(u_25, 0);
                    {
                      ATerm d_26 = NULL;
                      t = not_null(v_25);
                      t = de_quote_0(t);
                      d_26 = t;
                      t = (ATerm) ATmakeAppl(sym_sort_1, not_null(d_26));
                    }
                  }
                else
                  _fail(t);
              }
          }
        return(t);
      }
      t = try_1(t, f_2);
      return(t);
    }
    t = topdown_1(t, d_2);
    t = map_1(t, generate_pp_entries_0);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm v_10 = t;
        if(PushChoice()==0)
          {
            ATerm f_26 = NULL;
            f_26 = t;
            i_25 :
            if(!(match_cons(f_26, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = v_10;
        return(t);
      }
      t = filter_1(t, h_2);
      t = concat_0(t);
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(g_26));
      {
        ATerm i_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
            j_26 = t;
            q_25 :
            if(match_cons(j_26, sym_Arg_1))
              {
                k_26 = ATgetArgument(j_26, 0);
                {
                  ATerm m_26 = NULL;
                  t = not_null(k_26);
                  t = int_to_string_0(t);
                  m_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_26));
                }
              }
            else
              {
                if(match_cons(j_26, sym_selector_2))
                  {
                    k_26 = ATgetArgument(j_26, 0);
                    i_26 = ATgetArgument(j_26, 1);
                    {
                      ATerm u_26 = NULL;
                      t = not_null(k_26);
                      t = int_to_string_0(t);
                      u_26 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(u_26), not_null(i_26));
                    }
                  }
                else
                  {
                    if(match_cons(j_26, sym_S_1))
                      {
                        k_26 = ATgetArgument(j_26, 0);
                        {
                          ATerm x_26 = NULL;
                          t = not_null(k_26);
                          t = quote_0(t);
                          x_26 = t;
                          t = (ATerm) ATmakeAppl(sym_S_1, not_null(x_26));
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            return(t);
          }
          t = try_1(t, k_2);
          return(t);
        }
        t = topdown_1(t, i_2);
      }
    }
  }
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm k_37 (ATerm), ATerm l_37 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_TCons_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm f_28 = NULL;
        t = not_null(b_28);
        {
          ATerm h_28 = NULL;
          t = k_37(t);
          f_28 = t;
          t = not_null(c_28);
          t = l_37(t);
          h_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_28), not_null(h_28));
        }
      }
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
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_exit(not_null(n_28));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  v_28 = t;
  s_28 :
  if(match_cons(v_28, sym_TCons_2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      t_28 :
      if(match_cons(x_28, sym_TCons_2))
        {
          y_28 = ATgetArgument(x_28, 0);
          z_28 = ATgetArgument(x_28, 1);
          u_28 :
          if(match_cons(z_28, sym_TNil_0))
            {
              ATerm w_10;
              w_10 = t;
              t = SSL_printnl(not_null(w_28), not_null(y_28));
              t = w_10;
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
ATerm try_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      t = j_57(t);
      PopChoice();
    }
  else
    t = x_10;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm y_10 = t;
      if(PushChoice()==0)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm k_29 = NULL;
            k_29 = t;
            d_29 :
            if(!(match_cons(k_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_2);
          PopChoice();
          _fail(t);
        }
      else
        t = y_10;
      return(t);
    }
    ATerm o_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, n_2, o_2);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          ATerm l_29 = NULL,m_29 = NULL;
          l_29 = t;
          f_29 :
          if(match_cons(l_29, sym_Runtime_1))
            {
              m_29 = ATgetArgument(l_29, 0);
              if(j_29 != NULL && j_29 != m_29)
                _fail(m_29);
              else
                j_29 = m_29;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_3);
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, q_2, z_2);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm n_29 = NULL,o_29 = NULL;
            n_29 = t;
            h_29 :
            if(match_cons(n_29, sym_Program_1))
              {
                o_29 = ATgetArgument(n_29, 0);
                if(i_29 != NULL && i_29 != o_29)
                  _fail(o_29);
                else
                  i_29 = o_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_3);
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, c_3, d_3);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, m_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  b_32 = t;
  s_29 :
  if(match_cons(b_32, sym_TCons_2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      t_29 :
      if(match_cons(d_32, sym_TCons_2))
        {
          e_32 = ATgetArgument(d_32, 0);
          f_32 = ATgetArgument(d_32, 1);
          a_32 :
          if(match_cons(f_32, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(c_32), not_null(e_32));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  n_32 = t;
  k_32 :
  if(match_cons(n_32, sym_TCons_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      l_32 :
      if(match_cons(p_32, sym_TCons_2))
        {
          q_32 = ATgetArgument(p_32, 0);
          r_32 = ATgetArgument(p_32, 1);
          m_32 :
          if(match_cons(r_32, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(o_32), not_null(q_32));
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
  ATerm z_32 = NULL;
  ATerm z_10;
  z_10 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm a_11 = t;
      if(PushChoice()==0)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm a_33 = NULL,b_33 = NULL;
            a_33 = t;
            w_32 :
            if(match_cons(a_33, sym_Output_1))
              {
                b_33 = ATgetArgument(a_33, 0);
                if(z_32 != NULL && z_32 != b_33)
                  _fail(b_33);
                else
                  z_32 = b_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_3);
          PopChoice();
        }
      else
        {
          t = a_11;
          {
            ATerm c_33 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            c_33 = t;
            if(z_32 != NULL && z_32 != c_33)
              _fail(c_33);
            else
              z_32 = c_33;
          }
        }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, n_3, o_3);
  }
  t = z_10;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm t_3 (ATerm t)
        {
          t = not_null(z_32);
          return(t);
        }
        t = split_2(t, t_3, _id);
        return(t);
      }
      t = TCons_2(t, r_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, q_3);
    {
      ATerm d_11 = t;
      if(PushChoice()==0)
        {
          ATerm w_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              ATerm d_33 = NULL;
              d_33 = t;
              y_32 :
              if(!(match_cons(d_33, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, y_3);
            return(t);
          }
          ATerm x_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, w_3, x_3);
          PopChoice();
        }
      else
        {
          t = d_11;
          {
            ATerm a_4 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, a_4);
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
ATerm apply_strategy_1 (ATerm t, ATerm g_42 (ATerm))
{
  ATerm l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  ATerm e_11;
  e_11 = t;
  t = dtime_0(t);
  t = e_11;
  t = g_42(t);
  {
    ATerm f_11;
    f_11 = t;
    {
      ATerm m_33 = NULL;
      t = dtime_0(t);
      m_33 = t;
      if(l_33 != NULL && l_33 != m_33)
        _fail(m_33);
      else
        l_33 = m_33;
    }
    t = f_11;
    n_33 = t;
    i_33 :
    if(match_cons(n_33, sym_TCons_2))
      {
        o_33 = ATgetArgument(n_33, 0);
        p_33 = ATgetArgument(n_33, 1);
        j_33 :
        if(match_cons(p_33, sym_TCons_2))
          {
            q_33 = ATgetArgument(p_33, 0);
            r_33 = ATgetArgument(p_33, 1);
            k_33 :
            if(match_cons(r_33, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(l_33)), not_null(o_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_33 = NULL;
  x_33 = t;
  t = SSL_ReadFromFile(not_null(x_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_44 (ATerm), ATerm k_44 (ATerm))
{
  ATerm d_34 = NULL;
  ATerm g_34 = NULL;
  d_34 = t;
  {
    ATerm i_34 = NULL;
    t = j_44(t);
    g_34 = t;
    t = not_null(d_34);
    t = k_44(t);
    i_34 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_34 = NULL;
  ATerm g_11;
  g_11 = t;
  {
    ATerm h_11 = t;
    if(PushChoice()==0)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm y_34 = NULL,z_34 = NULL;
          y_34 = t;
          v_34 :
          if(match_cons(y_34, sym_Input_1))
            {
              z_34 = ATgetArgument(y_34, 0);
              if(x_34 != NULL && x_34 != z_34)
                _fail(z_34);
              else
                x_34 = z_34;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_4);
        PopChoice();
      }
    else
      {
        t = h_11;
        {
          ATerm a_35 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_35 = t;
          if(x_34 != NULL && x_34 != a_35)
            _fail(a_35);
          else
            x_34 = a_35;
        }
      }
  }
  t = g_11;
  {
    ATerm c_4 (ATerm t)
    {
      t = not_null(x_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  d_35 :
  if(!(match_cons(e_35, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_34 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_Undefined_1))
    {
      j_35 = ATgetArgument(i_35, 0);
      {
        ATerm l_35 = NULL;
        t = not_null(j_35);
        t = e_34(t);
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  p_35 :
  if(!(match_cons(q_35, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_51 (ATerm))
{
  ATerm r_35 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, e_51, _id);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = Cons_2(t, _id, r_35);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_41 (ATerm))
{
  t = fetch_1(t, k_41);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_42 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = j_11;
        {
          ATerm k_11 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = k_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_4);
  t = f_42(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  ATerm l_11;
  l_11 = t;
  {
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
    a_36 = t;
    t_35 :
    if(match_cons(a_36, sym_TCons_2))
      {
        b_36 = ATgetArgument(a_36, 0);
        c_36 = ATgetArgument(a_36, 1);
        u_35 :
        if(match_cons(c_36, sym_TCons_2))
          {
            d_36 = ATgetArgument(c_36, 0);
            e_36 = ATgetArgument(c_36, 1);
            v_35 :
            if(match_cons(e_36, sym_TCons_2))
              {
                f_36 = ATgetArgument(e_36, 0);
                g_36 = ATgetArgument(e_36, 1);
                w_35 :
                if(match_cons(g_36, sym_TNil_0))
                  {
                    if(x_35 != NULL && x_35 != b_36)
                      _fail(b_36);
                    else
                      x_35 = b_36;
                    if(y_35 != NULL && y_35 != d_36)
                      _fail(d_36);
                    else
                      y_35 = d_36;
                    if(z_35 != NULL && z_35 != f_36)
                      _fail(f_36);
                    else
                      z_35 = f_36;
                    t = SSL_table_put(not_null(x_35), not_null(y_35), not_null(z_35));
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
  t = l_11;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_table_create(not_null(j_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  {
    ATerm m_11;
    m_11 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_36), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_11;
  }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm f_41 (ATerm), ATerm g_41 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  u_36 = t;
  s_36 :
  if(match_cons(u_36, sym_Cons_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      t_36 :
      if(match_cons(w_36, sym_Cons_2))
        {
          x_36 = ATgetArgument(w_36, 0);
          y_36 = ATgetArgument(w_36, 1);
          {
            ATerm d_37 = NULL;
            t = not_null(v_36);
            t = f_41(t);
            t = not_null(x_36);
            t = g_41(t);
            d_37 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_37), not_null(y_36));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      ATerm h_4 (ATerm t)
      {
        ATerm h_38 = NULL;
        h_38 = t;
        h_37 :
        if(!(match_string(h_38, "-S")))
          _fail(t);
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, h_4, j_4);
      PopChoice();
    }
  else
    {
      t = o_11;
      {
        ATerm p_11 = t;
        if(PushChoice()==0)
          {
            ATerm k_4 (ATerm t)
            {
              ATerm i_38 = NULL;
              i_38 = t;
              i_37 :
              if(!(match_string(i_38, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm l_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, k_4, l_4);
            PopChoice();
          }
        else
          {
            t = p_11;
            {
              ATerm q_11 = t;
              if(PushChoice()==0)
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm j_38 = NULL;
                    j_38 = t;
                    j_37 :
                    if(!(match_string(j_38, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm v_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, m_4, v_4);
                  PopChoice();
                }
              else
                {
                  t = q_11;
                  {
                    ATerm r_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_4 (ATerm t)
                        {
                          ATerm k_38 = NULL;
                          k_38 = t;
                          m_37 :
                          if(!(match_string(k_38, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, w_4, x_4);
                        PopChoice();
                      }
                    else
                      {
                        t = r_11;
                        {
                          ATerm s_11 = t;
                          if(PushChoice()==0)
                            {
                              ATerm y_4 (ATerm t)
                              {
                                ATerm l_38 = NULL;
                                l_38 = t;
                                n_37 :
                                if(!(match_string(l_38, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm z_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, y_4, z_4);
                              PopChoice();
                            }
                          else
                            {
                              t = s_11;
                              {
                                ATerm t_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm a_5 (ATerm t)
                                    {
                                      ATerm m_38 = NULL;
                                      m_38 = t;
                                      q_37 :
                                      if(!(match_string(m_38, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm n_38 = NULL;
                                      n_38 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_38));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, a_5, i_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_11;
                                    {
                                      ATerm u_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_5 (ATerm t)
                                          {
                                            ATerm p_38 = NULL;
                                            p_38 = t;
                                            u_37 :
                                            if(!(match_string(p_38, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_5 (ATerm t)
                                          {
                                            ATerm q_38 = NULL;
                                            q_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_38));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, j_5, k_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_11;
                                          {
                                            ATerm v_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm m_5 (ATerm t)
                                                {
                                                  ATerm s_38 = NULL;
                                                  s_38 = t;
                                                  w_37 :
                                                  if(!(match_string(s_38, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm n_5 (ATerm t)
                                                {
                                                  ATerm t_38 = NULL;
                                                  t_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_38));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, m_5, n_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_11;
                                                {
                                                  ATerm x_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm o_5 (ATerm t)
                                                      {
                                                        ATerm v_38 = NULL;
                                                        v_38 = t;
                                                        y_37 :
                                                        if(!(match_string(v_38, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm w_38 = NULL;
                                                        w_38 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_38));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, o_5, p_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_11;
                                                      {
                                                        ATerm y_11 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm r_5 (ATerm t)
                                                            {
                                                              ATerm y_38 = NULL;
                                                              y_38 = t;
                                                              a_38 :
                                                              if(!(match_string(y_38, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm t_5 (ATerm t)
                                                            {
                                                              ATerm z_38 = NULL;
                                                              z_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_38));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, r_5, t_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_11;
                                                            {
                                                              ATerm z_11 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm u_5 (ATerm t)
                                                                  {
                                                                    ATerm b_39 = NULL;
                                                                    b_39 = t;
                                                                    c_38 :
                                                                    if(!(match_string(b_39, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm v_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, u_5, v_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_11;
                                                                  {
                                                                    ATerm a_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm w_5 (ATerm t)
                                                                        {
                                                                          ATerm c_39 = NULL;
                                                                          c_39 = t;
                                                                          d_38 :
                                                                          if(!(match_string(c_39, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm x_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, w_5, x_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_12;
                                                                        {
                                                                          ATerm b_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm y_5 (ATerm t)
                                                                              {
                                                                                ATerm d_39 = NULL;
                                                                                d_39 = t;
                                                                                e_38 :
                                                                                if(!(match_string(d_39, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm z_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, y_5, z_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_12;
                                                                              {
                                                                                ATerm f_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm a_6 (ATerm t)
                                                                                    {
                                                                                      ATerm e_39 = NULL;
                                                                                      e_39 = t;
                                                                                      f_38 :
                                                                                      if(!(match_string(e_39, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, a_6, b_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_12;
                                                                                    {
                                                                                      ATerm c_6 (ATerm t)
                                                                                      {
                                                                                        ATerm f_39 = NULL;
                                                                                        f_39 = t;
                                                                                        g_38 :
                                                                                        if(!(match_string(f_39, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm d_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, c_6, d_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Cons_2))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_39)), not_null(p_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_37 (ATerm), ATerm p_37 (ATerm))
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym_Cons_2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      {
        ATerm c_40 = NULL;
        t = not_null(y_39);
        {
          ATerm e_40 = NULL;
          t = o_37(t);
          c_40 = t;
          t = not_null(z_39);
          t = p_37(t);
          e_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_40), not_null(e_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  j_40 :
  if(!(match_cons(k_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_41 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm m_40 = NULL;
    m_40 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_40));
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        ATerm i_12 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = i_12;
            t = b_41(t);
            t = Cons_2(t, _id, i_6);
          }
        PopChoice();
      }
    else
      {
        t = h_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, h_6, i_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm), ATerm w_41 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm j_12 = t;
    if(PushChoice()==0)
      {
        t = v_41(t);
        PopChoice();
      }
    else
      {
        t = j_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_6);
  t = store_options_0(t);
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, w_41);
        PopChoice();
      }
    else
      {
        t = k_12;
        {
          ATerm l_12 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, u_41);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = l_12;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Ppgen_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm d_7 (ATerm t)
    {
      t = TCons_2(t, ppgenerate_0, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, d_7);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm r_40 = NULL;
      r_40 = t;
      q_40 :
      if(!(match_string(r_40, "-v")))
        _fail(t);
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Verbose_0);
      return(t);
    }
    t = Option_2(t, e_7, i_8);
    return(t);
  }
  t = iowrap_3(t, k_6, l_6, usage_p__0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ppgen_0(t);
  return(t);
}

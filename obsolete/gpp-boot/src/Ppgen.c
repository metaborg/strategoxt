#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_bracket_symbol_1;
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
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
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
ATerm obsolete_1 (ATerm, ATerm h_43 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm Option_2 (ATerm, ATerm n_41 (ATerm), ATerm o_41 (ATerm));
ATerm TNil_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_53 (ATerm));
ATerm concat_0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_45 (ATerm));
ATerm debug_1 (ATerm, ATerm a_43 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm m_42 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm g_37 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm f_58 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm b_35 (ATerm));
ATerm iter_1 (ATerm, ATerm a_35 (ATerm));
ATerm pair_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_56 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm y_34 (ATerm), ATerm z_34 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm w_34 (ATerm), ATerm x_34 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm v_34 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm i_58 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm e_58 (ATerm));
ATerm oncetd_1 (ATerm, ATerm l_55 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm map_1 (ATerm, ATerm f_51 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm e_52 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_51 (ATerm));
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_46 (ATerm), ATerm i_46 (ATerm), ATerm j_46 (ATerm));
ATerm crush_3 (ATerm, ATerm y_47 (ATerm), ATerm z_47 (ATerm), ATerm a_48 (ATerm));
ATerm collect_p__1 (ATerm, ATerm y_37 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm r_37 (ATerm), ATerm s_37 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_42 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_34 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm o_51 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_41 (ATerm));
ATerm need_help_1 (ATerm, ATerm p_42 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_37 (ATerm), ATerm w_37 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_41 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm Ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm e_2;
  e_2 = t;
  t = h_43(t);
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
ATerm Option_2 (ATerm t, ATerm n_41 (ATerm), ATerm o_41 (ATerm))
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
        t = n_41(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_41(t);
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
ATerm topdown_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = v_53(t);
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
ATerm filter_1 (ATerm t, ATerm l_45 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = m_8;
        {
          ATerm o_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, l_45, g_2);
              PopChoice();
            }
          else
            {
              t = o_8;
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
ATerm debug_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm p_8;
  p_8 = t;
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
      t = a_43(t);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_2), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_2), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, d_0, e_0);
    t = printnl_0(t);
  }
  t = p_8;
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
ATerm has_option_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = m_42(t);
  t = check_option_0(t);
  t = q_8;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_8;
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
        ATerm s_8 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = s_8;
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
ATerm Arg_1 (ATerm t, ATerm g_37 (ATerm))
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
        t = g_37(t);
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
            ATerm t_8 = t;
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
                t = t_8;
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
ATerm symbol2abox_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  ATerm i_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = f_58(t);
    return(t);
  }
  t = split_2(t, i_0, _id);
  {
    ATerm x_9 (ATerm t)
    {
      ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
      ATerm z_9 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm a_10 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm c_10 (ATerm t)
      {
        ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
        if(o_7 != NULL && o_7 != x_7)
          _fail(x_7);
        else
          o_7 = x_7;
        if(p_7 != NULL && p_7 != z_7)
          _fail(z_7);
        else
          p_7 = z_7;
        if(q_7 != NULL && q_7 != d_8)
          _fail(d_8);
        else
          q_7 = d_8;
        if(i_8 != NULL && i_8 != u_7)
          _fail(u_7);
        else
          i_8 = u_7;
        if(j_8 != NULL && j_8 != s_7)
          _fail(s_7);
        else
          j_8 = s_7;
        if(k_8 != NULL && k_8 != t_7)
          _fail(t_7);
        else
          k_8 = t_7;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(i_8), (ATerm) ATmakeAppl(sym_alt_2, not_null(j_8), not_null(k_8)));
        {
          ATerm n_8 = NULL;
          t = flat_alt_0(t);
          l_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_8), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          n_8 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_8), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = x_9(t);
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
      ATerm d_10 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_7), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_7), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = x_9(t);
        return(t);
      }
      ATerm e_10 (ATerm t)
      {
        ATerm d_9 = NULL,e_9 = NULL,m_9 = NULL;
        ATerm f_9 = NULL;
        ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
        t = not_null(f_8);
        f_9 = t;
        t = SSL_explode_term(not_null(f_9));
        h_9 = t;
        f_6 :
        if(match_cons(h_9, sym_TCons_2))
          {
            i_9 = ATgetArgument(h_9, 0);
            j_9 = ATgetArgument(h_9, 1);
            g_6 :
            if(match_cons(j_9, sym_TCons_2))
              {
                k_9 = ATgetArgument(j_9, 0);
                l_9 = ATgetArgument(j_9, 1);
                h_6 :
                if(match_cons(l_9, sym_TNil_0))
                  {
                    if(d_9 != NULL && d_9 != i_9)
                      _fail(i_9);
                    else
                      d_9 = i_9;
                    if(e_9 != NULL && e_9 != k_9)
                      _fail(k_9);
                    else
                      e_9 = k_9;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(d_8), not_null(d_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm o_9 = NULL,v_9 = NULL;
          t = conc_0(t);
          m_9 = t;
          t = not_null(e_9);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm u_8;
            u_8 = t;
            {
              ATerm p_9 = NULL;
              t = make_0(t);
              p_9 = t;
              if(o_9 != NULL && o_9 != p_9)
                _fail(p_9);
              else
                o_9 = p_9;
            }
            t = u_8;
            {
              ATerm m_0 (ATerm t)
              {
                ATerm q_9 = NULL;
                ATerm s_9 = NULL;
                q_9 = t;
                {
                  ATerm t_9 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_9), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_9(t);
                  t_9 = t;
                  if(s_9 != NULL && s_9 != t_9)
                    _fail(t_9);
                  else
                    s_9 = t_9;
                  t = not_null(s_9);
                }
                return(t);
              }
              t = map_1(t, m_0);
              t = concat_0(t);
              v_9 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(x_7), not_null(m_9)), not_null(o_9)), not_null(v_9));
            }
          }
        }
        return(t);
      }
      v_7 = t;
      n_6 :
      if(match_cons(v_7, sym_TCons_2))
        {
          w_7 = ATgetArgument(v_7, 0);
          b_8 = ATgetArgument(v_7, 1);
          o_6 :
          if(match_cons(b_8, sym_TCons_2))
            {
              c_8 = ATgetArgument(b_8, 0);
              h_8 = ATgetArgument(b_8, 1);
              p_6 :
              if(match_cons(c_8, sym_lit_1))
                {
                  d_8 = ATgetArgument(c_8, 0);
                  q_6 :
                  if(match_cons(h_8, sym_TNil_0))
                    {
                      r_6 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(c_8, sym_TCons_2))
                    {
                      d_8 = ATgetArgument(c_8, 0);
                      e_8 = ATgetArgument(c_8, 1);
                      s_6 :
                      if(match_cons(e_8, sym_TCons_2))
                        {
                          f_8 = ATgetArgument(e_8, 0);
                          g_8 = ATgetArgument(e_8, 1);
                          t_6 :
                          if(match_cons(g_8, sym_TNil_0))
                            {
                              u_6 :
                              if(match_cons(h_8, sym_TNil_0))
                                {
                                  v_6 :
                                  if(match_cons(f_8, sym_sort_1))
                                    {
                                      u_7 = ATgetArgument(f_8, 0);
                                      w_6 :
                                      if(match_cons(w_7, sym_TCons_2))
                                        {
                                          x_7 = ATgetArgument(w_7, 0);
                                          y_7 = ATgetArgument(w_7, 1);
                                          x_6 :
                                          if(match_cons(y_7, sym_TCons_2))
                                            {
                                              z_7 = ATgetArgument(y_7, 0);
                                              a_8 = ATgetArgument(y_7, 1);
                                              y_6 :
                                              if(match_cons(a_8, sym_TNil_0))
                                                {
                                                  ATerm v_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = z_9(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_8;
                                                      t = e_10(t);
                                                    }
                                                }
                                              else
                                                t = z_9(t);
                                            }
                                          else
                                            t = z_9(t);
                                        }
                                      else
                                        t = z_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(f_8, sym_char_class_1))
                                        {
                                          u_7 = ATgetArgument(f_8, 0);
                                          z_6 :
                                          if(match_cons(w_7, sym_TCons_2))
                                            {
                                              x_7 = ATgetArgument(w_7, 0);
                                              y_7 = ATgetArgument(w_7, 1);
                                              a_7 :
                                              if(match_cons(y_7, sym_TCons_2))
                                                {
                                                  z_7 = ATgetArgument(y_7, 0);
                                                  a_8 = ATgetArgument(y_7, 1);
                                                  b_7 :
                                                  if(match_cons(a_8, sym_TNil_0))
                                                    {
                                                      ATerm w_8 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = a_10(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = w_8;
                                                          t = e_10(t);
                                                        }
                                                    }
                                                  else
                                                    t = a_10(t);
                                                }
                                              else
                                                t = a_10(t);
                                            }
                                          else
                                            t = a_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(f_8, sym_alt_2))
                                            {
                                              u_7 = ATgetArgument(f_8, 0);
                                              r_7 = ATgetArgument(f_8, 1);
                                              c_7 :
                                              if(match_cons(w_7, sym_TCons_2))
                                                {
                                                  x_7 = ATgetArgument(w_7, 0);
                                                  y_7 = ATgetArgument(w_7, 1);
                                                  d_7 :
                                                  if(match_cons(y_7, sym_TCons_2))
                                                    {
                                                      z_7 = ATgetArgument(y_7, 0);
                                                      a_8 = ATgetArgument(y_7, 1);
                                                      g_7 :
                                                      if(match_cons(a_8, sym_TNil_0))
                                                        {
                                                          h_7 :
                                                          if(match_cons(r_7, sym_alt_2))
                                                            {
                                                              s_7 = ATgetArgument(r_7, 0);
                                                              t_7 = ATgetArgument(r_7, 1);
                                                              {
                                                                ATerm x_8 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = c_10(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_8;
                                                                    t = e_10(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = e_10(t);
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
                                              if(match_cons(f_8, sym_bracket_symbol_1))
                                                {
                                                  u_7 = ATgetArgument(f_8, 0);
                                                  i_7 :
                                                  if(match_cons(w_7, sym_TCons_2))
                                                    {
                                                      x_7 = ATgetArgument(w_7, 0);
                                                      y_7 = ATgetArgument(w_7, 1);
                                                      j_7 :
                                                      if(match_cons(y_7, sym_TCons_2))
                                                        {
                                                          z_7 = ATgetArgument(y_7, 0);
                                                          a_8 = ATgetArgument(y_7, 1);
                                                          k_7 :
                                                          if(match_cons(a_8, sym_TNil_0))
                                                            {
                                                              ATerm y_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = d_10(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = y_8;
                                                                  t = e_10(t);
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
                                                {
                                                  l_7 :
                                                  if(match_cons(w_7, sym_TCons_2))
                                                    {
                                                      x_7 = ATgetArgument(w_7, 0);
                                                      y_7 = ATgetArgument(w_7, 1);
                                                      m_7 :
                                                      if(match_cons(y_7, sym_TCons_2))
                                                        {
                                                          z_7 = ATgetArgument(y_7, 0);
                                                          a_8 = ATgetArgument(y_7, 1);
                                                          n_7 :
                                                          if(match_cons(a_8, sym_TNil_0))
                                                            t = e_10(t);
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
    t = x_9(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm t_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  c_11 = t;
  q_10 :
  if(match_cons(c_11, sym_TCons_2))
    {
      d_11 = ATgetArgument(c_11, 0);
      t_10 = ATgetArgument(c_11, 1);
      r_10 :
      if(match_cons(t_10, sym_TCons_2))
        {
          a_11 = ATgetArgument(t_10, 0);
          b_11 = ATgetArgument(t_10, 1);
          s_10 :
          if(match_cons(b_11, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(d_11));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(c_11, sym_lit_1))
        {
          d_11 = ATgetArgument(c_11, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(d_11)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm b_35 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_iter_star_1))
    {
      d_12 = ATgetArgument(c_12, 0);
      {
        ATerm f_12 = NULL;
        t = not_null(d_12);
        t = b_35(t);
        f_12 = t;
        t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm a_35 (ATerm))
{
  ATerm o_12 = NULL,u_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_iter_1))
    {
      u_12 = ATgetArgument(o_12, 0);
      {
        ATerm x_12 = NULL;
        t = not_null(u_12);
        t = a_35(t);
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, not_null(x_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm z_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_8;
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
        f_13 = t;
        d_13 :
        if(match_cons(f_13, sym_Cons_2))
          {
            g_13 = ATgetArgument(f_13, 0);
            h_13 = ATgetArgument(f_13, 1);
            e_13 :
            if(match_cons(h_13, sym_Cons_2))
              {
                i_13 = ATgetArgument(h_13, 0);
                j_13 = ATgetArgument(h_13, 1);
                {
                  ATerm p_13 = NULL;
                  t = not_null(j_13);
                  t = pair_0(t);
                  p_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_13), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(p_13));
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  z_13 = t;
  v_13 :
  if(match_cons(z_13, sym_TCons_2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      w_13 :
      if(match_cons(a_14, sym_Nil_0))
        {
          x_13 :
          if(match_cons(b_14, sym_TCons_2))
            {
              c_14 = ATgetArgument(b_14, 0);
              d_14 = ATgetArgument(b_14, 1);
              y_13 :
              if(match_cons(d_14, sym_TNil_0))
                t = not_null(c_14);
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  l_14 = t;
  h_14 :
  if(match_cons(l_14, sym_TCons_2))
    {
      m_14 = ATgetArgument(l_14, 0);
      p_14 = ATgetArgument(l_14, 1);
      i_14 :
      if(match_cons(m_14, sym_Cons_2))
        {
          n_14 = ATgetArgument(m_14, 0);
          o_14 = ATgetArgument(m_14, 1);
          j_14 :
          if(match_cons(p_14, sym_TCons_2))
            {
              q_14 = ATgetArgument(p_14, 0);
              r_14 = ATgetArgument(p_14, 1);
              k_14 :
              if(match_cons(r_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_14), not_null(q_14)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm))
{
  ATerm x_14 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = w_56(t);
        t = x_14(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = x_56(t);
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_56 (ATerm))
{
  t = repeat_2(t, z_56, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_14), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm y_34 (ATerm), ATerm z_34 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  f_15 :
  if(match_cons(i_15, sym_iter_star_sep_2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm n_15 = NULL;
        t = not_null(j_15);
        {
          ATerm p_15 = NULL;
          t = y_34(t);
          n_15 = t;
          t = not_null(k_15);
          t = z_34(t);
          p_15 = t;
          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(n_15), not_null(p_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm w_34 (ATerm), ATerm x_34 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_iter_sep_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      {
        ATerm f_16 = NULL;
        t = not_null(b_16);
        {
          ATerm h_16 = NULL;
          t = w_34(t);
          f_16 = t;
          t = not_null(c_16);
          t = x_34(t);
          h_16 = t;
          t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(f_16), not_null(h_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  ATerm b_9 = t;
  if(PushChoice()==0)
    {
      ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
      t = reverse_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm c_9 = t;
              if(PushChoice()==0)
                {
                  t = iter_1(t, _id);
                  PopChoice();
                }
              else
                {
                  t = c_9;
                  {
                    ATerm g_9 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = g_9;
                        {
                          ATerm n_9 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = n_9;
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
        z_16 = t;
        o_16 :
        if(match_cons(z_16, sym_Cons_2))
          {
            a_17 = ATgetArgument(z_16, 0);
            b_17 = ATgetArgument(z_16, 1);
            {
              ATerm c_17 = NULL;
              if(v_16 != NULL && v_16 != a_17)
                _fail(a_17);
              else
                v_16 = a_17;
              if(u_16 != NULL && u_16 != b_17)
                _fail(b_17);
              else
                u_16 = b_17;
              {
                ATerm r_9 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = r_9;
                t = not_null(u_16);
                t = reverse_0(t);
                c_17 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(c_17)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_16), (ATerm) ATmakeAppl(sym_Nil_0))));
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
      t = b_9;
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            ATerm k_17 = NULL;
            t = reverse_0(t);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm e_17 = NULL;
                t = Make_0(t);
                e_17 = t;
                if(y_16 != NULL && y_16 != e_17)
                  _fail(e_17);
                else
                  y_16 = e_17;
                return(t);
              }
              ATerm t_0 (ATerm t)
              {
                ATerm f_17 = NULL;
                ATerm w_9 = t;
                if(PushChoice()==0)
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = w_9;
                t = reverse_0(t);
                f_17 = t;
                if(w_16 != NULL && w_16 != f_17)
                  _fail(f_17);
                else
                  w_16 = f_17;
                return(t);
              }
              t = Cons_2(t, s_0, t_0);
              t = not_null(w_16);
              t = pair_0(t);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm g_17 = NULL,h_17 = NULL;
                  ATerm v_0 (ATerm t)
                  {
                    ATerm i_17 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    i_17 = t;
                    if(g_17 != NULL && g_17 != i_17)
                      _fail(i_17);
                    else
                      g_17 = i_17;
                    return(t);
                  }
                  ATerm w_0 (ATerm t)
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm j_17 = NULL;
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
                      j_17 = t;
                      if(h_17 != NULL && h_17 != j_17)
                        _fail(j_17);
                      else
                        h_17 = j_17;
                      return(t);
                    }
                    t = TCons_2(t, x_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, v_0, w_0);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_17), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, u_0);
                k_17 = t;
                if(x_16 != NULL && x_16 != k_17)
                  _fail(k_17);
                else
                  x_16 = k_17;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = u_9;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm v_34 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_lit_1))
    {
      w_17 = ATgetArgument(v_17, 0);
      {
        ATerm y_17 = NULL;
        t = not_null(w_17);
        t = v_34(t);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(y_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = b_10;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  g_18 = t;
  d_18 :
  if(match_cons(g_18, sym_TCons_2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      e_18 :
      if(match_cons(i_18, sym_TCons_2))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          f_18 :
          if(match_cons(k_18, sym_TNil_0))
            {
              ATerm f_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(h_18), not_null(j_18));
                  PopChoice();
                }
              else
                {
                  t = f_10;
                  t = SSL_addr(not_null(h_18), not_null(j_18));
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
ATerm number_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, a_1, _id);
  {
    ATerm p_19 (ATerm t)
    {
      ATerm x_18 = NULL,y_18 = NULL,a_19 = NULL;
      ATerm g_10 = t;
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
          t = g_10;
          {
            ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
            c_19 = t;
            t_18 :
            if(match_cons(c_19, sym_TCons_2))
              {
                d_19 = ATgetArgument(c_19, 0);
                e_19 = ATgetArgument(c_19, 1);
                u_18 :
                if(match_cons(e_19, sym_TCons_2))
                  {
                    f_19 = ATgetArgument(e_19, 0);
                    i_19 = ATgetArgument(e_19, 1);
                    v_18 :
                    if(match_cons(f_19, sym_Cons_2))
                      {
                        g_19 = ATgetArgument(f_19, 0);
                        h_19 = ATgetArgument(f_19, 1);
                        w_18 :
                        if(match_cons(i_19, sym_TNil_0))
                          {
                            ATerm h_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm j_19 = NULL;
                                if(x_18 != NULL && x_18 != d_19)
                                  _fail(d_19);
                                else
                                  x_18 = d_19;
                                if(y_18 != NULL && y_18 != g_19)
                                  _fail(g_19);
                                else
                                  y_18 = g_19;
                                if(a_19 != NULL && a_19 != h_19)
                                  _fail(h_19);
                                else
                                  a_19 = h_19;
                                t = not_null(y_18);
                                t = i_58(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm l_19 = NULL;
                                  t = add_0(t);
                                  j_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = p_19(t);
                                  l_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(l_19));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = h_10;
                                {
                                  ATerm n_19 = NULL;
                                  if(x_18 != NULL && x_18 != d_19)
                                    _fail(d_19);
                                  else
                                    x_18 = d_19;
                                  if(y_18 != NULL && y_18 != g_19)
                                    _fail(g_19);
                                  else
                                    y_18 = g_19;
                                  if(a_19 != NULL && a_19 != h_19)
                                    _fail(h_19);
                                  else
                                    a_19 = h_19;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = p_19(t);
                                  n_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_18), not_null(n_19));
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
    t = p_19(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
      y_19 = t;
      x_19 :
      if(match_cons(y_19, sym_label_2))
        {
          z_19 = ATgetArgument(y_19, 0);
          a_20 = ATgetArgument(y_19, 1);
          t = not_null(a_20);
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
ATerm symbols2pp_entries_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm i_20 = NULL,k_20 = NULL,o_20 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm i_10;
    i_10 = t;
    {
      ATerm j_20 = NULL;
      t = make_0(t);
      j_20 = t;
      if(i_20 != NULL && i_20 != j_20)
        _fail(j_20);
      else
        i_20 = j_20;
    }
    t = i_10;
    {
      ATerm n_20 = NULL;
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm l_20 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = e_58(t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_20), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, k_1);
        return(t);
      }
      t = map_1(t, j_1);
      t = concat_0(t);
      n_20 = t;
      if(k_20 != NULL && k_20 != n_20)
        _fail(n_20);
      else
        k_20 = n_20;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = e_58(t);
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(o_20)), not_null(i_20)), not_null(k_20));
    }
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm u_20 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = l_55(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        t = _one(t, u_20);
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  ATerm k_10 = t;
  if(PushChoice()==0)
    {
      ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
      i_21 = t;
      a_21 :
      if(match_cons(i_21, sym_prod_3))
        {
          j_21 = ATgetArgument(i_21, 0);
          k_21 = ATgetArgument(i_21, 1);
          l_21 = ATgetArgument(i_21, 2);
          if(f_21 != NULL && f_21 != j_21)
            _fail(j_21);
          else
            f_21 = j_21;
          if(g_21 != NULL && g_21 != k_21)
            _fail(k_21);
          else
            g_21 = k_21;
          if(h_21 != NULL && h_21 != l_21)
            _fail(l_21);
          else
            h_21 = l_21;
          t = not_null(h_21);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm n_21 = NULL,o_21 = NULL;
              n_21 = t;
              y_20 :
              if(match_cons(n_21, sym_cons_1))
                {
                  o_21 = ATgetArgument(n_21, 0);
                  if(d_21 != NULL && d_21 != o_21)
                    _fail(o_21);
                  else
                    d_21 = o_21;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, l_1);
          }
          t = not_null(f_21);
          {
            ATerm o_1 (ATerm t)
            {
              t = not_null(d_21);
              return(t);
            }
            t = symbols2pp_entries_1(t, o_1);
          }
        }
      else
        {
          if(match_cons(i_21, sym_prod_fun_4))
            {
              j_21 = ATgetArgument(i_21, 0);
              k_21 = ATgetArgument(i_21, 1);
              l_21 = ATgetArgument(i_21, 2);
              m_21 = ATgetArgument(i_21, 3);
              {
                ATerm p_21 = NULL;
                if(e_21 != NULL && e_21 != j_21)
                  _fail(j_21);
                else
                  e_21 = j_21;
                if(f_21 != NULL && f_21 != k_21)
                  _fail(k_21);
                else
                  f_21 = k_21;
                if(g_21 != NULL && g_21 != l_21)
                  _fail(l_21);
                else
                  g_21 = l_21;
                if(h_21 != NULL && h_21 != m_21)
                  _fail(m_21);
                else
                  h_21 = m_21;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(e_21)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_21), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(p_21), not_null(g_21), not_null(h_21));
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
      t = k_10;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm l_10 = t;
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
            t = l_10;
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
ATerm map_1 (ATerm t, ATerm f_51 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm m_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = m_10;
        t = Cons_2(t, f_51, v_21);
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  t = SSL_implode_string(not_null(x_21));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm e_52 (ATerm))
{
  ATerm a_22 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = e_52(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = Cons_2(t, _id, a_22);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_Cons_2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      t = not_null(f_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Cons_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      t = not_null(m_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  t = SSL_explode_string(not_null(s_22));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_10;
    o_10 = t;
    {
      ATerm b_23 = NULL;
      t = Hd_0(t);
      b_23 = t;
      w_22 :
      if(!(match_int(b_23, 34)))
        _fail(t);
    }
    t = o_10;
    t = Tl_0(t);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
        c_23 = t;
        y_22 :
        if(match_cons(c_23, sym_Cons_2))
          {
            d_23 = ATgetArgument(c_23, 0);
            e_23 = ATgetArgument(c_23, 1);
            z_22 :
            if(match_int(d_23, 34))
              {
                a_23 :
                if(match_cons(e_23, sym_Nil_0))
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
ATerm at_end_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm g_23 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, g_23);
        PopChoice();
      }
    else
      {
        t = p_10;
        t = Nil_0(t);
        t = u_51(t);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  l_23 = t;
  i_23 :
  if(match_cons(l_23, sym_TCons_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      j_23 :
      if(match_cons(n_23, sym_TCons_2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          k_23 :
          if(match_cons(p_23, sym_TNil_0))
            {
              t = not_null(m_23);
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(o_23);
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
ATerm foldr_3 (ATerm t, ATerm h_46 (ATerm), ATerm i_46 (ATerm), ATerm j_46 (ATerm))
{
  ATerm g_24 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = h_46(t);
        PopChoice();
      }
    else
      {
        t = u_10;
        {
          ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
          x_23 = t;
          w_23 :
          if(match_cons(x_23, sym_Cons_2))
            {
              y_23 = ATgetArgument(x_23, 0);
              z_23 = ATgetArgument(x_23, 1);
              {
                ATerm c_24 = NULL;
                t = not_null(y_23);
                {
                  ATerm e_24 = NULL;
                  t = j_46(t);
                  c_24 = t;
                  t = not_null(z_23);
                  t = g_24(t);
                  e_24 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = i_46(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm y_47 (ATerm), ATerm z_47 (ATerm), ATerm a_48 (ATerm))
{
  ATerm q_24 = NULL;
  ATerm s_24 = NULL;
  q_24 = t;
  {
    ATerm t_24 = NULL;
    ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
    t = not_null(q_24);
    t_24 = t;
    t = SSL_explode_term(not_null(t_24));
    v_24 = t;
    n_24 :
    if(match_cons(v_24, sym_TCons_2))
      {
        w_24 = ATgetArgument(v_24, 0);
        x_24 = ATgetArgument(v_24, 1);
        o_24 :
        if(match_cons(x_24, sym_TCons_2))
          {
            y_24 = ATgetArgument(x_24, 0);
            z_24 = ATgetArgument(x_24, 1);
            p_24 :
            if(match_cons(z_24, sym_TNil_0))
              {
                if(s_24 != NULL && s_24 != y_24)
                  _fail(y_24);
                else
                  s_24 = y_24;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(s_24);
    t = foldr_3(t, y_47, z_47, a_48);
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm y_37 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        ATerm e_25 = NULL;
        t = y_37(t);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_25), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = v_10;
        {
          ATerm x_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, x_1, conc_0, g_25);
        }
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL;
    a_26 = t;
    j_25 :
    if(match_cons(a_26, sym_context_free_syntax_1))
      {
        b_26 = ATgetArgument(a_26, 0);
        t = not_null(b_26);
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
        ATerm d_26 = NULL,e_26 = NULL;
        d_26 = t;
        q_25 :
        if(match_cons(d_26, sym_cons_1))
          {
            e_26 = ATgetArgument(d_26, 0);
            {
              ATerm g_26 = NULL;
              t = not_null(e_26);
              t = de_quote_0(t);
              g_26 = t;
              t = (ATerm) ATmakeAppl(sym_cons_1, not_null(g_26));
            }
          }
        else
          {
            if(match_cons(d_26, sym_lit_1))
              {
                e_26 = ATgetArgument(d_26, 0);
                {
                  ATerm j_26 = NULL;
                  t = not_null(e_26);
                  t = de_quote_0(t);
                  j_26 = t;
                  t = (ATerm) ATmakeAppl(sym_lit_1, not_null(j_26));
                }
              }
            else
              {
                if(match_cons(d_26, sym_sort_1))
                  {
                    e_26 = ATgetArgument(d_26, 0);
                    {
                      ATerm m_26 = NULL;
                      t = not_null(e_26);
                      t = de_quote_0(t);
                      m_26 = t;
                      t = (ATerm) ATmakeAppl(sym_sort_1, not_null(m_26));
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
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            ATerm o_26 = NULL;
            o_26 = t;
            r_25 :
            if(!(match_cons(o_26, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = w_10;
        return(t);
      }
      t = filter_1(t, h_2);
      t = concat_0(t);
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(p_26));
      {
        ATerm i_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm r_26 = NULL,w_26 = NULL,x_26 = NULL;
            w_26 = t;
            z_25 :
            if(match_cons(w_26, sym_Arg_1))
              {
                x_26 = ATgetArgument(w_26, 0);
                {
                  ATerm z_26 = NULL;
                  t = not_null(x_26);
                  t = int_to_string_0(t);
                  z_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(z_26));
                }
              }
            else
              {
                if(match_cons(w_26, sym_selector_2))
                  {
                    x_26 = ATgetArgument(w_26, 0);
                    r_26 = ATgetArgument(w_26, 1);
                    {
                      ATerm d_27 = NULL;
                      t = not_null(x_26);
                      t = int_to_string_0(t);
                      d_27 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(d_27), not_null(r_26));
                    }
                  }
                else
                  {
                    if(match_cons(w_26, sym_S_1))
                      {
                        x_26 = ATgetArgument(w_26, 0);
                        {
                          ATerm l_27 = NULL;
                          t = not_null(x_26);
                          t = quote_0(t);
                          l_27 = t;
                          t = (ATerm) ATmakeAppl(sym_S_1, not_null(l_27));
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
ATerm TCons_2 (ATerm t, ATerm r_37 (ATerm), ATerm s_37 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_TCons_2))
    {
      k_28 = ATgetArgument(j_28, 0);
      l_28 = ATgetArgument(j_28, 1);
      {
        ATerm o_28 = NULL;
        t = not_null(k_28);
        {
          ATerm q_28 = NULL;
          t = r_37(t);
          o_28 = t;
          t = not_null(l_28);
          t = s_37(t);
          q_28 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_28), not_null(q_28));
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
  ATerm x_28 = NULL;
  x_28 = t;
  t = SSL_exit(not_null(x_28));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  e_29 = t;
  b_29 :
  if(match_cons(e_29, sym_TCons_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      c_29 :
      if(match_cons(g_29, sym_TCons_2))
        {
          h_29 = ATgetArgument(g_29, 0);
          i_29 = ATgetArgument(g_29, 1);
          d_29 :
          if(match_cons(i_29, sym_TNil_0))
            {
              ATerm x_10;
              x_10 = t;
              t = SSL_printnl(not_null(f_29), not_null(h_29));
              t = x_10;
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
ATerm try_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      t = t_57(t);
      PopChoice();
    }
  else
    t = y_10;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm z_10 = t;
      if(PushChoice()==0)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm t_29 = NULL;
            t_29 = t;
            m_29 :
            if(!(match_cons(t_29, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_2);
          PopChoice();
          _fail(t);
        }
      else
        t = z_10;
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
          ATerm u_29 = NULL,v_29 = NULL;
          u_29 = t;
          o_29 :
          if(match_cons(u_29, sym_Runtime_1))
            {
              v_29 = ATgetArgument(u_29, 0);
              if(s_29 != NULL && s_29 != v_29)
                _fail(v_29);
              else
                s_29 = v_29;
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
            ATerm g_32 = NULL,h_32 = NULL;
            g_32 = t;
            q_29 :
            if(match_cons(g_32, sym_Program_1))
              {
                h_32 = ATgetArgument(g_32, 0);
                if(r_29 != NULL && r_29 != h_32)
                  _fail(h_32);
                else
                  r_29 = h_32;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  o_32 = t;
  l_32 :
  if(match_cons(o_32, sym_TCons_2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      m_32 :
      if(match_cons(q_32, sym_TCons_2))
        {
          r_32 = ATgetArgument(q_32, 0);
          s_32 = ATgetArgument(q_32, 1);
          n_32 :
          if(match_cons(s_32, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(p_32), not_null(r_32));
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  a_33 = t;
  x_32 :
  if(match_cons(a_33, sym_TCons_2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      y_32 :
      if(match_cons(c_33, sym_TCons_2))
        {
          d_33 = ATgetArgument(c_33, 0);
          e_33 = ATgetArgument(c_33, 1);
          z_32 :
          if(match_cons(e_33, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(b_33), not_null(d_33));
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
  ATerm m_33 = NULL;
  ATerm e_11;
  e_11 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm f_11 = t;
      if(PushChoice()==0)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm n_33 = NULL,o_33 = NULL;
            n_33 = t;
            j_33 :
            if(match_cons(n_33, sym_Output_1))
              {
                o_33 = ATgetArgument(n_33, 0);
                if(m_33 != NULL && m_33 != o_33)
                  _fail(o_33);
                else
                  m_33 = o_33;
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
          t = f_11;
          {
            ATerm p_33 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            p_33 = t;
            if(m_33 != NULL && m_33 != p_33)
              _fail(p_33);
            else
              m_33 = p_33;
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
  t = e_11;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm t_3 (ATerm t)
        {
          t = not_null(m_33);
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
      ATerm g_11 = t;
      if(PushChoice()==0)
        {
          ATerm w_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              ATerm q_33 = NULL;
              q_33 = t;
              l_33 :
              if(!(match_cons(q_33, sym_Binary_0)))
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
          t = g_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm y_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  ATerm h_11;
  h_11 = t;
  t = dtime_0(t);
  t = h_11;
  t = q_42(t);
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm z_33 = NULL;
      t = dtime_0(t);
      z_33 = t;
      if(y_33 != NULL && y_33 != z_33)
        _fail(z_33);
      else
        y_33 = z_33;
    }
    t = i_11;
    a_34 = t;
    v_33 :
    if(match_cons(a_34, sym_TCons_2))
      {
        b_34 = ATgetArgument(a_34, 0);
        c_34 = ATgetArgument(a_34, 1);
        w_33 :
        if(match_cons(c_34, sym_TCons_2))
          {
            d_34 = ATgetArgument(c_34, 0);
            e_34 = ATgetArgument(c_34, 1);
            x_33 :
            if(match_cons(e_34, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(y_33)), not_null(b_34)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_34 = NULL;
  k_34 = t;
  t = SSL_ReadFromFile(not_null(k_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm r_34 = NULL;
  ATerm t_34 = NULL;
  r_34 = t;
  {
    ATerm c_35 = NULL;
    t = t_44(t);
    t_34 = t;
    t = not_null(r_34);
    t = u_44(t);
    c_35 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_35 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm l_35 = NULL,m_35 = NULL;
          l_35 = t;
          i_35 :
          if(match_cons(l_35, sym_Input_1))
            {
              m_35 = ATgetArgument(l_35, 0);
              if(k_35 != NULL && k_35 != m_35)
                _fail(m_35);
              else
                k_35 = m_35;
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
        t = k_11;
        {
          ATerm n_35 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          n_35 = t;
          if(k_35 != NULL && k_35 != n_35)
            _fail(n_35);
          else
            k_35 = n_35;
        }
      }
  }
  t = j_11;
  {
    ATerm c_4 (ATerm t)
    {
      t = not_null(k_35);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  q_35 :
  if(!(match_cons(r_35, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_34 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym_Undefined_1))
    {
      w_35 = ATgetArgument(v_35, 0);
      {
        ATerm y_35 = NULL;
        t = not_null(w_35);
        t = l_34(t);
        y_35 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  c_36 :
  if(!(match_cons(d_36, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm o_51 (ATerm))
{
  ATerm e_36 (ATerm t)
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, o_51, _id);
        PopChoice();
      }
    else
      {
        t = l_11;
        t = Cons_2(t, _id, e_36);
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_41 (ATerm))
{
  t = fetch_1(t, u_41);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_42 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm m_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = m_11;
        {
          ATerm n_11 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = n_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_4);
  t = p_42(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  ATerm o_11;
  o_11 = t;
  {
    ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
    n_36 = t;
    g_36 :
    if(match_cons(n_36, sym_TCons_2))
      {
        o_36 = ATgetArgument(n_36, 0);
        p_36 = ATgetArgument(n_36, 1);
        h_36 :
        if(match_cons(p_36, sym_TCons_2))
          {
            q_36 = ATgetArgument(p_36, 0);
            r_36 = ATgetArgument(p_36, 1);
            i_36 :
            if(match_cons(r_36, sym_TCons_2))
              {
                s_36 = ATgetArgument(r_36, 0);
                t_36 = ATgetArgument(r_36, 1);
                j_36 :
                if(match_cons(t_36, sym_TNil_0))
                  {
                    if(k_36 != NULL && k_36 != o_36)
                      _fail(o_36);
                    else
                      k_36 = o_36;
                    if(l_36 != NULL && l_36 != q_36)
                      _fail(q_36);
                    else
                      l_36 = q_36;
                    if(m_36 != NULL && m_36 != s_36)
                      _fail(s_36);
                    else
                      m_36 = s_36;
                    t = SSL_table_put(not_null(k_36), not_null(l_36), not_null(m_36));
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
  t = o_11;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_table_create(not_null(w_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  {
    ATerm p_11;
    p_11 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_37), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_11;
  }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  i_37 = t;
  f_37 :
  if(match_cons(i_37, sym_Cons_2))
    {
      j_37 = ATgetArgument(i_37, 0);
      k_37 = ATgetArgument(i_37, 1);
      h_37 :
      if(match_cons(k_37, sym_Cons_2))
        {
          l_37 = ATgetArgument(k_37, 0);
          m_37 = ATgetArgument(k_37, 1);
          {
            ATerm q_37 = NULL;
            t = not_null(j_37);
            t = p_41(t);
            t = not_null(l_37);
            t = q_41(t);
            q_37 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_37), not_null(m_37));
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
  ATerm q_11 = t;
  if(PushChoice()==0)
    {
      ATerm h_4 (ATerm t)
      {
        ATerm u_38 = NULL;
        u_38 = t;
        a_38 :
        if(!(match_string(u_38, "-S")))
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
      t = q_11;
      {
        ATerm r_11 = t;
        if(PushChoice()==0)
          {
            ATerm k_4 (ATerm t)
            {
              ATerm v_38 = NULL;
              v_38 = t;
              b_38 :
              if(!(match_string(v_38, "--silent")))
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
            t = r_11;
            {
              ATerm s_11 = t;
              if(PushChoice()==0)
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm w_38 = NULL;
                    w_38 = t;
                    c_38 :
                    if(!(match_string(w_38, "--verbose")))
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
                  t = s_11;
                  {
                    ATerm t_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_4 (ATerm t)
                        {
                          ATerm x_38 = NULL;
                          x_38 = t;
                          d_38 :
                          if(!(match_string(x_38, "-v")))
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
                        t = t_11;
                        {
                          ATerm u_11 = t;
                          if(PushChoice()==0)
                            {
                              ATerm y_4 (ATerm t)
                              {
                                ATerm y_38 = NULL;
                                y_38 = t;
                                e_38 :
                                if(!(match_string(y_38, "--version")))
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
                              t = u_11;
                              {
                                ATerm v_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm a_5 (ATerm t)
                                    {
                                      ATerm z_38 = NULL;
                                      z_38 = t;
                                      f_38 :
                                      if(!(match_string(z_38, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm a_39 = NULL;
                                      a_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_39));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, a_5, i_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_11;
                                    {
                                      ATerm w_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm j_5 (ATerm t)
                                          {
                                            ATerm c_39 = NULL;
                                            c_39 = t;
                                            h_38 :
                                            if(!(match_string(c_39, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_5 (ATerm t)
                                          {
                                            ATerm d_39 = NULL;
                                            d_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_39));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, j_5, k_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_11;
                                          {
                                            ATerm x_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm m_5 (ATerm t)
                                                {
                                                  ATerm f_39 = NULL;
                                                  f_39 = t;
                                                  j_38 :
                                                  if(!(match_string(f_39, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm n_5 (ATerm t)
                                                {
                                                  ATerm g_39 = NULL;
                                                  g_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_39));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, m_5, n_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_11;
                                                {
                                                  ATerm y_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm o_5 (ATerm t)
                                                      {
                                                        ATerm i_39 = NULL;
                                                        i_39 = t;
                                                        l_38 :
                                                        if(!(match_string(i_39, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm j_39 = NULL;
                                                        j_39 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_39));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, o_5, p_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_11;
                                                      {
                                                        ATerm z_11 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm r_5 (ATerm t)
                                                            {
                                                              ATerm l_39 = NULL;
                                                              l_39 = t;
                                                              n_38 :
                                                              if(!(match_string(l_39, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm t_5 (ATerm t)
                                                            {
                                                              ATerm m_39 = NULL;
                                                              m_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_39));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, r_5, t_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                            {
                                                              ATerm a_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm u_5 (ATerm t)
                                                                  {
                                                                    ATerm o_39 = NULL;
                                                                    o_39 = t;
                                                                    p_38 :
                                                                    if(!(match_string(o_39, "-b")))
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
                                                                  t = a_12;
                                                                  {
                                                                    ATerm e_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm w_5 (ATerm t)
                                                                        {
                                                                          ATerm p_39 = NULL;
                                                                          p_39 = t;
                                                                          q_38 :
                                                                          if(!(match_string(p_39, "-s")))
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
                                                                        t = e_12;
                                                                        {
                                                                          ATerm g_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm y_5 (ATerm t)
                                                                              {
                                                                                ATerm q_39 = NULL;
                                                                                q_39 = t;
                                                                                r_38 :
                                                                                if(!(match_string(q_39, "--help")))
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
                                                                              t = g_12;
                                                                              {
                                                                                ATerm h_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm a_6 (ATerm t)
                                                                                    {
                                                                                      ATerm r_39 = NULL;
                                                                                      r_39 = t;
                                                                                      s_38 :
                                                                                      if(!(match_string(r_39, "-h")))
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
                                                                                    t = h_12;
                                                                                    {
                                                                                      ATerm c_6 (ATerm t)
                                                                                      {
                                                                                        ATerm s_39 = NULL;
                                                                                        s_39 = t;
                                                                                        t_38 :
                                                                                        if(!(match_string(s_39, "-?")))
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
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Cons_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_40)), not_null(c_40));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_37 (ATerm), ATerm w_37 (ATerm))
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_Cons_2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        ATerm p_40 = NULL;
        t = not_null(l_40);
        {
          ATerm r_40 = NULL;
          t = v_37(t);
          p_40 = t;
          t = not_null(m_40);
          t = w_37(t);
          r_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_40), not_null(r_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  w_40 :
  if(!(match_cons(x_40, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_41 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm z_40 = NULL;
    z_40 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_40));
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm i_12 = t;
    if(PushChoice()==0)
      {
        ATerm j_12 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = j_12;
            t = l_41(t);
            t = Cons_2(t, _id, i_6);
          }
        PopChoice();
      }
    else
      {
        t = i_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, e_6, i_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        t = f_42(t);
        PopChoice();
      }
    else
      {
        t = k_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_6);
  t = store_options_0(t);
  {
    ATerm l_12 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_42);
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          ATerm m_12 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, e_42);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = m_12;
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
    ATerm m_6 (ATerm t)
    {
      t = TCons_2(t, ppgenerate_0, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_6);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm e_41 = NULL;
      e_41 = t;
      d_41 :
      if(!(match_string(e_41, "-v")))
        _fail(t);
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Verbose_0);
      return(t);
    }
    t = Option_2(t, e_7, f_7);
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

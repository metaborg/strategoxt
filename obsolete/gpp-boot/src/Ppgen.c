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
ATerm obsolete_1 (ATerm, ATerm h_42 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm Option_2 (ATerm, ATerm o_40 (ATerm), ATerm p_40 (ATerm));
ATerm TNil_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_52 (ATerm));
ATerm concat_0 (ATerm);
ATerm filter_1 (ATerm, ATerm j_44 (ATerm));
ATerm debug_1 (ATerm, ATerm a_42 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm n_41 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm k_36 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm b_57 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm f_34 (ATerm));
ATerm iter_1 (ATerm, ATerm e_34 (ATerm));
ATerm pair_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_55 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm c_34 (ATerm), ATerm d_34 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm a_34 (ATerm), ATerm b_34 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm z_33 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm e_57 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm a_57 (ATerm));
ATerm oncetd_1 (ATerm, ATerm h_54 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm map_1 (ATerm, ATerm b_50 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm a_51 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_50 (ATerm));
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm));
ATerm crush_3 (ATerm, ATerm w_46 (ATerm), ATerm x_46 (ATerm), ATerm y_46 (ATerm));
ATerm collect_p__1 (ATerm, ATerm c_37 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm v_36 (ATerm), ATerm w_36 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_56 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_41 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_33 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm k_50 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_40 (ATerm));
ATerm need_help_1 (ATerm, ATerm q_41 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_36 (ATerm), ATerm a_37 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_40 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_41 (ATerm), ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm Ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm h_42 (ATerm))
{
  ATerm u_2;
  u_2 = t;
  t = h_42(t);
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, a_0);
  }
  t = u_2;
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
ATerm Option_2 (ATerm t, ATerm o_40 (ATerm), ATerm p_40 (ATerm))
{
  ATerm g_1 = NULL,h_1 = NULL,o_1 = NULL;
  g_1 = t;
  d_1 :
  if(match_cons(g_1, sym_Cons_2))
    {
      h_1 = ATgetArgument(g_1, 0);
      o_1 = ATgetArgument(g_1, 1);
      {
        ATerm y_1 = NULL;
        t = not_null(h_1);
        t = o_40(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = p_40(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_1), not_null(o_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  c_2 :
  if(!(match_cons(d_2, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm j_2 = NULL;
  j_2 = t;
  t = SSL_int_to_string(not_null(j_2));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_52 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    t = r_52(t);
    t = _all(t, m_2);
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  o_2 :
  if(!(match_cons(p_2, sym_Nil_0)))
    {
      if(match_cons(p_2, sym_Cons_2))
        {
          q_2 = ATgetArgument(p_2, 0);
          r_2 = ATgetArgument(p_2, 1);
          t = not_null(q_2);
          {
            ATerm c_0 (ATerm t)
            {
              t = not_null(r_2);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, c_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm l_6 = t;
    if(PushChoice()==0)
      {
        ATerm x_2 = NULL;
        x_2 = t;
        w_2 :
        if(!(match_cons(x_2, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = l_6;
        {
          ATerm d_7 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, j_44, y_2);
              PopChoice();
            }
          else
            {
              t = d_7;
              t = Tl_0(t);
              t = y_2(t);
            }
        }
      }
    return(t);
  }
  t = y_2(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_42 (ATerm))
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm d_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm e_0 (ATerm t)
    {
      ATerm b_3 = NULL;
      ATerm d_3 = NULL;
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = a_42(t);
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, d_0, e_0);
    t = printnl_0(t);
  }
  t = e_7;
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  j_3 :
  if(match_cons(m_3, sym_TCons_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      k_3 :
      if(match_cons(o_3, sym_TCons_2))
        {
          p_3 = ATgetArgument(o_3, 0);
          q_3 = ATgetArgument(o_3, 1);
          l_3 :
          if(match_cons(q_3, sym_TNil_0))
            {
              t = not_null(p_3);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm t_3 = NULL;
                  t_3 = t;
                  if(n_3 != NULL && n_3 != t_3)
                    _fail(t_3);
                  else
                    n_3 = t_3;
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
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  a_4 = t;
  x_3 :
  if(match_cons(a_4, sym_TCons_2))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      y_3 :
      if(match_cons(c_4, sym_TCons_2))
        {
          d_4 = ATgetArgument(c_4, 0);
          e_4 = ATgetArgument(c_4, 1);
          z_3 :
          if(match_cons(e_4, sym_TNil_0))
            t = SSL_table_get(not_null(b_4), not_null(d_4));
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
  ATerm k_4 = NULL;
  ATerm m_4 = NULL;
  k_4 = t;
  {
    ATerm n_4 = NULL;
    t = get_options_0(t);
    n_4 = t;
    if(m_4 != NULL && m_4 != n_4)
      _fail(n_4);
    else
      m_4 = n_4;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm n_41 (ATerm))
{
  ATerm f_7;
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = n_41(t);
  t = check_option_0(t);
  t = f_7;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_7 = t;
  if(PushChoice()==0)
    {
      ATerm r_4 = NULL;
      r_4 = t;
      q_4 :
      if(!(match_cons(r_4, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = g_7;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm g_0 (ATerm t)
  {
    ATerm h_7 = t;
    if(PushChoice()==0)
      {
        ATerm t_4 = NULL;
        t_4 = t;
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
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_4), (ATerm) ATmakeAppl(sym_Nil_0));
        }
        PopChoice();
      }
    else
      t = h_7;
    return(t);
  }
  t = map_1(t, g_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm k_36 (ATerm))
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Arg_1))
    {
      a_5 = ATgetArgument(z_4, 0);
      {
        ATerm c_5 = NULL;
        t = not_null(a_5);
        t = k_36(t);
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_5));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  k_5 = t;
  h_5 :
  if(match_cons(k_5, sym_TCons_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      i_5 :
      if(match_cons(m_5, sym_TCons_2))
        {
          n_5 = ATgetArgument(m_5, 0);
          o_5 = ATgetArgument(m_5, 1);
          j_5 :
          if(match_cons(o_5, sym_TNil_0))
            t = SSL_mkterm(not_null(l_5), not_null(n_5));
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  ATerm n_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_6), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  a_6 = t;
  w_5 :
  if(match_cons(a_6, sym_alt_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      x_5 :
      if(match_cons(c_6, sym_alt_2))
        {
          y_5 = ATgetArgument(c_6, 0);
          z_5 = ATgetArgument(c_6, 1);
          {
            ATerm r_8 = t;
            if(PushChoice()==0)
              {
                ATerm g_6 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(y_5), not_null(z_5));
                t = flat_alt_0(t);
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_6), not_null(g_6));
                PopChoice();
              }
            else
              {
                t = r_8;
                t = n_6(t);
              }
          }
        }
      else
        t = n_6(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  ATerm h_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = b_57(t);
    return(t);
  }
  t = split_2(t, h_0, _id);
  {
    ATerm k_10 (ATerm t)
    {
      ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
      ATerm m_10 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm n_10 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm o_10 (ATerm t)
      {
        ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
        if(e_8 != NULL && e_8 != n_8)
          _fail(n_8);
        else
          e_8 = n_8;
        if(f_8 != NULL && f_8 != q_8)
          _fail(q_8);
        else
          f_8 = q_8;
        if(g_8 != NULL && g_8 != z_8)
          _fail(z_8);
        else
          g_8 = z_8;
        if(e_9 != NULL && e_9 != h_8)
          _fail(h_8);
        else
          e_9 = h_8;
        if(f_9 != NULL && f_9 != j_8)
          _fail(j_8);
        else
          f_9 = j_8;
        if(g_9 != NULL && g_9 != k_8)
          _fail(k_8);
        else
          g_9 = k_8;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(e_9), (ATerm) ATmakeAppl(sym_alt_2, not_null(f_9), not_null(g_9)));
        {
          ATerm j_9 = NULL;
          t = flat_alt_0(t);
          h_9 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_9), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(e_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_8), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = k_10(t);
          {
            ATerm i_0 (ATerm t)
            {
              ATerm j_0 (ATerm t)
              {
                ATerm s_8 = t;
                if(PushChoice()==0)
                  {
                    t = Arg_1(t, _id);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                    PopChoice();
                  }
                else
                  t = s_8;
                return(t);
              }
              t = topdown_1(t, j_0);
              return(t);
            }
            t = Cons_2(t, i_0, _id);
          }
        }
        return(t);
      }
      ATerm p_10 (ATerm t)
      {
        ATerm p_9 = NULL,q_9 = NULL,y_9 = NULL;
        ATerm r_9 = NULL;
        ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
        t = not_null(b_9);
        r_9 = t;
        t = SSL_explode_term(not_null(r_9));
        t_9 = t;
        y_6 :
        if(match_cons(t_9, sym_TCons_2))
          {
            u_9 = ATgetArgument(t_9, 0);
            v_9 = ATgetArgument(t_9, 1);
            z_6 :
            if(match_cons(v_9, sym_TCons_2))
              {
                w_9 = ATgetArgument(v_9, 0);
                x_9 = ATgetArgument(v_9, 1);
                a_7 :
                if(match_cons(x_9, sym_TNil_0))
                  {
                    if(p_9 != NULL && p_9 != u_9)
                      _fail(u_9);
                    else
                      p_9 = u_9;
                    if(q_9 != NULL && q_9 != w_9)
                      _fail(w_9);
                    else
                      q_9 = w_9;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_8), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(z_8), not_null(p_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm b_10 = NULL,i_10 = NULL;
          t = conc_0(t);
          y_9 = t;
          t = not_null(q_9);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm t_8;
            t_8 = t;
            {
              ATerm c_10 = NULL;
              t = make_0(t);
              c_10 = t;
              if(b_10 != NULL && b_10 != c_10)
                _fail(c_10);
              else
                b_10 = c_10;
            }
            t = t_8;
            {
              ATerm k_0 (ATerm t)
              {
                ATerm d_10 = NULL;
                ATerm f_10 = NULL;
                d_10 = t;
                {
                  ATerm g_10 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(n_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_9), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_10), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = k_10(t);
                  g_10 = t;
                  if(f_10 != NULL && f_10 != g_10)
                    _fail(g_10);
                  else
                    f_10 = g_10;
                  t = not_null(f_10);
                }
                return(t);
              }
              t = map_1(t, k_0);
              t = concat_0(t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(n_8), not_null(y_9)), not_null(b_10)), not_null(i_10));
            }
          }
        }
        return(t);
      }
      l_8 = t;
      i_7 :
      if(match_cons(l_8, sym_TCons_2))
        {
          m_8 = ATgetArgument(l_8, 0);
          x_8 = ATgetArgument(l_8, 1);
          j_7 :
          if(match_cons(x_8, sym_TCons_2))
            {
              y_8 = ATgetArgument(x_8, 0);
              d_9 = ATgetArgument(x_8, 1);
              k_7 :
              if(match_cons(y_8, sym_lit_1))
                {
                  z_8 = ATgetArgument(y_8, 0);
                  l_7 :
                  if(match_cons(d_9, sym_TNil_0))
                    {
                      m_7 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_8, sym_TCons_2))
                    {
                      z_8 = ATgetArgument(y_8, 0);
                      a_9 = ATgetArgument(y_8, 1);
                      n_7 :
                      if(match_cons(a_9, sym_TCons_2))
                        {
                          b_9 = ATgetArgument(a_9, 0);
                          c_9 = ATgetArgument(a_9, 1);
                          o_7 :
                          if(match_cons(c_9, sym_TNil_0))
                            {
                              p_7 :
                              if(match_cons(d_9, sym_TNil_0))
                                {
                                  q_7 :
                                  if(match_cons(b_9, sym_sort_1))
                                    {
                                      h_8 = ATgetArgument(b_9, 0);
                                      r_7 :
                                      if(match_cons(m_8, sym_TCons_2))
                                        {
                                          n_8 = ATgetArgument(m_8, 0);
                                          o_8 = ATgetArgument(m_8, 1);
                                          s_7 :
                                          if(match_cons(o_8, sym_TCons_2))
                                            {
                                              q_8 = ATgetArgument(o_8, 0);
                                              w_8 = ATgetArgument(o_8, 1);
                                              t_7 :
                                              if(match_cons(w_8, sym_TNil_0))
                                                {
                                                  ATerm u_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = m_10(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = u_8;
                                                      t = p_10(t);
                                                    }
                                                }
                                              else
                                                t = m_10(t);
                                            }
                                          else
                                            t = m_10(t);
                                        }
                                      else
                                        t = m_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_9, sym_char_class_1))
                                        {
                                          h_8 = ATgetArgument(b_9, 0);
                                          u_7 :
                                          if(match_cons(m_8, sym_TCons_2))
                                            {
                                              n_8 = ATgetArgument(m_8, 0);
                                              o_8 = ATgetArgument(m_8, 1);
                                              v_7 :
                                              if(match_cons(o_8, sym_TCons_2))
                                                {
                                                  q_8 = ATgetArgument(o_8, 0);
                                                  w_8 = ATgetArgument(o_8, 1);
                                                  w_7 :
                                                  if(match_cons(w_8, sym_TNil_0))
                                                    {
                                                      ATerm v_8 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = n_10(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = v_8;
                                                          t = p_10(t);
                                                        }
                                                    }
                                                  else
                                                    t = n_10(t);
                                                }
                                              else
                                                t = n_10(t);
                                            }
                                          else
                                            t = n_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(b_9, sym_alt_2))
                                            {
                                              h_8 = ATgetArgument(b_9, 0);
                                              i_8 = ATgetArgument(b_9, 1);
                                              x_7 :
                                              if(match_cons(m_8, sym_TCons_2))
                                                {
                                                  n_8 = ATgetArgument(m_8, 0);
                                                  o_8 = ATgetArgument(m_8, 1);
                                                  y_7 :
                                                  if(match_cons(o_8, sym_TCons_2))
                                                    {
                                                      q_8 = ATgetArgument(o_8, 0);
                                                      w_8 = ATgetArgument(o_8, 1);
                                                      z_7 :
                                                      if(match_cons(w_8, sym_TNil_0))
                                                        {
                                                          a_8 :
                                                          if(match_cons(i_8, sym_alt_2))
                                                            {
                                                              j_8 = ATgetArgument(i_8, 0);
                                                              k_8 = ATgetArgument(i_8, 1);
                                                              {
                                                                ATerm i_9 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = o_10(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_9;
                                                                    t = p_10(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = p_10(t);
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
                                              b_8 :
                                              if(match_cons(m_8, sym_TCons_2))
                                                {
                                                  n_8 = ATgetArgument(m_8, 0);
                                                  o_8 = ATgetArgument(m_8, 1);
                                                  c_8 :
                                                  if(match_cons(o_8, sym_TCons_2))
                                                    {
                                                      q_8 = ATgetArgument(o_8, 0);
                                                      w_8 = ATgetArgument(o_8, 1);
                                                      d_8 :
                                                      if(match_cons(w_8, sym_TNil_0))
                                                        t = p_10(t);
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
    t = k_10(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  g_12 = t;
  y_11 :
  if(match_cons(g_12, sym_TCons_2))
    {
      h_12 = ATgetArgument(g_12, 0);
      b_12 = ATgetArgument(g_12, 1);
      z_11 :
      if(match_cons(b_12, sym_TCons_2))
        {
          c_12 = ATgetArgument(b_12, 0);
          f_12 = ATgetArgument(b_12, 1);
          a_12 :
          if(match_cons(f_12, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(h_12));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(g_12, sym_lit_1))
        {
          h_12 = ATgetArgument(g_12, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(h_12)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm f_34 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_iter_star_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm y_12 = NULL;
        t = not_null(w_12);
        t = f_34(t);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(y_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm e_34 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_iter_1))
    {
      g_13 = ATgetArgument(f_13, 0);
      {
        ATerm k_13 = NULL;
        t = not_null(g_13);
        t = e_34(t);
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, not_null(k_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  s_13 = t;
  q_13 :
  if(!(match_cons(s_13, sym_Nil_0)))
    {
      if(match_cons(s_13, sym_Cons_2))
        {
          t_13 = ATgetArgument(s_13, 0);
          u_13 = ATgetArgument(s_13, 1);
          r_13 :
          if(match_cons(u_13, sym_Cons_2))
            {
              v_13 = ATgetArgument(u_13, 0);
              w_13 = ATgetArgument(u_13, 1);
              {
                ATerm a_14 = NULL;
                t = not_null(w_13);
                t = pair_0(t);
                a_14 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(a_14));
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
ATerm RevExit_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  k_14 = t;
  g_14 :
  if(match_cons(k_14, sym_TCons_2))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      h_14 :
      if(match_cons(l_14, sym_Nil_0))
        {
          i_14 :
          if(match_cons(m_14, sym_TCons_2))
            {
              n_14 = ATgetArgument(m_14, 0);
              o_14 = ATgetArgument(m_14, 1);
              j_14 :
              if(match_cons(o_14, sym_TNil_0))
                t = not_null(n_14);
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
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  x_14 = t;
  t_14 :
  if(match_cons(x_14, sym_TCons_2))
    {
      y_14 = ATgetArgument(x_14, 0);
      d_15 = ATgetArgument(x_14, 1);
      u_14 :
      if(match_cons(y_14, sym_Cons_2))
        {
          z_14 = ATgetArgument(y_14, 0);
          a_15 = ATgetArgument(y_14, 1);
          v_14 :
          if(match_cons(d_15, sym_TCons_2))
            {
              e_15 = ATgetArgument(d_15, 0);
              f_15 = ATgetArgument(d_15, 1);
              w_14 :
              if(match_cons(f_15, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_15), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_14), not_null(e_15)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm k_15 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = s_55(t);
        t = k_15(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = t_55(t);
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_55 (ATerm))
{
  t = repeat_2(t, v_55, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm c_34 (ATerm), ATerm d_34 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_iter_star_sep_2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      {
        ATerm a_16 = NULL;
        t = not_null(w_15);
        {
          ATerm c_16 = NULL;
          t = c_34(t);
          a_16 = t;
          t = not_null(x_15);
          t = d_34(t);
          c_16 = t;
          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(a_16), not_null(c_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm a_34 (ATerm), ATerm b_34 (ATerm))
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_iter_sep_2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      {
        ATerm q_16 = NULL;
        t = not_null(m_16);
        {
          ATerm s_16 = NULL;
          t = a_34(t);
          q_16 = t;
          t = not_null(n_16);
          t = b_34(t);
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(q_16), not_null(s_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
      t = reverse_0(t);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm n_0 (ATerm t)
          {
            ATerm o_0 (ATerm t)
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
                    ATerm n_9 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = n_9;
                        {
                          ATerm o_9 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = o_9;
                              t = iter_star_sep_2(t, _id, _id);
                            }
                        }
                      }
                  }
                }
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              ATerm p_17 = NULL;
              p_17 = t;
              x_16 :
              if(!(match_cons(p_17, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, o_0, p_0);
            return(t);
          }
          t = TCons_2(t, _id, n_0);
          t = Make_0(t);
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          ATerm q_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, l_0, m_0);
        q_17 = t;
        b_17 :
        if(match_cons(q_17, sym_Cons_2))
          {
            r_17 = ATgetArgument(q_17, 0);
            s_17 = ATgetArgument(q_17, 1);
            {
              ATerm u_17 = NULL;
              if(l_17 != NULL && l_17 != r_17)
                _fail(r_17);
              else
                l_17 = r_17;
              if(k_17 != NULL && k_17 != s_17)
                _fail(s_17);
              else
                k_17 = s_17;
              {
                ATerm s_9 = t;
                if(PushChoice()==0)
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm t_17 = NULL;
                      t_17 = t;
                      z_16 :
                      if(!(match_cons(t_17, sym_Nil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2(t, _id, r_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = s_9;
                t = not_null(k_17);
                t = reverse_0(t);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(u_17)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_Nil_0))));
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
      t = l_9;
      {
        ATerm z_9 = t;
        if(PushChoice()==0)
          {
            ATerm f_18 = NULL;
            t = reverse_0(t);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm w_17 = NULL;
                t = Make_0(t);
                w_17 = t;
                if(o_17 != NULL && o_17 != w_17)
                  _fail(w_17);
                else
                  o_17 = w_17;
                return(t);
              }
              ATerm t_0 (ATerm t)
              {
                ATerm y_17 = NULL;
                ATerm a_10 = t;
                if(PushChoice()==0)
                  {
                    ATerm x_17 = NULL;
                    x_17 = t;
                    d_17 :
                    if(!(match_cons(x_17, sym_Nil_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = a_10;
                t = reverse_0(t);
                y_17 = t;
                if(m_17 != NULL && m_17 != y_17)
                  _fail(y_17);
                else
                  m_17 = y_17;
                return(t);
              }
              t = Cons_2(t, s_0, t_0);
              t = not_null(m_17);
              t = pair_0(t);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm z_17 = NULL,a_18 = NULL;
                  ATerm v_0 (ATerm t)
                  {
                    ATerm b_18 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    b_18 = t;
                    if(z_17 != NULL && z_17 != b_18)
                      _fail(b_18);
                    else
                      z_17 = b_18;
                    return(t);
                  }
                  ATerm w_0 (ATerm t)
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm d_18 = NULL;
                      ATerm z_0 (ATerm t)
                      {
                        ATerm a_1 (ATerm t)
                        {
                          ATerm e_10 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = e_10;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        ATerm b_1 (ATerm t)
                        {
                          ATerm c_18 = NULL;
                          c_18 = t;
                          g_17 :
                          if(!(match_cons(c_18, sym_TNil_0)))
                            _fail(t);
                          return(t);
                        }
                        t = TCons_2(t, a_1, b_1);
                        return(t);
                      }
                      t = TCons_2(t, _id, z_0);
                      t = Make_0(t);
                      d_18 = t;
                      if(a_18 != NULL && a_18 != d_18)
                        _fail(d_18);
                      else
                        a_18 = d_18;
                      return(t);
                    }
                    ATerm y_0 (ATerm t)
                    {
                      ATerm e_18 = NULL;
                      e_18 = t;
                      i_17 :
                      if(!(match_cons(e_18, sym_TNil_0)))
                        _fail(t);
                      return(t);
                    }
                    t = TCons_2(t, x_0, y_0);
                    return(t);
                  }
                  t = TCons_2(t, v_0, w_0);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_17), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_18), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, u_0);
                f_18 = t;
                if(n_17 != NULL && n_17 != f_18)
                  _fail(f_18);
                else
                  n_17 = f_18;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_17), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = z_9;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm z_33 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_lit_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm t_18 = NULL;
        t = not_null(r_18);
        t = z_33(t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(t_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm h_10 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = h_10;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  b_19 = t;
  y_18 :
  if(match_cons(b_19, sym_TCons_2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      z_18 :
      if(match_cons(d_19, sym_TCons_2))
        {
          e_19 = ATgetArgument(d_19, 0);
          f_19 = ATgetArgument(d_19, 1);
          a_19 :
          if(match_cons(f_19, sym_TNil_0))
            {
              ATerm j_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(c_19), not_null(e_19));
                  PopChoice();
                }
              else
                {
                  t = j_10;
                  t = SSL_addr(not_null(c_19), not_null(e_19));
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
ATerm number_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, c_1, _id);
  {
    ATerm p_20 (ATerm t)
    {
      ATerm v_19 = NULL,w_19 = NULL,y_19 = NULL;
      ATerm l_10 = t;
      if(PushChoice()==0)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm a_20 = NULL;
              a_20 = t;
              j_19 :
              if(!(match_cons(a_20, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm b_20 = NULL;
              b_20 = t;
              k_19 :
              if(!(match_cons(b_20, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, f_1, i_1);
            return(t);
          }
          t = TCons_2(t, _id, e_1);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
          PopChoice();
        }
      else
        {
          t = l_10;
          {
            ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
            c_20 = t;
            q_19 :
            if(match_cons(c_20, sym_TCons_2))
              {
                d_20 = ATgetArgument(c_20, 0);
                e_20 = ATgetArgument(c_20, 1);
                s_19 :
                if(match_cons(e_20, sym_TCons_2))
                  {
                    f_20 = ATgetArgument(e_20, 0);
                    i_20 = ATgetArgument(e_20, 1);
                    t_19 :
                    if(match_cons(f_20, sym_Cons_2))
                      {
                        g_20 = ATgetArgument(f_20, 0);
                        h_20 = ATgetArgument(f_20, 1);
                        u_19 :
                        if(match_cons(i_20, sym_TNil_0))
                          {
                            ATerm q_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm j_20 = NULL;
                                if(v_19 != NULL && v_19 != d_20)
                                  _fail(d_20);
                                else
                                  v_19 = d_20;
                                if(w_19 != NULL && w_19 != g_20)
                                  _fail(g_20);
                                else
                                  w_19 = g_20;
                                if(y_19 != NULL && y_19 != h_20)
                                  _fail(h_20);
                                else
                                  y_19 = h_20;
                                t = not_null(w_19);
                                t = e_57(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm l_20 = NULL;
                                  t = add_0(t);
                                  j_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = p_20(t);
                                  l_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(l_20));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = q_10;
                                {
                                  ATerm n_20 = NULL;
                                  if(v_19 != NULL && v_19 != d_20)
                                    _fail(d_20);
                                  else
                                    v_19 = d_20;
                                  if(w_19 != NULL && w_19 != g_20)
                                    _fail(g_20);
                                  else
                                    w_19 = g_20;
                                  if(y_19 != NULL && y_19 != h_20)
                                    _fail(h_20);
                                  else
                                    y_19 = h_20;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = p_20(t);
                                  n_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_19), not_null(n_20));
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
    t = p_20(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
        z_20 = t;
        y_20 :
        if(match_cons(z_20, sym_label_2))
          {
            a_21 = ATgetArgument(z_20, 0);
            b_21 = ATgetArgument(z_20, 1);
            t = not_null(b_21);
          }
        else
          _fail(t);
        PopChoice();
      }
    else
      t = r_10;
    return(t);
  }
  t = map_1(t, j_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm j_21 = NULL,l_21 = NULL,p_21 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm k_21 = NULL;
      t = make_0(t);
      k_21 = t;
      if(j_21 != NULL && j_21 != k_21)
        _fail(k_21);
      else
        j_21 = k_21;
    }
    t = s_10;
    {
      ATerm o_21 = NULL;
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm m_21 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = a_57(t);
          m_21 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, l_1);
        return(t);
      }
      t = map_1(t, k_1);
      t = concat_0(t);
      o_21 = t;
      if(l_21 != NULL && l_21 != o_21)
        _fail(o_21);
      else
        l_21 = o_21;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = a_57(t);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(p_21)), not_null(j_21)), not_null(l_21));
    }
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm v_21 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = h_54(t);
        PopChoice();
      }
    else
      {
        t = t_10;
        t = _one(t, v_21);
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  ATerm u_10 = t;
  if(PushChoice()==0)
    {
      ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
      h_22 = t;
      b_22 :
      if(match_cons(h_22, sym_prod_3))
        {
          i_22 = ATgetArgument(h_22, 0);
          j_22 = ATgetArgument(h_22, 1);
          k_22 = ATgetArgument(h_22, 2);
          if(e_22 != NULL && e_22 != i_22)
            _fail(i_22);
          else
            e_22 = i_22;
          if(f_22 != NULL && f_22 != j_22)
            _fail(j_22);
          else
            f_22 = j_22;
          if(g_22 != NULL && g_22 != k_22)
            _fail(k_22);
          else
            g_22 = k_22;
          t = not_null(g_22);
          {
            ATerm m_1 (ATerm t)
            {
              ATerm m_22 = NULL,n_22 = NULL;
              m_22 = t;
              z_21 :
              if(match_cons(m_22, sym_cons_1))
                {
                  n_22 = ATgetArgument(m_22, 0);
                  if(c_22 != NULL && c_22 != n_22)
                    _fail(n_22);
                  else
                    c_22 = n_22;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, m_1);
          }
          t = not_null(e_22);
          {
            ATerm n_1 (ATerm t)
            {
              t = not_null(c_22);
              return(t);
            }
            t = symbols2pp_entries_1(t, n_1);
          }
        }
      else
        {
          if(match_cons(h_22, sym_prod_fun_4))
            {
              i_22 = ATgetArgument(h_22, 0);
              j_22 = ATgetArgument(h_22, 1);
              k_22 = ATgetArgument(h_22, 2);
              l_22 = ATgetArgument(h_22, 3);
              {
                ATerm o_22 = NULL;
                if(d_22 != NULL && d_22 != i_22)
                  _fail(i_22);
                else
                  d_22 = i_22;
                if(e_22 != NULL && e_22 != j_22)
                  _fail(j_22);
                else
                  e_22 = j_22;
                if(f_22 != NULL && f_22 != k_22)
                  _fail(k_22);
                else
                  f_22 = k_22;
                if(g_22 != NULL && g_22 != l_22)
                  _fail(l_22);
                else
                  g_22 = l_22;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(d_22)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                o_22 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(o_22), not_null(f_22), not_null(g_22));
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
      t = u_10;
      {
        ATerm v_10 = t;
        if(PushChoice()==0)
          {
            ATerm w_10 = t;
            if(PushChoice()==0)
              {
                ATerm p_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Silent_0);
                  return(t);
                }
                t = has_option_1(t, p_1);
                PopChoice();
                _fail(t);
              }
            else
              t = w_10;
            {
              ATerm q_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, q_1);
            }
            PopChoice();
          }
        else
          t = v_10;
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_50 (ATerm))
{
  ATerm x_22 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        ATerm w_22 = NULL;
        w_22 = t;
        v_22 :
        if(!(match_cons(w_22, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = Cons_2(t, b_50, x_22);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  t = SSL_implode_string(not_null(z_22));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm e_23 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        ATerm r_1 (ATerm t)
        {
          ATerm d_23 = NULL;
          d_23 = t;
          c_23 :
          if(!(match_cons(d_23, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, _id, r_1);
        t = a_51(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = Cons_2(t, _id, e_23);
      }
    return(t);
  }
  t = e_23(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_Cons_2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      t = not_null(j_23);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_Cons_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      t = not_null(q_23);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_explode_string(not_null(w_23));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm z_10;
    z_10 = t;
    {
      ATerm e_24 = NULL;
      t = Hd_0(t);
      e_24 = t;
      z_23 :
      if(!(match_int(e_24, 34)))
        _fail(t);
    }
    t = z_10;
    t = Tl_0(t);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
        f_24 = t;
        b_24 :
        if(match_cons(f_24, sym_Cons_2))
          {
            g_24 = ATgetArgument(f_24, 0);
            h_24 = ATgetArgument(f_24, 1);
            c_24 :
            if(match_int(g_24, 34))
              {
                d_24 :
                if(match_cons(h_24, sym_Nil_0))
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
      t = at_last_1(t, s_1);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm m_24 (ATerm t)
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, m_24);
        PopChoice();
      }
    else
      {
        t = a_11;
        {
          ATerm l_24 = NULL;
          l_24 = t;
          k_24 :
          if(match_cons(l_24, sym_Nil_0))
            t = q_50(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  s_24 = t;
  p_24 :
  if(match_cons(s_24, sym_TCons_2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      q_24 :
      if(match_cons(u_24, sym_TCons_2))
        {
          v_24 = ATgetArgument(u_24, 0);
          w_24 = ATgetArgument(u_24, 1);
          r_24 :
          if(match_cons(w_24, sym_TNil_0))
            {
              t = not_null(t_24);
              {
                ATerm t_1 (ATerm t)
                {
                  t = not_null(v_24);
                  return(t);
                }
                t = at_end_1(t, t_1);
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
ATerm foldr_3 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm))
{
  ATerm o_25 (ATerm t)
  {
    ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
    f_25 = t;
    e_25 :
    if(match_cons(f_25, sym_Nil_0))
      t = f_45(t);
    else
      {
        if(match_cons(f_25, sym_Cons_2))
          {
            g_25 = ATgetArgument(f_25, 0);
            h_25 = ATgetArgument(f_25, 1);
            {
              ATerm k_25 = NULL;
              t = not_null(g_25);
              {
                ATerm m_25 = NULL;
                t = h_45(t);
                k_25 = t;
                t = not_null(h_25);
                t = o_25(t);
                m_25 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = g_45(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = o_25(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm w_46 (ATerm), ATerm x_46 (ATerm), ATerm y_46 (ATerm))
{
  ATerm z_25 = NULL;
  ATerm f_26 = NULL;
  z_25 = t;
  {
    ATerm g_26 = NULL;
    ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
    t = not_null(z_25);
    g_26 = t;
    t = SSL_explode_term(not_null(g_26));
    i_26 = t;
    w_25 :
    if(match_cons(i_26, sym_TCons_2))
      {
        j_26 = ATgetArgument(i_26, 0);
        k_26 = ATgetArgument(i_26, 1);
        x_25 :
        if(match_cons(k_26, sym_TCons_2))
          {
            l_26 = ATgetArgument(k_26, 0);
            m_26 = ATgetArgument(k_26, 1);
            y_25 :
            if(match_cons(m_26, sym_TNil_0))
              {
                if(f_26 != NULL && f_26 != l_26)
                  _fail(l_26);
                else
                  f_26 = l_26;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(f_26);
    t = foldr_3(t, w_46, x_46, y_46);
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm c_37 (ATerm))
{
  ATerm c_27 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        ATerm w_26 = NULL;
        t = c_37(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_26), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = b_11;
        {
          ATerm u_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, u_1, conc_0, c_27);
        }
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm m_28 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm w_27 = NULL,x_27 = NULL;
    w_27 = t;
    f_27 :
    if(match_cons(w_27, sym_context_free_syntax_1))
      {
        x_27 = ATgetArgument(w_27, 0);
        t = not_null(x_27);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_p__1(t, v_1);
  t = concat_0(t);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm c_11 = t;
      if(PushChoice()==0)
        {
          ATerm z_27 = NULL,b_28 = NULL;
          z_27 = t;
          m_27 :
          if(match_cons(z_27, sym_cons_1))
            {
              b_28 = ATgetArgument(z_27, 0);
              {
                ATerm d_28 = NULL;
                t = not_null(b_28);
                t = de_quote_0(t);
                d_28 = t;
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(d_28));
              }
            }
          else
            {
              if(match_cons(z_27, sym_lit_1))
                {
                  b_28 = ATgetArgument(z_27, 0);
                  {
                    ATerm g_28 = NULL;
                    t = not_null(b_28);
                    t = de_quote_0(t);
                    g_28 = t;
                    t = (ATerm) ATmakeAppl(sym_lit_1, not_null(g_28));
                  }
                }
              else
                {
                  if(match_cons(z_27, sym_sort_1))
                    {
                      b_28 = ATgetArgument(z_27, 0);
                      {
                        ATerm j_28 = NULL;
                        t = not_null(b_28);
                        t = de_quote_0(t);
                        j_28 = t;
                        t = (ATerm) ATmakeAppl(sym_sort_1, not_null(j_28));
                      }
                    }
                  else
                    _fail(t);
                }
            }
          PopChoice();
        }
      else
        t = c_11;
      return(t);
    }
    t = topdown_1(t, w_1);
    t = map_1(t, generate_pp_entries_0);
    {
      ATerm x_1 (ATerm t)
      {
        ATerm d_11 = t;
        if(PushChoice()==0)
          {
            ATerm l_28 = NULL;
            l_28 = t;
            n_27 :
            if(!(match_cons(l_28, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = d_11;
        return(t);
      }
      t = filter_1(t, x_1);
      t = concat_0(t);
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(m_28));
      {
        ATerm z_1 (ATerm t)
        {
          ATerm e_11 = t;
          if(PushChoice()==0)
            {
              ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
              p_28 = t;
              v_27 :
              if(match_cons(p_28, sym_Arg_1))
                {
                  q_28 = ATgetArgument(p_28, 0);
                  {
                    ATerm s_28 = NULL;
                    t = not_null(q_28);
                    t = int_to_string_0(t);
                    s_28 = t;
                    t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(s_28));
                  }
                }
              else
                {
                  if(match_cons(p_28, sym_selector_2))
                    {
                      q_28 = ATgetArgument(p_28, 0);
                      o_28 = ATgetArgument(p_28, 1);
                      {
                        ATerm w_28 = NULL;
                        t = not_null(q_28);
                        t = int_to_string_0(t);
                        w_28 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(w_28), not_null(o_28));
                      }
                    }
                  else
                    {
                      if(match_cons(p_28, sym_S_1))
                        {
                          q_28 = ATgetArgument(p_28, 0);
                          {
                            ATerm z_28 = NULL;
                            t = not_null(q_28);
                            t = quote_0(t);
                            z_28 = t;
                            t = (ATerm) ATmakeAppl(sym_S_1, not_null(z_28));
                          }
                        }
                      else
                        _fail(t);
                    }
                }
              PopChoice();
            }
          else
            t = e_11;
          return(t);
        }
        t = topdown_1(t, z_1);
      }
    }
  }
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm v_36 (ATerm), ATerm w_36 (ATerm))
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym_TCons_2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        ATerm u_31 = NULL;
        t = not_null(q_31);
        {
          ATerm w_31 = NULL;
          t = v_36(t);
          u_31 = t;
          t = not_null(r_31);
          t = w_36(t);
          w_31 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_31), not_null(w_31));
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
  ATerm c_32 = NULL;
  c_32 = t;
  t = SSL_exit(not_null(c_32));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  j_32 = t;
  g_32 :
  if(match_cons(j_32, sym_TCons_2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      h_32 :
      if(match_cons(l_32, sym_TCons_2))
        {
          m_32 = ATgetArgument(l_32, 0);
          n_32 = ATgetArgument(l_32, 1);
          i_32 :
          if(match_cons(n_32, sym_TNil_0))
            {
              ATerm f_11;
              f_11 = t;
              t = SSL_printnl(not_null(k_32), not_null(m_32));
              t = f_11;
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
ATerm try_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm g_11 = t;
  if(PushChoice()==0)
    {
      t = p_56(t);
      PopChoice();
    }
  else
    t = g_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm b_33 = NULL;
              b_33 = t;
              r_32 :
              if(!(match_cons(b_33, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, e_2);
            PopChoice();
            _fail(t);
          }
        else
          t = i_11;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm c_33 = NULL;
          c_33 = t;
          s_32 :
          if(!(match_cons(c_33, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, g_2);
        return(t);
      }
      t = TCons_2(t, a_2, b_2);
      {
        ATerm h_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm d_33 = NULL,e_33 = NULL;
            d_33 = t;
            u_32 :
            if(match_cons(d_33, sym_Runtime_1))
              {
                e_33 = ATgetArgument(d_33, 0);
                if(a_33 != NULL && a_33 != e_33)
                  _fail(e_33);
                else
                  a_33 = e_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, k_2);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm l_2 (ATerm t)
          {
            ATerm f_33 = NULL;
            f_33 = t;
            v_32 :
            if(!(match_cons(f_33, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, l_2);
          return(t);
        }
        t = TCons_2(t, h_2, i_2);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              ATerm g_33 = NULL,h_33 = NULL;
              g_33 = t;
              x_32 :
              if(match_cons(g_33, sym_Program_1))
                {
                  h_33 = ATgetArgument(g_33, 0);
                  if(z_32 != NULL && z_32 != h_33)
                    _fail(h_33);
                  else
                    z_32 = h_33;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, t_2);
            return(t);
          }
          ATerm s_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm i_33 = NULL;
              i_33 = t;
              y_32 :
              if(!(match_cons(i_33, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, v_2);
            return(t);
          }
          t = TCons_2(t, n_2, s_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_32), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = h_11;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  q_33 = t;
  m_33 :
  if(match_cons(q_33, sym_TCons_2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      n_33 :
      if(match_cons(s_33, sym_TCons_2))
        {
          t_33 = ATgetArgument(s_33, 0);
          u_33 = ATgetArgument(s_33, 1);
          o_33 :
          if(match_cons(u_33, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(r_33), not_null(t_33));
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  g_34 :
  if(match_cons(j_34, sym_TCons_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      h_34 :
      if(match_cons(l_34, sym_TCons_2))
        {
          m_34 = ATgetArgument(l_34, 0);
          n_34 = ATgetArgument(l_34, 1);
          i_34 :
          if(match_cons(n_34, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(k_34), not_null(m_34));
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
  ATerm z_34 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm k_11 = t;
      if(PushChoice()==0)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm a_35 = NULL,b_35 = NULL;
            a_35 = t;
            s_34 :
            if(match_cons(a_35, sym_Output_1))
              {
                b_35 = ATgetArgument(a_35, 0);
                if(z_34 != NULL && z_34 != b_35)
                  _fail(b_35);
                else
                  z_34 = b_35;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, c_3);
          PopChoice();
        }
      else
        {
          t = k_11;
          {
            ATerm c_35 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            c_35 = t;
            if(z_34 != NULL && z_34 != c_35)
              _fail(c_35);
            else
              z_34 = c_35;
          }
        }
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm d_35 = NULL;
        d_35 = t;
        u_34 :
        if(!(match_cons(d_35, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, e_3);
      return(t);
    }
    t = TCons_2(t, z_2, a_3);
  }
  t = j_11;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm g_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = not_null(z_34);
          return(t);
        }
        t = split_2(t, i_3, _id);
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        ATerm e_35 = NULL;
        e_35 = t;
        v_34 :
        if(!(match_cons(e_35, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, g_3, h_3);
      return(t);
    }
    t = TCons_2(t, _id, f_3);
    {
      ATerm l_11 = t;
      if(PushChoice()==0)
        {
          ATerm r_3 (ATerm t)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm f_35 = NULL;
              f_35 = t;
              w_34 :
              if(!(match_cons(f_35, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, u_3);
            return(t);
          }
          ATerm s_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm g_35 = NULL;
              g_35 = t;
              x_34 :
              if(!(match_cons(g_35, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, v_3);
            return(t);
          }
          t = TCons_2(t, r_3, s_3);
          PopChoice();
        }
      else
        {
          t = l_11;
          {
            ATerm w_3 (ATerm t)
            {
              ATerm f_4 (ATerm t)
              {
                ATerm h_35 = NULL;
                h_35 = t;
                y_34 :
                if(!(match_cons(h_35, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, f_4);
              return(t);
            }
            t = TCons_2(t, _id, w_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm p_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  ATerm m_11;
  m_11 = t;
  t = dtime_0(t);
  t = m_11;
  t = r_41(t);
  {
    ATerm n_11;
    n_11 = t;
    {
      ATerm q_35 = NULL;
      t = dtime_0(t);
      q_35 = t;
      if(p_35 != NULL && p_35 != q_35)
        _fail(q_35);
      else
        p_35 = q_35;
    }
    t = n_11;
    r_35 = t;
    m_35 :
    if(match_cons(r_35, sym_TCons_2))
      {
        s_35 = ATgetArgument(r_35, 0);
        t_35 = ATgetArgument(r_35, 1);
        n_35 :
        if(match_cons(t_35, sym_TCons_2))
          {
            u_35 = ATgetArgument(t_35, 0);
            v_35 = ATgetArgument(t_35, 1);
            o_35 :
            if(match_cons(v_35, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_35)), not_null(s_35)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_35), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_ReadFromFile(not_null(b_36));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm h_36 = NULL;
  ATerm j_36 = NULL;
  h_36 = t;
  {
    ATerm m_36 = NULL;
    t = r_43(t);
    j_36 = t;
    t = not_null(h_36);
    t = s_43(t);
    m_36 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_36), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_36 = NULL;
  ATerm o_11;
  o_11 = t;
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm x_36 = NULL,y_36 = NULL;
          x_36 = t;
          s_36 :
          if(match_cons(x_36, sym_Input_1))
            {
              y_36 = ATgetArgument(x_36, 0);
              if(u_36 != NULL && u_36 != y_36)
                _fail(y_36);
              else
                u_36 = y_36;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, g_4);
        PopChoice();
      }
    else
      {
        t = p_11;
        {
          ATerm b_37 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          b_37 = t;
          if(u_36 != NULL && u_36 != b_37)
            _fail(b_37);
          else
            u_36 = b_37;
        }
      }
  }
  t = o_11;
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(u_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  g_37 :
  if(!(match_cons(h_37, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_33 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_Undefined_1))
    {
      m_37 = ATgetArgument(l_37, 0);
      {
        ATerm o_37 = NULL;
        t = not_null(m_37);
        t = p_33(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  s_37 :
  if(!(match_cons(t_37, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm u_37 (ATerm t)
  {
    ATerm q_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, k_50, _id);
        PopChoice();
      }
    else
      {
        t = q_11;
        t = Cons_2(t, _id, u_37);
      }
    return(t);
  }
  t = u_37(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_40 (ATerm))
{
  t = fetch_1(t, v_40);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm r_11 = t;
    if(PushChoice()==0)
      {
        ATerm x_37 = NULL;
        x_37 = t;
        v_37 :
        if(!(match_cons(x_37, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = r_11;
        {
          ATerm s_11 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = s_11;
              {
                ATerm y_37 = NULL;
                y_37 = t;
                w_37 :
                if(!(match_cons(y_37, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_4);
  t = q_41(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  ATerm t_11;
  t_11 = t;
  {
    ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
    h_38 = t;
    a_38 :
    if(match_cons(h_38, sym_TCons_2))
      {
        i_38 = ATgetArgument(h_38, 0);
        j_38 = ATgetArgument(h_38, 1);
        b_38 :
        if(match_cons(j_38, sym_TCons_2))
          {
            k_38 = ATgetArgument(j_38, 0);
            l_38 = ATgetArgument(j_38, 1);
            c_38 :
            if(match_cons(l_38, sym_TCons_2))
              {
                m_38 = ATgetArgument(l_38, 0);
                n_38 = ATgetArgument(l_38, 1);
                d_38 :
                if(match_cons(n_38, sym_TNil_0))
                  {
                    if(e_38 != NULL && e_38 != i_38)
                      _fail(i_38);
                    else
                      e_38 = i_38;
                    if(f_38 != NULL && f_38 != k_38)
                      _fail(k_38);
                    else
                      f_38 = k_38;
                    if(g_38 != NULL && g_38 != m_38)
                      _fail(m_38);
                    else
                      g_38 = m_38;
                    t = SSL_table_put(not_null(e_38), not_null(f_38), not_null(g_38));
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
  t = t_11;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_table_create(not_null(q_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  {
    ATerm u_11;
    u_11 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = u_11;
  }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  z_38 :
  if(match_cons(b_39, sym_Cons_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      a_39 :
      if(match_cons(d_39, sym_Cons_2))
        {
          e_39 = ATgetArgument(d_39, 0);
          f_39 = ATgetArgument(d_39, 1);
          {
            ATerm j_39 = NULL;
            t = not_null(c_39);
            t = q_40(t);
            t = not_null(e_39);
            t = r_40(t);
            j_39 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_39), not_null(f_39));
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
  ATerm v_11 = t;
  if(PushChoice()==0)
    {
      ATerm j_4 (ATerm t)
      {
        ATerm h_40 = NULL;
        h_40 = t;
        n_39 :
        if(!(match_string(h_40, "-S")))
          _fail(t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, j_4, l_4);
      PopChoice();
    }
  else
    {
      t = v_11;
      {
        ATerm w_11 = t;
        if(PushChoice()==0)
          {
            ATerm o_4 (ATerm t)
            {
              ATerm i_40 = NULL;
              i_40 = t;
              o_39 :
              if(!(match_string(i_40, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, o_4, p_4);
            PopChoice();
          }
        else
          {
            t = w_11;
            {
              ATerm x_11 = t;
              if(PushChoice()==0)
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm j_40 = NULL;
                    j_40 = t;
                    p_39 :
                    if(!(match_string(j_40, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, s_4, u_4);
                  PopChoice();
                }
              else
                {
                  t = x_11;
                  {
                    ATerm d_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm k_40 = NULL;
                          k_40 = t;
                          q_39 :
                          if(!(match_string(k_40, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, v_4, w_4);
                        PopChoice();
                      }
                    else
                      {
                        t = d_12;
                        {
                          ATerm e_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_4 (ATerm t)
                              {
                                ATerm l_40 = NULL;
                                l_40 = t;
                                r_39 :
                                if(!(match_string(l_40, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm b_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, x_4, b_5);
                              PopChoice();
                            }
                          else
                            {
                              t = e_12;
                              {
                                ATerm i_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm d_5 (ATerm t)
                                    {
                                      ATerm s_40 = NULL;
                                      s_40 = t;
                                      s_39 :
                                      if(!(match_string(s_40, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm e_5 (ATerm t)
                                    {
                                      ATerm t_40 = NULL;
                                      t_40 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_40));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, d_5, e_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_12;
                                    {
                                      ATerm j_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm f_5 (ATerm t)
                                          {
                                            ATerm w_40 = NULL;
                                            w_40 = t;
                                            u_39 :
                                            if(!(match_string(w_40, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_5 (ATerm t)
                                          {
                                            ATerm x_40 = NULL;
                                            x_40 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_40));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, f_5, g_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = j_12;
                                          {
                                            ATerm k_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm p_5 (ATerm t)
                                                {
                                                  ATerm z_40 = NULL;
                                                  z_40 = t;
                                                  w_39 :
                                                  if(!(match_string(z_40, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm q_5 (ATerm t)
                                                {
                                                  ATerm a_41 = NULL;
                                                  a_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_41));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, p_5, q_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = k_12;
                                                {
                                                  ATerm l_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm r_5 (ATerm t)
                                                      {
                                                        ATerm c_41 = NULL;
                                                        c_41 = t;
                                                        y_39 :
                                                        if(!(match_string(c_41, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm s_5 (ATerm t)
                                                      {
                                                        ATerm d_41 = NULL;
                                                        d_41 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_41));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, r_5, s_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = l_12;
                                                      {
                                                        ATerm m_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm t_5 (ATerm t)
                                                            {
                                                              ATerm i_41 = NULL;
                                                              i_41 = t;
                                                              a_40 :
                                                              if(!(match_string(i_41, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm u_5 (ATerm t)
                                                            {
                                                              ATerm j_41 = NULL;
                                                              j_41 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_41));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, t_5, u_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = m_12;
                                                            {
                                                              ATerm n_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm v_5 (ATerm t)
                                                                  {
                                                                    ATerm l_41 = NULL;
                                                                    l_41 = t;
                                                                    c_40 :
                                                                    if(!(match_string(l_41, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm d_6 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, v_5, d_6);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = n_12;
                                                                  {
                                                                    ATerm o_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm e_6 (ATerm t)
                                                                        {
                                                                          ATerm m_41 = NULL;
                                                                          m_41 = t;
                                                                          d_40 :
                                                                          if(!(match_string(m_41, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm f_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, e_6, f_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_12;
                                                                        {
                                                                          ATerm p_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm h_6 (ATerm t)
                                                                              {
                                                                                ATerm o_41 = NULL;
                                                                                o_41 = t;
                                                                                e_40 :
                                                                                if(!(match_string(o_41, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm i_6 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, h_6, i_6);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_12;
                                                                              {
                                                                                ATerm q_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm j_6 (ATerm t)
                                                                                    {
                                                                                      ATerm p_41 = NULL;
                                                                                      p_41 = t;
                                                                                      f_40 :
                                                                                      if(!(match_string(p_41, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm k_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, j_6, k_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_12;
                                                                                    {
                                                                                      ATerm m_6 (ATerm t)
                                                                                      {
                                                                                        ATerm s_41 = NULL;
                                                                                        s_41 = t;
                                                                                        g_40 :
                                                                                        if(!(match_string(s_41, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm o_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, m_6, o_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  z_41 :
  if(match_cons(b_42, sym_Cons_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_42)), not_null(d_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_36 (ATerm), ATerm a_37 (ATerm))
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym_Cons_2))
    {
      n_42 = ATgetArgument(m_42, 0);
      o_42 = ATgetArgument(m_42, 1);
      {
        ATerm r_42 = NULL;
        t = not_null(n_42);
        {
          ATerm t_42 = NULL;
          t = z_36(t);
          r_42 = t;
          t = not_null(o_42);
          t = a_37(t);
          t_42 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_42), not_null(t_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  y_42 :
  if(!(match_cons(z_42, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_40 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm c_43 = NULL;
    c_43 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_43));
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        ATerm s_12 = t;
        if(PushChoice()==0)
          {
            ATerm e_43 = NULL;
            e_43 = t;
            b_43 :
            if(!(match_cons(e_43, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = s_12;
            t = m_40(t);
            t = Cons_2(t, _id, q_6);
          }
        PopChoice();
      }
    else
      {
        t = r_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, p_6, q_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_41 (ATerm), ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        t = g_41(t);
        PopChoice();
      }
    else
      {
        t = t_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_6);
  t = store_options_0(t);
  {
    ATerm x_12 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, h_41);
        PopChoice();
      }
    else
      {
        t = x_12;
        {
          ATerm z_12 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, f_41);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = z_12;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Ppgen_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm j_43 = NULL;
        j_43 = t;
        h_43 :
        if(!(match_cons(j_43, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, ppgenerate_0, w_6);
      return(t);
    }
    t = TCons_2(t, _id, v_6);
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm k_43 = NULL;
      k_43 = t;
      i_43 :
      if(!(match_string(k_43, "-v")))
        _fail(t);
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Verbose_0);
      return(t);
    }
    t = Option_2(t, x_6, b_7);
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
      return(t);
    }
    t = obsolete_1(t, c_7);
    return(t);
  }
  t = iowrap_3(t, s_6, t_6, u_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ppgen_0(t);
  return(t);
}

#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_Strict_0;
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
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
ATerm Option_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm TNil_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_55 (ATerm));
ATerm filter_1 (ATerm, ATerm i_47 (ATerm));
ATerm debug_1 (ATerm, ATerm w_44 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm x_37 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm f_60 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm s_35 (ATerm));
ATerm iter_1 (ATerm, ATerm r_35 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm p_35 (ATerm), ATerm q_35 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm n_35 (ATerm), ATerm o_35 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm m_35 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm i_60 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm e_60 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm b_54 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_48 (ATerm), ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm crush_3 (ATerm, ATerm s_49 (ATerm), ATerm t_49 (ATerm), ATerm u_49 (ATerm));
ATerm collect_p__1 (ATerm, ATerm e_39 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_38 (ATerm), ATerm j_38 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm u_38 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm i_57 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm i_44 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm t_38 (ATerm));
ATerm InOutId_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm b_39 (ATerm));
ATerm try_1 (ATerm, ATerm t_59 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm z_38 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_44 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_46 (ATerm), ATerm r_46 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_44 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_42 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_53 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_42 (ATerm));
ATerm map_1 (ATerm, ATerm d_53 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_58 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_42 (ATerm));
ATerm Program_1 (ATerm, ATerm b_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_53 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_43 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_38 (ATerm), ATerm n_38 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_42 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_42 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm q_38 (ATerm), ATerm r_38 (ATerm), ATerm s_38 (ATerm));
ATerm Ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  q_1 = t;
  n_1 :
  if(match_cons(q_1, sym_Cons_2))
    {
      o_1 = ATgetArgument(q_1, 0);
      p_1 = ATgetArgument(q_1, 1);
      {
        ATerm t_1 = NULL;
        t = not_null(o_1);
        t = f_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = g_0(t);
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_1), not_null(p_1));
      }
    }
  else
    {
      if(match_string(q_1, "register-usage-info"))
        t = register_usage_1(t, h_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  y_1 :
  if(!(match_cons(z_1, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm b_2 = NULL;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_2), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm f_2 = NULL;
  f_2 = t;
  t = SSL_int_to_string(not_null(f_2));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = s_55(t);
    t = _all(t, i_2);
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm e_4 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = e_4;
      {
        ATerm l_9 = t;
        if(PushChoice()==0)
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, i_47);
              return(t);
            }
            t = Cons_2(t, i_47, i_0);
            PopChoice();
          }
        else
          {
            t = l_9;
            {
              ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
              l_2 = t;
              k_2 :
              if(match_cons(l_2, sym_Cons_2))
                {
                  m_2 = ATgetArgument(l_2, 0);
                  n_2 = ATgetArgument(l_2, 1);
                  t = not_null(n_2);
                  t = filter_1(t, i_47);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm j_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm k_0 (ATerm t)
    {
      ATerm s_2 = NULL;
      ATerm u_2 = NULL;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = w_44(t);
      u_2 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_2), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_2), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, j_0, k_0);
    t = printnl_0(t);
  }
  t = m_9;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_9;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm z_2 = NULL;
      z_2 = t;
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = u_9;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_2), (ATerm) ATmakeAppl(sym_Nil_0));
      }
      return(t);
    }
    t = try_1(t, m_0);
    return(t);
  }
  t = map_1(t, l_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm x_37 (ATerm))
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_Arg_1))
    {
      g_3 = ATgetArgument(f_3, 0);
      {
        ATerm i_3 = NULL;
        t = not_null(g_3);
        t = x_37(t);
        i_3 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(i_3));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_3), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  t_3 = t;
  p_3 :
  if(match_cons(t_3, sym_alt_2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      q_3 :
      if(match_cons(v_3, sym_alt_2))
        {
          r_3 = ATgetArgument(v_3, 0);
          s_3 = ATgetArgument(v_3, 1);
          {
            ATerm v_9 = t;
            if(PushChoice()==0)
              {
                ATerm z_3 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(r_3), not_null(s_3));
                t = flat_alt_0(t);
                z_3 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_3), not_null(z_3));
                PopChoice();
              }
            else
              {
                t = v_9;
                t = g_4(t);
              }
          }
        }
      else
        t = g_4(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = f_60(t);
    return(t);
  }
  t = split_2(t, n_0, _id);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
      ATerm r_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm s_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Nil_0);
        return(t);
      }
      ATerm t_8 (ATerm t)
      {
        ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
        if(k_6 != NULL && k_6 != t_6)
          _fail(t_6);
        else
          k_6 = t_6;
        if(l_6 != NULL && l_6 != v_6)
          _fail(v_6);
        else
          l_6 = v_6;
        if(m_6 != NULL && m_6 != z_6)
          _fail(z_6);
        else
          m_6 = z_6;
        if(e_7 != NULL && e_7 != q_6)
          _fail(q_6);
        else
          e_7 = q_6;
        if(f_7 != NULL && f_7 != o_6)
          _fail(o_6);
        else
          f_7 = o_6;
        if(g_7 != NULL && g_7 != p_6)
          _fail(p_6);
        else
          g_7 = p_6;
        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(e_7), (ATerm) ATmakeAppl(sym_alt_2, not_null(f_7), not_null(g_7)));
        {
          ATerm j_7 = NULL;
          t = flat_alt_0(t);
          h_7 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_7), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = mkterm_0(t);
          j_7 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(k_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_7), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = p_8(t);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm p_0 (ATerm t)
              {
                ATerm q_0 (ATerm t)
                {
                  t = Arg_1(t, _id);
                  t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                  return(t);
                }
                t = try_1(t, q_0);
                return(t);
              }
              t = topdown_1(t, p_0);
              return(t);
            }
            t = Cons_2(t, o_0, _id);
          }
        }
        return(t);
      }
      ATerm u_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_6), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = p_8(t);
        return(t);
      }
      ATerm v_8 (ATerm t)
      {
        ATerm v_7 = NULL,w_7 = NULL,e_8 = NULL;
        ATerm x_7 = NULL;
        ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
        t = not_null(b_7);
        x_7 = t;
        t = SSL_explode_term(not_null(x_7));
        z_7 = t;
        s_4 :
        if(match_cons(z_7, sym_TCons_2))
          {
            a_8 = ATgetArgument(z_7, 0);
            b_8 = ATgetArgument(z_7, 1);
            t_4 :
            if(match_cons(b_8, sym_TCons_2))
              {
                c_8 = ATgetArgument(b_8, 0);
                d_8 = ATgetArgument(b_8, 1);
                u_4 :
                if(match_cons(d_8, sym_TNil_0))
                  {
                    if(v_7 != NULL && v_7 != a_8)
                      _fail(a_8);
                    else
                      v_7 = a_8;
                    if(w_7 != NULL && w_7 != c_8)
                      _fail(c_8);
                    else
                      w_7 = c_8;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_selector_2, not_null(z_6), not_null(v_7)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm g_8 = NULL,n_8 = NULL;
          t = conc_0(t);
          e_8 = t;
          t = not_null(w_7);
          t = argument_list_0(t);
          t = number_nonterminals_0(t);
          {
            ATerm w_9;
            w_9 = t;
            {
              ATerm h_8 = NULL;
              t = make_0(t);
              h_8 = t;
              if(g_8 != NULL && g_8 != h_8)
                _fail(h_8);
              else
                g_8 = h_8;
            }
            t = w_9;
            {
              ATerm r_0 (ATerm t)
              {
                ATerm i_8 = NULL;
                ATerm k_8 = NULL;
                i_8 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_8), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_8), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = p_8(t);
                k_8 = t;
                t = not_null(k_8);
                return(t);
              }
              t = map_1(t, r_0);
              t = concat_0(t);
              n_8 = t;
              t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(t_6), not_null(e_8)), not_null(g_8)), not_null(n_8));
            }
          }
        }
        return(t);
      }
      r_6 = t;
      a_5 :
      if(match_cons(r_6, sym_TCons_2))
        {
          s_6 = ATgetArgument(r_6, 0);
          x_6 = ATgetArgument(r_6, 1);
          b_5 :
          if(match_cons(x_6, sym_TCons_2))
            {
              y_6 = ATgetArgument(x_6, 0);
              d_7 = ATgetArgument(x_6, 1);
              c_5 :
              if(match_cons(y_6, sym_lit_1))
                {
                  z_6 = ATgetArgument(y_6, 0);
                  d_5 :
                  if(match_cons(d_7, sym_TNil_0))
                    {
                      e_5 :
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_6, sym_TCons_2))
                    {
                      z_6 = ATgetArgument(y_6, 0);
                      a_7 = ATgetArgument(y_6, 1);
                      f_5 :
                      if(match_cons(a_7, sym_TCons_2))
                        {
                          b_7 = ATgetArgument(a_7, 0);
                          c_7 = ATgetArgument(a_7, 1);
                          g_5 :
                          if(match_cons(c_7, sym_TNil_0))
                            {
                              h_5 :
                              if(match_cons(d_7, sym_TNil_0))
                                {
                                  i_5 :
                                  if(match_cons(b_7, sym_sort_1))
                                    {
                                      q_6 = ATgetArgument(b_7, 0);
                                      j_5 :
                                      if(match_cons(s_6, sym_TCons_2))
                                        {
                                          t_6 = ATgetArgument(s_6, 0);
                                          u_6 = ATgetArgument(s_6, 1);
                                          k_5 :
                                          if(match_cons(u_6, sym_TCons_2))
                                            {
                                              v_6 = ATgetArgument(u_6, 0);
                                              w_6 = ATgetArgument(u_6, 1);
                                              l_5 :
                                              if(match_cons(w_6, sym_TNil_0))
                                                {
                                                  ATerm z_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = r_8(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = z_9;
                                                      t = v_8(t);
                                                    }
                                                }
                                              else
                                                t = r_8(t);
                                            }
                                          else
                                            t = r_8(t);
                                        }
                                      else
                                        t = r_8(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_7, sym_char_class_1))
                                        {
                                          q_6 = ATgetArgument(b_7, 0);
                                          m_5 :
                                          if(match_cons(s_6, sym_TCons_2))
                                            {
                                              t_6 = ATgetArgument(s_6, 0);
                                              u_6 = ATgetArgument(s_6, 1);
                                              n_5 :
                                              if(match_cons(u_6, sym_TCons_2))
                                                {
                                                  v_6 = ATgetArgument(u_6, 0);
                                                  w_6 = ATgetArgument(u_6, 1);
                                                  o_5 :
                                                  if(match_cons(w_6, sym_TNil_0))
                                                    {
                                                      ATerm a_10 = t;
                                                      if(PushChoice()==0)
                                                        {
                                                          t = s_8(t);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = a_10;
                                                          t = v_8(t);
                                                        }
                                                    }
                                                  else
                                                    t = s_8(t);
                                                }
                                              else
                                                t = s_8(t);
                                            }
                                          else
                                            t = s_8(t);
                                        }
                                      else
                                        {
                                          if(match_cons(b_7, sym_alt_2))
                                            {
                                              q_6 = ATgetArgument(b_7, 0);
                                              n_6 = ATgetArgument(b_7, 1);
                                              p_5 :
                                              if(match_cons(s_6, sym_TCons_2))
                                                {
                                                  t_6 = ATgetArgument(s_6, 0);
                                                  u_6 = ATgetArgument(s_6, 1);
                                                  q_5 :
                                                  if(match_cons(u_6, sym_TCons_2))
                                                    {
                                                      v_6 = ATgetArgument(u_6, 0);
                                                      w_6 = ATgetArgument(u_6, 1);
                                                      y_5 :
                                                      if(match_cons(w_6, sym_TNil_0))
                                                        {
                                                          z_5 :
                                                          if(match_cons(n_6, sym_alt_2))
                                                            {
                                                              o_6 = ATgetArgument(n_6, 0);
                                                              p_6 = ATgetArgument(n_6, 1);
                                                              {
                                                                ATerm b_10 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = t_8(t);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_10;
                                                                    t = v_8(t);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            t = v_8(t);
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
                                              if(match_cons(b_7, sym_bracket_symbol_1))
                                                {
                                                  q_6 = ATgetArgument(b_7, 0);
                                                  d_6 :
                                                  if(match_cons(s_6, sym_TCons_2))
                                                    {
                                                      t_6 = ATgetArgument(s_6, 0);
                                                      u_6 = ATgetArgument(s_6, 1);
                                                      e_6 :
                                                      if(match_cons(u_6, sym_TCons_2))
                                                        {
                                                          v_6 = ATgetArgument(u_6, 0);
                                                          w_6 = ATgetArgument(u_6, 1);
                                                          f_6 :
                                                          if(match_cons(w_6, sym_TNil_0))
                                                            {
                                                              ATerm c_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = u_8(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = c_10;
                                                                  t = v_8(t);
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
                                                  g_6 :
                                                  if(match_cons(s_6, sym_TCons_2))
                                                    {
                                                      t_6 = ATgetArgument(s_6, 0);
                                                      u_6 = ATgetArgument(s_6, 1);
                                                      h_6 :
                                                      if(match_cons(u_6, sym_TCons_2))
                                                        {
                                                          v_6 = ATgetArgument(u_6, 0);
                                                          w_6 = ATgetArgument(u_6, 1);
                                                          j_6 :
                                                          if(match_cons(w_6, sym_TNil_0))
                                                            t = v_8(t);
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
    t = p_8(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,y_9 = NULL;
  x_9 = t;
  o_9 :
  if(match_cons(x_9, sym_TCons_2))
    {
      y_9 = ATgetArgument(x_9, 0);
      r_9 = ATgetArgument(x_9, 1);
      p_9 :
      if(match_cons(r_9, sym_TCons_2))
        {
          s_9 = ATgetArgument(r_9, 0);
          t_9 = ATgetArgument(r_9, 1);
          q_9 :
          if(match_cons(t_9, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(y_9));
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(x_9, sym_lit_1))
        {
          y_9 = ATgetArgument(x_9, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(y_9)));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm s_35 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_iter_star_1))
    {
      h_10 = ATgetArgument(g_10, 0);
      {
        ATerm j_10 = NULL;
        t = not_null(h_10);
        t = s_35(t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(j_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm r_35 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_iter_1))
    {
      s_10 = ATgetArgument(r_10, 0);
      {
        ATerm u_10 = NULL;
        t = not_null(s_10);
        t = r_35(t);
        u_10 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, not_null(u_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm d_10 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = d_10;
      {
        ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
        c_11 = t;
        a_11 :
        if(match_cons(c_11, sym_Cons_2))
          {
            d_11 = ATgetArgument(c_11, 0);
            e_11 = ATgetArgument(c_11, 1);
            b_11 :
            if(match_cons(e_11, sym_Cons_2))
              {
                f_11 = ATgetArgument(e_11, 0);
                g_11 = ATgetArgument(e_11, 1);
                {
                  ATerm t_11 = NULL;
                  t = not_null(g_11);
                  t = pair_0(t);
                  t_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_11), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_11), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(t_11));
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
ATerm iter_star_sep_2 (ATerm t, ATerm p_35 (ATerm), ATerm q_35 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_iter_star_sep_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm x_12 = NULL;
        t = not_null(t_12);
        {
          ATerm b_13 = NULL;
          t = p_35(t);
          x_12 = t;
          t = not_null(u_12);
          t = q_35(t);
          b_13 = t;
          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(x_12), not_null(b_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm n_35 (ATerm), ATerm o_35 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_iter_sep_2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      {
        ATerm v_13 = NULL;
        t = not_null(r_13);
        {
          ATerm x_13 = NULL;
          t = n_35(t);
          v_13 = t;
          t = not_null(s_13);
          t = o_35(t);
          x_13 = t;
          t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(v_13), not_null(x_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  ATerm e_10 = t;
  if(PushChoice()==0)
    {
      ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
      t = reverse_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm i_10 = t;
              if(PushChoice()==0)
                {
                  t = iter_1(t, _id);
                  PopChoice();
                }
              else
                {
                  t = i_10;
                  {
                    ATerm k_10 = t;
                    if(PushChoice()==0)
                      {
                        t = iter_star_1(t, _id);
                        PopChoice();
                      }
                    else
                      {
                        t = k_10;
                        {
                          ATerm l_10 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_sep_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = l_10;
                              t = iter_star_sep_2(t, _id, _id);
                            }
                        }
                      }
                  }
                }
              return(t);
            }
            t = TCons_2(t, v_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, u_0);
          t = Make_0(t);
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, w_0);
          return(t);
        }
        t = Cons_2(t, s_0, t_0);
        r_14 = t;
        g_14 :
        if(match_cons(r_14, sym_Cons_2))
          {
            s_14 = ATgetArgument(r_14, 0);
            t_14 = ATgetArgument(r_14, 1);
            {
              ATerm u_14 = NULL;
              if(n_14 != NULL && n_14 != s_14)
                _fail(s_14);
              else
                n_14 = s_14;
              if(m_14 != NULL && m_14 != t_14)
                _fail(t_14);
              else
                m_14 = t_14;
              {
                ATerm m_10 = t;
                if(PushChoice()==0)
                  {
                    t = Cons_2(t, _id, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = m_10;
                t = not_null(m_14);
                t = reverse_0(t);
                u_14 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_H_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(u_14)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_14), (ATerm) ATmakeAppl(sym_Nil_0))));
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
      t = e_10;
      {
        ATerm n_10 = t;
        if(PushChoice()==0)
          {
            ATerm c_15 = NULL;
            t = reverse_0(t);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm w_14 = NULL;
                t = Make_0(t);
                w_14 = t;
                if(q_14 != NULL && q_14 != w_14)
                  _fail(w_14);
                else
                  q_14 = w_14;
                return(t);
              }
              ATerm y_0 (ATerm t)
              {
                ATerm x_14 = NULL;
                ATerm o_10 = t;
                if(PushChoice()==0)
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = o_10;
                t = reverse_0(t);
                x_14 = t;
                if(o_14 != NULL && o_14 != x_14)
                  _fail(x_14);
                else
                  o_14 = x_14;
                return(t);
              }
              t = Cons_2(t, x_0, y_0);
              t = not_null(o_14);
              t = pair_0(t);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm y_14 = NULL,z_14 = NULL;
                  ATerm a_1 (ATerm t)
                  {
                    ATerm a_15 = NULL;
                    t = lit_1(t, _id);
                    t = Make_0(t);
                    a_15 = t;
                    if(y_14 != NULL && y_14 != a_15)
                      _fail(a_15);
                    else
                      y_14 = a_15;
                    return(t);
                  }
                  ATerm b_1 (ATerm t)
                  {
                    ATerm c_1 (ATerm t)
                    {
                      ATerm b_15 = NULL;
                      ATerm d_1 (ATerm t)
                      {
                        ATerm e_1 (ATerm t)
                        {
                          ATerm p_10 = t;
                          if(PushChoice()==0)
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = p_10;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = TCons_2(t, e_1, TNil_0);
                        return(t);
                      }
                      t = TCons_2(t, _id, d_1);
                      t = Make_0(t);
                      b_15 = t;
                      if(z_14 != NULL && z_14 != b_15)
                        _fail(b_15);
                      else
                        z_14 = b_15;
                      return(t);
                    }
                    t = TCons_2(t, c_1, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, a_1, b_1);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_14), (ATerm) ATmakeAppl(sym_Nil_0))));
                  return(t);
                }
                t = map_1(t, z_0);
                c_15 = t;
                if(p_14 != NULL && p_14 != c_15)
                  _fail(c_15);
                else
                  p_14 = c_15;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_14), (ATerm) ATmakeAppl(sym_Nil_0))));
              }
            }
            PopChoice();
          }
        else
          {
            t = n_10;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm m_35 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_lit_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      {
        ATerm r_15 = NULL;
        t = not_null(p_15);
        t = m_35(t);
        r_15 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(r_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm t_10 = t;
  if(PushChoice()==0)
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = t_10;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  y_15 :
  if(match_cons(b_16, sym_TCons_2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      z_15 :
      if(match_cons(d_16, sym_TCons_2))
        {
          e_16 = ATgetArgument(d_16, 0);
          f_16 = ATgetArgument(d_16, 1);
          a_16 :
          if(match_cons(f_16, sym_TNil_0))
            {
              ATerm v_10 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(c_16), not_null(e_16));
                  PopChoice();
                }
              else
                {
                  t = v_10;
                  t = SSL_addr(not_null(c_16), not_null(e_16));
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
ATerm number_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, f_1, _id);
  {
    ATerm m_17 (ATerm t)
    {
      ATerm u_16 = NULL,v_16 = NULL,x_16 = NULL;
      ATerm w_10 = t;
      if(PushChoice()==0)
        {
          ATerm g_1 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, g_1);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
          PopChoice();
        }
      else
        {
          t = w_10;
          {
            ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
            z_16 = t;
            q_16 :
            if(match_cons(z_16, sym_TCons_2))
              {
                a_17 = ATgetArgument(z_16, 0);
                b_17 = ATgetArgument(z_16, 1);
                r_16 :
                if(match_cons(b_17, sym_TCons_2))
                  {
                    c_17 = ATgetArgument(b_17, 0);
                    f_17 = ATgetArgument(b_17, 1);
                    s_16 :
                    if(match_cons(c_17, sym_Cons_2))
                      {
                        d_17 = ATgetArgument(c_17, 0);
                        e_17 = ATgetArgument(c_17, 1);
                        t_16 :
                        if(match_cons(f_17, sym_TNil_0))
                          {
                            ATerm x_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm g_17 = NULL;
                                if(u_16 != NULL && u_16 != a_17)
                                  _fail(a_17);
                                else
                                  u_16 = a_17;
                                if(v_16 != NULL && v_16 != d_17)
                                  _fail(d_17);
                                else
                                  v_16 = d_17;
                                if(x_16 != NULL && x_16 != e_17)
                                  _fail(e_17);
                                else
                                  x_16 = e_17;
                                t = not_null(v_16);
                                t = i_60(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm i_17 = NULL;
                                  t = add_0(t);
                                  g_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = m_17(t);
                                  i_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_16), (ATerm) ATmakeAppl(sym_TNil_0))), not_null(i_17));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = x_10;
                                {
                                  ATerm k_17 = NULL;
                                  if(u_16 != NULL && u_16 != a_17)
                                    _fail(a_17);
                                  else
                                    u_16 = a_17;
                                  if(v_16 != NULL && v_16 != d_17)
                                    _fail(d_17);
                                  else
                                    v_16 = d_17;
                                  if(x_16 != NULL && x_16 != e_17)
                                    _fail(e_17);
                                  else
                                    x_16 = e_17;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = m_17(t);
                                  k_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_16), not_null(k_17));
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
    t = m_17(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
      u_17 = t;
      t_17 :
      if(match_cons(u_17, sym_label_2))
        {
          v_17 = ATgetArgument(u_17, 0);
          w_17 = ATgetArgument(u_17, 1);
          t = not_null(w_17);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, i_1);
    return(t);
  }
  t = map_1(t, h_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm e_18 = NULL,g_18 = NULL,k_18 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm f_18 = NULL;
      t = make_0(t);
      f_18 = t;
      if(e_18 != NULL && e_18 != f_18)
        _fail(f_18);
      else
        e_18 = f_18;
    }
    t = y_10;
    {
      ATerm j_18 = NULL;
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm h_18 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = e_60(t);
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        t = symbol2abox_1(t, k_1);
        return(t);
      }
      t = map_1(t, j_1);
      t = concat_0(t);
      j_18 = t;
      if(g_18 != NULL && g_18 != j_18)
        _fail(j_18);
      else
        g_18 = j_18;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = e_60(t);
      k_18 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(k_18)), not_null(e_18)), not_null(g_18));
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
      b_19 = t;
      v_18 :
      if(match_cons(b_19, sym_prod_3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          if(y_18 != NULL && y_18 != c_19)
            _fail(c_19);
          else
            y_18 = c_19;
          if(z_18 != NULL && z_18 != d_19)
            _fail(d_19);
          else
            z_18 = d_19;
          if(a_19 != NULL && a_19 != e_19)
            _fail(e_19);
          else
            a_19 = e_19;
          t = not_null(a_19);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm g_19 = NULL,h_19 = NULL;
              g_19 = t;
              t_18 :
              if(match_cons(g_19, sym_cons_1))
                {
                  h_19 = ATgetArgument(g_19, 0);
                  if(w_18 != NULL && w_18 != h_19)
                    _fail(h_19);
                  else
                    w_18 = h_19;
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, l_1);
          }
          t = not_null(y_18);
          {
            ATerm m_1 (ATerm t)
            {
              t = not_null(w_18);
              return(t);
            }
            t = symbols2pp_entries_1(t, m_1);
          }
        }
      else
        {
          if(match_cons(b_19, sym_prod_fun_4))
            {
              c_19 = ATgetArgument(b_19, 0);
              d_19 = ATgetArgument(b_19, 1);
              e_19 = ATgetArgument(b_19, 2);
              f_19 = ATgetArgument(b_19, 3);
              {
                ATerm i_19 = NULL;
                if(x_18 != NULL && x_18 != c_19)
                  _fail(c_19);
                else
                  x_18 = c_19;
                if(y_18 != NULL && y_18 != d_19)
                  _fail(d_19);
                else
                  y_18 = d_19;
                if(z_18 != NULL && z_18 != e_19)
                  _fail(e_19);
                else
                  z_18 = e_19;
                if(a_19 != NULL && a_19 != f_19)
                  _fail(f_19);
                else
                  a_19 = f_19;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, not_null(x_18)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0))));
                t = concat_0(t);
                i_19 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, not_null(i_19), not_null(z_18), not_null(a_19));
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
      t = z_10;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm h_11 = t;
          if(PushChoice()==0)
            {
              ATerm s_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Silent_0);
                return(t);
              }
              t = has_option_1(t, s_1);
              PopChoice();
              _fail(t);
            }
          else
            t = h_11;
          {
            ATerm u_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, u_1);
          }
          return(t);
        }
        t = try_1(t, r_1);
        t = (ATerm) ATmakeAppl(sym_Nil_0);
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm o_19 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_54(t);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = Cons_2(t, _id, o_19);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Cons_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      t = not_null(t_19);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Cons_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      t = not_null(a_20);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm k_20 = NULL;
      t = Hd_0(t);
      k_20 = t;
      f_20 :
      if(!(match_int(k_20, 34)))
        _fail(t);
    }
    t = j_11;
    t = Tl_0(t);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm l_20 = NULL,m_20 = NULL,o_20 = NULL;
        l_20 = t;
        h_20 :
        if(match_cons(l_20, sym_Cons_2))
          {
            m_20 = ATgetArgument(l_20, 0);
            o_20 = ATgetArgument(l_20, 1);
            i_20 :
            if(match_int(m_20, 34))
              {
                j_20 :
                if(match_cons(o_20, sym_Nil_0))
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
      t = at_last_1(t, v_1);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  u_20 = t;
  r_20 :
  if(match_cons(u_20, sym_TCons_2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      s_20 :
      if(match_cons(w_20, sym_TCons_2))
        {
          x_20 = ATgetArgument(w_20, 0);
          y_20 = ATgetArgument(w_20, 1);
          t_20 :
          if(match_cons(y_20, sym_TNil_0))
            {
              t = not_null(v_20);
              {
                ATerm w_1 (ATerm t)
                {
                  t = not_null(x_20);
                  return(t);
                }
                t = at_end_1(t, w_1);
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
ATerm foldr_3 (ATerm t, ATerm c_48 (ATerm), ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm k_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = c_48(t);
      PopChoice();
    }
  else
    {
      t = k_11;
      {
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
        h_21 = t;
        g_21 :
        if(match_cons(h_21, sym_Cons_2))
          {
            i_21 = ATgetArgument(h_21, 0);
            j_21 = ATgetArgument(h_21, 1);
            {
              ATerm m_21 = NULL;
              t = not_null(i_21);
              {
                ATerm o_21 = NULL;
                t = e_48(t);
                m_21 = t;
                t = not_null(j_21);
                t = foldr_3(t, c_48, d_48, e_48);
                o_21 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = d_48(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm s_49 (ATerm), ATerm t_49 (ATerm), ATerm u_49 (ATerm))
{
  ATerm b_22 = NULL;
  ATerm d_22 = NULL;
  b_22 = t;
  {
    ATerm e_22 = NULL;
    ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
    t = not_null(b_22);
    e_22 = t;
    t = SSL_explode_term(not_null(e_22));
    g_22 = t;
    y_21 :
    if(match_cons(g_22, sym_TCons_2))
      {
        h_22 = ATgetArgument(g_22, 0);
        i_22 = ATgetArgument(g_22, 1);
        z_21 :
        if(match_cons(i_22, sym_TCons_2))
          {
            j_22 = ATgetArgument(i_22, 0);
            k_22 = ATgetArgument(i_22, 1);
            a_22 :
            if(match_cons(k_22, sym_TNil_0))
              {
                if(d_22 != NULL && d_22 != j_22)
                  _fail(j_22);
                else
                  d_22 = j_22;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(d_22);
    t = foldr_3(t, s_49, t_49, u_49);
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm e_39 (ATerm))
{
  ATerm r_22 (ATerm t)
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        ATerm p_22 = NULL;
        t = e_39(t);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = l_11;
        {
          ATerm x_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, x_1, conc_0, r_22);
        }
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm l_23 = NULL,m_23 = NULL;
    l_23 = t;
    u_22 :
    if(match_cons(l_23, sym_context_free_syntax_1))
      {
        m_23 = ATgetArgument(l_23, 0);
        t = not_null(m_23);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_p__1(t, a_2);
  t = concat_0(t);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm p_23 = NULL,q_23 = NULL;
        p_23 = t;
        b_23 :
        if(match_cons(p_23, sym_cons_1))
          {
            q_23 = ATgetArgument(p_23, 0);
            {
              ATerm s_23 = NULL;
              t = not_null(q_23);
              t = de_quote_0(t);
              s_23 = t;
              t = (ATerm) ATmakeAppl(sym_cons_1, not_null(s_23));
            }
          }
        else
          {
            if(match_cons(p_23, sym_lit_1))
              {
                q_23 = ATgetArgument(p_23, 0);
                {
                  ATerm v_23 = NULL;
                  t = not_null(q_23);
                  t = de_quote_0(t);
                  v_23 = t;
                  t = (ATerm) ATmakeAppl(sym_lit_1, not_null(v_23));
                }
              }
            else
              {
                if(match_cons(p_23, sym_sort_1))
                  {
                    q_23 = ATgetArgument(p_23, 0);
                    {
                      ATerm y_23 = NULL;
                      t = not_null(q_23);
                      t = de_quote_0(t);
                      y_23 = t;
                      t = (ATerm) ATmakeAppl(sym_sort_1, not_null(y_23));
                    }
                  }
                else
                  _fail(t);
              }
          }
        return(t);
      }
      t = try_1(t, d_2);
      return(t);
    }
    t = topdown_1(t, c_2);
    t = map_1(t, generate_pp_entries_0);
    {
      ATerm e_2 (ATerm t)
      {
        ATerm m_11 = t;
        if(PushChoice()==0)
          {
            ATerm a_24 = NULL;
            a_24 = t;
            c_23 :
            if(!(match_cons(a_24, sym_Nil_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          t = m_11;
        return(t);
      }
      t = filter_1(t, e_2);
      t = concat_0(t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(b_24));
      {
        ATerm g_2 (ATerm t)
        {
          ATerm h_2 (ATerm t)
          {
            ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
            e_24 = t;
            k_23 :
            if(match_cons(e_24, sym_Arg_1))
              {
                f_24 = ATgetArgument(e_24, 0);
                {
                  ATerm h_24 = NULL;
                  t = not_null(f_24);
                  t = int_to_string_0(t);
                  h_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(h_24));
                }
              }
            else
              {
                if(match_cons(e_24, sym_selector_2))
                  {
                    f_24 = ATgetArgument(e_24, 0);
                    d_24 = ATgetArgument(e_24, 1);
                    {
                      ATerm l_24 = NULL;
                      t = not_null(f_24);
                      t = int_to_string_0(t);
                      l_24 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(l_24), not_null(d_24));
                    }
                  }
                else
                  {
                    if(match_cons(e_24, sym_S_1))
                      {
                        f_24 = ATgetArgument(e_24, 0);
                        {
                          ATerm o_24 = NULL;
                          t = not_null(f_24);
                          t = quote_0(t);
                          o_24 = t;
                          t = (ATerm) ATmakeAppl(sym_S_1, not_null(o_24));
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            return(t);
          }
          t = try_1(t, h_2);
          return(t);
        }
        t = topdown_1(t, g_2);
      }
    }
  }
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_38 (ATerm), ATerm j_38 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_TCons_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      {
        ATerm n_25 = NULL;
        t = not_null(j_25);
        {
          ATerm p_25 = NULL;
          t = i_38(t);
          n_25 = t;
          t = not_null(k_25);
          t = j_38(t);
          p_25 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_25), not_null(p_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  y_25 = t;
  v_25 :
  if(match_cons(y_25, sym_TCons_2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      w_25 :
      if(match_cons(a_26, sym_TCons_2))
        {
          b_26 = ATgetArgument(a_26, 0);
          c_26 = ATgetArgument(a_26, 1);
          x_25 :
          if(match_cons(c_26, sym_TNil_0))
            t = SSL_mkterm(not_null(z_25), not_null(b_26));
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
ATerm OutId_1 (ATerm t, ATerm u_38 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  n_26 = t;
  j_26 :
  if(match_cons(n_26, sym_TCons_2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      k_26 :
      if(match_string(o_26, "out-type"))
        {
          l_26 :
          if(match_cons(p_26, sym_TCons_2))
            {
              q_26 = ATgetArgument(p_26, 0);
              r_26 = ATgetArgument(p_26, 1);
              m_26 :
              if(match_cons(r_26, sym_TNil_0))
                {
                  ATerm t_26 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm v_26 = NULL;
                    t = u_38(t);
                    t_26 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = mkterm_0(t);
                    v_26 = t;
                    t = not_null(v_26);
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
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_11;
  n_11 = t;
  {
    ATerm j_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, j_2, _id);
    t = printnl_0(t);
  }
  t = n_11;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm o_11;
  o_11 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = o_11;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm a_27 (ATerm t)
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        t = i_57(t);
        PopChoice();
      }
    else
      {
        t = p_11;
        t = _one(t, a_27);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,o_27 = NULL;
  g_27 = t;
  d_27 :
  if(match_cons(g_27, sym_TCons_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      e_27 :
      if(match_cons(i_27, sym_TCons_2))
        {
          j_27 = ATgetArgument(i_27, 0);
          o_27 = ATgetArgument(i_27, 1);
          f_27 :
          if(match_cons(o_27, sym_TNil_0))
            {
              t = not_null(j_27);
              {
                ATerm o_2 (ATerm t)
                {
                  ATerm r_27 = NULL;
                  r_27 = t;
                  if(h_27 != NULL && h_27 != r_27)
                    _fail(r_27);
                  else
                    h_27 = r_27;
                  return(t);
                }
                t = oncetd_1(t, o_2);
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
ATerm get_options_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm b_28 = NULL;
  ATerm d_28 = NULL;
  b_28 = t;
  t = get_options_0(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_28), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = in_0(t);
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm q_11;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = i_44(t);
  t = check_option_0(t);
  t = q_11;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm r_11 = t;
  if(PushChoice()==0)
    {
      ATerm p_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Strict_0);
        return(t);
      }
      t = has_option_1(t, p_2);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
      t = fatal_error_0(t);
      PopChoice();
    }
  else
    {
      t = r_11;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
      t = error_0(t);
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm t_38 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  x_28 = t;
  t_28 :
  if(match_cons(x_28, sym_TCons_2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      u_28 :
      if(match_string(y_28, "in-type"))
        {
          v_28 :
          if(match_cons(z_28, sym_TCons_2))
            {
              a_29 = ATgetArgument(z_28, 0);
              b_29 = ATgetArgument(z_28, 1);
              w_28 :
              if(match_cons(b_29, sym_TNil_0))
                {
                  ATerm d_29 = NULL,e_29 = NULL;
                  ATerm f_29 = NULL;
                  ATerm h_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
                  t = not_null(a_29);
                  f_29 = t;
                  t = SSL_explode_term(not_null(f_29));
                  h_29 = t;
                  o_28 :
                  if(match_cons(h_29, sym_TCons_2))
                    {
                      j_29 = ATgetArgument(h_29, 0);
                      k_29 = ATgetArgument(h_29, 1);
                      p_28 :
                      if(match_cons(k_29, sym_TCons_2))
                        {
                          l_29 = ATgetArgument(k_29, 0);
                          o_29 = ATgetArgument(k_29, 1);
                          q_28 :
                          if(match_cons(l_29, sym_Cons_2))
                            {
                              m_29 = ATgetArgument(l_29, 0);
                              n_29 = ATgetArgument(l_29, 1);
                              r_28 :
                              if(match_cons(n_29, sym_Nil_0))
                                {
                                  s_28 :
                                  if(match_cons(o_29, sym_TNil_0))
                                    {
                                      if(e_29 != NULL && e_29 != j_29)
                                        _fail(j_29);
                                      else
                                        e_29 = j_29;
                                      if(d_29 != NULL && d_29 != m_29)
                                        _fail(m_29);
                                      else
                                        d_29 = m_29;
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
                  t = not_null(e_29);
                  {
                    ATerm s_11 = t;
                    if(PushChoice()==0)
                      {
                        t = t_38(t);
                        PopChoice();
                      }
                    else
                      {
                        t = s_11;
                        t = type_failure_0(t);
                      }
                    t = not_null(d_29);
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
  return(t);
}
ATerm InOutId_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm u_11 = t;
  if(PushChoice()==0)
    {
      ATerm q_2 (ATerm t)
      {
        ATerm u_29 = NULL;
        u_29 = t;
        s_29 :
        if(!(match_string(u_29, "in-type")))
          _fail(t);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, q_2, r_2);
      t = InId_1(t, d_0);
      PopChoice();
    }
  else
    {
      t = u_11;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm v_29 = NULL;
          v_29 = t;
          t_29 :
          if(!(match_string(v_29, "out-type")))
            _fail(t);
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, t_2, v_2);
        t = OutId_1(t, e_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm b_39 (ATerm))
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  b_30 = t;
  y_29 :
  if(match_cons(b_30, sym_TCons_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      z_29 :
      if(match_cons(d_30, sym_TCons_2))
        {
          e_30 = ATgetArgument(d_30, 0);
          f_30 = ATgetArgument(d_30, 1);
          a_30 :
          if(match_cons(f_30, sym_TNil_0))
            {
              ATerm i_30 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = b_39(t);
              i_30 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm try_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm v_11 = t;
  if(PushChoice()==0)
    {
      t = t_59(t);
      PopChoice();
    }
  else
    t = v_11;
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm z_38 (ATerm))
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  b_33 = t;
  y_32 :
  if(match_cons(b_33, sym_TCons_2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      z_32 :
      if(match_cons(d_33, sym_TCons_2))
        {
          e_33 = ATgetArgument(d_33, 0);
          f_33 = ATgetArgument(d_33, 1);
          a_33 :
          if(match_cons(f_33, sym_TNil_0))
            {
              ATerm i_33 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_33), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = z_38(t);
              i_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm default_usage_0 (ATerm t)
{
  ATerm o_33 = NULL;
  ATerm w_11;
  w_11 = t;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm p_33 = NULL,q_33 = NULL;
      p_33 = t;
      n_33 :
      if(match_cons(p_33, sym_Program_1))
        {
          q_33 = ATgetArgument(p_33, 0);
          if(o_33 != NULL && o_33 != q_33)
            _fail(q_33);
          else
            o_33 = q_33;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = w_11;
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
ATerm report_success_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      ATerm x_11 = t;
      if(PushChoice()==0)
        {
          ATerm b_3 (ATerm t)
          {
            ATerm z_33 = NULL;
            z_33 = t;
            s_33 :
            if(!(match_cons(z_33, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_3);
          PopChoice();
          _fail(t);
        }
      else
        t = x_11;
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, y_2, a_3);
    {
      ATerm c_3 (ATerm t)
      {
        ATerm h_3 (ATerm t)
        {
          ATerm a_34 = NULL,b_34 = NULL;
          a_34 = t;
          u_33 :
          if(match_cons(a_34, sym_Runtime_1))
            {
              b_34 = ATgetArgument(a_34, 0);
              if(y_33 != NULL && y_33 != b_34)
                _fail(b_34);
              else
                y_33 = b_34;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_3);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, c_3, d_3);
      {
        ATerm j_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            ATerm c_34 = NULL,d_34 = NULL;
            c_34 = t;
            w_33 :
            if(match_cons(c_34, sym_Program_1))
              {
                d_34 = ATgetArgument(c_34, 0);
                if(x_33 != NULL && x_33 != d_34)
                  _fail(d_34);
                else
                  x_33 = d_34;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_3);
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, j_3, k_3);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_33), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, x_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  k_34 = t;
  h_34 :
  if(match_cons(k_34, sym_TCons_2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      i_34 :
      if(match_cons(m_34, sym_TCons_2))
        {
          n_34 = ATgetArgument(m_34, 0);
          o_34 = ATgetArgument(m_34, 1);
          j_34 :
          if(match_cons(o_34, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(l_34), not_null(n_34));
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
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  w_34 = t;
  t_34 :
  if(match_cons(w_34, sym_TCons_2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      u_34 :
      if(match_cons(y_34, sym_TCons_2))
        {
          z_34 = ATgetArgument(y_34, 0);
          a_35 = ATgetArgument(y_34, 1);
          v_34 :
          if(match_cons(a_35, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(x_34), not_null(z_34));
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
  ATerm k_35 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm z_11 = t;
      if(PushChoice()==0)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm l_35 = NULL,t_35 = NULL;
            l_35 = t;
            h_35 :
            if(match_cons(l_35, sym_Output_1))
              {
                t_35 = ATgetArgument(l_35, 0);
                if(k_35 != NULL && k_35 != t_35)
                  _fail(t_35);
                else
                  k_35 = t_35;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_3);
          PopChoice();
        }
      else
        {
          t = z_11;
          {
            ATerm u_35 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            u_35 = t;
            if(k_35 != NULL && k_35 != u_35)
              _fail(u_35);
            else
              k_35 = u_35;
          }
        }
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, m_3, n_3);
  }
  t = y_11;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = not_null(k_35);
          return(t);
        }
        t = split_2(t, y_3, _id);
        return(t);
      }
      t = TCons_2(t, x_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, w_3);
    {
      ATerm a_12 = t;
      if(PushChoice()==0)
        {
          ATerm a_4 (ATerm t)
          {
            ATerm c_4 (ATerm t)
            {
              ATerm v_35 = NULL;
              v_35 = t;
              j_35 :
              if(!(match_cons(v_35, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, c_4);
            return(t);
          }
          ATerm b_4 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, a_4, b_4);
          PopChoice();
        }
      else
        {
          t = a_12;
          {
            ATerm d_4 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, d_4);
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
ATerm apply_strategy_1 (ATerm t, ATerm m_44 (ATerm))
{
  ATerm d_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  ATerm b_12;
  b_12 = t;
  t = dtime_0(t);
  t = b_12;
  t = m_44(t);
  {
    ATerm c_12;
    c_12 = t;
    {
      ATerm e_36 = NULL;
      t = dtime_0(t);
      e_36 = t;
      if(d_36 != NULL && d_36 != e_36)
        _fail(e_36);
      else
        d_36 = e_36;
    }
    t = c_12;
    f_36 = t;
    a_36 :
    if(match_cons(f_36, sym_TCons_2))
      {
        g_36 = ATgetArgument(f_36, 0);
        h_36 = ATgetArgument(f_36, 1);
        b_36 :
        if(match_cons(h_36, sym_TCons_2))
          {
            i_36 = ATgetArgument(h_36, 0);
            j_36 = ATgetArgument(h_36, 1);
            c_36 :
            if(match_cons(j_36, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(d_36)), not_null(g_36)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_36), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm p_36 = NULL;
  p_36 = t;
  t = SSL_ReadFromFile(not_null(p_36));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm v_36 = NULL;
  ATerm x_36 = NULL;
  v_36 = t;
  {
    ATerm z_36 = NULL;
    t = q_46(t);
    x_36 = t;
    t = not_null(v_36);
    t = r_46(t);
    z_36 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_36), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_37 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm e_12 = t;
    if(PushChoice()==0)
      {
        ATerm f_4 (ATerm t)
        {
          ATerm i_37 = NULL,j_37 = NULL;
          i_37 = t;
          f_37 :
          if(match_cons(i_37, sym_Input_1))
            {
              j_37 = ATgetArgument(i_37, 0);
              if(h_37 != NULL && h_37 != j_37)
                _fail(j_37);
              else
                h_37 = j_37;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, f_4);
        PopChoice();
      }
    else
      {
        t = e_12;
        {
          ATerm k_37 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          k_37 = t;
          if(h_37 != NULL && h_37 != k_37)
            _fail(k_37);
          else
            h_37 = k_37;
        }
      }
  }
  t = d_12;
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(h_37);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  n_37 :
  if(!(match_cons(o_37, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_44 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm f_12 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_12;
        {
          ATerm g_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_4);
  t = l_44(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = SSL_table_create(not_null(q_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  {
    ATerm h_12;
    h_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_37), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = h_12;
  }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,k_38 = NULL,l_38 = NULL,o_38 = NULL;
  e_38 = t;
  a_38 :
  if(match_cons(e_38, sym_TCons_2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      b_38 :
      if(match_cons(g_38, sym_TCons_2))
        {
          h_38 = ATgetArgument(g_38, 0);
          k_38 = ATgetArgument(g_38, 1);
          c_38 :
          if(match_cons(k_38, sym_TCons_2))
            {
              l_38 = ATgetArgument(k_38, 0);
              o_38 = ATgetArgument(k_38, 1);
              d_38 :
              if(match_cons(o_38, sym_TNil_0))
                {
                  ATerm i_12;
                  i_12 = t;
                  {
                    ATerm x_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm j_12 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = j_12;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      x_38 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_38), not_null(x_38)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = i_12;
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
ATerm register_usage_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm g_39 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = w_42(t);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_39), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  s_39 = t;
  m_39 :
  if(match_cons(s_39, sym_Cons_2))
    {
      o_39 = ATgetArgument(s_39, 0);
      p_39 = ATgetArgument(s_39, 1);
      n_39 :
      if(match_cons(p_39, sym_Cons_2))
        {
          q_39 = ATgetArgument(p_39, 0);
          r_39 = ATgetArgument(p_39, 1);
          {
            ATerm w_39 = NULL;
            t = not_null(o_39);
            t = a_0(t);
            t = not_null(q_39);
            t = b_0(t);
            w_39 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_39), not_null(r_39));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(s_39, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_12 = t;
  if(PushChoice()==0)
    {
      ATerm j_4 (ATerm t)
      {
        ATerm m_40 = NULL;
        m_40 = t;
        b_40 :
        if(!(match_string(m_40, "-S")))
          {
            if(!(match_string(m_40, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        ATerm l_12 = t;
        if(PushChoice()==0)
          {
            ATerm m_4 (ATerm t)
            {
              ATerm n_40 = NULL;
              n_40 = t;
              c_40 :
              if(!(match_string(n_40, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, m_4, n_4, o_4);
            PopChoice();
          }
        else
          {
            t = l_12;
            {
              ATerm m_12 = t;
              if(PushChoice()==0)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm o_40 = NULL;
                    o_40 = t;
                    d_40 :
                    if(!(match_string(o_40, "-v")))
                      {
                        if(!(match_string(o_40, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm r_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_4, q_4, r_4);
                  PopChoice();
                }
              else
                {
                  t = m_12;
                  {
                    ATerm n_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm p_40 = NULL;
                          p_40 = t;
                          e_40 :
                          if(!(match_string(p_40, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          ATerm q_40 = NULL;
                          q_40 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_40));
                          return(t);
                        }
                        ATerm x_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, v_4, w_4, x_4);
                        PopChoice();
                      }
                    else
                      {
                        t = n_12;
                        {
                          ATerm o_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm y_4 (ATerm t)
                              {
                                ATerm s_40 = NULL;
                                s_40 = t;
                                g_40 :
                                if(!(match_string(s_40, "-i")))
                                  {
                                    if(!(match_string(s_40, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_4 (ATerm t)
                              {
                                ATerm t_40 = NULL;
                                t_40 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_40));
                                return(t);
                              }
                              ATerm r_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, y_4, z_4, r_5);
                              PopChoice();
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm p_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm s_5 (ATerm t)
                                    {
                                      ATerm v_40 = NULL;
                                      v_40 = t;
                                      i_40 :
                                      if(!(match_string(v_40, "-o")))
                                        {
                                          if(!(match_string(v_40, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_5 (ATerm t)
                                    {
                                      ATerm w_40 = NULL;
                                      w_40 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_40));
                                      return(t);
                                    }
                                    ATerm u_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_5, t_5, u_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_12;
                                    {
                                      ATerm q_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_5 (ATerm t)
                                          {
                                            ATerm y_40 = NULL;
                                            y_40 = t;
                                            k_40 :
                                            if(!(match_string(y_40, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm x_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, v_5, w_5, x_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm a_6 (ATerm t)
                                            {
                                              ATerm z_40 = NULL;
                                              z_40 = t;
                                              l_40 :
                                              if(!(match_string(z_40, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm b_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm c_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, a_6, b_6, c_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_table_destroy(not_null(e_41));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  t = SSL_exit(not_null(i_41));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  t = SSL_implode_string(not_null(m_41));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm p_41 (ATerm t)
  {
    ATerm v_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, p_41);
        PopChoice();
      }
    else
      {
        t = v_12;
        t = Nil_0(t);
        t = r_53(t);
      }
    return(t);
  }
  t = p_41(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = w_12;
      {
        ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
        s_41 = t;
        r_41 :
        if(match_cons(s_41, sym_Cons_2))
          {
            t_41 = ATgetArgument(s_41, 0);
            u_41 = ATgetArgument(s_41, 1);
            t = not_null(t_41);
            {
              ATerm i_6 (ATerm t)
              {
                t = not_null(u_41);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, i_6);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  t = SSL_explode_string(not_null(a_42));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_42 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm d_42 (ATerm t)
  {
    ATerm y_12 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = y_12;
        t = Cons_2(t, d_53, d_42);
      }
    return(t);
  }
  t = d_42(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  j_42 = t;
  f_42 :
  if(match_cons(j_42, sym_TCons_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      g_42 :
      if(match_cons(k_42, sym_Nil_0))
        {
          h_42 :
          if(match_cons(l_42, sym_TCons_2))
            {
              m_42 = ATgetArgument(l_42, 0);
              n_42 = ATgetArgument(l_42, 1);
              i_42 :
              if(match_cons(n_42, sym_TNil_0))
                t = not_null(m_42);
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
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  b_43 = t;
  x_42 :
  if(match_cons(b_43, sym_TCons_2))
    {
      c_43 = ATgetArgument(b_43, 0);
      f_43 = ATgetArgument(b_43, 1);
      y_42 :
      if(match_cons(c_43, sym_Cons_2))
        {
          d_43 = ATgetArgument(c_43, 0);
          e_43 = ATgetArgument(c_43, 1);
          z_42 :
          if(match_cons(f_43, sym_TCons_2))
            {
              g_43 = ATgetArgument(f_43, 0);
              h_43 = ATgetArgument(f_43, 1);
              a_43 :
              if(match_cons(h_43, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_43), not_null(g_43)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm m_43 (ATerm t)
  {
    ATerm z_12 = t;
    if(PushChoice()==0)
      {
        t = w_58(t);
        t = m_43(t);
        PopChoice();
      }
    else
      {
        t = z_12;
        t = x_58(t);
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_58 (ATerm))
{
  t = repeat_2(t, z_58, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  y_43 = t;
  t_43 :
  if(match_cons(y_43, sym_TCons_2))
    {
      z_43 = ATgetArgument(y_43, 0);
      d_44 = ATgetArgument(y_43, 1);
      u_43 :
      if(match_cons(d_44, sym_TCons_2))
        {
          e_44 = ATgetArgument(d_44, 0);
          f_44 = ATgetArgument(d_44, 1);
          x_43 :
          if(match_cons(f_44, sym_TNil_0))
            t = SSL_table_get(not_null(z_43), not_null(e_44));
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
ATerm short_description_1 (ATerm t, ATerm r_42 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_35 (ATerm))
{
  ATerm p_44 = NULL,q_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_Program_1))
    {
      q_44 = ATgetArgument(p_44, 0);
      {
        ATerm s_44 = NULL;
        t = not_null(q_44);
        t = b_35(t);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_45 = NULL;
  ATerm i_7 (ATerm t)
  {
    ATerm k_7 (ATerm t)
    {
      ATerm c_45 = NULL;
      c_45 = t;
      if(b_45 != NULL && b_45 != c_45)
        _fail(c_45);
      else
        b_45 = c_45;
      return(t);
    }
    t = Program_1(t, k_7);
    return(t);
  }
  t = option_defined_1(t, i_7);
  {
    ATerm l_7 (ATerm t)
    {
      ATerm d_45 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm m_7 (ATerm t)
        {
          t = not_null(b_45);
          return(t);
        }
        t = short_description_1(t, m_7);
        t = concat_strings_0(t);
        d_45 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_45), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm n_7 (ATerm t)
      {
        ATerm f_45 = NULL;
        f_45 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_45), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, n_7);
      {
        ATerm o_7 (ATerm t)
        {
          ATerm h_45 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm p_7 (ATerm t)
            {
              t = not_null(b_45);
              return(t);
            }
            t = long_description_1(t, p_7);
            t = concat_strings_0(t);
            h_45 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_45), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, o_7);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  r_45 = t;
  o_45 :
  if(match_cons(r_45, sym_TCons_2))
    {
      s_45 = ATgetArgument(r_45, 0);
      t_45 = ATgetArgument(r_45, 1);
      p_45 :
      if(match_cons(t_45, sym_TCons_2))
        {
          u_45 = ATgetArgument(t_45, 0);
          v_45 = ATgetArgument(t_45, 1);
          q_45 :
          if(match_cons(v_45, sym_TNil_0))
            {
              ATerm a_13;
              a_13 = t;
              t = SSL_printnl(not_null(s_45), not_null(u_45));
              t = a_13;
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
ATerm Undefined_1 (ATerm t, ATerm c_35 (ATerm))
{
  ATerm c_46 = NULL,d_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym_Undefined_1))
    {
      d_46 = ATgetArgument(c_46, 0);
      {
        ATerm f_46 = NULL;
        t = not_null(d_46);
        t = c_35(t);
        f_46 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_46));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm j_46 (ATerm t)
  {
    ATerm c_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, l_53, _id);
        PopChoice();
      }
    else
      {
        t = c_13;
        t = Cons_2(t, _id, j_46);
      }
    return(t);
  }
  t = j_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_43 (ATerm))
{
  t = fetch_1(t, q_43);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  k_46 :
  if(!(match_cons(l_46, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm n_46 = NULL;
    n_46 = t;
    m_46 :
    if(!(match_string(n_46, "--help")))
      {
        if(!(match_string(n_46, "-h")))
          {
            if(!(match_string(n_46, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, q_7, r_7, s_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  p_46 :
  if(match_cons(s_46, sym_Cons_2))
    {
      t_46 = ATgetArgument(s_46, 0);
      u_46 = ATgetArgument(s_46, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_46)), not_null(u_46));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_38 (ATerm), ATerm n_38 (ATerm))
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym_Cons_2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      {
        ATerm h_47 = NULL;
        t = not_null(d_47);
        {
          ATerm k_47 = NULL;
          t = m_38(t);
          h_47 = t;
          t = not_null(e_47);
          t = n_38(t);
          k_47 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_47), not_null(k_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  p_47 :
  if(!(match_cons(q_47, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_42 (ATerm))
{
  ATerm d_13;
  d_13 = t;
  {
    ATerm t_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = u_42(t);
      return(t);
    }
    t = try_1(t, t_7);
  }
  t = d_13;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm s_47 = NULL;
      s_47 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_47));
      return(t);
    }
    ATerm y_7 (ATerm t)
    {
      ATerm e_13 = t;
      if(PushChoice()==0)
        {
          ATerm f_13 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_13;
              t = u_42(t);
              t = Cons_2(t, _id, y_7);
            }
          PopChoice();
        }
      else
        {
          t = e_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_7, y_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_48 = NULL,f_48 = NULL,g_48 = NULL;
  ATerm g_13;
  g_13 = t;
  {
    ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
    h_48 = t;
    x_47 :
    if(match_cons(h_48, sym_TCons_2))
      {
        i_48 = ATgetArgument(h_48, 0);
        j_48 = ATgetArgument(h_48, 1);
        y_47 :
        if(match_cons(j_48, sym_TCons_2))
          {
            k_48 = ATgetArgument(j_48, 0);
            l_48 = ATgetArgument(j_48, 1);
            z_47 :
            if(match_cons(l_48, sym_TCons_2))
              {
                m_48 = ATgetArgument(l_48, 0);
                n_48 = ATgetArgument(l_48, 1);
                a_48 :
                if(match_cons(n_48, sym_TNil_0))
                  {
                    if(b_48 != NULL && b_48 != i_48)
                      _fail(i_48);
                    else
                      b_48 = i_48;
                    if(f_48 != NULL && f_48 != k_48)
                      _fail(k_48);
                    else
                      f_48 = k_48;
                    if(g_48 != NULL && g_48 != m_48)
                      _fail(m_48);
                    else
                      g_48 = m_48;
                    t = SSL_table_put(not_null(b_48), not_null(f_48), not_null(g_48));
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
  t = g_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_42 (ATerm))
{
  ATerm q_48 = NULL;
  ATerm h_13;
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = h_13;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm i_13 = t;
      if(PushChoice()==0)
        {
          t = t_42(t);
          PopChoice();
        }
      else
        {
          t = i_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_8);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm j_13 = t;
        if(PushChoice()==0)
          {
            t = option_defined_1(t, Help_0);
            t = system_usage_0(t);
            t = (ATerm) ATmakeInt(0);
            t = exit_0(t);
            PopChoice();
          }
        else
          {
            t = j_13;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm m_8 (ATerm t)
                {
                  ATerm r_48 = NULL;
                  r_48 = t;
                  if(q_48 != NULL && q_48 != r_48)
                    _fail(r_48);
                  else
                    q_48 = r_48;
                  return(t);
                }
                t = Undefined_1(t, m_8);
                return(t);
              }
              t = option_defined_1(t, l_8);
              {
                ATerm k_13;
                k_13 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_48), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = k_13;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_8);
      {
        ATerm l_13;
        l_13 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = l_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm m_13 = t;
    if(PushChoice()==0)
      {
        t = b_44(t);
        PopChoice();
      }
    else
      {
        t = m_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_8);
  t = store_options_0(t);
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, c_44);
        PopChoice();
      }
    else
      {
        t = n_13;
        {
          ATerm o_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, a_44);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = o_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  t = iowrap_3(t, v_43, w_43, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm q_38 (ATerm), ATerm r_38 (ATerm), ATerm s_38 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      t = termid_check_p__1(t, q_38);
      return(t);
    }
    t = try_1(t, x_8);
    t = r_38(t);
    {
      ATerm y_8 (ATerm t)
      {
        t = termid_set_p__1(t, q_38);
        return(t);
      }
      t = try_1(t, y_8);
    }
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    ATerm t_13 = t;
    if(PushChoice()==0)
      {
        t = s_38(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        {
          ATerm z_8 (ATerm t)
          {
            ATerm u_48 = NULL;
            u_48 = t;
            t_48 :
            if(!(match_string(u_48, "--strict")))
              _fail(t);
            return(t);
          }
          ATerm a_9 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Strict_0);
            return(t);
          }
          ATerm b_9 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
            return(t);
          }
          t = Option_3(t, z_8, a_9, b_9);
        }
      }
    return(t);
  }
  t = iowrap_2(t, q_8, w_8);
  return(t);
}
ATerm Ppgen_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm f_9 (ATerm t)
    {
      ATerm x_48 = NULL;
      x_48 = t;
      v_48 :
      if(!(match_string(x_48, "\"sdf-2.1\"")))
        _fail(t);
      return(t);
    }
    ATerm g_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
      return(t);
    }
    t = InOutId_2(t, f_9, g_9);
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    ATerm h_9 (ATerm t)
    {
      t = TCons_2(t, ppgenerate_0, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, h_9);
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    ATerm i_9 (ATerm t)
    {
      ATerm y_48 = NULL;
      y_48 = t;
      w_48 :
      if(!(match_string(y_48, "-v")))
        _fail(t);
      return(t);
    }
    ATerm j_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Verbose_0);
      return(t);
    }
    ATerm k_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
      return(t);
    }
    t = Option_3(t, i_9, j_9, k_9);
    return(t);
  }
  t = io_idwrap_3(t, c_9, d_9, e_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ppgen_0(t);
  return(t);
}

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
Symbol sym_Verbose_0;
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
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_Symbol_s_1;
Symbol sym_TagId_empty_0;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_qlit_1;
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
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_bracket_symbol_1;
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
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
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
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
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
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
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
ATerm term_p_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_k_24;
ATerm term_z_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_d_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_r_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_u_11;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_a_7;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_p_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Arg_1, term_l_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_e_9, term_h_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_lit_1, term_b_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_lit_1, term_h_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_m_5);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_m_5);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_m_5);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_k_20);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_m_5);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, (ATerm) ATempty);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_70 (ATerm));
ATerm filter_1 (ATerm, ATerm w_83 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm j_59 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm i_68 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm e_60 (ATerm));
ATerm iter_1 (ATerm, ATerm d_60 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm y_59 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm l_68 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm h_68 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm f_77 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm crush_3 (ATerm, ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm collect_p__1 (ATerm, ATerm e_96 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_71 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm i_88 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm p_96 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm q_96 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm x_96 (ATerm));
ATerm try_1 (ATerm, ATerm o_68 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm v_96 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_90 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_92 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_82 (ATerm), ATerm u_82 (ATerm));
ATerm crush_2 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_88 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_92 (ATerm));
ATerm map_1 (ATerm, ATerm f_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_92 (ATerm));
ATerm Program_1 (ATerm, ATerm s_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_92 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm f_89 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_88 (ATerm), ATerm v_88 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm));
ATerm Pp_gen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_3 = NULL,n_3 = NULL,v_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_string(d_3, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(d_3) == AT_LIST) && !(ATisEmpty(d_3))))
        {
          n_3 = ATgetFirst((ATermList) d_3);
          v_3 = (ATerm) ATgetNext((ATermList) d_3);
          {
            ATerm z_3 = NULL;
            ATerm i_5;
            i_5 = t;
            {
              t = not_null(n_3);
              t = l_0(t);
            }
            t = i_5;
            {
              ATerm b_4 = NULL;
              t = term_m_5;
              {
                t = m_0(t);
                {
                  b_4 = t;
                  if(((z_3 != NULL) && (z_3 != b_4)))
                    _fail(b_4);
                  else
                    z_3 = b_4;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_3)), not_null(z_3));
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
ATerm Quote_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_5)), not_null(h_4)), (ATerm) ATinsert(ATempty, term_p_5));
    t = concat_0(t);
  }
  return(t);
}
ATerm quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = Quote_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = SSL_int_to_string(not_null(m_4));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_70 (ATerm))
{
  t = c_70(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, c_70);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, w_83);
              return(t);
            }
            t = Cons_2(t, w_83, c_0);
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(((ATgetType(r_4) == AT_LIST) && !(ATisEmpty(r_4))))
                {
                  s_4 = ATgetFirst((ATermList) r_4);
                  t_4 = (ATerm) ATgetNext((ATermList) r_4);
                  {
                    t = not_null(t_4);
                    t = filter_1(t, w_83);
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
ATerm argument_list_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        x_4 = t;
        {
          ATerm d_6 = t;
          if((PushChoice() == 0))
            {
              t = is_list_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_6;
            }
          t = (ATerm) ATinsert(ATempty, not_null(x_4));
        }
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
        {
        }
      }
    return(t);
  }
  t = map_1(t, e_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Arg_1))
    {
      g_5 = ATgetArgument(f_5, 0);
      {
        ATerm j_5 = NULL,l_5 = NULL;
        ATerm k_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          k_5 = t;
          if(((j_5 != NULL) && (j_5 != k_5)))
            _fail(k_5);
          else
            j_5 = k_5;
        }
        {
          t = not_null(g_5);
          {
            ATerm n_5 = NULL;
            t = j_59(t);
            {
              l_5 = t;
              {
                ATerm o_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(l_5)), not_null(j_5));
                {
                  o_5 = t;
                  if(((n_5 != NULL) && (n_5 != o_5)))
                    _fail(o_5);
                  else
                    n_5 = o_5;
                }
                t = not_null(n_5);
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
ATerm flat_alt_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  ATerm n_6 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_6)), not_null(b_6));
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
            ATerm e_6 = t;
            int f_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 = NULL;
                ATerm h_6 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(y_5), not_null(z_5));
                {
                  t = flat_alt_0(t);
                  {
                    h_6 = t;
                    if(((g_6 != NULL) && (g_6 != h_6)))
                      _fail(h_6);
                    else
                      g_6 = h_6;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(g_6)), not_null(b_6));
                LocalPopChoice(f_6);
              }
            else
              {
                t = e_6;
                t = n_6(t);
              }
          }
        }
      else
        {
          t = n_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm i_68 (ATerm))
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_m_5;
    t = i_68(t);
    return(t);
  }
  t = split_2(t, f_0, _id);
  {
    ATerm k_9 (ATerm t)
    {
      ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
      ATerm m_9 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm n_9 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm o_9 (ATerm t)
      {
        ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
        if(((p_7 != NULL) && (p_7 != y_7)))
          _fail(y_7);
        else
          p_7 = y_7;
        {
          if(((q_7 != NULL) && (q_7 != z_7)))
            _fail(z_7);
          else
            q_7 = z_7;
          {
            if(((r_7 != NULL) && (r_7 != b_8)))
              _fail(b_8);
            else
              r_7 = b_8;
            {
              if(((d_8 != NULL) && (d_8 != v_7)))
                _fail(v_7);
              else
                d_8 = v_7;
              {
                if(((e_8 != NULL) && (e_8 != t_7)))
                  _fail(t_7);
                else
                  e_8 = t_7;
                {
                  if(((f_8 != NULL) && (f_8 != u_7)))
                    _fail(u_7);
                  else
                    f_8 = u_7;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(d_8), (ATerm) ATmakeAppl(sym_alt_2, not_null(e_8), not_null(f_8)));
                    {
                      ATerm i_8 = NULL;
                      t = flat_alt_0(t);
                      {
                        g_8 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(g_8));
                          {
                            t = mkterm_0(t);
                            {
                              i_8 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_7), not_null(q_7)), (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(i_8)));
                                {
                                  t = k_9(t);
                                  {
                                    ATerm o_0 (ATerm t)
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        ATerm j_6 = t;
                                        int k_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Arg_1(t, _id);
                                            t = term_m_6;
                                            LocalPopChoice(k_6);
                                          }
                                        else
                                          {
                                            t = j_6;
                                            {
                                            }
                                          }
                                        return(t);
                                      }
                                      t = topdown_1(t, p_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, o_0, _id);
                                  }
                                }
                              }
                            }
                          }
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
      ATerm p_9 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_7), not_null(z_7)), (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(v_7)));
        t = k_9(t);
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        ATerm s_8 = NULL,t_8 = NULL,z_8 = NULL;
        ATerm u_8 = NULL;
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
        t = not_null(c_8);
        {
          u_8 = t;
          {
            t = SSL_explode_term(not_null(u_8));
            {
              w_8 = t;
              z_6 :
              if(match_cons(w_8, sym__2))
                {
                  x_8 = ATgetArgument(w_8, 0);
                  y_8 = ATgetArgument(w_8, 1);
                  {
                    if(((s_8 != NULL) && (s_8 != x_8)))
                      _fail(x_8);
                    else
                      s_8 = x_8;
                    if(((t_8 != NULL) && (t_8 != y_8)))
                      _fail(y_8);
                    else
                      t_8 = y_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(b_8), not_null(s_8))));
          {
            ATerm b_9 = NULL,i_9 = NULL;
            ATerm o_6 = t;
            int p_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(p_6);
              }
            else
              {
                t = o_6;
                t = conc_more_lists_0(t);
              }
            {
              z_8 = t;
              {
                t = not_null(t_8);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm q_6;
                      q_6 = t;
                      {
                        ATerm c_9 = NULL;
                        t = make_0(t);
                        {
                          c_9 = t;
                          if(((b_9 != NULL) && (b_9 != c_9)))
                            _fail(c_9);
                          else
                            b_9 = c_9;
                        }
                      }
                      t = q_6;
                      {
                        ATerm q_0 (ATerm t)
                        {
                          ATerm d_9 = NULL;
                          ATerm f_9 = NULL;
                          d_9 = t;
                          {
                            ATerm g_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_7), not_null(z_8)), not_null(d_9));
                            {
                              t = k_9(t);
                              {
                                g_9 = t;
                                if(((f_9 != NULL) && (f_9 != g_9)))
                                  _fail(g_9);
                                else
                                  f_9 = g_9;
                              }
                            }
                            t = not_null(f_9);
                          }
                          return(t);
                        }
                        t = map_1(t, q_0);
                        {
                          t = concat_0(t);
                          {
                            i_9 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(y_7), not_null(z_8)), not_null(b_9)));
                          }
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
      w_7 = t;
      f_7 :
      if(match_cons(w_7, sym__2))
        {
          x_7 = ATgetArgument(w_7, 0);
          a_8 = ATgetArgument(w_7, 1);
          g_7 :
          if(match_cons(a_8, sym_lit_1))
            {
              b_8 = ATgetArgument(a_8, 0);
              h_7 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(a_8, sym__2))
                {
                  b_8 = ATgetArgument(a_8, 0);
                  c_8 = ATgetArgument(a_8, 1);
                  i_7 :
                  if(match_cons(c_8, sym_sort_1))
                    {
                      v_7 = ATgetArgument(c_8, 0);
                      j_7 :
                      if(match_cons(x_7, sym__2))
                        {
                          y_7 = ATgetArgument(x_7, 0);
                          z_7 = ATgetArgument(x_7, 1);
                          {
                            ATerm r_6 = t;
                            int s_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_9(t);
                                LocalPopChoice(s_6);
                              }
                            else
                              {
                                t = r_6;
                                t = q_9(t);
                              }
                          }
                        }
                      else
                        {
                          t = m_9(t);
                        }
                    }
                  else
                    {
                      if(match_cons(c_8, sym_char_class_1))
                        {
                          v_7 = ATgetArgument(c_8, 0);
                          k_7 :
                          if(match_cons(x_7, sym__2))
                            {
                              y_7 = ATgetArgument(x_7, 0);
                              z_7 = ATgetArgument(x_7, 1);
                              {
                                ATerm t_6 = t;
                                int u_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_9(t);
                                    LocalPopChoice(u_6);
                                  }
                                else
                                  {
                                    t = t_6;
                                    t = q_9(t);
                                  }
                              }
                            }
                          else
                            {
                              t = n_9(t);
                            }
                        }
                      else
                        {
                          if(match_cons(c_8, sym_alt_2))
                            {
                              v_7 = ATgetArgument(c_8, 0);
                              s_7 = ATgetArgument(c_8, 1);
                              l_7 :
                              if(match_cons(x_7, sym__2))
                                {
                                  y_7 = ATgetArgument(x_7, 0);
                                  z_7 = ATgetArgument(x_7, 1);
                                  m_7 :
                                  if(match_cons(s_7, sym_alt_2))
                                    {
                                      t_7 = ATgetArgument(s_7, 0);
                                      u_7 = ATgetArgument(s_7, 1);
                                      {
                                        ATerm v_6 = t;
                                        int w_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_9(t);
                                            LocalPopChoice(w_6);
                                          }
                                        else
                                          {
                                            t = v_6;
                                            t = q_9(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_9(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(c_8, sym_bracket_symbol_1))
                                {
                                  v_7 = ATgetArgument(c_8, 0);
                                  n_7 :
                                  if(match_cons(x_7, sym__2))
                                    {
                                      y_7 = ATgetArgument(x_7, 0);
                                      z_7 = ATgetArgument(x_7, 1);
                                      {
                                        ATerm x_6 = t;
                                        int y_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_9(t);
                                            LocalPopChoice(y_6);
                                          }
                                        else
                                          {
                                            t = x_6;
                                            t = q_9(t);
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
                                  o_7 :
                                  if(match_cons(x_7, sym__2))
                                    {
                                      y_7 = ATgetArgument(x_7, 0);
                                      z_7 = ATgetArgument(x_7, 1);
                                      t = q_9(t);
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
    t = k_9(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_lit_1))
    {
      e_10 = ATgetArgument(d_10, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_7, (ATerm) ATmakeAppl(sym_S_1, not_null(e_10)));
    }
  else
    {
      if(match_cons(d_10, sym__2))
        {
          e_10 = ATgetArgument(d_10, 0);
          f_10 = ATgetArgument(d_10, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(e_10));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_iter_star_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm x_10 = NULL;
            t = e_60(t);
            {
              v_10 = t;
              {
                ATerm y_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(v_10)), not_null(t_10));
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
                t = not_null(x_10);
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
ATerm iter_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_iter_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm m_11 = NULL,o_11 = NULL;
        ATerm n_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          n_11 = t;
          if(((m_11 != NULL) && (m_11 != n_11)))
            _fail(n_11);
          else
            m_11 = n_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm q_11 = NULL;
            t = d_60(t);
            {
              o_11 = t;
              {
                ATerm r_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(o_11)), not_null(m_11));
                {
                  r_11 = t;
                  if(((q_11 != NULL) && (q_11 != r_11)))
                    _fail(r_11);
                  else
                    q_11 = r_11;
                }
                t = not_null(q_11);
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
ATerm pair_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
        a_12 = t;
        y_11 :
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            b_12 = ATgetFirst((ATermList) a_12);
            c_12 = (ATerm) ATgetNext((ATermList) a_12);
            z_11 :
            if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
              {
                d_12 = ATgetFirst((ATermList) c_12);
                e_12 = (ATerm) ATgetNext((ATermList) c_12);
                {
                  ATerm i_12 = NULL;
                  ATerm j_12 = NULL;
                  t = not_null(e_12);
                  {
                    t = pair_0(t);
                    {
                      j_12 = t;
                      if(((i_12 != NULL) && (i_12 != j_12)))
                        _fail(j_12);
                      else
                        i_12 = j_12;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_12)), (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(d_12)));
                }
              }
            else
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
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_iter_star_sep_2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm z_12 = NULL,b_13 = NULL;
        ATerm a_13 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        {
          t = not_null(u_12);
          {
            ATerm d_13 = NULL;
            t = b_60(t);
            {
              b_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm f_13 = NULL;
                  t = c_60(t);
                  {
                    d_13 = t;
                    {
                      ATerm g_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(b_13), not_null(d_13)), not_null(z_12));
                      {
                        g_13 = t;
                        if(((f_13 != NULL) && (f_13 != g_13)))
                          _fail(g_13);
                        else
                          f_13 = g_13;
                      }
                      t = not_null(f_13);
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
ATerm iter_sep_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_iter_sep_2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(s_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(t_13);
          {
            ATerm c_14 = NULL;
            t = z_59(t);
            {
              a_14 = t;
              {
                t = not_null(u_13);
                {
                  ATerm e_14 = NULL;
                  t = a_60(t);
                  {
                    c_14 = t;
                    {
                      ATerm f_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(a_14), not_null(c_14)), not_null(y_13));
                      {
                        f_14 = t;
                        if(((e_14 != NULL) && (e_14 != f_14)))
                          _fail(f_14);
                        else
                          e_14 = f_14;
                      }
                      t = not_null(e_14);
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
ATerm make_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
      ATerm r_0 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2(t, _id, r_0);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm h_8 = t;
            int j_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(j_8);
              }
            else
              {
                t = h_8;
                {
                  ATerm k_8 = t;
                  int l_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(l_8);
                    }
                  else
                    {
                      t = k_8;
                      {
                        ATerm m_8 = t;
                        int n_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(n_8);
                          }
                        else
                          {
                            t = m_8;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, u_0);
          t = Make_0(t);
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, v_0);
          return(t);
        }
        t = Cons_2(t, s_0, t_0);
        {
          y_14 = t;
          n_14 :
          if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
            {
              z_14 = ATgetFirst((ATermList) y_14);
              a_15 = (ATerm) ATgetNext((ATermList) y_14);
              {
                ATerm b_15 = NULL;
                if(((u_14 != NULL) && (u_14 != z_14)))
                  _fail(z_14);
                else
                  u_14 = z_14;
                {
                  if(((t_14 != NULL) && (t_14 != a_15)))
                    _fail(a_15);
                  else
                    t_14 = a_15;
                  {
                    ATerm o_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = o_8;
                      }
                    {
                      ATerm c_15 = NULL;
                      t = not_null(t_14);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = reverse_acc_2(t, _id, w_0);
                        {
                          c_15 = t;
                          if(((b_15 != NULL) && (b_15 != c_15)))
                            _fail(c_15);
                          else
                            b_15 = c_15;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(b_15))));
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
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL;
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_0);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm d_15 = NULL;
                t = Make_0(t);
                {
                  d_15 = t;
                  if(((x_14 != NULL) && (x_14 != d_15)))
                    _fail(d_15);
                  else
                    x_14 = d_15;
                }
                return(t);
              }
              ATerm z_0 (ATerm t)
              {
                ATerm e_15 = NULL;
                ATerm r_8 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_8;
                  }
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, a_1);
                  {
                    e_15 = t;
                    if(((v_14 != NULL) && (v_14 != e_15)))
                      _fail(e_15);
                    else
                      v_14 = e_15;
                  }
                }
                return(t);
              }
              t = Cons_2(t, y_0, z_0);
              {
                t = not_null(v_14);
                {
                  t = pair_0(t);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm f_15 = NULL,g_15 = NULL;
                      ATerm c_1 (ATerm t)
                      {
                        ATerm h_15 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            h_15 = t;
                            if(((f_15 != NULL) && (f_15 != h_15)))
                              _fail(h_15);
                            else
                              f_15 = h_15;
                          }
                        }
                        return(t);
                      }
                      ATerm d_1 (ATerm t)
                      {
                        ATerm i_15 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm v_8 = t;
                          int a_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(a_9);
                            }
                          else
                            {
                              t = v_8;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, e_1);
                        {
                          t = Make_0(t);
                          {
                            i_15 = t;
                            if(((g_15 != NULL) && (g_15 != i_15)))
                              _fail(i_15);
                            else
                              g_15 = i_15;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, c_1, d_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_j_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), not_null(f_15)));
                      return(t);
                    }
                    t = map_1(t, b_1);
                    {
                      j_15 = t;
                      {
                        if(((w_14 != NULL) && (w_14 != j_15)))
                          _fail(j_15);
                        else
                          w_14 = j_15;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), not_null(w_14)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_lit_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = y_59(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
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
ATerm NonTerminal_0 (ATerm t)
{
  ATerm l_9 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_9;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = split_2(t, f_1, _id);
  {
    ATerm h_17 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL,u_16 = NULL;
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
            w_16 = t;
            p_16 :
            if(match_cons(w_16, sym__2))
              {
                x_16 = ATgetArgument(w_16, 0);
                y_16 = ATgetArgument(w_16, 1);
                q_16 :
                if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
                  {
                    z_16 = ATgetFirst((ATermList) y_16);
                    a_17 = (ATerm) ATgetNext((ATermList) y_16);
                    {
                      ATerm t_9 = t;
                      int u_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_17 = NULL;
                          if(((r_16 != NULL) && (r_16 != x_16)))
                            _fail(x_16);
                          else
                            r_16 = x_16;
                          {
                            if(((s_16 != NULL) && (s_16 != z_16)))
                              _fail(z_16);
                            else
                              s_16 = z_16;
                            {
                              if(((u_16 != NULL) && (u_16 != a_17)))
                                _fail(a_17);
                              else
                                u_16 = a_17;
                              {
                                t = not_null(s_16);
                                {
                                  t = l_68(t);
                                  {
                                    ATerm c_17 = NULL,e_17 = NULL;
                                    ATerm d_17 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_l_6);
                                    {
                                      t = add_0(t);
                                      {
                                        d_17 = t;
                                        if(((c_17 != NULL) && (c_17 != d_17)))
                                          _fail(d_17);
                                        else
                                          c_17 = d_17;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(u_16));
                                      {
                                        t = h_17(t);
                                        {
                                          e_17 = t;
                                          if(((b_17 != NULL) && (b_17 != e_17)))
                                            _fail(e_17);
                                          else
                                            b_17 = e_17;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(b_17)), (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(s_16)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(u_9);
                        }
                      else
                        {
                          t = t_9;
                          {
                            ATerm f_17 = NULL;
                            if(((r_16 != NULL) && (r_16 != x_16)))
                              _fail(x_16);
                            else
                              r_16 = x_16;
                            {
                              if(((s_16 != NULL) && (s_16 != z_16)))
                                _fail(z_16);
                              else
                                s_16 = z_16;
                              {
                                if(((u_16 != NULL) && (u_16 != a_17)))
                                  _fail(a_17);
                                else
                                  u_16 = a_17;
                                {
                                  ATerm g_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(u_16));
                                  {
                                    t = h_17(t);
                                    {
                                      g_17 = t;
                                      if(((f_17 != NULL) && (f_17 != g_17)))
                                        _fail(g_17);
                                      else
                                        f_17 = g_17;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(f_17)), not_null(s_16));
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
        }
      return(t);
    }
    t = h_17(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
        p_17 = t;
        o_17 :
        if(match_cons(p_17, sym_label_2))
          {
            q_17 = ATgetArgument(p_17, 0);
            r_17 = ATgetArgument(p_17, 1);
            t = not_null(r_17);
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        {
        }
      }
    return(t);
  }
  t = map_1(t, g_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm z_17 = NULL,b_18 = NULL,f_18 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm x_9;
    x_9 = t;
    {
      ATerm a_18 = NULL;
      t = make_0(t);
      {
        a_18 = t;
        if(((z_17 != NULL) && (z_17 != a_18)))
          _fail(a_18);
        else
          z_17 = a_18;
      }
    }
    t = x_9;
    {
      ATerm y_9;
      y_9 = t;
      {
        ATerm e_18 = NULL;
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm c_18 = NULL;
            ATerm d_18 = NULL;
            t = term_m_5;
            {
              t = h_68(t);
              {
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, i_1);
          return(t);
        }
        t = map_1(t, h_1);
        {
          t = concat_0(t);
          {
            e_18 = t;
            if(((b_18 != NULL) && (b_18 != e_18)))
              _fail(e_18);
            else
              b_18 = e_18;
          }
        }
      }
      t = y_9;
      {
        ATerm g_18 = NULL;
        t = term_m_5;
        {
          t = h_68(t);
          {
            g_18 = t;
            if(((f_18 != NULL) && (f_18 != g_18)))
              _fail(g_18);
            else
              f_18 = g_18;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(b_18)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(f_18)), not_null(z_17)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
      w_18 = t;
      q_18 :
      if(match_cons(w_18, sym_prod_3))
        {
          x_18 = ATgetArgument(w_18, 0);
          y_18 = ATgetArgument(w_18, 1);
          z_18 = ATgetArgument(w_18, 2);
          {
            if(((t_18 != NULL) && (t_18 != x_18)))
              _fail(x_18);
            else
              t_18 = x_18;
            {
              if(((u_18 != NULL) && (u_18 != y_18)))
                _fail(y_18);
              else
                u_18 = y_18;
              {
                if(((v_18 != NULL) && (v_18 != z_18)))
                  _fail(z_18);
                else
                  v_18 = z_18;
                {
                  t = not_null(v_18);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm b_19 = NULL,c_19 = NULL;
                      b_19 = t;
                      o_18 :
                      if(match_cons(b_19, sym_cons_1))
                        {
                          c_19 = ATgetArgument(b_19, 0);
                          if(((r_18 != NULL) && (r_18 != c_19)))
                            _fail(c_19);
                          else
                            r_18 = c_19;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, j_1);
                  }
                  {
                    t = not_null(t_18);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = not_null(r_18);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, k_1);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(w_18, sym_prod_fun_4))
            {
              x_18 = ATgetArgument(w_18, 0);
              y_18 = ATgetArgument(w_18, 1);
              z_18 = ATgetArgument(w_18, 2);
              a_19 = ATgetArgument(w_18, 3);
              {
                ATerm d_19 = NULL;
                if(((s_18 != NULL) && (s_18 != x_18)))
                  _fail(x_18);
                else
                  s_18 = x_18;
                {
                  if(((t_18 != NULL) && (t_18 != y_18)))
                    _fail(y_18);
                  else
                    t_18 = y_18;
                  {
                    if(((u_18 != NULL) && (u_18 != z_18)))
                      _fail(z_18);
                    else
                      u_18 = z_18;
                    {
                      if(((v_18 != NULL) && (v_18 != a_19)))
                        _fail(a_19);
                      else
                        v_18 = a_19;
                      {
                        ATerm e_19 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_10)), not_null(t_18)), (ATerm) ATinsert(ATinsert(ATempty, term_g_10), (ATerm) ATmakeAppl(sym_lit_1, not_null(s_18))));
                        {
                          t = concat_0(t);
                          {
                            e_19 = t;
                            if(((d_19 != NULL) && (d_19 != e_19)))
                              _fail(e_19);
                            else
                              d_19 = e_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(d_19), not_null(u_18), not_null(v_18));
                          t = generate_pp_entries_0(t);
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
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = t;
            if((PushChoice() == 0))
              {
                ATerm l_1 (ATerm t)
                {
                  t = term_m_10;
                  return(t);
                }
                t = has_option_1(t, l_1);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_10;
              }
            {
              ATerm m_1 (ATerm t)
              {
                t = term_n_10;
                return(t);
              }
              t = debug_1(t, m_1);
            }
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm j_19 (ATerm t)
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = f_77(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = Cons_2(t, _id, j_19);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
    {
      n_19 = ATgetFirst((ATermList) m_19);
      o_19 = (ATerm) ATgetNext((ATermList) m_19);
      t = not_null(o_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  s_19 :
  if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
    {
      u_19 = ATgetFirst((ATermList) t_19);
      v_19 = (ATerm) ATgetNext((ATermList) t_19);
      t = not_null(u_19);
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
    ATerm w_10;
    w_10 = t;
    {
      ATerm d_20 = NULL;
      t = Hd_0(t);
      {
        d_20 = t;
        y_19 :
        if(!(match_int(d_20, 34)))
          {
            _fail(t);
          }
      }
    }
    t = w_10;
    {
      t = Tl_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
          e_20 = t;
          a_20 :
          if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
            {
              f_20 = ATgetFirst((ATermList) e_20);
              g_20 = (ATerm) ATgetNext((ATermList) e_20);
              b_20 :
              if(match_int(f_20, 34))
                {
                  c_20 :
                  if(((ATgetType(g_20) == AT_LIST) && ATisEmpty(g_20)))
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
        t = at_last_1(t, n_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_82(t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
        m_20 = t;
        l_20 :
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            n_20 = ATgetFirst((ATermList) m_20);
            o_20 = (ATerm) ATgetNext((ATermList) m_20);
            {
              ATerm r_20 = NULL,t_20 = NULL;
              ATerm b_11;
              b_11 = t;
              {
                ATerm s_20 = NULL;
                t = not_null(n_20);
                {
                  t = x_82(t);
                  {
                    s_20 = t;
                    if(((r_20 != NULL) && (r_20 != s_20)))
                      _fail(s_20);
                    else
                      r_20 = s_20;
                  }
                }
              }
              t = b_11;
              {
                ATerm u_20 = NULL;
                t = not_null(o_20);
                {
                  t = foldr_3(t, v_82, w_82, x_82);
                  {
                    u_20 = t;
                    if(((t_20 != NULL) && (t_20 != u_20)))
                      _fail(u_20);
                    else
                      t_20 = u_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(t_20));
                  t = w_82(t);
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
ATerm crush_3 (ATerm t, ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm c_21 = NULL;
  ATerm e_21 = NULL;
  c_21 = t;
  {
    ATerm f_21 = NULL;
    ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
    t = not_null(c_21);
    {
      f_21 = t;
      {
        t = SSL_explode_term(not_null(f_21));
        {
          h_21 = t;
          b_21 :
          if(match_cons(h_21, sym__2))
            {
              i_21 = ATgetArgument(h_21, 0);
              j_21 = ATgetArgument(h_21, 1);
              if(((e_21 != NULL) && (e_21 != j_21)))
                _fail(j_21);
              else
                e_21 = j_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_21);
      t = foldr_3(t, t_81, u_81, v_81);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm q_21 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL;
        t = e_96(t);
        {
          o_21 = t;
          t = (ATerm) ATinsert(ATempty, not_null(o_21));
        }
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm p_1 (ATerm t)
          {
            ATerm e_11 = t;
            int f_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(f_11);
              }
            else
              {
                t = e_11;
                t = conc_more_lists_0(t);
              }
            return(t);
          }
          t = crush_3(t, o_1, p_1, q_21);
        }
      }
    return(t);
  }
  t = q_21(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm z_24 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm k_22 = NULL,n_22 = NULL;
    k_22 = t;
    t_21 :
    if(match_cons(k_22, sym_context_free_syntax_1))
      {
        n_22 = ATgetArgument(k_22, 0);
        t = not_null(n_22);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_p__1(t, q_1);
  {
    t = concat_0(t);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm g_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 = NULL,q_22 = NULL;
            p_22 = t;
            a_22 :
            if(match_cons(p_22, sym_cons_1))
              {
                q_22 = ATgetArgument(p_22, 0);
                {
                  ATerm s_22 = NULL;
                  ATerm t_22 = NULL;
                  t = not_null(q_22);
                  {
                    t = de_quote_0(t);
                    {
                      t_22 = t;
                      if(((s_22 != NULL) && (s_22 != t_22)))
                        _fail(t_22);
                      else
                        s_22 = t_22;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_cons_1, not_null(s_22));
                }
              }
            else
              {
                if(match_cons(p_22, sym_lit_1))
                  {
                    q_22 = ATgetArgument(p_22, 0);
                    {
                      ATerm c_23 = NULL;
                      ATerm f_24 = NULL;
                      t = not_null(q_22);
                      {
                        t = de_quote_0(t);
                        {
                          f_24 = t;
                          if(((c_23 != NULL) && (c_23 != f_24)))
                            _fail(f_24);
                          else
                            c_23 = f_24;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_lit_1, not_null(c_23));
                    }
                  }
                else
                  {
                    if(match_cons(p_22, sym_sort_1))
                      {
                        q_22 = ATgetArgument(p_22, 0);
                        {
                          ATerm w_24 = NULL;
                          ATerm x_24 = NULL;
                          t = not_null(q_22);
                          {
                            t = de_quote_0(t);
                            {
                              x_24 = t;
                              if(((w_24 != NULL) && (w_24 != x_24)))
                                _fail(x_24);
                              else
                                w_24 = x_24;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_sort_1, not_null(w_24));
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            LocalPopChoice(k_11);
          }
        else
          {
            t = g_11;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, r_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm l_11 = t;
            if((PushChoice() == 0))
              {
                ATerm y_24 = NULL;
                y_24 = t;
                b_22 :
                if(((ATgetType(y_24) == AT_LIST) && ATisEmpty(y_24)))
                  {
                    {
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_11;
              }
            return(t);
          }
          t = filter_1(t, s_1);
          {
            t = concat_0(t);
            {
              z_24 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(z_24));
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm p_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
                        c_25 = t;
                        j_22 :
                        if(match_cons(c_25, sym_Arg_1))
                          {
                            d_25 = ATgetArgument(c_25, 0);
                            {
                              ATerm f_25 = NULL;
                              ATerm g_25 = NULL;
                              t = not_null(d_25);
                              {
                                t = int_to_string_0(t);
                                {
                                  g_25 = t;
                                  if(((f_25 != NULL) && (f_25 != g_25)))
                                    _fail(g_25);
                                  else
                                    f_25 = g_25;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_25));
                            }
                          }
                        else
                          {
                            if(match_cons(c_25, sym_selector_2))
                              {
                                d_25 = ATgetArgument(c_25, 0);
                                b_25 = ATgetArgument(c_25, 1);
                                {
                                  ATerm j_25 = NULL;
                                  ATerm k_25 = NULL;
                                  t = not_null(d_25);
                                  {
                                    t = int_to_string_0(t);
                                    {
                                      k_25 = t;
                                      if(((j_25 != NULL) && (j_25 != k_25)))
                                        _fail(k_25);
                                      else
                                        j_25 = k_25;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_selector_2, not_null(j_25), not_null(b_25));
                                }
                              }
                            else
                              {
                                if(match_cons(c_25, sym_S_1))
                                  {
                                    d_25 = ATgetArgument(c_25, 0);
                                    {
                                      ATerm m_25 = NULL;
                                      ATerm n_25 = NULL;
                                      t = not_null(d_25);
                                      {
                                        t = quote_0(t);
                                        {
                                          n_25 = t;
                                          if(((m_25 != NULL) && (m_25 != n_25)))
                                            _fail(n_25);
                                          else
                                            m_25 = n_25;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_S_1, not_null(m_25));
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                          }
                        LocalPopChoice(s_11);
                      }
                    else
                      {
                        t = p_11;
                        {
                        }
                      }
                    return(t);
                  }
                  t = topdown_1(t, t_1);
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
ATerm _2 (ATerm t, ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  i_26 :
  if(match_cons(l_26, sym__2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        ATerm s_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm v_26 = NULL;
            t = l_56(t);
            {
              t_26 = t;
              {
                t = not_null(n_26);
                {
                  ATerm x_26 = NULL;
                  t = m_56(t);
                  {
                    v_26 = t;
                    {
                      ATerm y_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_26), not_null(v_26)), not_null(r_26));
                      {
                        y_26 = t;
                        if(((x_26 != NULL) && (x_26 != y_26)))
                          _fail(y_26);
                        else
                          x_26 = y_26;
                      }
                      t = not_null(x_26);
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
ATerm error_0 (ATerm t)
{
  ATerm t_11;
  t_11 = t;
  {
    ATerm f_27 = NULL;
    ATerm g_27 = NULL;
    g_27 = t;
    if(((f_27 != NULL) && (f_27 != g_27)))
      _fail(g_27);
    else
      f_27 = g_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(f_27));
      t = printnl_0(t);
    }
  }
  t = t_11;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_11;
  v_11 = t;
  {
    t = error_0(t);
    {
      t = term_l_6;
      t = exit_0(t);
    }
  }
  t = v_11;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm i_27 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_71(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = _one(t, i_27);
      }
    return(t);
  }
  t = i_27(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,t_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      t_27 = ATgetArgument(m_27, 1);
      {
        ATerm f_12;
        f_12 = t;
        {
          t = not_null(t_27);
          {
            ATerm u_1 (ATerm t)
            {
              ATerm w_27 = NULL;
              w_27 = t;
              if(((n_27 != NULL) && (n_27 != w_27)))
                _fail(w_27);
              else
                n_27 = w_27;
              return(t);
            }
            t = oncetd_1(t, u_1);
          }
        }
        t = f_12;
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
  t = term_k_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm b_28 = NULL;
  ATerm d_28 = NULL;
  b_28 = t;
  {
    ATerm e_28 = NULL;
    t = get_options_0(t);
    {
      e_28 = t;
      {
        if(((d_28 != NULL) && (d_28 != e_28)))
          _fail(e_28);
        else
          d_28 = e_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(d_28));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_m_5;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm l_12;
  l_12 = t;
  {
    t = term_m_5;
    {
      t = i_88(t);
      t = check_option_0(t);
    }
  }
  t = l_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = term_o_12;
        return(t);
      }
      t = has_option_1(t, v_1);
      {
        t = (ATerm) ATinsert(ATempty, term_p_12);
        t = fatal_error_0(t);
      }
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        t = (ATerm) ATinsert(ATempty, term_q_12);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  s_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      t_28 :
      if(match_string(v_28, "in-type"))
        {
          ATerm y_28 = NULL,z_28 = NULL;
          ATerm r_12;
          r_12 = t;
          {
            ATerm a_29 = NULL;
            ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
            t = not_null(w_28);
            {
              a_29 = t;
              {
                t = SSL_explode_term(not_null(a_29));
                {
                  c_29 = t;
                  p_28 :
                  if(match_cons(c_29, sym__2))
                    {
                      d_29 = ATgetArgument(c_29, 0);
                      e_29 = ATgetArgument(c_29, 1);
                      q_28 :
                      if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
                        {
                          f_29 = ATgetFirst((ATermList) e_29);
                          g_29 = (ATerm) ATgetNext((ATermList) e_29);
                          r_28 :
                          if(((ATgetType(g_29) == AT_LIST) && ATisEmpty(g_29)))
                            {
                              {
                                if(((z_28 != NULL) && (z_28 != d_29)))
                                  _fail(d_29);
                                else
                                  z_28 = d_29;
                                if(((y_28 != NULL) && (y_28 != f_29)))
                                  _fail(f_29);
                                else
                                  y_28 = f_29;
                              }
                            }
                          else
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
          t = r_12;
          {
            t = not_null(z_28);
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_96(t);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  t = type_failure_0(t);
                }
            }
            t = not_null(y_28);
          }
        }
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
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym__2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      t = SSL_mkterm(not_null(n_29), not_null(o_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  v_29 :
  if(match_cons(x_29, sym__2))
    {
      y_29 = ATgetArgument(x_29, 0);
      z_29 = ATgetArgument(x_29, 1);
      w_29 :
      if(match_string(y_29, "out-type"))
        {
          ATerm b_30 = NULL;
          ATerm c_30 = NULL,e_30 = NULL;
          ATerm d_30 = NULL;
          t = term_m_5;
          {
            t = q_96(t);
            {
              d_30 = t;
              if(((c_30 != NULL) && (c_30 != d_30)))
                _fail(d_30);
              else
                c_30 = d_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_30), (ATerm) ATinsert(ATempty, not_null(z_29)));
            {
              t = mkterm_0(t);
              {
                e_30 = t;
                if(((b_30 != NULL) && (b_30 != e_30)))
                  _fail(e_30);
                else
                  b_30 = e_30;
              }
            }
          }
          t = not_null(b_30);
        }
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
ATerm InOutId_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm k_30 = NULL;
        k_30 = t;
        i_30 :
        if(!(match_string(k_30, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, w_1, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(c_13);
    }
  else
    {
      t = y_12;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm l_30 = NULL;
          l_30 = t;
          j_30 :
          if(!(match_string(l_30, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, x_1, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm x_96 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        ATerm u_30 = NULL;
        ATerm v_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(r_30));
        {
          t = x_96(t);
          {
            v_30 = t;
            if(((u_30 != NULL) && (u_30 != v_30)))
              _fail(v_30);
            else
              u_30 = v_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(u_30));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_68(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym__2))
    {
      c_31 = ATgetArgument(b_31, 0);
      d_31 = ATgetArgument(b_31, 1);
      {
        ATerm g_31 = NULL;
        ATerm h_31 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(d_31));
        {
          t = v_96(t);
          {
            h_31 = t;
            if(((g_31 != NULL) && (g_31 != h_31)))
              _fail(h_31);
            else
              g_31 = h_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(g_31));
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
  ATerm m_31 = NULL;
  ATerm k_13;
  k_13 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm n_31 = NULL,o_31 = NULL;
      n_31 = t;
      l_31 :
      if(match_cons(n_31, sym_Program_1))
        {
          o_31 = ATgetArgument(n_31, 0);
          if(((m_31 != NULL) && (m_31 != o_31)))
            _fail(o_31);
          else
            m_31 = o_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), not_null(m_31)), term_l_13));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym__2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm n_13;
        n_13 = t;
        t = SSL_printnl(not_null(t_31), not_null(u_31));
        t = n_13;
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
  ATerm z_31 = NULL;
  z_31 = t;
  t = SSL_implode_string(not_null(z_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
        e_32 = t;
        d_32 :
        if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
          {
            f_32 = ATgetFirst((ATermList) e_32);
            g_32 = (ATerm) ATgetNext((ATermList) e_32);
            {
              t = not_null(f_32);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(g_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
  ATerm q_32 = NULL;
  ATerm s_32 = NULL;
  q_32 = t;
  {
    ATerm t_32 = NULL;
    ATerm v_32 = NULL,w_32 = NULL,z_32 = NULL;
    t = not_null(q_32);
    {
      t_32 = t;
      {
        t = SSL_explode_term(not_null(t_32));
        {
          v_32 = t;
          o_32 :
          if(match_cons(v_32, sym__2))
            {
              w_32 = ATgetArgument(v_32, 0);
              z_32 = ATgetArgument(v_32, 1);
              p_32 :
              if(match_string(w_32, ""))
                {
                  if(((s_32 != NULL) && (s_32 != z_32)))
                    _fail(z_32);
                  else
                    s_32 = z_32;
                }
              else
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
      t = not_null(s_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm d_33 (ATerm t)
  {
    ATerm q_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_33);
        LocalPopChoice(v_13);
      }
    else
      {
        t = q_13;
        {
          t = Nil_0(t);
          t = u_76(t);
        }
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym__2))
    {
      h_33 = ATgetArgument(g_33, 0);
      i_33 = ATgetArgument(g_33, 1);
      {
        t = not_null(h_33);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(i_33);
            return(t);
          }
          t = at_end_1(t, a_2);
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
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  t = SSL_explode_string(not_null(n_33));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm g_14;
  g_14 = t;
  {
    ATerm s_33 = NULL,y_33 = NULL;
    ATerm h_14;
    h_14 = t;
    {
      ATerm x_33 = NULL;
      t = d_87(t);
      {
        x_33 = t;
        if(((s_33 != NULL) && (s_33 != x_33)))
          _fail(x_33);
        else
          s_33 = x_33;
      }
    }
    t = h_14;
    {
      ATerm z_33 = NULL;
      z_33 = t;
      if(((y_33 != NULL) && (y_33 != z_33)))
        _fail(z_33);
      else
        y_33 = z_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_33)), not_null(s_33)));
        t = printnl_0(t);
      }
    }
  }
  t = g_14;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_is_string(not_null(d_34));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm m_14 = t;
              int o_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(o_14);
                }
              else
                {
                  t = m_14;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
              m_34 = t;
              l_34 :
              if(match_cons(m_34, sym_Path_1))
                {
                  n_34 = ATgetArgument(m_34, 0);
                  t = not_null(n_34);
                }
              else
                {
                  if(match_cons(m_34, sym_Var_1))
                    {
                      n_34 = ATgetArgument(m_34, 0);
                      {
                        t = not_null(n_34);
                        {
                          ATerm p_14 = t;
                          int q_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_14);
                            }
                          else
                            {
                              t = p_14;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_r_14;
                                  return(t);
                                }
                                t = debug_1(t, c_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_34, sym_Prefix_2))
                        {
                          n_34 = ATgetArgument(m_34, 0);
                          o_34 = ATgetArgument(m_34, 1);
                          {
                            ATerm t_34 = NULL,v_34 = NULL;
                            ATerm s_14;
                            s_14 = t;
                            {
                              ATerm u_34 = NULL;
                              t = not_null(n_34);
                              {
                                t = eval_config_0(t);
                                {
                                  u_34 = t;
                                  if(((t_34 != NULL) && (t_34 != u_34)))
                                    _fail(u_34);
                                  else
                                    t_34 = u_34;
                                }
                              }
                            }
                            t = s_14;
                            {
                              ATerm w_34 = NULL;
                              t = not_null(o_34);
                              {
                                t = eval_config_0(t);
                                {
                                  w_34 = t;
                                  if(((v_34 != NULL) && (v_34 != w_34)))
                                    _fail(w_34);
                                  else
                                    v_34 = w_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_34), not_null(v_34));
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
  ATerm e_35 = NULL;
  e_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_15, not_null(e_35));
    {
      t = table_get_0(t);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm n_15;
              n_15 = t;
              {
                ATerm g_35 = NULL;
                ATerm h_35 = NULL;
                h_35 = t;
                if(((g_35 != NULL) && (g_35 != h_35)))
                  _fail(h_35);
                else
                  g_35 = h_35;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_15, not_null(e_35), not_null(g_35));
                  t = table_put_0(t);
                }
              }
              t = n_15;
            }
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15;
      q_15 = t;
      {
        ATerm l_35 = NULL;
        ATerm m_35 = NULL;
        t = term_r_15;
        {
          t = get_config_0(t);
          {
            m_35 = t;
            if(((l_35 != NULL) && (l_35 != m_35)))
              _fail(m_35);
            else
              l_35 = m_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), term_s_15);
          t = geq_0(t);
        }
      }
      t = q_15;
      t = a_90(t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym__2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      t = SSL_WriteToTextFile(not_null(r_35), not_null(s_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      t = SSL_WriteToBinaryFile(not_null(z_35), not_null(a_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_36 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm u_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm j_36 = NULL,k_36 = NULL;
            j_36 = t;
            f_36 :
            if(match_cons(j_36, sym_Output_1))
              {
                k_36 = ATgetArgument(j_36, 0);
                if(((i_36 != NULL) && (i_36 != k_36)))
                  _fail(k_36);
                else
                  i_36 = k_36;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, e_2);
          LocalPopChoice(y_15);
        }
      else
        {
          t = u_15;
          {
            ATerm l_36 = NULL;
            t = term_z_15;
            {
              l_36 = t;
              if(((i_36 != NULL) && (i_36 != l_36)))
                _fail(l_36);
              else
                i_36 = l_36;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = t_15;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(i_36);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm d_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm m_36 = NULL;
              m_36 = t;
              h_36 :
              if(!(match_cons(m_36, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, i_2);
            return(t);
          }
          t = _2(t, h_2, WriteToBinaryFile_0);
          LocalPopChoice(g_16);
        }
      else
        {
          t = d_16;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm s_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  ATerm h_16;
  h_16 = t;
  t = dtime_0(t);
  t = h_16;
  {
    t = h_88(t);
    {
      ATerm i_16;
      i_16 = t;
      {
        ATerm t_36 = NULL;
        t = dtime_0(t);
        {
          t_36 = t;
          if(((s_36 != NULL) && (s_36 != t_36)))
            _fail(t_36);
          else
            s_36 = t_36;
        }
      }
      t = i_16;
      {
        u_36 = t;
        r_36 :
        if(match_cons(u_36, sym__2))
          {
            v_36 = ATgetArgument(u_36, 0);
            w_36 = ATgetArgument(u_36, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_36)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(s_36))), not_null(w_36));
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
  ATerm c_37 = NULL;
  c_37 = t;
  t = SSL_ReadFromFile(not_null(c_37));
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm h_37 = NULL,j_37 = NULL;
  ATerm j_16;
  j_16 = t;
  {
    ATerm i_37 = NULL;
    t = i_84(t);
    {
      i_37 = t;
      if(((h_37 != NULL) && (h_37 != i_37)))
        _fail(i_37);
      else
        h_37 = i_37;
    }
  }
  t = j_16;
  {
    ATerm k_37 = NULL;
    t = j_84(t);
    {
      k_37 = t;
      if(((j_37 != NULL) && (j_37 != k_37)))
        _fail(k_37);
      else
        j_37 = k_37;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(j_37));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_37 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm r_37 = NULL,s_37 = NULL;
          r_37 = t;
          o_37 :
          if(match_cons(r_37, sym_Input_1))
            {
              s_37 = ATgetArgument(r_37, 0);
              if(((q_37 != NULL) && (q_37 != s_37)))
                _fail(s_37);
              else
                q_37 = s_37;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, j_2);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm t_37 = NULL;
          t = term_n_16;
          {
            t_37 = t;
            if(((q_37 != NULL) && (q_37 != t_37)))
              _fail(t_37);
            else
              q_37 = t_37;
          }
        }
      }
  }
  t = k_16;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(q_37);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm x_37 = NULL;
    x_37 = t;
    w_37 :
    if(!(match_string(x_37, "-v")))
      {
        if(!(match_string(x_37, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_t_16;
    t = set_config_0(t);
    t = term_v_16;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_38 = NULL;
    a_38 = t;
    y_37 :
    if(!(match_string(a_38, "-k")))
      {
        if(!(match_string(a_38, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm b_38 = NULL;
      ATerm c_38 = NULL;
      t = string_to_int_0(t);
      {
        c_38 = t;
        if(((b_38 != NULL) && (b_38 != c_38)))
          _fail(c_38);
        else
          b_38 = c_38;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_17, not_null(b_38));
        t = set_config_0(t);
      }
    }
    t = j_17;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_l_17;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  t = SSL_string_to_int(not_null(f_38));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm n_38 = NULL;
        n_38 = t;
        i_38 :
        if(!(match_string(n_38, "-S")))
          {
            if(!(match_string(n_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_t_17;
        t = set_config_0(t);
        t = term_u_17;
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_v_17;
        return(t);
      }
      t = Option_3(t, r_2, s_2, t_2);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 (ATerm t)
            {
              ATerm o_38 = NULL;
              o_38 = t;
              j_38 :
              if(!(match_string(o_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm r_38 = NULL;
              ATerm y_17;
              y_17 = t;
              {
                ATerm p_38 = NULL;
                ATerm q_38 = NULL;
                t = string_to_int_0(t);
                {
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(p_38));
                  t = set_config_0(t);
                }
              }
              t = y_17;
              {
                ATerm s_38 = NULL;
                s_38 = t;
                if(((r_38 != NULL) && (r_38 != s_38)))
                  _fail(s_38);
                else
                  r_38 = s_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_38));
              }
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              t = term_h_18;
              return(t);
            }
            t = ArgOption_3(t, u_2, v_2, w_2);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm x_2 (ATerm t)
              {
                ATerm t_38 = NULL;
                t_38 = t;
                m_38 :
                if(!(match_string(t_38, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_j_18;
                t = set_config_0(t);
                t = term_k_18;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_l_18;
                return(t);
              }
              t = Option_3(t, x_2, y_2, z_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        ATerm p_18 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = p_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm z_38 = NULL;
    z_38 = t;
    w_38 :
    if(!(match_string(z_38, "-o")))
      {
        if(!(match_string(z_38, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm c_39 = NULL;
    ATerm g_19;
    g_19 = t;
    {
      ATerm a_39 = NULL;
      ATerm b_39 = NULL;
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(a_39));
        t = set_config_0(t);
      }
    }
    t = g_19;
    {
      ATerm d_39 = NULL;
      d_39 = t;
      if(((c_39 != NULL) && (c_39 != d_39)))
        _fail(d_39);
      else
        c_39 = d_39;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_39));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_i_19;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, e_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = k_19;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm h_39 = NULL;
          h_39 = t;
          g_39 :
          if(!(match_string(h_39, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_r_19;
          t = set_config_0(t);
          t = term_w_19;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_x_19;
          return(t);
        }
        t = Option_3(t, f_3, g_3, h_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__3))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      o_39 = ATgetArgument(l_39, 2);
      {
        ATerm z_19;
        z_19 = t;
        {
          ATerm s_39 = NULL;
          ATerm t_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_39), not_null(n_39));
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                t = (ATerm) ATempty;
              }
            {
              t_39 = t;
              if(((s_39 != NULL) && (s_39 != t_39)))
                _fail(t_39);
              else
                s_39 = t_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(n_39), (ATerm) ATinsert(CheckATermList(not_null(s_39)), not_null(o_39)));
            t = table_put_0(t);
          }
        }
        t = z_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm x_39 = NULL;
  ATerm y_39 = NULL;
  t = term_m_5;
  {
    t = h_92(t);
    {
      y_39 = t;
      if(((x_39 != NULL) && (x_39 != y_39)))
        _fail(y_39);
      else
        x_39 = y_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, not_null(x_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,n_40 = NULL,o_40 = NULL;
  f_40 = t;
  d_40 :
  if(match_string(f_40, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          g_40 = ATgetFirst((ATermList) f_40);
          h_40 = (ATerm) ATgetNext((ATermList) f_40);
          e_40 :
          if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
            {
              n_40 = ATgetFirst((ATermList) h_40);
              o_40 = (ATerm) ATgetNext((ATermList) h_40);
              {
                ATerm s_40 = NULL;
                ATerm p_20;
                p_20 = t;
                {
                  t = not_null(g_40);
                  t = g_0(t);
                }
                t = p_20;
                {
                  ATerm t_40 = NULL;
                  t = not_null(n_40);
                  {
                    t = h_0(t);
                    {
                      t_40 = t;
                      if(((s_40 != NULL) && (s_40 != t_40)))
                        _fail(t_40);
                      else
                        s_40 = t_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_40)), not_null(s_40));
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
  ATerm i_3 (ATerm t)
  {
    ATerm a_41 = NULL;
    a_41 = t;
    x_40 :
    if(!(match_string(a_41, "-i")))
      {
        if(!(match_string(a_41, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm d_41 = NULL;
    ATerm q_20;
    q_20 = t;
    {
      ATerm b_41 = NULL;
      ATerm c_41 = NULL;
      c_41 = t;
      if(((b_41 != NULL) && (b_41 != c_41)))
        _fail(c_41);
      else
        b_41 = c_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(b_41));
        t = set_config_0(t);
      }
    }
    t = q_20;
    {
      ATerm e_41 = NULL;
      e_41 = t;
      if(((d_41 != NULL) && (d_41 != e_41)))
        _fail(e_41);
      else
        d_41 = e_41;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_41));
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = ArgOption_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, term_d_21));
  {
    t = printnl_0(t);
    {
      t = term_l_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  t = SSL_TicksToSeconds(not_null(i_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm g_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_41), not_null(p_41));
            LocalPopChoice(k_21);
          }
        else
          {
            t = g_21;
            t = SSL_addr(not_null(o_41), not_null(p_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_82 (ATerm), ATerm u_82 (ATerm))
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_82(t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
        w_41 = t;
        v_41 :
        if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
          {
            x_41 = ATgetFirst((ATermList) w_41);
            y_41 = (ATerm) ATgetNext((ATermList) w_41);
            {
              ATerm d_42 = NULL;
              ATerm e_42 = NULL;
              t = not_null(y_41);
              {
                t = foldr_2(t, t_82, u_82);
                {
                  e_42 = t;
                  if(((d_42 != NULL) && (d_42 != e_42)))
                    _fail(e_42);
                  else
                    d_42 = e_42;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_41), not_null(d_42));
                t = u_82(t);
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
ATerm crush_2 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm))
{
  ATerm n_42 = NULL;
  ATerm p_42 = NULL;
  n_42 = t;
  {
    ATerm q_42 = NULL;
    ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
    t = not_null(n_42);
    {
      q_42 = t;
      {
        t = SSL_explode_term(not_null(q_42));
        {
          s_42 = t;
          m_42 :
          if(match_cons(s_42, sym__2))
            {
              t_42 = ATgetArgument(s_42, 0);
              u_42 = ATgetArgument(s_42, 1);
              if(((p_42 != NULL) && (p_42 != u_42)))
                _fail(u_42);
              else
                p_42 = u_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_42);
      t = foldr_2(t, r_81, s_81);
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
    ATerm l_3 (ATerm t)
    {
      t = term_s_17;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym__2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm n_21;
        n_21 = t;
        {
          ATerm p_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_43), not_null(c_43));
              LocalPopChoice(r_21);
            }
          else
            {
              t = p_21;
              t = SSL_gtr(not_null(b_43), not_null(c_43));
            }
        }
        t = n_21;
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
  ATerm k_43 = NULL;
  ATerm s_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,n_43 = NULL,o_43 = NULL;
      l_43 = t;
      j_43 :
      if(match_cons(l_43, sym__2))
        {
          n_43 = ATgetArgument(l_43, 0);
          o_43 = ATgetArgument(l_43, 1);
          {
            if(((k_43 != NULL) && (k_43 != n_43)))
              _fail(n_43);
            else
              k_43 = n_43;
            if(((k_43 != NULL) && (k_43 != o_43)))
              _fail(o_43);
            else
              k_43 = o_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_21);
    }
  else
    {
      t = s_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21;
      x_21 = t;
      {
        ATerm r_43 = NULL;
        ATerm s_43 = NULL;
        t = term_r_15;
        {
          t = get_config_0(t);
          {
            s_43 = t;
            if(((r_43 != NULL) && (r_43 != s_43)))
              _fail(s_43);
            else
              r_43 = s_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_43), term_l_6);
          t = geq_0(t);
        }
      }
      t = x_21;
      t = z_89(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm w_43 = NULL,y_43 = NULL;
    ATerm y_21;
    y_21 = t;
    {
      ATerm x_43 = NULL;
      t = run_time_0(t);
      {
        x_43 = t;
        if(((w_43 != NULL) && (w_43 != x_43)))
          _fail(x_43);
        else
          w_43 = x_43;
      }
    }
    t = y_21;
    {
      ATerm z_43 = NULL;
      t = term_z_21;
      {
        t = get_config_0(t);
        {
          z_43 = t;
          if(((y_43 != NULL) && (y_43 != z_43)))
            _fail(z_43);
          else
            y_43 = z_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_22), not_null(w_43)), term_c_22), not_null(y_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_3);
  {
    t = term_s_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym_Version_0))
    {
      ATerm i_44 = NULL,k_44 = NULL;
      ATerm e_22;
      e_22 = t;
      {
        ATerm j_44 = NULL;
        t = SSLgetAnnotations(not_null(g_44));
        {
          j_44 = t;
          if(((i_44 != NULL) && (i_44 != j_44)))
            _fail(j_44);
          else
            i_44 = j_44;
        }
      }
      t = e_22;
      {
        ATerm l_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_44));
        {
          l_44 = t;
          if(((k_44 != NULL) && (k_44 != l_44)))
            _fail(l_44);
          else
            k_44 = l_44;
        }
        t = not_null(k_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, o_3);
  t = f_88(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  t = SSL_table_create(not_null(q_44));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  {
    ATerm l_22;
    l_22 = t;
    {
      t = term_g_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, not_null(w_44));
          t = table_put_0(t);
        }
      }
    }
    t = l_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  t = SSL_table_destroy(not_null(g_45));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  t = SSL_exit(not_null(k_45));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  n_45 :
  if(((ATgetType(o_45) == AT_LIST) && ATisEmpty(o_45)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
        {
          p_45 = ATgetFirst((ATermList) o_45);
          q_45 = (ATerm) ATgetNext((ATermList) o_45);
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
  ATerm m_22;
  m_22 = t;
  {
    ATerm t_45 = NULL;
    ATerm w_45 = NULL;
    ATerm o_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = o_22;
        {
          ATerm u_45 = NULL;
          ATerm v_45 = NULL;
          v_45 = t;
          if(((u_45 != NULL) && (u_45 != v_45)))
            _fail(v_45);
          else
            u_45 = v_45;
          t = (ATerm) ATinsert(ATempty, not_null(u_45));
        }
      }
    {
      w_45 = t;
      if(((t_45 != NULL) && (t_45 != w_45)))
        _fail(w_45);
      else
        t_45 = w_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_15, not_null(t_45));
      t = printnl_0(t);
    }
  }
  t = m_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm z_45 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = Cons_2(t, f_76, z_45);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  i_46 = t;
  f_46 :
  if(((ATgetType(i_46) == AT_LIST) && !(ATisEmpty(i_46))))
    {
      g_46 = ATgetFirst((ATermList) i_46);
      h_46 = (ATerm) ATgetNext((ATermList) i_46);
      {
        ATerm l_46 = NULL;
        t = not_null(h_46);
        {
          ATerm w_22;
          w_22 = t;
          {
            ATerm m_46 = NULL,o_46 = NULL,q_46 = NULL;
            ATerm x_22;
            x_22 = t;
            {
              ATerm n_46 = NULL;
              t = d_0(t);
              {
                n_46 = t;
                if(((m_46 != NULL) && (m_46 != n_46)))
                  _fail(n_46);
                else
                  m_46 = n_46;
              }
            }
            t = x_22;
            {
              ATerm p_46 = NULL;
              t = not_null(g_46);
              {
                t = a_0(t);
                {
                  p_46 = t;
                  if(((o_46 != NULL) && (o_46 != p_46)))
                    _fail(p_46);
                  else
                    o_46 = p_46;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_46)), not_null(o_46));
                {
                  q_46 = t;
                  if(((l_46 != NULL) && (l_46 != q_46)))
                    _fail(q_46);
                  else
                    l_46 = q_46;
                }
              }
            }
          }
          t = w_22;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(l_46);
              return(t);
            }
            t = reverse_acc_2(t, a_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_46) == AT_LIST) && ATisEmpty(i_46)))
        {
          {
            t = term_m_5;
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym__2))
    {
      z_46 = ATgetArgument(y_46, 0);
      a_47 = ATgetArgument(y_46, 1);
      t = SSL_table_get(not_null(z_46), not_null(a_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym_Program_1))
    {
      k_47 = ATgetArgument(j_47, 0);
      {
        ATerm n_47 = NULL,p_47 = NULL;
        ATerm o_47 = NULL;
        t = SSLgetAnnotations(not_null(j_47));
        {
          o_47 = t;
          if(((n_47 != NULL) && (n_47 != o_47)))
            _fail(o_47);
          else
            n_47 = o_47;
        }
        {
          t = not_null(k_47);
          {
            ATerm r_47 = NULL;
            t = s_65(t);
            {
              p_47 = t;
              {
                ATerm s_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_47)), not_null(n_47));
                {
                  s_47 = t;
                  if(((r_47 != NULL) && (r_47 != s_47)))
                    _fail(s_47);
                  else
                    r_47 = s_47;
                }
                t = not_null(r_47);
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
  ATerm l_48 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_48 = NULL;
      t = term_z_21;
      {
        t = get_config_0(t);
        {
          m_48 = t;
          if(((l_48 != NULL) && (l_48 != m_48)))
            _fail(m_48);
          else
            l_48 = m_48;
        }
      }
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm n_48 = NULL;
            n_48 = t;
            if(((l_48 != NULL) && (l_48 != n_48)))
              _fail(n_48);
            else
              l_48 = n_48;
            return(t);
          }
          t = Program_1(t, s_3);
          return(t);
        }
        t = fetch_1(t, r_3);
      }
    }
  {
    t = term_a_23;
    {
      t = echo_0(t);
      {
        t = term_b_23;
        {
          t = table_get_0(t);
          {
            ATerm t_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_3);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm y_48 = NULL;
                ATerm z_48 = NULL;
                z_48 = t;
                if(((y_48 != NULL) && (y_48 != z_48)))
                  _fail(z_48);
                else
                  y_48 = z_48;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_48)), term_d_23);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_3);
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
  ATerm e_23;
  e_23 = t;
  {
    ATerm e_49 = NULL;
    ATerm f_49 = NULL;
    f_49 = t;
    if(((e_49 != NULL) && (e_49 != f_49)))
      _fail(f_49);
    else
      e_49 = f_49;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, not_null(e_49)));
      t = printnl_0(t);
    }
  }
  t = e_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm f_23;
  f_23 = t;
  {
    t = e_87(t);
    t = debug_0(t);
  }
  t = f_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm q_49 = NULL,r_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym_Undefined_1))
    {
      r_49 = ATgetArgument(q_49, 0);
      {
        ATerm u_49 = NULL,w_49 = NULL;
        ATerm v_49 = NULL;
        t = SSLgetAnnotations(not_null(q_49));
        {
          v_49 = t;
          if(((u_49 != NULL) && (u_49 != v_49)))
            _fail(v_49);
          else
            u_49 = v_49;
        }
        {
          t = not_null(r_49);
          {
            ATerm y_49 = NULL;
            t = t_65(t);
            {
              w_49 = t;
              {
                ATerm z_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_49)), not_null(u_49));
                {
                  z_49 = t;
                  if(((y_49 != NULL) && (y_49 != z_49)))
                    _fail(z_49);
                  else
                    y_49 = z_49;
                }
                t = not_null(y_49);
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
ATerm fetch_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm f_50 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_76, _id);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = Cons_2(t, _id, f_50);
      }
    return(t);
  }
  t = f_50(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_91 (ATerm))
{
  t = fetch_1(t, c_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_Help_0))
    {
      ATerm m_50 = NULL,o_50 = NULL;
      ATerm i_23;
      i_23 = t;
      {
        ATerm n_50 = NULL;
        t = SSLgetAnnotations(not_null(k_50));
        {
          n_50 = t;
          if(((m_50 != NULL) && (m_50 != n_50)))
            _fail(n_50);
          else
            m_50 = n_50;
        }
      }
      t = i_23;
      {
        ATerm p_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_50));
        {
          p_50 = t;
          if(((o_50 != NULL) && (o_50 != p_50)))
            _fail(p_50);
          else
            o_50 = p_50;
        }
        t = not_null(o_50);
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
  ATerm w_3 (ATerm t)
  {
    ATerm u_50 = NULL;
    u_50 = t;
    t_50 :
    if(!(match_string(u_50, "--help")))
      {
        if(!(match_string(u_50, "-h")))
          {
            if(!(match_string(u_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_k_23;
    {
      t = set_config_0(t);
      t = term_l_23;
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_m_23;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  w_50 :
  if(((ATgetType(x_50) == AT_LIST) && !(ATisEmpty(x_50))))
    {
      y_50 = ATgetFirst((ATermList) x_50);
      z_50 = (ATerm) ATgetNext((ATermList) x_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_50)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_50)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(((ATgetType(m_51) == AT_LIST) && !(ATisEmpty(m_51))))
    {
      n_51 = ATgetFirst((ATermList) m_51);
      o_51 = (ATerm) ATgetNext((ATermList) m_51);
      {
        ATerm s_51 = NULL,u_51 = NULL;
        ATerm t_51 = NULL;
        t = SSLgetAnnotations(not_null(m_51));
        {
          t_51 = t;
          if(((s_51 != NULL) && (s_51 != t_51)))
            _fail(t_51);
          else
            s_51 = t_51;
        }
        {
          t = not_null(n_51);
          {
            ATerm w_51 = NULL;
            t = u_57(t);
            {
              u_51 = t;
              {
                t = not_null(o_51);
                {
                  ATerm y_51 = NULL;
                  t = v_57(t);
                  {
                    w_51 = t;
                    {
                      ATerm z_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_51)), not_null(u_51)), not_null(s_51));
                      {
                        z_51 = t;
                        if(((y_51 != NULL) && (y_51 != z_51)))
                          _fail(z_51);
                        else
                          y_51 = z_51;
                      }
                      t = not_null(y_51);
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
  ATerm j_52 = NULL;
  j_52 = t;
  i_52 :
  if(((ATgetType(j_52) == AT_LIST) && ATisEmpty(j_52)))
    {
      {
        ATerm l_52 = NULL,u_52 = NULL;
        ATerm n_23;
        n_23 = t;
        {
          ATerm m_52 = NULL;
          t = SSLgetAnnotations(not_null(j_52));
          {
            m_52 = t;
            if(((l_52 != NULL) && (l_52 != m_52)))
              _fail(m_52);
            else
              l_52 = m_52;
          }
        }
        t = n_23;
        {
          ATerm v_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_52));
          {
            v_52 = t;
            if(((u_52 != NULL) && (u_52 != v_52)))
              _fail(v_52);
            else
              u_52 = v_52;
          }
          t = not_null(u_52);
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
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym__2))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_15, not_null(c_53), not_null(d_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_92 (ATerm))
{
  ATerm o_23;
  o_23 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_23;
        t = f_92(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
        }
      }
  }
  t = o_23;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm l_53 = NULL;
      ATerm s_23;
      s_23 = t;
      {
        ATerm j_53 = NULL;
        ATerm k_53 = NULL;
        k_53 = t;
        if(((j_53 != NULL) && (j_53 != k_53)))
          _fail(k_53);
        else
          j_53 = k_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_21, not_null(j_53));
          t = set_config_0(t);
        }
      }
      t = s_23;
      {
        ATerm m_53 = NULL;
        m_53 = t;
        if(((l_53 != NULL) && (l_53 != m_53)))
          _fail(m_53);
        else
          l_53 = m_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_53));
      }
      return(t);
    }
    ATerm c_4 (ATerm t)
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                t = f_92(t);
                t = Cons_2(t, _id, c_4);
              }
            }
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_4, c_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
    v_53 = t;
    r_53 :
    if(match_cons(v_53, sym__3))
      {
        w_53 = ATgetArgument(v_53, 0);
        x_53 = ATgetArgument(v_53, 1);
        y_53 = ATgetArgument(v_53, 2);
        {
          if(((s_53 != NULL) && (s_53 != w_53)))
            _fail(w_53);
          else
            s_53 = w_53;
          {
            if(((t_53 != NULL) && (t_53 != x_53)))
              _fail(x_53);
            else
              t_53 = x_53;
            {
              if(((u_53 != NULL) && (u_53 != y_53)))
                _fail(y_53);
              else
                u_53 = y_53;
              t = SSL_table_put(not_null(s_53), not_null(t_53), not_null(u_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm b_54 = NULL;
  ATerm y_23;
  y_23 = t;
  {
    t = term_z_23;
    t = table_put_0(t);
  }
  t = y_23;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_92(t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_4);
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_24;
          e_24 = t;
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_23;
                t = get_config_0(t);
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_24;
          {
            t = system_usage_0(t);
            {
              t = term_s_17;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          {
            ATerm i_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm c_54 = NULL;
                    c_54 = t;
                    if(((b_54 != NULL) && (b_54 != c_54)))
                      _fail(c_54);
                    else
                      b_54 = c_54;
                    return(t);
                  }
                  t = Undefined_1(t, f_4);
                  return(t);
                }
                t = fetch_1(t, e_4);
                {
                  ATerm g_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_k_24);
                    return(t);
                  }
                  t = say_1(t, g_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
                {
                }
              }
          }
        }
      {
        ATerm l_24;
        l_24 = t;
        {
          t = term_j_20;
          t = table_destroy_0(t);
        }
        t = l_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm))
{
  t = parse_options_1(t, l_88);
  {
    t = store_options_0(t);
    {
      t = n_88(t);
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_88);
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_88(t);
                  t = report_success_0(t);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm f_89 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_89(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_89);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_4, e_89, f_89, j_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm f_54 = NULL;
        ATerm g_54 = NULL;
        t = term_z_21;
        {
          t = get_config_0(t);
          {
            g_54 = t;
            if(((f_54 != NULL) && (f_54 != g_54)))
              _fail(g_54);
            else
              f_54 = g_54;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, not_null(f_54)));
          t = printnl_0(t);
        }
      }
      t = s_24;
      return(t);
    }
    t = if_verbose2_1(t, l_4);
    return(t);
  }
  t = iowrap_4(t, w_88, x_88, y_88, k_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_88 (ATerm), ATerm v_88 (ATerm))
{
  t = iowrap_3(t, u_88, v_88, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = termid_check_p__1(t, m_96);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
        }
      }
    {
      t = n_96(t);
      {
        ATerm v_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = termid_set_p__1(t, m_96);
            LocalPopChoice(a_25);
          }
        else
          {
            t = v_24;
            {
            }
          }
      }
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm e_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_96(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = e_25;
        {
          ATerm p_4 (ATerm t)
          {
            ATerm j_54 = NULL;
            j_54 = t;
            i_54 :
            if(!(match_string(j_54, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm u_4 (ATerm t)
          {
            t = term_o_12;
            return(t);
          }
          ATerm v_4 (ATerm t)
          {
            t = term_i_25;
            return(t);
          }
          t = Option_3(t, p_4, u_4, v_4);
        }
      }
    return(t);
  }
  t = iowrap_2(t, n_4, o_4);
  return(t);
}
ATerm Pp_gen_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm m_54 = NULL;
      m_54 = t;
      k_54 :
      if(!(match_string(m_54, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      t = term_l_25;
      return(t);
    }
    t = InOutId_2(t, a_5, b_5);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm n_54 = NULL;
      n_54 = t;
      l_54 :
      if(!(match_string(n_54, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      t = term_p_25;
      return(t);
    }
    t = Option_3(t, c_5, d_5, h_5);
    return(t);
  }
  t = io_idwrap_3(t, w_4, y_4, z_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Pp_gen_0(t);
  return(t);
}

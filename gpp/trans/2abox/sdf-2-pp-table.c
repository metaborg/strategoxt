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
Symbol sym_Verbose_0;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
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
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
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
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
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
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_i_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_z_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_p_10;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_c_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Arg_1, term_v_6);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_SOpt_2, term_t_8, term_u_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_lit_1, term_g_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_lit_1, term_j_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_b_6);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_b_6);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_b_6);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_x_20);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_b_6);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__3, term_w_20, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm u_63 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm selector_2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm Arg_1 (ATerm, ATerm r_63 (ATerm));
ATerm topdown_1 (ATerm, ATerm t_76 (ATerm));
ATerm filter_1 (ATerm, ATerm k_89 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm t_74 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm x_65 (ATerm));
ATerm iter_1 (ATerm, ATerm w_65 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm w_74 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm s_74 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm k_83 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm i_91 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm t_91 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm sort_1 (ATerm, ATerm b_66 (ATerm));
ATerm lit_1 (ATerm, ATerm r_65 (ATerm));
ATerm cons_1 (ATerm, ATerm l_0 (ATerm));
ATerm foldr_3 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm));
ATerm crush_3 (ATerm, ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm));
ATerm collect_p__1 (ATerm, ATerm o_103 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm x_77 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm u_97 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm z_103 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm a_104 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm h_104 (ATerm));
ATerm try_1 (ATerm, ATerm z_74 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm f_104 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm r_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_94 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_89 (ATerm), ATerm x_89 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_100 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm crush_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_100 (ATerm));
ATerm map_1 (ATerm, ATerm k_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_100 (ATerm));
ATerm Program_1 (ATerm, ATerm i_72 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_99 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_98 (ATerm), ATerm b_98 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm));
ATerm io_sdf_2_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_3 = NULL,t_3 = NULL,e_4 = NULL;
  s_3 = t;
  r_3 :
  if(match_string(s_3, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
        {
          t_3 = ATgetFirst((ATermList) s_3);
          e_4 = (ATerm) ATgetNext((ATermList) s_3);
          {
            ATerm k_4 = NULL;
            ATerm a_6;
            a_6 = t;
            {
              t = not_null(t_3);
              t = m_0(t);
            }
            t = a_6;
            {
              ATerm l_4 = NULL;
              t = term_b_6;
              {
                t = n_0(t);
                {
                  l_4 = t;
                  if(((k_4 != NULL) && (k_4 != l_4)))
                    _fail(l_4);
                  else
                    k_4 = l_4;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_4)), not_null(k_4));
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_4)), not_null(s_4)), (ATerm) ATinsert(ATempty, not_null(s_4)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm z_4 = NULL;
  z_4 = t;
  if(((y_4 != NULL) && (y_4 != z_4)))
    _fail(z_4);
  else
    y_4 = z_4;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(y_4));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym_S_1))
    {
      h_5 = ATgetArgument(g_5, 0);
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm l_5 = NULL;
        t = SSLgetAnnotations(not_null(g_5));
        {
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm o_5 = NULL;
            t = u_63(t);
            {
              m_5 = t;
              {
                ATerm p_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(m_5)), not_null(k_5));
                {
                  p_5 = t;
                  if(((o_5 != NULL) && (o_5 != p_5)))
                    _fail(p_5);
                  else
                    o_5 = p_5;
                }
                t = not_null(o_5);
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_int_to_string(not_null(v_5));
  return(t);
}
ATerm selector_2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_selector_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = SSLgetAnnotations(not_null(e_6));
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
        {
          t = not_null(f_6);
          {
            ATerm o_6 = NULL;
            t = p_63(t);
            {
              m_6 = t;
              {
                t = not_null(g_6);
                {
                  ATerm q_6 = NULL;
                  t = q_63(t);
                  {
                    o_6 = t;
                    {
                      ATerm r_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(m_6), not_null(o_6)), not_null(k_6));
                      {
                        r_6 = t;
                        if(((q_6 != NULL) && (q_6 != r_6)))
                          _fail(r_6);
                        else
                          q_6 = r_6;
                      }
                      t = not_null(q_6);
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
ATerm Arg_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Arg_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm g_7 = NULL,i_7 = NULL;
        ATerm h_7 = NULL;
        t = SSLgetAnnotations(not_null(c_7));
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
        {
          t = not_null(d_7);
          {
            ATerm k_7 = NULL;
            t = r_63(t);
            {
              i_7 = t;
              {
                ATerm l_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(i_7)), not_null(g_7));
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
                t = not_null(k_7);
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
ATerm topdown_1 (ATerm t, ATerm t_76 (ATerm))
{
  t = t_76(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = topdown_1(t, t_76);
      return(t);
    }
    t = _all(t, c_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm j_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1(t, k_89);
              return(t);
            }
            t = Cons_2(t, k_89, e_0);
            ;
            LocalPopChoice(n_6);
          }
        else
          {
            t = j_6;
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              r_7 :
              if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
                {
                  t_7 = ATgetFirst((ATermList) s_7);
                  u_7 = (ATerm) ATgetNext((ATermList) s_7);
                  {
                    t = not_null(u_7);
                    t = filter_1(t, k_89);
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
  ATerm f_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm y_7 = NULL;
      y_7 = t;
      {
        ATerm p_6 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_6;
          }
        t = (ATerm) ATinsert(ATempty, not_null(y_7));
      }
      return(t);
    }
    t = try_1(t, h_0);
    return(t);
  }
  t = map_1(t, f_0);
  t = concat_0(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  ATerm v_8 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_8)), not_null(j_8));
    return(t);
  }
  i_8 = t;
  e_8 :
  if(match_cons(i_8, sym_alt_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      f_8 :
      if(match_cons(k_8, sym_alt_2))
        {
          g_8 = ATgetArgument(k_8, 0);
          h_8 = ATgetArgument(k_8, 1);
          {
            ATerm s_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_8 = NULL;
                ATerm p_8 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(g_8), not_null(h_8));
                {
                  t = flat_alt_0(t);
                  {
                    p_8 = t;
                    if(((o_8 != NULL) && (o_8 != p_8)))
                      _fail(p_8);
                    else
                      o_8 = p_8;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), not_null(j_8));
                ;
                LocalPopChoice(t_6);
              }
            else
              {
                t = s_6;
                t = v_8(t);
              }
          }
        }
      else
        {
          t = v_8(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = term_b_6;
    t = t_74(t);
    return(t);
  }
  t = split_2(t, p_0, _id);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
      ATerm u_11 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm v_11 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm w_11 (ATerm t)
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
        if(((x_9 != NULL) && (x_9 != g_10)))
          _fail(g_10);
        else
          x_9 = g_10;
        {
          if(((y_9 != NULL) && (y_9 != h_10)))
            _fail(h_10);
          else
            y_9 = h_10;
          {
            if(((z_9 != NULL) && (z_9 != j_10)))
              _fail(j_10);
            else
              z_9 = j_10;
            {
              if(((l_10 != NULL) && (l_10 != d_10)))
                _fail(d_10);
              else
                l_10 = d_10;
              {
                if(((m_10 != NULL) && (m_10 != b_10)))
                  _fail(b_10);
                else
                  m_10 = b_10;
                {
                  if(((n_10 != NULL) && (n_10 != c_10)))
                    _fail(c_10);
                  else
                    n_10 = c_10;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(l_10), (ATerm) ATmakeAppl(sym_alt_2, not_null(m_10), not_null(n_10)));
                    {
                      ATerm q_10 = NULL;
                      t = flat_alt_0(t);
                      {
                        o_10 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_u_6, not_null(o_10));
                          {
                            t = mkterm_0(t);
                            {
                              q_10 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_9), not_null(y_9)), (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(q_10)));
                                {
                                  t = s_11(t);
                                  {
                                    ATerm q_0 (ATerm t)
                                    {
                                      ATerm r_0 (ATerm t)
                                      {
                                        ATerm s_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_w_6;
                                          return(t);
                                        }
                                        t = try_1(t, s_0);
                                        return(t);
                                      }
                                      t = topdown_1(t, r_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, q_0, _id);
                                  }
                                }
                              }
                            }
                          }
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
      ATerm x_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_10), not_null(h_10)), (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(d_10)));
        t = s_11(t);
        return(t);
      }
      ATerm y_11 (ATerm t)
      {
        ATerm a_11 = NULL,b_11 = NULL,h_11 = NULL;
        ATerm c_11 = NULL;
        ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
        t = not_null(k_10);
        {
          c_11 = t;
          {
            t = SSL_explode_term(not_null(c_11));
            {
              e_11 = t;
              h_9 :
              if(match_cons(e_11, sym__2))
                {
                  f_11 = ATgetArgument(e_11, 0);
                  g_11 = ATgetArgument(e_11, 1);
                  {
                    if(((a_11 != NULL) && (a_11 != f_11)))
                      _fail(f_11);
                    else
                      a_11 = f_11;
                    if(((b_11 != NULL) && (b_11 != g_11)))
                      _fail(g_11);
                    else
                      b_11 = g_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(j_10), not_null(a_11))));
          {
            ATerm j_11 = NULL,q_11 = NULL;
            t = conc_0(t);
            {
              h_11 = t;
              {
                t = not_null(b_11);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm x_6;
                      x_6 = t;
                      {
                        ATerm k_11 = NULL;
                        t = make_0(t);
                        {
                          k_11 = t;
                          if(((j_11 != NULL) && (j_11 != k_11)))
                            _fail(k_11);
                          else
                            j_11 = k_11;
                        }
                      }
                      t = x_6;
                      {
                        ATerm t_0 (ATerm t)
                        {
                          ATerm l_11 = NULL;
                          ATerm n_11 = NULL;
                          l_11 = t;
                          {
                            ATerm o_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_10), not_null(h_11)), not_null(l_11));
                            {
                              t = s_11(t);
                              {
                                o_11 = t;
                                if(((n_11 != NULL) && (n_11 != o_11)))
                                  _fail(o_11);
                                else
                                  n_11 = o_11;
                              }
                            }
                            t = not_null(n_11);
                          }
                          return(t);
                        }
                        t = map_1(t, t_0);
                        {
                          t = concat_0(t);
                          {
                            q_11 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(q_11)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(g_10), not_null(h_11)), not_null(j_11)));
                          }
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
      e_10 = t;
      n_9 :
      if(match_cons(e_10, sym__2))
        {
          f_10 = ATgetArgument(e_10, 0);
          i_10 = ATgetArgument(e_10, 1);
          o_9 :
          if(match_cons(i_10, sym_lit_1))
            {
              j_10 = ATgetArgument(i_10, 0);
              p_9 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(i_10, sym__2))
                {
                  j_10 = ATgetArgument(i_10, 0);
                  k_10 = ATgetArgument(i_10, 1);
                  q_9 :
                  if(match_cons(k_10, sym_sort_1))
                    {
                      d_10 = ATgetArgument(k_10, 0);
                      r_9 :
                      if(match_cons(f_10, sym__2))
                        {
                          g_10 = ATgetArgument(f_10, 0);
                          h_10 = ATgetArgument(f_10, 1);
                          {
                            ATerm y_6 = t;
                            int z_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_11(t);
                                ;
                                LocalPopChoice(z_6);
                              }
                            else
                              {
                                t = y_6;
                                t = y_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = u_11(t);
                        }
                    }
                  else
                    {
                      if(match_cons(k_10, sym_char_class_1))
                        {
                          d_10 = ATgetArgument(k_10, 0);
                          s_9 :
                          if(match_cons(f_10, sym__2))
                            {
                              g_10 = ATgetArgument(f_10, 0);
                              h_10 = ATgetArgument(f_10, 1);
                              {
                                ATerm a_7 = t;
                                int e_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = v_11(t);
                                    ;
                                    LocalPopChoice(e_7);
                                  }
                                else
                                  {
                                    t = a_7;
                                    t = y_11(t);
                                  }
                              }
                            }
                          else
                            {
                              t = v_11(t);
                            }
                        }
                      else
                        {
                          if(match_cons(k_10, sym_alt_2))
                            {
                              d_10 = ATgetArgument(k_10, 0);
                              a_10 = ATgetArgument(k_10, 1);
                              t_9 :
                              if(match_cons(f_10, sym__2))
                                {
                                  g_10 = ATgetArgument(f_10, 0);
                                  h_10 = ATgetArgument(f_10, 1);
                                  u_9 :
                                  if(match_cons(a_10, sym_alt_2))
                                    {
                                      b_10 = ATgetArgument(a_10, 0);
                                      c_10 = ATgetArgument(a_10, 1);
                                      {
                                        ATerm f_7 = t;
                                        int j_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_11(t);
                                            ;
                                            LocalPopChoice(j_7);
                                          }
                                        else
                                          {
                                            t = f_7;
                                            t = y_11(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = y_11(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(k_10, sym_bracket_symbol_1))
                                {
                                  d_10 = ATgetArgument(k_10, 0);
                                  v_9 :
                                  if(match_cons(f_10, sym__2))
                                    {
                                      g_10 = ATgetArgument(f_10, 0);
                                      h_10 = ATgetArgument(f_10, 1);
                                      {
                                        ATerm m_7 = t;
                                        int n_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_11(t);
                                            ;
                                            LocalPopChoice(n_7);
                                          }
                                        else
                                          {
                                            t = m_7;
                                            t = y_11(t);
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
                                  w_9 :
                                  if(match_cons(f_10, sym__2))
                                    {
                                      g_10 = ATgetArgument(f_10, 0);
                                      h_10 = ATgetArgument(f_10, 1);
                                      t = y_11(t);
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
    t = s_11(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_lit_1))
    {
      m_12 = ATgetArgument(l_12, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_7, (ATerm) ATmakeAppl(sym_S_1, not_null(m_12)));
    }
  else
    {
      if(match_cons(l_12, sym__2))
        {
          m_12 = ATgetArgument(l_12, 0);
          n_12 = ATgetArgument(l_12, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_12));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_iter_star_1))
    {
      y_12 = ATgetArgument(x_12, 0);
      {
        ATerm b_13 = NULL,d_13 = NULL;
        ATerm c_13 = NULL;
        t = SSLgetAnnotations(not_null(x_12));
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
        {
          t = not_null(y_12);
          {
            ATerm f_13 = NULL;
            t = x_65(t);
            {
              d_13 = t;
              {
                ATerm g_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(d_13)), not_null(b_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm iter_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_iter_1))
    {
      r_13 = ATgetArgument(q_13, 0);
      {
        ATerm u_13 = NULL,w_13 = NULL;
        ATerm v_13 = NULL;
        t = SSLgetAnnotations(not_null(q_13));
        {
          v_13 = t;
          if(((u_13 != NULL) && (u_13 != v_13)))
            _fail(v_13);
          else
            u_13 = v_13;
        }
        {
          t = not_null(r_13);
          {
            ATerm y_13 = NULL;
            t = w_65(t);
            {
              w_13 = t;
              {
                ATerm z_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(w_13)), not_null(u_13));
                {
                  z_13 = t;
                  if(((y_13 != NULL) && (y_13 != z_13)))
                    _fail(z_13);
                  else
                    y_13 = z_13;
                }
                t = not_null(y_13);
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
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
        i_14 = t;
        g_14 :
        if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
          {
            j_14 = ATgetFirst((ATermList) i_14);
            k_14 = (ATerm) ATgetNext((ATermList) i_14);
            h_14 :
            if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
              {
                l_14 = ATgetFirst((ATermList) k_14);
                m_14 = (ATerm) ATgetNext((ATermList) k_14);
                {
                  ATerm q_14 = NULL;
                  ATerm r_14 = NULL;
                  t = not_null(m_14);
                  {
                    t = pair_0(t);
                    {
                      r_14 = t;
                      if(((q_14 != NULL) && (q_14 != r_14)))
                        _fail(r_14);
                      else
                        q_14 = r_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(l_14)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_iter_star_sep_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        ATerm h_15 = NULL,j_15 = NULL;
        ATerm i_15 = NULL;
        t = SSLgetAnnotations(not_null(b_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
        {
          t = not_null(c_15);
          {
            ATerm l_15 = NULL;
            t = u_65(t);
            {
              j_15 = t;
              {
                t = not_null(d_15);
                {
                  ATerm n_15 = NULL;
                  t = v_65(t);
                  {
                    l_15 = t;
                    {
                      ATerm o_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(j_15), not_null(l_15)), not_null(h_15));
                      {
                        o_15 = t;
                        if(((n_15 != NULL) && (n_15 != o_15)))
                          _fail(o_15);
                        else
                          n_15 = o_15;
                      }
                      t = not_null(n_15);
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
ATerm iter_sep_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_iter_sep_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      {
        ATerm g_16 = NULL,i_16 = NULL;
        ATerm h_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
        {
          t = not_null(b_16);
          {
            ATerm k_16 = NULL;
            t = s_65(t);
            {
              i_16 = t;
              {
                t = not_null(c_16);
                {
                  ATerm m_16 = NULL;
                  t = t_65(t);
                  {
                    k_16 = t;
                    {
                      ATerm n_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(i_16), not_null(k_16)), not_null(g_16));
                      {
                        n_16 = t;
                        if(((m_16 != NULL) && (m_16 != n_16)))
                          _fail(n_16);
                        else
                          m_16 = n_16;
                      }
                      t = not_null(m_16);
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
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
      t = reverse_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = x_7;
                {
                  ATerm a_8 = t;
                  int b_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      ;
                      LocalPopChoice(b_8);
                    }
                  else
                    {
                      t = a_8;
                      {
                        ATerm c_8 = t;
                        int d_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            ;
                            LocalPopChoice(d_8);
                          }
                        else
                          {
                            t = c_8;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, w_0);
          t = Make_0(t);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, x_0);
          return(t);
        }
        t = Cons_2(t, u_0, v_0);
        {
          g_17 = t;
          v_16 :
          if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
            {
              h_17 = ATgetFirst((ATermList) g_17);
              i_17 = (ATerm) ATgetNext((ATermList) g_17);
              {
                ATerm j_17 = NULL;
                if(((c_17 != NULL) && (c_17 != h_17)))
                  _fail(h_17);
                else
                  c_17 = h_17;
                {
                  if(((b_17 != NULL) && (b_17 != i_17)))
                    _fail(i_17);
                  else
                    b_17 = i_17;
                  {
                    ATerm l_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_8;
                      }
                    {
                      ATerm k_17 = NULL;
                      t = not_null(b_17);
                      {
                        t = reverse_0(t);
                        {
                          k_17 = t;
                          if(((j_17 != NULL) && (j_17 != k_17)))
                            _fail(k_17);
                          else
                            j_17 = k_17;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_17)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(j_17))));
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
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_17 = NULL;
            t = reverse_0(t);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm l_17 = NULL;
                t = Make_0(t);
                {
                  l_17 = t;
                  if(((f_17 != NULL) && (f_17 != l_17)))
                    _fail(l_17);
                  else
                    f_17 = l_17;
                }
                return(t);
              }
              ATerm z_0 (ATerm t)
              {
                ATerm m_17 = NULL;
                ATerm q_8 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_8;
                  }
                {
                  t = reverse_0(t);
                  {
                    m_17 = t;
                    if(((d_17 != NULL) && (d_17 != m_17)))
                      _fail(m_17);
                    else
                      d_17 = m_17;
                  }
                }
                return(t);
              }
              t = Cons_2(t, y_0, z_0);
              {
                t = not_null(d_17);
                {
                  t = pair_0(t);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm n_17 = NULL,o_17 = NULL;
                      ATerm b_1 (ATerm t)
                      {
                        ATerm p_17 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            p_17 = t;
                            if(((n_17 != NULL) && (n_17 != p_17)))
                              _fail(p_17);
                            else
                              n_17 = p_17;
                          }
                        }
                        return(t);
                      }
                      ATerm c_1 (ATerm t)
                      {
                        ATerm q_17 = NULL;
                        ATerm d_1 (ATerm t)
                        {
                          ATerm r_8 = t;
                          int s_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              ;
                              LocalPopChoice(s_8);
                            }
                          else
                            {
                              t = r_8;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, d_1);
                        {
                          t = Make_0(t);
                          {
                            q_17 = t;
                            if(((o_17 != NULL) && (o_17 != q_17)))
                              _fail(q_17);
                            else
                              o_17 = q_17;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, b_1, c_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_w_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_17)), not_null(n_17)));
                      return(t);
                    }
                    t = map_1(t, a_1);
                    {
                      r_17 = t;
                      {
                        if(((e_17 != NULL) && (e_17 != r_17)))
                          _fail(r_17);
                        else
                          e_17 = r_17;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_17)), not_null(e_17)));
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm x_8 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_8;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = split_2(t, e_1, _id);
  {
    ATerm w_18 (ATerm t)
    {
      ATerm g_18 = NULL,h_18 = NULL,j_18 = NULL;
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
            l_18 = t;
            e_18 :
            if(match_cons(l_18, sym__2))
              {
                m_18 = ATgetArgument(l_18, 0);
                n_18 = ATgetArgument(l_18, 1);
                f_18 :
                if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                  {
                    o_18 = ATgetFirst((ATermList) n_18);
                    p_18 = (ATerm) ATgetNext((ATermList) n_18);
                    {
                      ATerm a_9 = t;
                      int b_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_18 = NULL;
                          if(((g_18 != NULL) && (g_18 != m_18)))
                            _fail(m_18);
                          else
                            g_18 = m_18;
                          {
                            if(((h_18 != NULL) && (h_18 != o_18)))
                              _fail(o_18);
                            else
                              h_18 = o_18;
                            {
                              if(((j_18 != NULL) && (j_18 != p_18)))
                                _fail(p_18);
                              else
                                j_18 = p_18;
                              {
                                t = not_null(h_18);
                                {
                                  t = w_74(t);
                                  {
                                    ATerm r_18 = NULL,t_18 = NULL;
                                    ATerm s_18 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), term_v_6);
                                    {
                                      t = add_0(t);
                                      {
                                        s_18 = t;
                                        if(((r_18 != NULL) && (r_18 != s_18)))
                                          _fail(s_18);
                                        else
                                          r_18 = s_18;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(j_18));
                                      {
                                        t = w_18(t);
                                        {
                                          t_18 = t;
                                          if(((q_18 != NULL) && (q_18 != t_18)))
                                            _fail(t_18);
                                          else
                                            q_18 = t_18;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(q_18)), (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(h_18)));
                                  }
                                }
                              }
                            }
                          }
                          ;
                          LocalPopChoice(b_9);
                        }
                      else
                        {
                          t = a_9;
                          {
                            ATerm u_18 = NULL;
                            if(((g_18 != NULL) && (g_18 != m_18)))
                              _fail(m_18);
                            else
                              g_18 = m_18;
                            {
                              if(((h_18 != NULL) && (h_18 != o_18)))
                                _fail(o_18);
                              else
                                h_18 = o_18;
                              {
                                if(((j_18 != NULL) && (j_18 != p_18)))
                                  _fail(p_18);
                                else
                                  j_18 = p_18;
                                {
                                  ATerm v_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(j_18));
                                  {
                                    t = w_18(t);
                                    {
                                      v_18 = t;
                                      if(((u_18 != NULL) && (u_18 != v_18)))
                                        _fail(v_18);
                                      else
                                        u_18 = v_18;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(u_18)), not_null(h_18));
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
    t = w_18(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
      e_19 = t;
      d_19 :
      if(match_cons(e_19, sym_label_2))
        {
          f_19 = ATgetArgument(e_19, 0);
          g_19 = ATgetArgument(e_19, 1);
          t = not_null(g_19);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, g_1);
    return(t);
  }
  t = map_1(t, f_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm o_19 = NULL,q_19 = NULL,u_19 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm c_9;
    c_9 = t;
    {
      ATerm p_19 = NULL;
      t = make_0(t);
      {
        p_19 = t;
        if(((o_19 != NULL) && (o_19 != p_19)))
          _fail(p_19);
        else
          o_19 = p_19;
      }
    }
    t = c_9;
    {
      ATerm d_9;
      d_9 = t;
      {
        ATerm t_19 = NULL;
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm r_19 = NULL;
            ATerm s_19 = NULL;
            t = term_b_6;
            {
              t = s_74(t);
              {
                s_19 = t;
                if(((r_19 != NULL) && (r_19 != s_19)))
                  _fail(s_19);
                else
                  r_19 = s_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, i_1);
          return(t);
        }
        t = map_1(t, h_1);
        {
          t = concat_0(t);
          {
            t_19 = t;
            if(((q_19 != NULL) && (q_19 != t_19)))
              _fail(t_19);
            else
              q_19 = t_19;
          }
        }
      }
      t = d_9;
      {
        ATerm v_19 = NULL;
        t = term_b_6;
        {
          t = s_74(t);
          {
            v_19 = t;
            if(((u_19 != NULL) && (u_19 != v_19)))
              _fail(v_19);
            else
              u_19 = v_19;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(q_19)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(u_19)), not_null(o_19)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
      l_20 = t;
      f_20 :
      if(match_cons(l_20, sym_prod_3))
        {
          m_20 = ATgetArgument(l_20, 0);
          n_20 = ATgetArgument(l_20, 1);
          o_20 = ATgetArgument(l_20, 2);
          {
            if(((i_20 != NULL) && (i_20 != m_20)))
              _fail(m_20);
            else
              i_20 = m_20;
            {
              if(((j_20 != NULL) && (j_20 != n_20)))
                _fail(n_20);
              else
                j_20 = n_20;
              {
                if(((k_20 != NULL) && (k_20 != o_20)))
                  _fail(o_20);
                else
                  k_20 = o_20;
                {
                  t = not_null(k_20);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm q_20 = NULL,r_20 = NULL;
                      q_20 = t;
                      d_20 :
                      if(match_cons(q_20, sym_cons_1))
                        {
                          r_20 = ATgetArgument(q_20, 0);
                          if(((g_20 != NULL) && (g_20 != r_20)))
                            _fail(r_20);
                          else
                            g_20 = r_20;
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
                    t = not_null(i_20);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = not_null(g_20);
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
          if(match_cons(l_20, sym_prod_fun_4))
            {
              m_20 = ATgetArgument(l_20, 0);
              n_20 = ATgetArgument(l_20, 1);
              o_20 = ATgetArgument(l_20, 2);
              p_20 = ATgetArgument(l_20, 3);
              {
                ATerm s_20 = NULL;
                if(((h_20 != NULL) && (h_20 != m_20)))
                  _fail(m_20);
                else
                  h_20 = m_20;
                {
                  if(((i_20 != NULL) && (i_20 != n_20)))
                    _fail(n_20);
                  else
                    i_20 = n_20;
                  {
                    if(((j_20 != NULL) && (j_20 != o_20)))
                      _fail(o_20);
                    else
                      j_20 = o_20;
                    {
                      if(((k_20 != NULL) && (k_20 != p_20)))
                        _fail(p_20);
                      else
                        k_20 = p_20;
                      {
                        ATerm t_20 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_9)), not_null(i_20)), (ATerm) ATinsert(ATinsert(ATempty, term_i_9), (ATerm) ATmakeAppl(sym_lit_1, not_null(h_20))));
                        {
                          t = concat_0(t);
                          {
                            t_20 = t;
                            if(((s_20 != NULL) && (s_20 != t_20)))
                              _fail(t_20);
                            else
                              s_20 = t_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_20), not_null(j_20), not_null(k_20));
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
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm l_1 (ATerm t)
        {
          ATerm l_9 = t;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                t = term_m_9;
                return(t);
              }
              t = has_option_1(t, m_1);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_9;
            }
          {
            ATerm n_1 (ATerm t)
            {
              t = term_p_10;
              return(t);
            }
            t = debug_1(t, n_1);
          }
          return(t);
        }
        t = try_1(t, l_1);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm k_83 (ATerm))
{
  ATerm y_20 (ATerm t)
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = k_83(t);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = Cons_2(t, _id, y_20);
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
    {
      c_21 = ATgetFirst((ATermList) b_21);
      d_21 = (ATerm) ATgetNext((ATermList) b_21);
      t = not_null(d_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  h_21 :
  if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
    {
      k_21 = ATgetFirst((ATermList) j_21);
      l_21 = (ATerm) ATgetNext((ATermList) j_21);
      i_21 :
      if(((ATgetType(l_21) == AT_LIST) && ATisEmpty(l_21)))
        {
          t = not_null(k_21);
        }
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
ATerm last_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
    {
      s_21 = ATgetFirst((ATermList) r_21);
      t_21 = (ATerm) ATgetNext((ATermList) r_21);
      t = not_null(s_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm v_10;
  v_10 = t;
  {
    t = Hd_0(t);
    t = i_91(t);
  }
  t = v_10;
  {
    ATerm w_10;
    w_10 = t;
    {
      t = last_0(t);
      t = i_91(t);
    }
    t = w_10;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm x_21 = NULL;
    x_21 = t;
    w_21 :
    if(!(match_int(x_21, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, o_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm t_91 (ATerm))
{
  t = explode_string_0(t);
  {
    t = t_91(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm sort_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_sort_1))
    {
      e_22 = ATgetArgument(d_22, 0);
      {
        ATerm h_22 = NULL,j_22 = NULL;
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(d_22));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
        {
          t = not_null(e_22);
          {
            ATerm l_22 = NULL;
            t = b_66(t);
            {
              j_22 = t;
              {
                ATerm m_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(j_22)), not_null(h_22));
                {
                  m_22 = t;
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                }
                t = not_null(l_22);
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
ATerm lit_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_lit_1))
    {
      x_22 = ATgetArgument(w_22, 0);
      {
        ATerm a_23 = NULL,c_23 = NULL;
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(w_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
        {
          t = not_null(x_22);
          {
            ATerm e_23 = NULL;
            t = r_65(t);
            {
              c_23 = t;
              {
                ATerm f_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(c_23)), not_null(a_23));
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
                t = not_null(e_23);
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
ATerm cons_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_cons_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_23 = NULL,z_23 = NULL;
            ATerm y_23 = NULL;
            t = SSLgetAnnotations(not_null(t_23));
            {
              y_23 = t;
              if(((x_23 != NULL) && (x_23 != y_23)))
                _fail(y_23);
              else
                x_23 = y_23;
            }
            {
              t = not_null(u_23);
              {
                ATerm b_24 = NULL;
                t = l_0(t);
                {
                  z_23 = t;
                  {
                    ATerm c_24 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(z_23)), not_null(x_23));
                    {
                      c_24 = t;
                      if(((b_24 != NULL) && (b_24 != c_24)))
                        _fail(c_24);
                      else
                        b_24 = c_24;
                    }
                    t = not_null(b_24);
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm f_24 = NULL,h_24 = NULL;
              ATerm g_24 = NULL;
              t = SSLgetAnnotations(not_null(t_23));
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
              {
                t = not_null(u_23);
                {
                  ATerm j_24 = NULL;
                  t = l_0(t);
                  {
                    h_24 = t;
                    {
                      ATerm k_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(h_24)), not_null(f_24));
                      {
                        k_24 = t;
                        if(((j_24 != NULL) && (j_24 != k_24)))
                          _fail(k_24);
                        else
                          j_24 = k_24;
                      }
                      t = not_null(j_24);
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
ATerm foldr_3 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm))
{
  ATerm z_10 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_88(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = z_10;
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
        a_27 = t;
        z_26 :
        if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
          {
            b_27 = ATgetFirst((ATermList) a_27);
            c_27 = (ATerm) ATgetNext((ATermList) a_27);
            {
              ATerm f_27 = NULL,h_27 = NULL;
              ATerm i_11;
              i_11 = t;
              {
                ATerm g_27 = NULL;
                t = not_null(b_27);
                {
                  t = l_88(t);
                  {
                    g_27 = t;
                    if(((f_27 != NULL) && (f_27 != g_27)))
                      _fail(g_27);
                    else
                      f_27 = g_27;
                  }
                }
              }
              t = i_11;
              {
                ATerm i_27 = NULL;
                t = not_null(c_27);
                {
                  t = foldr_3(t, j_88, k_88, l_88);
                  {
                    i_27 = t;
                    if(((h_27 != NULL) && (h_27 != i_27)))
                      _fail(i_27);
                    else
                      h_27 = i_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(h_27));
                  t = k_88(t);
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
ATerm crush_3 (ATerm t, ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm))
{
  ATerm q_27 = NULL;
  ATerm s_27 = NULL;
  q_27 = t;
  {
    ATerm t_27 = NULL;
    ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
    t = not_null(q_27);
    {
      t_27 = t;
      {
        t = SSL_explode_term(not_null(t_27));
        {
          v_27 = t;
          p_27 :
          if(match_cons(v_27, sym__2))
            {
              w_27 = ATgetArgument(v_27, 0);
              x_27 = ATgetArgument(v_27, 1);
              if(((s_27 != NULL) && (s_27 != x_27)))
                _fail(x_27);
              else
                s_27 = x_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_27);
      t = foldr_3(t, c_92, d_92, e_92);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm m_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_28 = NULL;
        t = o_103(t);
        {
          ATerm f_28 = NULL;
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
          t = (ATerm) ATinsert(ATempty, not_null(e_28));
        }
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = m_11;
        {
          ATerm p_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, p_1, conc_0, g_28);
        }
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm q_28 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm m_28 = NULL,n_28 = NULL;
    m_28 = t;
    j_28 :
    if(match_cons(m_28, sym_context_free_syntax_1))
      {
        n_28 = ATgetArgument(m_28, 0);
        t = not_null(n_28);
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
        ATerm s_1 (ATerm t)
        {
          ATerm r_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = cons_1(t, un_double_quote_0);
              ;
              LocalPopChoice(t_11);
            }
          else
            {
              t = r_11;
              {
                ATerm z_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = lit_1(t, un_double_quote_0);
                    ;
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = z_11;
                    t = sort_1(t, un_double_quote_0);
                  }
              }
            }
          return(t);
        }
        t = try_1(t, s_1);
        return(t);
      }
      t = topdown_1(t, r_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm b_12 = t;
            if((PushChoice() == 0))
              {
                ATerm p_28 = NULL;
                p_28 = t;
                k_28 :
                if(((ATgetType(p_28) == AT_LIST) && ATisEmpty(p_28)))
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
                t = b_12;
              }
            return(t);
          }
          t = filter_1(t, t_1);
          {
            t = concat_0(t);
            {
              q_28 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(q_28));
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm c_12 = t;
                      int d_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Arg_1(t, int_to_string_0);
                          ;
                          LocalPopChoice(d_12);
                        }
                      else
                        {
                          t = c_12;
                          {
                            ATerm e_12 = t;
                            int f_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = selector_2(t, int_to_string_0, _id);
                                ;
                                LocalPopChoice(f_12);
                              }
                            else
                              {
                                t = e_12;
                                t = S_1(t, double_quote_0);
                              }
                          }
                        }
                      return(t);
                    }
                    t = try_1(t, v_1);
                    return(t);
                  }
                  t = topdown_1(t, u_1);
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
ATerm _2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym__2))
    {
      b_29 = ATgetArgument(a_29, 0);
      c_29 = ATgetArgument(a_29, 1);
      {
        ATerm g_29 = NULL,n_29 = NULL;
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(a_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
        {
          t = not_null(b_29);
          {
            ATerm p_29 = NULL;
            t = y_61(t);
            {
              n_29 = t;
              {
                t = not_null(c_29);
                {
                  ATerm r_29 = NULL;
                  t = z_61(t);
                  {
                    p_29 = t;
                    {
                      ATerm s_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_29), not_null(p_29)), not_null(g_29));
                      {
                        s_29 = t;
                        if(((r_29 != NULL) && (r_29 != s_29)))
                          _fail(s_29);
                        else
                          r_29 = s_29;
                      }
                      t = not_null(r_29);
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
  ATerm g_12;
  g_12 = t;
  {
    ATerm z_29 = NULL;
    ATerm a_30 = NULL;
    a_30 = t;
    if(((z_29 != NULL) && (z_29 != a_30)))
      _fail(a_30);
    else
      z_29 = a_30;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(z_29));
      t = printnl_0(t);
    }
  }
  t = g_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_12;
  i_12 = t;
  {
    t = error_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  t = i_12;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm j_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_77(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = j_12;
        t = _one(t, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym__2))
    {
      n_30 = ATgetArgument(m_30, 0);
      o_30 = ATgetArgument(m_30, 1);
      {
        ATerm p_12;
        p_12 = t;
        {
          t = not_null(o_30);
          {
            ATerm w_1 (ATerm t)
            {
              ATerm r_30 = NULL;
              r_30 = t;
              if(((n_30 != NULL) && (n_30 != r_30)))
                _fail(r_30);
              else
                n_30 = r_30;
              return(t);
            }
            t = oncetd_1(t, w_1);
          }
        }
        t = p_12;
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
  t = term_s_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm w_30 = NULL;
  ATerm y_30 = NULL;
  w_30 = t;
  {
    ATerm z_30 = NULL;
    t = get_options_0(t);
    {
      z_30 = t;
      {
        if(((y_30 != NULL) && (y_30 != z_30)))
          _fail(z_30);
        else
          y_30 = z_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), not_null(y_30));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_b_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    t = term_b_6;
    {
      t = u_97(t);
      t = check_option_0(t);
    }
  }
  t = t_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        t = term_z_12;
        return(t);
      }
      t = has_option_1(t, x_1);
      {
        t = (ATerm) ATinsert(ATempty, term_a_13);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        t = (ATerm) ATinsert(ATempty, term_e_13);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm z_103 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  i_31 :
  if(match_cons(k_31, sym__2))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      j_31 :
      if(match_string(l_31, "in-type"))
        {
          ATerm o_31 = NULL,p_31 = NULL;
          ATerm h_13;
          h_13 = t;
          {
            ATerm q_31 = NULL;
            ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
            t = not_null(m_31);
            {
              q_31 = t;
              {
                t = SSL_explode_term(not_null(q_31));
                {
                  s_31 = t;
                  f_31 :
                  if(match_cons(s_31, sym__2))
                    {
                      t_31 = ATgetArgument(s_31, 0);
                      u_31 = ATgetArgument(s_31, 1);
                      g_31 :
                      if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
                        {
                          v_31 = ATgetFirst((ATermList) u_31);
                          w_31 = (ATerm) ATgetNext((ATermList) u_31);
                          h_31 :
                          if(((ATgetType(w_31) == AT_LIST) && ATisEmpty(w_31)))
                            {
                              {
                                if(((p_31 != NULL) && (p_31 != t_31)))
                                  _fail(t_31);
                                else
                                  p_31 = t_31;
                                if(((o_31 != NULL) && (o_31 != v_31)))
                                  _fail(v_31);
                                else
                                  o_31 = v_31;
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
          t = h_13;
          {
            t = not_null(p_31);
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_103(t);
                  ;
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = i_13;
                  t = type_failure_0(t);
                }
            }
            t = not_null(o_31);
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
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym__2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      t = SSL_mkterm(not_null(d_32), not_null(e_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm a_104 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  l_32 :
  if(match_cons(n_32, sym__2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      m_32 :
      if(match_string(o_32, "out-type"))
        {
          ATerm r_32 = NULL;
          ATerm s_32 = NULL,u_32 = NULL;
          ATerm t_32 = NULL;
          t = term_b_6;
          {
            t = a_104(t);
            {
              t_32 = t;
              if(((s_32 != NULL) && (s_32 != t_32)))
                _fail(t_32);
              else
                s_32 = t_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_32), (ATerm) ATinsert(ATempty, not_null(p_32)));
            {
              t = mkterm_0(t);
              {
                u_32 = t;
                if(((r_32 != NULL) && (r_32 != u_32)))
                  _fail(u_32);
                else
                  r_32 = u_32;
              }
            }
          }
          t = not_null(r_32);
        }
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
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm a_33 = NULL;
        a_33 = t;
        y_32 :
        if(!(match_string(a_33, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, y_1, _id);
      t = OutId_1(t, k_0);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm b_33 = NULL;
          b_33 = t;
          z_32 :
          if(!(match_string(b_33, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, z_1, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm h_104 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__2))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      {
        ATerm k_33 = NULL;
        ATerm l_33 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_m_13, not_null(h_33));
        {
          t = h_104(t);
          {
            l_33 = t;
            if(((k_33 != NULL) && (k_33 != l_33)))
              _fail(l_33);
            else
              k_33 = l_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(k_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_74(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym__2))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      {
        ATerm w_33 = NULL;
        ATerm x_33 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, not_null(t_33));
        {
          t = f_104(t);
          {
            x_33 = t;
            if(((w_33 != NULL) && (w_33 != x_33)))
              _fail(x_33);
            else
              w_33 = x_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(w_33));
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
  ATerm t_13;
  t_13 = t;
  {
    ATerm b_34 = NULL;
    ATerm c_34 = NULL;
    t = term_b_6;
    {
      t = whoami_0(t);
      {
        c_34 = t;
        if(((b_34 != NULL) && (b_34 != c_34)))
          _fail(c_34);
        else
          b_34 = c_34;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), not_null(b_34)), term_x_13));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm b_14;
        b_14 = t;
        t = SSL_printnl(not_null(h_34), not_null(i_34));
        t = b_14;
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
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_implode_string(not_null(n_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
        s_34 = t;
        r_34 :
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            t_34 = ATgetFirst((ATermList) s_34);
            u_34 = (ATerm) ATgetNext((ATermList) s_34);
            {
              t = not_null(t_34);
              {
                ATerm a_2 (ATerm t)
                {
                  t = not_null(u_34);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm e_35 = NULL;
  ATerm g_35 = NULL;
  e_35 = t;
  {
    ATerm h_35 = NULL;
    ATerm j_35 = NULL,k_35 = NULL,p_35 = NULL;
    t = not_null(e_35);
    {
      h_35 = t;
      {
        t = SSL_explode_term(not_null(h_35));
        {
          j_35 = t;
          c_35 :
          if(match_cons(j_35, sym__2))
            {
              k_35 = ATgetArgument(j_35, 0);
              p_35 = ATgetArgument(j_35, 1);
              d_35 :
              if(match_string(k_35, ""))
                {
                  if(((g_35 != NULL) && (g_35 != p_35)))
                    _fail(p_35);
                  else
                    g_35 = p_35;
                }
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
      t = not_null(g_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm t_35 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_35);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          t = Nil_0(t);
          t = z_82(t);
        }
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym__2))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      {
        t = not_null(x_35);
        {
          ATerm b_2 (ATerm t)
          {
            t = not_null(y_35);
            return(t);
          }
          t = at_end_1(t, b_2);
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
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = SSL_explode_string(not_null(d_36));
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
ATerm eval_config_0 (ATerm t)
{
  ATerm p_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = p_14;
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_2);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
              m_36 = t;
              l_36 :
              if(match_cons(m_36, sym_Path_1))
                {
                  n_36 = ATgetArgument(m_36, 0);
                  t = not_null(n_36);
                }
              else
                {
                  if(match_cons(m_36, sym_Var_1))
                    {
                      n_36 = ATgetArgument(m_36, 0);
                      {
                        t = not_null(n_36);
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm d_2 (ATerm t)
                                {
                                  t = term_x_14;
                                  return(t);
                                }
                                t = debug_1(t, d_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_36, sym_Prefix_2))
                        {
                          n_36 = ATgetArgument(m_36, 0);
                          o_36 = ATgetArgument(m_36, 1);
                          {
                            ATerm t_36 = NULL,v_36 = NULL;
                            ATerm y_14;
                            y_14 = t;
                            {
                              ATerm u_36 = NULL;
                              t = not_null(n_36);
                              {
                                t = eval_config_0(t);
                                {
                                  u_36 = t;
                                  if(((t_36 != NULL) && (t_36 != u_36)))
                                    _fail(u_36);
                                  else
                                    t_36 = u_36;
                                }
                              }
                            }
                            t = y_14;
                            {
                              ATerm w_36 = NULL;
                              t = not_null(o_36);
                              {
                                t = eval_config_0(t);
                                {
                                  w_36 = t;
                                  if(((v_36 != NULL) && (v_36 != w_36)))
                                    _fail(w_36);
                                  else
                                    v_36 = w_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(v_36));
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
  ATerm g_37 = NULL;
  g_37 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(g_37));
    {
      t = table_get_0(t);
      {
        ATerm e_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_15;
            e_15 = t;
            {
              ATerm i_37 = NULL;
              ATerm j_37 = NULL;
              j_37 = t;
              if(((i_37 != NULL) && (i_37 != j_37)))
                _fail(j_37);
              else
                i_37 = j_37;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_14, not_null(g_37), not_null(i_37));
                t = table_put_0(t);
              }
            }
            t = e_15;
          }
          return(t);
        }
        t = try_1(t, e_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm n_37 = NULL;
      ATerm o_37 = NULL;
      t = term_g_15;
      {
        t = get_config_0(t);
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), term_k_15);
        t = geq_0(t);
      }
    }
    t = f_15;
    t = v_95(t);
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  u_37 = t;
  s_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      t_37 :
      if(match_cons(w_37, sym_Stream_1))
        {
          x_37 = ATgetArgument(w_37, 0);
          {
            ATerm a_38 = NULL;
            t = SSL_fputc(not_null(v_37), not_null(x_37));
            {
              ATerm b_38 = NULL;
              b_38 = t;
              if(((a_38 != NULL) && (a_38 != b_38)))
                _fail(b_38);
              else
                a_38 = b_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_38));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  i_38 = t;
  g_38 :
  if(match_cons(i_38, sym__2))
    {
      j_38 = ATgetArgument(i_38, 0);
      l_38 = ATgetArgument(i_38, 1);
      h_38 :
      if(match_cons(j_38, sym_Stream_1))
        {
          k_38 = ATgetArgument(j_38, 0);
          {
            ATerm o_38 = NULL;
            t = SSL_write_term_to_stream_text(not_null(k_38), not_null(l_38));
            {
              ATerm p_38 = NULL;
              p_38 = t;
              if(((o_38 != NULL) && (o_38 != p_38)))
                _fail(p_38);
              else
                o_38 = p_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_38));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm t_38 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm u_38 = NULL;
      u_38 = t;
      if(((t_38 != NULL) && (t_38 != u_38)))
        _fail(u_38);
      else
        t_38 = u_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(t_38));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, g_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  a_39 = t;
  y_38 :
  if(match_cons(a_39, sym__2))
    {
      b_39 = ATgetArgument(a_39, 0);
      d_39 = ATgetArgument(a_39, 1);
      z_38 :
      if(match_cons(b_39, sym_Stream_1))
        {
          c_39 = ATgetArgument(b_39, 0);
          {
            ATerm g_39 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(c_39), not_null(d_39));
            {
              ATerm h_39 = NULL;
              h_39 = t;
              if(((g_39 != NULL) && (g_39 != h_39)))
                _fail(h_39);
              else
                g_39 = h_39;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_39));
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
ATerm WriteToFile_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym__2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      {
        ATerm t_39 = NULL,v_39 = NULL;
        t = not_null(p_39);
        {
          ATerm u_39 = NULL;
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_p_15);
            {
              t = open_stream_0(t);
              {
                ATerm w_39 = NULL;
                w_39 = t;
                if(((v_39 != NULL) && (v_39 != w_39)))
                  _fail(w_39);
                else
                  v_39 = w_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_39), not_null(q_39));
                  {
                    t = r_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(q_39);
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
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_40 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm f_40 = NULL,g_40 = NULL;
            f_40 = t;
            b_40 :
            if(match_cons(f_40, sym_Output_1))
              {
                g_40 = ATgetArgument(f_40, 0);
                if(((e_40 != NULL) && (e_40 != g_40)))
                  _fail(g_40);
                else
                  e_40 = g_40;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_2);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          {
            ATerm h_40 = NULL;
            t = term_t_15;
            {
              h_40 = t;
              if(((e_40 != NULL) && (e_40 != h_40)))
                _fail(h_40);
              else
                e_40 = h_40;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_2, _id);
  }
  t = q_15;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(e_40);
        return(t);
      }
      t = split_2(t, k_2, _id);
      return(t);
    }
    t = _2(t, _id, j_2);
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm i_40 = NULL;
              i_40 = t;
              d_40 :
              if(!(match_cons(i_40, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_2);
            return(t);
          }
          t = _2(t, l_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_97 (ATerm))
{
  ATerm o_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  ATerm w_15;
  w_15 = t;
  t = dtime_0(t);
  t = w_15;
  {
    t = t_97(t);
    {
      ATerm x_15;
      x_15 = t;
      {
        ATerm p_40 = NULL;
        t = dtime_0(t);
        {
          p_40 = t;
          if(((o_40 != NULL) && (o_40 != p_40)))
            _fail(p_40);
          else
            o_40 = p_40;
        }
      }
      t = x_15;
      {
        q_40 = t;
        n_40 :
        if(match_cons(q_40, sym__2))
          {
            r_40 = ATgetArgument(q_40, 0);
            s_40 = ATgetArgument(q_40, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_40))), not_null(s_40));
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
ATerm fclose_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  ATerm h_41 (ATerm t)
  {
    t = SSL_fclose(not_null(b_41));
    return(t);
  }
  b_41 = t;
  z_40 :
  if(match_cons(b_41, sym_Stream_1))
    {
      a_41 = ATgetArgument(b_41, 0);
      {
        ATerm y_15 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(a_41));
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = y_15;
            t = h_41(t);
          }
      }
    }
  else
    {
      t = h_41(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  m_41 = t;
  j_41 :
  if(match_cons(m_41, sym_Stream_1))
    {
      n_41 = ATgetArgument(m_41, 0);
      t = SSL_read_term_from_stream(not_null(n_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm e_16;
  e_16 = t;
  {
    ATerm s_41 = NULL,u_41 = NULL;
    ATerm f_16;
    f_16 = t;
    {
      ATerm t_41 = NULL;
      t = d_94(t);
      {
        t_41 = t;
        if(((s_41 != NULL) && (s_41 != t_41)))
          _fail(t_41);
        else
          s_41 = t_41;
      }
    }
    t = f_16;
    {
      ATerm v_41 = NULL;
      v_41 = t;
      if(((u_41 != NULL) && (u_41 != v_41)))
        _fail(v_41);
      else
        u_41 = v_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_41)), not_null(s_41)));
        t = printnl_0(t);
      }
    }
  }
  t = e_16;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  d_42 :
  if(match_cons(i_42, sym__2))
    {
      j_42 = ATgetArgument(i_42, 0);
      k_42 = ATgetArgument(i_42, 1);
      {
        ATerm n_42 = NULL;
        t = SSL_fopen(not_null(j_42), not_null(k_42));
        {
          ATerm o_42 = NULL;
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_42));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  t = SSL_is_string(not_null(s_42));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_42 = NULL;
    x_42 = t;
    if(((w_42 != NULL) && (w_42 != x_42)))
      _fail(x_42);
    else
      w_42 = x_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_42));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_43 = NULL;
    b_43 = t;
    if(((a_43 != NULL) && (a_43 != b_43)))
      _fail(b_43);
    else
      a_43 = b_43;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_43));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm e_43 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_43 = NULL;
    f_43 = t;
    if(((e_43 != NULL) && (e_43 != f_43)))
      _fail(f_43);
    else
      e_43 = f_43;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_43));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_43, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_43, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_43 = NULL;
  ATerm z_43 = NULL,a_44 = NULL;
  x_43 = t;
  {
    ATerm d_44 = NULL;
    ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
    t = not_null(x_43);
    {
      d_44 = t;
      {
        t = SSL_explode_term(not_null(d_44));
        {
          f_44 = t;
          s_43 :
          if(match_cons(f_44, sym__2))
            {
              g_44 = ATgetArgument(f_44, 0);
              h_44 = ATgetArgument(f_44, 1);
              t_43 :
              if(match_string(g_44, ""))
                {
                  u_43 :
                  if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
                    {
                      i_44 = ATgetFirst((ATermList) h_44);
                      j_44 = (ATerm) ATgetNext((ATermList) h_44);
                      {
                        if(((a_44 != NULL) && (a_44 != i_44)))
                          _fail(i_44);
                        else
                          a_44 = i_44;
                        if(((z_43 != NULL) && (z_43 != j_44)))
                          _fail(j_44);
                        else
                          z_43 = j_44;
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
    t = not_null(a_44);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym__2))
    {
      s_44 = ATgetArgument(r_44, 0);
      t_44 = ATgetArgument(r_44, 1);
      {
        ATerm j_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = j_16;
            {
              ATerm o_16 = t;
              int p_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm u_44 = NULL,v_44 = NULL;
                    u_44 = t;
                    p_44 :
                    if(match_cons(u_44, sym_Path_1))
                      {
                        v_44 = ATgetArgument(u_44, 0);
                        t = not_null(v_44);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, n_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(p_16);
                }
              else
                {
                  t = o_16;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_45 = NULL;
      ATerm e_45 = NULL;
      e_45 = t;
      if(((d_45 != NULL) && (d_45 != e_45)))
        _fail(e_45);
      else
        d_45 = e_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), term_s_16);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm o_2 (ATerm t)
        {
          t = term_t_16;
          return(t);
        }
        t = debug_1(t, o_2);
        _fail(t);
      }
    }
  {
    ATerm u_16;
    u_16 = t;
    {
      ATerm g_45 = NULL;
      t = read_from_stream_0(t);
      {
        g_45 = t;
        if(((f_45 != NULL) && (f_45 != g_45)))
          _fail(g_45);
        else
          f_45 = g_45;
      }
    }
    t = u_16;
    {
      t = fclose_0(t);
      t = not_null(f_45);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_89 (ATerm), ATerm x_89 (ATerm))
{
  ATerm m_45 = NULL,o_45 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm n_45 = NULL;
    t = w_89(t);
    {
      n_45 = t;
      if(((m_45 != NULL) && (m_45 != n_45)))
        _fail(n_45);
      else
        m_45 = n_45;
    }
  }
  t = w_16;
  {
    ATerm p_45 = NULL;
    t = x_89(t);
    {
      p_45 = t;
      if(((o_45 != NULL) && (o_45 != p_45)))
        _fail(p_45);
      else
        o_45 = p_45;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_45), not_null(o_45));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 (ATerm t)
        {
          ATerm w_45 = NULL,x_45 = NULL;
          w_45 = t;
          t_45 :
          if(match_cons(w_45, sym_Input_1))
            {
              x_45 = ATgetArgument(w_45, 0);
              if(((v_45 != NULL) && (v_45 != x_45)))
                _fail(x_45);
              else
                v_45 = x_45;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, p_2);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm y_45 = NULL;
          t = term_a_17;
          {
            y_45 = t;
            if(((v_45 != NULL) && (v_45 != y_45)))
              _fail(y_45);
            else
              v_45 = y_45;
          }
        }
      }
  }
  t = x_16;
  {
    ATerm q_2 (ATerm t)
    {
      t = not_null(v_45);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm c_46 = NULL;
    c_46 = t;
    b_46 :
    if(!(match_string(c_46, "-v")))
      {
        if(!(match_string(c_46, "--version")))
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
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm f_46 = NULL;
    f_46 = t;
    d_46 :
    if(!(match_string(f_46, "-k")))
      {
        if(!(match_string(f_46, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm w_17;
    w_17 = t;
    {
      ATerm g_46 = NULL;
      ATerm h_46 = NULL;
      t = string_to_int_0(t);
      {
        h_46 = t;
        if(((g_46 != NULL) && (g_46 != h_46)))
          _fail(h_46);
        else
          g_46 = h_46;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(g_46));
        t = set_config_0(t);
      }
    }
    t = w_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = SSL_string_to_int(not_null(k_46));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm s_46 = NULL;
        s_46 = t;
        n_46 :
        if(!(match_string(s_46, "-S")))
          {
            if(!(match_string(s_46, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_c_18;
        t = set_config_0(t);
        t = term_d_18;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_i_18;
        return(t);
      }
      t = Option_3(t, x_2, y_2, z_2);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm k_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm t_46 = NULL;
              t_46 = t;
              o_46 :
              if(!(match_string(t_46, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm w_46 = NULL;
              ATerm y_18;
              y_18 = t;
              {
                ATerm u_46 = NULL;
                ATerm v_46 = NULL;
                t = string_to_int_0(t);
                {
                  v_46 = t;
                  if(((u_46 != NULL) && (u_46 != v_46)))
                    _fail(v_46);
                  else
                    u_46 = v_46;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_15, not_null(u_46));
                  t = set_config_0(t);
                }
              }
              t = y_18;
              {
                ATerm x_46 = NULL;
                x_46 = t;
                if(((w_46 != NULL) && (w_46 != x_46)))
                  _fail(x_46);
                else
                  w_46 = x_46;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_46));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_z_18;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = k_18;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm y_46 = NULL;
                y_46 = t;
                r_46 :
                if(!(match_string(y_46, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_b_19;
                t = set_config_0(t);
                t = term_c_19;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm e_47 = NULL;
    e_47 = t;
    b_47 :
    if(!(match_string(e_47, "-o")))
      {
        if(!(match_string(e_47, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm n_47 = NULL;
    ATerm m_19;
    m_19 = t;
    {
      ATerm l_47 = NULL;
      ATerm m_47 = NULL;
      m_47 = t;
      if(((l_47 != NULL) && (l_47 != m_47)))
        _fail(m_47);
      else
        l_47 = m_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(l_47));
        t = set_config_0(t);
      }
    }
    t = m_19;
    {
      ATerm o_47 = NULL;
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_47));
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_w_19;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm s_47 = NULL;
          s_47 = t;
          r_47 :
          if(!(match_string(s_47, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_a_20;
          t = set_config_0(t);
          t = term_b_20;
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_c_20;
          return(t);
        }
        t = Option_3(t, j_3, k_3, l_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym__3))
    {
      x_47 = ATgetArgument(w_47, 0);
      y_47 = ATgetArgument(w_47, 1);
      z_47 = ATgetArgument(w_47, 2);
      {
        ATerm e_20;
        e_20 = t;
        {
          ATerm d_48 = NULL;
          ATerm e_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_47), not_null(y_47));
          {
            ATerm u_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_20);
              }
            else
              {
                t = u_20;
                t = (ATerm) ATempty;
              }
            {
              e_48 = t;
              if(((d_48 != NULL) && (d_48 != e_48)))
                _fail(e_48);
              else
                d_48 = e_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_47), not_null(y_47), (ATerm) ATinsert(CheckATermList(not_null(d_48)), not_null(z_47)));
            t = table_put_0(t);
          }
        }
        t = e_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_100 (ATerm))
{
  ATerm i_48 = NULL;
  ATerm j_48 = NULL;
  t = term_b_6;
  {
    t = w_100(t);
    {
      j_48 = t;
      if(((i_48 != NULL) && (i_48 != j_48)))
        _fail(j_48);
      else
        i_48 = j_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_20, term_x_20, not_null(i_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  q_48 = t;
  o_48 :
  if(match_string(q_48, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
        {
          r_48 = ATgetFirst((ATermList) q_48);
          s_48 = (ATerm) ATgetNext((ATermList) q_48);
          p_48 :
          if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
            {
              t_48 = ATgetFirst((ATermList) s_48);
              u_48 = (ATerm) ATgetNext((ATermList) s_48);
              {
                ATerm y_48 = NULL;
                ATerm z_20;
                z_20 = t;
                {
                  t = not_null(r_48);
                  t = d_0(t);
                }
                t = z_20;
                {
                  ATerm z_48 = NULL;
                  t = not_null(t_48);
                  {
                    t = g_0(t);
                    {
                      z_48 = t;
                      if(((y_48 != NULL) && (y_48 != z_48)))
                        _fail(z_48);
                      else
                        y_48 = z_48;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_48)), not_null(y_48));
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
  ATerm m_3 (ATerm t)
  {
    ATerm g_49 = NULL;
    g_49 = t;
    d_49 :
    if(!(match_string(g_49, "-i")))
      {
        if(!(match_string(g_49, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm j_49 = NULL;
    ATerm e_21;
    e_21 = t;
    {
      ATerm h_49 = NULL;
      ATerm i_49 = NULL;
      i_49 = t;
      if(((h_49 != NULL) && (h_49 != i_49)))
        _fail(i_49);
      else
        h_49 = i_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(h_49));
        t = set_config_0(t);
      }
    }
    t = e_21;
    {
      ATerm k_49 = NULL;
      k_49 = t;
      if(((j_49 != NULL) && (j_49 != k_49)))
        _fail(k_49);
      else
        j_49 = k_49;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_49));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_g_21;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_49 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_49 = NULL;
    t = term_b_6;
    {
      t = whoami_0(t);
      {
        p_49 = t;
        if(((o_49 != NULL) && (o_49 != p_49)))
          _fail(p_49);
        else
          o_49 = p_49;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATempty, term_u_21), not_null(o_49)));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_v_21;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  t = SSL_TicksToSeconds(not_null(s_49));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(match_cons(x_49, sym__2))
    {
      y_49 = ATgetArgument(x_49, 0);
      z_49 = ATgetArgument(x_49, 1);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_49), not_null(z_49));
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = SSL_addr(not_null(y_49), not_null(z_49));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_88(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
        g_50 = t;
        f_50 :
        if(((ATgetType(g_50) == AT_LIST) && !(ATisEmpty(g_50))))
          {
            h_50 = ATgetFirst((ATermList) g_50);
            i_50 = (ATerm) ATgetNext((ATermList) g_50);
            {
              ATerm p_50 = NULL;
              ATerm v_50 = NULL;
              t = not_null(i_50);
              {
                t = foldr_2(t, h_88, i_88);
                {
                  v_50 = t;
                  if(((p_50 != NULL) && (p_50 != v_50)))
                    _fail(v_50);
                  else
                    p_50 = v_50;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_50), not_null(p_50));
                t = i_88(t);
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
ATerm crush_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm c_51 = NULL;
  ATerm e_51 = NULL;
  c_51 = t;
  {
    ATerm f_51 = NULL;
    ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
    t = not_null(c_51);
    {
      f_51 = t;
      {
        t = SSL_explode_term(not_null(f_51));
        {
          h_51 = t;
          b_51 :
          if(match_cons(h_51, sym__2))
            {
              i_51 = ATgetArgument(h_51, 0);
              j_51 = ATgetArgument(h_51, 1);
              if(((e_51 != NULL) && (e_51 != j_51)))
                _fail(j_51);
              else
                e_51 = j_51;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_51);
      t = foldr_2(t, a_92, b_92);
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
    ATerm p_3 (ATerm t)
    {
      t = term_b_18;
      return(t);
    }
    t = crush_2(t, p_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym__2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      {
        ATerm f_22;
        f_22 = t;
        {
          ATerm g_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_51), not_null(r_51));
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = g_22;
              t = SSL_gtr(not_null(q_51), not_null(r_51));
            }
        }
        t = f_22;
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
  ATerm z_51 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL,b_52 = NULL,h_52 = NULL;
      a_52 = t;
      y_51 :
      if(match_cons(a_52, sym__2))
        {
          b_52 = ATgetArgument(a_52, 0);
          h_52 = ATgetArgument(a_52, 1);
          {
            if(((z_51 != NULL) && (z_51 != b_52)))
              _fail(b_52);
            else
              z_51 = b_52;
            if(((z_51 != NULL) && (z_51 != h_52)))
              _fail(h_52);
            else
              z_51 = h_52;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm p_22;
    p_22 = t;
    {
      ATerm k_52 = NULL;
      ATerm l_52 = NULL;
      t = term_g_15;
      {
        t = get_config_0(t);
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_52), term_v_6);
        t = geq_0(t);
      }
    }
    t = p_22;
    t = u_95(t);
    return(t);
  }
  t = try_1(t, q_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm p_52 = NULL,r_52 = NULL;
    ATerm q_22;
    q_22 = t;
    {
      ATerm q_52 = NULL;
      t = run_time_0(t);
      {
        q_52 = t;
        if(((p_52 != NULL) && (p_52 != q_52)))
          _fail(q_52);
        else
          p_52 = q_52;
      }
    }
    t = q_22;
    {
      ATerm s_52 = NULL;
      t = term_b_6;
      {
        t = whoami_0(t);
        {
          s_52 = t;
          if(((r_52 != NULL) && (r_52 != s_52)))
            _fail(s_52);
          else
            r_52 = s_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), not_null(p_52)), term_r_22), not_null(r_52)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_b_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym_Version_0))
    {
      ATerm c_53 = NULL,e_53 = NULL;
      ATerm t_22;
      t_22 = t;
      {
        ATerm d_53 = NULL;
        t = SSLgetAnnotations(not_null(a_53));
        {
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
        }
      }
      t = t_22;
      {
        ATerm f_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_53));
        {
          f_53 = t;
          if(((e_53 != NULL) && (e_53 != f_53)))
            _fail(f_53);
          else
            e_53 = f_53;
        }
        t = not_null(e_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm u_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = u_22;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm d_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = d_23;
              {
                ATerm h_23 = t;
                int i_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(i_23);
                  }
                else
                  {
                    t = h_23;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
      }
    }
  t = r_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  t = SSL_table_create(not_null(k_53));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  {
    ATerm j_23;
    j_23 = t;
    {
      t = term_q_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, not_null(x_53));
          t = table_put_0(t);
        }
      }
    }
    t = j_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_54 = NULL;
  b_54 = t;
  t = SSL_table_destroy(not_null(b_54));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_54 = NULL;
  f_54 = t;
  t = SSL_exit(not_null(f_54));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  j_54 = t;
  i_54 :
  if(((ATgetType(j_54) == AT_LIST) && ATisEmpty(j_54)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
        {
          k_54 = ATgetFirst((ATermList) j_54);
          l_54 = (ATerm) ATgetNext((ATermList) j_54);
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
  ATerm k_23;
  k_23 = t;
  {
    ATerm o_54 = NULL;
    ATerm r_54 = NULL;
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm p_54 = NULL;
          ATerm q_54 = NULL;
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
          t = (ATerm) ATinsert(ATempty, not_null(p_54));
        }
      }
    {
      r_54 = t;
      if(((o_54 != NULL) && (o_54 != r_54)))
        _fail(r_54);
      else
        o_54 = r_54;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_15, not_null(o_54));
      t = printnl_0(t);
    }
  }
  t = k_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm u_54 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = Cons_2(t, k_82, u_54);
      }
    return(t);
  }
  t = u_54(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  d_55 = t;
  a_55 :
  if(((ATgetType(d_55) == AT_LIST) && !(ATisEmpty(d_55))))
    {
      b_55 = ATgetFirst((ATermList) d_55);
      c_55 = (ATerm) ATgetNext((ATermList) d_55);
      {
        ATerm g_55 = NULL;
        t = not_null(c_55);
        {
          ATerm p_23;
          p_23 = t;
          {
            ATerm h_55 = NULL,j_55 = NULL,l_55 = NULL;
            ATerm q_23;
            q_23 = t;
            {
              ATerm i_55 = NULL;
              t = b_0(t);
              {
                i_55 = t;
                if(((h_55 != NULL) && (h_55 != i_55)))
                  _fail(i_55);
                else
                  h_55 = i_55;
              }
            }
            t = q_23;
            {
              ATerm k_55 = NULL;
              t = not_null(b_55);
              {
                t = a_0(t);
                {
                  k_55 = t;
                  if(((j_55 != NULL) && (j_55 != k_55)))
                    _fail(k_55);
                  else
                    j_55 = k_55;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_55)), not_null(j_55));
                {
                  l_55 = t;
                  if(((g_55 != NULL) && (g_55 != l_55)))
                    _fail(l_55);
                  else
                    g_55 = l_55;
                }
              }
            }
          }
          t = p_23;
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(g_55);
              return(t);
            }
            t = reverse_acc_2(t, a_0, w_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_55) == AT_LIST) && ATisEmpty(d_55)))
        {
          {
            t = term_b_6;
            t = b_0(t);
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
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_3);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym__2))
    {
      u_55 = ATgetArgument(t_55, 0);
      v_55 = ATgetArgument(t_55, 1);
      t = SSL_table_get(not_null(u_55), not_null(v_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm j_56 = NULL,k_56 = NULL;
  j_56 = t;
  i_56 :
  if(match_cons(j_56, sym_Program_1))
    {
      k_56 = ATgetArgument(j_56, 0);
      {
        ATerm n_56 = NULL,w_56 = NULL;
        ATerm v_56 = NULL;
        t = SSLgetAnnotations(not_null(j_56));
        {
          v_56 = t;
          if(((n_56 != NULL) && (n_56 != v_56)))
            _fail(v_56);
          else
            n_56 = v_56;
        }
        {
          t = not_null(k_56);
          {
            ATerm y_56 = NULL;
            t = i_72(t);
            {
              w_56 = t;
              {
                ATerm z_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_56)), not_null(n_56));
                {
                  z_56 = t;
                  if(((y_56 != NULL) && (y_56 != z_56)))
                    _fail(z_56);
                  else
                    y_56 = z_56;
                }
                t = not_null(y_56);
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
  ATerm i_57 = NULL;
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_57 = NULL;
      t = term_v_21;
      {
        t = get_config_0(t);
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
      }
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            ATerm k_57 = NULL;
            k_57 = t;
            if(((i_57 != NULL) && (i_57 != k_57)))
              _fail(k_57);
            else
              i_57 = k_57;
            return(t);
          }
          t = Program_1(t, z_3);
          return(t);
        }
        t = option_defined_1(t, y_3);
      }
    }
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        t = not_null(i_57);
        return(t);
      }
      t = short_description_1(t, b_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_4);
    {
      t = term_w_23;
      {
        t = echo_0(t);
        {
          t = term_a_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm l_57 = NULL;
                  ATerm m_57 = NULL;
                  m_57 = t;
                  if(((l_57 != NULL) && (l_57 != m_57)))
                    _fail(m_57);
                  else
                    l_57 = m_57;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_57)), term_d_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_4);
                {
                  ATerm d_4 (ATerm t)
                  {
                    ATerm n_57 = NULL;
                    ATerm o_57 = NULL;
                    ATerm f_4 (ATerm t)
                    {
                      t = not_null(i_57);
                      return(t);
                    }
                    t = long_description_1(t, f_4);
                    {
                      o_57 = t;
                      if(((n_57 != NULL) && (n_57 != o_57)))
                        _fail(o_57);
                      else
                        n_57 = o_57;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_57)), term_e_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_4);
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
ATerm Undefined_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm y_57 = NULL,z_57 = NULL;
  y_57 = t;
  x_57 :
  if(match_cons(y_57, sym_Undefined_1))
    {
      z_57 = ATgetArgument(y_57, 0);
      {
        ATerm j_58 = NULL,l_58 = NULL;
        ATerm k_58 = NULL;
        t = SSLgetAnnotations(not_null(y_57));
        {
          k_58 = t;
          if(((j_58 != NULL) && (j_58 != k_58)))
            _fail(k_58);
          else
            j_58 = k_58;
        }
        {
          t = not_null(z_57);
          {
            ATerm n_58 = NULL;
            t = j_72(t);
            {
              l_58 = t;
              {
                ATerm o_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_58)), not_null(j_58));
                {
                  o_58 = t;
                  if(((n_58 != NULL) && (n_58 != o_58)))
                    _fail(o_58);
                  else
                    n_58 = o_58;
                }
                t = not_null(n_58);
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
ATerm fetch_1 (ATerm t, ATerm t_82 (ATerm))
{
  ATerm t_58 (ATerm t)
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_82, _id);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
        t = Cons_2(t, _id, t_58);
      }
    return(t);
  }
  t = t_58(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_99 (ATerm))
{
  t = fetch_1(t, r_99);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  x_58 :
  if(match_cons(y_58, sym_Help_0))
    {
      ATerm a_59 = NULL,c_59 = NULL;
      ATerm m_24;
      m_24 = t;
      {
        ATerm b_59 = NULL;
        t = SSLgetAnnotations(not_null(y_58));
        {
          b_59 = t;
          if(((a_59 != NULL) && (a_59 != b_59)))
            _fail(b_59);
          else
            a_59 = b_59;
        }
      }
      t = m_24;
      {
        ATerm d_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_59));
        {
          d_59 = t;
          if(((c_59 != NULL) && (c_59 != d_59)))
            _fail(d_59);
          else
            c_59 = d_59;
        }
        t = not_null(c_59);
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
  ATerm g_4 (ATerm t)
  {
    ATerm i_59 = NULL;
    i_59 = t;
    h_59 :
    if(!(match_string(i_59, "--help")))
      {
        if(!(match_string(i_59, "-h")))
          {
            if(!(match_string(i_59, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_n_24;
    {
      t = set_config_0(t);
      t = term_o_24;
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  t = Option_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  k_59 :
  if(((ATgetType(l_59) == AT_LIST) && !(ATisEmpty(l_59))))
    {
      m_59 = ATgetFirst((ATermList) l_59);
      n_59 = (ATerm) ATgetNext((ATermList) l_59);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_59)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_59)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  w_59 :
  if(((ATgetType(x_59) == AT_LIST) && !(ATisEmpty(x_59))))
    {
      y_59 = ATgetFirst((ATermList) x_59);
      z_59 = (ATerm) ATgetNext((ATermList) x_59);
      {
        ATerm d_60 = NULL,f_60 = NULL;
        ATerm e_60 = NULL;
        t = SSLgetAnnotations(not_null(x_59));
        {
          e_60 = t;
          if(((d_60 != NULL) && (d_60 != e_60)))
            _fail(e_60);
          else
            d_60 = e_60;
        }
        {
          t = not_null(y_59);
          {
            ATerm h_60 = NULL;
            t = h_63(t);
            {
              f_60 = t;
              {
                t = not_null(z_59);
                {
                  ATerm j_60 = NULL;
                  t = i_63(t);
                  {
                    h_60 = t;
                    {
                      ATerm k_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_60)), not_null(f_60)), not_null(d_60));
                      {
                        k_60 = t;
                        if(((j_60 != NULL) && (j_60 != k_60)))
                          _fail(k_60);
                        else
                          j_60 = k_60;
                      }
                      t = not_null(j_60);
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
  ATerm u_60 = NULL;
  u_60 = t;
  t_60 :
  if(((ATgetType(u_60) == AT_LIST) && ATisEmpty(u_60)))
    {
      {
        ATerm w_60 = NULL,y_60 = NULL;
        ATerm q_24;
        q_24 = t;
        {
          ATerm x_60 = NULL;
          t = SSLgetAnnotations(not_null(u_60));
          {
            x_60 = t;
            if(((w_60 != NULL) && (w_60 != x_60)))
              _fail(x_60);
            else
              w_60 = x_60;
          }
        }
        t = q_24;
        {
          ATerm z_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_60));
          {
            z_60 = t;
            if(((y_60 != NULL) && (y_60 != z_60)))
              _fail(z_60);
            else
              y_60 = z_60;
          }
          t = not_null(y_60);
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
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  f_61 = t;
  e_61 :
  if(match_cons(f_61, sym__2))
    {
      g_61 = ATgetArgument(f_61, 0);
      h_61 = ATgetArgument(f_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_14, not_null(g_61), not_null(h_61));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm r_24;
  r_24 = t;
  {
    ATerm j_4 (ATerm t)
    {
      t = term_s_24;
      t = u_100(t);
      return(t);
    }
    t = try_1(t, j_4);
  }
  t = r_24;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm b_62 = NULL;
      ATerm t_24;
      t_24 = t;
      {
        ATerm x_61 = NULL;
        ATerm a_62 = NULL;
        a_62 = t;
        if(((x_61 != NULL) && (x_61 != a_62)))
          _fail(a_62);
        else
          x_61 = a_62;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, not_null(x_61));
          t = set_config_0(t);
        }
      }
      t = t_24;
      {
        ATerm c_62 = NULL;
        c_62 = t;
        if(((b_62 != NULL) && (b_62 != c_62)))
          _fail(c_62);
        else
          b_62 = c_62;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_62));
      }
      return(t);
    }
    ATerm n_4 (ATerm t)
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              {
                t = u_100(t);
                t = Cons_2(t, _id, n_4);
              }
            }
          ;
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_4, n_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
    l_62 = t;
    h_62 :
    if(match_cons(l_62, sym__3))
      {
        m_62 = ATgetArgument(l_62, 0);
        n_62 = ATgetArgument(l_62, 1);
        o_62 = ATgetArgument(l_62, 2);
        {
          if(((i_62 != NULL) && (i_62 != m_62)))
            _fail(m_62);
          else
            i_62 = m_62;
          {
            if(((j_62 != NULL) && (j_62 != n_62)))
              _fail(n_62);
            else
              j_62 = n_62;
            {
              if(((k_62 != NULL) && (k_62 != o_62)))
                _fail(o_62);
              else
                k_62 = o_62;
              t = SSL_table_put(not_null(i_62), not_null(j_62), not_null(k_62));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm r_62 = NULL;
  ATerm z_24;
  z_24 = t;
  {
    t = term_a_25;
    t = table_put_0(t);
  }
  t = z_24;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_100(t);
          ;
          LocalPopChoice(c_25);
        }
      else
        {
          t = b_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_25;
            f_25 = t;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_22;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_25;
            {
              t = system_usage_0(t);
              {
                t = term_b_18;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm u_4 (ATerm t)
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm s_62 = NULL;
                  s_62 = t;
                  if(((r_62 != NULL) && (r_62 != s_62)))
                    _fail(s_62);
                  else
                    r_62 = s_62;
                  return(t);
                }
                t = Undefined_1(t, v_4);
                return(t);
              }
              t = option_defined_1(t, u_4);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_62)), term_i_25));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_6;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_4);
      {
        ATerm j_25;
        j_25 = t;
        {
          t = term_w_20;
          t = table_destroy_0(t);
        }
        t = j_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  t = parse_options_1(t, t_98);
  {
    t = store_options_0(t);
    {
      t = v_98(t);
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_98);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_98(t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_4, k_98, l_98, x_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm q_25;
      q_25 = t;
      {
        ATerm v_62 = NULL;
        ATerm w_62 = NULL;
        t = term_v_21;
        {
          t = get_config_0(t);
          {
            w_62 = t;
            if(((v_62 != NULL) && (v_62 != w_62)))
              _fail(w_62);
            else
              v_62 = w_62;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATempty, not_null(v_62)));
          t = printnl_0(t);
        }
      }
      t = q_25;
      return(t);
    }
    t = if_verbose2_1(t, b_5);
    return(t);
  }
  t = iowrap_4(t, c_98, d_98, e_98, a_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_98 (ATerm), ATerm b_98 (ATerm))
{
  t = iowrap_3(t, a_98, b_98, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = termid_check_p__1(t, w_103);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = x_103(t);
      {
        ATerm i_5 (ATerm t)
        {
          t = termid_set_p__1(t, w_103);
          return(t);
        }
        t = try_1(t, i_5);
      }
    }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_103(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm j_5 (ATerm t)
          {
            ATerm z_62 = NULL;
            z_62 = t;
            y_62 :
            if(!(match_string(z_62, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm n_5 (ATerm t)
          {
            t = term_z_12;
            return(t);
          }
          ATerm q_5 (ATerm t)
          {
            t = term_t_25;
            return(t);
          }
          t = Option_3(t, j_5, n_5, q_5);
        }
      }
    return(t);
  }
  t = iowrap_2(t, c_5, d_5);
  return(t);
}
ATerm io_sdf_2_pp_table_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm c_63 = NULL;
      c_63 = t;
      a_63 :
      if(!(match_string(c_63, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm w_5 (ATerm t)
    {
      t = term_u_25;
      return(t);
    }
    t = InOutId_2(t, u_5, w_5);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm d_63 = NULL;
      d_63 = t;
      b_63 :
      if(!(match_string(d_63, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = term_v_25;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      t = term_w_25;
      return(t);
    }
    t = Option_3(t, x_5, y_5, z_5);
    return(t);
  }
  t = io_idwrap_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_sdf_2_pp_table_0(t);
  return(t);
}

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
Symbol sym_parsetree_2;
Symbol sym_Scopes_0;
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Infinite_0;
Symbol sym_CUT_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Strict_0;
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
Symbol sym_PP_Table_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_q_23;
ATerm term_e_23;
ATerm term_t_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_b_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_f_15;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_q_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_m_9;
ATerm term_p_8;
void init_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_t_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Option_2 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm l_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm j_68 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm n_55 (ATerm));
ATerm length_0 (ATerm);
ATerm collect_p__1 (ATerm, ATerm o_50 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm r_73 (ATerm));
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_58 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm y_64 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm trm2abox3_0 (ATerm);
ATerm trm2abox2_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm trm2abox1_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm x_66 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm i_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_68 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm g_73 (ATerm));
ATerm termid_check_1 (ATerm, ATerm n_73 (ATerm));
ATerm debug_1 (ATerm, ATerm q_71 (ATerm));
ATerm oncetd_1 (ATerm, ATerm z_69 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm w_72 (ATerm));
ATerm notify_1 (ATerm, ATerm t_50 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm x_61 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm));
ATerm crush_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm collect_om_1 (ATerm, ATerm w_62 (ATerm));
ATerm collect_1 (ATerm, ATerm y_62 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm i_39 (ATerm), ATerm j_39 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_55 (ATerm));
ATerm map_1 (ATerm, ATerm z_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_55 (ATerm));
ATerm Program_1 (ATerm, ATerm d_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_55 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_55 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_55 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm q_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  p_1 = t;
  n_1 :
  if(match_string(p_1, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(p_1) == AT_LIST) && ((ATermList) p_1 != ATempty)))
        {
          q_1 = ATgetFirst((ATermList) p_1);
          r_1 = (ATerm) ATgetNext((ATermList) p_1);
          o_1 :
          if(((ATgetType(r_1) == AT_LIST) && ((ATermList) r_1 != ATempty)))
            {
              s_1 = ATgetFirst((ATermList) r_1);
              t_1 = (ATerm) ATgetNext((ATermList) r_1);
              {
                ATerm x_1 = NULL;
                ATerm p_2;
                p_2 = t;
                {
                  t = not_null(q_1);
                  t = m_0(t);
                }
                t = p_2;
                {
                  ATerm y_1 = NULL;
                  t = not_null(s_1);
                  {
                    t = n_0(t);
                    {
                      y_1 = t;
                      if(((x_1 != NULL) && (x_1 != y_1)))
                        _fail(y_1);
                      else
                        x_1 = y_1;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_1)), not_null(x_1));
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
ATerm Option_2 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  t = Option_3(t, y_55, z_55, a_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  c_2 :
  if(((ATermList) d_2 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_2) == AT_LIST) && ((ATermList) d_2 != ATempty)))
        {
          e_2 = ATgetFirst((ATermList) d_2);
          f_2 = (ATerm) ATgetNext((ATermList) d_2);
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
ATerm flat_list_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
            ATerm r_2 (ATerm t)
            {
              if(((k_2 != NULL) && (k_2 != n_2)))
                _fail(n_2);
              else
                k_2 = n_2;
              {
                if(((l_2 != NULL) && (l_2 != o_2)))
                  _fail(o_2);
                else
                  l_2 = o_2;
                {
                  t = not_null(k_2);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_2), not_null(l_2));
                      {
                        t = conc_0(t);
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            m_2 = t;
            i_2 :
            if(((ATgetType(m_2) == AT_LIST) && ((ATermList) m_2 != ATempty)))
              {
                n_2 = ATgetFirst((ATermList) m_2);
                o_2 = (ATerm) ATgetNext((ATermList) m_2);
                j_2 :
                if(((ATermList) n_2 == ATempty))
                  {
                    {
                      ATerm u_8 = t;
                      int h_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((l_2 != NULL) && (l_2 != o_2)))
                            _fail(o_2);
                          else
                            l_2 = o_2;
                          {
                            ATerm d_0 (ATerm t)
                            {
                              t = not_null(l_2);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, d_0);
                          }
                          LocalPopChoice(h_9);
                        }
                      else
                        {
                          t = u_8;
                          t = r_2(t);
                        }
                    }
                  }
                else
                  {
                    t = r_2(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
  b_3 = t;
  z_2 :
  if(match_cons(b_3, sym_Arg2_2))
    {
      c_3 = ATgetArgument(b_3, 0);
      a_3 = ATgetArgument(b_3, 1);
      {
        ATerm f_3 = NULL,g_3 = NULL;
        ATerm h_3 = NULL,j_3 = NULL;
        ATerm i_3 = NULL;
        t = term_m_9;
        {
          t = l_0(t);
          {
            i_3 = t;
            if(((h_3 != NULL) && (h_3 != i_3)))
              _fail(i_3);
            else
              h_3 = i_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(h_3));
          {
            ATerm k_3 = NULL;
            t = index_0(t);
            {
              j_3 = t;
              {
                if(((f_3 != NULL) && (f_3 != j_3)))
                  _fail(j_3);
                else
                  f_3 = j_3;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), not_null(f_3));
                  {
                    t = index_0(t);
                    {
                      k_3 = t;
                      if(((g_3 != NULL) && (g_3 != k_3)))
                        _fail(k_3);
                      else
                        g_3 = k_3;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(g_3);
      }
    }
  else
    {
      if(match_cons(b_3, sym_Arg_1))
        {
          c_3 = ATgetArgument(b_3, 0);
          {
            ATerm m_3 = NULL;
            ATerm n_3 = NULL,p_3 = NULL;
            ATerm o_3 = NULL;
            t = term_m_9;
            {
              t = l_0(t);
              {
                o_3 = t;
                if(((n_3 != NULL) && (n_3 != o_3)))
                  _fail(o_3);
                else
                  n_3 = o_3;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(n_3));
              {
                t = index_0(t);
                {
                  p_3 = t;
                  if(((m_3 != NULL) && (m_3 != p_3)))
                    _fail(p_3);
                  else
                    m_3 = p_3;
                }
              }
            }
            t = not_null(m_3);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = _all(t, x_3);
    t = j_68(t);
    return(t);
  }
  t = x_3(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym__2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = not_null(c_4);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm p_0 (ATerm t)
            {
              ATerm n_9 = t;
              int o_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    t = not_null(d_4);
                    return(t);
                  }
                  t = Instantiate_1(t, q_0);
                  LocalPopChoice(o_9);
                }
              else
                {
                  t = n_9;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, p_0);
            return(t);
          }
          t = bottomup_1(t, e_0);
          {
            h_4 = t;
            if(((g_4 != NULL) && (g_4 != h_4)))
              _fail(h_4);
            else
              g_4 = h_4;
          }
        }
        t = not_null(g_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tuple2list_0 (ATerm t)
{
  ATerm p_4 = NULL;
  ATerm r_4 = NULL;
  p_4 = t;
  {
    ATerm s_4 = NULL;
    ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
    t = not_null(p_4);
    {
      s_4 = t;
      {
        t = SSL_explode_term(not_null(s_4));
        {
          u_4 = t;
          n_4 :
          if(match_cons(u_4, sym__2))
            {
              v_4 = ATgetArgument(u_4, 0);
              w_4 = ATgetArgument(u_4, 1);
              o_4 :
              if(match_string(v_4, ""))
                {
                  if(((r_4 != NULL) && (r_4 != w_4)))
                    _fail(w_4);
                  else
                    r_4 = w_4;
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
    t = not_null(r_4);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  h_5 = t;
  f_5 :
  if(match_cons(h_5, sym__4))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      k_5 = ATgetArgument(h_5, 2);
      l_5 = ATgetArgument(h_5, 3);
      g_5 :
      if(match_string(i_5, "seq"))
        {
          ATerm y_5 = NULL;
          t = not_null(l_5);
          {
            t = tuple2list_0(t);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
                p_5 = t;
                d_5 :
                if(match_cons(p_5, sym__2))
                  {
                    q_5 = ATgetArgument(p_5, 0);
                    r_5 = ATgetArgument(p_5, 1);
                    {
                      ATerm u_5 = NULL;
                      ATerm v_5 = NULL;
                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_5), not_null(j_5), not_null(r_5));
                      {
                        t = arg2abox_0(t);
                        {
                          v_5 = t;
                          if(((u_5 != NULL) && (u_5 != v_5)))
                            _fail(v_5);
                          else
                            u_5 = v_5;
                        }
                      }
                      t = not_null(u_5);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, r_0);
              {
                y_5 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(y_5));
                  t = instantiate_0(t);
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          ATerm r_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(u_9);
            }
          else
            {
              t = r_9;
              {
                ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
                l_6 = t;
                g_6 :
                if(((ATgetType(l_6) == AT_LIST) && ((ATermList) l_6 != ATempty)))
                  {
                    m_6 = ATgetFirst((ATermList) l_6);
                    n_6 = (ATerm) ATgetNext((ATermList) l_6);
                    h_6 :
                    if(((ATgetType(n_6) == AT_LIST) && ((ATermList) n_6 != ATempty)))
                      {
                        o_6 = ATgetFirst((ATermList) n_6);
                        p_6 = (ATerm) ATgetNext((ATermList) n_6);
                        {
                          if(((i_6 != NULL) && (i_6 != m_6)))
                            _fail(m_6);
                          else
                            i_6 = m_6;
                          {
                            if(((j_6 != NULL) && (j_6 != o_6)))
                              _fail(o_6);
                            else
                              j_6 = o_6;
                            {
                              if(((k_6 != NULL) && (k_6 != p_6)))
                                _fail(p_6);
                              else
                                k_6 = p_6;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  ATerm q_6 = NULL;
                                  ATerm r_6 = NULL;
                                  t = term_m_9;
                                  {
                                    t = n_55(t);
                                    {
                                      r_6 = t;
                                      if(((q_6 != NULL) && (q_6 != r_6)))
                                        _fail(r_6);
                                      else
                                        q_6 = r_6;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_6)), not_null(i_6)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm t_0 (ATerm t)
                                {
                                  t = not_null(k_6);
                                  t = s_6(t);
                                  return(t);
                                }
                                t = Cons_2(t, s_0, t_0);
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
        }
      }
    return(t);
  }
  t = s_6(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  t = foldr_3(t, u_0, add_0, v_0);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm o_50 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm x_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL;
        t = o_50(t);
        {
          w_6 = t;
          t = (ATerm) ATinsert(ATempty, not_null(w_6));
        }
        LocalPopChoice(z_9);
      }
    else
      {
        t = x_9;
        {
          ATerm w_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, w_0, conc_0, y_6);
        }
      }
    return(t);
  }
  t = y_6(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      t = SSL_mod(not_null(d_7), not_null(e_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), term_a_10);
    {
      t = mod_0(t);
      {
        m_7 = t;
        j_7 :
        if(!(match_int(m_7, 0)))
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        ATerm z_7 = NULL;
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL,c_8 = NULL;
            t = not_null(v_7);
            {
              t = even_0(t);
              {
                ATerm b_8 = NULL;
                t = term_m_9;
                {
                  t = r_73(t);
                  {
                    b_8 = t;
                    if(((a_8 != NULL) && (a_8 != b_8)))
                      _fail(b_8);
                    else
                      a_8 = b_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_10, not_null(a_8), not_null(w_7));
                  {
                    t = arg2abox_0(t);
                    {
                      c_8 = t;
                      if(((z_7 != NULL) && (z_7 != c_8)))
                        _fail(c_8);
                      else
                        z_7 = c_8;
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm d_8 = NULL,f_8 = NULL;
              ATerm e_8 = NULL;
              t = term_m_9;
              {
                t = r_73(t);
                {
                  e_8 = t;
                  if(((d_8 != NULL) && (d_8 != e_8)))
                    _fail(e_8);
                  else
                    d_8 = e_8;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_9, not_null(d_8), not_null(w_7));
                {
                  t = arg2abox_0(t);
                  {
                    f_8 = t;
                    if(((z_7 != NULL) && (z_7 != f_8)))
                      _fail(f_8);
                    else
                      z_7 = f_8;
                  }
                }
              }
            }
          }
        t = not_null(z_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox6_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  b_9 = t;
  n_8 :
  if(match_cons(b_9, sym__4))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      e_9 = ATgetArgument(b_9, 2);
      f_9 = ATgetArgument(b_9, 3);
      o_8 :
      if(match_string(c_9, "iter-sep"))
        {
          if(((y_8 != NULL) && (y_8 != d_9)))
            _fail(d_9);
          else
            y_8 = d_9;
          {
            if(((z_8 != NULL) && (z_8 != e_9)))
              _fail(e_9);
            else
              z_8 = e_9;
            if(((a_9 != NULL) && (a_9 != f_9)))
              _fail(f_9);
            else
              a_9 = f_9;
          }
        }
      else
        {
          if(match_string(c_9, "iter-star-sep"))
            {
              if(((y_8 != NULL) && (y_8 != d_9)))
                _fail(d_9);
              else
                y_8 = d_9;
              {
                if(((z_8 != NULL) && (z_8 != e_9)))
                  _fail(e_9);
                else
                  z_8 = e_9;
                if(((a_9 != NULL) && (a_9 != f_9)))
                  _fail(f_9);
                else
                  a_9 = f_9;
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
  {
    t = not_null(a_9);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = not_null(y_8);
          return(t);
        }
        t = BuildSepList_1(t, y_0);
        return(t);
      }
      t = nzip_1(t, x_0);
      {
        g_9 = t;
        {
          ATerm e_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_9 = NULL;
              t = not_null(z_8);
              {
                ATerm z_0 (ATerm t)
                {
                  t = S_1(t, _id);
                  return(t);
                }
                t = collect_p__1(t, z_0);
                {
                  t = length_0(t);
                  {
                    i_9 = t;
                    x_8 :
                    if(match_int(i_9, 1))
                      {
                        t = not_null(g_9);
                        {
                          ATerm y_9 (ATerm t)
                          {
                            ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
                            ATerm b_10 (ATerm t)
                            {
                              ATerm s_9 = NULL;
                              ATerm t_9 = NULL;
                              t = not_null(l_9);
                              {
                                t = y_9(t);
                                {
                                  t_9 = t;
                                  if(((s_9 != NULL) && (s_9 != t_9)))
                                    _fail(t_9);
                                  else
                                    s_9 = t_9;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_9)), not_null(k_9)), not_null(k_9));
                              return(t);
                            }
                            j_9 = t;
                            v_8 :
                            if(((ATermList) j_9 == ATempty))
                              {
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                if(((ATgetType(j_9) == AT_LIST) && ((ATermList) j_9 != ATempty)))
                                  {
                                    k_9 = ATgetFirst((ATermList) j_9);
                                    l_9 = (ATerm) ATgetNext((ATermList) j_9);
                                    w_8 :
                                    if(((ATermList) l_9 == ATempty))
                                      {
                                        {
                                          ATerm i_10 = t;
                                          int j_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(k_9));
                                              LocalPopChoice(j_10);
                                            }
                                          else
                                            {
                                              t = i_10;
                                              t = b_10(t);
                                            }
                                        }
                                      }
                                    else
                                      {
                                        t = b_10(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          t = y_9(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
              LocalPopChoice(h_10);
            }
          else
            {
              t = e_10;
              t = not_null(g_9);
            }
          {
            ATerm a_1 (ATerm t)
            {
              t = not_null(z_8);
              return(t);
            }
            t = instantiate_sep_list_1(t, a_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox5_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,x_10 = NULL;
  n_10 = t;
  f_10 :
  if(match_cons(n_10, sym__4))
    {
      o_10 = ATgetArgument(n_10, 0);
      p_10 = ATgetArgument(n_10, 1);
      q_10 = ATgetArgument(n_10, 2);
      r_10 = ATgetArgument(n_10, 3);
      g_10 :
      if(match_string(o_10, "iter"))
        {
          if(((k_10 != NULL) && (k_10 != p_10)))
            _fail(p_10);
          else
            k_10 = p_10;
          {
            if(((l_10 != NULL) && (l_10 != q_10)))
              _fail(q_10);
            else
              l_10 = q_10;
            if(((m_10 != NULL) && (m_10 != r_10)))
              _fail(r_10);
            else
              m_10 = r_10;
          }
        }
      else
        {
          if(match_string(o_10, "iter-star"))
            {
              if(((k_10 != NULL) && (k_10 != p_10)))
                _fail(p_10);
              else
                k_10 = p_10;
              {
                if(((l_10 != NULL) && (l_10 != q_10)))
                  _fail(q_10);
                else
                  l_10 = q_10;
                if(((m_10 != NULL) && (m_10 != r_10)))
                  _fail(r_10);
                else
                  m_10 = r_10;
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
  {
    t = not_null(m_10);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm s_10 = NULL;
        ATerm u_10 = NULL;
        s_10 = t;
        {
          ATerm v_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, term_w_9, not_null(k_10), not_null(s_10));
          {
            t = arg2abox_0(t);
            {
              v_10 = t;
              if(((u_10 != NULL) && (u_10 != v_10)))
                _fail(v_10);
              else
                u_10 = v_10;
            }
          }
          t = not_null(u_10);
        }
        return(t);
      }
      t = map_1(t, b_1);
      {
        x_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), (ATerm) ATinsert(ATempty, not_null(x_10)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  f_11 :
  if(match_cons(h_11, sym__4))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      k_11 = ATgetArgument(h_11, 2);
      l_11 = ATgetArgument(h_11, 3);
      g_11 :
      if(match_cons(l_11, sym_None_0))
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
  return(t);
}
ATerm symbol2abox3_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  y_11 = t;
  w_11 :
  if(match_cons(y_11, sym__4))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      b_12 = ATgetArgument(y_11, 2);
      c_12 = ATgetArgument(y_11, 3);
      x_11 :
      if(match_cons(c_12, sym_Some_1))
        {
          d_12 = ATgetArgument(c_12, 0);
          {
            ATerm i_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_w_9, not_null(a_12), not_null(d_12));
            {
              t = arg2abox_0(t);
              {
                i_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), (ATerm) ATinsert(ATempty, not_null(i_12)));
                  t = instantiate_0(t);
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
ATerm symbol2abox2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  t_12 = t;
  p_12 :
  if(match_cons(t_12, sym__4))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      z_12 = ATgetArgument(t_12, 3);
      q_12 :
      if(match_cons(z_12, sym_alt_2))
        {
          a_13 = ATgetArgument(z_12, 0);
          b_13 = ATgetArgument(z_12, 1);
          r_12 :
          if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
            {
              c_13 = ATgetFirst((ATermList) b_13);
              d_13 = (ATerm) ATgetNext((ATermList) b_13);
              s_12 :
              if(((ATermList) d_13 == ATempty))
                {
                  {
                    ATerm j_13 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(a_13), not_null(v_12), not_null(c_13));
                    {
                      ATerm l_13 = NULL;
                      t = arg2abox_0(t);
                      {
                        j_13 = t;
                        {
                          ATerm m_13 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(w_12));
                          {
                            t = index_0(t);
                            {
                              m_13 = t;
                              if(((l_13 != NULL) && (l_13 != m_13)))
                                _fail(m_13);
                              else
                                l_13 = m_13;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_13)), (ATerm) ATinsert(ATempty, not_null(j_13)));
                            t = instantiate_0(t);
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
ATerm Ind1_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  u_13 = t;
  r_13 :
  if(match_cons(u_13, sym__2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      s_13 :
      if(match_int(v_13, 1))
        {
          t_13 :
          if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
            {
              x_13 = ATgetFirst((ATermList) w_13);
              y_13 = (ATerm) ATgetNext((ATermList) w_13);
              t = not_null(x_13);
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
ATerm subt_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm t_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_14), not_null(g_14));
            LocalPopChoice(w_10);
          }
        else
          {
            t = t_10;
            t = SSL_subtr(not_null(f_14), not_null(g_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym__2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      {
        ATerm y_10;
        y_10 = t;
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_14), not_null(v_14));
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              t = SSL_gtr(not_null(u_14), not_null(v_14));
            }
        }
        t = y_10;
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
  ATerm b_15 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_15 = NULL,g_15 = NULL,h_15 = NULL;
      c_15 = t;
      a_15 :
      if(match_cons(c_15, sym__2))
        {
          g_15 = ATgetArgument(c_15, 0);
          h_15 = ATgetArgument(c_15, 1);
          {
            if(((b_15 != NULL) && (b_15 != g_15)))
              _fail(g_15);
            else
              b_15 = g_15;
            if(((b_15 != NULL) && (b_15 != h_15)))
              _fail(h_15);
            else
              b_15 = h_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  n_15 = t;
  l_15 :
  if(match_cons(n_15, sym__2))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      m_15 :
      if(((ATgetType(p_15) == AT_LIST) && ((ATermList) p_15 != ATempty)))
        {
          q_15 = ATgetFirst((ATermList) p_15);
          r_15 = (ATerm) ATgetNext((ATermList) p_15);
          {
            ATerm v_15 = NULL;
            ATerm d_11;
            d_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), term_a_10);
              t = geq_0(t);
            }
            t = d_11;
            {
              ATerm w_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), term_w_9);
              {
                t = subt_0(t);
                {
                  w_15 = t;
                  if(((v_15 != NULL) && (v_15 != w_15)))
                    _fail(w_15);
                  else
                    v_15 = w_15;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(r_15));
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
ATerm repeat_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm z_15 (ATerm t)
  {
    ATerm e_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_58(t);
        t = z_15(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = e_11;
        t = b_58(t);
      }
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_58 (ATerm))
{
  t = repeat_2(t, d_58, _id);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox1_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  f_16 = t;
  c_16 :
  if(match_cons(f_16, sym__4))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      i_16 = ATgetArgument(f_16, 2);
      j_16 = ATgetArgument(f_16, 3);
      d_16 :
      if(match_cons(j_16, sym_alt_2))
        {
          k_16 = ATgetArgument(j_16, 0);
          l_16 = ATgetArgument(j_16, 1);
          e_16 :
          if(((ATermList) l_16 == ATempty))
            {
              {
                ATerm q_16 = NULL;
                ATerm r_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(i_16));
                {
                  t = index_0(t);
                  {
                    r_16 = t;
                    if(((q_16 != NULL) && (q_16 != r_16)))
                      _fail(r_16);
                    else
                      q_16 = r_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_16)), (ATerm) ATempty);
                  t = instantiate_0(t);
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
ATerm symbol2abox_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm r_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = r_11;
                  {
                    ATerm t_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = t_11;
                        {
                          ATerm v_11 = t;
                          int e_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              LocalPopChoice(e_12);
                            }
                          else
                            {
                              t = v_11;
                              {
                                ATerm f_12 = t;
                                int g_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    LocalPopChoice(g_12);
                                  }
                                else
                                  {
                                    t = f_12;
                                    t = symbol2abox7_0(t);
                                  }
                              }
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
ATerm selector_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_selector_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL;
            t = not_null(c_17);
            {
              ATerm i_17 = NULL;
              t = j_0(t);
              {
                g_17 = t;
                {
                  t = not_null(d_17);
                  {
                    t = k_0(t);
                    {
                      i_17 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(g_17), not_null(i_17));
                    }
                  }
                }
              }
            }
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            {
              ATerm m_17 = NULL;
              t = not_null(c_17);
              {
                ATerm o_17 = NULL;
                t = j_0(t);
                {
                  m_17 = t;
                  {
                    t = not_null(d_17);
                    {
                      t = k_0(t);
                      {
                        o_17 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(m_17), not_null(o_17));
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
ATerm get_symbol_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Path_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm z_18 = NULL;
        t = not_null(b_18);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                ATerm a_19 = NULL;
                a_19 = t;
                if(((z_18 != NULL) && (z_18 != a_19)))
                  _fail(a_19);
                else
                  z_18 = a_19;
                return(t);
              }
              t = selector_2(t, _id, e_1);
              return(t);
            }
            t = Cons_2(t, d_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, c_1);
        }
        t = not_null(z_18);
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
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      {
        t = not_null(j_19);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(k_19);
            return(t);
          }
          t = at_end_1(t, f_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm arg2abox_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym__3))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      x_19 = ATgetArgument(u_19, 2);
      {
        ATerm d_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), (ATerm) ATinsert(ATempty, not_null(v_19)));
        {
          ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
          t = conc_0(t);
          {
            d_20 = t;
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
                  t = pp_table_get_0(t);
                  {
                    k_20 = t;
                    s_19 :
                    if(match_cons(k_20, sym__2))
                      {
                        l_20 = ATgetArgument(k_20, 0);
                        m_20 = ATgetArgument(k_20, 1);
                        {
                          ATerm n_20 = NULL;
                          if(((h_20 != NULL) && (h_20 != l_20)))
                            _fail(l_20);
                          else
                            h_20 = l_20;
                          {
                            if(((j_20 != NULL) && (j_20 != m_20)))
                              _fail(m_20);
                            else
                              j_20 = m_20;
                            {
                              t = not_null(h_20);
                              {
                                t = get_symbol_0(t);
                                {
                                  n_20 = t;
                                  {
                                    if(((i_20 != NULL) && (i_20 != n_20)))
                                      _fail(n_20);
                                    else
                                      i_20 = n_20;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(i_20), not_null(d_20), not_null(j_20), not_null(x_19));
                                      t = symbol2abox_0(t);
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
                  LocalPopChoice(l_12);
                }
              else
                {
                  t = k_12;
                  {
                    t = not_null(x_19);
                    t = trm2abox_0(t);
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
ATerm NZip3_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_20)), not_null(v_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  g_21 :
  if(match_cons(j_21, sym__2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_21), not_null(l_21));
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = SSL_addr(not_null(k_21), not_null(l_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  t_21 = t;
  r_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      s_21 :
      if(((ATgetType(v_21) == AT_LIST) && ((ATermList) v_21 != ATempty)))
        {
          w_21 = ATgetFirst((ATermList) v_21);
          x_21 = (ATerm) ATgetNext((ATermList) v_21);
          {
            ATerm b_22 = NULL;
            ATerm c_22 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), term_w_9);
            {
              t = add_0(t);
              {
                c_22 = t;
                if(((b_22 != NULL) && (b_22 != c_22)))
                  _fail(c_22);
                else
                  b_22 = c_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_21), not_null(w_21)), (ATerm) ATmakeAppl(sym__2, not_null(b_22), not_null(x_21)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  g_22 :
  if(match_cons(l_22, sym__2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      h_22 :
      if(((ATermList) n_22 == ATempty))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm o_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_64(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = o_12;
        {
          t = n_64(t);
          {
            t = _2(t, p_64, q_22);
            t = o_64(t);
          }
        }
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(s_22));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm y_64 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, y_64);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  y_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(y_22));
    {
      t = table_get_0(t);
      {
        a_23 = t;
        x_22 :
        if(match_cons(a_23, sym__2))
          {
            b_23 = ATgetArgument(a_23, 0);
            c_23 = ATgetArgument(a_23, 1);
            {
              ATerm e_13;
              e_13 = t;
              {
                t = not_null(b_23);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = term_f_13;
                      return(t);
                    }
                    t = notify_1(t, g_1);
                  }
                }
              }
              t = e_13;
            }
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
ATerm pp_table_get_p__0 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm h_1 (ATerm t)
          {
            t = term_i_13;
            return(t);
          }
          t = debug_1(t, h_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox3_0 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm w_23 = NULL,x_23 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  u_23 = t;
  {
    ATerm y_23 = NULL;
    ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
    t = not_null(u_23);
    {
      y_23 = t;
      {
        t = SSL_explode_term(not_null(y_23));
        {
          a_24 = t;
          o_23 :
          if(match_cons(a_24, sym__2))
            {
              b_24 = ATgetArgument(a_24, 0);
              c_24 = ATgetArgument(a_24, 1);
              {
                if(((w_23 != NULL) && (w_23 != b_24)))
                  _fail(b_24);
                else
                  w_23 = b_24;
                if(((x_23 != NULL) && (x_23 != c_24)))
                  _fail(c_24);
                else
                  x_23 = c_24;
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
      t = (ATerm) ATinsert(ATempty, not_null(w_23));
      {
        t = pp_table_get_p__0(t);
        {
          d_24 = t;
          t_23 :
          if(match_cons(d_24, sym__2))
            {
              e_24 = ATgetArgument(d_24, 0);
              f_24 = ATgetArgument(d_24, 1);
              {
                ATerm n_24 = NULL;
                t = not_null(x_23);
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
                    i_24 = t;
                    r_23 :
                    if(match_cons(i_24, sym__2))
                      {
                        j_24 = ATgetArgument(i_24, 0);
                        k_24 = ATgetArgument(i_24, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(j_24), (ATerm)ATinsert(ATempty, not_null(w_23)), not_null(k_24));
                          t = arg2abox_0(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = nzip_1(t, i_1);
                  {
                    n_24 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(n_24));
                      t = instantiate_0(t);
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
    }
  }
  return(t);
}
ATerm trm2abox2_0 (ATerm t)
{
  t = is_list_0(t);
  t = map_1(t, trm2abox_0);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_is_string(not_null(w_24));
  return(t);
}
ATerm trm2abox1_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_25));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm k_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox1_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = k_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox2_0(t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = trm2abox3_0(t);
          }
      }
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_int_to_string(not_null(e_25));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Path1_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      t = not_null(p_25);
    }
  else
    {
      if(match_cons(o_25, sym_Path_2))
        {
          p_25 = ATgetArgument(o_25, 0);
          q_25 = ATgetArgument(o_25, 1);
          {
            ATerm y_25 = NULL,g_26 = NULL;
            t = not_null(q_25);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
                z_25 = t;
                l_25 :
                if(match_cons(z_25, sym_selector_2))
                  {
                    a_26 = ATgetArgument(z_25, 0);
                    b_26 = ATgetArgument(z_25, 1);
                    {
                      ATerm e_26 = NULL;
                      ATerm f_26 = NULL;
                      t = not_null(a_26);
                      {
                        t = int_to_string_0(t);
                        {
                          f_26 = t;
                          if(((e_26 != NULL) && (e_26 != f_26)))
                            _fail(f_26);
                          else
                            e_26 = f_26;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_26)), term_z_13), not_null(e_26)), term_q_13);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, j_1);
              {
                t = concat_0(t);
                {
                  g_26 = t;
                  {
                    if(((y_25 != NULL) && (y_25 != g_26)))
                      _fail(g_26);
                    else
                      y_25 = g_26;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), not_null(p_25));
                      t = concat_strings_0(t);
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
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym_Path1_1))
    {
      v_26 = ATgetArgument(u_26, 0);
      t = (ATerm) ATinsert(ATempty, not_null(v_26));
    }
  else
    {
      if(match_cons(u_26, sym_Path_2))
        {
          v_26 = ATgetArgument(u_26, 0);
          w_26 = ATgetArgument(u_26, 1);
          {
            ATerm e_27 = NULL,m_27 = NULL;
            t = not_null(w_26);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
                f_27 = t;
                r_26 :
                if(match_cons(f_27, sym_selector_2))
                  {
                    g_27 = ATgetArgument(f_27, 0);
                    h_27 = ATgetArgument(f_27, 1);
                    t = not_null(g_27);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, k_1);
              {
                m_27 = t;
                {
                  if(((e_27 != NULL) && (e_27 != m_27)))
                    _fail(m_27);
                  else
                    e_27 = m_27;
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(v_26));
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
  return(t);
}
ATerm StoreEntry_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym_PP_Entry_2))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      {
        ATerm b_28 = NULL;
        ATerm c_28 = NULL;
        t = not_null(v_27);
        {
          t = mk_key_0(t);
          {
            c_28 = t;
            if(((b_28 != NULL) && (b_28 != c_28)))
              _fail(c_28);
            else
              b_28 = c_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_12, not_null(b_28), (ATerm) ATmakeAppl(sym__2, not_null(v_27), not_null(w_27)));
          {
            t = table_put_0(t);
            {
              t = not_null(v_27);
              {
                t = path_to_string_0(t);
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = term_a_14;
                    return(t);
                  }
                  t = notify_1(t, l_1);
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
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(not_null(i_28));
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  m_28 :
  if(((ATermList) o_28 == ATempty))
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(((ATgetType(t_28) == AT_LIST) && ((ATermList) t_28 != ATempty)))
    {
      u_28 = ATgetFirst((ATermList) t_28);
      v_28 = (ATerm) ATgetNext((ATermList) t_28);
      {
        ATerm y_28 = NULL;
        ATerm z_28 = NULL;
        t = not_null(v_28);
        {
          t = De_Escape_0(t);
          {
            z_28 = t;
            if(((y_28 != NULL) && (y_28 != z_28)))
              _fail(z_28);
            else
              y_28 = z_28;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(y_28)), not_null(u_28));
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
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  i_29 = t;
  e_29 :
  if(((ATgetType(i_29) == AT_LIST) && ((ATermList) i_29 != ATempty)))
    {
      j_29 = ATgetFirst((ATermList) i_29);
      k_29 = (ATerm) ATgetNext((ATermList) i_29);
      f_29 :
      if(match_int(j_29, 92))
        {
          g_29 :
          if(((ATgetType(k_29) == AT_LIST) && ((ATermList) k_29 != ATempty)))
            {
              l_29 = ATgetFirst((ATermList) k_29);
              m_29 = (ATerm) ATgetNext((ATermList) k_29);
              h_29 :
              if(match_int(l_29, 92))
                {
                  ATerm o_29 = NULL;
                  ATerm p_29 = NULL;
                  t = not_null(m_29);
                  {
                    t = De_Escape_0(t);
                    {
                      p_29 = t;
                      if(((o_29 != NULL) && (o_29 != p_29)))
                        _fail(p_29);
                      else
                        o_29 = p_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_29)), term_b_14);
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
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  y_29 = t;
  u_29 :
  if(((ATgetType(y_29) == AT_LIST) && ((ATermList) y_29 != ATempty)))
    {
      z_29 = ATgetFirst((ATermList) y_29);
      a_30 = (ATerm) ATgetNext((ATermList) y_29);
      v_29 :
      if(match_int(z_29, 92))
        {
          w_29 :
          if(((ATgetType(a_30) == AT_LIST) && ((ATermList) a_30 != ATempty)))
            {
              b_30 = ATgetFirst((ATermList) a_30);
              c_30 = (ATerm) ATgetNext((ATermList) a_30);
              x_29 :
              if(match_int(b_30, 34))
                {
                  ATerm e_30 = NULL;
                  ATerm f_30 = NULL;
                  t = not_null(c_30);
                  {
                    t = De_Escape_0(t);
                    {
                      f_30 = t;
                      if(((e_30 != NULL) && (e_30 != f_30)))
                        _fail(f_30);
                      else
                        e_30 = f_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_30)), term_c_14);
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
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  t = De_Escape4_0(t);
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
ATerm at_last_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = x_66(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = Cons_2(t, _id, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(((ATgetType(s_30) == AT_LIST) && ((ATermList) s_30 != ATempty)))
    {
      t_30 = ATgetFirst((ATermList) s_30);
      u_30 = (ATerm) ATgetNext((ATermList) s_30);
      t = not_null(u_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_31 = NULL,g_31 = NULL,h_31 = NULL;
  a_31 = t;
  z_30 :
  if(((ATgetType(a_31) == AT_LIST) && ((ATermList) a_31 != ATempty)))
    {
      g_31 = ATgetFirst((ATermList) a_31);
      h_31 = (ATerm) ATgetNext((ATermList) a_31);
      t = not_null(g_31);
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
    ATerm p_14;
    p_14 = t;
    {
      ATerm q_31 = NULL;
      t = Hd_0(t);
      {
        q_31 = t;
        l_31 :
        if(!(match_int(q_31, 34)))
          {
            _fail(t);
          }
      }
    }
    t = p_14;
    {
      t = Tl_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
          r_31 = t;
          n_31 :
          if(((ATgetType(r_31) == AT_LIST) && ((ATermList) r_31 != ATempty)))
            {
              s_31 = ATgetFirst((ATermList) r_31);
              t_31 = (ATerm) ATgetNext((ATermList) r_31);
              o_31 :
              if(match_int(s_31, 34))
                {
                  p_31 :
                  if(((ATermList) t_31 == ATempty))
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
        t = at_last_1(t, m_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm S_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym_S_1))
    {
      b_32 = ATgetArgument(a_32, 0);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_32 = NULL;
            t = not_null(b_32);
            {
              t = i_0(t);
              {
                d_32 = t;
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(d_32));
              }
            }
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm g_32 = NULL;
              t = not_null(b_32);
              {
                t = i_0(t);
                {
                  g_32 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(g_32));
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
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_33 = NULL,h_33 = NULL,m_33 = NULL;
      g_33 = t;
      w_32 :
      if(match_cons(g_33, sym_Arg_1))
        {
          h_33 = ATgetArgument(g_33, 0);
          {
            ATerm n_33 = NULL;
            if(((e_33 != NULL) && (e_33 != h_33)))
              _fail(h_33);
            else
              e_33 = h_33;
            {
              ATerm o_33 = NULL;
              t = not_null(e_33);
              {
                t = string_to_int_0(t);
                {
                  o_33 = t;
                  if(((n_33 != NULL) && (n_33 != o_33)))
                    _fail(o_33);
                  else
                    n_33 = o_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(n_33));
            }
          }
        }
      else
        {
          if(match_cons(g_33, sym_Arg2_2))
            {
              h_33 = ATgetArgument(g_33, 0);
              m_33 = ATgetArgument(g_33, 1);
              {
                ATerm p_33 = NULL,r_33 = NULL;
                if(((e_33 != NULL) && (e_33 != h_33)))
                  _fail(h_33);
                else
                  e_33 = h_33;
                {
                  if(((d_33 != NULL) && (d_33 != m_33)))
                    _fail(m_33);
                  else
                    d_33 = m_33;
                  {
                    ATerm y_14;
                    y_14 = t;
                    {
                      ATerm q_33 = NULL;
                      t = not_null(e_33);
                      {
                        t = string_to_int_0(t);
                        {
                          q_33 = t;
                          if(((p_33 != NULL) && (p_33 != q_33)))
                            _fail(q_33);
                          else
                            p_33 = q_33;
                        }
                      }
                    }
                    t = y_14;
                    {
                      ATerm s_33 = NULL;
                      t = not_null(d_33);
                      {
                        t = string_to_int_0(t);
                        {
                          s_33 = t;
                          if(((r_33 != NULL) && (r_33 != s_33)))
                            _fail(s_33);
                          else
                            r_33 = s_33;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(p_33), not_null(r_33));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(g_33, sym_SOpt_2))
                {
                  h_33 = ATgetArgument(g_33, 0);
                  m_33 = ATgetArgument(g_33, 1);
                  {
                    if(((f_33 != NULL) && (f_33 != h_33)))
                      _fail(h_33);
                    else
                      f_33 = h_33;
                    {
                      if(((e_33 != NULL) && (e_33 != m_33)))
                        _fail(m_33);
                      else
                        e_33 = m_33;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(f_33), not_null(e_33));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm z_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, u_1);
            LocalPopChoice(d_15);
          }
        else
          {
            t = z_14;
            {
              ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
              t_33 = t;
              z_32 :
              if(match_cons(t_33, sym_selector_2))
                {
                  u_33 = ATgetArgument(t_33, 0);
                  v_33 = ATgetArgument(t_33, 1);
                  {
                    ATerm y_33 = NULL;
                    if(((e_33 != NULL) && (e_33 != u_33)))
                      _fail(u_33);
                    else
                      e_33 = u_33;
                    {
                      if(((f_33 != NULL) && (f_33 != v_33)))
                        _fail(v_33);
                      else
                        f_33 = v_33;
                      {
                        ATerm z_33 = NULL;
                        t = not_null(e_33);
                        {
                          t = string_to_int_0(t);
                          {
                            z_33 = t;
                            if(((y_33 != NULL) && (y_33 != z_33)))
                              _fail(z_33);
                            else
                              y_33 = z_33;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(y_33), not_null(f_33));
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
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    t = h_68(t);
    t = _all(t, c_35);
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, v_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_PP_Table_1))
    {
      g_35 = ATgetArgument(f_35, 0);
      {
        t = not_null(g_35);
        {
          t = reverse_0(t);
          {
            ATerm w_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, w_1);
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
  ATerm e_15;
  e_15 = t;
  {
    ATerm o_35 = NULL;
    ATerm p_35 = NULL;
    p_35 = t;
    if(((o_35 != NULL) && (o_35 != p_35)))
      _fail(p_35);
    else
      o_35 = p_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_15, not_null(o_35));
      t = printnl_0(t);
    }
  }
  t = e_15;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_15;
  i_15 = t;
  {
    t = error_0(t);
    {
      t = term_w_9;
      t = exit_0(t);
    }
  }
  t = i_15;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        t = term_s_15;
        return(t);
      }
      t = has_option_1(t, z_1);
      {
        t = (ATerm) ATinsert(ATempty, term_t_15);
        t = fatal_error_0(t);
      }
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        t = (ATerm) ATinsert(ATempty, term_u_15);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  m_39 :
  if(match_cons(o_39, sym__2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      n_39 :
      if(match_string(p_39, "in-type"))
        {
          ATerm s_39 = NULL,t_39 = NULL;
          ATerm x_15;
          x_15 = t;
          {
            ATerm u_39 = NULL;
            ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
            t = not_null(q_39);
            {
              u_39 = t;
              {
                t = SSL_explode_term(not_null(u_39));
                {
                  w_39 = t;
                  h_39 :
                  if(match_cons(w_39, sym__2))
                    {
                      x_39 = ATgetArgument(w_39, 0);
                      y_39 = ATgetArgument(w_39, 1);
                      k_39 :
                      if(((ATgetType(y_39) == AT_LIST) && ((ATermList) y_39 != ATempty)))
                        {
                          z_39 = ATgetFirst((ATermList) y_39);
                          a_40 = (ATerm) ATgetNext((ATermList) y_39);
                          l_39 :
                          if(((ATermList) a_40 == ATempty))
                            {
                              {
                                if(((t_39 != NULL) && (t_39 != x_39)))
                                  _fail(x_39);
                                else
                                  t_39 = x_39;
                                if(((s_39 != NULL) && (s_39 != z_39)))
                                  _fail(z_39);
                                else
                                  s_39 = z_39;
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
          t = x_15;
          {
            t = not_null(t_39);
            {
              ATerm y_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_73(t);
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = y_15;
                  t = type_failure_0(t);
                }
            }
            t = not_null(s_39);
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
ATerm termid_check_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm g_40 = NULL;
  ATerm i_40 = NULL;
  g_40 = t;
  {
    ATerm j_40 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_16, not_null(g_40));
    {
      t = InId_1(t, n_73);
      {
        j_40 = t;
        if(((i_40 != NULL) && (i_40 != j_40)))
          _fail(j_40);
        else
          i_40 = j_40;
      }
    }
    t = not_null(i_40);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm m_16;
  m_16 = t;
  {
    ATerm o_40 = NULL,q_40 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm p_40 = NULL;
      t = q_71(t);
      {
        p_40 = t;
        if(((o_40 != NULL) && (o_40 != p_40)))
          _fail(p_40);
        else
          o_40 = p_40;
      }
    }
    t = n_16;
    {
      ATerm r_40 = NULL;
      r_40 = t;
      if(((q_40 != NULL) && (q_40 != r_40)))
        _fail(r_40);
      else
        q_40 = r_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_40)), not_null(o_40)));
        t = printnl_0(t);
      }
    }
  }
  t = m_16;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm u_40 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_69(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = _one(t, u_40);
      }
    return(t);
  }
  t = u_40(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym__2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        t = not_null(a_41);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm d_41 = NULL;
            d_41 = t;
            if(((z_40 != NULL) && (z_40 != d_41)))
              _fail(d_41);
            else
              z_40 = d_41;
            return(t);
          }
          t = oncetd_1(t, a_2);
        }
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
  t = term_u_16;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm i_41 = NULL;
  ATerm k_41 = NULL;
  i_41 = t;
  {
    ATerm l_41 = NULL;
    t = get_options_0(t);
    {
      l_41 = t;
      {
        if(((k_41 != NULL) && (k_41 != l_41)))
          _fail(l_41);
        else
          k_41 = l_41;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_41), not_null(k_41));
          t = in_0(t);
        }
      }
    }
    t = term_m_9;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = term_m_9;
    {
      t = w_72(t);
      t = check_option_0(t);
    }
  }
  t = v_16;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm t_50 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm x_16;
      x_16 = t;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = has_option_1(t, g_2);
      }
      t = x_16;
      t = debug_1(t, t_50);
    }
    t = w_16;
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  {
    t = term_y_12;
    {
      t = table_create_0(t);
      {
        t = not_null(q_41);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm q_2 (ATerm t)
            {
              t = term_z_16;
              return(t);
            }
            t = notify_1(t, q_2);
            {
              t = ReadFromFile_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm s_41 = NULL;
                  s_41 = t;
                  p_41 :
                  if(!(match_string(s_41, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, s_2);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, h_2);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(((ATgetType(x_41) == AT_LIST) && ((ATermList) x_41 != ATempty)))
    {
      y_41 = ATgetFirst((ATermList) x_41);
      z_41 = (ATerm) ATgetNext((ATermList) x_41);
      {
        t = x_61(t);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm c_42 = NULL;
            c_42 = t;
            if(((y_41 != NULL) && (y_41 != c_42)))
              _fail(c_42);
            else
              y_41 = c_42;
            return(t);
          }
          t = fetch_1(t, t_2);
        }
        t = not_null(z_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym__2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      {
        t = not_null(i_42);
        {
          ATerm n_42 (ATerm t)
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_42);
                LocalPopChoice(f_17);
              }
            else
              {
                t = e_17;
                {
                  ATerm h_17 = t;
                  int j_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(j_42);
                        return(t);
                      }
                      t = HdMember_1(t, u_2);
                      t = n_42(t);
                      LocalPopChoice(j_17);
                    }
                  else
                    {
                      t = h_17;
                      t = Cons_2(t, _id, n_42);
                    }
                }
              }
            return(t);
          }
          t = n_42(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm))
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_60(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
        s_42 = t;
        r_42 :
        if(((ATgetType(s_42) == AT_LIST) && ((ATermList) s_42 != ATempty)))
          {
            t_42 = ATgetFirst((ATermList) s_42);
            u_42 = (ATerm) ATgetNext((ATermList) s_42);
            {
              ATerm x_42 = NULL,z_42 = NULL;
              ATerm n_17;
              n_17 = t;
              {
                ATerm y_42 = NULL;
                t = not_null(t_42);
                {
                  t = x_60(t);
                  {
                    y_42 = t;
                    if(((x_42 != NULL) && (x_42 != y_42)))
                      _fail(y_42);
                    else
                      x_42 = y_42;
                  }
                }
              }
              t = n_17;
              {
                ATerm a_43 = NULL;
                t = not_null(u_42);
                {
                  t = foldr_3(t, v_60, w_60, x_60);
                  {
                    a_43 = t;
                    if(((z_42 != NULL) && (z_42 != a_43)))
                      _fail(a_43);
                    else
                      z_42 = a_43;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(z_42));
                  t = w_60(t);
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
ATerm crush_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm i_43 = NULL;
  ATerm k_43 = NULL;
  i_43 = t;
  {
    ATerm l_43 = NULL;
    ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
    t = not_null(i_43);
    {
      l_43 = t;
      {
        t = SSL_explode_term(not_null(l_43));
        {
          n_43 = t;
          h_43 :
          if(match_cons(n_43, sym__2))
            {
              o_43 = ATgetArgument(n_43, 0);
              p_43 = ATgetArgument(n_43, 1);
              if(((k_43 != NULL) && (k_43 != p_43)))
                _fail(p_43);
              else
                k_43 = p_43;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_43);
      t = foldr_3(t, i_62, j_62, k_62);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm w_43 (ATerm t)
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL;
        ATerm v_43 = NULL;
        t = w_62(t);
        {
          v_43 = t;
          if(((u_43 != NULL) && (u_43 != v_43)))
            _fail(v_43);
          else
            u_43 = v_43;
        }
        t = (ATerm) ATinsert(ATempty, not_null(u_43));
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm v_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, v_2, union_0, w_43);
        }
      }
    return(t);
  }
  t = w_43(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm y_62 (ATerm))
{
  t = collect_om_1(t, y_62);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        t = not_null(e_44);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm i_44 = NULL,j_44 = NULL;
            i_44 = t;
            a_44 :
            if(match_cons(i_44, sym_PP_Table_1))
              {
                j_44 = ATgetArgument(i_44, 0);
                t = not_null(j_44);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1(t, w_2);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(f_44);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm l_44 = NULL;
                      t = is_list_0(t);
                      {
                        l_44 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(l_44));
                      }
                      return(t);
                    }
                    t = try_1(t, x_2);
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(e_44);
                        return(t);
                      }
                      t = split_2(t, y_2, _id);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm s_44 = NULL;
  ATerm r_17;
  r_17 = t;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm t_44 = NULL,u_44 = NULL;
      t_44 = t;
      r_44 :
      if(match_cons(t_44, sym_Program_1))
        {
          u_44 = ATgetArgument(t_44, 0);
          if(((s_44 != NULL) && (s_44 != u_44)))
            _fail(u_44);
          else
            s_44 = u_44;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, d_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_17), not_null(s_44)), term_s_17));
      {
        t = printnl_0(t);
        {
          t = term_w_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATempty, term_u_17));
  {
    t = printnl_0(t);
    {
      t = term_w_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  ATerm e_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm v_17 = t;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm d_45 = NULL;
            d_45 = t;
            w_44 :
            if(!(match_cons(d_45, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_17;
        }
      return(t);
    }
    t = _2(t, l_3, _id);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          ATerm e_45 = NULL,f_45 = NULL;
          e_45 = t;
          y_44 :
          if(match_cons(e_45, sym_Runtime_1))
            {
              f_45 = ATgetArgument(e_45, 0);
              if(((c_45 != NULL) && (c_45 != f_45)))
                _fail(f_45);
              else
                c_45 = f_45;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_3);
        return(t);
      }
      t = _2(t, r_3, _id);
      {
        ATerm t_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            ATerm g_45 = NULL,h_45 = NULL;
            g_45 = t;
            a_45 :
            if(match_cons(g_45, sym_Program_1))
              {
                h_45 = ATgetArgument(g_45, 0);
                if(((b_45 != NULL) && (b_45 != h_45)))
                  _fail(h_45);
                else
                  b_45 = h_45;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_3);
          return(t);
        }
        t = _2(t, t_3, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_17), not_null(c_45)), term_w_17), not_null(b_45)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, e_3);
  {
    t = term_v_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym__2))
    {
      n_45 = ATgetArgument(m_45, 0);
      o_45 = ATgetArgument(m_45, 1);
      t = SSL_WriteToTextFile(not_null(n_45), not_null(o_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_39 (ATerm), ATerm j_39 (ATerm))
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym__2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      {
        ATerm b_46 = NULL;
        t = not_null(x_45);
        {
          ATerm d_46 = NULL;
          t = i_39(t);
          {
            b_46 = t;
            {
              t = not_null(y_45);
              {
                t = j_39(t);
                {
                  d_46 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_46), not_null(d_46));
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
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      t = SSL_WriteToBinaryFile(not_null(l_46), not_null(m_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_46 = NULL;
  ATerm c_18;
  c_18 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm v_46 = NULL,w_46 = NULL;
            v_46 = t;
            r_46 :
            if(match_cons(v_46, sym_Output_1))
              {
                w_46 = ATgetArgument(v_46, 0);
                if(((u_46 != NULL) && (u_46 != w_46)))
                  _fail(w_46);
                else
                  u_46 = w_46;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_3);
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm x_46 = NULL;
            t = term_f_18;
            {
              x_46 = t;
              if(((u_46 != NULL) && (u_46 != x_46)))
                _fail(x_46);
              else
                u_46 = x_46;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_3, _id);
  }
  t = c_18;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(u_46);
        return(t);
      }
      t = split_2(t, z_3, _id);
      return(t);
    }
    t = _2(t, _id, y_3);
    {
      ATerm g_18 = t;
      int h_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_4 (ATerm t)
          {
            ATerm f_4 (ATerm t)
            {
              ATerm y_46 = NULL;
              y_46 = t;
              t_46 :
              if(!(match_cons(y_46, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_4);
            return(t);
          }
          t = _2(t, e_4, WriteToBinaryFile_0);
          LocalPopChoice(h_18);
        }
      else
        {
          t = g_18;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm e_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  ATerm i_18;
  i_18 = t;
  t = dtime_0(t);
  t = i_18;
  {
    t = a_73(t);
    {
      ATerm j_18;
      j_18 = t;
      {
        ATerm f_47 = NULL;
        t = dtime_0(t);
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
      }
      t = j_18;
      {
        g_47 = t;
        d_47 :
        if(match_cons(g_47, sym__2))
          {
            h_47 = ATgetArgument(g_47, 0);
            i_47 = ATgetArgument(g_47, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_47)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_47))), not_null(i_47));
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
  ATerm o_47 = NULL;
  o_47 = t;
  t = SSL_ReadFromFile(not_null(o_47));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm t_47 = NULL,v_47 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm u_47 = NULL;
    t = h_57(t);
    {
      u_47 = t;
      if(((t_47 != NULL) && (t_47 != u_47)))
        _fail(u_47);
      else
        t_47 = u_47;
    }
  }
  t = k_18;
  {
    ATerm w_47 = NULL;
    t = i_57(t);
    {
      w_47 = t;
      if(((v_47 != NULL) && (v_47 != w_47)))
        _fail(w_47);
      else
        v_47 = w_47;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_47), not_null(v_47));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_48 = NULL;
  ATerm l_18;
  l_18 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 (ATerm t)
        {
          ATerm f_48 = NULL,g_48 = NULL;
          f_48 = t;
          a_48 :
          if(match_cons(f_48, sym_Input_1))
            {
              g_48 = ATgetArgument(f_48, 0);
              if(((c_48 != NULL) && (c_48 != g_48)))
                _fail(g_48);
              else
                c_48 = g_48;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_4);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm h_48 = NULL;
          t = term_o_18;
          {
            h_48 = t;
            if(((c_48 != NULL) && (c_48 != h_48)))
              _fail(h_48);
            else
              c_48 = h_48;
          }
        }
      }
  }
  t = l_18;
  {
    ATerm j_4 (ATerm t)
    {
      t = not_null(c_48);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  k_48 :
  if(!(match_cons(l_48, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_4);
  t = z_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  t = SSL_table_create(not_null(n_48));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  {
    ATerm t_18;
    t_18 = t;
    {
      t = term_s_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_16, term_t_16, not_null(r_48));
          t = table_put_0(t);
        }
      }
    }
    t = t_18;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        ATerm f_49 = NULL;
        f_49 = t;
        u_48 :
        if(!(match_string(f_49, "-S")))
          {
            if(!(match_string(f_49, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_w_18;
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = term_x_18;
        return(t);
      }
      t = Option_3(t, l_4, m_4, q_4);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm y_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm g_49 = NULL;
              g_49 = t;
              v_48 :
              if(!(match_string(g_49, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = term_y_16;
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              t = term_c_19;
              return(t);
            }
            t = Option_3(t, t_4, x_4, y_4);
            LocalPopChoice(b_19);
          }
        else
          {
            t = y_18;
            {
              ATerm d_19 = t;
              int e_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm h_49 = NULL;
                    h_49 = t;
                    w_48 :
                    if(!(match_string(h_49, "-v")))
                      {
                        if(!(match_string(h_49, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    t = term_f_19;
                    return(t);
                  }
                  ATerm b_5 (ATerm t)
                  {
                    t = term_g_19;
                    return(t);
                  }
                  t = Option_3(t, z_4, a_5, b_5);
                  LocalPopChoice(e_19);
                }
              else
                {
                  t = d_19;
                  {
                    ATerm l_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_5 (ATerm t)
                        {
                          ATerm i_49 = NULL;
                          i_49 = t;
                          x_48 :
                          if(!(match_string(i_49, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          ATerm j_49 = NULL;
                          ATerm k_49 = NULL;
                          k_49 = t;
                          if(((j_49 != NULL) && (j_49 != k_49)))
                            _fail(k_49);
                          else
                            j_49 = k_49;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(j_49));
                          return(t);
                        }
                        ATerm m_5 (ATerm t)
                        {
                          t = term_n_19;
                          return(t);
                        }
                        t = ArgOption_3(t, c_5, e_5, m_5);
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = l_19;
                        {
                          ATerm o_19 = t;
                          int p_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_5 (ATerm t)
                              {
                                ATerm l_49 = NULL;
                                l_49 = t;
                                z_48 :
                                if(!(match_string(l_49, "-i")))
                                  {
                                    if(!(match_string(l_49, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_5 (ATerm t)
                              {
                                ATerm m_49 = NULL;
                                ATerm n_49 = NULL;
                                n_49 = t;
                                if(((m_49 != NULL) && (m_49 != n_49)))
                                  _fail(n_49);
                                else
                                  m_49 = n_49;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_49));
                                return(t);
                              }
                              ATerm s_5 (ATerm t)
                              {
                                t = term_q_19;
                                return(t);
                              }
                              t = ArgOption_3(t, n_5, o_5, s_5);
                              LocalPopChoice(p_19);
                            }
                          else
                            {
                              t = o_19;
                              {
                                ATerm r_19 = t;
                                int y_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_5 (ATerm t)
                                    {
                                      ATerm o_49 = NULL;
                                      o_49 = t;
                                      b_49 :
                                      if(!(match_string(o_49, "-o")))
                                        {
                                          if(!(match_string(o_49, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm w_5 (ATerm t)
                                    {
                                      ATerm p_49 = NULL;
                                      ATerm q_49 = NULL;
                                      q_49 = t;
                                      if(((p_49 != NULL) && (p_49 != q_49)))
                                        _fail(q_49);
                                      else
                                        p_49 = q_49;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_49));
                                      return(t);
                                    }
                                    ATerm x_5 (ATerm t)
                                    {
                                      t = term_z_19;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, t_5, w_5, x_5);
                                    LocalPopChoice(y_19);
                                  }
                                else
                                  {
                                    t = r_19;
                                    {
                                      ATerm a_20 = t;
                                      int b_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_5 (ATerm t)
                                          {
                                            ATerm r_49 = NULL;
                                            r_49 = t;
                                            d_49 :
                                            if(!(match_string(r_49, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm a_6 (ATerm t)
                                          {
                                            t = term_c_20;
                                            return(t);
                                          }
                                          ATerm b_6 (ATerm t)
                                          {
                                            t = term_e_20;
                                            return(t);
                                          }
                                          t = Option_3(t, z_5, a_6, b_6);
                                          LocalPopChoice(b_20);
                                        }
                                      else
                                        {
                                          t = a_20;
                                          {
                                            ATerm c_6 (ATerm t)
                                            {
                                              ATerm s_49 = NULL;
                                              s_49 = t;
                                              e_49 :
                                              if(!(match_string(s_49, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_6 (ATerm t)
                                            {
                                              t = term_f_20;
                                              return(t);
                                            }
                                            ATerm e_6 (ATerm t)
                                            {
                                              t = term_g_20;
                                              return(t);
                                            }
                                            t = Option_3(t, c_6, d_6, e_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm x_49 = NULL;
  x_49 = t;
  t = SSL_table_destroy(not_null(x_49));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  t = SSL_exit(not_null(b_50));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = SSL_implode_string(not_null(f_50));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm k_50 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_50);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          t = Nil_0(t);
          t = n_66(t);
        }
      }
    return(t);
  }
  t = k_50(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm n_50 = NULL,r_50 = NULL,s_50 = NULL;
        n_50 = t;
        m_50 :
        if(((ATgetType(n_50) == AT_LIST) && ((ATermList) n_50 != ATempty)))
          {
            r_50 = ATgetFirst((ATermList) n_50);
            s_50 = (ATerm) ATgetNext((ATermList) n_50);
            {
              t = not_null(r_50);
              {
                ATerm f_6 (ATerm t)
                {
                  t = not_null(s_50);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_6);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  t = SSL_explode_string(not_null(z_50));
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
ATerm long_description_1 (ATerm t, ATerm q_55 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm c_51 (ATerm t)
  {
    ATerm s_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = s_20;
        t = Cons_2(t, z_65, c_51);
      }
    return(t);
  }
  t = c_51(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  l_51 = t;
  i_51 :
  if(((ATgetType(l_51) == AT_LIST) && ((ATermList) l_51 != ATempty)))
    {
      j_51 = ATgetFirst((ATermList) l_51);
      k_51 = (ATerm) ATgetNext((ATermList) l_51);
      {
        ATerm o_51 = NULL;
        t = not_null(k_51);
        {
          ATerm y_20;
          y_20 = t;
          {
            ATerm p_51 = NULL,r_51 = NULL,t_51 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              ATerm q_51 = NULL;
              t = h_0(t);
              {
                q_51 = t;
                if(((p_51 != NULL) && (p_51 != q_51)))
                  _fail(q_51);
                else
                  p_51 = q_51;
              }
            }
            t = z_20;
            {
              ATerm s_51 = NULL;
              t = not_null(j_51);
              {
                t = g_0(t);
                {
                  s_51 = t;
                  if(((r_51 != NULL) && (r_51 != s_51)))
                    _fail(s_51);
                  else
                    r_51 = s_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_51)), not_null(r_51));
                {
                  t_51 = t;
                  if(((o_51 != NULL) && (o_51 != t_51)))
                    _fail(t_51);
                  else
                    o_51 = t_51;
                }
              }
            }
          }
          t = y_20;
          {
            ATerm t_6 (ATerm t)
            {
              t = not_null(o_51);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) l_51 == ATempty))
        {
          {
            t = term_m_9;
            t = h_0(t);
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
  ATerm u_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_55 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Program_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      {
        ATerm f_52 = NULL;
        t = not_null(d_52);
        {
          t = d_48(t);
          {
            f_52 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_52));
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
  ATerm n_52 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm o_52 = NULL;
      o_52 = t;
      if(((n_52 != NULL) && (n_52 != o_52)))
        _fail(o_52);
      else
        n_52 = o_52;
      return(t);
    }
    t = Program_1(t, x_6);
    return(t);
  }
  t = option_defined_1(t, v_6);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm p_52 = NULL;
      ATerm q_52 = NULL;
      t = term_m_9;
      {
        ATerm a_7 (ATerm t)
        {
          t = not_null(n_52);
          return(t);
        }
        t = short_description_1(t, a_7);
        {
          t = concat_strings_0(t);
          {
            q_52 = t;
            if(((p_52 != NULL) && (p_52 != q_52)))
              _fail(q_52);
            else
              p_52 = q_52;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATempty, not_null(p_52)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, z_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATempty, term_a_21));
      {
        t = printnl_0(t);
        {
          t = term_d_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_7 (ATerm t)
                {
                  ATerm r_52 = NULL;
                  r_52 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_52)), term_e_21));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_7);
                {
                  ATerm g_7 (ATerm t)
                  {
                    ATerm t_52 = NULL;
                    ATerm u_52 = NULL;
                    t = term_m_9;
                    {
                      ATerm h_7 (ATerm t)
                      {
                        t = not_null(n_52);
                        return(t);
                      }
                      t = long_description_1(t, h_7);
                      {
                        t = concat_strings_0(t);
                        {
                          u_52 = t;
                          if(((t_52 != NULL) && (t_52 != u_52)))
                            _fail(u_52);
                          else
                            t_52 = u_52;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_52)), term_f_21));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_7);
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
ATerm printnl_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym__2))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      {
        ATerm h_21;
        h_21 = t;
        t = SSL_printnl(not_null(c_53), not_null(d_53));
        t = h_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_48 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_Undefined_1))
    {
      l_53 = ATgetArgument(k_53, 0);
      {
        ATerm n_53 = NULL;
        t = not_null(l_53);
        {
          t = e_48(t);
          {
            n_53 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_53));
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
ATerm fetch_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm r_53 (ATerm t)
  {
    ATerm i_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_66, _id);
        LocalPopChoice(m_21);
      }
    else
      {
        t = i_21;
        t = Cons_2(t, _id, r_53);
      }
    return(t);
  }
  t = r_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_56 (ATerm))
{
  t = fetch_1(t, o_56);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_53 = NULL;
  t_53 = t;
  s_53 :
  if(!(match_cons(t_53, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_67(t);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym__2))
    {
      x_53 = ATgetArgument(w_53, 0);
      y_53 = ATgetArgument(w_53, 1);
      t = SSL_table_get(not_null(x_53), not_null(y_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__3))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      i_54 = ATgetArgument(f_54, 2);
      {
        ATerm p_21;
        p_21 = t;
        {
          ATerm m_54 = NULL;
          ATerm n_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), not_null(h_54));
          {
            ATerm q_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_21);
              }
            else
              {
                t = q_21;
                t = (ATerm) ATempty;
              }
            {
              n_54 = t;
              if(((m_54 != NULL) && (m_54 != n_54)))
                _fail(n_54);
              else
                m_54 = n_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_54), not_null(h_54), (ATerm) ATinsert(CheckATermList(not_null(m_54)), not_null(i_54)));
            t = table_put_0(t);
          }
        }
        t = p_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm r_54 = NULL;
  ATerm s_54 = NULL;
  t = term_m_9;
  {
    t = u_55(t);
    {
      s_54 = t;
      if(((r_54 != NULL) && (r_54 != s_54)))
        _fail(s_54);
      else
        r_54 = s_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, not_null(r_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_string(y_54, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(y_54) == AT_LIST) && ((ATermList) y_54 != ATempty)))
        {
          z_54 = ATgetFirst((ATermList) y_54);
          a_55 = (ATerm) ATgetNext((ATermList) y_54);
          {
            ATerm d_55 = NULL;
            ATerm z_21;
            z_21 = t;
            {
              t = not_null(z_54);
              t = b_0(t);
            }
            t = z_21;
            {
              ATerm e_55 = NULL;
              t = term_m_9;
              {
                t = c_0(t);
                {
                  e_55 = t;
                  if(((d_55 != NULL) && (d_55 != e_55)))
                    _fail(e_55);
                  else
                    d_55 = e_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_55)), not_null(d_55));
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
  ATerm i_7 (ATerm t)
  {
    ATerm j_55 = NULL;
    j_55 = t;
    i_55 :
    if(!(match_string(j_55, "--help")))
      {
        if(!(match_string(j_55, "-h")))
          {
            if(!(match_string(j_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_a_22;
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = term_d_22;
    return(t);
  }
  t = Option_3(t, i_7, l_7, n_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_55 = NULL,v_55 = NULL,w_55 = NULL;
  m_55 = t;
  l_55 :
  if(((ATgetType(m_55) == AT_LIST) && ((ATermList) m_55 != ATempty)))
    {
      v_55 = ATgetFirst((ATermList) m_55);
      w_55 = (ATerm) ATgetNext((ATermList) m_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm))
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  f_56 :
  if(((ATgetType(g_56) == AT_LIST) && ((ATermList) g_56 != ATempty)))
    {
      h_56 = ATgetFirst((ATermList) g_56);
      i_56 = (ATerm) ATgetNext((ATermList) g_56);
      {
        ATerm l_56 = NULL;
        t = not_null(h_56);
        {
          ATerm n_56 = NULL;
          t = i_50(t);
          {
            l_56 = t;
            {
              t = not_null(i_56);
              {
                t = j_50(t);
                {
                  n_56 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_56)), not_null(l_56));
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
  ATerm u_56 = NULL;
  u_56 = t;
  t_56 :
  if(((ATermList) u_56 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm e_22;
  e_22 = t;
  {
    ATerm o_7 (ATerm t)
    {
      t = term_f_22;
      t = s_55(t);
      return(t);
    }
    t = try_1(t, o_7);
  }
  t = e_22;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm w_56 = NULL;
      w_56 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_56));
      return(t);
    }
    ATerm q_7 (ATerm t)
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_22);
            }
          else
            {
              t = k_22;
              {
                t = s_55(t);
                t = Cons_2(t, _id, q_7);
              }
            }
          LocalPopChoice(j_22);
        }
      else
        {
          t = i_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_7, q_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  ATerm p_22;
  p_22 = t;
  {
    ATerm f_57 = NULL,g_57 = NULL,j_57 = NULL,k_57 = NULL;
    f_57 = t;
    b_57 :
    if(match_cons(f_57, sym__3))
      {
        g_57 = ATgetArgument(f_57, 0);
        j_57 = ATgetArgument(f_57, 1);
        k_57 = ATgetArgument(f_57, 2);
        {
          if(((c_57 != NULL) && (c_57 != g_57)))
            _fail(g_57);
          else
            c_57 = g_57;
          {
            if(((d_57 != NULL) && (d_57 != j_57)))
              _fail(j_57);
            else
              d_57 = j_57;
            {
              if(((e_57 != NULL) && (e_57 != k_57)))
                _fail(k_57);
              else
                e_57 = k_57;
              t = SSL_table_put(not_null(c_57), not_null(d_57), not_null(e_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm n_57 = NULL;
  ATerm r_22;
  r_22 = t;
  {
    t = term_t_22;
    t = table_put_0(t);
  }
  t = r_22;
  {
    ATerm r_7 (ATerm t)
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_55(t);
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_7);
    {
      ATerm s_7 (ATerm t)
      {
        ATerm w_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_v_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_22);
          }
        else
          {
            t = w_22;
            {
              ATerm x_7 (ATerm t)
              {
                ATerm y_7 (ATerm t)
                {
                  ATerm o_57 = NULL;
                  o_57 = t;
                  if(((n_57 != NULL) && (n_57 != o_57)))
                    _fail(o_57);
                  else
                    n_57 = o_57;
                  return(t);
                }
                t = Undefined_1(t, y_7);
                return(t);
              }
              t = option_defined_1(t, x_7);
              {
                ATerm d_23;
                d_23 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_57)), term_e_23));
                  t = printnl_0(t);
                }
                t = d_23;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_7);
      {
        ATerm f_23;
        f_23 = t;
        {
          t = term_b_21;
          t = table_destroy_0(t);
        }
        t = f_23;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm q_72 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_72(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_8);
  {
    t = store_options_0(t);
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, q_72);
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, o_72);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  t = iowrap_3(t, j_72, k_72, default_usage_0);
  return(t);
}
ATerm Ast_2_abox_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 (ATerm t)
        {
          ATerm t_57 = NULL;
          t_57 = t;
          q_57 :
          if(!(match_string(t_57, "-v")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_8 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = Option_2(t, i_8, j_8);
        LocalPopChoice(p_23);
      }
    else
      {
        t = n_23;
        {
          ATerm k_8 (ATerm t)
          {
            ATerm u_57 = NULL;
            u_57 = t;
            r_57 :
            if(!(match_string(u_57, "-p")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm l_8 (ATerm t)
          {
            ATerm v_57 = NULL;
            v_57 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(v_57));
            return(t);
          }
          ATerm m_8 (ATerm t)
          {
            t = term_q_23;
            return(t);
          }
          t = ArgOption_3(t, k_8, l_8, m_8);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, h_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast_2_abox_0(t);
  return(t);
}

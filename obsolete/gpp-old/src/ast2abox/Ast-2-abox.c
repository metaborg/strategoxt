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
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
Symbol sym_Infinite_0;
Symbol sym_CUT_0;
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
Symbol sym_Verbose_0;
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
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_b_26;
ATerm term_l_25;
ATerm term_y_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_x_19;
ATerm term_a_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_u_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_a_8;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_i_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_n_8);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_8);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_a_8);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_a_8);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_a_8);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__3, term_n_23, term_o_23, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Option_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm m_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm i_87 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm c_72 (ATerm));
ATerm length_0 (ATerm);
ATerm collect_p__1 (ATerm, ATerm p_65 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm u_92 (ATerm));
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_76 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm w_83 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm trm2abox_appl_0 (ATerm);
ATerm trm2abox_list_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm trm2abox_int_0 (ATerm);
ATerm trm2abox_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm u_85 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm j_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_87 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm j_92 (ATerm));
ATerm termid_check_1 (ATerm, ATerm q_92 (ATerm));
ATerm oncetd_1 (ATerm, ATerm x_88 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm y_91 (ATerm));
ATerm notify_1 (ATerm, ATerm u_65 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm r_80 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm crush_3 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm));
ATerm collect_om_1 (ATerm, ATerm t_81 (ATerm));
ATerm collect_1 (ATerm, ATerm v_81 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_90 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_72 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm));
ATerm crush_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_72 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_92 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_92 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_85 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_73 (ATerm));
ATerm map_1 (ATerm, ATerm x_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_73 (ATerm));
ATerm Program_1 (ATerm, ATerm s_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_73 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_73 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_73 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_91 (ATerm), ATerm i_91 (ATerm));
ATerm Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm j_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,a_3 = NULL;
  j_2 = t;
  h_2 :
  if(match_string(j_2, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(j_2) == AT_LIST) && ((ATermList) j_2 != ATempty)))
        {
          u_2 = ATgetFirst((ATermList) j_2);
          v_2 = (ATerm) ATgetNext((ATermList) j_2);
          i_2 :
          if(((ATgetType(v_2) == AT_LIST) && ((ATermList) v_2 != ATempty)))
            {
              w_2 = ATgetFirst((ATermList) v_2);
              a_3 = (ATerm) ATgetNext((ATermList) v_2);
              {
                ATerm e_3 = NULL;
                ATerm w_3;
                w_3 = t;
                {
                  t = not_null(u_2);
                  t = n_0(t);
                }
                t = w_3;
                {
                  ATerm f_3 = NULL;
                  t = not_null(w_2);
                  {
                    t = o_0(t);
                    {
                      f_3 = t;
                      if(((e_3 != NULL) && (e_3 != f_3)))
                        _fail(f_3);
                      else
                        e_3 = f_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_3)), not_null(e_3));
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
ATerm Option_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_g_7;
    return(t);
  }
  t = Option_3(t, t_73, u_73, a_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(((ATermList) k_3 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_3) == AT_LIST) && ((ATermList) k_3 != ATempty)))
        {
          l_3 = ATgetFirst((ATermList) k_3);
          m_3 = (ATerm) ATgetNext((ATermList) k_3);
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
  ATerm r_3 = NULL,s_3 = NULL;
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
            ATerm y_3 (ATerm t)
            {
              if(((r_3 != NULL) && (r_3 != u_3)))
                _fail(u_3);
              else
                r_3 = u_3;
              {
                if(((s_3 != NULL) && (s_3 != v_3)))
                  _fail(v_3);
                else
                  s_3 = v_3;
                {
                  t = not_null(r_3);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), not_null(s_3));
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
            t_3 = t;
            p_3 :
            if(((ATgetType(t_3) == AT_LIST) && ((ATermList) t_3 != ATempty)))
              {
                u_3 = ATgetFirst((ATermList) t_3);
                v_3 = (ATerm) ATgetNext((ATermList) t_3);
                q_3 :
                if(((ATermList) u_3 == ATempty))
                  {
                    {
                      ATerm l_7 = t;
                      int z_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((s_3 != NULL) && (s_3 != v_3)))
                            _fail(v_3);
                          else
                            s_3 = v_3;
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(s_3);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, b_0);
                          }
                          LocalPopChoice(z_7);
                        }
                      else
                        {
                          t = l_7;
                          t = y_3(t);
                        }
                    }
                  }
                else
                  {
                    t = y_3(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  i_4 = t;
  g_4 :
  if(match_cons(i_4, sym_Arg2_2))
    {
      j_4 = ATgetArgument(i_4, 0);
      h_4 = ATgetArgument(i_4, 1);
      {
        ATerm m_4 = NULL,n_4 = NULL;
        ATerm o_4 = NULL,q_4 = NULL;
        ATerm p_4 = NULL;
        t = term_a_8;
        {
          t = m_0(t);
          {
            p_4 = t;
            if(((o_4 != NULL) && (o_4 != p_4)))
              _fail(p_4);
            else
              o_4 = p_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), not_null(o_4));
          {
            ATerm r_4 = NULL;
            t = index_0(t);
            {
              q_4 = t;
              {
                if(((m_4 != NULL) && (m_4 != q_4)))
                  _fail(q_4);
                else
                  m_4 = q_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(m_4));
                  {
                    t = index_0(t);
                    {
                      r_4 = t;
                      if(((n_4 != NULL) && (n_4 != r_4)))
                        _fail(r_4);
                      else
                        n_4 = r_4;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(n_4);
      }
    }
  else
    {
      if(match_cons(i_4, sym_Arg_1))
        {
          j_4 = ATgetArgument(i_4, 0);
          {
            ATerm t_4 = NULL;
            ATerm u_4 = NULL,w_4 = NULL;
            ATerm v_4 = NULL;
            t = term_a_8;
            {
              t = m_0(t);
              {
                v_4 = t;
                if(((u_4 != NULL) && (u_4 != v_4)))
                  _fail(v_4);
                else
                  u_4 = v_4;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), not_null(u_4));
              {
                t = index_0(t);
                {
                  w_4 = t;
                  if(((t_4 != NULL) && (t_4 != w_4)))
                    _fail(w_4);
                  else
                    t_4 = w_4;
                }
              }
            }
            t = not_null(t_4);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = bottomup_1(t, i_87);
    return(t);
  }
  t = _all(t, e_0);
  t = i_87(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym__2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        ATerm m_5 = NULL;
        ATerm n_5 = NULL;
        t = not_null(i_5);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm b_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_0 (ATerm t)
                  {
                    t = not_null(j_5);
                    return(t);
                  }
                  t = Instantiate_1(t, r_0);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = b_8;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, q_0);
            return(t);
          }
          t = bottomup_1(t, f_0);
          {
            n_5 = t;
            if(((m_5 != NULL) && (m_5 != n_5)))
              _fail(n_5);
            else
              m_5 = n_5;
          }
        }
        t = not_null(m_5);
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
  ATerm v_5 = NULL;
  ATerm x_5 = NULL;
  v_5 = t;
  {
    ATerm y_5 = NULL;
    ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
    t = not_null(v_5);
    {
      y_5 = t;
      {
        t = SSL_explode_term(not_null(y_5));
        {
          a_6 = t;
          t_5 :
          if(match_cons(a_6, sym__2))
            {
              b_6 = ATgetArgument(a_6, 0);
              c_6 = ATgetArgument(a_6, 1);
              u_5 :
              if(match_string(b_6, ""))
                {
                  if(((x_5 != NULL) && (x_5 != c_6)))
                    _fail(c_6);
                  else
                    x_5 = c_6;
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
    t = not_null(x_5);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  n_6 = t;
  l_6 :
  if(match_cons(n_6, sym__4))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      q_6 = ATgetArgument(n_6, 2);
      r_6 = ATgetArgument(n_6, 3);
      m_6 :
      if(match_string(o_6, "seq"))
        {
          ATerm e_7 = NULL;
          t = not_null(r_6);
          {
            t = tuple2list_0(t);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
                v_6 = t;
                j_6 :
                if(match_cons(v_6, sym__2))
                  {
                    w_6 = ATgetArgument(v_6, 0);
                    x_6 = ATgetArgument(v_6, 1);
                    {
                      ATerm a_7 = NULL;
                      ATerm b_7 = NULL;
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_6), not_null(p_6), not_null(x_6));
                      {
                        t = arg2abox_0(t);
                        {
                          b_7 = t;
                          if(((a_7 != NULL) && (a_7 != b_7)))
                            _fail(b_7);
                          else
                            a_7 = b_7;
                        }
                      }
                      t = not_null(a_7);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, s_0);
              {
                e_7 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), not_null(e_7));
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm y_7 (ATerm t)
  {
    ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm l_8 = t;
          int m_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(m_8);
            }
          else
            {
              t = l_8;
              {
                ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
                r_7 = t;
                m_7 :
                if(((ATgetType(r_7) == AT_LIST) && ((ATermList) r_7 != ATempty)))
                  {
                    s_7 = ATgetFirst((ATermList) r_7);
                    t_7 = (ATerm) ATgetNext((ATermList) r_7);
                    n_7 :
                    if(((ATgetType(t_7) == AT_LIST) && ((ATermList) t_7 != ATempty)))
                      {
                        u_7 = ATgetFirst((ATermList) t_7);
                        v_7 = (ATerm) ATgetNext((ATermList) t_7);
                        {
                          if(((o_7 != NULL) && (o_7 != s_7)))
                            _fail(s_7);
                          else
                            o_7 = s_7;
                          {
                            if(((p_7 != NULL) && (p_7 != u_7)))
                              _fail(u_7);
                            else
                              p_7 = u_7;
                            {
                              if(((q_7 != NULL) && (q_7 != v_7)))
                                _fail(v_7);
                              else
                                q_7 = v_7;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  ATerm w_7 = NULL;
                                  ATerm x_7 = NULL;
                                  t = term_a_8;
                                  {
                                    t = c_72(t);
                                    {
                                      x_7 = t;
                                      if(((w_7 != NULL) && (w_7 != x_7)))
                                        _fail(x_7);
                                      else
                                        w_7 = x_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), not_null(o_7)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm u_0 (ATerm t)
                                {
                                  t = not_null(q_7);
                                  t = y_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, t_0, u_0);
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
  t = y_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_o_8;
    return(t);
  }
  t = foldr_3(t, v_0, add_0, w_0);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm r_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = p_65(t);
        {
          c_8 = t;
          t = (ATerm) ATinsert(ATempty, not_null(c_8));
        }
        LocalPopChoice(t_8);
      }
    else
      {
        t = r_8;
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, x_0, conc_0, e_8);
        }
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym__2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      t = SSL_mod(not_null(j_8), not_null(k_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm s_8 = NULL;
  q_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), term_u_8);
    {
      t = mod_0(t);
      {
        s_8 = t;
        p_8 :
        if(!(match_int(s_8, 0)))
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm u_92 (ATerm))
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        ATerm f_9 = NULL;
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 = NULL,i_9 = NULL;
            t = not_null(b_9);
            {
              t = even_0(t);
              {
                ATerm h_9 = NULL;
                t = term_a_8;
                {
                  t = u_92(t);
                  {
                    h_9 = t;
                    if(((g_9 != NULL) && (g_9 != h_9)))
                      _fail(h_9);
                    else
                      g_9 = h_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_8, not_null(g_9), not_null(c_9));
                  {
                    t = arg2abox_0(t);
                    {
                      i_9 = t;
                      if(((f_9 != NULL) && (f_9 != i_9)))
                        _fail(i_9);
                      else
                        f_9 = i_9;
                    }
                  }
                }
              }
            }
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm j_9 = NULL,l_9 = NULL;
              ATerm k_9 = NULL;
              t = term_a_8;
              {
                t = u_92(t);
                {
                  k_9 = t;
                  if(((j_9 != NULL) && (j_9 != k_9)))
                    _fail(k_9);
                  else
                    j_9 = k_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(j_9), not_null(c_9));
                {
                  t = arg2abox_0(t);
                  {
                    l_9 = t;
                    if(((f_9 != NULL) && (f_9 != l_9)))
                      _fail(l_9);
                    else
                      f_9 = l_9;
                  }
                }
              }
            }
          }
        t = not_null(f_9);
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  h_10 = t;
  t_9 :
  if(match_cons(h_10, sym__4))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      k_10 = ATgetArgument(h_10, 2);
      l_10 = ATgetArgument(h_10, 3);
      u_9 :
      if(match_string(i_10, "iter-sep"))
        {
          if(((e_10 != NULL) && (e_10 != j_10)))
            _fail(j_10);
          else
            e_10 = j_10;
          {
            if(((f_10 != NULL) && (f_10 != k_10)))
              _fail(k_10);
            else
              f_10 = k_10;
            if(((g_10 != NULL) && (g_10 != l_10)))
              _fail(l_10);
            else
              g_10 = l_10;
          }
        }
      else
        {
          if(match_string(i_10, "iter-star-sep"))
            {
              if(((e_10 != NULL) && (e_10 != j_10)))
                _fail(j_10);
              else
                e_10 = j_10;
              {
                if(((f_10 != NULL) && (f_10 != k_10)))
                  _fail(k_10);
                else
                  f_10 = k_10;
                if(((g_10 != NULL) && (g_10 != l_10)))
                  _fail(l_10);
                else
                  g_10 = l_10;
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
    t = not_null(g_10);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = not_null(e_10);
          return(t);
        }
        t = BuildSepList_1(t, z_0);
        return(t);
      }
      t = nzip_1(t, y_0);
      {
        m_10 = t;
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL;
              t = not_null(f_10);
              {
                ATerm a_1 (ATerm t)
                {
                  t = S_1(t, _id);
                  return(t);
                }
                t = collect_p__1(t, a_1);
                {
                  t = length_0(t);
                  {
                    o_10 = t;
                    d_10 :
                    if(match_int(o_10, 1))
                      {
                        t = not_null(m_10);
                        {
                          ATerm e_11 (ATerm t)
                          {
                            ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
                            ATerm h_11 (ATerm t)
                            {
                              ATerm y_10 = NULL;
                              ATerm z_10 = NULL;
                              t = not_null(r_10);
                              {
                                t = e_11(t);
                                {
                                  z_10 = t;
                                  if(((y_10 != NULL) && (y_10 != z_10)))
                                    _fail(z_10);
                                  else
                                    y_10 = z_10;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_10)), not_null(q_10)), not_null(q_10));
                              return(t);
                            }
                            p_10 = t;
                            b_10 :
                            if(((ATermList) p_10 == ATempty))
                              {
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                if(((ATgetType(p_10) == AT_LIST) && ((ATermList) p_10 != ATempty)))
                                  {
                                    q_10 = ATgetFirst((ATermList) p_10);
                                    r_10 = (ATerm) ATgetNext((ATermList) p_10);
                                    c_10 :
                                    if(((ATermList) r_10 == ATempty))
                                      {
                                        {
                                          ATerm d_9 = t;
                                          int e_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(q_10));
                                              LocalPopChoice(e_9);
                                            }
                                          else
                                            {
                                              t = d_9;
                                              t = h_11(t);
                                            }
                                        }
                                      }
                                    else
                                      {
                                        t = h_11(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          t = e_11(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = not_null(m_10);
            }
          {
            ATerm b_1 (ATerm t)
            {
              t = not_null(f_10);
              return(t);
            }
            t = instantiate_sep_list_1(t, b_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox5_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,d_12 = NULL;
  t_11 = t;
  l_11 :
  if(match_cons(t_11, sym__4))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      w_11 = ATgetArgument(t_11, 2);
      x_11 = ATgetArgument(t_11, 3);
      m_11 :
      if(match_string(u_11, "iter"))
        {
          if(((q_11 != NULL) && (q_11 != v_11)))
            _fail(v_11);
          else
            q_11 = v_11;
          {
            if(((r_11 != NULL) && (r_11 != w_11)))
              _fail(w_11);
            else
              r_11 = w_11;
            if(((s_11 != NULL) && (s_11 != x_11)))
              _fail(x_11);
            else
              s_11 = x_11;
          }
        }
      else
        {
          if(match_string(u_11, "iter-star"))
            {
              if(((q_11 != NULL) && (q_11 != v_11)))
                _fail(v_11);
              else
                q_11 = v_11;
              {
                if(((r_11 != NULL) && (r_11 != w_11)))
                  _fail(w_11);
                else
                  r_11 = w_11;
                if(((s_11 != NULL) && (s_11 != x_11)))
                  _fail(x_11);
                else
                  s_11 = x_11;
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
    t = not_null(s_11);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm y_11 = NULL;
        ATerm a_12 = NULL;
        y_11 = t;
        {
          ATerm b_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(q_11), not_null(y_11));
          {
            t = arg2abox_0(t);
            {
              b_12 = t;
              if(((a_12 != NULL) && (a_12 != b_12)))
                _fail(b_12);
              else
                a_12 = b_12;
            }
          }
          t = not_null(a_12);
        }
        return(t);
      }
      t = map_1(t, c_1);
      {
        d_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), (ATerm) ATinsert(ATempty, not_null(d_12)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  n_12 = t;
  l_12 :
  if(match_cons(n_12, sym__4))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      q_12 = ATgetArgument(n_12, 2);
      r_12 = ATgetArgument(n_12, 3);
      m_12 :
      if(match_cons(r_12, sym_None_0))
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  a_13 = t;
  y_12 :
  if(match_cons(a_13, sym__4))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      d_13 = ATgetArgument(a_13, 2);
      e_13 = ATgetArgument(a_13, 3);
      z_12 :
      if(match_cons(e_13, sym_Some_1))
        {
          f_13 = ATgetArgument(e_13, 0);
          {
            ATerm k_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(c_13), not_null(f_13));
            {
              t = arg2abox_0(t);
              {
                k_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), (ATerm) ATinsert(ATempty, not_null(k_13)));
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
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  v_13 = t;
  r_13 :
  if(match_cons(v_13, sym__4))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      y_13 = ATgetArgument(v_13, 2);
      z_13 = ATgetArgument(v_13, 3);
      s_13 :
      if(match_cons(z_13, sym_alt_2))
        {
          a_14 = ATgetArgument(z_13, 0);
          b_14 = ATgetArgument(z_13, 1);
          t_13 :
          if(((ATgetType(b_14) == AT_LIST) && ((ATermList) b_14 != ATempty)))
            {
              c_14 = ATgetFirst((ATermList) b_14);
              d_14 = (ATerm) ATgetNext((ATermList) b_14);
              u_13 :
              if(((ATermList) d_14 == ATempty))
                {
                  {
                    ATerm j_14 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(a_14), not_null(x_13), not_null(c_14));
                    {
                      ATerm l_14 = NULL;
                      t = arg2abox_0(t);
                      {
                        j_14 = t;
                        {
                          ATerm m_14 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(y_13));
                          {
                            t = index_0(t);
                            {
                              m_14 = t;
                              if(((l_14 != NULL) && (l_14 != m_14)))
                                _fail(m_14);
                              else
                                l_14 = m_14;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_14)), (ATerm) ATinsert(ATempty, not_null(j_14)));
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
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  u_14 = t;
  r_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      s_14 :
      if(match_int(v_14, 1))
        {
          t_14 :
          if(((ATgetType(w_14) == AT_LIST) && ((ATermList) w_14 != ATempty)))
            {
              x_14 = ATgetFirst((ATermList) w_14);
              y_14 = (ATerm) ATgetNext((ATermList) w_14);
              t = not_null(x_14);
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
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_15), not_null(g_15));
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            t = SSL_subtr(not_null(f_15), not_null(g_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  o_15 = t;
  m_15 :
  if(match_cons(o_15, sym__2))
    {
      p_15 = ATgetArgument(o_15, 0);
      q_15 = ATgetArgument(o_15, 1);
      n_15 :
      if(((ATgetType(q_15) == AT_LIST) && ((ATermList) q_15 != ATempty)))
        {
          r_15 = ATgetFirst((ATermList) q_15);
          s_15 = (ATerm) ATgetNext((ATermList) q_15);
          {
            ATerm w_15 = NULL;
            ATerm o_9;
            o_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), term_u_8);
              t = geq_0(t);
            }
            t = o_9;
            {
              ATerm x_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), term_o_8);
              {
                t = subt_0(t);
                {
                  x_15 = t;
                  if(((w_15 != NULL) && (w_15 != x_15)))
                    _fail(x_15);
                  else
                    w_15 = x_15;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), not_null(s_15));
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
ATerm repeat_2 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm a_16 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_76(t);
        t = a_16(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = s_76(t);
      }
    return(t);
  }
  t = a_16(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_76 (ATerm))
{
  t = repeat_2(t, u_76, _id);
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  g_16 = t;
  d_16 :
  if(match_cons(g_16, sym__4))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      j_16 = ATgetArgument(g_16, 2);
      k_16 = ATgetArgument(g_16, 3);
      e_16 :
      if(match_cons(k_16, sym_alt_2))
        {
          l_16 = ATgetArgument(k_16, 0);
          m_16 = ATgetArgument(k_16, 1);
          f_16 :
          if(((ATermList) m_16 == ATempty))
            {
              {
                ATerm r_16 = NULL;
                ATerm s_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(j_16));
                {
                  t = index_0(t);
                  {
                    s_16 = t;
                    if(((r_16 != NULL) && (r_16 != s_16)))
                      _fail(s_16);
                    else
                      r_16 = s_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(r_16)), (ATerm) ATempty);
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
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  LocalPopChoice(y_9);
                }
              else
                {
                  t = x_9;
                  {
                    ATerm z_9 = t;
                    int a_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        LocalPopChoice(a_10);
                      }
                    else
                      {
                        t = z_9;
                        {
                          ATerm n_10 = t;
                          int s_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              LocalPopChoice(s_10);
                            }
                          else
                            {
                              t = n_10;
                              {
                                ATerm t_10 = t;
                                int u_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    LocalPopChoice(u_10);
                                  }
                                else
                                  {
                                    t = t_10;
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
ATerm selector_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym_selector_2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_17 = NULL,o_17 = NULL;
            ATerm n_17 = NULL;
            t = SSLgetAnnotations(not_null(g_17));
            {
              n_17 = t;
              if(((m_17 != NULL) && (m_17 != n_17)))
                _fail(n_17);
              else
                m_17 = n_17;
            }
            {
              t = not_null(h_17);
              {
                ATerm q_17 = NULL;
                t = k_0(t);
                {
                  o_17 = t;
                  {
                    t = not_null(i_17);
                    {
                      ATerm s_17 = NULL;
                      t = l_0(t);
                      {
                        q_17 = t;
                        {
                          ATerm t_17 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(o_17), not_null(q_17)), not_null(m_17));
                          {
                            t_17 = t;
                            if(((s_17 != NULL) && (s_17 != t_17)))
                              _fail(t_17);
                            else
                              s_17 = t_17;
                          }
                          t = not_null(s_17);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_17 = NULL,z_17 = NULL;
              ATerm y_17 = NULL;
              t = SSLgetAnnotations(not_null(g_17));
              {
                y_17 = t;
                if(((x_17 != NULL) && (x_17 != y_17)))
                  _fail(y_17);
                else
                  x_17 = y_17;
              }
              {
                t = not_null(h_17);
                {
                  ATerm b_18 = NULL;
                  t = k_0(t);
                  {
                    z_17 = t;
                    {
                      t = not_null(i_17);
                      {
                        ATerm d_18 = NULL;
                        t = l_0(t);
                        {
                          b_18 = t;
                          {
                            ATerm e_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(z_17), not_null(b_18)), not_null(x_17));
                            {
                              e_18 = t;
                              if(((d_18 != NULL) && (d_18 != e_18)))
                                _fail(e_18);
                              else
                                d_18 = e_18;
                            }
                            t = not_null(d_18);
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
ATerm get_symbol_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_Path_2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        ATerm x_18 = NULL;
        t = not_null(u_18);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                ATerm y_18 = NULL;
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
                return(t);
              }
              t = selector_2(t, _id, f_1);
              return(t);
            }
            t = Cons_2(t, e_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, d_1);
        }
        t = not_null(x_18);
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
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym__3))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      k_19 = ATgetArgument(h_19, 2);
      {
        ATerm o_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), (ATerm) ATinsert(ATempty, not_null(i_19)));
        {
          ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
          t = conc_0(t);
          {
            o_19 = t;
            {
              ATerm x_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
                  t = pp_table_get_0(t);
                  {
                    t_19 = t;
                    f_19 :
                    if(match_cons(t_19, sym__2))
                      {
                        u_19 = ATgetArgument(t_19, 0);
                        v_19 = ATgetArgument(t_19, 1);
                        {
                          ATerm w_19 = NULL;
                          if(((q_19 != NULL) && (q_19 != u_19)))
                            _fail(u_19);
                          else
                            q_19 = u_19;
                          {
                            if(((s_19 != NULL) && (s_19 != v_19)))
                              _fail(v_19);
                            else
                              s_19 = v_19;
                            {
                              t = not_null(q_19);
                              {
                                t = get_symbol_0(t);
                                {
                                  w_19 = t;
                                  {
                                    if(((r_19 != NULL) && (r_19 != w_19)))
                                      _fail(w_19);
                                    else
                                      r_19 = w_19;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(r_19), not_null(o_19), not_null(s_19), not_null(k_19));
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
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = x_10;
                  {
                    t = not_null(k_19);
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
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym__2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_20)), not_null(e_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  n_20 = t;
  l_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      m_20 :
      if(((ATgetType(p_20) == AT_LIST) && ((ATermList) p_20 != ATempty)))
        {
          q_20 = ATgetFirst((ATermList) p_20);
          r_20 = (ATerm) ATgetNext((ATermList) p_20);
          {
            ATerm v_20 = NULL;
            ATerm w_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_o_8);
            {
              t = add_0(t);
              {
                w_20 = t;
                if(((v_20 != NULL) && (v_20 != w_20)))
                  _fail(w_20);
                else
                  v_20 = w_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_20), not_null(q_20)), (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(r_20)));
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  a_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      b_21 :
      if(((ATermList) e_21 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  ATerm h_21 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83(t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          t = l_83(t);
          {
            t = _2(t, n_83, h_21);
            t = m_83(t);
          }
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(j_21));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm w_83 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, w_83);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  t_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_11, not_null(t_21));
    {
      t = table_get_0(t);
      {
        v_21 = t;
        s_21 :
        if(match_cons(v_21, sym__2))
          {
            w_21 = ATgetArgument(v_21, 0);
            x_21 = ATgetArgument(v_21, 1);
            {
              ATerm f_11;
              f_11 = t;
              {
                t = not_null(w_21);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = term_g_11;
                      return(t);
                    }
                    t = notify_1(t, g_1);
                  }
                }
              }
              t = f_11;
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
  ATerm d_22 = NULL;
  d_22 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        {
          ATerm h_1 (ATerm t)
          {
            t = term_k_11;
            return(t);
          }
          t = debug_1(t, h_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox_appl_0 (ATerm t)
{
  ATerm p_22 = NULL;
  ATerm r_22 = NULL,s_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  p_22 = t;
  {
    ATerm t_22 = NULL;
    ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
    t = not_null(p_22);
    {
      t_22 = t;
      {
        t = SSL_explode_term(not_null(t_22));
        {
          v_22 = t;
          j_22 :
          if(match_cons(v_22, sym__2))
            {
              w_22 = ATgetArgument(v_22, 0);
              x_22 = ATgetArgument(v_22, 1);
              {
                if(((r_22 != NULL) && (r_22 != w_22)))
                  _fail(w_22);
                else
                  r_22 = w_22;
                if(((s_22 != NULL) && (s_22 != x_22)))
                  _fail(x_22);
                else
                  s_22 = x_22;
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
      t = (ATerm) ATinsert(ATempty, not_null(r_22));
      {
        t = pp_table_get_p__0(t);
        {
          y_22 = t;
          o_22 :
          if(match_cons(y_22, sym__2))
            {
              z_22 = ATgetArgument(y_22, 0);
              a_23 = ATgetArgument(y_22, 1);
              {
                ATerm i_23 = NULL;
                t = not_null(s_22);
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
                    d_23 = t;
                    m_22 :
                    if(match_cons(d_23, sym__2))
                      {
                        e_23 = ATgetArgument(d_23, 0);
                        f_23 = ATgetArgument(d_23, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(e_23), (ATerm)ATinsert(ATempty, not_null(r_22)), not_null(f_23));
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
                    i_23 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), not_null(i_23));
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
ATerm trm2abox_list_0 (ATerm t)
{
  t = is_list_0(t);
  t = map_1(t, trm2abox_0);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_is_int(not_null(r_23));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm w_23 = NULL;
  ATerm y_23 = NULL;
  w_23 = t;
  {
    t = is_int_0(t);
    {
      ATerm z_23 = NULL;
      t = int_to_string_0(t);
      {
        z_23 = t;
        if(((y_23 != NULL) && (y_23 != z_23)))
          _fail(z_23);
        else
          y_23 = z_23;
      }
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_23));
    }
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  {
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(d_24));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm p_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            LocalPopChoice(z_11);
          }
        else
          {
            t = p_11;
            {
              ATerm c_12 = t;
              int e_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  LocalPopChoice(e_12);
                }
              else
                {
                  t = c_12;
                  t = trm2abox_appl_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_int_to_string(not_null(h_24));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Path1_1))
    {
      s_24 = ATgetArgument(r_24, 0);
      t = not_null(s_24);
    }
  else
    {
      if(match_cons(r_24, sym_Path_2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            ATerm b_25 = NULL,j_25 = NULL;
            t = not_null(t_24);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
                c_25 = t;
                o_24 :
                if(match_cons(c_25, sym_selector_2))
                  {
                    d_25 = ATgetArgument(c_25, 0);
                    e_25 = ATgetArgument(c_25, 1);
                    {
                      ATerm h_25 = NULL;
                      ATerm i_25 = NULL;
                      t = not_null(d_25);
                      {
                        t = int_to_string_0(t);
                        {
                          i_25 = t;
                          if(((h_25 != NULL) && (h_25 != i_25)))
                            _fail(i_25);
                          else
                            h_25 = i_25;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_25)), term_g_12), not_null(h_25)), term_f_12);
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
                  j_25 = t;
                  {
                    if(((b_25 != NULL) && (b_25 != j_25)))
                      _fail(j_25);
                    else
                      b_25 = j_25;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_25)), not_null(s_24));
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Path1_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_25));
    }
  else
    {
      if(match_cons(v_25, sym_Path_2))
        {
          w_25 = ATgetArgument(v_25, 0);
          x_25 = ATgetArgument(v_25, 1);
          {
            ATerm f_26 = NULL,a_27 = NULL;
            t = not_null(x_25);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm p_26 = NULL,q_26 = NULL,u_26 = NULL;
                p_26 = t;
                s_25 :
                if(match_cons(p_26, sym_selector_2))
                  {
                    q_26 = ATgetArgument(p_26, 0);
                    u_26 = ATgetArgument(p_26, 1);
                    t = not_null(q_26);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, k_1);
              {
                a_27 = t;
                {
                  if(((f_26 != NULL) && (f_26 != a_27)))
                    _fail(a_27);
                  else
                    f_26 = a_27;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_26)), not_null(w_25));
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_PP_Entry_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        ATerm n_27 = NULL;
        ATerm o_27 = NULL;
        t = not_null(j_27);
        {
          t = mk_key_0(t);
          {
            o_27 = t;
            if(((n_27 != NULL) && (n_27 != o_27)))
              _fail(o_27);
            else
              n_27 = o_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_11, not_null(n_27), (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(k_27)));
          {
            t = table_put_0(t);
            {
              t = not_null(j_27);
              {
                t = path_to_string_0(t);
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = term_h_12;
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
ATerm De_Escape4_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  s_27 :
  if(((ATermList) t_27 == ATempty))
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
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  x_27 :
  if(((ATgetType(y_27) == AT_LIST) && ((ATermList) y_27 != ATempty)))
    {
      z_27 = ATgetFirst((ATermList) y_27);
      a_28 = (ATerm) ATgetNext((ATermList) y_27);
      {
        ATerm d_28 = NULL;
        ATerm e_28 = NULL;
        t = not_null(a_28);
        {
          t = De_Escape_0(t);
          {
            e_28 = t;
            if(((d_28 != NULL) && (d_28 != e_28)))
              _fail(e_28);
            else
              d_28 = e_28;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(d_28)), not_null(z_27));
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  n_28 = t;
  j_28 :
  if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
    {
      o_28 = ATgetFirst((ATermList) n_28);
      p_28 = (ATerm) ATgetNext((ATermList) n_28);
      k_28 :
      if(match_int(o_28, 92))
        {
          l_28 :
          if(((ATgetType(p_28) == AT_LIST) && ((ATermList) p_28 != ATempty)))
            {
              q_28 = ATgetFirst((ATermList) p_28);
              r_28 = (ATerm) ATgetNext((ATermList) p_28);
              m_28 :
              if(match_int(q_28, 92))
                {
                  ATerm t_28 = NULL;
                  ATerm u_28 = NULL;
                  t = not_null(r_28);
                  {
                    t = De_Escape_0(t);
                    {
                      u_28 = t;
                      if(((t_28 != NULL) && (t_28 != u_28)))
                        _fail(u_28);
                      else
                        t_28 = u_28;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_28)), term_i_12);
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
  ATerm f_29 = NULL,g_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  f_29 = t;
  b_29 :
  if(((ATgetType(f_29) == AT_LIST) && ((ATermList) f_29 != ATempty)))
    {
      g_29 = ATgetFirst((ATermList) f_29);
      u_29 = (ATerm) ATgetNext((ATermList) f_29);
      c_29 :
      if(match_int(g_29, 92))
        {
          d_29 :
          if(((ATgetType(u_29) == AT_LIST) && ((ATermList) u_29 != ATempty)))
            {
              v_29 = ATgetFirst((ATermList) u_29);
              w_29 = (ATerm) ATgetNext((ATermList) u_29);
              e_29 :
              if(match_int(v_29, 34))
                {
                  ATerm b_30 = NULL;
                  ATerm c_30 = NULL;
                  t = not_null(w_29);
                  {
                    t = De_Escape_0(t);
                    {
                      c_30 = t;
                      if(((b_30 != NULL) && (b_30 != c_30)))
                        _fail(c_30);
                      else
                        b_30 = c_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_30)), term_j_12);
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
  ATerm k_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(s_12);
    }
  else
    {
      t = k_12;
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
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
ATerm at_last_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm f_30 (ATerm t)
  {
    ATerm x_12 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = u_85(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = x_12;
        t = Cons_2(t, _id, f_30);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(((ATgetType(i_30) == AT_LIST) && ((ATermList) i_30 != ATempty)))
    {
      j_30 = ATgetFirst((ATermList) i_30);
      k_30 = (ATerm) ATgetNext((ATermList) i_30);
      t = not_null(k_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  p_30 :
  if(((ATgetType(q_30) == AT_LIST) && ((ATermList) q_30 != ATempty)))
    {
      r_30 = ATgetFirst((ATermList) q_30);
      s_30 = (ATerm) ATgetNext((ATermList) q_30);
      t = not_null(r_30);
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
    ATerm h_13;
    h_13 = t;
    {
      ATerm b_31 = NULL;
      t = Hd_0(t);
      {
        b_31 = t;
        w_30 :
        if(!(match_int(b_31, 34)))
          {
            _fail(t);
          }
      }
    }
    t = h_13;
    {
      t = Tl_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
          c_31 = t;
          y_30 :
          if(((ATgetType(c_31) == AT_LIST) && ((ATermList) c_31 != ATempty)))
            {
              d_31 = ATgetFirst((ATermList) c_31);
              e_31 = (ATerm) ATgetNext((ATermList) c_31);
              z_30 :
              if(match_int(d_31, 34))
                {
                  a_31 :
                  if(((ATermList) e_31 == ATempty))
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
ATerm S_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_S_1))
    {
      x_31 = ATgetArgument(w_31, 0);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL,c_32 = NULL;
            ATerm b_32 = NULL;
            t = SSLgetAnnotations(not_null(w_31));
            {
              b_32 = t;
              if(((a_32 != NULL) && (a_32 != b_32)))
                _fail(b_32);
              else
                a_32 = b_32;
            }
            {
              t = not_null(x_31);
              {
                ATerm e_32 = NULL;
                t = j_0(t);
                {
                  c_32 = t;
                  {
                    ATerm f_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(c_32)), not_null(a_32));
                    {
                      f_32 = t;
                      if(((e_32 != NULL) && (e_32 != f_32)))
                        _fail(f_32);
                      else
                        e_32 = f_32;
                    }
                    t = not_null(e_32);
                  }
                }
              }
            }
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm l_32 = NULL,n_32 = NULL;
              ATerm m_32 = NULL;
              t = SSLgetAnnotations(not_null(w_31));
              {
                m_32 = t;
                if(((l_32 != NULL) && (l_32 != m_32)))
                  _fail(m_32);
                else
                  l_32 = m_32;
              }
              {
                t = not_null(x_31);
                {
                  ATerm p_32 = NULL;
                  t = j_0(t);
                  {
                    n_32 = t;
                    {
                      ATerm q_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(n_32)), not_null(l_32));
                      {
                        q_32 = t;
                        if(((p_32 != NULL) && (p_32 != q_32)))
                          _fail(q_32);
                        else
                          p_32 = q_32;
                      }
                      t = not_null(p_32);
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
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
      m_33 = t;
      f_33 :
      if(match_cons(m_33, sym_Arg_1))
        {
          n_33 = ATgetArgument(m_33, 0);
          {
            ATerm p_33 = NULL;
            if(((k_33 != NULL) && (k_33 != n_33)))
              _fail(n_33);
            else
              k_33 = n_33;
            {
              ATerm t_33 = NULL;
              t = not_null(k_33);
              {
                t = string_to_int_0(t);
                {
                  t_33 = t;
                  if(((p_33 != NULL) && (p_33 != t_33)))
                    _fail(t_33);
                  else
                    p_33 = t_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(p_33));
            }
          }
        }
      else
        {
          if(match_cons(m_33, sym_Arg2_2))
            {
              n_33 = ATgetArgument(m_33, 0);
              o_33 = ATgetArgument(m_33, 1);
              {
                ATerm u_33 = NULL,w_33 = NULL;
                if(((k_33 != NULL) && (k_33 != n_33)))
                  _fail(n_33);
                else
                  k_33 = n_33;
                {
                  if(((j_33 != NULL) && (j_33 != o_33)))
                    _fail(o_33);
                  else
                    j_33 = o_33;
                  {
                    ATerm n_13;
                    n_13 = t;
                    {
                      ATerm v_33 = NULL;
                      t = not_null(k_33);
                      {
                        t = string_to_int_0(t);
                        {
                          v_33 = t;
                          if(((u_33 != NULL) && (u_33 != v_33)))
                            _fail(v_33);
                          else
                            u_33 = v_33;
                        }
                      }
                    }
                    t = n_13;
                    {
                      ATerm z_33 = NULL;
                      t = not_null(j_33);
                      {
                        t = string_to_int_0(t);
                        {
                          z_33 = t;
                          if(((w_33 != NULL) && (w_33 != z_33)))
                            _fail(z_33);
                          else
                            w_33 = z_33;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(u_33), not_null(w_33));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(m_33, sym_SOpt_2))
                {
                  n_33 = ATgetArgument(m_33, 0);
                  o_33 = ATgetArgument(m_33, 1);
                  {
                    if(((l_33 != NULL) && (l_33 != n_33)))
                      _fail(n_33);
                    else
                      l_33 = n_33;
                    {
                      if(((k_33 != NULL) && (k_33 != o_33)))
                        _fail(o_33);
                      else
                        k_33 = o_33;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(l_33), not_null(k_33));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, n_1);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
              a_34 = t;
              i_33 :
              if(match_cons(a_34, sym_selector_2))
                {
                  b_34 = ATgetArgument(a_34, 0);
                  c_34 = ATgetArgument(a_34, 1);
                  {
                    ATerm d_34 = NULL;
                    if(((k_33 != NULL) && (k_33 != b_34)))
                      _fail(b_34);
                    else
                      k_33 = b_34;
                    {
                      if(((l_33 != NULL) && (l_33 != c_34)))
                        _fail(c_34);
                      else
                        l_33 = c_34;
                      {
                        ATerm e_34 = NULL;
                        t = not_null(k_33);
                        {
                          t = string_to_int_0(t);
                          {
                            e_34 = t;
                            if(((d_34 != NULL) && (d_34 != e_34)))
                              _fail(e_34);
                            else
                              d_34 = e_34;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(d_34), not_null(l_33));
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
ATerm topdown_1 (ATerm t, ATerm h_87 (ATerm))
{
  t = h_87(t);
  {
    ATerm o_1 (ATerm t)
    {
      t = topdown_1(t, h_87);
      return(t);
    }
    t = _all(t, o_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, p_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  o_34 :
  if(match_cons(t_34, sym_PP_Table_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        t = not_null(u_34);
        {
          t = reverse_0(t);
          {
            ATerm q_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, q_1);
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
  ATerm q_13;
  q_13 = t;
  {
    ATerm b_35 = NULL;
    ATerm c_35 = NULL;
    c_35 = t;
    if(((b_35 != NULL) && (b_35 != c_35)))
      _fail(c_35);
    else
      b_35 = c_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_14, not_null(b_35));
      t = printnl_0(t);
    }
  }
  t = q_13;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm f_14;
  f_14 = t;
  {
    t = error_0(t);
    {
      t = term_o_8;
      t = exit_0(t);
    }
  }
  t = f_14;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        t = term_i_14;
        return(t);
      }
      t = has_option_1(t, r_1);
      {
        t = (ATerm) ATinsert(ATempty, term_k_14);
        t = fatal_error_0(t);
      }
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        t = (ATerm) ATinsert(ATempty, term_n_14);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  k_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      l_35 :
      if(match_string(n_35, "in-type"))
        {
          ATerm q_35 = NULL,r_35 = NULL;
          ATerm o_14;
          o_14 = t;
          {
            ATerm s_35 = NULL;
            ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
            t = not_null(o_35);
            {
              s_35 = t;
              {
                t = SSL_explode_term(not_null(s_35));
                {
                  u_35 = t;
                  h_35 :
                  if(match_cons(u_35, sym__2))
                    {
                      v_35 = ATgetArgument(u_35, 0);
                      w_35 = ATgetArgument(u_35, 1);
                      i_35 :
                      if(((ATgetType(w_35) == AT_LIST) && ((ATermList) w_35 != ATempty)))
                        {
                          x_35 = ATgetFirst((ATermList) w_35);
                          y_35 = (ATerm) ATgetNext((ATermList) w_35);
                          j_35 :
                          if(((ATermList) y_35 == ATempty))
                            {
                              {
                                if(((r_35 != NULL) && (r_35 != v_35)))
                                  _fail(v_35);
                                else
                                  r_35 = v_35;
                                if(((q_35 != NULL) && (q_35 != x_35)))
                                  _fail(x_35);
                                else
                                  q_35 = x_35;
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
          t = o_14;
          {
            t = not_null(r_35);
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_92(t);
                  LocalPopChoice(q_14);
                }
              else
                {
                  t = p_14;
                  t = type_failure_0(t);
                }
            }
            t = not_null(q_35);
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
ATerm termid_check_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm e_36 = NULL;
  ATerm j_36 = NULL;
  e_36 = t;
  {
    ATerm k_36 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(e_36));
    {
      t = InId_1(t, q_92);
      {
        k_36 = t;
        if(((j_36 != NULL) && (j_36 != k_36)))
          _fail(k_36);
        else
          j_36 = k_36;
      }
    }
    t = not_null(j_36);
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm n_36 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_88(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = _one(t, n_36);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym__2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      {
        ATerm c_15;
        c_15 = t;
        {
          t = not_null(t_36);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm w_36 = NULL;
              w_36 = t;
              if(((s_36 != NULL) && (s_36 != w_36)))
                _fail(w_36);
              else
                s_36 = w_36;
              return(t);
            }
            t = oncetd_1(t, s_1);
          }
        }
        t = c_15;
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
  t = term_j_15;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm b_37 = NULL;
  ATerm d_37 = NULL;
  b_37 = t;
  {
    ATerm e_37 = NULL;
    t = get_options_0(t);
    {
      e_37 = t;
      {
        if(((d_37 != NULL) && (d_37 != e_37)))
          _fail(e_37);
        else
          d_37 = e_37;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(d_37));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_a_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm k_15;
  k_15 = t;
  {
    t = term_a_8;
    {
      t = y_91(t);
      t = check_option_0(t);
    }
  }
  t = k_15;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm l_15;
    l_15 = t;
    {
      ATerm t_15;
      t_15 = t;
      {
        ATerm u_1 (ATerm t)
        {
          t = term_u_15;
          return(t);
        }
        t = has_option_1(t, u_1);
      }
      t = t_15;
      t = debug_1(t, u_65);
    }
    t = l_15;
    return(t);
  }
  t = try_1(t, t_1);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  {
    t = term_d_11;
    {
      t = table_create_0(t);
      {
        t = not_null(j_37);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_v_15;
              return(t);
            }
            t = notify_1(t, w_1);
            {
              t = ReadFromFile_0(t);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm l_37 = NULL;
                  l_37 = t;
                  i_37 :
                  if(!(match_string(l_37, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, x_1);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, v_1);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(((ATgetType(q_37) == AT_LIST) && ((ATermList) q_37 != ATempty)))
    {
      r_37 = ATgetFirst((ATermList) q_37);
      s_37 = (ATerm) ATgetNext((ATermList) q_37);
      {
        t = r_80(t);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm v_37 = NULL;
            v_37 = t;
            if(((r_37 != NULL) && (r_37 != v_37)))
              _fail(v_37);
            else
              r_37 = v_37;
            return(t);
          }
          t = fetch_1(t, y_1);
        }
        t = not_null(s_37);
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
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(match_cons(a_38, sym__2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      {
        t = not_null(b_38);
        {
          ATerm g_38 (ATerm t)
          {
            ATerm y_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_38);
                LocalPopChoice(z_15);
              }
            else
              {
                t = y_15;
                {
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = not_null(c_38);
                        return(t);
                      }
                      t = HdMember_1(t, z_1);
                      t = g_38(t);
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
                      t = Cons_2(t, _id, g_38);
                    }
                }
              }
            return(t);
          }
          t = g_38(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_79(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
        l_38 = t;
        k_38 :
        if(((ATgetType(l_38) == AT_LIST) && ((ATermList) l_38 != ATempty)))
          {
            m_38 = ATgetFirst((ATermList) l_38);
            n_38 = (ATerm) ATgetNext((ATermList) l_38);
            {
              ATerm q_38 = NULL,s_38 = NULL;
              ATerm p_16;
              p_16 = t;
              {
                ATerm r_38 = NULL;
                t = not_null(m_38);
                {
                  t = p_79(t);
                  {
                    r_38 = t;
                    if(((q_38 != NULL) && (q_38 != r_38)))
                      _fail(r_38);
                    else
                      q_38 = r_38;
                  }
                }
              }
              t = p_16;
              {
                ATerm t_38 = NULL;
                t = not_null(n_38);
                {
                  t = foldr_3(t, n_79, o_79, p_79);
                  {
                    t_38 = t;
                    if(((s_38 != NULL) && (s_38 != t_38)))
                      _fail(t_38);
                    else
                      s_38 = t_38;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), not_null(s_38));
                  t = o_79(t);
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
ATerm crush_3 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm))
{
  ATerm b_39 = NULL;
  ATerm d_39 = NULL;
  b_39 = t;
  {
    ATerm e_39 = NULL;
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
    t = not_null(b_39);
    {
      e_39 = t;
      {
        t = SSL_explode_term(not_null(e_39));
        {
          g_39 = t;
          a_39 :
          if(match_cons(g_39, sym__2))
            {
              h_39 = ATgetArgument(g_39, 0);
              i_39 = ATgetArgument(g_39, 1);
              if(((d_39 != NULL) && (d_39 != i_39)))
                _fail(i_39);
              else
                d_39 = i_39;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_39);
      t = foldr_3(t, c_81, d_81, e_81);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm p_39 (ATerm t)
  {
    ATerm q_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL;
        ATerm o_39 = NULL;
        t = t_81(t);
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        t = (ATerm) ATinsert(ATempty, not_null(n_39));
        LocalPopChoice(t_16);
      }
    else
      {
        t = q_16;
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, a_2, union_0, p_39);
        }
      }
    return(t);
  }
  t = p_39(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_81 (ATerm))
{
  t = collect_om_1(t, v_81);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym__2))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      {
        t = not_null(x_39);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm b_40 = NULL,c_40 = NULL;
            b_40 = t;
            t_39 :
            if(match_cons(b_40, sym_PP_Table_1))
              {
                c_40 = ATgetArgument(b_40, 0);
                t = not_null(c_40);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1(t, b_2);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(y_39);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm e_40 = NULL;
                      t = is_list_0(t);
                      {
                        e_40 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(e_40));
                      }
                      return(t);
                    }
                    t = try_1(t, c_2);
                    {
                      ATerm d_2 (ATerm t)
                      {
                        t = not_null(x_39);
                        return(t);
                      }
                      t = split_2(t, d_2, _id);
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
  ATerm l_40 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm q_40 = NULL,r_40 = NULL;
      q_40 = t;
      k_40 :
      if(match_cons(q_40, sym_Program_1))
        {
          r_40 = ATgetArgument(q_40, 0);
          if(((l_40 != NULL) && (l_40 != r_40)))
            _fail(r_40);
          else
            l_40 = r_40;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_16), not_null(l_40)), term_v_16));
      {
        t = printnl_0(t);
        {
          t = term_o_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_16;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym__2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      {
        ATerm x_16;
        x_16 = t;
        t = SSL_printnl(not_null(w_40), not_null(x_40));
        t = x_16;
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
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym__2))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      {
        t = not_null(e_41);
        {
          ATerm f_2 (ATerm t)
          {
            t = not_null(f_41);
            return(t);
          }
          t = at_end_1(t, f_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm debug_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm y_16;
  y_16 = t;
  {
    ATerm l_41 = NULL,n_41 = NULL;
    ATerm z_16;
    z_16 = t;
    {
      ATerm m_41 = NULL;
      t = o_90(t);
      {
        m_41 = t;
        if(((l_41 != NULL) && (l_41 != m_41)))
          _fail(m_41);
        else
          l_41 = m_41;
      }
    }
    t = z_16;
    {
      ATerm o_41 = NULL;
      o_41 = t;
      if(((n_41 != NULL) && (n_41 != o_41)))
        _fail(o_41);
      else
        n_41 = o_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_41)), not_null(l_41)));
        t = printnl_0(t);
      }
    }
  }
  t = y_16;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_41 = NULL;
  s_41 = t;
  t = SSL_is_string(not_null(s_41));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_2);
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            {
              ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL;
              d_42 = t;
              c_42 :
              if(match_cons(d_42, sym_Path_1))
                {
                  g_42 = ATgetArgument(d_42, 0);
                  t = not_null(g_42);
                }
              else
                {
                  if(match_cons(d_42, sym_Var_1))
                    {
                      g_42 = ATgetArgument(d_42, 0);
                      {
                        t = not_null(g_42);
                        {
                          ATerm e_17 = t;
                          int j_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_17);
                            }
                          else
                            {
                              t = e_17;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = term_k_17;
                                  return(t);
                                }
                                t = debug_1(t, k_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_42, sym_Prefix_2))
                        {
                          g_42 = ATgetArgument(d_42, 0);
                          h_42 = ATgetArgument(d_42, 1);
                          {
                            ATerm o_42 = NULL,q_42 = NULL;
                            ATerm l_17;
                            l_17 = t;
                            {
                              ATerm p_42 = NULL;
                              t = not_null(g_42);
                              {
                                t = eval_config_0(t);
                                {
                                  p_42 = t;
                                  if(((o_42 != NULL) && (o_42 != p_42)))
                                    _fail(p_42);
                                  else
                                    o_42 = p_42;
                                }
                              }
                            }
                            t = l_17;
                            {
                              ATerm r_42 = NULL;
                              t = not_null(h_42);
                              {
                                t = eval_config_0(t);
                                {
                                  r_42 = t;
                                  if(((q_42 != NULL) && (q_42 != r_42)))
                                    _fail(r_42);
                                  else
                                    q_42 = r_42;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_42), not_null(q_42));
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
  ATerm z_42 = NULL;
  z_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_17, not_null(z_42));
    {
      t = table_get_0(t);
      {
        ATerm l_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_17;
            r_17 = t;
            {
              ATerm b_43 = NULL;
              ATerm c_43 = NULL;
              c_43 = t;
              if(((b_43 != NULL) && (b_43 != c_43)))
                _fail(c_43);
              else
                b_43 = c_43;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_17, not_null(z_42), not_null(b_43));
                t = table_put_0(t);
              }
            }
            t = r_17;
          }
          return(t);
        }
        t = try_1(t, l_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm u_17;
    u_17 = t;
    {
      ATerm g_43 = NULL;
      ATerm h_43 = NULL;
      t = term_v_17;
      {
        t = get_config_0(t);
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_43), term_u_8);
        t = geq_0(t);
      }
    }
    t = u_17;
    t = f_72(t);
    return(t);
  }
  t = try_1(t, m_2);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATempty, term_w_17));
  {
    t = printnl_0(t);
    {
      t = term_o_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_43 = NULL;
  k_43 = t;
  t = SSL_TicksToSeconds(not_null(k_43));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym__2))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      {
        ATerm a_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_43), not_null(r_43));
            LocalPopChoice(c_18);
          }
        else
          {
            t = a_18;
            t = SSL_addr(not_null(q_43), not_null(r_43));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_79(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
        y_43 = t;
        x_43 :
        if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
          {
            z_43 = ATgetFirst((ATermList) y_43);
            a_44 = (ATerm) ATgetNext((ATermList) y_43);
            {
              ATerm d_44 = NULL;
              ATerm e_44 = NULL;
              t = not_null(a_44);
              {
                t = foldr_2(t, l_79, m_79);
                {
                  e_44 = t;
                  if(((d_44 != NULL) && (d_44 != e_44)))
                    _fail(e_44);
                  else
                    d_44 = e_44;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), not_null(d_44));
                t = m_79(t);
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
ATerm crush_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm s_44 = NULL;
  ATerm u_44 = NULL;
  s_44 = t;
  {
    ATerm v_44 = NULL;
    ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
    t = not_null(s_44);
    {
      v_44 = t;
      {
        t = SSL_explode_term(not_null(v_44));
        {
          x_44 = t;
          r_44 :
          if(match_cons(x_44, sym__2))
            {
              y_44 = ATgetArgument(x_44, 0);
              z_44 = ATgetArgument(x_44, 1);
              if(((u_44 != NULL) && (u_44 != z_44)))
                _fail(z_44);
              else
                u_44 = z_44;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_44);
      t = foldr_2(t, a_81, b_81);
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
    ATerm n_2 (ATerm t)
    {
      t = term_n_8;
      return(t);
    }
    t = crush_2(t, n_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  e_45 :
  if(match_cons(k_45, sym__2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        ATerm h_18;
        h_18 = t;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_45), not_null(m_45));
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              t = SSL_gtr(not_null(l_45), not_null(m_45));
            }
        }
        t = h_18;
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
  ATerm s_45 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
      t_45 = t;
      r_45 :
      if(match_cons(t_45, sym__2))
        {
          u_45 = ATgetArgument(t_45, 0);
          v_45 = ATgetArgument(t_45, 1);
          {
            if(((s_45 != NULL) && (s_45 != u_45)))
              _fail(u_45);
            else
              s_45 = u_45;
            if(((s_45 != NULL) && (s_45 != v_45)))
              _fail(v_45);
            else
              s_45 = v_45;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      ATerm y_45 = NULL;
      ATerm z_45 = NULL;
      t = term_v_17;
      {
        t = get_config_0(t);
        {
          z_45 = t;
          if(((y_45 != NULL) && (y_45 != z_45)))
            _fail(z_45);
          else
            y_45 = z_45;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_45), term_o_8);
        t = geq_0(t);
      }
    }
    t = m_18;
    t = e_72(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm d_46 = NULL,f_46 = NULL;
    ATerm n_18;
    n_18 = t;
    {
      ATerm e_46 = NULL;
      t = run_time_0(t);
      {
        e_46 = t;
        if(((d_46 != NULL) && (d_46 != e_46)))
          _fail(e_46);
        else
          d_46 = e_46;
      }
    }
    t = n_18;
    {
      ATerm g_46 = NULL;
      t = term_o_18;
      {
        t = get_config_0(t);
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_18), not_null(d_46)), term_p_18), not_null(f_46)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_2);
  {
    t = term_n_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym__2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      t = SSL_WriteToTextFile(not_null(m_46), not_null(n_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym__2))
    {
      c_47 = ATgetArgument(b_47, 0);
      d_47 = ATgetArgument(b_47, 1);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(b_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(c_47);
          {
            ATerm s_47 = NULL;
            t = y_53(t);
            {
              m_47 = t;
              {
                t = not_null(d_47);
                {
                  ATerm w_47 = NULL;
                  t = z_53(t);
                  {
                    s_47 = t;
                    {
                      ATerm x_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_47), not_null(s_47)), not_null(k_47));
                      {
                        x_47 = t;
                        if(((w_47 != NULL) && (w_47 != x_47)))
                          _fail(x_47);
                        else
                          w_47 = x_47;
                      }
                      t = not_null(w_47);
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
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym__2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      t = SSL_WriteToBinaryFile(not_null(g_48), not_null(h_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_48 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm w_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm s_48 = NULL,y_48 = NULL;
            s_48 = t;
            m_48 :
            if(match_cons(s_48, sym_Output_1))
              {
                y_48 = ATgetArgument(s_48, 0);
                if(((r_48 != NULL) && (r_48 != y_48)))
                  _fail(y_48);
                else
                  r_48 = y_48;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_2);
          LocalPopChoice(z_18);
        }
      else
        {
          t = w_18;
          {
            ATerm k_49 = NULL;
            t = term_a_19;
            {
              k_49 = t;
              if(((r_48 != NULL) && (r_48 != k_49)))
                _fail(k_49);
              else
                r_48 = k_49;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_2, _id);
  }
  t = v_18;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(r_48);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, s_2);
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_2 (ATerm t)
          {
            ATerm y_2 (ATerm t)
            {
              ATerm l_49 = NULL;
              l_49 = t;
              q_48 :
              if(!(match_cons(l_49, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, y_2);
            return(t);
          }
          t = _2(t, x_2, WriteToBinaryFile_0);
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_92 (ATerm))
{
  ATerm t_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  ATerm d_19;
  d_19 = t;
  t = dtime_0(t);
  t = d_19;
  {
    t = d_92(t);
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm u_49 = NULL;
        t = dtime_0(t);
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
      }
      t = e_19;
      {
        v_49 = t;
        s_49 :
        if(match_cons(v_49, sym__2))
          {
            w_49 = ATgetArgument(v_49, 0);
            x_49 = ATgetArgument(v_49, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_49)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_49))), not_null(x_49));
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
  ATerm g_51 = NULL;
  g_51 = t;
  t = SSL_ReadFromFile(not_null(g_51));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm c_54 = NULL,e_54 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm d_54 = NULL;
    t = y_75(t);
    {
      d_54 = t;
      if(((c_54 != NULL) && (c_54 != d_54)))
        _fail(d_54);
      else
        c_54 = d_54;
    }
  }
  t = l_19;
  {
    ATerm f_54 = NULL;
    t = z_75(t);
    {
      f_54 = t;
      if(((e_54 != NULL) && (e_54 != f_54)))
        _fail(f_54);
      else
        e_54 = f_54;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(e_54));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_54 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm n_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 (ATerm t)
        {
          ATerm m_54 = NULL,n_54 = NULL;
          m_54 = t;
          j_54 :
          if(match_cons(m_54, sym_Input_1))
            {
              n_54 = ATgetArgument(m_54, 0);
              if(((l_54 != NULL) && (l_54 != n_54)))
                _fail(n_54);
              else
                l_54 = n_54;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_2);
        LocalPopChoice(p_19);
      }
    else
      {
        t = n_19;
        {
          ATerm o_54 = NULL;
          t = term_x_19;
          {
            o_54 = t;
            if(((l_54 != NULL) && (l_54 != o_54)))
              _fail(o_54);
            else
              l_54 = o_54;
          }
        }
      }
  }
  t = m_19;
  {
    ATerm b_3 (ATerm t)
    {
      t = not_null(l_54);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_Version_0))
    {
      ATerm x_54 = NULL,z_54 = NULL;
      ATerm y_19;
      y_19 = t;
      {
        ATerm y_54 = NULL;
        t = SSLgetAnnotations(not_null(v_54));
        {
          y_54 = t;
          if(((x_54 != NULL) && (x_54 != y_54)))
            _fail(y_54);
          else
            x_54 = y_54;
        }
      }
      t = y_19;
      {
        ATerm a_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_54));
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
        t = not_null(z_54);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_92 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm b_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_20);
            }
          else
            {
              t = b_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_3);
  t = b_92(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  t = SSL_table_create(not_null(f_55));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  {
    ATerm h_20;
    h_20 = t;
    {
      t = term_h_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, not_null(j_55));
          t = table_put_0(t);
        }
      }
    }
    t = h_20;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_55 = NULL;
  n_55 = t;
  t = SSL_string_to_int(not_null(n_55));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm d_56 = NULL;
        d_56 = t;
        q_55 :
        if(!(match_string(d_56, "-i")))
          {
            if(!(match_string(d_56, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm g_56 = NULL;
        ATerm k_20;
        k_20 = t;
        {
          ATerm e_56 = NULL;
          ATerm f_56 = NULL;
          f_56 = t;
          if(((e_56 != NULL) && (e_56 != f_56)))
            _fail(f_56);
          else
            e_56 = f_56;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(e_56));
            t = set_config_0(t);
          }
        }
        t = k_20;
        {
          ATerm h_56 = NULL;
          h_56 = t;
          if(((g_56 != NULL) && (g_56 != h_56)))
            _fail(h_56);
          else
            g_56 = h_56;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_56));
        }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_t_20;
        return(t);
      }
      t = ArgOption_3(t, d_3, g_3, h_3);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm u_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              ATerm i_56 = NULL;
              i_56 = t;
              t_55 :
              if(!(match_string(i_56, "-o")))
                {
                  if(!(match_string(i_56, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              ATerm l_56 = NULL;
              ATerm y_20;
              y_20 = t;
              {
                ATerm j_56 = NULL;
                ATerm k_56 = NULL;
                k_56 = t;
                if(((j_56 != NULL) && (j_56 != k_56)))
                  _fail(k_56);
                else
                  j_56 = k_56;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(j_56));
                  t = set_config_0(t);
                }
              }
              t = y_20;
              {
                ATerm m_56 = NULL;
                m_56 = t;
                if(((l_56 != NULL) && (l_56 != m_56)))
                  _fail(m_56);
                else
                  l_56 = m_56;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_56));
              }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              t = term_f_21;
              return(t);
            }
            t = ArgOption_3(t, i_3, n_3, o_3);
            LocalPopChoice(x_20);
          }
        else
          {
            t = u_20;
            {
              ATerm g_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm n_56 = NULL;
                    n_56 = t;
                    w_55 :
                    if(!(match_string(n_56, "-S")))
                      {
                        if(!(match_string(n_56, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm z_3 (ATerm t)
                  {
                    t = term_k_21;
                    t = set_config_0(t);
                    t = term_l_21;
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = term_m_21;
                    return(t);
                  }
                  t = Option_3(t, x_3, z_3, a_4);
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = g_21;
                  {
                    ATerm n_21 = t;
                    int o_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 (ATerm t)
                        {
                          ATerm o_56 = NULL;
                          o_56 = t;
                          x_55 :
                          if(!(match_string(o_56, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_4 (ATerm t)
                        {
                          ATerm r_56 = NULL;
                          ATerm p_21;
                          p_21 = t;
                          {
                            ATerm p_56 = NULL;
                            ATerm q_56 = NULL;
                            t = string_to_int_0(t);
                            {
                              q_56 = t;
                              if(((p_56 != NULL) && (p_56 != q_56)))
                                _fail(q_56);
                              else
                                p_56 = q_56;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_17, not_null(p_56));
                              t = set_config_0(t);
                            }
                          }
                          t = p_21;
                          {
                            ATerm s_56 = NULL;
                            s_56 = t;
                            if(((r_56 != NULL) && (r_56 != s_56)))
                              _fail(s_56);
                            else
                              r_56 = s_56;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_56));
                          }
                          return(t);
                        }
                        ATerm d_4 (ATerm t)
                        {
                          t = term_q_21;
                          return(t);
                        }
                        t = ArgOption_3(t, b_4, c_4, d_4);
                        LocalPopChoice(o_21);
                      }
                    else
                      {
                        t = n_21;
                        {
                          ATerm r_21 = t;
                          int u_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_4 (ATerm t)
                              {
                                ATerm t_56 = NULL;
                                t_56 = t;
                                a_56 :
                                if(!(match_string(t_56, "-v")))
                                  {
                                    if(!(match_string(t_56, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                t = term_z_21;
                                t = set_config_0(t);
                                t = term_a_22;
                                return(t);
                              }
                              ATerm k_4 (ATerm t)
                              {
                                t = term_b_22;
                                return(t);
                              }
                              t = Option_3(t, e_4, f_4, k_4);
                              LocalPopChoice(u_21);
                            }
                          else
                            {
                              t = r_21;
                              {
                                ATerm c_22 = t;
                                int e_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_4 (ATerm t)
                                    {
                                      ATerm u_56 = NULL;
                                      u_56 = t;
                                      b_56 :
                                      if(!(match_string(u_56, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_g_22;
                                      t = set_config_0(t);
                                      t = term_h_22;
                                      return(t);
                                    }
                                    ATerm x_4 (ATerm t)
                                    {
                                      t = term_i_22;
                                      return(t);
                                    }
                                    t = Option_3(t, l_4, s_4, x_4);
                                    LocalPopChoice(e_22);
                                  }
                                else
                                  {
                                    t = c_22;
                                    {
                                      ATerm y_4 (ATerm t)
                                      {
                                        ATerm v_56 = NULL;
                                        v_56 = t;
                                        c_56 :
                                        if(!(match_string(v_56, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm z_4 (ATerm t)
                                      {
                                        t = term_l_22;
                                        t = set_config_0(t);
                                        t = term_n_22;
                                        return(t);
                                      }
                                      ATerm a_5 (ATerm t)
                                      {
                                        t = term_q_22;
                                        return(t);
                                      }
                                      t = Option_3(t, y_4, z_4, a_5);
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
  ATerm d_57 = NULL;
  d_57 = t;
  t = SSL_table_destroy(not_null(d_57));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_57 = NULL;
  h_57 = t;
  t = SSL_exit(not_null(h_57));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  t = SSL_implode_string(not_null(l_57));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm o_57 (ATerm t)
  {
    ATerm u_22 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_57);
        LocalPopChoice(b_23);
      }
    else
      {
        t = u_22;
        {
          t = Nil_0(t);
          t = l_85(t);
        }
      }
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = c_23;
      {
        ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
        r_57 = t;
        q_57 :
        if(((ATgetType(r_57) == AT_LIST) && ((ATermList) r_57 != ATempty)))
          {
            s_57 = ATgetFirst((ATermList) r_57);
            t_57 = (ATerm) ATgetNext((ATermList) r_57);
            {
              t = not_null(s_57);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(t_57);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
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
  ATerm z_57 = NULL;
  z_57 = t;
  t = SSL_explode_string(not_null(z_57));
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
ATerm long_description_1 (ATerm t, ATerm l_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm c_58 (ATerm t)
  {
    ATerm h_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = h_23;
        t = Cons_2(t, x_84, c_58);
      }
    return(t);
  }
  t = c_58(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  l_58 = t;
  i_58 :
  if(((ATgetType(l_58) == AT_LIST) && ((ATermList) l_58 != ATempty)))
    {
      j_58 = ATgetFirst((ATermList) l_58);
      k_58 = (ATerm) ATgetNext((ATermList) l_58);
      {
        ATerm o_58 = NULL;
        t = not_null(k_58);
        {
          ATerm k_23;
          k_23 = t;
          {
            ATerm p_58 = NULL,r_58 = NULL,v_58 = NULL;
            ATerm l_23;
            l_23 = t;
            {
              ATerm q_58 = NULL;
              t = i_0(t);
              {
                q_58 = t;
                if(((p_58 != NULL) && (p_58 != q_58)))
                  _fail(q_58);
                else
                  p_58 = q_58;
              }
            }
            t = l_23;
            {
              ATerm u_58 = NULL;
              t = not_null(j_58);
              {
                t = h_0(t);
                {
                  u_58 = t;
                  if(((r_58 != NULL) && (r_58 != u_58)))
                    _fail(u_58);
                  else
                    r_58 = u_58;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_58)), not_null(r_58));
                {
                  v_58 = t;
                  if(((o_58 != NULL) && (o_58 != v_58)))
                    _fail(v_58);
                  else
                    o_58 = v_58;
                }
              }
            }
          }
          t = k_23;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(o_58);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) l_58 == ATempty))
        {
          {
            t = term_a_8;
            t = i_0(t);
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm g_59 = NULL,h_59 = NULL;
  g_59 = t;
  f_59 :
  if(match_cons(g_59, sym_Program_1))
    {
      h_59 = ATgetArgument(g_59, 0);
      {
        ATerm k_59 = NULL,m_59 = NULL;
        ATerm l_59 = NULL;
        t = SSLgetAnnotations(not_null(g_59));
        {
          l_59 = t;
          if(((k_59 != NULL) && (k_59 != l_59)))
            _fail(l_59);
          else
            k_59 = l_59;
        }
        {
          t = not_null(h_59);
          {
            ATerm o_59 = NULL;
            t = s_58(t);
            {
              m_59 = t;
              {
                ATerm p_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_59)), not_null(k_59));
                {
                  p_59 = t;
                  if(((o_59 != NULL) && (o_59 != p_59)))
                    _fail(p_59);
                  else
                    o_59 = p_59;
                }
                t = not_null(o_59);
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
  ATerm y_59 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm z_59 = NULL;
      z_59 = t;
      if(((y_59 != NULL) && (y_59 != z_59)))
        _fail(z_59);
      else
        y_59 = z_59;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm a_60 = NULL;
      ATerm b_60 = NULL;
      t = term_a_8;
      {
        ATerm l_5 (ATerm t)
        {
          t = not_null(y_59);
          return(t);
        }
        t = short_description_1(t, l_5);
        {
          t = concat_strings_0(t);
          {
            b_60 = t;
            if(((a_60 != NULL) && (a_60 != b_60)))
              _fail(b_60);
            else
              a_60 = b_60;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATempty, not_null(a_60)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATempty, term_m_23));
      {
        t = printnl_0(t);
        {
          t = term_p_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm c_60 = NULL;
                  c_60 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_60)), term_q_23));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm e_60 = NULL;
                    ATerm f_60 = NULL;
                    t = term_a_8;
                    {
                      ATerm q_5 (ATerm t)
                      {
                        t = not_null(y_59);
                        return(t);
                      }
                      t = long_description_1(t, q_5);
                      {
                        t = concat_strings_0(t);
                        {
                          f_60 = t;
                          if(((e_60 != NULL) && (e_60 != f_60)))
                            _fail(f_60);
                          else
                            e_60 = f_60;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_60)), term_s_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_5);
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
ATerm Undefined_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm p_60 = NULL,q_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_Undefined_1))
    {
      q_60 = ATgetArgument(p_60, 0);
      {
        ATerm t_60 = NULL,v_60 = NULL;
        ATerm u_60 = NULL;
        t = SSLgetAnnotations(not_null(p_60));
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
        {
          t = not_null(q_60);
          {
            ATerm x_60 = NULL;
            t = t_58(t);
            {
              v_60 = t;
              {
                ATerm y_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_60)), not_null(t_60));
                {
                  y_60 = t;
                  if(((x_60 != NULL) && (x_60 != y_60)))
                    _fail(y_60);
                  else
                    x_60 = y_60;
                }
                t = not_null(x_60);
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
ATerm fetch_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm d_61 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_85, _id);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = Cons_2(t, _id, d_61);
      }
    return(t);
  }
  t = d_61(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_74 (ATerm))
{
  t = fetch_1(t, j_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_61 = NULL;
  i_61 = t;
  h_61 :
  if(match_cons(i_61, sym_Help_0))
    {
      ATerm k_61 = NULL,m_61 = NULL;
      ATerm v_23;
      v_23 = t;
      {
        ATerm l_61 = NULL;
        t = SSLgetAnnotations(not_null(i_61));
        {
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
        }
      }
      t = v_23;
      {
        ATerm n_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_61));
        {
          n_61 = t;
          if(((m_61 != NULL) && (m_61 != n_61)))
            _fail(n_61);
          else
            m_61 = n_61;
        }
        t = not_null(m_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm x_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_86(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = x_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym__2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      t = SSL_table_get(not_null(u_61), not_null(v_61));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym__3))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      f_62 = ATgetArgument(c_62, 2);
      {
        ATerm b_24;
        b_24 = t;
        {
          ATerm j_62 = NULL;
          ATerm k_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_62), not_null(e_62));
          {
            ATerm c_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_24);
              }
            else
              {
                t = c_24;
                t = (ATerm) ATempty;
              }
            {
              k_62 = t;
              if(((j_62 != NULL) && (j_62 != k_62)))
                _fail(k_62);
              else
                j_62 = k_62;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_62), not_null(e_62), (ATerm) ATinsert(CheckATermList(not_null(j_62)), not_null(f_62)));
            t = table_put_0(t);
          }
        }
        t = b_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm o_62 = NULL;
  ATerm p_62 = NULL;
  t = term_a_8;
  {
    t = p_73(t);
    {
      p_62 = t;
      if(((o_62 != NULL) && (o_62 != p_62)))
        _fail(p_62);
      else
        o_62 = p_62;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_23, term_o_23, not_null(o_62));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
  v_62 = t;
  u_62 :
  if(match_string(v_62, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_62) == AT_LIST) && ((ATermList) v_62 != ATempty)))
        {
          w_62 = ATgetFirst((ATermList) v_62);
          x_62 = (ATerm) ATgetNext((ATermList) v_62);
          {
            ATerm a_63 = NULL;
            ATerm f_24;
            f_24 = t;
            {
              t = not_null(w_62);
              t = c_0(t);
            }
            t = f_24;
            {
              ATerm b_63 = NULL;
              t = term_a_8;
              {
                t = d_0(t);
                {
                  b_63 = t;
                  if(((a_63 != NULL) && (a_63 != b_63)))
                    _fail(b_63);
                  else
                    a_63 = b_63;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_62)), not_null(a_63));
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
  ATerm r_5 (ATerm t)
  {
    ATerm g_63 = NULL;
    g_63 = t;
    f_63 :
    if(!(match_string(g_63, "--help")))
      {
        if(!(match_string(g_63, "-h")))
          {
            if(!(match_string(g_63, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  t = Option_3(t, r_5, s_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  i_63 :
  if(((ATgetType(j_63) == AT_LIST) && ((ATermList) j_63 != ATempty)))
    {
      k_63 = ATgetFirst((ATermList) j_63);
      l_63 = (ATerm) ATgetNext((ATermList) j_63);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_63)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_63)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  u_63 :
  if(((ATgetType(v_63) == AT_LIST) && ((ATermList) v_63 != ATempty)))
    {
      w_63 = ATgetFirst((ATermList) v_63);
      x_63 = (ATerm) ATgetNext((ATermList) v_63);
      {
        ATerm b_64 = NULL,d_64 = NULL;
        ATerm c_64 = NULL;
        t = SSLgetAnnotations(not_null(v_63));
        {
          c_64 = t;
          if(((b_64 != NULL) && (b_64 != c_64)))
            _fail(c_64);
          else
            b_64 = c_64;
        }
        {
          t = not_null(w_63);
          {
            ATerm f_64 = NULL;
            t = j_65(t);
            {
              d_64 = t;
              {
                t = not_null(x_63);
                {
                  ATerm h_64 = NULL;
                  t = k_65(t);
                  {
                    f_64 = t;
                    {
                      ATerm i_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_64)), not_null(d_64)), not_null(b_64));
                      {
                        i_64 = t;
                        if(((h_64 != NULL) && (h_64 != i_64)))
                          _fail(i_64);
                        else
                          h_64 = i_64;
                      }
                      t = not_null(h_64);
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
  ATerm s_64 = NULL;
  s_64 = t;
  r_64 :
  if(((ATermList) s_64 == ATempty))
    {
      {
        ATerm u_64 = NULL,w_64 = NULL;
        ATerm j_24;
        j_24 = t;
        {
          ATerm v_64 = NULL;
          t = SSLgetAnnotations(not_null(s_64));
          {
            v_64 = t;
            if(((u_64 != NULL) && (u_64 != v_64)))
              _fail(v_64);
            else
              u_64 = v_64;
          }
        }
        t = j_24;
        {
          ATerm x_64 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_64));
          {
            x_64 = t;
            if(((w_64 != NULL) && (w_64 != x_64)))
              _fail(x_64);
            else
              w_64 = x_64;
          }
          t = not_null(w_64);
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
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  c_65 :
  if(match_cons(d_65, sym__2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_17, not_null(e_65), not_null(f_65));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm k_24;
  k_24 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_l_24;
      t = n_73(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = k_24;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm s_65 = NULL;
      ATerm m_24;
      m_24 = t;
      {
        ATerm n_65 = NULL;
        ATerm o_65 = NULL;
        o_65 = t;
        if(((n_65 != NULL) && (n_65 != o_65)))
          _fail(o_65);
        else
          n_65 = o_65;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_18, not_null(n_65));
          t = set_config_0(t);
        }
      }
      t = m_24;
      {
        ATerm t_65 = NULL;
        t_65 = t;
        if(((s_65 != NULL) && (s_65 != t_65)))
          _fail(t_65);
        else
          s_65 = t_65;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_65));
      }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm n_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                t = n_73(t);
                t = Cons_2(t, _id, e_6);
              }
            }
          LocalPopChoice(p_24);
        }
      else
        {
          t = n_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_6, e_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
    d_66 = t;
    z_65 :
    if(match_cons(d_66, sym__3))
      {
        e_66 = ATgetArgument(d_66, 0);
        f_66 = ATgetArgument(d_66, 1);
        g_66 = ATgetArgument(d_66, 2);
        {
          if(((a_66 != NULL) && (a_66 != e_66)))
            _fail(e_66);
          else
            a_66 = e_66;
          {
            if(((b_66 != NULL) && (b_66 != f_66)))
              _fail(f_66);
            else
              b_66 = f_66;
            {
              if(((c_66 != NULL) && (c_66 != g_66)))
                _fail(g_66);
              else
                c_66 = g_66;
              t = SSL_table_put(not_null(a_66), not_null(b_66), not_null(c_66));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm j_66 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    t = term_y_24;
    t = table_put_0(t);
  }
  t = x_24;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_73(t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_6);
    {
      ATerm g_6 (ATerm t)
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_n_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm k_66 = NULL;
                  k_66 = t;
                  if(((j_66 != NULL) && (j_66 != k_66)))
                    _fail(k_66);
                  else
                    j_66 = k_66;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm k_25;
                k_25 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_66)), term_l_25));
                  t = printnl_0(t);
                }
                t = k_25;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_6);
      {
        ATerm m_25;
        m_25 = t;
        {
          t = term_n_23;
          t = table_destroy_0(t);
        }
        t = m_25;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_6);
  {
    t = store_options_0(t);
    {
      t = s_91(t);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_91);
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            {
              ATerm r_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, p_91);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = r_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      ATerm y_25;
      y_25 = t;
      {
        ATerm n_66 = NULL;
        ATerm o_66 = NULL;
        t = term_o_18;
        {
          t = get_config_0(t);
          {
            o_66 = t;
            if(((n_66 != NULL) && (n_66 != o_66)))
              _fail(o_66);
            else
              n_66 = o_66;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATempty, not_null(n_66)));
          t = printnl_0(t);
        }
      }
      t = y_25;
      return(t);
    }
    t = if_verbose2_1(t, t_6);
    return(t);
  }
  t = iowrap_4(t, j_91, k_91, l_91, s_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_91 (ATerm), ATerm i_91 (ATerm))
{
  t = iowrap_3(t, h_91, i_91, default_usage_0);
  return(t);
}
ATerm Ast_2_abox_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 (ATerm t)
        {
          ATerm t_66 = NULL;
          t_66 = t;
          q_66 :
          if(!(match_string(t_66, "-v")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_6 (ATerm t)
        {
          t = term_u_15;
          return(t);
        }
        t = Option_2(t, y_6, z_6);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm c_7 (ATerm t)
          {
            ATerm u_66 = NULL;
            u_66 = t;
            r_66 :
            if(!(match_string(u_66, "-p")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm d_7 (ATerm t)
          {
            ATerm v_66 = NULL;
            v_66 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(v_66));
            return(t);
          }
          ATerm f_7 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = ArgOption_3(t, c_7, d_7, f_7);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, u_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast_2_abox_0(t);
  return(t);
}

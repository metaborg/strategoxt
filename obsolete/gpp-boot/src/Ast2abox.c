#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_atr_1;
Symbol sym_cons_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
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
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
    ATprotectSymbol(sym_layout_0);
  }
  {
    sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
    ATprotectSymbol(sym_cf_1);
  }
  {
    sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
    ATprotectSymbol(sym_lex_1);
  }
  {
    sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
    ATprotectSymbol(sym_opt_1);
  }
  {
    sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
    ATprotectSymbol(sym_seq_1);
  }
  {
    sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
    ATprotectSymbol(sym_lit_1);
  }
  {
    sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
    ATprotectSymbol(sym_iter_sep_2);
  }
  {
    sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
    ATprotectSymbol(sym_iter_star_sep_2);
  }
  {
    sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
    ATprotectSymbol(sym_iter_1);
  }
  {
    sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
    ATprotectSymbol(sym_iter_star_1);
  }
  {
    sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
    ATprotectSymbol(sym_alt_2);
  }
  {
    sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
    ATprotectSymbol(sym_char_class_1);
  }
  {
    sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
    ATprotectSymbol(sym_sort_1);
  }
  {
    sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
    ATprotectSymbol(sym_atr_1);
  }
  {
    sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
    ATprotectSymbol(sym_cons_1);
  }
  {
    sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
    ATprotectSymbol(sym_no_attrs_0);
  }
  {
    sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
    ATprotectSymbol(sym_attrs_1);
  }
  {
    sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
    ATprotectSymbol(sym_prod_3);
  }
  {
    sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
    ATprotectSymbol(sym_appl_2);
  }
  {
    sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
    ATprotectSymbol(sym_amb_1);
  }
  {
    sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
    ATprotectSymbol(sym_flatlex_2);
  }
  {
    sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
    ATprotectSymbol(sym_parsetree_2);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
    ATprotectSymbol(sym_SOpt_2);
  }
  {
    sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
    ATprotectSymbol(sym_SOptB_2);
  }
  {
    sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
    ATprotectSymbol(sym_VS_0);
  }
  {
    sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
    ATprotectSymbol(sym_HS_0);
  }
  {
    sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
    ATprotectSymbol(sym_IS_0);
  }
  {
    sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
    ATprotectSymbol(sym_H_2);
  }
  {
    sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
    ATprotectSymbol(sym_V_2);
  }
  {
    sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
    ATprotectSymbol(sym_HV_2);
  }
  {
    sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
    ATprotectSymbol(sym_ALT_2);
  }
  {
    sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
    ATprotectSymbol(sym_A_3);
  }
  {
    sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
    ATprotectSymbol(sym_R_2);
  }
  {
    sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
    ATprotectSymbol(sym_AL_1);
  }
  {
    sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
    ATprotectSymbol(sym_AC_1);
  }
  {
    sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
    ATprotectSymbol(sym_AR_1);
  }
  {
    sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
    ATprotectSymbol(sym_AOPTIONS_1);
  }
  {
    sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
    ATprotectSymbol(sym_FNAT_2);
  }
  {
    sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
    ATprotectSymbol(sym_FFID_2);
  }
  {
    sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
    ATprotectSymbol(sym_F_1);
  }
  {
    sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
    ATprotectSymbol(sym_FBOX_2);
  }
  {
    sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
    ATprotectSymbol(sym_FN_0);
  }
  {
    sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
    ATprotectSymbol(sym_FM_0);
  }
  {
    sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
    ATprotectSymbol(sym_SE_0);
  }
  {
    sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
    ATprotectSymbol(sym_SH_0);
  }
  {
    sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
    ATprotectSymbol(sym_SZ_0);
  }
  {
    sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
    ATprotectSymbol(sym_CL_0);
  }
  {
    sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
    ATprotectSymbol(sym_KW_0);
  }
  {
    sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
    ATprotectSymbol(sym_VAR_0);
  }
  {
    sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
    ATprotectSymbol(sym_NUM_0);
  }
  {
    sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
    ATprotectSymbol(sym_MATH_0);
  }
  {
    sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
    ATprotectSymbol(sym_LBL_2);
  }
  {
    sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
    ATprotectSymbol(sym_REF_2);
  }
  {
    sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
    ATprotectSymbol(sym_C_2);
  }
  {
    sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
    ATprotectSymbol(sym_L_2);
  }
  {
    sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
    ATprotectSymbol(sym_LNAT_2);
  }
  {
    sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
    ATprotectSymbol(sym_S_1);
  }
  {
    sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
    ATprotectSymbol(sym_Arg_1);
  }
  {
    sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
    ATprotectSymbol(sym_Arg2_2);
  }
  {
    sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
    ATprotectSymbol(sym_PP_Table_1);
  }
  {
    sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
    ATprotectSymbol(sym_selector_2);
  }
  {
    sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
    ATprotectSymbol(sym_Path1_1);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
    ATprotectSymbol(sym_PP_Entry_2);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
    ATprotectSymbol(sym_Strict_0);
  }
  {
    sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
    ATprotectSymbol(sym_SOpt_2);
  }
  {
    sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
    ATprotectSymbol(sym_SOptB_2);
  }
  {
    sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
    ATprotectSymbol(sym_VS_0);
  }
  {
    sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
    ATprotectSymbol(sym_HS_0);
  }
  {
    sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
    ATprotectSymbol(sym_IS_0);
  }
  {
    sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
    ATprotectSymbol(sym_H_2);
  }
  {
    sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
    ATprotectSymbol(sym_V_2);
  }
  {
    sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
    ATprotectSymbol(sym_HV_2);
  }
  {
    sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
    ATprotectSymbol(sym_ALT_2);
  }
  {
    sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
    ATprotectSymbol(sym_A_3);
  }
  {
    sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
    ATprotectSymbol(sym_R_2);
  }
  {
    sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
    ATprotectSymbol(sym_AL_1);
  }
  {
    sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
    ATprotectSymbol(sym_AC_1);
  }
  {
    sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
    ATprotectSymbol(sym_AR_1);
  }
  {
    sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
    ATprotectSymbol(sym_AOPTIONS_1);
  }
  {
    sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
    ATprotectSymbol(sym_FNAT_2);
  }
  {
    sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
    ATprotectSymbol(sym_FFID_2);
  }
  {
    sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
    ATprotectSymbol(sym_F_1);
  }
  {
    sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
    ATprotectSymbol(sym_FBOX_2);
  }
  {
    sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
    ATprotectSymbol(sym_FN_0);
  }
  {
    sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
    ATprotectSymbol(sym_FM_0);
  }
  {
    sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
    ATprotectSymbol(sym_SE_0);
  }
  {
    sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
    ATprotectSymbol(sym_SH_0);
  }
  {
    sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
    ATprotectSymbol(sym_SZ_0);
  }
  {
    sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
    ATprotectSymbol(sym_CL_0);
  }
  {
    sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
    ATprotectSymbol(sym_KW_0);
  }
  {
    sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
    ATprotectSymbol(sym_VAR_0);
  }
  {
    sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
    ATprotectSymbol(sym_NUM_0);
  }
  {
    sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
    ATprotectSymbol(sym_MATH_0);
  }
  {
    sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
    ATprotectSymbol(sym_LBL_2);
  }
  {
    sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
    ATprotectSymbol(sym_REF_2);
  }
  {
    sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
    ATprotectSymbol(sym_C_2);
  }
  {
    sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
    ATprotectSymbol(sym_L_2);
  }
  {
    sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
    ATprotectSymbol(sym_LNAT_2);
  }
  {
    sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
    ATprotectSymbol(sym_S_1);
  }
  {
    sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
    ATprotectSymbol(sym_Arg_1);
  }
  {
    sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
    ATprotectSymbol(sym_Arg2_2);
  }
  {
    sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
    ATprotectSymbol(sym_PP_Table_1);
  }
  {
    sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
    ATprotectSymbol(sym_selector_2);
  }
  {
    sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
    ATprotectSymbol(sym_Path1_1);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
    ATprotectSymbol(sym_PP_Entry_2);
  }
  {
    sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
    ATprotectSymbol(sym_PP_Table_1);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Option_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm is_list_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm k_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm s_66 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_56 (ATerm));
ATerm index_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm f_54 (ATerm));
ATerm length_0 (ATerm);
ATerm S_1 (ATerm, ATerm j_0 (ATerm));
ATerm collect_p__1 (ATerm, ATerm k_49 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm y_71 (ATerm));
ATerm TupleToList_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm k_63 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm j_65 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_66 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_68 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm d_71 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm n_71 (ATerm));
ATerm termid_check_1 (ATerm, ATerm u_71 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_60 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm crush_3 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm collect_om_1 (ATerm, ATerm l_61 (ATerm));
ATerm collect_1 (ATerm, ATerm n_61 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm l_38 (ATerm), ATerm m_38 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_64 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_54 (ATerm));
ATerm map_1 (ATerm, ATerm l_64 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_54 (ATerm));
ATerm Program_1 (ATerm, ATerm b_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_54 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_54 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm Ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  o_1 = t;
  m_1 :
  if(match_string(o_1, "register-usage-info"))
    t = register_usage_1(t, n_0);
  else
    {
      if(((ATgetType(o_1) == AT_LIST) && ((ATermList) o_1 != ATempty)))
        {
          p_1 = ATgetFirst((ATermList) o_1);
          q_1 = (ATerm) ATgetNext((ATermList) o_1);
          n_1 :
          if(((ATgetType(q_1) == AT_LIST) && ((ATermList) q_1 != ATempty)))
            {
              r_1 = ATgetFirst((ATermList) q_1);
              s_1 = (ATerm) ATgetNext((ATermList) q_1);
              {
                ATerm w_1 = NULL;
                ATerm s_2;
                s_2 = t;
                {
                  t = not_null(p_1);
                  t = l_0(t);
                }
                t = s_2;
                {
                  ATerm x_1 = NULL;
                  t = not_null(r_1);
                  {
                    t = m_0(t);
                    {
                      x_1 = t;
                      if(((w_1 != NULL) && (w_1 != x_1)))
                        _fail(x_1);
                      else
                        w_1 = x_1;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_1)), not_null(w_1));
                }
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
ATerm Option_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, q_54, r_54, a_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  c_2 = t;
  b_2 :
  if(((ATermList) c_2 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_2) == AT_LIST) && ((ATermList) c_2 != ATempty)))
        {
          d_2 = ATgetFirst((ATermList) c_2);
          e_2 = (ATerm) ATgetNext((ATermList) c_2);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  t = SSL_is_string(not_null(g_2));
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  ATerm f_8 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = f_8;
      {
        ATerm g_8 = t;
        if((PushChoice() == 0))
          {
            ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
            ATerm u_2 (ATerm t)
            {
              if(((n_2 != NULL) && (n_2 != q_2)))
                _fail(q_2);
              else
                n_2 = q_2;
              {
                if(((o_2 != NULL) && (o_2 != r_2)))
                  _fail(r_2);
                else
                  o_2 = r_2;
                {
                  t = not_null(n_2);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_2), not_null(o_2));
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
            p_2 = t;
            l_2 :
            if(((ATgetType(p_2) == AT_LIST) && ((ATermList) p_2 != ATempty)))
              {
                q_2 = ATgetFirst((ATermList) p_2);
                r_2 = (ATerm) ATgetNext((ATermList) p_2);
                m_2 :
                if(((ATermList) q_2 == ATempty))
                  {
                    {
                      ATerm h_8 = t;
                      if((PushChoice() == 0))
                        {
                          if(((o_2 != NULL) && (o_2 != r_2)))
                            _fail(r_2);
                          else
                            o_2 = r_2;
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(o_2);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, b_0);
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = h_8;
                          t = u_2(t);
                        }
                    }
                  }
                else
                  t = u_2(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = g_8;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  e_3 = t;
  c_3 :
  if(match_cons(e_3, sym_Arg2_2))
    {
      f_3 = ATgetArgument(e_3, 0);
      d_3 = ATgetArgument(e_3, 1);
      {
        ATerm i_3 = NULL,j_3 = NULL;
        ATerm k_3 = NULL,m_3 = NULL;
        ATerm l_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__0);
        {
          t = k_0(t);
          {
            l_3 = t;
            if(((k_3 != NULL) && (k_3 != l_3)))
              _fail(l_3);
            else
              k_3 = l_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(k_3));
          {
            ATerm n_3 = NULL;
            t = index_0(t);
            {
              m_3 = t;
              {
                if(((i_3 != NULL) && (i_3 != m_3)))
                  _fail(m_3);
                else
                  i_3 = m_3;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(i_3));
                  {
                    t = index_0(t);
                    {
                      n_3 = t;
                      if(((j_3 != NULL) && (j_3 != n_3)))
                        _fail(n_3);
                      else
                        j_3 = n_3;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(j_3);
      }
    }
  else
    {
      if(match_cons(e_3, sym_Arg_1))
        {
          f_3 = ATgetArgument(e_3, 0);
          {
            ATerm p_3 = NULL;
            ATerm q_3 = NULL,s_3 = NULL;
            ATerm r_3 = NULL;
            t = (ATerm) ATmakeAppl(sym__0);
            {
              t = k_0(t);
              {
                r_3 = t;
                if(((q_3 != NULL) && (q_3 != r_3)))
                  _fail(r_3);
                else
                  q_3 = r_3;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(q_3));
              {
                t = index_0(t);
                {
                  s_3 = t;
                  if(((p_3 != NULL) && (p_3 != s_3)))
                    _fail(s_3);
                  else
                    p_3 = s_3;
                }
              }
            }
            t = not_null(p_3);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    t = _all(t, a_4);
    t = s_66(t);
    return(t);
  }
  t = a_4(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      {
        ATerm j_4 = NULL;
        ATerm k_4 = NULL;
        t = not_null(f_4);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm o_0 (ATerm t)
            {
              ATerm i_8 = t;
              if((PushChoice() == 0))
                {
                  ATerm p_0 (ATerm t)
                  {
                    t = not_null(g_4);
                    return(t);
                  }
                  t = Instantiate_1(t, p_0);
                  PopChoice();
                }
              else
                {
                  t = i_8;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, o_0);
            return(t);
          }
          t = bottomup_1(t, c_0);
          {
            k_4 = t;
            if(((j_4 != NULL) && (j_4 != k_4)))
              _fail(k_4);
            else
              j_4 = k_4;
          }
        }
        t = not_null(j_4);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Ind1_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  r_4 = t;
  o_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      p_4 :
      if(match_int(s_4, 1))
        {
          q_4 :
          if(((ATgetType(t_4) == AT_LIST) && ((ATermList) t_4 != ATempty)))
            {
              u_4 = ATgetFirst((ATermList) t_4);
              v_4 = (ATerm) ATgetNext((ATermList) t_4);
              t = not_null(u_4);
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
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm l_8 = t;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(c_5), not_null(d_5));
            PopChoice();
          }
        else
          {
            t = l_8;
            t = SSL_subtr(not_null(c_5), not_null(d_5));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm n_8;
        n_8 = t;
        {
          ATerm o_8 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_5), not_null(l_5));
              PopChoice();
            }
          else
            {
              t = o_8;
              t = SSL_gtr(not_null(k_5), not_null(l_5));
            }
        }
        t = n_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm p_8 = t;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
      s_5 = t;
      q_5 :
      if(match_cons(s_5, sym__2))
        {
          t_5 = ATgetArgument(s_5, 0);
          u_5 = ATgetArgument(s_5, 1);
          {
            if(((r_5 != NULL) && (r_5 != t_5)))
              _fail(t_5);
            else
              r_5 = t_5;
            if(((r_5 != NULL) && (r_5 != u_5)))
              _fail(u_5);
            else
              r_5 = u_5;
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = p_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  a_6 = t;
  y_5 :
  if(match_cons(a_6, sym__2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      z_5 :
      if(((ATgetType(c_6) == AT_LIST) && ((ATermList) c_6 != ATempty)))
        {
          d_6 = ATgetFirst((ATermList) c_6);
          e_6 = (ATerm) ATgetNext((ATermList) c_6);
          {
            ATerm i_6 = NULL;
            ATerm q_8;
            q_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), (ATerm) ATmakeInt(2));
              t = geq_0(t);
            }
            t = q_8;
            {
              ATerm j_6 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), (ATerm) ATmakeInt(1));
              {
                t = subt_0(t);
                {
                  j_6 = t;
                  if(((i_6 != NULL) && (i_6 != j_6)))
                    _fail(j_6);
                  else
                    i_6 = j_6;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_6), not_null(e_6));
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm r_8 = t;
    if((PushChoice() == 0))
      {
        t = s_56(t);
        t = m_6(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        t = t_56(t);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_56 (ATerm))
{
  t = repeat_2(t, v_56, _id);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
    ATerm s_8 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_8;
        {
          ATerm x_8 = t;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              PopChoice();
            }
          else
            {
              t = x_8;
              {
                ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
                u_6 = t;
                p_6 :
                if(((ATgetType(u_6) == AT_LIST) && ((ATermList) u_6 != ATempty)))
                  {
                    v_6 = ATgetFirst((ATermList) u_6);
                    w_6 = (ATerm) ATgetNext((ATermList) u_6);
                    q_6 :
                    if(((ATgetType(w_6) == AT_LIST) && ((ATermList) w_6 != ATempty)))
                      {
                        x_6 = ATgetFirst((ATermList) w_6);
                        y_6 = (ATerm) ATgetNext((ATermList) w_6);
                        {
                          if(((r_6 != NULL) && (r_6 != v_6)))
                            _fail(v_6);
                          else
                            r_6 = v_6;
                          {
                            if(((s_6 != NULL) && (s_6 != x_6)))
                              _fail(x_6);
                            else
                              s_6 = x_6;
                            {
                              if(((t_6 != NULL) && (t_6 != y_6)))
                                _fail(y_6);
                              else
                                t_6 = y_6;
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  ATerm z_6 = NULL;
                                  ATerm a_7 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__0);
                                  {
                                    t = f_54(t);
                                    {
                                      a_7 = t;
                                      if(((z_6 != NULL) && (z_6 != a_7)))
                                        _fail(a_7);
                                      else
                                        z_6 = a_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_6)), not_null(r_6)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm r_0 (ATerm t)
                                {
                                  t = not_null(t_6);
                                  t = b_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, q_0, r_0);
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
            }
        }
      }
    return(t);
  }
  t = b_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, s_0, add_0, t_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_S_1))
    {
      k_7 = ATgetArgument(j_7, 0);
      {
        ATerm y_8 = t;
        if((PushChoice() == 0))
          {
            ATerm m_7 = NULL;
            t = not_null(k_7);
            {
              t = j_0(t);
              {
                m_7 = t;
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(m_7));
              }
            }
            PopChoice();
          }
        else
          {
            t = y_8;
            {
              ATerm p_7 = NULL;
              t = not_null(k_7);
              {
                t = j_0(t);
                {
                  p_7 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(p_7));
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
ATerm collect_p__1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm y_7 (ATerm t)
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = k_49(t);
        {
          w_7 = t;
          t = (ATerm) ATinsert(ATempty, not_null(w_7));
        }
        PopChoice();
      }
    else
      {
        t = g_9;
        {
          ATerm u_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, u_0, conc_0, y_7);
        }
      }
    return(t);
  }
  t = y_7(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      t = SSL_mod(not_null(d_8), not_null(e_8));
    }
  else
    _fail(t);
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm k_8 = NULL;
  ATerm m_8 = NULL;
  k_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), (ATerm) ATmakeInt(2));
    {
      t = mod_0(t);
      {
        m_8 = t;
        j_8 :
        if(!(match_int(m_8, 0)))
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm z_8 = NULL;
        ATerm h_9 = t;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL,c_9 = NULL;
            t = not_null(v_8);
            {
              t = even_0(t);
              {
                ATerm b_9 = NULL;
                t = (ATerm) ATmakeAppl(sym__0);
                {
                  t = y_71(t);
                  {
                    b_9 = t;
                    if(((a_9 != NULL) && (a_9 != b_9)))
                      _fail(b_9);
                    else
                      a_9 = b_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeInt(2), not_null(a_9), not_null(w_8));
                  {
                    t = arg2abox_0(t);
                    {
                      c_9 = t;
                      if(((z_8 != NULL) && (z_8 != c_9)))
                        _fail(c_9);
                      else
                        z_8 = c_9;
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = h_9;
            {
              ATerm d_9 = NULL,f_9 = NULL;
              ATerm e_9 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = y_71(t);
                {
                  e_9 = t;
                  if(((d_9 != NULL) && (d_9 != e_9)))
                    _fail(e_9);
                  else
                    d_9 = e_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeInt(1), not_null(d_9), not_null(w_8));
                {
                  t = arg2abox_0(t);
                  {
                    f_9 = t;
                    if(((z_8 != NULL) && (z_8 != f_9)))
                      _fail(f_9);
                    else
                      z_8 = f_9;
                  }
                }
              }
            }
          }
        t = not_null(z_8);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TupleToList_0 (ATerm t)
{
  ATerm q_9 = NULL;
  ATerm s_9 = NULL;
  q_9 = t;
  {
    ATerm t_9 = NULL;
    ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
    t = not_null(q_9);
    {
      t_9 = t;
      {
        t = SSL_explode_term(not_null(t_9));
        {
          v_9 = t;
          o_9 :
          if(match_cons(v_9, sym__2))
            {
              w_9 = ATgetArgument(v_9, 0);
              x_9 = ATgetArgument(v_9, 1);
              p_9 :
              if(match_string(w_9, ""))
                {
                  if(((s_9 != NULL) && (s_9 != x_9)))
                    _fail(x_9);
                  else
                    s_9 = x_9;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(s_9);
  }
  return(t);
}
ATerm tuple2list_0 (ATerm t)
{
  t = TupleToList_0(t);
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm i_9 = t;
  if((PushChoice() == 0))
    {
      ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
      t_11 = t;
      g_10 :
      if(match_cons(t_11, sym__4))
        {
          u_11 = ATgetArgument(t_11, 0);
          v_11 = ATgetArgument(t_11, 1);
          w_11 = ATgetArgument(t_11, 2);
          x_11 = ATgetArgument(t_11, 3);
          h_10 :
          if(match_string(u_11, "seq"))
            {
              ATerm k_12 = NULL;
              t = not_null(x_11);
              {
                t = tuple2list_0(t);
                {
                  ATerm v_0 (ATerm t)
                  {
                    ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
                    b_12 = t;
                    e_10 :
                    if(match_cons(b_12, sym__2))
                      {
                        c_12 = ATgetArgument(b_12, 0);
                        d_12 = ATgetArgument(b_12, 1);
                        {
                          ATerm g_12 = NULL;
                          ATerm h_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__3, not_null(c_12), not_null(v_11), not_null(d_12));
                          {
                            t = arg2abox_0(t);
                            {
                              h_12 = t;
                              if(((g_12 != NULL) && (g_12 != h_12)))
                                _fail(h_12);
                              else
                                g_12 = h_12;
                            }
                          }
                          t = not_null(g_12);
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = nzip_1(t, v_0);
                  {
                    k_12 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(k_12));
                      t = instantiate_0(t);
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
      PopChoice();
    }
  else
    {
      t = i_9;
      {
        ATerm j_9 = t;
        if((PushChoice() == 0))
          {
            ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
            r_12 = t;
            k_10 :
            if(match_cons(r_12, sym__4))
              {
                s_12 = ATgetArgument(r_12, 0);
                t_12 = ATgetArgument(r_12, 1);
                u_12 = ATgetArgument(r_12, 2);
                v_12 = ATgetArgument(r_12, 3);
                l_10 :
                if(match_string(s_12, "iter-sep"))
                  {
                    if(((o_12 != NULL) && (o_12 != t_12)))
                      _fail(t_12);
                    else
                      o_12 = t_12;
                    {
                      if(((p_12 != NULL) && (p_12 != u_12)))
                        _fail(u_12);
                      else
                        p_12 = u_12;
                      if(((q_12 != NULL) && (q_12 != v_12)))
                        _fail(v_12);
                      else
                        q_12 = v_12;
                    }
                  }
                else
                  {
                    if(match_string(s_12, "iter-star-sep"))
                      {
                        if(((o_12 != NULL) && (o_12 != t_12)))
                          _fail(t_12);
                        else
                          o_12 = t_12;
                        {
                          if(((p_12 != NULL) && (p_12 != u_12)))
                            _fail(u_12);
                          else
                            p_12 = u_12;
                          if(((q_12 != NULL) && (q_12 != v_12)))
                            _fail(v_12);
                          else
                            q_12 = v_12;
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            else
              _fail(t);
            {
              t = not_null(q_12);
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm x_0 (ATerm t)
                  {
                    t = not_null(o_12);
                    return(t);
                  }
                  t = BuildSepList_1(t, x_0);
                  return(t);
                }
                t = nzip_1(t, w_0);
                {
                  w_12 = t;
                  {
                    ATerm k_9 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm y_12 = NULL;
                        t = not_null(p_12);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            t = S_1(t, _id);
                            return(t);
                          }
                          t = collect_p__1(t, y_0);
                          {
                            t = length_0(t);
                            {
                              y_12 = t;
                              u_10 :
                              if(match_int(y_12, 1))
                                {
                                  t = not_null(w_12);
                                  {
                                    ATerm a_16 (ATerm t)
                                    {
                                      ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
                                      ATerm d_16 (ATerm t)
                                      {
                                        ATerm i_13 = NULL;
                                        ATerm j_13 = NULL;
                                        t = not_null(b_13);
                                        {
                                          t = a_16(t);
                                          {
                                            j_13 = t;
                                            if(((i_13 != NULL) && (i_13 != j_13)))
                                              _fail(j_13);
                                            else
                                              i_13 = j_13;
                                          }
                                        }
                                        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_13)), not_null(a_13)), not_null(a_13));
                                        return(t);
                                      }
                                      z_12 = t;
                                      s_10 :
                                      if(((ATermList) z_12 == ATempty))
                                        {
                                          t = (ATerm) ATempty;
                                        }
                                      else
                                        {
                                          if(((ATgetType(z_12) == AT_LIST) && ((ATermList) z_12 != ATempty)))
                                            {
                                              a_13 = ATgetFirst((ATermList) z_12);
                                              b_13 = (ATerm) ATgetNext((ATermList) z_12);
                                              t_10 :
                                              if(((ATermList) b_13 == ATempty))
                                                {
                                                  {
                                                    ATerm l_9 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = l_9;
                                                        t = d_16(t);
                                                      }
                                                  }
                                                }
                                              else
                                                t = d_16(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    t = a_16(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = k_9;
                        t = not_null(w_12);
                      }
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(p_12);
                        return(t);
                      }
                      t = instantiate_sep_list_1(t, z_0);
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = j_9;
            {
              ATerm m_9 = t;
              if((PushChoice() == 0))
                {
                  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,x_13 = NULL;
                  n_13 = t;
                  x_10 :
                  if(match_cons(n_13, sym__4))
                    {
                      o_13 = ATgetArgument(n_13, 0);
                      p_13 = ATgetArgument(n_13, 1);
                      q_13 = ATgetArgument(n_13, 2);
                      r_13 = ATgetArgument(n_13, 3);
                      y_10 :
                      if(match_string(o_13, "iter"))
                        {
                          if(((k_13 != NULL) && (k_13 != p_13)))
                            _fail(p_13);
                          else
                            k_13 = p_13;
                          {
                            if(((l_13 != NULL) && (l_13 != q_13)))
                              _fail(q_13);
                            else
                              l_13 = q_13;
                            if(((m_13 != NULL) && (m_13 != r_13)))
                              _fail(r_13);
                            else
                              m_13 = r_13;
                          }
                        }
                      else
                        {
                          if(match_string(o_13, "iter-star"))
                            {
                              if(((k_13 != NULL) && (k_13 != p_13)))
                                _fail(p_13);
                              else
                                k_13 = p_13;
                              {
                                if(((l_13 != NULL) && (l_13 != q_13)))
                                  _fail(q_13);
                                else
                                  l_13 = q_13;
                                if(((m_13 != NULL) && (m_13 != r_13)))
                                  _fail(r_13);
                                else
                                  m_13 = r_13;
                              }
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    _fail(t);
                  {
                    t = not_null(m_13);
                    {
                      ATerm a_1 (ATerm t)
                      {
                        ATerm s_13 = NULL;
                        ATerm u_13 = NULL;
                        s_13 = t;
                        {
                          ATerm v_13 = NULL;
                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeInt(1), not_null(k_13), not_null(s_13));
                          {
                            t = arg2abox_0(t);
                            {
                              v_13 = t;
                              if(((u_13 != NULL) && (u_13 != v_13)))
                                _fail(v_13);
                              else
                                u_13 = v_13;
                            }
                          }
                          t = not_null(u_13);
                        }
                        return(t);
                      }
                      t = map_1(t, a_1);
                      {
                        x_13 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), (ATerm) ATinsert(ATempty, not_null(x_13)));
                          t = instantiate_0(t);
                        }
                      }
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = m_9;
                  {
                    ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,r_14 = NULL;
                    i_14 = t;
                    p_11 :
                    if(match_cons(i_14, sym__4))
                      {
                        j_14 = ATgetArgument(i_14, 0);
                        k_14 = ATgetArgument(i_14, 1);
                        l_14 = ATgetArgument(i_14, 2);
                        m_14 = ATgetArgument(i_14, 3);
                        q_11 :
                        if(match_cons(m_14, sym_None_0))
                          t = (ATerm) ATempty;
                        else
                          {
                            if(match_cons(m_14, sym_Some_1))
                              {
                                n_14 = ATgetArgument(m_14, 0);
                                {
                                  ATerm z_14 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(1)));
                                  {
                                    ATerm b_15 = NULL;
                                    t = conc_0(t);
                                    {
                                      z_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeInt(1), not_null(k_14), not_null(n_14));
                                        {
                                          t = arg2abox_0(t);
                                          {
                                            b_15 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), (ATerm) ATinsert(ATempty, not_null(b_15)));
                                              t = instantiate_0(t);
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
                                if(match_cons(m_14, sym_alt_2))
                                  {
                                    n_14 = ATgetArgument(m_14, 0);
                                    r_14 = ATgetArgument(m_14, 1);
                                    r_11 :
                                    if(((ATgetType(r_14) == AT_LIST) && ((ATermList) r_14 != ATempty)))
                                      {
                                        g_14 = ATgetFirst((ATermList) r_14);
                                        h_14 = (ATerm) ATgetNext((ATermList) r_14);
                                        s_11 :
                                        if(((ATermList) h_14 == ATempty))
                                          {
                                            {
                                              ATerm i_15 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, not_null(n_14), not_null(k_14), not_null(g_14));
                                              {
                                                ATerm k_15 = NULL;
                                                t = arg2abox_0(t);
                                                {
                                                  i_15 = t;
                                                  {
                                                    ATerm l_15 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(l_14));
                                                    {
                                                      t = index_0(t);
                                                      {
                                                        l_15 = t;
                                                        if(((k_15 != NULL) && (k_15 != l_15)))
                                                          _fail(l_15);
                                                        else
                                                          k_15 = l_15;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(k_15)), (ATerm) ATinsert(ATempty, not_null(i_15)));
                                                      t = instantiate_0(t);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        else
                                          _fail(t);
                                      }
                                    else
                                      {
                                        if(((ATermList) r_14 == ATempty))
                                          {
                                            {
                                              ATerm q_15 = NULL;
                                              ATerm r_15 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(l_14));
                                              {
                                                t = index_0(t);
                                                {
                                                  r_15 = t;
                                                  if(((q_15 != NULL) && (q_15 != r_15)))
                                                    _fail(r_15);
                                                  else
                                                    q_15 = r_15;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_15)), (ATerm) ATempty);
                                                t = instantiate_0(t);
                                              }
                                            }
                                          }
                                        else
                                          _fail(t);
                                      }
                                  }
                                else
                                  _fail(t);
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
  return(t);
}
ATerm selector_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_selector_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      {
        ATerm n_9 = t;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL;
            t = not_null(b_17);
            {
              ATerm h_17 = NULL;
              t = h_0(t);
              {
                f_17 = t;
                {
                  t = not_null(c_17);
                  {
                    t = i_0(t);
                    {
                      h_17 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(f_17), not_null(h_17));
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = n_9;
            {
              ATerm g_18 = NULL;
              t = not_null(b_17);
              {
                ATerm i_18 = NULL;
                t = h_0(t);
                {
                  g_18 = t;
                  {
                    t = not_null(c_17);
                    {
                      t = i_0(t);
                      {
                        i_18 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(g_18), not_null(i_18));
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
ATerm get_symbol_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym_Path_2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm b_19 = NULL;
        t = not_null(y_18);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                ATerm c_19 = NULL;
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
                return(t);
              }
              t = selector_2(t, _id, d_1);
              return(t);
            }
            t = Cons_2(t, c_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, b_1);
        }
        t = not_null(b_19);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,n_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      n_19 = ATgetArgument(j_19, 1);
      {
        t = not_null(k_19);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(n_19);
            return(t);
          }
          t = at_end_1(t, e_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm arg2abox_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__3))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      a_20 = ATgetArgument(x_19, 2);
      {
        ATerm i_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), (ATerm) ATinsert(ATempty, not_null(y_19)));
        {
          ATerm k_20 = NULL,m_20 = NULL,n_20 = NULL;
          t = conc_0(t);
          {
            i_20 = t;
            {
              ATerm r_9 = t;
              if((PushChoice() == 0))
                {
                  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL;
                  t = pp_table_get_0(t);
                  {
                    p_20 = t;
                    v_19 :
                    if(match_cons(p_20, sym__2))
                      {
                        q_20 = ATgetArgument(p_20, 0);
                        s_20 = ATgetArgument(p_20, 1);
                        {
                          ATerm t_20 = NULL;
                          if(((k_20 != NULL) && (k_20 != q_20)))
                            _fail(q_20);
                          else
                            k_20 = q_20;
                          {
                            if(((n_20 != NULL) && (n_20 != s_20)))
                              _fail(s_20);
                            else
                              n_20 = s_20;
                            {
                              t = not_null(k_20);
                              {
                                t = get_symbol_0(t);
                                {
                                  t_20 = t;
                                  {
                                    if(((m_20 != NULL) && (m_20 != t_20)))
                                      _fail(t_20);
                                    else
                                      m_20 = t_20;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(m_20), not_null(i_20), not_null(n_20), not_null(a_20));
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
                      _fail(t);
                  }
                  PopChoice();
                }
              else
                {
                  t = r_9;
                  {
                    t = not_null(a_20);
                    t = trm2abox_0(t);
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
ATerm NZip3_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym__2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_21)), not_null(b_21));
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym__2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      {
        ATerm u_9 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_21), not_null(k_21));
            PopChoice();
          }
        else
          {
            t = u_9;
            t = SSL_addr(not_null(j_21), not_null(k_21));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  t_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      u_21 :
      if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          z_21 = (ATerm) ATgetNext((ATermList) x_21);
          {
            ATerm d_22 = NULL;
            ATerm e_22 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), (ATerm) ATmakeInt(1));
            {
              t = add_0(t);
              {
                e_22 = t;
                if(((d_22 != NULL) && (d_22 != e_22)))
                  _fail(e_22);
                else
                  d_22 = e_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_21), not_null(y_21)), (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(z_21)));
          }
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  i_22 :
  if(match_cons(k_22, sym__2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      j_22 :
      if(((ATermList) m_22 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm p_22 (ATerm t)
  {
    ATerm y_9 = t;
    if((PushChoice() == 0))
      {
        t = y_62(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        {
          t = z_62(t);
          {
            t = _2(t, b_63, p_22);
            t = a_63(t);
          }
        }
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeInt(1), not_null(r_22));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm k_63 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, k_63);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  x_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), not_null(x_22));
    {
      t = table_get_0(t);
      {
        z_22 = t;
        w_22 :
        if(match_cons(z_22, sym__2))
          {
            a_23 = ATgetArgument(z_22, 0);
            b_23 = ATgetArgument(z_22, 1);
            {
              ATerm d_23 = NULL;
              if(((d_23 != NULL) && (d_23 != b_23)))
                _fail(b_23);
              else
                d_23 = b_23;
            }
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm pp_table_get_p__0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = pp_table_get_0(t);
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm z_9 = t;
  if((PushChoice() == 0))
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
              n_23 :
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
                _fail(t);
            }
          }
        }
        {
          t = (ATerm) ATinsert(ATempty, not_null(w_23));
          {
            t = pp_table_get_p__0(t);
            {
              d_24 = t;
              s_23 :
              if(match_cons(d_24, sym__2))
                {
                  e_24 = ATgetArgument(d_24, 0);
                  f_24 = ATgetArgument(d_24, 1);
                  {
                    ATerm n_24 = NULL;
                    t = not_null(x_23);
                    {
                      ATerm f_1 (ATerm t)
                      {
                        ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
                        i_24 = t;
                        q_23 :
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
                          _fail(t);
                        return(t);
                      }
                      t = nzip_1(t, f_1);
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
                _fail(t);
            }
          }
        }
      }
      PopChoice();
    }
  else
    {
      t = z_9;
      {
        ATerm a_10 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            t = map_1(t, trm2abox_0);
            PopChoice();
          }
        else
          {
            t = a_10;
            {
              ATerm p_24 = NULL;
              p_24 = t;
              {
                t = is_string_0(t);
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(p_24));
              }
            }
          }
      }
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Path1_1))
    {
      f_25 = ATgetArgument(e_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_25));
    }
  else
    {
      if(match_cons(e_25, sym_Path_2))
        {
          f_25 = ATgetArgument(e_25, 0);
          g_25 = ATgetArgument(e_25, 1);
          {
            ATerm o_25 = NULL,y_25 = NULL;
            t = not_null(g_25);
            {
              ATerm g_1 (ATerm t)
              {
                ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
                p_25 = t;
                b_25 :
                if(match_cons(p_25, sym_selector_2))
                  {
                    q_25 = ATgetArgument(p_25, 0);
                    r_25 = ATgetArgument(p_25, 1);
                    t = not_null(q_25);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, g_1);
              {
                y_25 = t;
                {
                  if(((o_25 != NULL) && (o_25 != y_25)))
                    _fail(y_25);
                  else
                    o_25 = y_25;
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_25)), not_null(f_25));
                }
              }
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
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym_PP_Entry_2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        ATerm l_26 = NULL;
        ATerm m_26 = NULL;
        t = not_null(h_26);
        {
          t = mk_key_0(t);
          {
            m_26 = t;
            if(((l_26 != NULL) && (l_26 != m_26)))
              _fail(m_26);
            else
              l_26 = m_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), not_null(l_26), (ATerm) ATmakeAppl(sym__2, not_null(h_26), not_null(i_26)));
          t = table_put_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  t = SSL_string_to_int(not_null(q_26));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm j_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  ATerm c_28 (ATerm t)
  {
    ATerm s_27 = NULL;
    ATerm u_27 = NULL;
    t = not_null(n_27);
    {
      t = De_Escape_0(t);
      {
        u_27 = t;
        if(((s_27 != NULL) && (s_27 != u_27)))
          _fail(u_27);
        else
          s_27 = u_27;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_27)), not_null(m_27));
    return(t);
  }
  ATerm d_28 (ATerm t)
  {
    ATerm w_27 = NULL;
    ATerm x_27 = NULL;
    t = not_null(p_27);
    {
      t = De_Escape_0(t);
      {
        x_27 = t;
        if(((w_27 != NULL) && (w_27 != x_27)))
          _fail(x_27);
        else
          w_27 = x_27;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_27)), (ATerm) ATmakeInt(92));
    return(t);
  }
  ATerm e_28 (ATerm t)
  {
    ATerm z_27 = NULL;
    ATerm a_28 = NULL;
    t = not_null(p_27);
    {
      t = De_Escape_0(t);
      {
        a_28 = t;
        if(((z_27 != NULL) && (z_27 != a_28)))
          _fail(a_28);
        else
          z_27 = a_28;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(z_27)), (ATerm) ATmakeInt(34));
    return(t);
  }
  j_27 = t;
  a_27 :
  if(((ATermList) j_27 == ATempty))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(j_27) == AT_LIST) && ((ATermList) j_27 != ATempty)))
        {
          m_27 = ATgetFirst((ATermList) j_27);
          n_27 = (ATerm) ATgetNext((ATermList) j_27);
          b_27 :
          if(((ATgetType(n_27) == AT_LIST) && ((ATermList) n_27 != ATempty)))
            {
              o_27 = ATgetFirst((ATermList) n_27);
              p_27 = (ATerm) ATgetNext((ATermList) n_27);
              c_27 :
              if(match_int(o_27, 92))
                {
                  d_27 :
                  if(match_int(m_27, 92))
                    {
                      ATerm b_10 = t;
                      if((PushChoice() == 0))
                        {
                          t = c_28(t);
                          PopChoice();
                        }
                      else
                        {
                          t = b_10;
                          t = d_28(t);
                        }
                    }
                  else
                    t = c_28(t);
                }
              else
                {
                  if(match_int(o_27, 34))
                    {
                      e_27 :
                      if(match_int(m_27, 92))
                        {
                          ATerm c_10 = t;
                          if((PushChoice() == 0))
                            {
                              t = c_28(t);
                              PopChoice();
                            }
                          else
                            {
                              t = c_10;
                              t = e_28(t);
                            }
                        }
                      else
                        t = c_28(t);
                    }
                  else
                    {
                      h_27 :
                      t = c_28(t);
                    }
                }
            }
          else
            {
              i_27 :
              t = c_28(t);
            }
        }
      else
        _fail(t);
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
ATerm at_last_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm i_28 (ATerm t)
  {
    ATerm d_10 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = j_65(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        t = Cons_2(t, _id, i_28);
      }
    return(t);
  }
  t = i_28(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(((ATgetType(l_28) == AT_LIST) && ((ATermList) l_28 != ATempty)))
    {
      m_28 = ATgetFirst((ATermList) l_28);
      n_28 = (ATerm) ATgetNext((ATermList) l_28);
      t = not_null(n_28);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(((ATgetType(t_28) == AT_LIST) && ((ATermList) t_28 != ATempty)))
    {
      u_28 = ATgetFirst((ATermList) t_28);
      v_28 = (ATerm) ATgetNext((ATermList) t_28);
      t = not_null(u_28);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm e_29 = NULL;
      t = Hd_0(t);
      {
        e_29 = t;
        z_28 :
        if(!(match_int(e_29, 34)))
          _fail(t);
      }
    }
    t = f_10;
    {
      t = Tl_0(t);
      {
        ATerm h_1 (ATerm t)
        {
          ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
          f_29 = t;
          b_29 :
          if(((ATgetType(f_29) == AT_LIST) && ((ATermList) f_29 != ATempty)))
            {
              g_29 = ATgetFirst((ATermList) f_29);
              h_29 = (ATerm) ATgetNext((ATermList) f_29);
              c_29 :
              if(match_int(g_29, 34))
                {
                  d_29 :
                  if(((ATermList) h_29 == ATempty))
                    {
                      t = (ATerm) ATempty;
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
        t = at_last_1(t, h_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym_Arg_1))
    {
      c_30 = ATgetArgument(b_30, 0);
      {
        ATerm m_30 = NULL;
        ATerm n_30 = NULL;
        t = not_null(c_30);
        {
          t = string_to_int_0(t);
          {
            n_30 = t;
            if(((m_30 != NULL) && (m_30 != n_30)))
              _fail(n_30);
            else
              m_30 = n_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_30));
      }
    }
  else
    {
      if(match_cons(b_30, sym_Arg2_2))
        {
          c_30 = ATgetArgument(b_30, 0);
          d_30 = ATgetArgument(b_30, 1);
          {
            ATerm r_30 = NULL,t_30 = NULL;
            ATerm i_10;
            i_10 = t;
            {
              ATerm s_30 = NULL;
              t = not_null(c_30);
              {
                t = string_to_int_0(t);
                {
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                }
              }
            }
            t = i_10;
            {
              ATerm u_30 = NULL;
              t = not_null(d_30);
              {
                t = string_to_int_0(t);
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(r_30), not_null(t_30));
            }
          }
        }
      else
        {
          if(match_cons(b_30, sym_SOpt_2))
            {
              c_30 = ATgetArgument(b_30, 0);
              d_30 = ATgetArgument(b_30, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(c_30), not_null(d_30));
            }
          else
            {
              if(match_cons(b_30, sym_S_1))
                {
                  c_30 = ATgetArgument(b_30, 0);
                  {
                    ATerm b_31 = NULL;
                    ATerm c_31 = NULL;
                    t = not_null(c_30);
                    {
                      t = de_quote_0(t);
                      {
                        t = de_escape_0(t);
                        {
                          c_31 = t;
                          if(((b_31 != NULL) && (b_31 != c_31)))
                            _fail(c_31);
                          else
                            b_31 = c_31;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(b_31));
                  }
                }
              else
                {
                  if(match_cons(b_30, sym_selector_2))
                    {
                      c_30 = ATgetArgument(b_30, 0);
                      d_30 = ATgetArgument(b_30, 1);
                      {
                        ATerm g_31 = NULL;
                        ATerm h_31 = NULL;
                        t = not_null(c_30);
                        {
                          t = string_to_int_0(t);
                          {
                            h_31 = t;
                            if(((g_31 != NULL) && (g_31 != h_31)))
                              _fail(h_31);
                            else
                              g_31 = h_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(g_31), not_null(d_30));
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
ATerm topdown_1 (ATerm t, ATerm q_66 (ATerm))
{
  ATerm w_31 (ATerm t)
  {
    t = q_66(t);
    t = _all(t, w_31);
    return(t);
  }
  t = w_31(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, i_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_PP_Table_1))
    {
      a_32 = ATgetArgument(z_31, 0);
      {
        t = not_null(a_32);
        {
          t = reverse_0(t);
          {
            ATerm j_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, j_1);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_10;
  j_10 = t;
  {
    ATerm g_32 = NULL;
    ATerm h_32 = NULL;
    h_32 = t;
    if(((g_32 != NULL) && (g_32 != h_32)))
      _fail(h_32);
    else
      g_32 = h_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), not_null(g_32));
      t = printnl_0(t);
    }
  }
  t = j_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_10;
  m_10 = t;
  {
    t = error_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  t = m_10;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm j_32 (ATerm t)
  {
    ATerm n_10 = t;
    if((PushChoice() == 0))
      {
        t = g_68(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = _one(t, j_32);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym__2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        t = not_null(t_32);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm w_32 = NULL;
            w_32 = t;
            if(((s_32 != NULL) && (s_32 != w_32)))
              _fail(w_32);
            else
              s_32 = w_32;
            return(t);
          }
          t = oncetd_1(t, k_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm d_33 = NULL;
  ATerm x_33 = NULL;
  d_33 = t;
  {
    ATerm y_33 = NULL;
    t = get_options_0(t);
    {
      y_33 = t;
      {
        if(((x_33 != NULL) && (x_33 != y_33)))
          _fail(y_33);
        else
          x_33 = y_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), not_null(x_33));
          t = in_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm o_10;
  o_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = d_71(t);
      t = check_option_0(t);
    }
  }
  t = o_10;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm p_10 = t;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Strict_0);
        return(t);
      }
      t = has_option_1(t, l_1);
      {
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue)));
        t = fatal_error_0(t);
      }
      PopChoice();
    }
  else
    {
      t = p_10;
      {
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue)));
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm l_34 = NULL,q_34 = NULL,r_34 = NULL;
  l_34 = t;
  j_34 :
  if(match_cons(l_34, sym__2))
    {
      q_34 = ATgetArgument(l_34, 0);
      r_34 = ATgetArgument(l_34, 1);
      k_34 :
      if(match_string(q_34, "in-type"))
        {
          ATerm x_34 = NULL,g_35 = NULL;
          ATerm q_10;
          q_10 = t;
          {
            ATerm h_35 = NULL;
            ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,t_35 = NULL,u_35 = NULL;
            t = not_null(r_34);
            {
              h_35 = t;
              {
                t = SSL_explode_term(not_null(h_35));
                {
                  j_35 = t;
                  g_34 :
                  if(match_cons(j_35, sym__2))
                    {
                      k_35 = ATgetArgument(j_35, 0);
                      l_35 = ATgetArgument(j_35, 1);
                      h_34 :
                      if(((ATgetType(l_35) == AT_LIST) && ((ATermList) l_35 != ATempty)))
                        {
                          t_35 = ATgetFirst((ATermList) l_35);
                          u_35 = (ATerm) ATgetNext((ATermList) l_35);
                          i_34 :
                          if(((ATermList) u_35 == ATempty))
                            {
                              {
                                if(((g_35 != NULL) && (g_35 != k_35)))
                                  _fail(k_35);
                                else
                                  g_35 = k_35;
                                if(((x_34 != NULL) && (x_34 != t_35)))
                                  _fail(t_35);
                                else
                                  x_34 = t_35;
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
              }
            }
          }
          t = q_10;
          {
            t = not_null(g_35);
            {
              ATerm r_10 = t;
              if((PushChoice() == 0))
                {
                  t = n_71(t);
                  PopChoice();
                }
              else
                {
                  t = r_10;
                  t = type_failure_0(t);
                }
            }
            t = not_null(x_34);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm termid_check_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm r_38 = NULL;
  ATerm t_38 = NULL;
  r_38 = t;
  {
    ATerm u_38 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue)), not_null(r_38));
    {
      t = InId_1(t, u_71);
      {
        u_38 = t;
        if(((t_38 != NULL) && (t_38 != u_38)))
          _fail(u_38);
        else
          t_38 = u_38;
      }
    }
    t = not_null(t_38);
  }
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm z_38 = NULL;
  z_38 = t;
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
    {
      t = table_create_0(t);
      {
        t = not_null(z_38);
        {
          ATerm t_1 (ATerm t)
          {
            t = ReadFromFile_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm b_39 = NULL;
                b_39 = t;
                y_38 :
                if(!(match_string(b_39, "\"pp-tables-0\"")))
                  _fail(t);
                return(t);
              }
              t = termid_check_1(t, u_1);
              t = build_pp_table_0(t);
            }
            return(t);
          }
          t = map_1(t, t_1);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(((ATgetType(g_39) == AT_LIST) && ((ATermList) g_39 != ATempty)))
    {
      h_39 = ATgetFirst((ATermList) g_39);
      i_39 = (ATerm) ATgetNext((ATermList) g_39);
      {
        t = p_60(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm l_39 = NULL;
            l_39 = t;
            if(((h_39 != NULL) && (h_39 != l_39)))
              _fail(l_39);
            else
              h_39 = l_39;
            return(t);
          }
          t = fetch_1(t, v_1);
        }
        t = not_null(i_39);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        t = not_null(r_39);
        {
          ATerm w_39 (ATerm t)
          {
            ATerm v_10 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_39);
                PopChoice();
              }
            else
              {
                t = v_10;
                {
                  ATerm w_10 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm y_1 (ATerm t)
                      {
                        t = not_null(s_39);
                        return(t);
                      }
                      t = HdMember_1(t, y_1);
                      t = w_39(t);
                      PopChoice();
                    }
                  else
                    {
                      t = w_10;
                      t = Cons_2(t, _id, w_39);
                    }
                }
              }
            return(t);
          }
          t = w_39(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm z_10 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_59(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      {
        ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
        b_40 = t;
        a_40 :
        if(((ATgetType(b_40) == AT_LIST) && ((ATermList) b_40 != ATempty)))
          {
            c_40 = ATgetFirst((ATermList) b_40);
            d_40 = (ATerm) ATgetNext((ATermList) b_40);
            {
              ATerm g_40 = NULL,i_40 = NULL;
              ATerm a_11;
              a_11 = t;
              {
                ATerm h_40 = NULL;
                t = not_null(c_40);
                {
                  t = p_59(t);
                  {
                    h_40 = t;
                    if(((g_40 != NULL) && (g_40 != h_40)))
                      _fail(h_40);
                    else
                      g_40 = h_40;
                  }
                }
              }
              t = a_11;
              {
                ATerm j_40 = NULL;
                t = not_null(d_40);
                {
                  t = foldr_3(t, n_59, o_59, p_59);
                  {
                    j_40 = t;
                    if(((i_40 != NULL) && (i_40 != j_40)))
                      _fail(j_40);
                    else
                      i_40 = j_40;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_40), not_null(i_40));
                  t = o_59(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  ATerm r_40 = NULL;
  ATerm t_40 = NULL;
  r_40 = t;
  {
    ATerm u_40 = NULL;
    ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
    t = not_null(r_40);
    {
      u_40 = t;
      {
        t = SSL_explode_term(not_null(u_40));
        {
          w_40 = t;
          q_40 :
          if(match_cons(w_40, sym__2))
            {
              x_40 = ATgetArgument(w_40, 0);
              y_40 = ATgetArgument(w_40, 1);
              if(((t_40 != NULL) && (t_40 != y_40)))
                _fail(y_40);
              else
                t_40 = y_40;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(t_40);
      t = foldr_3(t, a_61, b_61, c_61);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm f_41 (ATerm t)
  {
    ATerm b_11 = t;
    if((PushChoice() == 0))
      {
        ATerm d_41 = NULL;
        ATerm e_41 = NULL;
        t = l_61(t);
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        t = (ATerm) ATinsert(ATempty, not_null(d_41));
        PopChoice();
      }
    else
      {
        t = b_11;
        {
          ATerm z_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, z_1, union_0, f_41);
        }
      }
    return(t);
  }
  t = f_41(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm n_61 (ATerm))
{
  t = collect_om_1(t, n_61);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym__2))
    {
      n_41 = ATgetArgument(m_41, 0);
      o_41 = ATgetArgument(m_41, 1);
      {
        t = not_null(n_41);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm r_41 = NULL,s_41 = NULL;
            r_41 = t;
            j_41 :
            if(match_cons(r_41, sym_PP_Table_1))
              {
                s_41 = ATgetArgument(r_41, 0);
                t = not_null(s_41);
              }
            else
              _fail(t);
            return(t);
          }
          t = collect_1(t, a_2);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(o_41);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm f_2 (ATerm t)
                    {
                      ATerm u_41 = NULL;
                      t = is_list_0(t);
                      {
                        u_41 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(u_41));
                      }
                      return(t);
                    }
                    t = try_1(t, f_2);
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = not_null(n_41);
                        return(t);
                      }
                      t = split_2(t, h_2, _id);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm b_42 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm c_42 = NULL,d_42 = NULL;
      c_42 = t;
      a_42 :
      if(match_cons(c_42, sym_Program_1))
        {
          d_42 = ATgetArgument(c_42, 0);
          if(((b_42 != NULL) && (b_42 != d_42)))
            _fail(d_42);
          else
            b_42 = d_42;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, i_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(b_42)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = c_11;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      ATerm d_11 = t;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm m_42 = NULL;
            m_42 = t;
            f_42 :
            if(!(match_cons(m_42, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_2);
          PopChoice();
          _fail(t);
        }
      else
        t = d_11;
      return(t);
    }
    t = _2(t, k_2, _id);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          ATerm n_42 = NULL,o_42 = NULL;
          n_42 = t;
          h_42 :
          if(match_cons(n_42, sym_Runtime_1))
            {
              o_42 = ATgetArgument(n_42, 0);
              if(((l_42 != NULL) && (l_42 != o_42)))
                _fail(o_42);
              else
                l_42 = o_42;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_2);
        return(t);
      }
      t = _2(t, v_2, _id);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm p_42 = NULL,q_42 = NULL;
            p_42 = t;
            j_42 :
            if(match_cons(p_42, sym_Program_1))
              {
                q_42 = ATgetArgument(p_42, 0);
                if(((k_42 != NULL) && (k_42 != q_42)))
                  _fail(q_42);
                else
                  k_42 = q_42;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_2);
          return(t);
        }
        t = _2(t, x_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(l_42)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(k_42)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, j_2);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      t = SSL_WriteToTextFile(not_null(w_42), not_null(x_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm l_38 (ATerm), ATerm m_38 (ATerm))
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym__2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      {
        ATerm k_43 = NULL;
        t = not_null(g_43);
        {
          ATerm m_43 = NULL;
          t = l_38(t);
          {
            k_43 = t;
            {
              t = not_null(h_43);
              {
                t = m_38(t);
                {
                  m_43 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_43), not_null(m_43));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      t = SSL_WriteToBinaryFile(not_null(u_43), not_null(v_43));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_44 = NULL;
  ATerm e_11;
  e_11 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm f_11 = t;
      if((PushChoice() == 0))
        {
          ATerm a_3 (ATerm t)
          {
            ATerm e_44 = NULL,f_44 = NULL;
            e_44 = t;
            a_44 :
            if(match_cons(e_44, sym_Output_1))
              {
                f_44 = ATgetArgument(e_44, 0);
                if(((d_44 != NULL) && (d_44 != f_44)))
                  _fail(f_44);
                else
                  d_44 = f_44;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_3);
          PopChoice();
        }
      else
        {
          t = f_11;
          {
            ATerm g_44 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              g_44 = t;
              if(((d_44 != NULL) && (d_44 != g_44)))
                _fail(g_44);
              else
                d_44 = g_44;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_2, _id);
  }
  t = e_11;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm g_3 (ATerm t)
      {
        t = not_null(d_44);
        return(t);
      }
      t = split_2(t, g_3, _id);
      return(t);
    }
    t = _2(t, _id, b_3);
    {
      ATerm g_11 = t;
      if((PushChoice() == 0))
        {
          ATerm h_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm h_44 = NULL;
              h_44 = t;
              c_44 :
              if(!(match_cons(h_44, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, o_3);
            return(t);
          }
          t = _2(t, h_3, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = g_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm n_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  ATerm h_11;
  h_11 = t;
  t = dtime_0(t);
  t = h_11;
  {
    t = h_71(t);
    {
      ATerm i_11;
      i_11 = t;
      {
        ATerm o_44 = NULL;
        t = dtime_0(t);
        {
          o_44 = t;
          if(((n_44 != NULL) && (n_44 != o_44)))
            _fail(o_44);
          else
            n_44 = o_44;
        }
      }
      t = i_11;
      {
        p_44 = t;
        m_44 :
        if(match_cons(p_44, sym__2))
          {
            q_44 = ATgetArgument(p_44, 0);
            r_44 = ATgetArgument(p_44, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_44)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_44))), not_null(r_44));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  t = SSL_ReadFromFile(not_null(x_44));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm c_45 = NULL,e_45 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm d_45 = NULL;
    t = z_55(t);
    {
      d_45 = t;
      if(((c_45 != NULL) && (c_45 != d_45)))
        _fail(d_45);
      else
        c_45 = d_45;
    }
  }
  t = j_11;
  {
    ATerm f_45 = NULL;
    t = a_56(t);
    {
      f_45 = t;
      if(((e_45 != NULL) && (e_45 != f_45)))
        _fail(f_45);
      else
        e_45 = f_45;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_45), not_null(e_45));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_45 = NULL;
  ATerm k_11;
  k_11 = t;
  {
    ATerm l_11 = t;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm m_45 = NULL,n_45 = NULL;
          m_45 = t;
          j_45 :
          if(match_cons(m_45, sym_Input_1))
            {
              n_45 = ATgetArgument(m_45, 0);
              if(((l_45 != NULL) && (l_45 != n_45)))
                _fail(n_45);
              else
                l_45 = n_45;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_3);
        PopChoice();
      }
    else
      {
        t = l_11;
        {
          ATerm o_45 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            o_45 = t;
            if(((l_45 != NULL) && (l_45 != o_45)))
              _fail(o_45);
            else
              l_45 = o_45;
          }
        }
      }
  }
  t = k_11;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(l_45);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  r_45 :
  if(!(match_cons(s_45, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_11 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = m_11;
        {
          ATerm n_11 = t;
          if((PushChoice() == 0))
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
  t = option_defined_1(t, v_3);
  t = g_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  t = SSL_table_create(not_null(u_45));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  {
    ATerm o_11;
    o_11 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(y_45));
          t = table_put_0(t);
        }
      }
    }
    t = o_11;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_11 = t;
  if((PushChoice() == 0))
    {
      ATerm w_3 (ATerm t)
      {
        ATerm m_46 = NULL;
        m_46 = t;
        b_46 :
        if(!(match_string(m_46, "-S")))
          {
            if(!(match_string(m_46, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, w_3, x_3, y_3);
      PopChoice();
    }
  else
    {
      t = y_11;
      {
        ATerm z_11 = t;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm n_46 = NULL;
              n_46 = t;
              c_46 :
              if(!(match_string(n_46, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, z_3, b_4, c_4);
            PopChoice();
          }
        else
          {
            t = z_11;
            {
              ATerm a_12 = t;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm o_46 = NULL;
                    o_46 = t;
                    d_46 :
                    if(!(match_string(o_46, "-v")))
                      {
                        if(!(match_string(o_46, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, h_4, i_4, l_4);
                  PopChoice();
                }
              else
                {
                  t = a_12;
                  {
                    ATerm e_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          ATerm p_46 = NULL;
                          p_46 = t;
                          e_46 :
                          if(!(match_string(p_46, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          ATerm q_46 = NULL;
                          ATerm r_46 = NULL;
                          r_46 = t;
                          if(((q_46 != NULL) && (q_46 != r_46)))
                            _fail(r_46);
                          else
                            q_46 = r_46;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_46));
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, m_4, n_4, w_4);
                        PopChoice();
                      }
                    else
                      {
                        t = e_12;
                        {
                          ATerm f_12 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm x_4 (ATerm t)
                              {
                                ATerm s_46 = NULL;
                                s_46 = t;
                                g_46 :
                                if(!(match_string(s_46, "-i")))
                                  {
                                    if(!(match_string(s_46, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_4 (ATerm t)
                              {
                                ATerm t_46 = NULL;
                                ATerm u_46 = NULL;
                                u_46 = t;
                                if(((t_46 != NULL) && (t_46 != u_46)))
                                  _fail(u_46);
                                else
                                  t_46 = u_46;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_46));
                                return(t);
                              }
                              ATerm z_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, x_4, y_4, z_4);
                              PopChoice();
                            }
                          else
                            {
                              t = f_12;
                              {
                                ATerm i_12 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_5 (ATerm t)
                                    {
                                      ATerm v_46 = NULL;
                                      v_46 = t;
                                      i_46 :
                                      if(!(match_string(v_46, "-o")))
                                        {
                                          if(!(match_string(v_46, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm w_46 = NULL;
                                      ATerm x_46 = NULL;
                                      x_46 = t;
                                      if(((w_46 != NULL) && (w_46 != x_46)))
                                        _fail(x_46);
                                      else
                                        w_46 = x_46;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_46));
                                      return(t);
                                    }
                                    ATerm g_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_5, f_5, g_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_12;
                                    {
                                      ATerm j_12 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_5 (ATerm t)
                                          {
                                            ATerm y_46 = NULL;
                                            y_46 = t;
                                            k_46 :
                                            if(!(match_string(y_46, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, h_5, m_5, n_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = j_12;
                                          {
                                            ATerm o_5 (ATerm t)
                                            {
                                              ATerm z_46 = NULL;
                                              z_46 = t;
                                              l_46 :
                                              if(!(match_string(z_46, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm p_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm v_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, o_5, p_5, v_5);
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
  ATerm g_47 = NULL;
  g_47 = t;
  t = SSL_table_destroy(not_null(g_47));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  t = SSL_exit(not_null(k_47));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  t = SSL_implode_string(not_null(o_47));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm r_47 (ATerm t)
  {
    ATerm l_12 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_47);
        PopChoice();
      }
    else
      {
        t = l_12;
        {
          t = Nil_0(t);
          t = z_64(t);
        }
      }
    return(t);
  }
  t = r_47(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_12 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = m_12;
      {
        ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
        u_47 = t;
        t_47 :
        if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
          {
            v_47 = ATgetFirst((ATermList) u_47);
            w_47 = (ATerm) ATgetNext((ATermList) u_47);
            {
              t = not_null(v_47);
              {
                ATerm w_5 (ATerm t)
                {
                  t = not_null(w_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_5);
              }
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
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_explode_string(not_null(c_48));
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
ATerm long_description_1 (ATerm t, ATerm i_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm f_48 (ATerm t)
  {
    ATerm n_12 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_12;
        t = Cons_2(t, l_64, f_48);
      }
    return(t);
  }
  t = f_48(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  m_48 = t;
  j_48 :
  if(((ATgetType(m_48) == AT_LIST) && ((ATermList) m_48 != ATempty)))
    {
      k_48 = ATgetFirst((ATermList) m_48);
      l_48 = (ATerm) ATgetNext((ATermList) m_48);
      {
        t = not_null(l_48);
        {
          ATerm x_5 (ATerm t)
          {
            ATerm p_48 = NULL;
            ATerm q_48 = NULL;
            t = g_0(t);
            {
              q_48 = t;
              if(((p_48 != NULL) && (p_48 != q_48)))
                _fail(q_48);
              else
                p_48 = q_48;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(k_48));
            return(t);
          }
          t = reverse_1(t, x_5);
        }
      }
    }
  else
    {
      if(((ATermList) m_48 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, f_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm x_48 = NULL,y_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_cons(x_48, sym_Program_1))
    {
      y_48 = ATgetArgument(x_48, 0);
      {
        ATerm a_49 = NULL;
        t = not_null(y_48);
        {
          t = b_47(t);
          {
            a_49 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_49));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm o_49 = NULL;
      o_49 = t;
      if(((n_49 != NULL) && (n_49 != o_49)))
        _fail(o_49);
      else
        n_49 = o_49;
      return(t);
    }
    t = Program_1(t, h_6);
    return(t);
  }
  t = option_defined_1(t, g_6);
  {
    ATerm k_6 (ATerm t)
    {
      ATerm p_49 = NULL;
      ATerm q_49 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(n_49);
          return(t);
        }
        t = short_description_1(t, l_6);
        {
          t = concat_strings_0(t);
          {
            q_49 = t;
            if(((p_49 != NULL) && (p_49 != q_49)))
              _fail(q_49);
            else
              p_49 = q_49;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(p_49)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm r_49 = NULL;
                  r_49 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_49)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm t_49 = NULL;
                    ATerm u_49 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm c_7 (ATerm t)
                      {
                        t = not_null(n_49);
                        return(t);
                      }
                      t = long_description_1(t, c_7);
                      {
                        t = concat_strings_0(t);
                        {
                          u_49 = t;
                          if(((t_49 != NULL) && (t_49 != u_49)))
                            _fail(u_49);
                          else
                            t_49 = u_49;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_49)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_6);
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
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym__2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      {
        ATerm x_12;
        x_12 = t;
        t = SSL_printnl(not_null(c_50), not_null(d_50));
        t = x_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm k_50 = NULL,l_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_Undefined_1))
    {
      l_50 = ATgetArgument(k_50, 0);
      {
        ATerm n_50 = NULL;
        t = not_null(l_50);
        {
          t = c_47(t);
          {
            n_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_50));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm r_50 (ATerm t)
  {
    ATerm c_13 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_64, _id);
        PopChoice();
      }
    else
      {
        t = c_13;
        t = Cons_2(t, _id, r_50);
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_55 (ATerm))
{
  t = fetch_1(t, g_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_50 = NULL;
  t_50 = t;
  s_50 :
  if(!(match_cons(t_50, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm d_13 = t;
  if((PushChoice() == 0))
    {
      t = b_66(t);
      PopChoice();
    }
  else
    {
      t = d_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym__2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      t = SSL_table_get(not_null(x_50), not_null(y_50));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  f_51 = t;
  e_51 :
  if(match_cons(f_51, sym__3))
    {
      g_51 = ATgetArgument(f_51, 0);
      h_51 = ATgetArgument(f_51, 1);
      i_51 = ATgetArgument(f_51, 2);
      {
        ATerm e_13;
        e_13 = t;
        {
          ATerm m_51 = NULL;
          ATerm n_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), not_null(h_51));
          {
            ATerm f_13 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = f_13;
                t = (ATerm) ATempty;
              }
            {
              n_51 = t;
              if(((m_51 != NULL) && (m_51 != n_51)))
                _fail(n_51);
              else
                m_51 = n_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_51), not_null(h_51), (ATerm) ATinsert(CheckATermList(not_null(m_51)), not_null(i_51)));
            t = table_put_0(t);
          }
        }
        t = e_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm r_51 = NULL;
  ATerm s_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = m_54(t);
    {
      s_51 = t;
      if(((r_51 != NULL) && (r_51 != s_51)))
        _fail(s_51);
      else
        r_51 = s_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(r_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(match_string(y_51, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(y_51) == AT_LIST) && ((ATermList) y_51 != ATempty)))
        {
          z_51 = ATgetFirst((ATermList) y_51);
          a_52 = (ATerm) ATgetNext((ATermList) y_51);
          {
            ATerm d_52 = NULL;
            ATerm g_13;
            g_13 = t;
            {
              t = not_null(z_51);
              t = d_0(t);
            }
            t = g_13;
            {
              ATerm e_52 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  e_52 = t;
                  if(((d_52 != NULL) && (d_52 != e_52)))
                    _fail(e_52);
                  else
                    d_52 = e_52;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_52)), not_null(d_52));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm j_52 = NULL;
    j_52 = t;
    i_52 :
    if(!(match_string(j_52, "--help")))
      {
        if(!(match_string(j_52, "-h")))
          {
            if(!(match_string(j_52, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, d_7, e_7, f_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  m_52 = t;
  l_52 :
  if(((ATgetType(m_52) == AT_LIST) && ((ATermList) m_52 != ATempty)))
    {
      n_52 = ATgetFirst((ATermList) m_52);
      o_52 = (ATerm) ATgetNext((ATermList) m_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_52)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(((ATgetType(w_52) == AT_LIST) && ((ATermList) w_52 != ATempty)))
    {
      x_52 = ATgetFirst((ATermList) w_52);
      y_52 = (ATerm) ATgetNext((ATermList) w_52);
      {
        ATerm b_53 = NULL;
        t = not_null(x_52);
        {
          ATerm d_53 = NULL;
          t = g_49(t);
          {
            b_53 = t;
            {
              t = not_null(y_52);
              {
                t = h_49(t);
                {
                  d_53 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_53)), not_null(b_53));
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
ATerm Nil_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  i_53 :
  if(((ATermList) j_53 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm h_13;
  h_13 = t;
  {
    ATerm g_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = k_54(t);
      return(t);
    }
    t = try_1(t, g_7);
  }
  t = h_13;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm l_53 = NULL;
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_53));
      return(t);
    }
    ATerm l_7 (ATerm t)
    {
      ATerm t_13 = t;
      if((PushChoice() == 0))
        {
          ATerm w_13 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = w_13;
              {
                t = k_54(t);
                t = Cons_2(t, _id, l_7);
              }
            }
          PopChoice();
        }
      else
        {
          t = t_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_7, l_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
    u_53 = t;
    q_53 :
    if(match_cons(u_53, sym__3))
      {
        v_53 = ATgetArgument(u_53, 0);
        w_53 = ATgetArgument(u_53, 1);
        x_53 = ATgetArgument(u_53, 2);
        {
          if(((r_53 != NULL) && (r_53 != v_53)))
            _fail(v_53);
          else
            r_53 = v_53;
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
              t = SSL_table_put(not_null(r_53), not_null(s_53), not_null(t_53));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = y_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm a_54 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = z_13;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm a_14 = t;
      if((PushChoice() == 0))
        {
          t = j_54(t);
          PopChoice();
        }
      else
        {
          t = a_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_7);
    {
      ATerm o_7 (ATerm t)
      {
        ATerm b_14 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = b_14;
            {
              ATerm q_7 (ATerm t)
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm b_54 = NULL;
                  b_54 = t;
                  if(((a_54 != NULL) && (a_54 != b_54)))
                    _fail(b_54);
                  else
                    a_54 = b_54;
                  return(t);
                }
                t = Undefined_1(t, r_7);
                return(t);
              }
              t = option_defined_1(t, q_7);
              {
                ATerm c_14;
                c_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_54)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = c_14;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_7);
      {
        ATerm d_14;
        d_14 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = d_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    ATerm e_14 = t;
    if((PushChoice() == 0))
      {
        t = w_70(t);
        PopChoice();
      }
    else
      {
        t = e_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_7);
  {
    t = store_options_0(t);
    {
      ATerm f_14 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_70);
          PopChoice();
        }
      else
        {
          t = f_14;
          {
            ATerm o_14 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_70);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = o_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
{
  t = iowrap_3(t, q_70, r_70, default_usage_0);
  return(t);
}
ATerm Ast2abox_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm p_14 = t;
    if((PushChoice() == 0))
      {
        ATerm u_7 (ATerm t)
        {
          ATerm o_54 = NULL;
          o_54 = t;
          d_54 :
          if(!(match_string(o_54, "-v")))
            _fail(t);
          return(t);
        }
        ATerm v_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, u_7, v_7);
        PopChoice();
      }
    else
      {
        t = p_14;
        {
          ATerm x_7 (ATerm t)
          {
            ATerm p_54 = NULL;
            p_54 = t;
            e_54 :
            if(!(match_string(p_54, "-p")))
              _fail(t);
            return(t);
          }
          ATerm z_7 (ATerm t)
          {
            ATerm s_54 = NULL;
            s_54 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(s_54));
            return(t);
          }
          ATerm a_8 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
            return(t);
          }
          t = ArgOption_3(t, x_7, z_7, a_8);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, t_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast2abox_0(t);
  return(t);
}

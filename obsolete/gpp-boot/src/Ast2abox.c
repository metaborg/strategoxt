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
ATerm term_e_20;
ATerm term_o_19;
ATerm term_e_19;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_p_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_q_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_u_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_l_11;
ATerm term_c_10;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_q_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_i_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, (ATerm) ATempty);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Option_2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm is_list_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm l_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm a_68 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_57 (ATerm));
ATerm index_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm e_55 (ATerm));
ATerm length_0 (ATerm);
ATerm S_1 (ATerm, ATerm k_0 (ATerm));
ATerm collect_p__1 (ATerm, ATerm e_50 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm i_73 (ATerm));
ATerm TupleToList_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm p_64 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm o_66 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_67 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_69 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm n_72 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm x_72 (ATerm));
ATerm termid_check_1 (ATerm, ATerm e_73 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm o_61 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm crush_3 (ATerm, ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm collect_om_1 (ATerm, ATerm n_62 (ATerm));
ATerm collect_1 (ATerm, ATerm p_62 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm b_39 (ATerm), ATerm c_39 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_72 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_55 (ATerm));
ATerm map_1 (ATerm, ATerm q_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_55 (ATerm));
ATerm Program_1 (ATerm, ATerm t_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_55 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_49 (ATerm), ATerm z_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_55 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_55 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm Ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  p_1 = t;
  n_1 :
  if(match_string(p_1, "register-usage-info"))
    t = register_usage_1(t, o_0);
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
                ATerm t_2;
                t_2 = t;
                {
                  t = not_null(q_1);
                  t = m_0(t);
                }
                t = t_2;
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
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_g_8;
    return(t);
  }
  t = Option_3(t, p_55, q_55, a_0);
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
        _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  t = SSL_is_string(not_null(h_2));
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
            ATerm v_2 (ATerm t)
            {
              if(((o_2 != NULL) && (o_2 != r_2)))
                _fail(r_2);
              else
                o_2 = r_2;
              {
                if(((p_2 != NULL) && (p_2 != s_2)))
                  _fail(s_2);
                else
                  p_2 = s_2;
                {
                  t = not_null(o_2);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_2), not_null(p_2));
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
            q_2 = t;
            m_2 :
            if(((ATgetType(q_2) == AT_LIST) && ((ATermList) q_2 != ATempty)))
              {
                r_2 = ATgetFirst((ATermList) q_2);
                s_2 = (ATerm) ATgetNext((ATermList) q_2);
                n_2 :
                if(((ATermList) r_2 == ATempty))
                  {
                    {
                      ATerm o_8 = t;
                      int p_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((p_2 != NULL) && (p_2 != s_2)))
                            _fail(s_2);
                          else
                            p_2 = s_2;
                          {
                            ATerm d_0 (ATerm t)
                            {
                              t = not_null(p_2);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, d_0);
                          }
                          LocalPopChoice(p_8);
                        }
                      else
                        {
                          t = o_8;
                          t = v_2(t);
                        }
                    }
                  }
                else
                  t = v_2(t);
              }
            else
              _fail(t);
            LocalPopChoice(m_8);
          }
        else
          {
            t = j_8;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  f_3 = t;
  d_3 :
  if(match_cons(f_3, sym_Arg2_2))
    {
      g_3 = ATgetArgument(f_3, 0);
      e_3 = ATgetArgument(f_3, 1);
      {
        ATerm j_3 = NULL,k_3 = NULL;
        ATerm l_3 = NULL,n_3 = NULL;
        ATerm m_3 = NULL;
        t = term_q_8;
        {
          t = l_0(t);
          {
            m_3 = t;
            if(((l_3 != NULL) && (l_3 != m_3)))
              _fail(m_3);
            else
              l_3 = m_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(l_3));
          {
            ATerm o_3 = NULL;
            t = index_0(t);
            {
              n_3 = t;
              {
                if(((j_3 != NULL) && (j_3 != n_3)))
                  _fail(n_3);
                else
                  j_3 = n_3;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(j_3));
                  {
                    t = index_0(t);
                    {
                      o_3 = t;
                      if(((k_3 != NULL) && (k_3 != o_3)))
                        _fail(o_3);
                      else
                        k_3 = o_3;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(k_3);
      }
    }
  else
    {
      if(match_cons(f_3, sym_Arg_1))
        {
          g_3 = ATgetArgument(f_3, 0);
          {
            ATerm q_3 = NULL;
            ATerm r_3 = NULL,t_3 = NULL;
            ATerm s_3 = NULL;
            t = term_q_8;
            {
              t = l_0(t);
              {
                s_3 = t;
                if(((r_3 != NULL) && (r_3 != s_3)))
                  _fail(s_3);
                else
                  r_3 = s_3;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(r_3));
              {
                t = index_0(t);
                {
                  t_3 = t;
                  if(((q_3 != NULL) && (q_3 != t_3)))
                    _fail(t_3);
                  else
                    q_3 = t_3;
                }
              }
            }
            t = not_null(q_3);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _all(t, b_4);
    t = a_68(t);
    return(t);
  }
  t = b_4(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      {
        ATerm k_4 = NULL;
        ATerm l_4 = NULL;
        t = not_null(g_4);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm p_0 (ATerm t)
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    t = not_null(h_4);
                    return(t);
                  }
                  t = Instantiate_1(t, q_0);
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, p_0);
            return(t);
          }
          t = bottomup_1(t, e_0);
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = not_null(k_4);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Ind1_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  s_4 = t;
  p_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      q_4 :
      if(match_int(t_4, 1))
        {
          r_4 :
          if(((ATgetType(u_4) == AT_LIST) && ((ATermList) u_4 != ATempty)))
            {
              v_4 = ATgetFirst((ATermList) u_4);
              w_4 = (ATerm) ATgetNext((ATermList) u_4);
              t = not_null(v_4);
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
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym__2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm t_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_5), not_null(e_5));
            LocalPopChoice(y_8);
          }
        else
          {
            t = t_8;
            t = SSL_subtr(not_null(d_5), not_null(e_5));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym__2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      {
        ATerm z_8;
        z_8 = t;
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_5), not_null(m_5));
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              t = SSL_gtr(not_null(l_5), not_null(m_5));
            }
        }
        t = z_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm s_5 = NULL;
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
      t_5 = t;
      r_5 :
      if(match_cons(t_5, sym__2))
        {
          u_5 = ATgetArgument(t_5, 0);
          v_5 = ATgetArgument(t_5, 1);
          {
            if(((s_5 != NULL) && (s_5 != u_5)))
              _fail(u_5);
            else
              s_5 = u_5;
            if(((s_5 != NULL) && (s_5 != v_5)))
              _fail(v_5);
            else
              s_5 = v_5;
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  b_6 = t;
  z_5 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      a_6 :
      if(((ATgetType(d_6) == AT_LIST) && ((ATermList) d_6 != ATempty)))
        {
          e_6 = ATgetFirst((ATermList) d_6);
          f_6 = (ATerm) ATgetNext((ATermList) d_6);
          {
            ATerm j_6 = NULL;
            ATerm l_9;
            l_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), term_m_9);
              t = geq_0(t);
            }
            t = l_9;
            {
              ATerm k_6 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), term_n_9);
              {
                t = subt_0(t);
                {
                  k_6 = t;
                  if(((j_6 != NULL) && (j_6 != k_6)))
                    _fail(k_6);
                  else
                    j_6 = k_6;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(f_6));
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
ATerm repeat_2 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm o_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_57(t);
        t = n_6(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = o_9;
        t = s_57(t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_57 (ATerm))
{
  t = repeat_2(t, u_57, _id);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
    ATerm v_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = v_9;
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              {
                ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
                v_6 = t;
                q_6 :
                if(((ATgetType(v_6) == AT_LIST) && ((ATermList) v_6 != ATempty)))
                  {
                    w_6 = ATgetFirst((ATermList) v_6);
                    x_6 = (ATerm) ATgetNext((ATermList) v_6);
                    r_6 :
                    if(((ATgetType(x_6) == AT_LIST) && ((ATermList) x_6 != ATempty)))
                      {
                        y_6 = ATgetFirst((ATermList) x_6);
                        z_6 = (ATerm) ATgetNext((ATermList) x_6);
                        {
                          if(((s_6 != NULL) && (s_6 != w_6)))
                            _fail(w_6);
                          else
                            s_6 = w_6;
                          {
                            if(((t_6 != NULL) && (t_6 != y_6)))
                              _fail(y_6);
                            else
                              t_6 = y_6;
                            {
                              if(((u_6 != NULL) && (u_6 != z_6)))
                                _fail(z_6);
                              else
                                u_6 = z_6;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  ATerm a_7 = NULL;
                                  ATerm b_7 = NULL;
                                  t = term_q_8;
                                  {
                                    t = e_55(t);
                                    {
                                      b_7 = t;
                                      if(((a_7 != NULL) && (a_7 != b_7)))
                                        _fail(b_7);
                                      else
                                        a_7 = b_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_6)), not_null(s_6)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm s_0 (ATerm t)
                                {
                                  t = not_null(u_6);
                                  t = c_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, r_0, s_0);
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
  t = c_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_S_1))
    {
      l_7 = ATgetArgument(k_7, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            t = not_null(l_7);
            {
              t = k_0(t);
              {
                n_7 = t;
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(n_7));
              }
            }
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm q_7 = NULL;
              t = not_null(l_7);
              {
                t = k_0(t);
                {
                  q_7 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(q_7));
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
ATerm collect_p__1 (ATerm t, ATerm e_50 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm g_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL;
        t = e_50(t);
        {
          x_7 = t;
          t = (ATerm) ATinsert(ATempty, not_null(x_7));
        }
        LocalPopChoice(j_10);
      }
    else
      {
        t = g_10;
        {
          ATerm v_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, v_0, conc_0, z_7);
        }
      }
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym__2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      t = SSL_mod(not_null(e_8), not_null(f_8));
    }
  else
    _fail(t);
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm n_8 = NULL;
  l_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), term_m_9);
    {
      t = mod_0(t);
      {
        n_8 = t;
        k_8 :
        if(!(match_int(n_8, 0)))
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym__2))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      {
        ATerm a_9 = NULL;
        ATerm k_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 = NULL,d_9 = NULL;
            t = not_null(w_8);
            {
              t = even_0(t);
              {
                ATerm c_9 = NULL;
                t = term_q_8;
                {
                  t = i_73(t);
                  {
                    c_9 = t;
                    if(((b_9 != NULL) && (b_9 != c_9)))
                      _fail(c_9);
                    else
                      b_9 = c_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(b_9), not_null(x_8));
                  {
                    t = arg2abox_0(t);
                    {
                      d_9 = t;
                      if(((a_9 != NULL) && (a_9 != d_9)))
                        _fail(d_9);
                      else
                        a_9 = d_9;
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_10);
          }
        else
          {
            t = k_10;
            {
              ATerm e_9 = NULL,g_9 = NULL;
              ATerm f_9 = NULL;
              t = term_q_8;
              {
                t = i_73(t);
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_9, not_null(e_9), not_null(x_8));
                {
                  t = arg2abox_0(t);
                  {
                    g_9 = t;
                    if(((a_9 != NULL) && (a_9 != g_9)))
                      _fail(g_9);
                    else
                      a_9 = g_9;
                  }
                }
              }
            }
          }
        t = not_null(a_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TupleToList_0 (ATerm t)
{
  ATerm r_9 = NULL;
  ATerm t_9 = NULL;
  r_9 = t;
  {
    ATerm u_9 = NULL;
    ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
    t = not_null(r_9);
    {
      u_9 = t;
      {
        t = SSL_explode_term(not_null(u_9));
        {
          w_9 = t;
          p_9 :
          if(match_cons(w_9, sym__2))
            {
              x_9 = ATgetArgument(w_9, 0);
              y_9 = ATgetArgument(w_9, 1);
              q_9 :
              if(match_string(x_9, ""))
                {
                  if(((t_9 != NULL) && (t_9 != y_9)))
                    _fail(y_9);
                  else
                    t_9 = y_9;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(t_9);
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
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
      u_11 = t;
      h_10 :
      if(match_cons(u_11, sym__4))
        {
          v_11 = ATgetArgument(u_11, 0);
          w_11 = ATgetArgument(u_11, 1);
          x_11 = ATgetArgument(u_11, 2);
          y_11 = ATgetArgument(u_11, 3);
          i_10 :
          if(match_string(v_11, "seq"))
            {
              ATerm l_12 = NULL;
              t = not_null(y_11);
              {
                t = tuple2list_0(t);
                {
                  ATerm w_0 (ATerm t)
                  {
                    ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
                    c_12 = t;
                    f_10 :
                    if(match_cons(c_12, sym__2))
                      {
                        d_12 = ATgetArgument(c_12, 0);
                        e_12 = ATgetArgument(c_12, 1);
                        {
                          ATerm h_12 = NULL;
                          ATerm i_12 = NULL;
                          t = (ATerm) ATmakeAppl(sym__3, not_null(d_12), not_null(w_11), not_null(e_12));
                          {
                            t = arg2abox_0(t);
                            {
                              i_12 = t;
                              if(((h_12 != NULL) && (h_12 != i_12)))
                                _fail(i_12);
                              else
                                h_12 = i_12;
                            }
                          }
                          t = not_null(h_12);
                        }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = nzip_1(t, w_0);
                  {
                    l_12 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(l_12));
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
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
            q_12 = t;
            l_10 :
            if(match_cons(q_12, sym__4))
              {
                r_12 = ATgetArgument(q_12, 0);
                s_12 = ATgetArgument(q_12, 1);
                v_12 = ATgetArgument(q_12, 2);
                w_12 = ATgetArgument(q_12, 3);
                m_10 :
                if(match_string(r_12, "iter-sep"))
                  {
                    if(((n_12 != NULL) && (n_12 != s_12)))
                      _fail(s_12);
                    else
                      n_12 = s_12;
                    {
                      if(((o_12 != NULL) && (o_12 != v_12)))
                        _fail(v_12);
                      else
                        o_12 = v_12;
                      if(((p_12 != NULL) && (p_12 != w_12)))
                        _fail(w_12);
                      else
                        p_12 = w_12;
                    }
                  }
                else
                  {
                    if(match_string(r_12, "iter-star-sep"))
                      {
                        if(((n_12 != NULL) && (n_12 != s_12)))
                          _fail(s_12);
                        else
                          n_12 = s_12;
                        {
                          if(((o_12 != NULL) && (o_12 != v_12)))
                            _fail(v_12);
                          else
                            o_12 = v_12;
                          if(((p_12 != NULL) && (p_12 != w_12)))
                            _fail(w_12);
                          else
                            p_12 = w_12;
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            else
              _fail(t);
            {
              t = not_null(p_12);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = not_null(n_12);
                    return(t);
                  }
                  t = BuildSepList_1(t, y_0);
                  return(t);
                }
                t = nzip_1(t, x_0);
                {
                  x_12 = t;
                  {
                    ATerm s_10 = t;
                    int w_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = NULL;
                        t = not_null(o_12);
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
                              z_12 = t;
                              v_10 :
                              if(match_int(z_12, 1))
                                {
                                  t = not_null(x_12);
                                  {
                                    ATerm b_16 (ATerm t)
                                    {
                                      ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
                                      ATerm e_16 (ATerm t)
                                      {
                                        ATerm j_13 = NULL;
                                        ATerm k_13 = NULL;
                                        t = not_null(c_13);
                                        {
                                          t = b_16(t);
                                          {
                                            k_13 = t;
                                            if(((j_13 != NULL) && (j_13 != k_13)))
                                              _fail(k_13);
                                            else
                                              j_13 = k_13;
                                          }
                                        }
                                        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_13)), not_null(b_13)), not_null(b_13));
                                        return(t);
                                      }
                                      a_13 = t;
                                      t_10 :
                                      if(((ATermList) a_13 == ATempty))
                                        {
                                          t = (ATerm) ATempty;
                                        }
                                      else
                                        {
                                          if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
                                            {
                                              b_13 = ATgetFirst((ATermList) a_13);
                                              c_13 = (ATerm) ATgetNext((ATermList) a_13);
                                              u_10 :
                                              if(((ATermList) c_13 == ATempty))
                                                {
                                                  {
                                                    ATerm x_10 = t;
                                                    int a_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = (ATerm) ATinsert(ATempty, not_null(b_13));
                                                        LocalPopChoice(a_11);
                                                      }
                                                    else
                                                      {
                                                        t = x_10;
                                                        t = e_16(t);
                                                      }
                                                  }
                                                }
                                              else
                                                t = e_16(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    t = b_16(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                        LocalPopChoice(w_10);
                      }
                    else
                      {
                        t = s_10;
                        t = not_null(x_12);
                      }
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(o_12);
                        return(t);
                      }
                      t = instantiate_sep_list_1(t, a_1);
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,y_13 = NULL;
                  o_13 = t;
                  y_10 :
                  if(match_cons(o_13, sym__4))
                    {
                      p_13 = ATgetArgument(o_13, 0);
                      q_13 = ATgetArgument(o_13, 1);
                      r_13 = ATgetArgument(o_13, 2);
                      s_13 = ATgetArgument(o_13, 3);
                      z_10 :
                      if(match_string(p_13, "iter"))
                        {
                          if(((l_13 != NULL) && (l_13 != q_13)))
                            _fail(q_13);
                          else
                            l_13 = q_13;
                          {
                            if(((m_13 != NULL) && (m_13 != r_13)))
                              _fail(r_13);
                            else
                              m_13 = r_13;
                            if(((n_13 != NULL) && (n_13 != s_13)))
                              _fail(s_13);
                            else
                              n_13 = s_13;
                          }
                        }
                      else
                        {
                          if(match_string(p_13, "iter-star"))
                            {
                              if(((l_13 != NULL) && (l_13 != q_13)))
                                _fail(q_13);
                              else
                                l_13 = q_13;
                              {
                                if(((m_13 != NULL) && (m_13 != r_13)))
                                  _fail(r_13);
                                else
                                  m_13 = r_13;
                                if(((n_13 != NULL) && (n_13 != s_13)))
                                  _fail(s_13);
                                else
                                  n_13 = s_13;
                              }
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    _fail(t);
                  {
                    t = not_null(n_13);
                    {
                      ATerm b_1 (ATerm t)
                      {
                        ATerm t_13 = NULL;
                        ATerm v_13 = NULL;
                        t_13 = t;
                        {
                          ATerm w_13 = NULL;
                          t = (ATerm) ATmakeAppl(sym__3, term_n_9, not_null(l_13), not_null(t_13));
                          {
                            t = arg2abox_0(t);
                            {
                              w_13 = t;
                              if(((v_13 != NULL) && (v_13 != w_13)))
                                _fail(w_13);
                              else
                                v_13 = w_13;
                            }
                          }
                          t = not_null(v_13);
                        }
                        return(t);
                      }
                      t = map_1(t, b_1);
                      {
                        y_13 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), (ATerm) ATinsert(ATempty, not_null(y_13)));
                          t = instantiate_0(t);
                        }
                      }
                    }
                  }
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                    ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
                    c_14 = t;
                    q_11 :
                    if(match_cons(c_14, sym__4))
                      {
                        d_14 = ATgetArgument(c_14, 0);
                        e_14 = ATgetArgument(c_14, 1);
                        m_14 = ATgetArgument(c_14, 2);
                        n_14 = ATgetArgument(c_14, 3);
                        r_11 :
                        if(match_cons(n_14, sym_None_0))
                          t = (ATerm) ATempty;
                        else
                          {
                            if(match_cons(n_14, sym_Some_1))
                              {
                                o_14 = ATgetArgument(n_14, 0);
                                {
                                  ATerm a_15 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), (ATerm) ATinsert(ATempty, term_n_9));
                                  {
                                    ATerm c_15 = NULL;
                                    t = conc_0(t);
                                    {
                                      a_15 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__3, term_n_9, not_null(e_14), not_null(o_14));
                                        {
                                          t = arg2abox_0(t);
                                          {
                                            c_15 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), (ATerm) ATinsert(ATempty, not_null(c_15)));
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
                                if(match_cons(n_14, sym_alt_2))
                                  {
                                    o_14 = ATgetArgument(n_14, 0);
                                    p_14 = ATgetArgument(n_14, 1);
                                    s_11 :
                                    if(((ATgetType(p_14) == AT_LIST) && ((ATermList) p_14 != ATempty)))
                                      {
                                        a_14 = ATgetFirst((ATermList) p_14);
                                        b_14 = (ATerm) ATgetNext((ATermList) p_14);
                                        t_11 :
                                        if(((ATermList) b_14 == ATempty))
                                          {
                                            {
                                              ATerm j_15 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, not_null(o_14), not_null(e_14), not_null(a_14));
                                              {
                                                ATerm l_15 = NULL;
                                                t = arg2abox_0(t);
                                                {
                                                  j_15 = t;
                                                  {
                                                    ATerm m_15 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), not_null(m_14));
                                                    {
                                                      t = index_0(t);
                                                      {
                                                        m_15 = t;
                                                        if(((l_15 != NULL) && (l_15 != m_15)))
                                                          _fail(m_15);
                                                        else
                                                          l_15 = m_15;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_15)), (ATerm) ATinsert(ATempty, not_null(j_15)));
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
                                        if(((ATermList) p_14 == ATempty))
                                          {
                                            {
                                              ATerm r_15 = NULL;
                                              ATerm s_15 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), not_null(m_14));
                                              {
                                                t = index_0(t);
                                                {
                                                  s_15 = t;
                                                  if(((r_15 != NULL) && (r_15 != s_15)))
                                                    _fail(s_15);
                                                  else
                                                    r_15 = s_15;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(r_15)), (ATerm) ATempty);
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
ATerm selector_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_selector_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL;
            t = not_null(c_17);
            {
              ATerm i_17 = NULL;
              t = i_0(t);
              {
                g_17 = t;
                {
                  t = not_null(d_17);
                  {
                    t = j_0(t);
                    {
                      i_17 = t;
                      t = (ATerm) ATmakeAppl(sym_selector_2, not_null(g_17), not_null(i_17));
                    }
                  }
                }
              }
            }
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm m_17 = NULL;
              t = not_null(c_17);
              {
                ATerm o_17 = NULL;
                t = i_0(t);
                {
                  m_17 = t;
                  {
                    t = not_null(d_17);
                    {
                      t = j_0(t);
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
    _fail(t);
  return(t);
}
ATerm get_symbol_0 (ATerm t)
{
  ATerm u_18 = NULL,y_18 = NULL,z_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Path_2))
    {
      y_18 = ATgetArgument(u_18, 0);
      z_18 = ATgetArgument(u_18, 1);
      {
        ATerm c_19 = NULL;
        t = not_null(z_18);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                ATerm d_19 = NULL;
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
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
        t = not_null(c_19);
      }
    }
  else
    _fail(t);
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
    _fail(t);
  return(t);
}
ATerm arg2abox_0 (ATerm t)
{
  ATerm w_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__3))
    {
      z_19 = ATgetArgument(w_19, 0);
      a_20 = ATgetArgument(w_19, 1);
      b_20 = ATgetArgument(w_19, 2);
      {
        ATerm f_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), (ATerm) ATinsert(ATempty, not_null(z_19)));
        {
          ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
          t = conc_0(t);
          {
            f_20 = t;
            {
              ATerm f_11 = t;
              int g_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
                  t = pp_table_get_0(t);
                  {
                    k_20 = t;
                    u_19 :
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
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(i_20), not_null(f_20), not_null(j_20), not_null(b_20));
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
                  LocalPopChoice(g_11);
                }
              else
                {
                  t = f_11;
                  {
                    t = not_null(b_20);
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
  ATerm z_20 = NULL,b_21 = NULL,c_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      b_21 = ATgetArgument(z_20, 0);
      c_21 = ATgetArgument(z_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_21)), not_null(b_21));
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym__2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_21), not_null(l_21));
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = SSL_addr(not_null(k_21), not_null(l_21));
          }
      }
    }
  else
    _fail(t);
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
            ATerm e_22 = NULL;
            ATerm f_22 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), term_n_9);
            {
              t = add_0(t);
              {
                f_22 = t;
                if(((e_22 != NULL) && (e_22 != f_22)))
                  _fail(f_22);
                else
                  e_22 = f_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_21), not_null(w_21)), (ATerm) ATmakeAppl(sym__2, not_null(e_22), not_null(x_21)));
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
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  j_22 :
  if(match_cons(l_22, sym__2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      k_22 :
      if(((ATermList) n_22 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_64(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = e_64(t);
          {
            t = _2(t, g_64, q_22);
            t = f_64(t);
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
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(s_22));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm p_64 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, p_64);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  y_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(y_22));
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
              ATerm e_23 = NULL;
              if(((e_23 != NULL) && (e_23 != c_23)))
                _fail(c_23);
              else
                e_23 = c_23;
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
  ATerm i_23 = NULL;
  i_23 = t;
  t = pp_table_get_0(t);
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_23 = NULL;
      ATerm x_23 = NULL,y_23 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
      v_23 = t;
      {
        ATerm z_23 = NULL;
        ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
        t = not_null(v_23);
        {
          z_23 = t;
          {
            t = SSL_explode_term(not_null(z_23));
            {
              b_24 = t;
              o_23 :
              if(match_cons(b_24, sym__2))
                {
                  c_24 = ATgetArgument(b_24, 0);
                  d_24 = ATgetArgument(b_24, 1);
                  {
                    if(((x_23 != NULL) && (x_23 != c_24)))
                      _fail(c_24);
                    else
                      x_23 = c_24;
                    if(((y_23 != NULL) && (y_23 != d_24)))
                      _fail(d_24);
                    else
                      y_23 = d_24;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        {
          t = (ATerm) ATinsert(ATempty, not_null(x_23));
          {
            t = pp_table_get_p__0(t);
            {
              e_24 = t;
              t_23 :
              if(match_cons(e_24, sym__2))
                {
                  f_24 = ATgetArgument(e_24, 0);
                  g_24 = ATgetArgument(e_24, 1);
                  {
                    ATerm o_24 = NULL;
                    t = not_null(y_23);
                    {
                      ATerm g_1 (ATerm t)
                      {
                        ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
                        j_24 = t;
                        r_23 :
                        if(match_cons(j_24, sym__2))
                          {
                            k_24 = ATgetArgument(j_24, 0);
                            l_24 = ATgetArgument(j_24, 1);
                            {
                              t = (ATerm) ATmakeAppl(sym__3, not_null(k_24), (ATerm)ATinsert(ATempty, not_null(x_23)), not_null(l_24));
                              t = arg2abox_0(t);
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = nzip_1(t, g_1);
                      {
                        o_24 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(o_24));
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
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            t = map_1(t, trm2abox_0);
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm q_24 = NULL;
              q_24 = t;
              {
                t = is_string_0(t);
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(q_24));
              }
            }
          }
      }
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Path1_1))
    {
      g_25 = ATgetArgument(f_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(g_25));
    }
  else
    {
      if(match_cons(f_25, sym_Path_2))
        {
          g_25 = ATgetArgument(f_25, 0);
          h_25 = ATgetArgument(f_25, 1);
          {
            ATerm p_25 = NULL,x_25 = NULL;
            t = not_null(h_25);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
                q_25 = t;
                c_25 :
                if(match_cons(q_25, sym_selector_2))
                  {
                    r_25 = ATgetArgument(q_25, 0);
                    s_25 = ATgetArgument(q_25, 1);
                    t = not_null(r_25);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, h_1);
              {
                x_25 = t;
                {
                  if(((p_25 != NULL) && (p_25 != x_25)))
                    _fail(x_25);
                  else
                    p_25 = x_25;
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_25)), not_null(g_25));
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
  ATerm f_26 = NULL,g_26 = NULL,j_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_PP_Entry_2))
    {
      g_26 = ATgetArgument(f_26, 0);
      j_26 = ATgetArgument(f_26, 1);
      {
        ATerm m_26 = NULL;
        ATerm n_26 = NULL;
        t = not_null(g_26);
        {
          t = mk_key_0(t);
          {
            n_26 = t;
            if(((m_26 != NULL) && (m_26 != n_26)))
              _fail(n_26);
            else
              m_26 = n_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_11, not_null(m_26), (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(j_26)));
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
  ATerm r_26 = NULL;
  r_26 = t;
  t = SSL_string_to_int(not_null(r_26));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  ATerm c_28 (ATerm t)
  {
    ATerm p_27 = NULL;
    ATerm q_27 = NULL;
    t = not_null(k_27);
    {
      t = De_Escape_0(t);
      {
        q_27 = t;
        if(((p_27 != NULL) && (p_27 != q_27)))
          _fail(q_27);
        else
          p_27 = q_27;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_27)), not_null(j_27));
    return(t);
  }
  ATerm d_28 (ATerm t)
  {
    ATerm u_27 = NULL;
    ATerm v_27 = NULL;
    t = not_null(m_27);
    {
      t = De_Escape_0(t);
      {
        v_27 = t;
        if(((u_27 != NULL) && (u_27 != v_27)))
          _fail(v_27);
        else
          u_27 = v_27;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_27)), term_z_11);
    return(t);
  }
  ATerm e_28 (ATerm t)
  {
    ATerm z_27 = NULL;
    ATerm a_28 = NULL;
    t = not_null(m_27);
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_27)), term_a_12);
    return(t);
  }
  i_27 = t;
  b_27 :
  if(((ATermList) i_27 == ATempty))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(i_27) == AT_LIST) && ((ATermList) i_27 != ATempty)))
        {
          j_27 = ATgetFirst((ATermList) i_27);
          k_27 = (ATerm) ATgetNext((ATermList) i_27);
          c_27 :
          if(((ATgetType(k_27) == AT_LIST) && ((ATermList) k_27 != ATempty)))
            {
              l_27 = ATgetFirst((ATermList) k_27);
              m_27 = (ATerm) ATgetNext((ATermList) k_27);
              d_27 :
              if(match_int(l_27, 92))
                {
                  e_27 :
                  if(match_int(j_27, 92))
                    {
                      ATerm b_12 = t;
                      int f_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_28(t);
                          LocalPopChoice(f_12);
                        }
                      else
                        {
                          t = b_12;
                          t = d_28(t);
                        }
                    }
                  else
                    t = c_28(t);
                }
              else
                {
                  if(match_int(l_27, 34))
                    {
                      f_27 :
                      if(match_int(j_27, 92))
                        {
                          ATerm g_12 = t;
                          int j_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = c_28(t);
                              LocalPopChoice(j_12);
                            }
                          else
                            {
                              t = g_12;
                              t = e_28(t);
                            }
                        }
                      else
                        t = c_28(t);
                    }
                  else
                    {
                      g_27 :
                      t = c_28(t);
                    }
                }
            }
          else
            {
              h_27 :
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
ATerm at_last_1 (ATerm t, ATerm o_66 (ATerm))
{
  ATerm j_28 (ATerm t)
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = o_66(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
        t = Cons_2(t, _id, j_28);
      }
    return(t);
  }
  t = j_28(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(((ATgetType(m_28) == AT_LIST) && ((ATermList) m_28 != ATempty)))
    {
      n_28 = ATgetFirst((ATermList) m_28);
      o_28 = (ATerm) ATgetNext((ATermList) m_28);
      t = not_null(o_28);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(((ATgetType(u_28) == AT_LIST) && ((ATermList) u_28 != ATempty)))
    {
      v_28 = ATgetFirst((ATermList) u_28);
      w_28 = (ATerm) ATgetNext((ATermList) u_28);
      t = not_null(v_28);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm t_12;
    t_12 = t;
    {
      ATerm f_29 = NULL;
      t = Hd_0(t);
      {
        f_29 = t;
        a_29 :
        if(!(match_int(f_29, 34)))
          _fail(t);
      }
    }
    t = t_12;
    {
      t = Tl_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
          g_29 = t;
          c_29 :
          if(((ATgetType(g_29) == AT_LIST) && ((ATermList) g_29 != ATempty)))
            {
              h_29 = ATgetFirst((ATermList) g_29);
              i_29 = (ATerm) ATgetNext((ATermList) g_29);
              d_29 :
              if(match_int(h_29, 34))
                {
                  e_29 :
                  if(((ATermList) i_29 == ATempty))
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
        t = at_last_1(t, i_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_Arg_1))
    {
      w_29 = ATgetArgument(v_29, 0);
      {
        ATerm b_30 = NULL;
        ATerm j_30 = NULL;
        t = not_null(w_29);
        {
          t = string_to_int_0(t);
          {
            j_30 = t;
            if(((b_30 != NULL) && (b_30 != j_30)))
              _fail(j_30);
            else
              b_30 = j_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(b_30));
      }
    }
  else
    {
      if(match_cons(v_29, sym_Arg2_2))
        {
          w_29 = ATgetArgument(v_29, 0);
          x_29 = ATgetArgument(v_29, 1);
          {
            ATerm n_30 = NULL,p_30 = NULL;
            ATerm u_12;
            u_12 = t;
            {
              ATerm o_30 = NULL;
              t = not_null(w_29);
              {
                t = string_to_int_0(t);
                {
                  o_30 = t;
                  if(((n_30 != NULL) && (n_30 != o_30)))
                    _fail(o_30);
                  else
                    n_30 = o_30;
                }
              }
            }
            t = u_12;
            {
              ATerm q_30 = NULL;
              t = not_null(x_29);
              {
                t = string_to_int_0(t);
                {
                  q_30 = t;
                  if(((p_30 != NULL) && (p_30 != q_30)))
                    _fail(q_30);
                  else
                    p_30 = q_30;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(n_30), not_null(p_30));
            }
          }
        }
      else
        {
          if(match_cons(v_29, sym_SOpt_2))
            {
              w_29 = ATgetArgument(v_29, 0);
              x_29 = ATgetArgument(v_29, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(w_29), not_null(x_29));
            }
          else
            {
              if(match_cons(v_29, sym_S_1))
                {
                  w_29 = ATgetArgument(v_29, 0);
                  {
                    ATerm c_31 = NULL;
                    ATerm d_31 = NULL;
                    t = not_null(w_29);
                    {
                      t = de_quote_0(t);
                      {
                        t = de_escape_0(t);
                        {
                          d_31 = t;
                          if(((c_31 != NULL) && (c_31 != d_31)))
                            _fail(d_31);
                          else
                            c_31 = d_31;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(c_31));
                  }
                }
              else
                {
                  if(match_cons(v_29, sym_selector_2))
                    {
                      w_29 = ATgetArgument(v_29, 0);
                      x_29 = ATgetArgument(v_29, 1);
                      {
                        ATerm h_31 = NULL;
                        ATerm i_31 = NULL;
                        t = not_null(w_29);
                        {
                          t = string_to_int_0(t);
                          {
                            i_31 = t;
                            if(((h_31 != NULL) && (h_31 != i_31)))
                              _fail(i_31);
                            else
                              h_31 = i_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(h_31), not_null(x_29));
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
ATerm topdown_1 (ATerm t, ATerm y_67 (ATerm))
{
  ATerm t_31 (ATerm t)
  {
    t = y_67(t);
    t = _all(t, t_31);
    return(t);
  }
  t = t_31(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, j_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_PP_Table_1))
    {
      x_31 = ATgetArgument(w_31, 0);
      {
        t = not_null(x_31);
        {
          t = reverse_0(t);
          {
            ATerm k_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, k_1);
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
  ATerm y_12;
  y_12 = t;
  {
    ATerm b_32 = NULL;
    ATerm c_32 = NULL;
    c_32 = t;
    if(((b_32 != NULL) && (b_32 != c_32)))
      _fail(c_32);
    else
      b_32 = c_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(b_32));
      t = printnl_0(t);
    }
  }
  t = y_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_13;
  e_13 = t;
  {
    t = error_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  t = e_13;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm i_32 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_69(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = _one(t, i_32);
      }
    return(t);
  }
  t = i_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym__2))
    {
      n_32 = ATgetArgument(m_32, 0);
      o_32 = ATgetArgument(m_32, 1);
      {
        t = not_null(o_32);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm r_32 = NULL;
            r_32 = t;
            if(((n_32 != NULL) && (n_32 != r_32)))
              _fail(r_32);
            else
              n_32 = r_32;
            return(t);
          }
          t = oncetd_1(t, l_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_u_13;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm f_33 = NULL;
  z_32 = t;
  {
    ATerm g_33 = NULL;
    t = get_options_0(t);
    {
      g_33 = t;
      {
        if(((f_33 != NULL) && (f_33 != g_33)))
          _fail(g_33);
        else
          f_33 = g_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(f_33));
          t = in_0(t);
        }
      }
    }
    t = term_q_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm x_13;
  x_13 = t;
  {
    t = term_q_8;
    {
      t = n_72(t);
      t = check_option_0(t);
    }
  }
  t = x_13;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm z_13 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        t = term_g_14;
        return(t);
      }
      t = has_option_1(t, m_1);
      {
        t = (ATerm) ATinsert(ATempty, term_h_14);
        t = fatal_error_0(t);
      }
      LocalPopChoice(f_14);
    }
  else
    {
      t = z_13;
      {
        t = (ATerm) ATinsert(ATempty, term_i_14);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm t_33 = NULL,z_33 = NULL,n_34 = NULL;
  t_33 = t;
  r_33 :
  if(match_cons(t_33, sym__2))
    {
      z_33 = ATgetArgument(t_33, 0);
      n_34 = ATgetArgument(t_33, 1);
      s_33 :
      if(match_string(z_33, "in-type"))
        {
          ATerm p_34 = NULL,q_34 = NULL;
          ATerm j_14;
          j_14 = t;
          {
            ATerm r_34 = NULL;
            ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
            t = not_null(n_34);
            {
              r_34 = t;
              {
                t = SSL_explode_term(not_null(r_34));
                {
                  v_34 = t;
                  m_33 :
                  if(match_cons(v_34, sym__2))
                    {
                      w_34 = ATgetArgument(v_34, 0);
                      x_34 = ATgetArgument(v_34, 1);
                      n_33 :
                      if(((ATgetType(x_34) == AT_LIST) && ((ATermList) x_34 != ATempty)))
                        {
                          y_34 = ATgetFirst((ATermList) x_34);
                          z_34 = (ATerm) ATgetNext((ATermList) x_34);
                          q_33 :
                          if(((ATermList) z_34 == ATempty))
                            {
                              {
                                if(((q_34 != NULL) && (q_34 != w_34)))
                                  _fail(w_34);
                                else
                                  q_34 = w_34;
                                if(((p_34 != NULL) && (p_34 != y_34)))
                                  _fail(y_34);
                                else
                                  p_34 = y_34;
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
          t = j_14;
          {
            t = not_null(q_34);
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_72(t);
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = type_failure_0(t);
                }
            }
            t = not_null(p_34);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm termid_check_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm n_35 = NULL;
  ATerm x_35 = NULL;
  n_35 = t;
  {
    ATerm y_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_q_14, not_null(n_35));
    {
      t = InId_1(t, e_73);
      {
        y_35 = t;
        if(((x_35 != NULL) && (x_35 != y_35)))
          _fail(y_35);
        else
          x_35 = y_35;
      }
    }
    t = not_null(x_35);
  }
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  {
    t = term_l_11;
    {
      t = table_create_0(t);
      {
        t = not_null(k_36);
        {
          ATerm u_1 (ATerm t)
          {
            t = ReadFromFile_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm d_39 = NULL;
                d_39 = t;
                j_36 :
                if(!(match_string(d_39, "\"pp-tables-0\"")))
                  _fail(t);
                return(t);
              }
              t = termid_check_1(t, v_1);
              t = build_pp_table_0(t);
            }
            return(t);
          }
          t = map_1(t, u_1);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(((ATgetType(i_39) == AT_LIST) && ((ATermList) i_39 != ATempty)))
    {
      j_39 = ATgetFirst((ATermList) i_39);
      k_39 = (ATerm) ATgetNext((ATermList) i_39);
      {
        t = o_61(t);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm n_39 = NULL;
            n_39 = t;
            if(((j_39 != NULL) && (j_39 != n_39)))
              _fail(n_39);
            else
              j_39 = n_39;
            return(t);
          }
          t = fetch_1(t, w_1);
        }
        t = not_null(k_39);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym__2))
    {
      t_39 = ATgetArgument(s_39, 0);
      u_39 = ATgetArgument(s_39, 1);
      {
        t = not_null(t_39);
        {
          ATerm y_39 (ATerm t)
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_39);
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                {
                  ATerm t_14 = t;
                  int u_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = not_null(u_39);
                        return(t);
                      }
                      t = HdMember_1(t, z_1);
                      t = y_39(t);
                      LocalPopChoice(u_14);
                    }
                  else
                    {
                      t = t_14;
                      t = Cons_2(t, _id, y_39);
                    }
                }
              }
            return(t);
          }
          t = y_39(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_60(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
        d_40 = t;
        c_40 :
        if(((ATgetType(d_40) == AT_LIST) && ((ATermList) d_40 != ATempty)))
          {
            e_40 = ATgetFirst((ATermList) d_40);
            f_40 = (ATerm) ATgetNext((ATermList) d_40);
            {
              ATerm i_40 = NULL,k_40 = NULL;
              ATerm x_14;
              x_14 = t;
              {
                ATerm j_40 = NULL;
                t = not_null(e_40);
                {
                  t = o_60(t);
                  {
                    j_40 = t;
                    if(((i_40 != NULL) && (i_40 != j_40)))
                      _fail(j_40);
                    else
                      i_40 = j_40;
                  }
                }
              }
              t = x_14;
              {
                ATerm l_40 = NULL;
                t = not_null(f_40);
                {
                  t = foldr_3(t, m_60, n_60, o_60);
                  {
                    l_40 = t;
                    if(((k_40 != NULL) && (k_40 != l_40)))
                      _fail(l_40);
                    else
                      k_40 = l_40;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(k_40));
                  t = n_60(t);
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
ATerm crush_3 (ATerm t, ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm t_40 = NULL;
  ATerm v_40 = NULL;
  t_40 = t;
  {
    ATerm w_40 = NULL;
    ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
    t = not_null(t_40);
    {
      w_40 = t;
      {
        t = SSL_explode_term(not_null(w_40));
        {
          y_40 = t;
          s_40 :
          if(match_cons(y_40, sym__2))
            {
              z_40 = ATgetArgument(y_40, 0);
              a_41 = ATgetArgument(y_40, 1);
              if(((v_40 != NULL) && (v_40 != a_41)))
                _fail(a_41);
              else
                v_40 = a_41;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(v_40);
      t = foldr_3(t, z_61, a_62, b_62);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm h_41 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_41 = NULL;
        ATerm g_41 = NULL;
        t = n_62(t);
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
        t = (ATerm) ATinsert(ATempty, not_null(f_41));
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, a_2, union_0, h_41);
        }
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm p_62 (ATerm))
{
  t = collect_om_1(t, p_62);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        t = not_null(p_41);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm t_41 = NULL,u_41 = NULL;
            t_41 = t;
            l_41 :
            if(match_cons(t_41, sym_PP_Table_1))
              {
                u_41 = ATgetArgument(t_41, 0);
                t = not_null(u_41);
              }
            else
              _fail(t);
            return(t);
          }
          t = collect_1(t, b_2);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(q_41);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      ATerm w_41 = NULL;
                      t = is_list_0(t);
                      {
                        w_41 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(w_41));
                      }
                      return(t);
                    }
                    t = try_1(t, g_2);
                    {
                      ATerm i_2 (ATerm t)
                      {
                        t = not_null(p_41);
                        return(t);
                      }
                      t = split_2(t, i_2, _id);
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
  ATerm d_42 = NULL;
  ATerm b_15;
  b_15 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm e_42 = NULL,f_42 = NULL;
      e_42 = t;
      c_42 :
      if(match_cons(e_42, sym_Program_1))
        {
          f_42 = ATgetArgument(e_42, 0);
          if(((d_42 != NULL) && (d_42 != f_42)))
            _fail(f_42);
          else
            d_42 = f_42;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, j_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_15), not_null(d_42)), term_d_15));
      {
        t = printnl_0(t);
        {
          t = term_n_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATempty, term_f_15));
  {
    t = printnl_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm l_2 (ATerm t)
    {
      ATerm g_15 = t;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm o_42 = NULL;
            o_42 = t;
            h_42 :
            if(!(match_cons(o_42, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_2);
          PopChoice();
          _fail(t);
        }
      else
        t = g_15;
      return(t);
    }
    t = _2(t, l_2, _id);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm x_2 (ATerm t)
        {
          ATerm p_42 = NULL,q_42 = NULL;
          p_42 = t;
          j_42 :
          if(match_cons(p_42, sym_Runtime_1))
            {
              q_42 = ATgetArgument(p_42, 0);
              if(((n_42 != NULL) && (n_42 != q_42)))
                _fail(q_42);
              else
                n_42 = q_42;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_2);
        return(t);
      }
      t = _2(t, w_2, _id);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm r_42 = NULL,s_42 = NULL;
            r_42 = t;
            l_42 :
            if(match_cons(r_42, sym_Program_1))
              {
                s_42 = ATgetArgument(r_42, 0);
                if(((m_42 != NULL) && (m_42 != s_42)))
                  _fail(s_42);
                else
                  m_42 = s_42;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_2);
          return(t);
        }
        t = _2(t, y_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), not_null(n_42)), term_h_15), not_null(m_42)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, k_2);
  {
    t = term_c_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym__2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      t = SSL_WriteToTextFile(not_null(y_42), not_null(z_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm b_39 (ATerm), ATerm c_39 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      {
        ATerm m_43 = NULL;
        t = not_null(i_43);
        {
          ATerm o_43 = NULL;
          t = b_39(t);
          {
            m_43 = t;
            {
              t = not_null(j_43);
              {
                t = c_39(t);
                {
                  o_43 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), not_null(o_43));
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
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      t = SSL_WriteToBinaryFile(not_null(w_43), not_null(x_43));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_44 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm g_44 = NULL,h_44 = NULL;
            g_44 = t;
            c_44 :
            if(match_cons(g_44, sym_Output_1))
              {
                h_44 = ATgetArgument(g_44, 0);
                if(((f_44 != NULL) && (f_44 != h_44)))
                  _fail(h_44);
                else
                  f_44 = h_44;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_3);
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          {
            ATerm i_44 = NULL;
            t = term_p_15;
            {
              i_44 = t;
              if(((f_44 != NULL) && (f_44 != i_44)))
                _fail(i_44);
              else
                f_44 = i_44;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_3, _id);
  }
  t = k_15;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = not_null(f_44);
        return(t);
      }
      t = split_2(t, h_3, _id);
      return(t);
    }
    t = _2(t, _id, c_3);
    {
      ATerm q_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_3 (ATerm t)
          {
            ATerm p_3 (ATerm t)
            {
              ATerm j_44 = NULL;
              j_44 = t;
              e_44 :
              if(!(match_cons(j_44, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, p_3);
            return(t);
          }
          t = _2(t, i_3, WriteToBinaryFile_0);
          LocalPopChoice(t_15);
        }
      else
        {
          t = q_15;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm p_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  ATerm u_15;
  u_15 = t;
  t = dtime_0(t);
  t = u_15;
  {
    t = r_72(t);
    {
      ATerm v_15;
      v_15 = t;
      {
        ATerm q_44 = NULL;
        t = dtime_0(t);
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
      }
      t = v_15;
      {
        r_44 = t;
        o_44 :
        if(match_cons(r_44, sym__2))
          {
            s_44 = ATgetArgument(r_44, 0);
            t_44 = ATgetArgument(r_44, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_44)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_44))), not_null(t_44));
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
  ATerm z_44 = NULL;
  z_44 = t;
  t = SSL_ReadFromFile(not_null(z_44));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm e_45 = NULL,g_45 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm f_45 = NULL;
    t = y_56(t);
    {
      f_45 = t;
      if(((e_45 != NULL) && (e_45 != f_45)))
        _fail(f_45);
      else
        e_45 = f_45;
    }
  }
  t = w_15;
  {
    ATerm h_45 = NULL;
    t = z_56(t);
    {
      h_45 = t;
      if(((g_45 != NULL) && (g_45 != h_45)))
        _fail(h_45);
      else
        g_45 = h_45;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_45), not_null(g_45));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_45 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 (ATerm t)
        {
          ATerm o_45 = NULL,p_45 = NULL;
          o_45 = t;
          l_45 :
          if(match_cons(o_45, sym_Input_1))
            {
              p_45 = ATgetArgument(o_45, 0);
              if(((n_45 != NULL) && (n_45 != p_45)))
                _fail(p_45);
              else
                n_45 = p_45;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_3);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        {
          ATerm q_45 = NULL;
          t = term_a_16;
          {
            q_45 = t;
            if(((n_45 != NULL) && (n_45 != q_45)))
              _fail(q_45);
            else
              n_45 = q_45;
          }
        }
      }
  }
  t = x_15;
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(n_45);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  t_45 :
  if(!(match_cons(u_45, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_3);
  t = q_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  t = SSL_table_create(not_null(w_45));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  {
    ATerm h_16;
    h_16 = t;
    {
      t = term_h_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_13, term_i_13, not_null(a_46));
          t = table_put_0(t);
        }
      }
    }
    t = h_16;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm o_46 = NULL;
        o_46 = t;
        d_46 :
        if(!(match_string(o_46, "-S")))
          {
            if(!(match_string(o_46, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_k_16;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_l_16;
        return(t);
      }
      t = Option_3(t, x_3, y_3, z_3);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm p_46 = NULL;
              p_46 = t;
              e_46 :
              if(!(match_string(p_46, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_o_16;
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              t = term_p_16;
              return(t);
            }
            t = Option_3(t, a_4, c_4, d_4);
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm q_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm q_46 = NULL;
                    q_46 = t;
                    f_46 :
                    if(!(match_string(q_46, "-v")))
                      {
                        if(!(match_string(q_46, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    t = term_s_16;
                    return(t);
                  }
                  ATerm m_4 (ATerm t)
                  {
                    t = term_t_16;
                    return(t);
                  }
                  t = Option_3(t, i_4, j_4, m_4);
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = q_16;
                  {
                    ATerm u_16 = t;
                    int v_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          ATerm r_46 = NULL;
                          r_46 = t;
                          g_46 :
                          if(!(match_string(r_46, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          ATerm s_46 = NULL;
                          ATerm t_46 = NULL;
                          t_46 = t;
                          if(((s_46 != NULL) && (s_46 != t_46)))
                            _fail(t_46);
                          else
                            s_46 = t_46;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_46));
                          return(t);
                        }
                        ATerm x_4 (ATerm t)
                        {
                          t = term_w_16;
                          return(t);
                        }
                        t = ArgOption_3(t, n_4, o_4, x_4);
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = u_16;
                        {
                          ATerm x_16 = t;
                          int y_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_4 (ATerm t)
                              {
                                ATerm u_46 = NULL;
                                u_46 = t;
                                i_46 :
                                if(!(match_string(u_46, "-i")))
                                  {
                                    if(!(match_string(u_46, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_4 (ATerm t)
                              {
                                ATerm v_46 = NULL;
                                ATerm w_46 = NULL;
                                w_46 = t;
                                if(((v_46 != NULL) && (v_46 != w_46)))
                                  _fail(w_46);
                                else
                                  v_46 = w_46;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_46));
                                return(t);
                              }
                              ATerm a_5 (ATerm t)
                              {
                                t = term_z_16;
                                return(t);
                              }
                              t = ArgOption_3(t, y_4, z_4, a_5);
                              LocalPopChoice(y_16);
                            }
                          else
                            {
                              t = x_16;
                              {
                                ATerm e_17 = t;
                                int f_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm x_46 = NULL;
                                      x_46 = t;
                                      k_46 :
                                      if(!(match_string(x_46, "-o")))
                                        {
                                          if(!(match_string(x_46, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_5 (ATerm t)
                                    {
                                      ATerm y_46 = NULL;
                                      ATerm z_46 = NULL;
                                      z_46 = t;
                                      if(((y_46 != NULL) && (y_46 != z_46)))
                                        _fail(z_46);
                                      else
                                        y_46 = z_46;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_46));
                                      return(t);
                                    }
                                    ATerm h_5 (ATerm t)
                                    {
                                      t = term_h_17;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_5, g_5, h_5);
                                    LocalPopChoice(f_17);
                                  }
                                else
                                  {
                                    t = e_17;
                                    {
                                      ATerm j_17 = t;
                                      int k_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_5 (ATerm t)
                                          {
                                            ATerm a_47 = NULL;
                                            a_47 = t;
                                            m_46 :
                                            if(!(match_string(a_47, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            t = term_l_17;
                                            return(t);
                                          }
                                          ATerm o_5 (ATerm t)
                                          {
                                            t = term_n_17;
                                            return(t);
                                          }
                                          t = Option_3(t, i_5, n_5, o_5);
                                          LocalPopChoice(k_17);
                                        }
                                      else
                                        {
                                          t = j_17;
                                          {
                                            ATerm p_5 (ATerm t)
                                            {
                                              ATerm b_47 = NULL;
                                              b_47 = t;
                                              n_46 :
                                              if(!(match_string(b_47, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_5 (ATerm t)
                                            {
                                              t = term_p_17;
                                              return(t);
                                            }
                                            ATerm w_5 (ATerm t)
                                            {
                                              t = term_q_17;
                                              return(t);
                                            }
                                            t = Option_3(t, p_5, q_5, w_5);
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
ATerm at_end_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm r_47 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_47);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          t = Nil_0(t);
          t = e_66(t);
        }
      }
    return(t);
  }
  t = r_47(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
        w_47 = t;
        v_47 :
        if(((ATgetType(w_47) == AT_LIST) && ((ATermList) w_47 != ATempty)))
          {
            x_47 = ATgetFirst((ATermList) w_47);
            y_47 = (ATerm) ATgetNext((ATermList) w_47);
            {
              t = not_null(x_47);
              {
                ATerm x_5 (ATerm t)
                {
                  t = not_null(y_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_5);
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
  ATerm e_48 = NULL;
  e_48 = t;
  t = SSL_explode_string(not_null(e_48));
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
ATerm long_description_1 (ATerm t, ATerm h_55 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm h_48 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = Cons_2(t, q_65, h_48);
      }
    return(t);
  }
  t = h_48(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  q_48 = t;
  n_48 :
  if(((ATgetType(q_48) == AT_LIST) && ((ATermList) q_48 != ATempty)))
    {
      o_48 = ATgetFirst((ATermList) q_48);
      p_48 = (ATerm) ATgetNext((ATermList) q_48);
      {
        ATerm t_48 = NULL;
        t = not_null(p_48);
        {
          ATerm x_17;
          x_17 = t;
          {
            ATerm u_48 = NULL,w_48 = NULL,y_48 = NULL;
            ATerm y_17;
            y_17 = t;
            {
              ATerm v_48 = NULL;
              t = h_0(t);
              {
                v_48 = t;
                if(((u_48 != NULL) && (u_48 != v_48)))
                  _fail(v_48);
                else
                  u_48 = v_48;
              }
            }
            t = y_17;
            {
              ATerm x_48 = NULL;
              t = not_null(o_48);
              {
                t = g_0(t);
                {
                  x_48 = t;
                  if(((w_48 != NULL) && (w_48 != x_48)))
                    _fail(x_48);
                  else
                    w_48 = x_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_48)), not_null(w_48));
                {
                  y_48 = t;
                  if(((t_48 != NULL) && (t_48 != y_48)))
                    _fail(y_48);
                  else
                    t_48 = y_48;
                }
              }
            }
          }
          t = x_17;
          {
            ATerm y_5 (ATerm t)
            {
              t = not_null(t_48);
              return(t);
            }
            t = reverse_acc_2(t, g_0, y_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_48 == ATempty))
        {
          {
            t = term_q_8;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_55 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm h_49 = NULL,i_49 = NULL;
  h_49 = t;
  g_49 :
  if(match_cons(h_49, sym_Program_1))
    {
      i_49 = ATgetArgument(h_49, 0);
      {
        ATerm k_49 = NULL;
        t = not_null(i_49);
        {
          t = t_47(t);
          {
            k_49 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_49));
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
  ATerm s_49 = NULL;
  ATerm h_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm t_49 = NULL;
      t_49 = t;
      if(((s_49 != NULL) && (s_49 != t_49)))
        _fail(t_49);
      else
        s_49 = t_49;
      return(t);
    }
    t = Program_1(t, i_6);
    return(t);
  }
  t = option_defined_1(t, h_6);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm u_49 = NULL;
      ATerm v_49 = NULL;
      t = term_q_8;
      {
        ATerm m_6 (ATerm t)
        {
          t = not_null(s_49);
          return(t);
        }
        t = short_description_1(t, m_6);
        {
          t = concat_strings_0(t);
          {
            v_49 = t;
            if(((u_49 != NULL) && (u_49 != v_49)))
              _fail(v_49);
            else
              u_49 = v_49;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATempty, not_null(u_49)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATempty, term_z_17));
      {
        t = printnl_0(t);
        {
          t = term_c_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_6 (ATerm t)
                {
                  ATerm w_49 = NULL;
                  w_49 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_49)), term_d_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_6);
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm a_50 = NULL;
                    ATerm b_50 = NULL;
                    t = term_q_8;
                    {
                      ATerm d_7 (ATerm t)
                      {
                        t = not_null(s_49);
                        return(t);
                      }
                      t = long_description_1(t, d_7);
                      {
                        t = concat_strings_0(t);
                        {
                          b_50 = t;
                          if(((a_50 != NULL) && (a_50 != b_50)))
                            _fail(b_50);
                          else
                            a_50 = b_50;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_50)), term_e_18));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_6);
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      {
        ATerm f_18;
        f_18 = t;
        t = SSL_printnl(not_null(m_50), not_null(n_50));
        t = f_18;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_47 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym_Undefined_1))
    {
      v_50 = ATgetArgument(u_50, 0);
      {
        ATerm x_50 = NULL;
        t = not_null(v_50);
        {
          t = u_47(t);
          {
            x_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_50));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm b_51 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_65, _id);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = Cons_2(t, _id, b_51);
      }
    return(t);
  }
  t = b_51(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_56 (ATerm))
{
  t = fetch_1(t, f_56);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_51 = NULL;
  d_51 = t;
  c_51 :
  if(!(match_cons(d_51, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_67(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym__2))
    {
      h_51 = ATgetArgument(g_51, 0);
      i_51 = ATgetArgument(g_51, 1);
      t = SSL_table_get(not_null(h_51), not_null(i_51));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym__3))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      s_51 = ATgetArgument(p_51, 2);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm w_51 = NULL;
          ATerm x_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), not_null(r_51));
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                t = (ATerm) ATempty;
              }
            {
              x_51 = t;
              if(((w_51 != NULL) && (w_51 != x_51)))
                _fail(x_51);
              else
                w_51 = x_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_51), not_null(r_51), (ATerm) ATinsert(CheckATermList(not_null(w_51)), not_null(s_51)));
            t = table_put_0(t);
          }
        }
        t = k_18;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm b_52 = NULL;
  ATerm c_52 = NULL;
  t = term_q_8;
  {
    t = l_55(t);
    {
      c_52 = t;
      if(((b_52 != NULL) && (b_52 != c_52)))
        _fail(c_52);
      else
        b_52 = c_52;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, not_null(b_52));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_string(i_52, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(i_52) == AT_LIST) && ((ATermList) i_52 != ATempty)))
        {
          j_52 = ATgetFirst((ATermList) i_52);
          k_52 = (ATerm) ATgetNext((ATermList) i_52);
          {
            ATerm n_52 = NULL;
            ATerm n_18;
            n_18 = t;
            {
              t = not_null(j_52);
              t = b_0(t);
            }
            t = n_18;
            {
              ATerm o_52 = NULL;
              t = term_q_8;
              {
                t = c_0(t);
                {
                  o_52 = t;
                  if(((n_52 != NULL) && (n_52 != o_52)))
                    _fail(o_52);
                  else
                    n_52 = o_52;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_52)), not_null(n_52));
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
  ATerm e_7 (ATerm t)
  {
    ATerm t_52 = NULL;
    t_52 = t;
    s_52 :
    if(!(match_string(t_52, "--help")))
      {
        if(!(match_string(t_52, "-h")))
          {
            if(!(match_string(t_52, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = Option_3(t, e_7, f_7, g_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(((ATgetType(w_52) == AT_LIST) && ((ATermList) w_52 != ATempty)))
    {
      x_52 = ATgetFirst((ATermList) w_52);
      y_52 = (ATerm) ATgetNext((ATermList) w_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_52)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_49 (ATerm), ATerm z_49 (ATerm))
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  f_53 :
  if(((ATgetType(g_53) == AT_LIST) && ((ATermList) g_53 != ATempty)))
    {
      h_53 = ATgetFirst((ATermList) g_53);
      i_53 = (ATerm) ATgetNext((ATermList) g_53);
      {
        ATerm l_53 = NULL;
        t = not_null(h_53);
        {
          ATerm n_53 = NULL;
          t = y_49(t);
          {
            l_53 = t;
            {
              t = not_null(i_53);
              {
                t = z_49(t);
                {
                  n_53 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_53)), not_null(l_53));
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
  ATerm t_53 = NULL;
  t_53 = t;
  s_53 :
  if(((ATermList) t_53 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm q_18;
  q_18 = t;
  {
    ATerm h_7 (ATerm t)
    {
      t = term_r_18;
      t = j_55(t);
      return(t);
    }
    t = try_1(t, h_7);
  }
  t = q_18;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm v_53 = NULL;
      v_53 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_53));
      return(t);
    }
    ATerm m_7 (ATerm t)
    {
      ATerm s_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                t = j_55(t);
                t = Cons_2(t, _id, m_7);
              }
            }
          LocalPopChoice(v_18);
        }
      else
        {
          t = s_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_7, m_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
    e_54 = t;
    a_54 :
    if(match_cons(e_54, sym__3))
      {
        f_54 = ATgetArgument(e_54, 0);
        g_54 = ATgetArgument(e_54, 1);
        h_54 = ATgetArgument(e_54, 2);
        {
          if(((b_54 != NULL) && (b_54 != f_54)))
            _fail(f_54);
          else
            b_54 = f_54;
          {
            if(((c_54 != NULL) && (c_54 != g_54)))
              _fail(g_54);
            else
              c_54 = g_54;
            {
              if(((d_54 != NULL) && (d_54 != h_54)))
                _fail(h_54);
              else
                d_54 = h_54;
              t = SSL_table_put(not_null(b_54), not_null(c_54), not_null(d_54));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = a_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm k_54 = NULL;
  ATerm b_19;
  b_19 = t;
  {
    t = term_e_19;
    t = table_put_0(t);
  }
  t = b_19;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_55(t);
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_7);
    {
      ATerm p_7 (ATerm t)
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_c_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm r_7 (ATerm t)
              {
                ATerm s_7 (ATerm t)
                {
                  ATerm l_54 = NULL;
                  l_54 = t;
                  if(((k_54 != NULL) && (k_54 != l_54)))
                    _fail(l_54);
                  else
                    k_54 = l_54;
                  return(t);
                }
                t = Undefined_1(t, s_7);
                return(t);
              }
              t = option_defined_1(t, r_7);
              {
                ATerm n_19;
                n_19 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_54)), term_o_19));
                  t = printnl_0(t);
                }
                t = n_19;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_7);
      {
        ATerm p_19;
        p_19 = t;
        {
          t = term_a_18;
          t = table_destroy_0(t);
        }
        t = p_19;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_72(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_7);
  {
    t = store_options_0(t);
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, h_72);
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, f_72);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  t = iowrap_3(t, a_72, b_72, default_usage_0);
  return(t);
}
ATerm Ast2abox_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 (ATerm t)
        {
          ATerm q_54 = NULL;
          q_54 = t;
          n_54 :
          if(!(match_string(q_54, "-v")))
            _fail(t);
          return(t);
        }
        ATerm w_7 (ATerm t)
        {
          t = term_o_16;
          return(t);
        }
        t = Option_2(t, v_7, w_7);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm y_7 (ATerm t)
          {
            ATerm r_54 = NULL;
            r_54 = t;
            o_54 :
            if(!(match_string(r_54, "-p")))
              _fail(t);
            return(t);
          }
          ATerm a_8 (ATerm t)
          {
            ATerm s_54 = NULL;
            s_54 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(s_54));
            return(t);
          }
          ATerm b_8 (ATerm t)
          {
            t = term_e_20;
            return(t);
          }
          t = ArgOption_3(t, y_7, a_8, b_8);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, u_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast2abox_0(t);
  return(t);
}

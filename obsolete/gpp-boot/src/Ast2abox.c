#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm Option_2 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm g_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm m_55 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm e_43 (ATerm));
ATerm length_0 (ATerm);
ATerm S_1 (ATerm, ATerm f_0 (ATerm));
ATerm collect_p__1 (ATerm, ATerm w_38 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm q_60 (ATerm));
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm h_52 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm j_54 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_55 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm f_60 (ATerm));
ATerm termid_check_1 (ATerm, ATerm m_60 (ATerm));
ATerm debug_1 (ATerm, ATerm r_58 (ATerm));
ATerm oncetd_1 (ATerm, ATerm a_57 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm v_59 (ATerm));
ATerm notify_1 (ATerm, ATerm b_39 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_49 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_48 (ATerm), ATerm l_48 (ATerm), ATerm m_48 (ATerm));
ATerm crush_3 (ATerm, ATerm a_50 (ATerm), ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm collect_1 (ATerm, ATerm j_50 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm p_38 (ATerm), ATerm q_38 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_44 (ATerm), ATerm z_44 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_59 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_53 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_43 (ATerm));
ATerm map_1 (ATerm, ATerm l_53 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_45 (ATerm), ATerm s_45 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_45 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_43 (ATerm));
ATerm Program_1 (ATerm, ATerm k_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_53 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_44 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_54 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_43 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_38 (ATerm), ATerm u_38 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_43 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_43 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm Ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  r_1 = t;
  l_1 :
  if(match_cons(r_1, sym_Cons_2))
    {
      n_1 = ATgetArgument(r_1, 0);
      o_1 = ATgetArgument(r_1, 1);
      m_1 :
      if(match_cons(o_1, sym_Cons_2))
        {
          p_1 = ATgetArgument(o_1, 0);
          q_1 = ATgetArgument(o_1, 1);
          {
            ATerm v_1 = NULL;
            t = not_null(n_1);
            t = h_0(t);
            t = not_null(p_1);
            t = i_0(t);
            v_1 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_1), not_null(q_1));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(r_1, "register-usage-info"))
        t = register_usage_1(t, j_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm k_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_43, q_43, k_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_2 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_2;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  ATerm v_4 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = v_4;
      {
        ATerm d_8 = t;
        if(PushChoice()==0)
          {
            ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
            ATerm l_2 (ATerm t)
            {
              if(e_2 != NULL && e_2 != h_2)
                _fail(h_2);
              else
                e_2 = h_2;
              if(f_2 != NULL && f_2 != i_2)
                _fail(i_2);
              else
                f_2 = i_2;
              t = not_null(e_2);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_2), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              t = flat_list_0(t);
              return(t);
            }
            g_2 = t;
            c_2 :
            if(match_cons(g_2, sym_Cons_2))
              {
                h_2 = ATgetArgument(g_2, 0);
                i_2 = ATgetArgument(g_2, 1);
                d_2 :
                if(match_cons(h_2, sym_Nil_0))
                  {
                    ATerm g_8 = t;
                    if(PushChoice()==0)
                      {
                        if(f_2 != NULL && f_2 != i_2)
                          _fail(i_2);
                        else
                          f_2 = i_2;
                        {
                          ATerm l_0 (ATerm t)
                          {
                            t = not_null(f_2);
                            t = flat_list_0(t);
                            return(t);
                          }
                          t = Cons_2(t, Nil_0, l_0);
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = g_8;
                        t = l_2(t);
                      }
                  }
                else
                  t = l_2(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = d_8;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym_Arg_1))
    {
      v_2 = ATgetArgument(u_2, 0);
      {
        ATerm y_2 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm a_3 = NULL;
          t = g_0(t);
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_2), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = index_0(t);
          a_3 = t;
          t = not_null(a_3);
        }
      }
    }
  else
    {
      if(match_cons(u_2, sym_Arg2_2))
        {
          v_2 = ATgetArgument(u_2, 0);
          w_2 = ATgetArgument(u_2, 1);
          {
            ATerm e_3 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm g_3 = NULL;
              t = g_0(t);
              e_3 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_3), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm i_3 = NULL;
                t = index_0(t);
                g_3 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_3), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = index_0(t);
                i_3 = t;
                t = not_null(i_3);
              }
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = _all(t, r_3);
    t = m_55(t);
    return(t);
  }
  t = r_3(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  x_3 = t;
  u_3 :
  if(match_cons(x_3, sym_TCons_2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      v_3 :
      if(match_cons(z_3, sym_TCons_2))
        {
          a_4 = ATgetArgument(z_3, 0);
          b_4 = ATgetArgument(z_3, 1);
          w_3 :
          if(match_cons(b_4, sym_TNil_0))
            {
              ATerm e_4 = NULL;
              t = not_null(y_3);
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm n_0 (ATerm t)
                  {
                    ATerm i_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm o_0 (ATerm t)
                        {
                          t = not_null(a_4);
                          return(t);
                        }
                        t = Instantiate_1(t, o_0);
                        PopChoice();
                      }
                    else
                      {
                        t = i_8;
                        t = flat_list_0(t);
                      }
                    return(t);
                  }
                  t = try_1(t, n_0);
                  return(t);
                }
                t = bottomup_1(t, m_0);
                e_4 = t;
                t = not_null(e_4);
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
ATerm tuple2list_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  m_4 = t;
  l_4 :
  if(match_cons(m_4, sym_TNil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(m_4, sym_TCons_2))
        {
          n_4 = ATgetArgument(m_4, 0);
          o_4 = ATgetArgument(m_4, 1);
          {
            ATerm t_4 = NULL;
            t = not_null(o_4);
            t = tuple2list_0(t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_4), not_null(t_4));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = j_8;
        {
          ATerm k_8 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, Nil_0);
              PopChoice();
            }
          else
            {
              t = k_8;
              {
                ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
                g_5 = t;
                b_5 :
                if(match_cons(g_5, sym_Cons_2))
                  {
                    h_5 = ATgetArgument(g_5, 0);
                    i_5 = ATgetArgument(g_5, 1);
                    c_5 :
                    if(match_cons(i_5, sym_Cons_2))
                      {
                        j_5 = ATgetArgument(i_5, 0);
                        k_5 = ATgetArgument(i_5, 1);
                        if(d_5 != NULL && d_5 != h_5)
                          _fail(h_5);
                        else
                          d_5 = h_5;
                        if(e_5 != NULL && e_5 != j_5)
                          _fail(j_5);
                        else
                          e_5 = j_5;
                        if(f_5 != NULL && f_5 != k_5)
                          _fail(k_5);
                        else
                          f_5 = k_5;
                        {
                          ATerm p_0 (ATerm t)
                          {
                            ATerm l_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = e_43(t);
                            l_5 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_5), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = instantiate_0(t);
                            return(t);
                          }
                          ATerm q_0 (ATerm t)
                          {
                            t = not_null(f_5);
                            t = t_5(t);
                            return(t);
                          }
                          t = Cons_2(t, p_0, q_0);
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
  t = t_5(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, r_0, add_0, s_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm b_6 = NULL,c_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_S_1))
    {
      c_6 = ATgetArgument(b_6, 0);
      {
        ATerm l_8 = t;
        if(PushChoice()==0)
          {
            ATerm e_6 = NULL;
            t = not_null(c_6);
            t = f_0(t);
            e_6 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(e_6));
            PopChoice();
          }
        else
          {
            t = l_8;
            {
              ATerm h_6 = NULL;
              t = not_null(c_6);
              t = f_0(t);
              h_6 = t;
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(h_6));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm w_38 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        ATerm o_6 = NULL;
        t = w_38(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_6), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = m_8;
        {
          ATerm t_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, t_0, conc_0, q_6);
        }
      }
    return(t);
  }
  t = q_6(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,b_7 = NULL,c_7 = NULL;
  w_6 = t;
  t_6 :
  if(match_cons(w_6, sym_TCons_2))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      u_6 :
      if(match_cons(y_6, sym_TCons_2))
        {
          b_7 = ATgetArgument(y_6, 0);
          c_7 = ATgetArgument(y_6, 1);
          v_6 :
          if(match_cons(c_7, sym_TNil_0))
            t = SSL_mod(not_null(x_6), not_null(b_7));
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
ATerm even_0 (ATerm t)
{
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = mod_0(t);
  k_7 = t;
  h_7 :
  if(!(match_int(k_7, 0)))
    _fail(t);
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  u_7 = t;
  r_7 :
  if(match_cons(u_7, sym_TCons_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      s_7 :
      if(match_cons(w_7, sym_TCons_2))
        {
          x_7 = ATgetArgument(w_7, 0);
          y_7 = ATgetArgument(w_7, 1);
          t_7 :
          if(match_cons(y_7, sym_TNil_0))
            {
              ATerm b_8 = NULL;
              ATerm n_8 = t;
              if(PushChoice()==0)
                {
                  ATerm c_8 = NULL;
                  t = not_null(v_7);
                  t = even_0(t);
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm e_8 = NULL;
                    t = q_60(t);
                    c_8 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_7), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = arg2abox_0(t);
                    e_8 = t;
                    if(b_8 != NULL && b_8 != e_8)
                      _fail(e_8);
                    else
                      b_8 = e_8;
                  }
                  PopChoice();
                }
              else
                {
                  t = n_8;
                  {
                    ATerm f_8 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    {
                      ATerm h_8 = NULL;
                      t = q_60(t);
                      f_8 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_7), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = arg2abox_0(t);
                      h_8 = t;
                      if(b_8 != NULL && b_8 != h_8)
                        _fail(h_8);
                      else
                        b_8 = h_8;
                    }
                  }
                }
              t = not_null(b_8);
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
ATerm Ind1_0 (ATerm t)
{
  ATerm a_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  a_9 = t;
  v_8 :
  if(match_cons(a_9, sym_TCons_2))
    {
      e_9 = ATgetArgument(a_9, 0);
      f_9 = ATgetArgument(a_9, 1);
      w_8 :
      if(match_int(e_9, 1))
        {
          x_8 :
          if(match_cons(f_9, sym_TCons_2))
            {
              g_9 = ATgetArgument(f_9, 0);
              j_9 = ATgetArgument(f_9, 1);
              y_8 :
              if(match_cons(g_9, sym_Cons_2))
                {
                  h_9 = ATgetArgument(g_9, 0);
                  i_9 = ATgetArgument(g_9, 1);
                  z_8 :
                  if(match_cons(j_9, sym_TNil_0))
                    t = not_null(h_9);
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
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  r_9 = t;
  o_9 :
  if(match_cons(r_9, sym_TCons_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      p_9 :
      if(match_cons(t_9, sym_TCons_2))
        {
          u_9 = ATgetArgument(t_9, 0);
          v_9 = ATgetArgument(t_9, 1);
          q_9 :
          if(match_cons(v_9, sym_TNil_0))
            {
              ATerm o_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(s_9), not_null(u_9));
                  PopChoice();
                }
              else
                {
                  t = o_8;
                  t = SSL_subtr(not_null(s_9), not_null(u_9));
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
ATerm gt_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  d_10 = t;
  a_10 :
  if(match_cons(d_10, sym_TCons_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      b_10 :
      if(match_cons(f_10, sym_TCons_2))
        {
          g_10 = ATgetArgument(f_10, 0);
          h_10 = ATgetArgument(f_10, 1);
          c_10 :
          if(match_cons(h_10, sym_TNil_0))
            {
              ATerm p_8;
              p_8 = t;
              {
                ATerm q_8 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(e_10), not_null(g_10));
                    PopChoice();
                  }
                else
                  {
                    t = q_8;
                    t = SSL_gtr(not_null(e_10), not_null(g_10));
                  }
              }
              t = p_8;
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
ATerm geq_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm r_8 = t;
  if(PushChoice()==0)
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
      q_10 = t;
      m_10 :
      if(match_cons(q_10, sym_TCons_2))
        {
          r_10 = ATgetArgument(q_10, 0);
          s_10 = ATgetArgument(q_10, 1);
          n_10 :
          if(match_cons(s_10, sym_TCons_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              u_10 = ATgetArgument(s_10, 1);
              o_10 :
              if(match_cons(u_10, sym_TNil_0))
                {
                  if(p_10 != NULL && p_10 != r_10)
                    _fail(r_10);
                  else
                    p_10 = r_10;
                  if(p_10 != NULL && p_10 != t_10)
                    _fail(t_10);
                  else
                    p_10 = t_10;
                }
              else
                _fail(t);
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
      t = r_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,c_12 = NULL,d_12 = NULL;
  c_11 = t;
  y_10 :
  if(match_cons(c_11, sym_TCons_2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      z_10 :
      if(match_cons(e_11, sym_TCons_2))
        {
          f_11 = ATgetArgument(e_11, 0);
          d_12 = ATgetArgument(e_11, 1);
          a_11 :
          if(match_cons(f_11, sym_Cons_2))
            {
              g_11 = ATgetArgument(f_11, 0);
              c_12 = ATgetArgument(f_11, 1);
              b_11 :
              if(match_cons(d_12, sym_TNil_0))
                {
                  ATerm k_12 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = geq_0(t);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_11), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = subt_0(t);
                  k_12 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
      v_15 = t;
      x_12 :
      if(match_cons(v_15, sym_TCons_2))
        {
          w_15 = ATgetArgument(v_15, 0);
          x_15 = ATgetArgument(v_15, 1);
          y_12 :
          if(match_cons(x_15, sym_TCons_2))
            {
              b_16 = ATgetArgument(x_15, 0);
              c_16 = ATgetArgument(x_15, 1);
              z_12 :
              if(match_cons(c_16, sym_TCons_2))
                {
                  d_16 = ATgetArgument(c_16, 0);
                  e_16 = ATgetArgument(c_16, 1);
                  a_13 :
                  if(match_cons(e_16, sym_TCons_2))
                    {
                      f_16 = ATgetArgument(e_16, 0);
                      g_16 = ATgetArgument(e_16, 1);
                      b_13 :
                      if(match_cons(f_16, sym_alt_2))
                        {
                          u_15 = ATgetArgument(f_16, 0);
                          r_15 = ATgetArgument(f_16, 1);
                          e_13 :
                          if(match_cons(r_15, sym_Nil_0))
                            {
                              f_13 :
                              if(match_cons(g_16, sym_TNil_0))
                                {
                                  ATerm l_16 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = index_0(t);
                                  l_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_16), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = instantiate_0(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(r_15, sym_Cons_2))
                                {
                                  s_15 = ATgetArgument(r_15, 0);
                                  t_15 = ATgetArgument(r_15, 1);
                                  g_13 :
                                  if(match_cons(t_15, sym_Nil_0))
                                    {
                                      h_13 :
                                      if(match_cons(g_16, sym_TNil_0))
                                        {
                                          ATerm s_16 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_15), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          {
                                            ATerm u_16 = NULL;
                                            t = arg2abox_0(t);
                                            s_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = index_0(t);
                                            u_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_16), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = instantiate_0(t);
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
                      else
                        {
                          if(match_cons(f_16, sym_Some_1))
                            {
                              u_15 = ATgetArgument(f_16, 0);
                              k_13 :
                              if(match_cons(g_16, sym_TNil_0))
                                {
                                  ATerm a_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm c_17 = NULL;
                                    t = conc_0(t);
                                    a_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_15), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = arg2abox_0(t);
                                    c_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = instantiate_0(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(f_16, sym_None_0))
                                {
                                  l_13 :
                                  if(match_cons(g_16, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
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
      PopChoice();
    }
  else
    {
      t = s_8;
      {
        ATerm t_8 = t;
        if(PushChoice()==0)
          {
            ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,y_17 = NULL;
            k_17 = t;
            o_13 :
            if(match_cons(k_17, sym_TCons_2))
              {
                l_17 = ATgetArgument(k_17, 0);
                m_17 = ATgetArgument(k_17, 1);
                p_13 :
                if(match_string(l_17, "iter"))
                  {
                    q_13 :
                    if(match_cons(m_17, sym_TCons_2))
                      {
                        n_17 = ATgetArgument(m_17, 0);
                        o_17 = ATgetArgument(m_17, 1);
                        r_13 :
                        if(match_cons(o_17, sym_TCons_2))
                          {
                            p_17 = ATgetArgument(o_17, 0);
                            q_17 = ATgetArgument(o_17, 1);
                            s_13 :
                            if(match_cons(q_17, sym_TCons_2))
                              {
                                r_17 = ATgetArgument(q_17, 0);
                                s_17 = ATgetArgument(q_17, 1);
                                t_13 :
                                if(match_cons(s_17, sym_TNil_0))
                                  {
                                    if(h_17 != NULL && h_17 != n_17)
                                      _fail(n_17);
                                    else
                                      h_17 = n_17;
                                    if(i_17 != NULL && i_17 != p_17)
                                      _fail(p_17);
                                    else
                                      i_17 = p_17;
                                    if(j_17 != NULL && j_17 != r_17)
                                      _fail(r_17);
                                    else
                                      j_17 = r_17;
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
                  {
                    if(match_string(l_17, "iter-star"))
                      {
                        u_13 :
                        if(match_cons(m_17, sym_TCons_2))
                          {
                            n_17 = ATgetArgument(m_17, 0);
                            o_17 = ATgetArgument(m_17, 1);
                            v_13 :
                            if(match_cons(o_17, sym_TCons_2))
                              {
                                p_17 = ATgetArgument(o_17, 0);
                                q_17 = ATgetArgument(o_17, 1);
                                w_13 :
                                if(match_cons(q_17, sym_TCons_2))
                                  {
                                    r_17 = ATgetArgument(q_17, 0);
                                    s_17 = ATgetArgument(q_17, 1);
                                    x_13 :
                                    if(match_cons(s_17, sym_TNil_0))
                                      {
                                        if(h_17 != NULL && h_17 != n_17)
                                          _fail(n_17);
                                        else
                                          h_17 = n_17;
                                        if(i_17 != NULL && i_17 != p_17)
                                          _fail(p_17);
                                        else
                                          i_17 = p_17;
                                        if(j_17 != NULL && j_17 != r_17)
                                          _fail(r_17);
                                        else
                                          j_17 = r_17;
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
                  }
              }
            else
              _fail(t);
            t = not_null(j_17);
            {
              ATerm u_0 (ATerm t)
              {
                ATerm t_17 = NULL;
                ATerm v_17 = NULL;
                t_17 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_17), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = arg2abox_0(t);
                v_17 = t;
                t = not_null(v_17);
                return(t);
              }
              t = map_1(t, u_0);
              y_17 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = instantiate_0(t);
            }
            PopChoice();
          }
        else
          {
            t = t_8;
            {
              ATerm u_8 = t;
              if(PushChoice()==0)
                {
                  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
                  d_18 = t;
                  h_14 :
                  if(match_cons(d_18, sym_TCons_2))
                    {
                      e_18 = ATgetArgument(d_18, 0);
                      f_18 = ATgetArgument(d_18, 1);
                      j_14 :
                      if(match_string(e_18, "iter-sep"))
                        {
                          m_14 :
                          if(match_cons(f_18, sym_TCons_2))
                            {
                              g_18 = ATgetArgument(f_18, 0);
                              h_18 = ATgetArgument(f_18, 1);
                              n_14 :
                              if(match_cons(h_18, sym_TCons_2))
                                {
                                  i_18 = ATgetArgument(h_18, 0);
                                  j_18 = ATgetArgument(h_18, 1);
                                  o_14 :
                                  if(match_cons(j_18, sym_TCons_2))
                                    {
                                      k_18 = ATgetArgument(j_18, 0);
                                      l_18 = ATgetArgument(j_18, 1);
                                      p_14 :
                                      if(match_cons(l_18, sym_TNil_0))
                                        {
                                          if(a_18 != NULL && a_18 != g_18)
                                            _fail(g_18);
                                          else
                                            a_18 = g_18;
                                          if(b_18 != NULL && b_18 != i_18)
                                            _fail(i_18);
                                          else
                                            b_18 = i_18;
                                          if(c_18 != NULL && c_18 != k_18)
                                            _fail(k_18);
                                          else
                                            c_18 = k_18;
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
                        {
                          if(match_string(e_18, "iter-star-sep"))
                            {
                              q_14 :
                              if(match_cons(f_18, sym_TCons_2))
                                {
                                  g_18 = ATgetArgument(f_18, 0);
                                  h_18 = ATgetArgument(f_18, 1);
                                  r_14 :
                                  if(match_cons(h_18, sym_TCons_2))
                                    {
                                      i_18 = ATgetArgument(h_18, 0);
                                      j_18 = ATgetArgument(h_18, 1);
                                      s_14 :
                                      if(match_cons(j_18, sym_TCons_2))
                                        {
                                          k_18 = ATgetArgument(j_18, 0);
                                          l_18 = ATgetArgument(j_18, 1);
                                          t_14 :
                                          if(match_cons(l_18, sym_TNil_0))
                                            {
                                              if(a_18 != NULL && a_18 != g_18)
                                                _fail(g_18);
                                              else
                                                a_18 = g_18;
                                              if(b_18 != NULL && b_18 != i_18)
                                                _fail(i_18);
                                              else
                                                b_18 = i_18;
                                              if(c_18 != NULL && c_18 != k_18)
                                                _fail(k_18);
                                              else
                                                c_18 = k_18;
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
                        }
                    }
                  else
                    _fail(t);
                  t = not_null(c_18);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(a_18);
                        return(t);
                      }
                      t = BuildSepList_1(t, w_0);
                      return(t);
                    }
                    t = nzip_1(t, v_0);
                    m_18 = t;
                    {
                      ATerm b_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm o_18 = NULL;
                          t = not_null(b_18);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              t = S_1(t, _id);
                              return(t);
                            }
                            t = collect_p__1(t, x_0);
                            t = length_0(t);
                            o_18 = t;
                            c_15 :
                            if(match_int(o_18, 1))
                              {
                                t = not_null(m_18);
                                {
                                  ATerm t_20 (ATerm t)
                                  {
                                    ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
                                    ATerm w_20 (ATerm t)
                                    {
                                      ATerm y_18 = NULL;
                                      t = not_null(r_18);
                                      t = t_20(t);
                                      y_18 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_18), not_null(y_18)));
                                      return(t);
                                    }
                                    p_18 = t;
                                    a_15 :
                                    if(match_cons(p_18, sym_Nil_0))
                                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                                    else
                                      {
                                        if(match_cons(p_18, sym_Cons_2))
                                          {
                                            q_18 = ATgetArgument(p_18, 0);
                                            r_18 = ATgetArgument(p_18, 1);
                                            b_15 :
                                            if(match_cons(r_18, sym_Nil_0))
                                              {
                                                ATerm c_9 = t;
                                                if(PushChoice()==0)
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_Nil_0));
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = c_9;
                                                    t = w_20(t);
                                                  }
                                              }
                                            else
                                              t = w_20(t);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = t_20(t);
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
                          t = not_null(m_18);
                        }
                      {
                        ATerm y_0 (ATerm t)
                        {
                          t = not_null(b_18);
                          return(t);
                        }
                        t = instantiate_sep_list_1(t, y_0);
                      }
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = u_8;
                  {
                    ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
                    a_19 = t;
                    l_15 :
                    if(match_cons(a_19, sym_TCons_2))
                      {
                        b_19 = ATgetArgument(a_19, 0);
                        c_19 = ATgetArgument(a_19, 1);
                        m_15 :
                        if(match_string(b_19, "seq"))
                          {
                            n_15 :
                            if(match_cons(c_19, sym_TCons_2))
                              {
                                d_19 = ATgetArgument(c_19, 0);
                                e_19 = ATgetArgument(c_19, 1);
                                o_15 :
                                if(match_cons(e_19, sym_TCons_2))
                                  {
                                    f_19 = ATgetArgument(e_19, 0);
                                    g_19 = ATgetArgument(e_19, 1);
                                    p_15 :
                                    if(match_cons(g_19, sym_TCons_2))
                                      {
                                        h_19 = ATgetArgument(g_19, 0);
                                        i_19 = ATgetArgument(g_19, 1);
                                        q_15 :
                                        if(match_cons(i_19, sym_TNil_0))
                                          {
                                            ATerm x_19 = NULL;
                                            t = not_null(h_19);
                                            t = tuple2list_0(t);
                                            {
                                              ATerm z_0 (ATerm t)
                                              {
                                                ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
                                                m_19 = t;
                                                h_15 :
                                                if(match_cons(m_19, sym_TCons_2))
                                                  {
                                                    n_19 = ATgetArgument(m_19, 0);
                                                    o_19 = ATgetArgument(m_19, 1);
                                                    i_15 :
                                                    if(match_cons(o_19, sym_TCons_2))
                                                      {
                                                        p_19 = ATgetArgument(o_19, 0);
                                                        q_19 = ATgetArgument(o_19, 1);
                                                        j_15 :
                                                        if(match_cons(q_19, sym_TNil_0))
                                                          {
                                                            ATerm t_19 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                            t = arg2abox_0(t);
                                                            t_19 = t;
                                                            t = not_null(t_19);
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
                                              t = nzip_1(t, z_0);
                                              x_19 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              t = instantiate_0(t);
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
    }
  return(t);
}
ATerm selector_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_selector_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm d_9 = t;
        if(PushChoice()==0)
          {
            ATerm o_21 = NULL;
            t = not_null(k_21);
            {
              ATerm q_21 = NULL;
              t = d_0(t);
              o_21 = t;
              t = not_null(l_21);
              t = e_0(t);
              q_21 = t;
              t = (ATerm) ATmakeAppl(sym_selector_2, not_null(o_21), not_null(q_21));
            }
            PopChoice();
          }
        else
          {
            t = d_9;
            {
              ATerm w_21 = NULL;
              t = not_null(k_21);
              {
                ATerm a_22 = NULL;
                t = d_0(t);
                w_21 = t;
                t = not_null(l_21);
                t = e_0(t);
                a_22 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(w_21), not_null(a_22));
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Path_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm s_22 = NULL;
        t = not_null(p_22);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                ATerm t_22 = NULL;
                t_22 = t;
                if(s_22 != NULL && s_22 != t_22)
                  _fail(t_22);
                else
                  s_22 = t_22;
                return(t);
              }
              t = selector_2(t, _id, c_1);
              return(t);
            }
            t = Cons_2(t, b_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, a_1);
          t = not_null(s_22);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  a_23 = t;
  x_22 :
  if(match_cons(a_23, sym_TCons_2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      y_22 :
      if(match_cons(c_23, sym_TCons_2))
        {
          d_23 = ATgetArgument(c_23, 0);
          e_23 = ATgetArgument(c_23, 1);
          z_22 :
          if(match_cons(e_23, sym_TNil_0))
            {
              t = not_null(b_23);
              {
                ATerm d_1 (ATerm t)
                {
                  t = not_null(d_23);
                  return(t);
                }
                t = at_end_1(t, d_1);
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
ATerm arg2abox_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  t_23 = t;
  p_23 :
  if(match_cons(t_23, sym_TCons_2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      q_23 :
      if(match_cons(v_23, sym_TCons_2))
        {
          w_23 = ATgetArgument(v_23, 0);
          x_23 = ATgetArgument(v_23, 1);
          r_23 :
          if(match_cons(x_23, sym_TCons_2))
            {
              y_23 = ATgetArgument(x_23, 0);
              z_23 = ATgetArgument(x_23, 1);
              s_23 :
              if(match_cons(z_23, sym_TNil_0))
                {
                  ATerm d_24 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_23), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_23), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
                    t = conc_0(t);
                    d_24 = t;
                    {
                      ATerm k_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
                          t = pp_table_get_0(t);
                          p_24 = t;
                          m_23 :
                          if(match_cons(p_24, sym_TCons_2))
                            {
                              q_24 = ATgetArgument(p_24, 0);
                              r_24 = ATgetArgument(p_24, 1);
                              n_23 :
                              if(match_cons(r_24, sym_TCons_2))
                                {
                                  s_24 = ATgetArgument(r_24, 0);
                                  t_24 = ATgetArgument(r_24, 1);
                                  o_23 :
                                  if(match_cons(t_24, sym_TNil_0))
                                    {
                                      ATerm u_24 = NULL;
                                      if(m_24 != NULL && m_24 != q_24)
                                        _fail(q_24);
                                      else
                                        m_24 = q_24;
                                      if(o_24 != NULL && o_24 != s_24)
                                        _fail(s_24);
                                      else
                                        o_24 = s_24;
                                      t = not_null(m_24);
                                      t = get_symbol_0(t);
                                      u_24 = t;
                                      if(n_24 != NULL && n_24 != u_24)
                                        _fail(u_24);
                                      else
                                        n_24 = u_24;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_23), (ATerm) ATmakeAppl(sym_TNil_0)))));
                                      t = symbol2abox_0(t);
                                    }
                                  else
                                    _fail(t);
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
                          t = k_9;
                          t = not_null(y_23);
                          t = trm2abox_0(t);
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
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  a_25 :
  if(match_cons(i_25, sym_TCons_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      b_25 :
      if(match_cons(k_25, sym_TCons_2))
        {
          l_25 = ATgetArgument(k_25, 0);
          m_25 = ATgetArgument(k_25, 1);
          c_25 :
          if(match_cons(m_25, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_25), not_null(l_25));
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
ATerm add_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  u_25 = t;
  r_25 :
  if(match_cons(u_25, sym_TCons_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      s_25 :
      if(match_cons(w_25, sym_TCons_2))
        {
          x_25 = ATgetArgument(w_25, 0);
          y_25 = ATgetArgument(w_25, 1);
          t_25 :
          if(match_cons(y_25, sym_TNil_0))
            {
              ATerm l_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(v_25), not_null(x_25));
                  PopChoice();
                }
              else
                {
                  t = l_9;
                  t = SSL_addr(not_null(v_25), not_null(x_25));
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
ATerm NZip2_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  m_26 = t;
  i_26 :
  if(match_cons(m_26, sym_TCons_2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      j_26 :
      if(match_cons(o_26, sym_TCons_2))
        {
          u_26 = ATgetArgument(o_26, 0);
          x_26 = ATgetArgument(o_26, 1);
          k_26 :
          if(match_cons(u_26, sym_Cons_2))
            {
              v_26 = ATgetArgument(u_26, 0);
              w_26 = ATgetArgument(u_26, 1);
              l_26 :
              if(match_cons(x_26, sym_TNil_0))
                {
                  ATerm f_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  f_27 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(n_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_26), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_26), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,y_27 = NULL,a_28 = NULL;
  q_27 = t;
  k_27 :
  if(match_cons(q_27, sym_TCons_2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      l_27 :
      if(match_cons(s_27, sym_TCons_2))
        {
          y_27 = ATgetArgument(s_27, 0);
          a_28 = ATgetArgument(s_27, 1);
          m_27 :
          if(match_cons(y_27, sym_Nil_0))
            {
              p_27 :
              if(match_cons(a_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Nil_0);
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
ATerm genzip_4 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm d_28 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = v_51(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        t = w_51(t);
        {
          ATerm e_1 (ATerm t)
          {
            t = TCons_2(t, d_28, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_51, e_1);
          t = x_51(t);
        }
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_28), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm h_52 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, h_52);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm f_29 = NULL;
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,p_29 = NULL;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_29), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  h_29 = t;
  a_29 :
  if(match_cons(h_29, sym_TCons_2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      d_29 :
      if(match_cons(j_29, sym_TCons_2))
        {
          k_29 = ATgetArgument(j_29, 0);
          p_29 = ATgetArgument(j_29, 1);
          e_29 :
          if(match_cons(p_29, sym_TNil_0))
            {
              ATerm n_9;
              n_9 = t;
              t = not_null(i_29);
              t = path_to_string_0(t);
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
                  return(t);
                }
                t = notify_1(t, f_1);
              }
              t = n_9;
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
ATerm pp_table_get_p__0 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = pp_table_get_0(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        {
          ATerm g_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
            return(t);
          }
          t = debug_1(t, g_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  t = SSL_is_string(not_null(n_33));
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm x_9 = t;
  if(PushChoice()==0)
    {
      ATerm g_34 = NULL;
      g_34 = t;
      t = is_string_0(t);
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(g_34));
      PopChoice();
    }
  else
    {
      t = x_9;
      {
        ATerm y_9 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            t = map_1(t, trm2abox_0);
            PopChoice();
          }
        else
          {
            t = y_9;
            {
              ATerm i_34 = NULL;
              ATerm k_34 = NULL,l_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
              i_34 = t;
              {
                ATerm m_34 = NULL;
                ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
                t = not_null(i_34);
                m_34 = t;
                t = SSL_explode_term(not_null(m_34));
                o_34 = t;
                u_33 :
                if(match_cons(o_34, sym_TCons_2))
                  {
                    p_34 = ATgetArgument(o_34, 0);
                    q_34 = ATgetArgument(o_34, 1);
                    v_33 :
                    if(match_cons(q_34, sym_TCons_2))
                      {
                        r_34 = ATgetArgument(q_34, 0);
                        s_34 = ATgetArgument(q_34, 1);
                        w_33 :
                        if(match_cons(s_34, sym_TNil_0))
                          {
                            if(k_34 != NULL && k_34 != p_34)
                              _fail(p_34);
                            else
                              k_34 = p_34;
                            if(l_34 != NULL && l_34 != r_34)
                              _fail(r_34);
                            else
                              l_34 = r_34;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0));
                t = pp_table_get_p__0(t);
                t_34 = t;
                d_34 :
                if(match_cons(t_34, sym_TCons_2))
                  {
                    u_34 = ATgetArgument(t_34, 0);
                    v_34 = ATgetArgument(t_34, 1);
                    e_34 :
                    if(match_cons(v_34, sym_TCons_2))
                      {
                        w_34 = ATgetArgument(v_34, 0);
                        x_34 = ATgetArgument(v_34, 1);
                        f_34 :
                        if(match_cons(x_34, sym_TNil_0))
                          {
                            ATerm h_35 = NULL;
                            t = not_null(l_34);
                            {
                              ATerm h_1 (ATerm t)
                              {
                                ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
                                a_35 = t;
                                z_33 :
                                if(match_cons(a_35, sym_TCons_2))
                                  {
                                    b_35 = ATgetArgument(a_35, 0);
                                    c_35 = ATgetArgument(a_35, 1);
                                    a_34 :
                                    if(match_cons(c_35, sym_TCons_2))
                                      {
                                        d_35 = ATgetArgument(c_35, 0);
                                        e_35 = ATgetArgument(c_35, 1);
                                        b_34 :
                                        if(match_cons(e_35, sym_TNil_0))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = arg2abox_0(t);
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
                              t = nzip_1(t, h_1);
                              h_35 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = instantiate_0(t);
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
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = SSL_int_to_string(not_null(r_35));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  a_36 :
  if(match_cons(b_36, sym_Path1_1))
    {
      c_36 = ATgetArgument(b_36, 0);
      t = not_null(c_36);
    }
  else
    {
      if(match_cons(b_36, sym_Path_2))
        {
          c_36 = ATgetArgument(b_36, 0);
          d_36 = ATgetArgument(b_36, 1);
          {
            ATerm n_36 = NULL,v_36 = NULL;
            t = not_null(d_36);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
                o_36 = t;
                y_35 :
                if(match_cons(o_36, sym_selector_2))
                  {
                    p_36 = ATgetArgument(o_36, 0);
                    q_36 = ATgetArgument(o_36, 1);
                    {
                      ATerm t_36 = NULL;
                      t = not_null(p_36);
                      t = int_to_string_0(t);
                      t_36 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_36), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Nil_0)))));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, i_1);
              t = concat_0(t);
              v_36 = t;
              if(n_36 != NULL && n_36 != v_36)
                _fail(v_36);
              else
                n_36 = v_36;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_36), not_null(n_36));
              t = concat_strings_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Path1_1))
    {
      i_37 = ATgetArgument(h_37, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_37), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(h_37, sym_Path_2))
        {
          i_37 = ATgetArgument(h_37, 0);
          j_37 = ATgetArgument(h_37, 1);
          {
            ATerm r_37 = NULL,z_37 = NULL;
            t = not_null(j_37);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
                s_37 = t;
                e_37 :
                if(match_cons(s_37, sym_selector_2))
                  {
                    t_37 = ATgetArgument(s_37, 0);
                    u_37 = ATgetArgument(s_37, 1);
                    t = not_null(t_37);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, j_1);
              z_37 = t;
              if(r_37 != NULL && r_37 != z_37)
                _fail(z_37);
              else
                r_37 = z_37;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_37), not_null(r_37));
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
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_PP_Entry_2))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      {
        ATerm m_38 = NULL;
        t = not_null(i_38);
        t = mk_key_0(t);
        m_38 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(i_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = table_put_0(t);
        t = not_null(i_38);
        t = path_to_string_0(t);
        {
          ATerm k_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
            return(t);
          }
          t = notify_1(t, k_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_38 = NULL;
  z_38 = t;
  t = SSL_string_to_int(not_null(z_38));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  ATerm i_40 (ATerm t)
  {
    ATerm e_40 = NULL;
    t = not_null(u_39);
    t = De_Escape_0(t);
    e_40 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_39), not_null(e_40));
    return(t);
  }
  ATerm j_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  v_39 = t;
  k_39 :
  if(match_cons(v_39, sym_Cons_2))
    {
      t_39 = ATgetArgument(v_39, 0);
      u_39 = ATgetArgument(v_39, 1);
      l_39 :
      if(match_cons(u_39, sym_Cons_2))
        {
          r_39 = ATgetArgument(u_39, 0);
          s_39 = ATgetArgument(u_39, 1);
          m_39 :
          if(match_int(r_39, 34))
            {
              n_39 :
              if(match_int(t_39, 92))
                {
                  ATerm z_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm x_39 = NULL;
                      t = not_null(s_39);
                      t = De_Escape_0(t);
                      x_39 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(x_39));
                      PopChoice();
                    }
                  else
                    {
                      t = z_9;
                      t = i_40(t);
                    }
                }
              else
                t = i_40(t);
            }
          else
            {
              if(match_int(r_39, 92))
                {
                  o_39 :
                  if(match_int(t_39, 92))
                    {
                      ATerm i_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm a_40 = NULL;
                          t = not_null(s_39);
                          t = De_Escape_0(t);
                          a_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(a_40));
                          PopChoice();
                        }
                      else
                        {
                          t = i_10;
                          t = i_40(t);
                        }
                    }
                  else
                    t = i_40(t);
                }
              else
                {
                  p_39 :
                  t = i_40(t);
                }
            }
        }
      else
        {
          q_39 :
          t = i_40(t);
        }
    }
  else
    {
      if(match_cons(v_39, sym_Nil_0))
        t = j_40(t);
      else
        _fail(t);
    }
  return(t);
}
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  t = De_Escape_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm n_40 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = j_54(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        t = Cons_2(t, _id, n_40);
      }
    return(t);
  }
  t = n_40(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Cons_2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      t = not_null(s_40);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Cons_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      t = not_null(z_40);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_10;
    k_10 = t;
    {
      ATerm j_41 = NULL;
      t = Hd_0(t);
      j_41 = t;
      e_41 :
      if(!(match_int(j_41, 34)))
        _fail(t);
    }
    t = k_10;
    t = Tl_0(t);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
        k_41 = t;
        g_41 :
        if(match_cons(k_41, sym_Cons_2))
          {
            l_41 = ATgetArgument(k_41, 0);
            m_41 = ATgetArgument(k_41, 1);
            h_41 :
            if(match_int(l_41, 34))
              {
                i_41 :
                if(match_cons(m_41, sym_Nil_0))
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
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_Arg_1))
    {
      a_42 = ATgetArgument(z_41, 0);
      {
        ATerm f_42 = NULL;
        t = not_null(a_42);
        t = string_to_int_0(t);
        f_42 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_42));
      }
    }
  else
    {
      if(match_cons(z_41, sym_Arg2_2))
        {
          a_42 = ATgetArgument(z_41, 0);
          b_42 = ATgetArgument(z_41, 1);
          {
            ATerm k_42 = NULL;
            t = not_null(a_42);
            {
              ATerm m_42 = NULL;
              t = string_to_int_0(t);
              k_42 = t;
              t = not_null(b_42);
              t = string_to_int_0(t);
              m_42 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(k_42), not_null(m_42));
            }
          }
        }
      else
        {
          if(match_cons(z_41, sym_SOpt_2))
            {
              a_42 = ATgetArgument(z_41, 0);
              b_42 = ATgetArgument(z_41, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(a_42), not_null(b_42));
            }
          else
            {
              if(match_cons(z_41, sym_S_1))
                {
                  a_42 = ATgetArgument(z_41, 0);
                  {
                    ATerm u_42 = NULL;
                    t = not_null(a_42);
                    t = de_quote_0(t);
                    t = de_escape_0(t);
                    u_42 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(u_42));
                  }
                }
              else
                {
                  if(match_cons(z_41, sym_selector_2))
                    {
                      a_42 = ATgetArgument(z_41, 0);
                      b_42 = ATgetArgument(z_41, 1);
                      {
                        ATerm z_42 = NULL;
                        t = not_null(a_42);
                        t = string_to_int_0(t);
                        z_42 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(z_42), not_null(b_42));
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
ATerm topdown_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm v_43 (ATerm t)
  {
    t = k_55(t);
    t = _all(t, v_43);
    return(t);
  }
  t = v_43(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, t_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_PP_Table_1))
    {
      z_43 = ATgetArgument(y_43, 0);
      t = not_null(z_43);
      t = reverse_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = makePPEntry_0(t);
          t = StoreEntry_0(t);
          return(t);
        }
        t = map_1(t, u_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_10;
  l_10 = t;
  {
    ATerm w_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, w_1, _id);
    t = printnl_0(t);
  }
  t = l_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_10;
  v_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = v_10;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm w_10 = t;
  if(PushChoice()==0)
    {
      ATerm x_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Strict_0);
        return(t);
      }
      t = has_option_1(t, x_1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
      t = fatal_error_0(t);
      PopChoice();
    }
  else
    {
      t = w_10;
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0));
      t = error_0(t);
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  p_44 = t;
  l_44 :
  if(match_cons(p_44, sym_TCons_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      m_44 :
      if(match_string(q_44, "in-type"))
        {
          n_44 :
          if(match_cons(r_44, sym_TCons_2))
            {
              s_44 = ATgetArgument(r_44, 0);
              t_44 = ATgetArgument(r_44, 1);
              o_44 :
              if(match_cons(t_44, sym_TNil_0))
                {
                  ATerm v_44 = NULL,w_44 = NULL;
                  ATerm x_44 = NULL;
                  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
                  t = not_null(s_44);
                  x_44 = t;
                  t = SSL_explode_term(not_null(x_44));
                  b_45 = t;
                  g_44 :
                  if(match_cons(b_45, sym_TCons_2))
                    {
                      c_45 = ATgetArgument(b_45, 0);
                      d_45 = ATgetArgument(b_45, 1);
                      h_44 :
                      if(match_cons(d_45, sym_TCons_2))
                        {
                          e_45 = ATgetArgument(d_45, 0);
                          h_45 = ATgetArgument(d_45, 1);
                          i_44 :
                          if(match_cons(e_45, sym_Cons_2))
                            {
                              f_45 = ATgetArgument(e_45, 0);
                              g_45 = ATgetArgument(e_45, 1);
                              j_44 :
                              if(match_cons(g_45, sym_Nil_0))
                                {
                                  k_44 :
                                  if(match_cons(h_45, sym_TNil_0))
                                    {
                                      if(w_44 != NULL && w_44 != c_45)
                                        _fail(c_45);
                                      else
                                        w_44 = c_45;
                                      if(v_44 != NULL && v_44 != f_45)
                                        _fail(f_45);
                                      else
                                        v_44 = f_45;
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
                  t = not_null(w_44);
                  {
                    ATerm x_10 = t;
                    if(PushChoice()==0)
                      {
                        t = f_60(t);
                        PopChoice();
                      }
                    else
                      {
                        t = x_10;
                        t = type_failure_0(t);
                      }
                    t = not_null(v_44);
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
ATerm termid_check_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm n_45 = NULL;
  ATerm p_45 = NULL;
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_45), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = InId_1(t, m_60);
  p_45 = t;
  t = not_null(p_45);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm h_11;
  h_11 = t;
  {
    ATerm y_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm z_1 (ATerm t)
    {
      ATerm z_45 = NULL;
      ATerm b_46 = NULL;
      z_45 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = r_58(t);
      b_46 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_45), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, y_1, z_1);
    t = printnl_0(t);
  }
  t = h_11;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm f_46 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = a_57(t);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = _one(t, f_46);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  l_46 = t;
  i_46 :
  if(match_cons(l_46, sym_TCons_2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      j_46 :
      if(match_cons(n_46, sym_TCons_2))
        {
          o_46 = ATgetArgument(n_46, 0);
          p_46 = ATgetArgument(n_46, 1);
          k_46 :
          if(match_cons(p_46, sym_TNil_0))
            {
              t = not_null(o_46);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm s_46 = NULL;
                  s_46 = t;
                  if(m_46 != NULL && m_46 != s_46)
                    _fail(s_46);
                  else
                    m_46 = s_46;
                  return(t);
                }
                t = oncetd_1(t, a_2);
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
  ATerm x_46 = NULL;
  ATerm z_46 = NULL;
  x_46 = t;
  t = get_options_0(t);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_46), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = in_0(t);
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm j_11;
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = v_59(t);
  t = check_option_0(t);
  t = j_11;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm b_39 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm l_11;
      l_11 = t;
      {
        ATerm k_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = has_option_1(t, k_2);
      }
      t = l_11;
      t = debug_1(t, b_39);
    }
    t = k_11;
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  t = table_create_0(t);
  t = not_null(f_47);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm n_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
        return(t);
      }
      t = notify_1(t, n_2);
      t = ReadFromFile_0(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm h_47 = NULL;
          h_47 = t;
          e_47 :
          if(!(match_string(h_47, "\"pp-tables-0\"")))
            _fail(t);
          return(t);
        }
        t = termid_check_1(t, o_2);
        t = build_pp_table_0(t);
      }
      return(t);
    }
    t = map_1(t, m_2);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_49 (ATerm))
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym_Cons_2))
    {
      n_47 = ATgetArgument(m_47, 0);
      o_47 = ATgetArgument(m_47, 1);
      t = p_49(t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm r_47 = NULL;
          r_47 = t;
          if(n_47 != NULL && n_47 != r_47)
            _fail(r_47);
          else
            n_47 = r_47;
          return(t);
        }
        t = fetch_1(t, p_2);
        t = not_null(o_47);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  y_47 = t;
  v_47 :
  if(match_cons(y_47, sym_TCons_2))
    {
      z_47 = ATgetArgument(y_47, 0);
      a_48 = ATgetArgument(y_47, 1);
      w_47 :
      if(match_cons(a_48, sym_TCons_2))
        {
          b_48 = ATgetArgument(a_48, 0);
          c_48 = ATgetArgument(a_48, 1);
          x_47 :
          if(match_cons(c_48, sym_TNil_0))
            {
              t = not_null(z_47);
              {
                ATerm g_48 (ATerm t)
                {
                  ATerm m_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(b_48);
                      PopChoice();
                    }
                  else
                    {
                      t = m_11;
                      {
                        ATerm n_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm q_2 (ATerm t)
                            {
                              t = not_null(b_48);
                              return(t);
                            }
                            t = HdMember_1(t, q_2);
                            t = g_48(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_11;
                            t = Cons_2(t, _id, g_48);
                          }
                      }
                    }
                  return(t);
                }
                t = g_48(t);
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
ATerm foldr_3 (ATerm t, ATerm k_48 (ATerm), ATerm l_48 (ATerm), ATerm m_48 (ATerm))
{
  ATerm o_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = k_48(t);
      PopChoice();
    }
  else
    {
      t = o_11;
      {
        ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
        o_48 = t;
        n_48 :
        if(match_cons(o_48, sym_Cons_2))
          {
            p_48 = ATgetArgument(o_48, 0);
            q_48 = ATgetArgument(o_48, 1);
            {
              ATerm t_48 = NULL;
              t = not_null(p_48);
              {
                ATerm v_48 = NULL;
                t = m_48(t);
                t_48 = t;
                t = not_null(q_48);
                t = foldr_3(t, k_48, l_48, m_48);
                v_48 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_48), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = l_48(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_50 (ATerm), ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm g_49 = NULL;
  ATerm i_49 = NULL;
  g_49 = t;
  {
    ATerm j_49 = NULL;
    ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL;
    t = not_null(g_49);
    j_49 = t;
    t = SSL_explode_term(not_null(j_49));
    l_49 = t;
    d_49 :
    if(match_cons(l_49, sym_TCons_2))
      {
        m_49 = ATgetArgument(l_49, 0);
        n_49 = ATgetArgument(l_49, 1);
        e_49 :
        if(match_cons(n_49, sym_TCons_2))
          {
            o_49 = ATgetArgument(n_49, 0);
            q_49 = ATgetArgument(n_49, 1);
            f_49 :
            if(match_cons(q_49, sym_TNil_0))
              {
                if(i_49 != NULL && i_49 != o_49)
                  _fail(o_49);
                else
                  i_49 = o_49;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_49);
    t = foldr_3(t, a_50, b_50, c_50);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm y_49 (ATerm t)
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        ATerm w_49 = NULL;
        t = j_50(t);
        w_49 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_49), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = p_11;
        {
          ATerm r_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, r_2, union_0, y_49);
        }
      }
    return(t);
  }
  t = y_49(t);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  m_50 = t;
  h_50 :
  if(match_cons(m_50, sym_TCons_2))
    {
      n_50 = ATgetArgument(m_50, 0);
      o_50 = ATgetArgument(m_50, 1);
      i_50 :
      if(match_cons(o_50, sym_TCons_2))
        {
          p_50 = ATgetArgument(o_50, 0);
          q_50 = ATgetArgument(o_50, 1);
          l_50 :
          if(match_cons(q_50, sym_TNil_0))
            {
              t = not_null(n_50);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm t_50 = NULL,u_50 = NULL;
                  t_50 = t;
                  f_50 :
                  if(match_cons(t_50, sym_PP_Table_1))
                    {
                      u_50 = ATgetArgument(t_50, 0);
                      t = not_null(u_50);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = collect_1(t, s_2);
                t = reverse_0(t);
                t = read_pp_tables_0(t);
                t = not_null(p_50);
                t = trm2abox_0(t);
                {
                  ATerm x_2 (ATerm t)
                  {
                    ATerm w_50 = NULL;
                    t = is_list_0(t);
                    w_50 = t;
                    t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(w_50));
                    return(t);
                  }
                  t = try_1(t, x_2);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = not_null(n_50);
                      return(t);
                    }
                    t = split_2(t, z_2, _id);
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
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_51 = NULL;
  ATerm q_11;
  q_11 = t;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm e_51 = NULL,f_51 = NULL;
      e_51 = t;
      c_51 :
      if(match_cons(e_51, sym_Program_1))
        {
          f_51 = ATgetArgument(e_51, 0);
          if(d_51 != NULL && d_51 != f_51)
            _fail(f_51);
          else
            d_51 = f_51;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, b_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_51), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = q_11;
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
  ATerm m_51 = NULL,n_51 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm r_11 = t;
      if(PushChoice()==0)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm o_51 = NULL;
            o_51 = t;
            h_51 :
            if(!(match_cons(o_51, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_3);
          PopChoice();
          _fail(t);
        }
      else
        t = r_11;
      return(t);
    }
    ATerm f_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, d_3, f_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm l_3 (ATerm t)
        {
          ATerm p_51 = NULL,q_51 = NULL;
          p_51 = t;
          j_51 :
          if(match_cons(p_51, sym_Runtime_1))
            {
              q_51 = ATgetArgument(p_51, 0);
              if(n_51 != NULL && n_51 != q_51)
                _fail(q_51);
              else
                n_51 = q_51;
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
      {
        ATerm m_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm r_51 = NULL,s_51 = NULL;
            r_51 = t;
            l_51 :
            if(match_cons(r_51, sym_Program_1))
              {
                s_51 = ATgetArgument(r_51, 0);
                if(m_51 != NULL && m_51 != s_51)
                  _fail(s_51);
                else
                  m_51 = s_51;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_3);
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, m_3, n_3);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_51), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, c_3);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm b_52 = NULL;
  b_52 = t;
  a_52 :
  if(!(match_cons(b_52, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  g_52 = t;
  d_52 :
  if(match_cons(g_52, sym_TCons_2))
    {
      i_52 = ATgetArgument(g_52, 0);
      j_52 = ATgetArgument(g_52, 1);
      e_52 :
      if(match_cons(j_52, sym_TCons_2))
        {
          k_52 = ATgetArgument(j_52, 0);
          l_52 = ATgetArgument(j_52, 1);
          f_52 :
          if(match_cons(l_52, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(i_52), not_null(k_52));
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
ATerm TCons_2 (ATerm t, ATerm p_38 (ATerm), ATerm q_38 (ATerm))
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_TCons_2))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      {
        ATerm y_52 = NULL;
        t = not_null(u_52);
        {
          ATerm a_53 = NULL;
          t = p_38(t);
          y_52 = t;
          t = not_null(v_52);
          t = q_38(t);
          a_53 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_52), not_null(a_53));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  j_53 = t;
  g_53 :
  if(match_cons(j_53, sym_TCons_2))
    {
      k_53 = ATgetArgument(j_53, 0);
      n_53 = ATgetArgument(j_53, 1);
      h_53 :
      if(match_cons(n_53, sym_TCons_2))
        {
          o_53 = ATgetArgument(n_53, 0);
          p_53 = ATgetArgument(n_53, 1);
          i_53 :
          if(match_cons(p_53, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(k_53), not_null(o_53));
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
  ATerm b_54 = NULL;
  ATerm s_11;
  s_11 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm t_11 = t;
      if(PushChoice()==0)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm c_54 = NULL,d_54 = NULL;
            c_54 = t;
            w_53 :
            if(match_cons(c_54, sym_Output_1))
              {
                d_54 = ATgetArgument(c_54, 0);
                if(b_54 != NULL && b_54 != d_54)
                  _fail(d_54);
                else
                  b_54 = d_54;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_3);
          PopChoice();
        }
      else
        {
          t = t_11;
          {
            ATerm e_54 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            e_54 = t;
            if(b_54 != NULL && b_54 != e_54)
              _fail(e_54);
            else
              b_54 = e_54;
          }
        }
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_3, q_3);
  }
  t = s_11;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          t = not_null(b_54);
          return(t);
        }
        t = split_2(t, d_4, _id);
        return(t);
      }
      t = TCons_2(t, c_4, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, t_3);
    {
      ATerm u_11 = t;
      if(PushChoice()==0)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm h_4 (ATerm t)
            {
              ATerm f_54 = NULL;
              f_54 = t;
              y_53 :
              if(!(match_cons(f_54, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, h_4);
            return(t);
          }
          ATerm g_4 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, f_4, g_4);
          PopChoice();
        }
      else
        {
          t = u_11;
          {
            ATerm i_4 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, i_4);
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
ATerm apply_strategy_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm p_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,w_54 = NULL;
  ATerm v_11;
  v_11 = t;
  t = dtime_0(t);
  t = v_11;
  t = z_59(t);
  {
    ATerm w_11;
    w_11 = t;
    {
      ATerm q_54 = NULL;
      t = dtime_0(t);
      q_54 = t;
      if(p_54 != NULL && p_54 != q_54)
        _fail(q_54);
      else
        p_54 = q_54;
    }
    t = w_11;
    r_54 = t;
    m_54 :
    if(match_cons(r_54, sym_TCons_2))
      {
        s_54 = ATgetArgument(r_54, 0);
        t_54 = ATgetArgument(r_54, 1);
        n_54 :
        if(match_cons(t_54, sym_TCons_2))
          {
            u_54 = ATgetArgument(t_54, 0);
            w_54 = ATgetArgument(t_54, 1);
            o_54 :
            if(match_cons(w_54, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_54)), not_null(s_54)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_54), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_55 = NULL;
  d_55 = t;
  t = SSL_ReadFromFile(not_null(d_55));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_44 (ATerm), ATerm z_44 (ATerm))
{
  ATerm j_55 = NULL;
  ATerm p_55 = NULL;
  j_55 = t;
  {
    ATerm r_55 = NULL;
    t = y_44(t);
    p_55 = t;
    t = not_null(j_55);
    t = z_44(t);
    r_55 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_55), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_55 = NULL;
  ATerm x_11;
  x_11 = t;
  {
    ATerm y_11 = t;
    if(PushChoice()==0)
      {
        ATerm j_4 (ATerm t)
        {
          ATerm a_56 = NULL,b_56 = NULL;
          a_56 = t;
          x_55 :
          if(match_cons(a_56, sym_Input_1))
            {
              b_56 = ATgetArgument(a_56, 0);
              if(z_55 != NULL && z_55 != b_56)
                _fail(b_56);
              else
                z_55 = b_56;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_4);
        PopChoice();
      }
    else
      {
        t = y_11;
        {
          ATerm c_56 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          c_56 = t;
          if(z_55 != NULL && z_55 != c_56)
            _fail(c_56);
          else
            z_55 = c_56;
        }
      }
  }
  t = x_11;
  {
    ATerm k_4 (ATerm t)
    {
      t = not_null(z_55);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_56 = NULL;
  g_56 = t;
  f_56 :
  if(!(match_cons(g_56, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        {
          ATerm a_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = a_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_4);
  t = y_59(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_56 = NULL;
  i_56 = t;
  t = SSL_table_create(not_null(i_56));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_56 = NULL;
  m_56 = t;
  {
    ATerm b_12;
    b_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_56), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = b_12;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_12 = t;
  if(PushChoice()==0)
    {
      ATerm q_4 (ATerm t)
      {
        ATerm c_57 = NULL;
        c_57 = t;
        p_56 :
        if(!(match_string(c_57, "-S")))
          {
            if(!(match_string(c_57, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, q_4, r_4, s_4);
      PopChoice();
    }
  else
    {
      t = e_12;
      {
        ATerm f_12 = t;
        if(PushChoice()==0)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm d_57 = NULL;
              d_57 = t;
              q_56 :
              if(!(match_string(d_57, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, u_4, w_4, x_4);
            PopChoice();
          }
        else
          {
            t = f_12;
            {
              ATerm g_12 = t;
              if(PushChoice()==0)
                {
                  ATerm y_4 (ATerm t)
                  {
                    ATerm e_57 = NULL;
                    e_57 = t;
                    r_56 :
                    if(!(match_string(e_57, "-v")))
                      {
                        if(!(match_string(e_57, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm z_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, y_4, z_4, a_5);
                  PopChoice();
                }
              else
                {
                  t = g_12;
                  {
                    ATerm h_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm m_5 (ATerm t)
                        {
                          ATerm f_57 = NULL;
                          f_57 = t;
                          s_56 :
                          if(!(match_string(f_57, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_5 (ATerm t)
                        {
                          ATerm g_57 = NULL;
                          g_57 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_57));
                          return(t);
                        }
                        ATerm o_5 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, m_5, n_5, o_5);
                        PopChoice();
                      }
                    else
                      {
                        t = h_12;
                        {
                          ATerm i_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm p_5 (ATerm t)
                              {
                                ATerm i_57 = NULL;
                                i_57 = t;
                                u_56 :
                                if(!(match_string(i_57, "-i")))
                                  {
                                    if(!(match_string(i_57, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm q_5 (ATerm t)
                              {
                                ATerm j_57 = NULL;
                                j_57 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_57));
                                return(t);
                              }
                              ATerm r_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, p_5, q_5, r_5);
                              PopChoice();
                            }
                          else
                            {
                              t = i_12;
                              {
                                ATerm j_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm s_5 (ATerm t)
                                    {
                                      ATerm l_57 = NULL;
                                      l_57 = t;
                                      w_56 :
                                      if(!(match_string(l_57, "-o")))
                                        {
                                          if(!(match_string(l_57, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_5 (ATerm t)
                                    {
                                      ATerm m_57 = NULL;
                                      m_57 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_57));
                                      return(t);
                                    }
                                    ATerm v_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_5, u_5, v_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_12;
                                    {
                                      ATerm l_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm w_5 (ATerm t)
                                          {
                                            ATerm o_57 = NULL;
                                            o_57 = t;
                                            y_56 :
                                            if(!(match_string(o_57, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm y_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, w_5, x_5, y_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_12;
                                          {
                                            ATerm z_5 (ATerm t)
                                            {
                                              ATerm p_57 = NULL;
                                              p_57 = t;
                                              z_56 :
                                              if(!(match_string(p_57, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm d_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm f_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, z_5, d_6, f_6);
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
  ATerm u_57 = NULL;
  u_57 = t;
  t = SSL_table_destroy(not_null(u_57));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  t = SSL_exit(not_null(y_57));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  t = SSL_implode_string(not_null(c_58));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm f_58 (ATerm t)
  {
    ATerm m_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, f_58);
        PopChoice();
      }
    else
      {
        t = m_12;
        t = Nil_0(t);
        t = z_53(t);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_12;
      {
        ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
        i_58 = t;
        h_58 :
        if(match_cons(i_58, sym_Cons_2))
          {
            j_58 = ATgetArgument(i_58, 0);
            k_58 = ATgetArgument(i_58, 1);
            t = not_null(j_58);
            {
              ATerm g_6 (ATerm t)
              {
                t = not_null(k_58);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, g_6);
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
  ATerm q_58 = NULL;
  q_58 = t;
  t = SSL_explode_string(not_null(q_58));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_43 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm u_58 (ATerm t)
  {
    ATerm o_12 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = o_12;
        t = Cons_2(t, l_53, u_58);
      }
    return(t);
  }
  t = u_58(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  a_59 = t;
  w_58 :
  if(match_cons(a_59, sym_TCons_2))
    {
      b_59 = ATgetArgument(a_59, 0);
      c_59 = ATgetArgument(a_59, 1);
      x_58 :
      if(match_cons(b_59, sym_Nil_0))
        {
          y_58 :
          if(match_cons(c_59, sym_TCons_2))
            {
              d_59 = ATgetArgument(c_59, 0);
              e_59 = ATgetArgument(c_59, 1);
              z_58 :
              if(match_cons(e_59, sym_TNil_0))
                t = not_null(d_59);
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
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL,a_60 = NULL;
  r_59 = t;
  k_59 :
  if(match_cons(r_59, sym_TCons_2))
    {
      s_59 = ATgetArgument(r_59, 0);
      w_59 = ATgetArgument(r_59, 1);
      l_59 :
      if(match_cons(s_59, sym_Cons_2))
        {
          t_59 = ATgetArgument(s_59, 0);
          u_59 = ATgetArgument(s_59, 1);
          m_59 :
          if(match_cons(w_59, sym_TCons_2))
            {
              x_59 = ATgetArgument(w_59, 0);
              a_60 = ATgetArgument(w_59, 1);
              q_59 :
              if(match_cons(a_60, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_59), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_59), not_null(x_59)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm r_45 (ATerm), ATerm s_45 (ATerm))
{
  ATerm g_60 (ATerm t)
  {
    ATerm p_12 = t;
    if(PushChoice()==0)
      {
        t = r_45(t);
        t = g_60(t);
        PopChoice();
      }
    else
      {
        t = p_12;
        t = s_45(t);
      }
    return(t);
  }
  t = g_60(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_45 (ATerm))
{
  t = repeat_2(t, u_45, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm i_60 = NULL;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_43 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_36 (ATerm))
{
  ATerm r_60 = NULL,s_60 = NULL;
  r_60 = t;
  o_60 :
  if(match_cons(r_60, sym_Program_1))
    {
      s_60 = ATgetArgument(r_60, 0);
      {
        ATerm u_60 = NULL;
        t = not_null(s_60);
        t = k_36(t);
        u_60 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_60));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm c_61 = NULL;
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm e_61 = NULL;
      e_61 = t;
      if(c_61 != NULL && c_61 != e_61)
        _fail(e_61);
      else
        c_61 = e_61;
      return(t);
    }
    t = Program_1(t, j_6);
    return(t);
  }
  t = option_defined_1(t, i_6);
  {
    ATerm k_6 (ATerm t)
    {
      ATerm f_61 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm l_6 (ATerm t)
        {
          t = not_null(c_61);
          return(t);
        }
        t = short_description_1(t, l_6);
        t = concat_strings_0(t);
        f_61 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm m_6 (ATerm t)
      {
        ATerm h_61 = NULL;
        h_61 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_61), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, m_6);
      {
        ATerm n_6 (ATerm t)
        {
          ATerm j_61 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm p_6 (ATerm t)
            {
              t = not_null(c_61);
              return(t);
            }
            t = long_description_1(t, p_6);
            t = concat_strings_0(t);
            j_61 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_61), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, n_6);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  t_61 = t;
  q_61 :
  if(match_cons(t_61, sym_TCons_2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      r_61 :
      if(match_cons(v_61, sym_TCons_2))
        {
          w_61 = ATgetArgument(v_61, 0);
          x_61 = ATgetArgument(v_61, 1);
          s_61 :
          if(match_cons(x_61, sym_TNil_0))
            {
              ATerm q_12;
              q_12 = t;
              t = SSL_printnl(not_null(u_61), not_null(w_61));
              t = q_12;
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
ATerm Undefined_1 (ATerm t, ATerm l_36 (ATerm))
{
  ATerm e_62 = NULL,f_62 = NULL;
  e_62 = t;
  d_62 :
  if(match_cons(e_62, sym_Undefined_1))
    {
      f_62 = ATgetArgument(e_62, 0);
      {
        ATerm h_62 = NULL;
        t = not_null(f_62);
        t = l_36(t);
        h_62 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_62));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm l_62 (ATerm t)
  {
    ATerm r_12 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, t_53, _id);
        PopChoice();
      }
    else
      {
        t = r_12;
        t = Cons_2(t, _id, l_62);
      }
    return(t);
  }
  t = l_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_44 (ATerm))
{
  t = fetch_1(t, f_44);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_62 = NULL;
  n_62 = t;
  m_62 :
  if(!(match_cons(n_62, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm s_12 = t;
  if(PushChoice()==0)
    {
      t = z_54(t);
      PopChoice();
    }
  else
    t = s_12;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
  s_62 = t;
  p_62 :
  if(match_cons(s_62, sym_TCons_2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      q_62 :
      if(match_cons(u_62, sym_TCons_2))
        {
          v_62 = ATgetArgument(u_62, 0);
          w_62 = ATgetArgument(u_62, 1);
          r_62 :
          if(match_cons(w_62, sym_TNil_0))
            t = SSL_table_get(not_null(t_62), not_null(v_62));
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
ATerm table_push_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
  g_63 = t;
  c_63 :
  if(match_cons(g_63, sym_TCons_2))
    {
      h_63 = ATgetArgument(g_63, 0);
      i_63 = ATgetArgument(g_63, 1);
      d_63 :
      if(match_cons(i_63, sym_TCons_2))
        {
          j_63 = ATgetArgument(i_63, 0);
          k_63 = ATgetArgument(i_63, 1);
          e_63 :
          if(match_cons(k_63, sym_TCons_2))
            {
              l_63 = ATgetArgument(k_63, 0);
              m_63 = ATgetArgument(k_63, 1);
              f_63 :
              if(match_cons(m_63, sym_TNil_0))
                {
                  ATerm t_12;
                  t_12 = t;
                  {
                    ATerm q_63 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_12 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = u_12;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      q_63 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_63), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_63), not_null(q_63)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = t_12;
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
ATerm register_usage_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm v_63 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = l_43(t);
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_63), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  e_64 = t;
  b_64 :
  if(match_cons(e_64, sym_Cons_2))
    {
      c_64 = ATgetArgument(e_64, 0);
      d_64 = ATgetArgument(e_64, 1);
      {
        ATerm h_64 = NULL;
        t = not_null(c_64);
        t = a_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_0(t);
        h_64 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_64), not_null(d_64));
      }
    }
  else
    {
      if(match_string(e_64, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm n_64 = NULL;
    n_64 = t;
    m_64 :
    if(!(match_string(n_64, "--help")))
      {
        if(!(match_string(n_64, "-h")))
          {
            if(!(match_string(n_64, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, r_6, s_6, z_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL;
  q_64 = t;
  p_64 :
  if(match_cons(q_64, sym_Cons_2))
    {
      r_64 = ATgetArgument(q_64, 0);
      s_64 = ATgetArgument(q_64, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_64)), not_null(s_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_38 (ATerm), ATerm u_38 (ATerm))
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  a_65 = t;
  z_64 :
  if(match_cons(a_65, sym_Cons_2))
    {
      b_65 = ATgetArgument(a_65, 0);
      c_65 = ATgetArgument(a_65, 1);
      {
        ATerm f_65 = NULL;
        t = not_null(b_65);
        {
          ATerm h_65 = NULL;
          t = t_38(t);
          f_65 = t;
          t = not_null(c_65);
          t = u_38(t);
          h_65 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_65), not_null(h_65));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  m_65 :
  if(!(match_cons(n_65, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm v_12;
  v_12 = t;
  {
    ATerm a_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = j_43(t);
      return(t);
    }
    t = try_1(t, a_7);
  }
  t = v_12;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm p_65 = NULL;
      p_65 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_65));
      return(t);
    }
    ATerm e_7 (ATerm t)
    {
      ATerm w_12 = t;
      if(PushChoice()==0)
        {
          ATerm c_13 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_13;
              t = j_43(t);
              t = Cons_2(t, _id, e_7);
            }
          PopChoice();
        }
      else
        {
          t = w_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_7, e_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL;
    b_66 = t;
    u_65 :
    if(match_cons(b_66, sym_TCons_2))
      {
        c_66 = ATgetArgument(b_66, 0);
        d_66 = ATgetArgument(b_66, 1);
        v_65 :
        if(match_cons(d_66, sym_TCons_2))
          {
            e_66 = ATgetArgument(d_66, 0);
            f_66 = ATgetArgument(d_66, 1);
            w_65 :
            if(match_cons(f_66, sym_TCons_2))
              {
                g_66 = ATgetArgument(f_66, 0);
                h_66 = ATgetArgument(f_66, 1);
                x_65 :
                if(match_cons(h_66, sym_TNil_0))
                  {
                    if(y_65 != NULL && y_65 != c_66)
                      _fail(c_66);
                    else
                      y_65 = c_66;
                    if(z_65 != NULL && z_65 != e_66)
                      _fail(e_66);
                    else
                      z_65 = e_66;
                    if(a_66 != NULL && a_66 != g_66)
                      _fail(g_66);
                    else
                      a_66 = g_66;
                    t = SSL_table_put(not_null(y_65), not_null(z_65), not_null(a_66));
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
  t = d_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_43 (ATerm))
{
  ATerm k_66 = NULL;
  ATerm i_13;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = i_13;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm j_13 = t;
      if(PushChoice()==0)
        {
          t = i_43(t);
          PopChoice();
        }
      else
        {
          t = j_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_7);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm m_13 = t;
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
            t = m_13;
            {
              ATerm j_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm l_66 = NULL;
                  l_66 = t;
                  if(k_66 != NULL && k_66 != l_66)
                    _fail(l_66);
                  else
                    k_66 = l_66;
                  return(t);
                }
                t = Undefined_1(t, l_7);
                return(t);
              }
              t = option_defined_1(t, j_7);
              {
                ATerm n_13;
                n_13 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_66), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = n_13;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_7);
      {
        ATerm y_13;
        y_13 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = y_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm z_13 = t;
    if(PushChoice()==0)
      {
        t = o_59(t);
        PopChoice();
      }
    else
      {
        t = z_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_7);
  t = store_options_0(t);
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, p_59);
        PopChoice();
      }
    else
      {
        t = a_14;
        {
          ATerm b_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, n_59);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = b_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
{
  t = iowrap_3(t, i_59, j_59, default_usage_0);
  return(t);
}
ATerm Ast2abox_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        ATerm o_7 (ATerm t)
        {
          ATerm q_66 = NULL;
          q_66 = t;
          n_66 :
          if(!(match_string(q_66, "-v")))
            _fail(t);
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, o_7, p_7);
        PopChoice();
      }
    else
      {
        t = c_14;
        {
          ATerm q_7 (ATerm t)
          {
            ATerm r_66 = NULL;
            r_66 = t;
            o_66 :
            if(!(match_string(r_66, "-p")))
              _fail(t);
            return(t);
          }
          ATerm z_7 (ATerm t)
          {
            ATerm s_66 = NULL;
            s_66 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(s_66));
            return(t);
          }
          ATerm a_8 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
            return(t);
          }
          t = ArgOption_3(t, q_7, z_7, a_8);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, n_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast2abox_0(t);
  return(t);
}

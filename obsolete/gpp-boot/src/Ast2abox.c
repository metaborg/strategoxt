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
ATerm obsolete_1 (ATerm, ATerm n_43 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm v_41 (ATerm), ATerm w_41 (ATerm));
ATerm Option_2 (ATerm, ATerm t_41 (ATerm), ATerm u_41 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm d_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm d_54 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm m_58 (ATerm));
ATerm length_0 (ATerm);
ATerm S_1 (ATerm, ATerm c_0 (ATerm));
ATerm collect_p__1 (ATerm, ATerm h_38 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm p_58 (ATerm));
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_49 (ATerm), ATerm w_49 (ATerm), ATerm x_49 (ATerm), ATerm y_49 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm h_50 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_52 (ATerm));
ATerm concat_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm k_52 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_54 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_43 (ATerm));
ATerm oncetd_1 (ATerm, ATerm r_55 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm s_42 (ATerm));
ATerm notify_1 (ATerm, ATerm m_38 (ATerm));
ATerm map_1 (ATerm, ATerm l_51 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_57 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_47 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_46 (ATerm), ATerm o_46 (ATerm), ATerm p_46 (ATerm));
ATerm crush_3 (ATerm, ATerm e_48 (ATerm), ATerm f_48 (ATerm), ATerm g_48 (ATerm));
ATerm collect_1 (ATerm, ATerm n_48 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_38 (ATerm), ATerm b_38 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_42 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_33 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm u_51 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_42 (ATerm));
ATerm need_help_1 (ATerm, ATerm v_42 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_38 (ATerm), ATerm f_38 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_41 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_42 (ATerm), ATerm l_42 (ATerm), ATerm m_42 (ATerm));
ATerm Ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm n_43 (ATerm))
{
  ATerm l_2;
  l_2 = t;
  t = n_43(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, e_0);
  }
  t = l_2;
  return(t);
}
ATerm usage_p__0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
    return(t);
  }
  t = obsolete_1(t, f_0);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm v_41 (ATerm), ATerm w_41 (ATerm))
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  e_1 = t;
  c_1 :
  if(match_cons(e_1, sym_Cons_2))
    {
      f_1 = ATgetArgument(e_1, 0);
      g_1 = ATgetArgument(e_1, 1);
      d_1 :
      if(match_cons(g_1, sym_Cons_2))
        {
          h_1 = ATgetArgument(g_1, 0);
          i_1 = ATgetArgument(g_1, 1);
          {
            ATerm m_1 = NULL;
            t = not_null(f_1);
            t = v_41(t);
            t = not_null(h_1);
            t = w_41(t);
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_1), not_null(i_1));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm t_41 (ATerm), ATerm u_41 (ATerm))
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  t_1 = t;
  s_1 :
  if(match_cons(t_1, sym_Cons_2))
    {
      u_1 = ATgetArgument(t_1, 0);
      v_1 = ATgetArgument(t_1, 1);
      {
        ATerm y_1 = NULL;
        t = not_null(u_1);
        t = t_41(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = u_41(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_1), not_null(v_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_4 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_4;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  ATerm b_6 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = b_6;
      {
        ATerm y_6 = t;
        if(PushChoice()==0)
          {
            ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL;
            ATerm n_2 (ATerm t)
            {
              if(g_2 != NULL && g_2 != j_2)
                _fail(j_2);
              else
                g_2 = j_2;
              if(h_2 != NULL && h_2 != k_2)
                _fail(k_2);
              else
                h_2 = k_2;
              t = not_null(g_2);
              t = is_list_0(t);
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_2), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = conc_0(t);
              t = flat_list_0(t);
              return(t);
            }
            i_2 = t;
            e_2 :
            if(match_cons(i_2, sym_Cons_2))
              {
                j_2 = ATgetArgument(i_2, 0);
                k_2 = ATgetArgument(i_2, 1);
                f_2 :
                if(match_cons(j_2, sym_Nil_0))
                  {
                    ATerm z_6 = t;
                    if(PushChoice()==0)
                      {
                        if(h_2 != NULL && h_2 != k_2)
                          _fail(k_2);
                        else
                          h_2 = k_2;
                        {
                          ATerm g_0 (ATerm t)
                          {
                            t = not_null(h_2);
                            t = flat_list_0(t);
                            return(t);
                          }
                          t = Cons_2(t, Nil_0, g_0);
                        }
                        PopChoice();
                      }
                    else
                      {
                        t = z_6;
                        t = n_2(t);
                      }
                  }
                else
                  t = n_2(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = y_6;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  v_2 :
  if(match_cons(w_2, sym_Arg_1))
    {
      x_2 = ATgetArgument(w_2, 0);
      {
        ATerm a_3 = NULL;
        ATerm b_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm d_3 = NULL;
          t = d_0(t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = index_0(t);
          d_3 = t;
          if(a_3 != NULL && a_3 != d_3)
            _fail(d_3);
          else
            a_3 = d_3;
        }
        t = not_null(a_3);
      }
    }
  else
    {
      if(match_cons(w_2, sym_Arg2_2))
        {
          x_2 = ATgetArgument(w_2, 0);
          y_2 = ATgetArgument(w_2, 1);
          {
            ATerm g_3 = NULL,h_3 = NULL;
            ATerm i_3 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm k_3 = NULL;
              t = d_0(t);
              i_3 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_3), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm l_3 = NULL;
                t = index_0(t);
                k_3 = t;
                if(g_3 != NULL && g_3 != k_3)
                  _fail(k_3);
                else
                  g_3 = k_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_3), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = index_0(t);
                l_3 = t;
                if(h_3 != NULL && h_3 != l_3)
                  _fail(l_3);
                else
                  h_3 = l_3;
              }
            }
            t = not_null(h_3);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    t = _all(t, t_3);
    t = d_54(t);
    return(t);
  }
  t = t_3(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  z_3 = t;
  w_3 :
  if(match_cons(z_3, sym_TCons_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      x_3 :
      if(match_cons(b_4, sym_TCons_2))
        {
          c_4 = ATgetArgument(b_4, 0);
          d_4 = ATgetArgument(b_4, 1);
          y_3 :
          if(match_cons(d_4, sym_TNil_0))
            {
              ATerm g_4 = NULL;
              ATerm h_4 = NULL;
              t = not_null(a_4);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm i_0 (ATerm t)
                  {
                    ATerm a_7 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_0 (ATerm t)
                        {
                          t = not_null(c_4);
                          return(t);
                        }
                        t = Instantiate_1(t, j_0);
                        PopChoice();
                      }
                    else
                      {
                        t = a_7;
                        t = flat_list_0(t);
                      }
                    return(t);
                  }
                  t = try_1(t, i_0);
                  return(t);
                }
                t = bottomup_1(t, h_0);
                h_4 = t;
                if(g_4 != NULL && g_4 != h_4)
                  _fail(h_4);
                else
                  g_4 = h_4;
              }
              t = not_null(g_4);
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
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym_TNil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(o_4, sym_TCons_2))
        {
          p_4 = ATgetArgument(o_4, 0);
          q_4 = ATgetArgument(o_4, 1);
          {
            ATerm v_4 = NULL;
            t = not_null(q_4);
            t = tuple2list_0(t);
            v_4 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_4), not_null(v_4));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
    ATerm b_7 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_7;
        {
          ATerm k_7 = t;
          if(PushChoice()==0)
            {
              t = Cons_2(t, _id, Nil_0);
              PopChoice();
            }
          else
            {
              t = k_7;
              {
                ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,s_5 = NULL;
                i_5 = t;
                d_5 :
                if(match_cons(i_5, sym_Cons_2))
                  {
                    j_5 = ATgetArgument(i_5, 0);
                    k_5 = ATgetArgument(i_5, 1);
                    e_5 :
                    if(match_cons(k_5, sym_Cons_2))
                      {
                        l_5 = ATgetArgument(k_5, 0);
                        s_5 = ATgetArgument(k_5, 1);
                        if(f_5 != NULL && f_5 != j_5)
                          _fail(j_5);
                        else
                          f_5 = j_5;
                        if(g_5 != NULL && g_5 != l_5)
                          _fail(l_5);
                        else
                          g_5 = l_5;
                        if(h_5 != NULL && h_5 != s_5)
                          _fail(s_5);
                        else
                          h_5 = s_5;
                        {
                          ATerm k_0 (ATerm t)
                          {
                            ATerm t_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = m_58(t);
                            t_5 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = instantiate_0(t);
                            return(t);
                          }
                          ATerm l_0 (ATerm t)
                          {
                            t = not_null(h_5);
                            t = v_5(t);
                            return(t);
                          }
                          t = Cons_2(t, k_0, l_0);
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
  t = v_5(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm l_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = l_7;
      {
        ATerm z_5 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_5), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm S_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm i_6 = NULL,j_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym_S_1))
    {
      j_6 = ATgetArgument(i_6, 0);
      {
        ATerm m_7 = t;
        if(PushChoice()==0)
          {
            ATerm l_6 = NULL;
            t = not_null(j_6);
            t = c_0(t);
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(l_6));
            PopChoice();
          }
        else
          {
            t = m_7;
            {
              ATerm o_6 = NULL;
              t = not_null(j_6);
              t = c_0(t);
              o_6 = t;
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(o_6));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm h_38 (ATerm))
{
  ATerm x_6 (ATerm t)
  {
    ATerm n_7 = t;
    if(PushChoice()==0)
      {
        ATerm v_6 = NULL;
        t = h_38(t);
        v_6 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_6), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = n_7;
        {
          ATerm m_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, m_0, conc_0, x_6);
        }
      }
    return(t);
  }
  t = x_6(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  c_7 :
  if(match_cons(f_7, sym_TCons_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      d_7 :
      if(match_cons(h_7, sym_TCons_2))
        {
          i_7 = ATgetArgument(h_7, 0);
          j_7 = ATgetArgument(h_7, 1);
          e_7 :
          if(match_cons(j_7, sym_TNil_0))
            t = SSL_mod(not_null(g_7), not_null(i_7));
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
  ATerm p_7 = NULL;
  ATerm r_7 = NULL;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = mod_0(t);
  r_7 = t;
  o_7 :
  if(!(match_int(r_7, 0)))
    _fail(t);
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  b_8 = t;
  y_7 :
  if(match_cons(b_8, sym_TCons_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      z_7 :
      if(match_cons(d_8, sym_TCons_2))
        {
          e_8 = ATgetArgument(d_8, 0);
          f_8 = ATgetArgument(d_8, 1);
          a_8 :
          if(match_cons(f_8, sym_TNil_0))
            {
              ATerm i_8 = NULL;
              ATerm q_7 = t;
              if(PushChoice()==0)
                {
                  ATerm j_8 = NULL;
                  t = not_null(c_8);
                  t = even_0(t);
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm m_8 = NULL;
                    t = p_58(t);
                    j_8 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_8), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = arg2abox_0(t);
                    m_8 = t;
                    if(i_8 != NULL && i_8 != m_8)
                      _fail(m_8);
                    else
                      i_8 = m_8;
                  }
                  PopChoice();
                }
              else
                {
                  t = q_7;
                  {
                    ATerm s_8 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    {
                      ATerm u_8 = NULL;
                      t = p_58(t);
                      s_8 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_8), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_8), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = arg2abox_0(t);
                      u_8 = t;
                      if(i_8 != NULL && i_8 != u_8)
                        _fail(u_8);
                      else
                        i_8 = u_8;
                    }
                  }
                }
              t = not_null(i_8);
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
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  g_9 = t;
  b_9 :
  if(match_cons(g_9, sym_TCons_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      c_9 :
      if(match_int(h_9, 1))
        {
          d_9 :
          if(match_cons(i_9, sym_TCons_2))
            {
              j_9 = ATgetArgument(i_9, 0);
              m_9 = ATgetArgument(i_9, 1);
              e_9 :
              if(match_cons(j_9, sym_Cons_2))
                {
                  k_9 = ATgetArgument(j_9, 0);
                  l_9 = ATgetArgument(j_9, 1);
                  f_9 :
                  if(match_cons(m_9, sym_TNil_0))
                    t = not_null(k_9);
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
  ATerm u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  u_9 = t;
  r_9 :
  if(match_cons(u_9, sym_TCons_2))
    {
      v_9 = ATgetArgument(u_9, 0);
      x_9 = ATgetArgument(u_9, 1);
      s_9 :
      if(match_cons(x_9, sym_TCons_2))
        {
          y_9 = ATgetArgument(x_9, 0);
          z_9 = ATgetArgument(x_9, 1);
          t_9 :
          if(match_cons(z_9, sym_TNil_0))
            {
              ATerm s_7 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(v_9), not_null(y_9));
                  PopChoice();
                }
              else
                {
                  t = s_7;
                  t = SSL_subtr(not_null(v_9), not_null(y_9));
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
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  h_10 = t;
  e_10 :
  if(match_cons(h_10, sym_TCons_2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      f_10 :
      if(match_cons(j_10, sym_TCons_2))
        {
          k_10 = ATgetArgument(j_10, 0);
          l_10 = ATgetArgument(j_10, 1);
          g_10 :
          if(match_cons(l_10, sym_TNil_0))
            {
              ATerm t_7;
              t_7 = t;
              {
                ATerm u_7 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(i_10), not_null(k_10));
                    PopChoice();
                  }
                else
                  {
                    t = u_7;
                    t = SSL_gtr(not_null(i_10), not_null(k_10));
                  }
              }
              t = t_7;
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
  ATerm j_11 = NULL;
  ATerm v_7 = t;
  if(PushChoice()==0)
    {
      ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
      r_11 = t;
      w_10 :
      if(match_cons(r_11, sym_TCons_2))
        {
          s_11 = ATgetArgument(r_11, 0);
          t_11 = ATgetArgument(r_11, 1);
          x_10 :
          if(match_cons(t_11, sym_TCons_2))
            {
              u_11 = ATgetArgument(t_11, 0);
              v_11 = ATgetArgument(t_11, 1);
              y_10 :
              if(match_cons(v_11, sym_TNil_0))
                {
                  if(j_11 != NULL && j_11 != s_11)
                    _fail(s_11);
                  else
                    j_11 = s_11;
                  if(j_11 != NULL && j_11 != u_11)
                    _fail(u_11);
                  else
                    j_11 = u_11;
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
      t = v_7;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm d_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,p_12 = NULL,r_12 = NULL;
  d_12 = t;
  z_11 :
  if(match_cons(d_12, sym_TCons_2))
    {
      g_12 = ATgetArgument(d_12, 0);
      h_12 = ATgetArgument(d_12, 1);
      a_12 :
      if(match_cons(h_12, sym_TCons_2))
        {
          i_12 = ATgetArgument(h_12, 0);
          r_12 = ATgetArgument(h_12, 1);
          b_12 :
          if(match_cons(i_12, sym_Cons_2))
            {
              j_12 = ATgetArgument(i_12, 0);
              p_12 = ATgetArgument(i_12, 1);
              c_12 :
              if(match_cons(r_12, sym_TNil_0))
                {
                  ATerm v_12 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = geq_0(t);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = subt_0(t);
                  v_12 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_7 = t;
  if(PushChoice()==0)
    {
      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
      i_16 = t;
      k_13 :
      if(match_cons(i_16, sym_TCons_2))
        {
          j_16 = ATgetArgument(i_16, 0);
          k_16 = ATgetArgument(i_16, 1);
          l_13 :
          if(match_cons(k_16, sym_TCons_2))
            {
              l_16 = ATgetArgument(k_16, 0);
              m_16 = ATgetArgument(k_16, 1);
              o_13 :
              if(match_cons(m_16, sym_TCons_2))
                {
                  n_16 = ATgetArgument(m_16, 0);
                  o_16 = ATgetArgument(m_16, 1);
                  p_13 :
                  if(match_cons(o_16, sym_TCons_2))
                    {
                      p_16 = ATgetArgument(o_16, 0);
                      q_16 = ATgetArgument(o_16, 1);
                      q_13 :
                      if(match_cons(p_16, sym_alt_2))
                        {
                          h_16 = ATgetArgument(p_16, 0);
                          e_16 = ATgetArgument(p_16, 1);
                          r_13 :
                          if(match_cons(e_16, sym_Nil_0))
                            {
                              s_13 :
                              if(match_cons(q_16, sym_TNil_0))
                                {
                                  ATerm v_16 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = index_0(t);
                                  v_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_16), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = instantiate_0(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(e_16, sym_Cons_2))
                                {
                                  f_16 = ATgetArgument(e_16, 0);
                                  g_16 = ATgetArgument(e_16, 1);
                                  t_13 :
                                  if(match_cons(g_16, sym_Nil_0))
                                    {
                                      u_13 :
                                      if(match_cons(q_16, sym_TNil_0))
                                        {
                                          ATerm c_17 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_16), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          {
                                            ATerm e_17 = NULL;
                                            t = arg2abox_0(t);
                                            c_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = index_0(t);
                                            e_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(p_16, sym_Some_1))
                            {
                              h_16 = ATgetArgument(p_16, 0);
                              v_13 :
                              if(match_cons(q_16, sym_TNil_0))
                                {
                                  ATerm k_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm m_17 = NULL;
                                    t = conc_0(t);
                                    k_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = arg2abox_0(t);
                                    m_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = instantiate_0(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(p_16, sym_None_0))
                                {
                                  w_13 :
                                  if(match_cons(q_16, sym_TNil_0))
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
      t = w_7;
      {
        ATerm x_7 = t;
        if(PushChoice()==0)
          {
            ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,i_18 = NULL;
            u_17 = t;
            z_13 :
            if(match_cons(u_17, sym_TCons_2))
              {
                v_17 = ATgetArgument(u_17, 0);
                w_17 = ATgetArgument(u_17, 1);
                a_14 :
                if(match_string(v_17, "iter"))
                  {
                    b_14 :
                    if(match_cons(w_17, sym_TCons_2))
                      {
                        x_17 = ATgetArgument(w_17, 0);
                        y_17 = ATgetArgument(w_17, 1);
                        c_14 :
                        if(match_cons(y_17, sym_TCons_2))
                          {
                            z_17 = ATgetArgument(y_17, 0);
                            a_18 = ATgetArgument(y_17, 1);
                            d_14 :
                            if(match_cons(a_18, sym_TCons_2))
                              {
                                b_18 = ATgetArgument(a_18, 0);
                                c_18 = ATgetArgument(a_18, 1);
                                i_14 :
                                if(match_cons(c_18, sym_TNil_0))
                                  {
                                    if(r_17 != NULL && r_17 != x_17)
                                      _fail(x_17);
                                    else
                                      r_17 = x_17;
                                    if(s_17 != NULL && s_17 != z_17)
                                      _fail(z_17);
                                    else
                                      s_17 = z_17;
                                    if(t_17 != NULL && t_17 != b_18)
                                      _fail(b_18);
                                    else
                                      t_17 = b_18;
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
                    if(match_string(v_17, "iter-star"))
                      {
                        j_14 :
                        if(match_cons(w_17, sym_TCons_2))
                          {
                            x_17 = ATgetArgument(w_17, 0);
                            y_17 = ATgetArgument(w_17, 1);
                            k_14 :
                            if(match_cons(y_17, sym_TCons_2))
                              {
                                z_17 = ATgetArgument(y_17, 0);
                                a_18 = ATgetArgument(y_17, 1);
                                l_14 :
                                if(match_cons(a_18, sym_TCons_2))
                                  {
                                    b_18 = ATgetArgument(a_18, 0);
                                    c_18 = ATgetArgument(a_18, 1);
                                    n_14 :
                                    if(match_cons(c_18, sym_TNil_0))
                                      {
                                        if(r_17 != NULL && r_17 != x_17)
                                          _fail(x_17);
                                        else
                                          r_17 = x_17;
                                        if(s_17 != NULL && s_17 != z_17)
                                          _fail(z_17);
                                        else
                                          s_17 = z_17;
                                        if(t_17 != NULL && t_17 != b_18)
                                          _fail(b_18);
                                        else
                                          t_17 = b_18;
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
            t = not_null(t_17);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm d_18 = NULL;
                ATerm f_18 = NULL;
                d_18 = t;
                {
                  ATerm g_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_18), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = arg2abox_0(t);
                  g_18 = t;
                  if(f_18 != NULL && f_18 != g_18)
                    _fail(g_18);
                  else
                    f_18 = g_18;
                  t = not_null(f_18);
                }
                return(t);
              }
              t = map_1(t, n_0);
              i_18 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = instantiate_0(t);
            }
            PopChoice();
          }
        else
          {
            t = x_7;
            {
              ATerm g_8 = t;
              if(PushChoice()==0)
                {
                  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
                  n_18 = t;
                  v_14 :
                  if(match_cons(n_18, sym_TCons_2))
                    {
                      o_18 = ATgetArgument(n_18, 0);
                      p_18 = ATgetArgument(n_18, 1);
                      w_14 :
                      if(match_string(o_18, "iter-sep"))
                        {
                          x_14 :
                          if(match_cons(p_18, sym_TCons_2))
                            {
                              q_18 = ATgetArgument(p_18, 0);
                              r_18 = ATgetArgument(p_18, 1);
                              y_14 :
                              if(match_cons(r_18, sym_TCons_2))
                                {
                                  s_18 = ATgetArgument(r_18, 0);
                                  t_18 = ATgetArgument(r_18, 1);
                                  z_14 :
                                  if(match_cons(t_18, sym_TCons_2))
                                    {
                                      u_18 = ATgetArgument(t_18, 0);
                                      v_18 = ATgetArgument(t_18, 1);
                                      a_15 :
                                      if(match_cons(v_18, sym_TNil_0))
                                        {
                                          if(k_18 != NULL && k_18 != q_18)
                                            _fail(q_18);
                                          else
                                            k_18 = q_18;
                                          if(l_18 != NULL && l_18 != s_18)
                                            _fail(s_18);
                                          else
                                            l_18 = s_18;
                                          if(m_18 != NULL && m_18 != u_18)
                                            _fail(u_18);
                                          else
                                            m_18 = u_18;
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
                          if(match_string(o_18, "iter-star-sep"))
                            {
                              b_15 :
                              if(match_cons(p_18, sym_TCons_2))
                                {
                                  q_18 = ATgetArgument(p_18, 0);
                                  r_18 = ATgetArgument(p_18, 1);
                                  c_15 :
                                  if(match_cons(r_18, sym_TCons_2))
                                    {
                                      s_18 = ATgetArgument(r_18, 0);
                                      t_18 = ATgetArgument(r_18, 1);
                                      d_15 :
                                      if(match_cons(t_18, sym_TCons_2))
                                        {
                                          u_18 = ATgetArgument(t_18, 0);
                                          v_18 = ATgetArgument(t_18, 1);
                                          e_15 :
                                          if(match_cons(v_18, sym_TNil_0))
                                            {
                                              if(k_18 != NULL && k_18 != q_18)
                                                _fail(q_18);
                                              else
                                                k_18 = q_18;
                                              if(l_18 != NULL && l_18 != s_18)
                                                _fail(s_18);
                                              else
                                                l_18 = s_18;
                                              if(m_18 != NULL && m_18 != u_18)
                                                _fail(u_18);
                                              else
                                                m_18 = u_18;
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
                  t = not_null(m_18);
                  {
                    ATerm o_0 (ATerm t)
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = not_null(k_18);
                        return(t);
                      }
                      t = BuildSepList_1(t, p_0);
                      return(t);
                    }
                    t = nzip_1(t, o_0);
                    w_18 = t;
                    {
                      ATerm h_8 = t;
                      if(PushChoice()==0)
                        {
                          ATerm y_18 = NULL;
                          t = not_null(l_18);
                          {
                            ATerm q_0 (ATerm t)
                            {
                              t = S_1(t, _id);
                              return(t);
                            }
                            t = collect_p__1(t, q_0);
                            t = length_0(t);
                            y_18 = t;
                            q_15 :
                            if(match_int(y_18, 1))
                              {
                                t = not_null(w_18);
                                {
                                  ATerm e_21 (ATerm t)
                                  {
                                    ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
                                    ATerm h_21 (ATerm t)
                                    {
                                      ATerm i_19 = NULL;
                                      t = not_null(b_19);
                                      t = e_21(t);
                                      i_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_19), not_null(i_19)));
                                      return(t);
                                    }
                                    z_18 = t;
                                    l_15 :
                                    if(match_cons(z_18, sym_Nil_0))
                                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                                    else
                                      {
                                        if(match_cons(z_18, sym_Cons_2))
                                          {
                                            a_19 = ATgetArgument(z_18, 0);
                                            b_19 = ATgetArgument(z_18, 1);
                                            m_15 :
                                            if(match_cons(b_19, sym_Nil_0))
                                              {
                                                ATerm k_8 = t;
                                                if(PushChoice()==0)
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_19), (ATerm) ATmakeAppl(sym_Nil_0));
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = k_8;
                                                    t = h_21(t);
                                                  }
                                              }
                                            else
                                              t = h_21(t);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = e_21(t);
                                }
                              }
                            else
                              _fail(t);
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = h_8;
                          t = not_null(w_18);
                        }
                      {
                        ATerm r_0 (ATerm t)
                        {
                          t = not_null(l_18);
                          return(t);
                        }
                        t = instantiate_sep_list_1(t, r_0);
                      }
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = g_8;
                  {
                    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
                    k_19 = t;
                    y_15 :
                    if(match_cons(k_19, sym_TCons_2))
                      {
                        l_19 = ATgetArgument(k_19, 0);
                        m_19 = ATgetArgument(k_19, 1);
                        z_15 :
                        if(match_string(l_19, "seq"))
                          {
                            a_16 :
                            if(match_cons(m_19, sym_TCons_2))
                              {
                                n_19 = ATgetArgument(m_19, 0);
                                o_19 = ATgetArgument(m_19, 1);
                                b_16 :
                                if(match_cons(o_19, sym_TCons_2))
                                  {
                                    p_19 = ATgetArgument(o_19, 0);
                                    r_19 = ATgetArgument(o_19, 1);
                                    c_16 :
                                    if(match_cons(r_19, sym_TCons_2))
                                      {
                                        s_19 = ATgetArgument(r_19, 0);
                                        t_19 = ATgetArgument(r_19, 1);
                                        d_16 :
                                        if(match_cons(t_19, sym_TNil_0))
                                          {
                                            ATerm i_20 = NULL;
                                            t = not_null(s_19);
                                            t = tuple2list_0(t);
                                            {
                                              ATerm s_0 (ATerm t)
                                              {
                                                ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
                                                x_19 = t;
                                                u_15 :
                                                if(match_cons(x_19, sym_TCons_2))
                                                  {
                                                    y_19 = ATgetArgument(x_19, 0);
                                                    z_19 = ATgetArgument(x_19, 1);
                                                    v_15 :
                                                    if(match_cons(z_19, sym_TCons_2))
                                                      {
                                                        a_20 = ATgetArgument(z_19, 0);
                                                        b_20 = ATgetArgument(z_19, 1);
                                                        w_15 :
                                                        if(match_cons(b_20, sym_TNil_0))
                                                          {
                                                            ATerm e_20 = NULL;
                                                            ATerm f_20 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_20), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                            t = arg2abox_0(t);
                                                            f_20 = t;
                                                            if(e_20 != NULL && e_20 != f_20)
                                                              _fail(f_20);
                                                            else
                                                              e_20 = f_20;
                                                            t = not_null(e_20);
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
                                              t = nzip_1(t, s_0);
                                              i_20 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm selector_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_selector_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      {
        ATerm l_8 = t;
        if(PushChoice()==0)
          {
            ATerm z_21 = NULL;
            t = not_null(v_21);
            {
              ATerm d_22 = NULL;
              t = a_0(t);
              z_21 = t;
              t = not_null(w_21);
              t = b_0(t);
              d_22 = t;
              t = (ATerm) ATmakeAppl(sym_selector_2, not_null(z_21), not_null(d_22));
            }
            PopChoice();
          }
        else
          {
            t = l_8;
            {
              ATerm j_22 = NULL;
              t = not_null(v_21);
              {
                ATerm l_22 = NULL;
                t = a_0(t);
                j_22 = t;
                t = not_null(w_21);
                t = b_0(t);
                l_22 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(j_22), not_null(l_22));
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
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Path_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL;
        t = not_null(a_23);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm e_23 = NULL;
                e_23 = t;
                if(d_23 != NULL && d_23 != e_23)
                  _fail(e_23);
                else
                  d_23 = e_23;
                return(t);
              }
              t = selector_2(t, _id, v_0);
              return(t);
            }
            t = Cons_2(t, u_0, Nil_0);
            return(t);
          }
          t = at_last_1(t, t_0);
        }
        t = not_null(d_23);
      }
    }
  else
    _fail(t);
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
                ATerm w_0 (ATerm t)
                {
                  t = not_null(o_23);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  e_24 = t;
  a_24 :
  if(match_cons(e_24, sym_TCons_2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      b_24 :
      if(match_cons(g_24, sym_TCons_2))
        {
          h_24 = ATgetArgument(g_24, 0);
          i_24 = ATgetArgument(g_24, 1);
          c_24 :
          if(match_cons(i_24, sym_TCons_2))
            {
              j_24 = ATgetArgument(i_24, 0);
              k_24 = ATgetArgument(i_24, 1);
              d_24 :
              if(match_cons(k_24, sym_TNil_0))
                {
                  ATerm v_24 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_24), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_24), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
                    t = conc_0(t);
                    v_24 = t;
                    {
                      ATerm n_8 = t;
                      if(PushChoice()==0)
                        {
                          ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
                          t = pp_table_get_0(t);
                          a_25 = t;
                          x_23 :
                          if(match_cons(a_25, sym_TCons_2))
                            {
                              b_25 = ATgetArgument(a_25, 0);
                              c_25 = ATgetArgument(a_25, 1);
                              y_23 :
                              if(match_cons(c_25, sym_TCons_2))
                                {
                                  d_25 = ATgetArgument(c_25, 0);
                                  e_25 = ATgetArgument(c_25, 1);
                                  z_23 :
                                  if(match_cons(e_25, sym_TNil_0))
                                    {
                                      ATerm f_25 = NULL;
                                      if(x_24 != NULL && x_24 != b_25)
                                        _fail(b_25);
                                      else
                                        x_24 = b_25;
                                      if(z_24 != NULL && z_24 != d_25)
                                        _fail(d_25);
                                      else
                                        z_24 = d_25;
                                      t = not_null(x_24);
                                      t = get_symbol_0(t);
                                      f_25 = t;
                                      if(y_24 != NULL && y_24 != f_25)
                                        _fail(f_25);
                                      else
                                        y_24 = f_25;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_24), (ATerm) ATmakeAppl(sym_TNil_0)))));
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
                          t = n_8;
                          t = not_null(j_24);
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
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t_25 = t;
  l_25 :
  if(match_cons(t_25, sym_TCons_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      r_25 :
      if(match_cons(v_25, sym_TCons_2))
        {
          w_25 = ATgetArgument(v_25, 0);
          x_25 = ATgetArgument(v_25, 1);
          s_25 :
          if(match_cons(x_25, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_25), not_null(w_25));
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  f_26 = t;
  c_26 :
  if(match_cons(f_26, sym_TCons_2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      d_26 :
      if(match_cons(h_26, sym_TCons_2))
        {
          i_26 = ATgetArgument(h_26, 0);
          j_26 = ATgetArgument(h_26, 1);
          e_26 :
          if(match_cons(j_26, sym_TNil_0))
            {
              ATerm o_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(g_26), not_null(i_26));
                  PopChoice();
                }
              else
                {
                  t = o_8;
                  t = SSL_addr(not_null(g_26), not_null(i_26));
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
  ATerm y_26 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,n_27 = NULL;
  y_26 = t;
  t_26 :
  if(match_cons(y_26, sym_TCons_2))
    {
      e_27 = ATgetArgument(y_26, 0);
      f_27 = ATgetArgument(y_26, 1);
      u_26 :
      if(match_cons(f_27, sym_TCons_2))
        {
          g_27 = ATgetArgument(f_27, 0);
          n_27 = ATgetArgument(f_27, 1);
          v_26 :
          if(match_cons(g_27, sym_Cons_2))
            {
              h_27 = ATgetArgument(g_27, 0);
              i_27 = ATgetArgument(g_27, 1);
              x_26 :
              if(match_cons(n_27, sym_TNil_0))
                {
                  ATerm r_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_27), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  r_27 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(e_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_27), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_27), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,q_28 = NULL;
  a_28 = t;
  w_27 :
  if(match_cons(a_28, sym_TCons_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      x_27 :
      if(match_cons(c_28, sym_TCons_2))
        {
          d_28 = ATgetArgument(c_28, 0);
          q_28 = ATgetArgument(c_28, 1);
          y_27 :
          if(match_cons(d_28, sym_Nil_0))
            {
              z_27 :
              if(match_cons(q_28, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm v_49 (ATerm), ATerm w_49 (ATerm), ATerm x_49 (ATerm), ATerm y_49 (ATerm))
{
  ATerm x_28 (ATerm t)
  {
    ATerm p_8 = t;
    if(PushChoice()==0)
      {
        t = v_49(t);
        PopChoice();
      }
    else
      {
        t = p_8;
        t = w_49(t);
        {
          ATerm x_0 (ATerm t)
          {
            t = TCons_2(t, x_28, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_49, x_0);
          t = x_49(t);
        }
      }
    return(t);
  }
  t = x_28(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_29), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm h_50 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, h_50);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm y_32 = NULL;
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_32), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  a_33 = t;
  v_32 :
  if(match_cons(a_33, sym_TCons_2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      w_32 :
      if(match_cons(c_33, sym_TCons_2))
        {
          d_33 = ATgetArgument(c_33, 0);
          e_33 = ATgetArgument(c_33, 1);
          x_32 :
          if(match_cons(e_33, sym_TNil_0))
            {
              ATerm q_8;
              q_8 = t;
              t = not_null(b_33);
              t = path_to_string_0(t);
              {
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
                  return(t);
                }
                t = notify_1(t, y_0);
              }
              t = q_8;
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
  ATerm k_33 = NULL;
  k_33 = t;
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = pp_table_get_0(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        {
          ATerm z_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
            return(t);
          }
          t = debug_1(t, z_0);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  t = SSL_is_string(not_null(o_33));
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm t_8 = t;
  if(PushChoice()==0)
    {
      ATerm j_34 = NULL;
      j_34 = t;
      t = is_string_0(t);
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(j_34));
      PopChoice();
    }
  else
    {
      t = t_8;
      {
        ATerm v_8 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            t = map_1(t, trm2abox_0);
            PopChoice();
          }
        else
          {
            t = v_8;
            {
              ATerm l_34 = NULL;
              ATerm n_34 = NULL,o_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
              l_34 = t;
              {
                ATerm p_34 = NULL;
                ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
                t = not_null(l_34);
                p_34 = t;
                t = SSL_explode_term(not_null(p_34));
                r_34 = t;
                v_33 :
                if(match_cons(r_34, sym_TCons_2))
                  {
                    s_34 = ATgetArgument(r_34, 0);
                    t_34 = ATgetArgument(r_34, 1);
                    w_33 :
                    if(match_cons(t_34, sym_TCons_2))
                      {
                        u_34 = ATgetArgument(t_34, 0);
                        v_34 = ATgetArgument(t_34, 1);
                        y_33 :
                        if(match_cons(v_34, sym_TNil_0))
                          {
                            if(n_34 != NULL && n_34 != s_34)
                              _fail(s_34);
                            else
                              n_34 = s_34;
                            if(o_34 != NULL && o_34 != u_34)
                              _fail(u_34);
                            else
                              o_34 = u_34;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Nil_0));
                t = pp_table_get_p__0(t);
                w_34 = t;
                g_34 :
                if(match_cons(w_34, sym_TCons_2))
                  {
                    x_34 = ATgetArgument(w_34, 0);
                    y_34 = ATgetArgument(w_34, 1);
                    h_34 :
                    if(match_cons(y_34, sym_TCons_2))
                      {
                        z_34 = ATgetArgument(y_34, 0);
                        a_35 = ATgetArgument(y_34, 1);
                        i_34 :
                        if(match_cons(a_35, sym_TNil_0))
                          {
                            ATerm o_35 = NULL;
                            t = not_null(o_34);
                            {
                              ATerm a_1 (ATerm t)
                              {
                                ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
                                d_35 = t;
                                c_34 :
                                if(match_cons(d_35, sym_TCons_2))
                                  {
                                    e_35 = ATgetArgument(d_35, 0);
                                    f_35 = ATgetArgument(d_35, 1);
                                    d_34 :
                                    if(match_cons(f_35, sym_TCons_2))
                                      {
                                        g_35 = ATgetArgument(f_35, 0);
                                        h_35 = ATgetArgument(f_35, 1);
                                        e_34 :
                                        if(match_cons(h_35, sym_TNil_0))
                                          {
                                            ATerm k_35 = NULL;
                                            ATerm l_35 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = arg2abox_0(t);
                                            l_35 = t;
                                            if(k_35 != NULL && k_35 != l_35)
                                              _fail(l_35);
                                            else
                                              k_35 = l_35;
                                            t = not_null(k_35);
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
                              t = nzip_1(t, a_1);
                              o_35 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_35), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_52 (ATerm))
{
  ATerm y_35 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_35);
        PopChoice();
      }
    else
      {
        t = w_8;
        t = Nil_0(t);
        t = a_52(t);
      }
    return(t);
  }
  t = y_35(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_8;
      {
        ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
        b_36 = t;
        a_36 :
        if(match_cons(b_36, sym_Cons_2))
          {
            c_36 = ATgetArgument(b_36, 0);
            d_36 = ATgetArgument(b_36, 1);
            t = not_null(c_36);
            {
              ATerm b_1 (ATerm t)
              {
                t = not_null(d_36);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_1);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = SSL_int_to_string(not_null(j_36));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Path1_1))
    {
      u_36 = ATgetArgument(t_36, 0);
      t = not_null(u_36);
    }
  else
    {
      if(match_cons(t_36, sym_Path_2))
        {
          u_36 = ATgetArgument(t_36, 0);
          v_36 = ATgetArgument(t_36, 1);
          {
            ATerm d_37 = NULL,l_37 = NULL;
            t = not_null(v_36);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
                e_37 = t;
                q_36 :
                if(match_cons(e_37, sym_selector_2))
                  {
                    f_37 = ATgetArgument(e_37, 0);
                    g_37 = ATgetArgument(e_37, 1);
                    {
                      ATerm j_37 = NULL;
                      t = not_null(f_37);
                      t = int_to_string_0(t);
                      j_37 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_37), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_37), (ATerm) ATmakeAppl(sym_Nil_0)))));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, j_1);
              t = concat_0(t);
              l_37 = t;
              if(d_37 != NULL && d_37 != l_37)
                _fail(l_37);
              else
                d_37 = l_37;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_36), not_null(d_37));
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
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  w_37 :
  if(match_cons(x_37, sym_Path1_1))
    {
      y_37 = ATgetArgument(x_37, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_37), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(x_37, sym_Path_2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          {
            ATerm q_38 = NULL,y_38 = NULL;
            t = not_null(z_37);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
                r_38 = t;
                u_37 :
                if(match_cons(r_38, sym_selector_2))
                  {
                    s_38 = ATgetArgument(r_38, 0);
                    t_38 = ATgetArgument(r_38, 1);
                    t = not_null(s_38);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, k_1);
              y_38 = t;
              if(q_38 != NULL && q_38 != y_38)
                _fail(y_38);
              else
                q_38 = y_38;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_37), not_null(q_38));
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
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_PP_Entry_2))
    {
      h_39 = ATgetArgument(g_39, 0);
      i_39 = ATgetArgument(g_39, 1);
      {
        ATerm l_39 = NULL;
        t = not_null(h_39);
        t = mk_key_0(t);
        l_39 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(h_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = table_put_0(t);
        t = not_null(h_39);
        t = path_to_string_0(t);
        {
          ATerm l_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
            return(t);
          }
          t = notify_1(t, l_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  t = SSL_string_to_int(not_null(q_39));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  ATerm y_40 (ATerm t)
  {
    ATerm u_40 = NULL;
    t = not_null(k_40);
    t = De_Escape_0(t);
    u_40 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_40), not_null(u_40));
    return(t);
  }
  ATerm z_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  l_40 = t;
  a_40 :
  if(match_cons(l_40, sym_Cons_2))
    {
      j_40 = ATgetArgument(l_40, 0);
      k_40 = ATgetArgument(l_40, 1);
      b_40 :
      if(match_cons(k_40, sym_Cons_2))
        {
          h_40 = ATgetArgument(k_40, 0);
          i_40 = ATgetArgument(k_40, 1);
          c_40 :
          if(match_int(h_40, 34))
            {
              d_40 :
              if(match_int(j_40, 92))
                {
                  ATerm y_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm n_40 = NULL;
                      t = not_null(i_40);
                      t = De_Escape_0(t);
                      n_40 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(n_40));
                      PopChoice();
                    }
                  else
                    {
                      t = y_8;
                      t = y_40(t);
                    }
                }
              else
                t = y_40(t);
            }
          else
            {
              if(match_int(h_40, 92))
                {
                  e_40 :
                  if(match_int(j_40, 92))
                    {
                      ATerm z_8 = t;
                      if(PushChoice()==0)
                        {
                          ATerm q_40 = NULL;
                          t = not_null(i_40);
                          t = De_Escape_0(t);
                          q_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(q_40));
                          PopChoice();
                        }
                      else
                        {
                          t = z_8;
                          t = y_40(t);
                        }
                    }
                  else
                    t = y_40(t);
                }
              else
                {
                  f_40 :
                  t = y_40(t);
                }
            }
        }
      else
        {
          g_40 :
          t = y_40(t);
        }
    }
  else
    {
      if(match_cons(l_40, sym_Nil_0))
        t = z_40(t);
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
ATerm implode_string_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_implode_string(not_null(e_41));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm k_52 (ATerm))
{
  ATerm h_41 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, Nil_0);
        t = k_52(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = Cons_2(t, _id, h_41);
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym_Cons_2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      t = not_null(m_41);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,b_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Cons_2))
    {
      z_41 = ATgetArgument(y_41, 0);
      b_42 = ATgetArgument(y_41, 1);
      t = not_null(z_41);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_42 = NULL;
  g_42 = t;
  t = SSL_explode_string(not_null(g_42));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm n_9;
    n_9 = t;
    {
      ATerm r_42 = NULL;
      t = Hd_0(t);
      r_42 = t;
      j_42 :
      if(!(match_int(r_42, 34)))
        _fail(t);
    }
    t = n_9;
    t = Tl_0(t);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm t_42 = NULL,u_42 = NULL,x_42 = NULL;
        t_42 = t;
        o_42 :
        if(match_cons(t_42, sym_Cons_2))
          {
            u_42 = ATgetArgument(t_42, 0);
            x_42 = ATgetArgument(t_42, 1);
            p_42 :
            if(match_int(u_42, 34))
              {
                q_42 :
                if(match_cons(x_42, sym_Nil_0))
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
      t = at_last_1(t, n_1);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,o_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Arg_1))
    {
      m_43 = ATgetArgument(l_43, 0);
      {
        ATerm s_43 = NULL;
        t = not_null(m_43);
        t = string_to_int_0(t);
        s_43 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(s_43));
      }
    }
  else
    {
      if(match_cons(l_43, sym_Arg2_2))
        {
          m_43 = ATgetArgument(l_43, 0);
          o_43 = ATgetArgument(l_43, 1);
          {
            ATerm x_43 = NULL;
            t = not_null(m_43);
            {
              ATerm z_43 = NULL;
              t = string_to_int_0(t);
              x_43 = t;
              t = not_null(o_43);
              t = string_to_int_0(t);
              z_43 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(x_43), not_null(z_43));
            }
          }
        }
      else
        {
          if(match_cons(l_43, sym_SOpt_2))
            {
              m_43 = ATgetArgument(l_43, 0);
              o_43 = ATgetArgument(l_43, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(m_43), not_null(o_43));
            }
          else
            {
              if(match_cons(l_43, sym_S_1))
                {
                  m_43 = ATgetArgument(l_43, 0);
                  {
                    ATerm h_44 = NULL;
                    t = not_null(m_43);
                    t = de_quote_0(t);
                    t = de_escape_0(t);
                    h_44 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(h_44));
                  }
                }
              else
                {
                  if(match_cons(l_43, sym_selector_2))
                    {
                      m_43 = ATgetArgument(l_43, 0);
                      o_43 = ATgetArgument(l_43, 1);
                      {
                        ATerm m_44 = NULL;
                        t = not_null(m_43);
                        t = string_to_int_0(t);
                        m_44 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(m_44), not_null(o_43));
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
ATerm topdown_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm y_44 (ATerm t)
  {
    t = b_54(t);
    t = _all(t, y_44);
    return(t);
  }
  t = y_44(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, o_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym_PP_Table_1))
    {
      e_45 = ATgetArgument(d_45, 0);
      t = not_null(e_45);
      t = reverse_0(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = makePPEntry_0(t);
          t = StoreEntry_0(t);
          return(t);
        }
        t = map_1(t, p_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm o_9;
  o_9 = t;
  {
    ATerm q_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm r_1 (ATerm t)
    {
      ATerm j_45 = NULL;
      ATerm l_45 = NULL;
      j_45 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = g_43(t);
      l_45 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_45), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, q_1, r_1);
    t = printnl_0(t);
  }
  t = o_9;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm p_45 (ATerm t)
  {
    ATerm p_9 = t;
    if(PushChoice()==0)
      {
        t = r_55(t);
        PopChoice();
      }
    else
      {
        t = p_9;
        t = _one(t, p_45);
      }
    return(t);
  }
  t = p_45(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  v_45 = t;
  s_45 :
  if(match_cons(v_45, sym_TCons_2))
    {
      w_45 = ATgetArgument(v_45, 0);
      x_45 = ATgetArgument(v_45, 1);
      t_45 :
      if(match_cons(x_45, sym_TCons_2))
        {
          y_45 = ATgetArgument(x_45, 0);
          z_45 = ATgetArgument(x_45, 1);
          u_45 :
          if(match_cons(z_45, sym_TNil_0))
            {
              t = not_null(y_45);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm c_46 = NULL;
                  c_46 = t;
                  if(w_45 != NULL && w_45 != c_46)
                    _fail(c_46);
                  else
                    w_45 = c_46;
                  return(t);
                }
                t = oncetd_1(t, w_1);
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
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,r_46 = NULL;
  j_46 = t;
  g_46 :
  if(match_cons(j_46, sym_TCons_2))
    {
      k_46 = ATgetArgument(j_46, 0);
      l_46 = ATgetArgument(j_46, 1);
      h_46 :
      if(match_cons(l_46, sym_TCons_2))
        {
          m_46 = ATgetArgument(l_46, 0);
          r_46 = ATgetArgument(l_46, 1);
          i_46 :
          if(match_cons(r_46, sym_TNil_0))
            t = SSL_table_get(not_null(k_46), not_null(m_46));
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
  {
    ATerm a_47 = NULL;
    t = get_options_0(t);
    a_47 = t;
    if(z_46 != NULL && z_46 != a_47)
      _fail(a_47);
    else
      z_46 = a_47;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_46), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm s_42 (ATerm))
{
  ATerm q_9;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = s_42(t);
  t = check_option_0(t);
  t = q_9;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm m_38 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm w_9;
    w_9 = t;
    {
      ATerm a_10;
      a_10 = t;
      {
        ATerm z_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = has_option_1(t, z_1);
      }
      t = a_10;
      t = debug_1(t, m_38);
    }
    t = w_9;
    return(t);
  }
  t = try_1(t, x_1);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm d_47 (ATerm t)
  {
    ATerm b_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_10;
        t = Cons_2(t, l_51, d_47);
      }
    return(t);
  }
  t = d_47(t);
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
    ATerm a_2 (ATerm t)
    {
      ATerm b_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
        return(t);
      }
      t = notify_1(t, b_2);
      t = ReadFromFile_0(t);
      t = build_pp_table_0(t);
      return(t);
    }
    t = map_1(t, a_2);
  }
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  n_47 = t;
  j_47 :
  if(match_cons(n_47, sym_TCons_2))
    {
      o_47 = ATgetArgument(n_47, 0);
      p_47 = ATgetArgument(n_47, 1);
      k_47 :
      if(match_cons(o_47, sym_Nil_0))
        {
          l_47 :
          if(match_cons(p_47, sym_TCons_2))
            {
              q_47 = ATgetArgument(p_47, 0);
              r_47 = ATgetArgument(p_47, 1);
              m_47 :
              if(match_cons(r_47, sym_TNil_0))
                t = not_null(q_47);
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
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  b_48 = t;
  w_47 :
  if(match_cons(b_48, sym_TCons_2))
    {
      c_48 = ATgetArgument(b_48, 0);
      i_48 = ATgetArgument(b_48, 1);
      y_47 :
      if(match_cons(c_48, sym_Cons_2))
        {
          d_48 = ATgetArgument(c_48, 0);
          h_48 = ATgetArgument(c_48, 1);
          z_47 :
          if(match_cons(i_48, sym_TCons_2))
            {
              j_48 = ATgetArgument(i_48, 0);
              k_48 = ATgetArgument(i_48, 1);
              a_48 :
              if(match_cons(k_48, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_48), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_48), not_null(j_48)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm r_48 (ATerm t)
  {
    ATerm c_10 = t;
    if(PushChoice()==0)
      {
        t = c_57(t);
        t = r_48(t);
        PopChoice();
      }
    else
      {
        t = c_10;
        t = d_57(t);
      }
    return(t);
  }
  t = r_48(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_57 (ATerm))
{
  t = repeat_2(t, f_57, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_48), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm u_47 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym_Cons_2))
    {
      a_49 = ATgetArgument(z_48, 0);
      b_49 = ATgetArgument(z_48, 1);
      t = u_47(t);
      {
        ATerm c_2 (ATerm t)
        {
          ATerm e_49 = NULL;
          e_49 = t;
          if(a_49 != NULL && a_49 != e_49)
            _fail(e_49);
          else
            a_49 = e_49;
          return(t);
        }
        t = fetch_1(t, c_2);
      }
      t = not_null(b_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  l_49 = t;
  i_49 :
  if(match_cons(l_49, sym_TCons_2))
    {
      m_49 = ATgetArgument(l_49, 0);
      n_49 = ATgetArgument(l_49, 1);
      j_49 :
      if(match_cons(n_49, sym_TCons_2))
        {
          o_49 = ATgetArgument(n_49, 0);
          p_49 = ATgetArgument(n_49, 1);
          k_49 :
          if(match_cons(p_49, sym_TNil_0))
            {
              t = not_null(m_49);
              {
                ATerm t_49 (ATerm t)
                {
                  ATerm d_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(o_49);
                      PopChoice();
                    }
                  else
                    {
                      t = d_10;
                      {
                        ATerm m_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm d_2 (ATerm t)
                            {
                              t = not_null(o_49);
                              return(t);
                            }
                            t = HdMember_1(t, d_2);
                            t = t_49(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_10;
                            t = Cons_2(t, _id, t_49);
                          }
                      }
                    }
                  return(t);
                }
                t = t_49(t);
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
ATerm foldr_3 (ATerm t, ATerm n_46 (ATerm), ATerm o_46 (ATerm), ATerm p_46 (ATerm))
{
  ATerm n_50 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = n_46(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        {
          ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
          d_50 = t;
          c_50 :
          if(match_cons(d_50, sym_Cons_2))
            {
              e_50 = ATgetArgument(d_50, 0);
              f_50 = ATgetArgument(d_50, 1);
              {
                ATerm j_50 = NULL;
                t = not_null(e_50);
                {
                  ATerm l_50 = NULL;
                  t = p_46(t);
                  j_50 = t;
                  t = not_null(f_50);
                  t = n_50(t);
                  l_50 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_50), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = o_46(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = n_50(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm e_48 (ATerm), ATerm f_48 (ATerm), ATerm g_48 (ATerm))
{
  ATerm x_50 = NULL;
  ATerm z_50 = NULL;
  x_50 = t;
  {
    ATerm a_51 = NULL;
    ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
    t = not_null(x_50);
    a_51 = t;
    t = SSL_explode_term(not_null(a_51));
    c_51 = t;
    u_50 :
    if(match_cons(c_51, sym_TCons_2))
      {
        d_51 = ATgetArgument(c_51, 0);
        e_51 = ATgetArgument(c_51, 1);
        v_50 :
        if(match_cons(e_51, sym_TCons_2))
          {
            f_51 = ATgetArgument(e_51, 0);
            g_51 = ATgetArgument(e_51, 1);
            w_50 :
            if(match_cons(g_51, sym_TNil_0))
              {
                if(z_50 != NULL && z_50 != f_51)
                  _fail(f_51);
                else
                  z_50 = f_51;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(z_50);
    t = foldr_3(t, e_48, f_48, g_48);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm p_51 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        ATerm n_51 = NULL;
        t = n_48(t);
        n_51 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = o_10;
        {
          ATerm m_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, m_2, union_0, p_51);
        }
      }
    return(t);
  }
  t = p_51(t);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  y_51 :
  if(match_cons(d_52, sym_TCons_2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      z_51 :
      if(match_cons(f_52, sym_TCons_2))
        {
          g_52 = ATgetArgument(f_52, 0);
          h_52 = ATgetArgument(f_52, 1);
          c_52 :
          if(match_cons(h_52, sym_TNil_0))
            {
              t = not_null(e_52);
              {
                ATerm o_2 (ATerm t)
                {
                  ATerm m_52 = NULL,n_52 = NULL;
                  m_52 = t;
                  w_51 :
                  if(match_cons(m_52, sym_PP_Table_1))
                    {
                      n_52 = ATgetArgument(m_52, 0);
                      t = not_null(n_52);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = collect_1(t, o_2);
                t = reverse_0(t);
                t = read_pp_tables_0(t);
                t = not_null(g_52);
                t = trm2abox_0(t);
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm p_52 = NULL;
                    t = is_list_0(t);
                    p_52 = t;
                    t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(p_52));
                    return(t);
                  }
                  t = try_1(t, p_2);
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = not_null(e_52);
                      return(t);
                    }
                    t = split_2(t, q_2, _id);
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
  ATerm v_52 = NULL;
  v_52 = t;
  t = SSL_exit(not_null(v_52));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  a_53 :
  if(match_cons(d_53, sym_TCons_2))
    {
      e_53 = ATgetArgument(d_53, 0);
      f_53 = ATgetArgument(d_53, 1);
      b_53 :
      if(match_cons(f_53, sym_TCons_2))
        {
          g_53 = ATgetArgument(f_53, 0);
          h_53 = ATgetArgument(f_53, 1);
          c_53 :
          if(match_cons(h_53, sym_TNil_0))
            {
              ATerm p_10;
              p_10 = t;
              t = SSL_printnl(not_null(e_53), not_null(g_53));
              t = p_10;
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
ATerm try_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      t = z_57(t);
      PopChoice();
    }
  else
    t = q_10;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm r_10 = t;
      if(PushChoice()==0)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm s_53 = NULL;
            s_53 = t;
            l_53 :
            if(!(match_cons(s_53, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_2);
          PopChoice();
          _fail(t);
        }
      else
        t = r_10;
      return(t);
    }
    ATerm t_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, s_2, t_2);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm t_53 = NULL,u_53 = NULL;
          t_53 = t;
          n_53 :
          if(match_cons(t_53, sym_Runtime_1))
            {
              u_53 = ATgetArgument(t_53, 0);
              if(r_53 != NULL && r_53 != u_53)
                _fail(u_53);
              else
                r_53 = u_53;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_3);
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, z_2, c_3);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm v_53 = NULL,w_53 = NULL;
            v_53 = t;
            p_53 :
            if(match_cons(v_53, sym_Program_1))
              {
                w_53 = ATgetArgument(v_53, 0);
                if(q_53 != NULL && q_53 != w_53)
                  _fail(w_53);
                else
                  q_53 = w_53;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_3);
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, f_3, j_3);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_53), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_53), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, r_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm a_54 = NULL;
  a_54 = t;
  z_53 :
  if(!(match_cons(a_54, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  j_54 = t;
  g_54 :
  if(match_cons(j_54, sym_TCons_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      l_54 = ATgetArgument(j_54, 1);
      h_54 :
      if(match_cons(l_54, sym_TCons_2))
        {
          m_54 = ATgetArgument(l_54, 0);
          n_54 = ATgetArgument(l_54, 1);
          i_54 :
          if(match_cons(n_54, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(k_54), not_null(m_54));
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
ATerm TCons_2 (ATerm t, ATerm a_38 (ATerm), ATerm b_38 (ATerm))
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_TCons_2))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      {
        ATerm a_55 = NULL;
        t = not_null(w_54);
        {
          ATerm c_55 = NULL;
          t = a_38(t);
          a_55 = t;
          t = not_null(x_54);
          t = b_38(t);
          c_55 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_55), not_null(c_55));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  l_55 = t;
  i_55 :
  if(match_cons(l_55, sym_TCons_2))
    {
      m_55 = ATgetArgument(l_55, 0);
      n_55 = ATgetArgument(l_55, 1);
      j_55 :
      if(match_cons(n_55, sym_TCons_2))
        {
          o_55 = ATgetArgument(n_55, 0);
          p_55 = ATgetArgument(n_55, 1);
          k_55 :
          if(match_cons(p_55, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(m_55), not_null(o_55));
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
  ATerm z_55 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm t_10 = t;
      if(PushChoice()==0)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm a_56 = NULL,b_56 = NULL;
            a_56 = t;
            w_55 :
            if(match_cons(a_56, sym_Output_1))
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
          t = option_defined_1(t, p_3);
          PopChoice();
        }
      else
        {
          t = t_10;
          {
            ATerm c_56 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            c_56 = t;
            if(z_55 != NULL && z_55 != c_56)
              _fail(c_56);
            else
              z_55 = c_56;
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
  t = s_10;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = not_null(z_55);
          return(t);
        }
        t = split_2(t, s_3, _id);
        return(t);
      }
      t = TCons_2(t, r_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, q_3);
    {
      ATerm u_10 = t;
      if(PushChoice()==0)
        {
          ATerm u_3 (ATerm t)
          {
            ATerm e_4 (ATerm t)
            {
              ATerm d_56 = NULL;
              d_56 = t;
              y_55 :
              if(!(match_cons(d_56, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, e_4);
            return(t);
          }
          ATerm v_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_3, v_3);
          PopChoice();
        }
      else
        {
          t = u_10;
          {
            ATerm f_4 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, f_4);
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
ATerm apply_strategy_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm l_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  ATerm v_10;
  v_10 = t;
  t = dtime_0(t);
  t = v_10;
  t = w_42(t);
  {
    ATerm z_10;
    z_10 = t;
    {
      ATerm m_56 = NULL;
      t = dtime_0(t);
      m_56 = t;
      if(l_56 != NULL && l_56 != m_56)
        _fail(m_56);
      else
        l_56 = m_56;
    }
    t = z_10;
    n_56 = t;
    i_56 :
    if(match_cons(n_56, sym_TCons_2))
      {
        o_56 = ATgetArgument(n_56, 0);
        p_56 = ATgetArgument(n_56, 1);
        j_56 :
        if(match_cons(p_56, sym_TCons_2))
          {
            q_56 = ATgetArgument(p_56, 0);
            r_56 = ATgetArgument(p_56, 1);
            k_56 :
            if(match_cons(r_56, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(l_56)), not_null(o_56)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_56), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_56 = NULL;
  x_56 = t;
  t = SSL_ReadFromFile(not_null(x_56));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm))
{
  ATerm h_57 = NULL;
  ATerm j_57 = NULL;
  h_57 = t;
  {
    ATerm l_57 = NULL;
    t = z_44(t);
    j_57 = t;
    t = not_null(h_57);
    t = a_45(t);
    l_57 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_57), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_57 = NULL;
  ATerm a_11;
  a_11 = t;
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        ATerm i_4 (ATerm t)
        {
          ATerm u_57 = NULL,v_57 = NULL;
          u_57 = t;
          r_57 :
          if(match_cons(u_57, sym_Input_1))
            {
              v_57 = ATgetArgument(u_57, 0);
              if(t_57 != NULL && t_57 != v_57)
                _fail(v_57);
              else
                t_57 = v_57;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_4);
        PopChoice();
      }
    else
      {
        t = b_11;
        {
          ATerm w_57 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_57 = t;
          if(t_57 != NULL && t_57 != w_57)
            _fail(w_57);
          else
            t_57 = w_57;
        }
      }
  }
  t = a_11;
  {
    ATerm j_4 (ATerm t)
    {
      t = not_null(t_57);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  a_58 :
  if(!(match_cons(b_58, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_33 (ATerm))
{
  ATerm f_58 = NULL,g_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym_Undefined_1))
    {
      g_58 = ATgetArgument(f_58, 0);
      {
        ATerm i_58 = NULL;
        t = not_null(g_58);
        t = x_33(t);
        i_58 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  q_58 :
  if(!(match_cons(r_58, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_51 (ATerm))
{
  ATerm s_58 (ATerm t)
  {
    ATerm c_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, u_51, _id);
        PopChoice();
      }
    else
      {
        t = c_11;
        t = Cons_2(t, _id, s_58);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_42 (ATerm))
{
  t = fetch_1(t, a_42);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_42 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm d_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = d_11;
        {
          ATerm e_11 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = e_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_4);
  t = v_42(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm b_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
    b_59 = t;
    u_58 :
    if(match_cons(b_59, sym_TCons_2))
      {
        d_59 = ATgetArgument(b_59, 0);
        e_59 = ATgetArgument(b_59, 1);
        v_58 :
        if(match_cons(e_59, sym_TCons_2))
          {
            f_59 = ATgetArgument(e_59, 0);
            g_59 = ATgetArgument(e_59, 1);
            w_58 :
            if(match_cons(g_59, sym_TCons_2))
              {
                h_59 = ATgetArgument(g_59, 0);
                i_59 = ATgetArgument(g_59, 1);
                x_58 :
                if(match_cons(i_59, sym_TNil_0))
                  {
                    if(y_58 != NULL && y_58 != d_59)
                      _fail(d_59);
                    else
                      y_58 = d_59;
                    if(z_58 != NULL && z_58 != f_59)
                      _fail(f_59);
                    else
                      z_58 = f_59;
                    if(a_59 != NULL && a_59 != h_59)
                      _fail(h_59);
                    else
                      a_59 = h_59;
                    t = SSL_table_put(not_null(y_58), not_null(z_58), not_null(a_59));
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
  t = f_11;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  t = SSL_table_create(not_null(l_59));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  {
    ATerm g_11;
    g_11 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_59), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = g_11;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_11 = t;
  if(PushChoice()==0)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_60 = NULL;
        m_60 = t;
        s_59 :
        if(!(match_string(m_60, "-S")))
          _fail(t);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, l_4, m_4);
      PopChoice();
    }
  else
    {
      t = h_11;
      {
        ATerm i_11 = t;
        if(PushChoice()==0)
          {
            ATerm r_4 (ATerm t)
            {
              ATerm n_60 = NULL;
              n_60 = t;
              t_59 :
              if(!(match_string(n_60, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm s_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, r_4, s_4);
            PopChoice();
          }
        else
          {
            t = i_11;
            {
              ATerm k_11 = t;
              if(PushChoice()==0)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm o_60 = NULL;
                    o_60 = t;
                    u_59 :
                    if(!(match_string(o_60, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, t_4, u_4);
                  PopChoice();
                }
              else
                {
                  t = k_11;
                  {
                    ATerm l_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm w_4 (ATerm t)
                        {
                          ATerm p_60 = NULL;
                          p_60 = t;
                          v_59 :
                          if(!(match_string(p_60, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm y_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, w_4, y_4);
                        PopChoice();
                      }
                    else
                      {
                        t = l_11;
                        {
                          ATerm m_11 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_4 (ATerm t)
                              {
                                ATerm q_60 = NULL;
                                q_60 = t;
                                w_59 :
                                if(!(match_string(q_60, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm a_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, z_4, a_5);
                              PopChoice();
                            }
                          else
                            {
                              t = m_11;
                              {
                                ATerm n_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm b_5 (ATerm t)
                                    {
                                      ATerm r_60 = NULL;
                                      r_60 = t;
                                      x_59 :
                                      if(!(match_string(r_60, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm c_5 (ATerm t)
                                    {
                                      ATerm s_60 = NULL;
                                      s_60 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_60));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, b_5, c_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_11;
                                    {
                                      ATerm o_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm m_5 (ATerm t)
                                          {
                                            ATerm u_60 = NULL;
                                            u_60 = t;
                                            z_59 :
                                            if(!(match_string(u_60, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            ATerm v_60 = NULL;
                                            v_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_60));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, m_5, n_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_11;
                                          {
                                            ATerm p_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm o_5 (ATerm t)
                                                {
                                                  ATerm x_60 = NULL;
                                                  x_60 = t;
                                                  b_60 :
                                                  if(!(match_string(x_60, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm p_5 (ATerm t)
                                                {
                                                  ATerm y_60 = NULL;
                                                  y_60 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_60));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, o_5, p_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_11;
                                                {
                                                  ATerm q_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm q_5 (ATerm t)
                                                      {
                                                        ATerm a_61 = NULL;
                                                        a_61 = t;
                                                        d_60 :
                                                        if(!(match_string(a_61, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm r_5 (ATerm t)
                                                      {
                                                        ATerm b_61 = NULL;
                                                        b_61 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_61));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, q_5, r_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = q_11;
                                                      {
                                                        ATerm w_11 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm u_5 (ATerm t)
                                                            {
                                                              ATerm d_61 = NULL;
                                                              d_61 = t;
                                                              f_60 :
                                                              if(!(match_string(d_61, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm w_5 (ATerm t)
                                                            {
                                                              ATerm e_61 = NULL;
                                                              e_61 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_61));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, u_5, w_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = w_11;
                                                            {
                                                              ATerm x_11 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm x_5 (ATerm t)
                                                                  {
                                                                    ATerm g_61 = NULL;
                                                                    g_61 = t;
                                                                    h_60 :
                                                                    if(!(match_string(g_61, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, x_5, y_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = x_11;
                                                                  {
                                                                    ATerm y_11 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm a_6 (ATerm t)
                                                                        {
                                                                          ATerm h_61 = NULL;
                                                                          h_61 = t;
                                                                          i_60 :
                                                                          if(!(match_string(h_61, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm c_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, a_6, c_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_11;
                                                                        {
                                                                          ATerm e_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm d_6 (ATerm t)
                                                                              {
                                                                                ATerm i_61 = NULL;
                                                                                i_61 = t;
                                                                                j_60 :
                                                                                if(!(match_string(i_61, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm e_6 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, d_6, e_6);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_12;
                                                                              {
                                                                                ATerm f_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm f_6 (ATerm t)
                                                                                    {
                                                                                      ATerm j_61 = NULL;
                                                                                      j_61 = t;
                                                                                      k_60 :
                                                                                      if(!(match_string(j_61, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, f_6, g_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_12;
                                                                                    {
                                                                                      ATerm k_6 (ATerm t)
                                                                                      {
                                                                                        ATerm k_61 = NULL;
                                                                                        k_61 = t;
                                                                                        l_60 :
                                                                                        if(!(match_string(k_61, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm m_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, k_6, m_6);
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
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  s_61 = t;
  r_61 :
  if(match_cons(s_61, sym_Cons_2))
    {
      t_61 = ATgetArgument(s_61, 0);
      u_61 = ATgetArgument(s_61, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_61)), not_null(u_61));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_38 (ATerm), ATerm f_38 (ATerm))
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Cons_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        ATerm h_62 = NULL;
        t = not_null(d_62);
        {
          ATerm j_62 = NULL;
          t = e_38(t);
          h_62 = t;
          t = not_null(e_62);
          t = f_38(t);
          j_62 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_62), not_null(j_62));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm p_62 = NULL;
  p_62 = t;
  o_62 :
  if(!(match_cons(p_62, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm r_62 = NULL;
    r_62 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_62));
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        ATerm l_12 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = l_12;
            t = r_41(t);
            t = Cons_2(t, _id, p_6);
          }
        PopChoice();
      }
    else
      {
        t = k_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, n_6, p_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_42 (ATerm), ATerm l_42 (ATerm), ATerm m_42 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm m_12 = t;
    if(PushChoice()==0)
      {
        t = l_42(t);
        PopChoice();
      }
    else
      {
        t = m_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_6);
  t = store_options_0(t);
  {
    ATerm n_12 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, m_42);
        PopChoice();
      }
    else
      {
        t = n_12;
        {
          ATerm o_12 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, k_42);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = o_12;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Ast2abox_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm q_12 = t;
    if(PushChoice()==0)
      {
        ATerm s_6 (ATerm t)
        {
          ATerm y_62 = NULL;
          y_62 = t;
          v_62 :
          if(!(match_string(y_62, "-v")))
            _fail(t);
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, s_6, t_6);
        PopChoice();
      }
    else
      {
        t = q_12;
        {
          ATerm u_6 (ATerm t)
          {
            ATerm z_62 = NULL;
            z_62 = t;
            w_62 :
            if(!(match_string(z_62, "-p")))
              _fail(t);
            return(t);
          }
          ATerm w_6 (ATerm t)
          {
            ATerm a_63 = NULL;
            a_63 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(a_63));
            return(t);
          }
          t = ArgOption_2(t, u_6, w_6);
        }
      }
    return(t);
  }
  t = iowrap_3(t, ast2abox_0, r_6, usage_p__0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast2abox_0(t);
  return(t);
}

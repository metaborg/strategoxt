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
ATerm obsolete_1 (ATerm, ATerm x_42 (ATerm));
ATerm usage_p__0 (ATerm);
ATerm ArgOption_2 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm Option_2 (ATerm, ATerm e_41 (ATerm), ATerm f_41 (ATerm));
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm d_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm j_53 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm s_57 (ATerm));
ATerm length_0 (ATerm);
ATerm S_1 (ATerm, ATerm c_0 (ATerm));
ATerm collect_p__1 (ATerm, ATerm s_37 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm v_57 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm d_49 (ATerm), ATerm e_49 (ATerm), ATerm f_49 (ATerm), ATerm g_49 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm p_49 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_51 (ATerm));
ATerm concat_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm q_51 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_53 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_42 (ATerm));
ATerm oncetd_1 (ATerm, ATerm x_54 (ATerm));
ATerm in_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm d_42 (ATerm));
ATerm notify_1 (ATerm, ATerm x_37 (ATerm));
ATerm map_1 (ATerm, ATerm r_50 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm repeat_1 (ATerm, ATerm l_56 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm c_47 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm));
ATerm crush_3 (ATerm, ATerm m_47 (ATerm), ATerm n_47 (ATerm), ATerm o_47 (ATerm));
ATerm collect_1 (ATerm, ATerm v_47 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm l_37 (ATerm), ATerm m_37 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_42 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_33 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_51 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_41 (ATerm));
ATerm need_help_1 (ATerm, ATerm g_42 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_37 (ATerm), ATerm q_37 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_41 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm Ast2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm obsolete_1 (ATerm t, ATerm x_42 (ATerm))
{
  ATerm q_2;
  q_2 = t;
  t = x_42(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
      return(t);
    }
    t = debug_1(t, e_0);
  }
  t = q_2;
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
ATerm ArgOption_2 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  f_1 = t;
  c_1 :
  if(match_cons(f_1, sym_Cons_2))
    {
      g_1 = ATgetArgument(f_1, 0);
      h_1 = ATgetArgument(f_1, 1);
      d_1 :
      if(match_cons(h_1, sym_Cons_2))
        {
          i_1 = ATgetArgument(h_1, 0);
          j_1 = ATgetArgument(h_1, 1);
          {
            ATerm n_1 = NULL;
            t = not_null(g_1);
            t = g_41(t);
            t = not_null(i_1);
            t = h_41(t);
            n_1 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_1), not_null(j_1));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm e_41 (ATerm), ATerm f_41 (ATerm))
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
  u_1 = t;
  t_1 :
  if(match_cons(u_1, sym_Cons_2))
    {
      v_1 = ATgetArgument(u_1, 0);
      w_1 = ATgetArgument(u_1, 1);
      {
        ATerm z_1 = NULL;
        t = not_null(v_1);
        t = e_41(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = f_41(t);
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_1), not_null(w_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_5 = t;
  if(PushChoice()==0)
    {
      ATerm e_2 = NULL;
      e_2 = t;
      d_2 :
      if(!(match_cons(e_2, sym_Nil_0)))
        _fail(t);
      PopChoice();
    }
  else
    {
      t = c_5;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  ATerm n_6 = t;
  if(PushChoice()==0)
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
      ATerm s_2 (ATerm t)
      {
        if(k_2 != NULL && k_2 != n_2)
          _fail(n_2);
        else
          k_2 = n_2;
        if(l_2 != NULL && l_2 != o_2)
          _fail(o_2);
        else
          l_2 = o_2;
        t = not_null(k_2);
        t = is_list_0(t);
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_2), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        t = flat_list_0(t);
        return(t);
      }
      m_2 = t;
      i_2 :
      if(!(match_cons(m_2, sym_Nil_0)))
        {
          if(match_cons(m_2, sym_Cons_2))
            {
              n_2 = ATgetArgument(m_2, 0);
              o_2 = ATgetArgument(m_2, 1);
              j_2 :
              if(match_cons(n_2, sym_Nil_0))
                {
                  ATerm a_8 = t;
                  if(PushChoice()==0)
                    {
                      if(l_2 != NULL && l_2 != o_2)
                        _fail(o_2);
                      else
                        l_2 = o_2;
                      {
                        ATerm g_0 (ATerm t)
                        {
                          ATerm p_2 = NULL;
                          p_2 = t;
                          h_2 :
                          if(!(match_cons(p_2, sym_Nil_0)))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_0 (ATerm t)
                        {
                          t = not_null(l_2);
                          t = flat_list_0(t);
                          return(t);
                        }
                        t = Cons_2(t, g_0, h_0);
                      }
                      PopChoice();
                    }
                  else
                    {
                      t = a_8;
                      t = s_2(t);
                    }
                }
              else
                t = s_2(t);
            }
          else
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = n_6;
      t = Cons_2(t, _id, flat_list_0);
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym_Arg_1))
    {
      c_3 = ATgetArgument(b_3, 0);
      {
        ATerm f_3 = NULL;
        ATerm g_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        {
          ATerm i_3 = NULL;
          t = d_0(t);
          g_3 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_3), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = index_0(t);
          i_3 = t;
          if(f_3 != NULL && f_3 != i_3)
            _fail(i_3);
          else
            f_3 = i_3;
        }
        t = not_null(f_3);
      }
    }
  else
    {
      if(match_cons(b_3, sym_Arg2_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          d_3 = ATgetArgument(b_3, 1);
          {
            ATerm l_3 = NULL,m_3 = NULL;
            ATerm n_3 = NULL;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm p_3 = NULL;
              t = d_0(t);
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_3), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm q_3 = NULL;
                t = index_0(t);
                p_3 = t;
                if(l_3 != NULL && l_3 != p_3)
                  _fail(p_3);
                else
                  l_3 = p_3;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_3), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = index_0(t);
                q_3 = t;
                if(m_3 != NULL && m_3 != q_3)
                  _fail(q_3);
                else
                  m_3 = q_3;
              }
            }
            t = not_null(m_3);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm j_53 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _all(t, y_3);
    t = j_53(t);
    return(t);
  }
  t = y_3(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  e_4 = t;
  b_4 :
  if(match_cons(e_4, sym_TCons_2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      c_4 :
      if(match_cons(g_4, sym_TCons_2))
        {
          h_4 = ATgetArgument(g_4, 0);
          i_4 = ATgetArgument(g_4, 1);
          d_4 :
          if(match_cons(i_4, sym_TNil_0))
            {
              ATerm l_4 = NULL;
              ATerm m_4 = NULL;
              t = not_null(f_4);
              {
                ATerm i_0 (ATerm t)
                {
                  ATerm d_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm f_8 = t;
                      if(PushChoice()==0)
                        {
                          ATerm j_0 (ATerm t)
                          {
                            t = not_null(h_4);
                            return(t);
                          }
                          t = Instantiate_1(t, j_0);
                          PopChoice();
                        }
                      else
                        {
                          t = f_8;
                          t = flat_list_0(t);
                        }
                      PopChoice();
                    }
                  else
                    t = d_8;
                  return(t);
                }
                t = bottomup_1(t, i_0);
                m_4 = t;
                if(l_4 != NULL && l_4 != m_4)
                  _fail(m_4);
                else
                  l_4 = m_4;
              }
              t = not_null(l_4);
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
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  s_4 :
  if(match_cons(t_4, sym_TNil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(t_4, sym_TCons_2))
        {
          u_4 = ATgetArgument(t_4, 0);
          v_4 = ATgetArgument(t_4, 1);
          {
            ATerm a_5 = NULL;
            t = not_null(v_4);
            t = tuple2list_0(t);
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_4), not_null(a_5));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
    ATerm g_8 = t;
    if(PushChoice()==0)
      {
        ATerm v_5 = NULL;
        v_5 = t;
        g_5 :
        if(!(match_cons(v_5, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = g_8;
        {
          ATerm h_8 = t;
          if(PushChoice()==0)
            {
              ATerm k_0 (ATerm t)
              {
                ATerm w_5 = NULL;
                w_5 = t;
                h_5 :
                if(!(match_cons(w_5, sym_Nil_0)))
                  _fail(t);
                return(t);
              }
              t = Cons_2(t, _id, k_0);
              PopChoice();
            }
          else
            {
              t = h_8;
              {
                ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
                x_5 = t;
                k_5 :
                if(match_cons(x_5, sym_Cons_2))
                  {
                    y_5 = ATgetArgument(x_5, 0);
                    z_5 = ATgetArgument(x_5, 1);
                    l_5 :
                    if(match_cons(z_5, sym_Cons_2))
                      {
                        a_6 = ATgetArgument(z_5, 0);
                        b_6 = ATgetArgument(z_5, 1);
                        if(s_5 != NULL && s_5 != y_5)
                          _fail(y_5);
                        else
                          s_5 = y_5;
                        if(t_5 != NULL && t_5 != a_6)
                          _fail(a_6);
                        else
                          t_5 = a_6;
                        if(u_5 != NULL && u_5 != b_6)
                          _fail(b_6);
                        else
                          u_5 = b_6;
                        {
                          ATerm l_0 (ATerm t)
                          {
                            ATerm c_6 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = s_57(t);
                            c_6 = t;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_5), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = instantiate_0(t);
                            return(t);
                          }
                          ATerm m_0 (ATerm t)
                          {
                            t = not_null(u_5);
                            t = e_6(t);
                            return(t);
                          }
                          t = Cons_2(t, l_0, m_0);
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
  t = e_6(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm i_8 = t;
  if(PushChoice()==0)
    {
      ATerm k_6 = NULL;
      k_6 = t;
      i_6 :
      if(match_cons(k_6, sym_Nil_0))
        t = (ATerm) ATmakeInt(0);
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = i_8;
      {
        ATerm l_6 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        l_6 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm S_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_S_1))
    {
      w_6 = ATgetArgument(v_6, 0);
      {
        ATerm j_8 = t;
        if(PushChoice()==0)
          {
            ATerm y_6 = NULL;
            t = not_null(w_6);
            t = c_0(t);
            y_6 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_6));
            PopChoice();
          }
        else
          {
            t = j_8;
            {
              ATerm d_7 = NULL;
              t = not_null(w_6);
              t = c_0(t);
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(d_7));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm s_37 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        ATerm k_7 = NULL;
        t = s_37(t);
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = k_8;
        {
          ATerm n_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, n_0, conc_0, m_7);
        }
      }
    return(t);
  }
  t = m_7(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  s_7 = t;
  p_7 :
  if(match_cons(s_7, sym_TCons_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      q_7 :
      if(match_cons(u_7, sym_TCons_2))
        {
          v_7 = ATgetArgument(u_7, 0);
          w_7 = ATgetArgument(u_7, 1);
          r_7 :
          if(match_cons(w_7, sym_TNil_0))
            t = SSL_mod(not_null(t_7), not_null(v_7));
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
  ATerm c_8 = NULL;
  ATerm e_8 = NULL;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_8), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = mod_0(t);
  e_8 = t;
  b_8 :
  if(!(match_int(e_8, 0)))
    _fail(t);
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  m_8 :
  if(match_cons(u_8, sym_TCons_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      s_8 :
      if(match_cons(w_8, sym_TCons_2))
        {
          x_8 = ATgetArgument(w_8, 0);
          y_8 = ATgetArgument(w_8, 1);
          t_8 :
          if(match_cons(y_8, sym_TNil_0))
            {
              ATerm b_9 = NULL;
              ATerm l_8 = t;
              if(PushChoice()==0)
                {
                  ATerm c_9 = NULL;
                  t = not_null(v_8);
                  t = even_0(t);
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm e_9 = NULL;
                    t = v_57(t);
                    c_9 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_9), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_8), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = arg2abox_0(t);
                    e_9 = t;
                    if(b_9 != NULL && b_9 != e_9)
                      _fail(e_9);
                    else
                      b_9 = e_9;
                  }
                  PopChoice();
                }
              else
                {
                  t = l_8;
                  {
                    ATerm f_9 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    {
                      ATerm h_9 = NULL;
                      t = v_57(t);
                      f_9 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_9), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_8), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = arg2abox_0(t);
                      h_9 = t;
                      if(b_9 != NULL && b_9 != h_9)
                        _fail(h_9);
                      else
                        b_9 = h_9;
                    }
                  }
                }
              t = not_null(b_9);
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
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  t_9 = t;
  o_9 :
  if(match_cons(t_9, sym_TCons_2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      p_9 :
      if(match_int(u_9, 1))
        {
          q_9 :
          if(match_cons(v_9, sym_TCons_2))
            {
              x_9 = ATgetArgument(v_9, 0);
              a_10 = ATgetArgument(v_9, 1);
              r_9 :
              if(match_cons(x_9, sym_Cons_2))
                {
                  y_9 = ATgetArgument(x_9, 0);
                  z_9 = ATgetArgument(x_9, 1);
                  s_9 :
                  if(match_cons(a_10, sym_TNil_0))
                    t = not_null(y_9);
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
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  i_10 = t;
  f_10 :
  if(match_cons(i_10, sym_TCons_2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      g_10 :
      if(match_cons(k_10, sym_TCons_2))
        {
          l_10 = ATgetArgument(k_10, 0);
          m_10 = ATgetArgument(k_10, 1);
          h_10 :
          if(match_cons(m_10, sym_TNil_0))
            {
              ATerm n_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_subti(not_null(j_10), not_null(l_10));
                  PopChoice();
                }
              else
                {
                  t = n_8;
                  t = SSL_subtr(not_null(j_10), not_null(l_10));
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
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  r_11 = t;
  x_10 :
  if(match_cons(r_11, sym_TCons_2))
    {
      s_11 = ATgetArgument(r_11, 0);
      t_11 = ATgetArgument(r_11, 1);
      y_10 :
      if(match_cons(t_11, sym_TCons_2))
        {
          u_11 = ATgetArgument(t_11, 0);
          v_11 = ATgetArgument(t_11, 1);
          j_11 :
          if(match_cons(v_11, sym_TNil_0))
            {
              ATerm o_8;
              o_8 = t;
              {
                ATerm p_8 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(s_11), not_null(u_11));
                    PopChoice();
                  }
                else
                  {
                    t = p_8;
                    t = SSL_gtr(not_null(s_11), not_null(u_11));
                  }
              }
              t = o_8;
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
  ATerm f_12 = NULL;
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm g_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
      g_12 = t;
      c_12 :
      if(match_cons(g_12, sym_TCons_2))
        {
          m_12 = ATgetArgument(g_12, 0);
          o_12 = ATgetArgument(g_12, 1);
          d_12 :
          if(match_cons(o_12, sym_TCons_2))
            {
              p_12 = ATgetArgument(o_12, 0);
              q_12 = ATgetArgument(o_12, 1);
              e_12 :
              if(match_cons(q_12, sym_TNil_0))
                {
                  if(f_12 != NULL && f_12 != m_12)
                    _fail(m_12);
                  else
                    f_12 = m_12;
                  if(f_12 != NULL && f_12 != p_12)
                    _fail(p_12);
                  else
                    f_12 = p_12;
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
      t = q_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,f_13 = NULL,g_13 = NULL;
  y_12 = t;
  u_12 :
  if(match_cons(y_12, sym_TCons_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      v_12 :
      if(match_cons(a_13, sym_TCons_2))
        {
          b_13 = ATgetArgument(a_13, 0);
          g_13 = ATgetArgument(a_13, 1);
          w_12 :
          if(match_cons(b_13, sym_Cons_2))
            {
              c_13 = ATgetArgument(b_13, 0);
              f_13 = ATgetArgument(b_13, 1);
              x_12 :
              if(match_cons(g_13, sym_TNil_0))
                {
                  ATerm m_13 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(2), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = geq_0(t);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = subt_0(t);
                  m_13 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_8 = t;
  if(PushChoice()==0)
    {
      ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
      v_16 = t;
      z_13 :
      if(match_cons(v_16, sym_TCons_2))
        {
          w_16 = ATgetArgument(v_16, 0);
          x_16 = ATgetArgument(v_16, 1);
          a_14 :
          if(match_cons(x_16, sym_TCons_2))
            {
              y_16 = ATgetArgument(x_16, 0);
              z_16 = ATgetArgument(x_16, 1);
              f_14 :
              if(match_cons(z_16, sym_TCons_2))
                {
                  a_17 = ATgetArgument(z_16, 0);
                  b_17 = ATgetArgument(z_16, 1);
                  g_14 :
                  if(match_cons(b_17, sym_TCons_2))
                    {
                      c_17 = ATgetArgument(b_17, 0);
                      d_17 = ATgetArgument(b_17, 1);
                      h_14 :
                      if(match_cons(c_17, sym_alt_2))
                        {
                          u_16 = ATgetArgument(c_17, 0);
                          r_16 = ATgetArgument(c_17, 1);
                          i_14 :
                          if(match_cons(r_16, sym_Nil_0))
                            {
                              k_14 :
                              if(match_cons(d_17, sym_TNil_0))
                                {
                                  ATerm i_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = index_0(t);
                                  i_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = instantiate_0(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(r_16, sym_Cons_2))
                                {
                                  s_16 = ATgetArgument(r_16, 0);
                                  t_16 = ATgetArgument(r_16, 1);
                                  n_14 :
                                  if(match_cons(t_16, sym_Nil_0))
                                    {
                                      o_14 :
                                      if(match_cons(d_17, sym_TNil_0))
                                        {
                                          ATerm p_17 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_16), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          {
                                            ATerm r_17 = NULL;
                                            t = arg2abox_0(t);
                                            p_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = index_0(t);
                                            r_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
                          if(match_cons(c_17, sym_Some_1))
                            {
                              u_16 = ATgetArgument(c_17, 0);
                              p_14 :
                              if(match_cons(d_17, sym_TNil_0))
                                {
                                  ATerm x_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm z_17 = NULL;
                                    t = conc_0(t);
                                    x_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_16), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = arg2abox_0(t);
                                    z_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                    t = instantiate_0(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(c_17, sym_None_0))
                                {
                                  q_14 :
                                  if(match_cons(d_17, sym_TNil_0))
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
      t = r_8;
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,v_18 = NULL;
            h_18 = t;
            t_14 :
            if(match_cons(h_18, sym_TCons_2))
              {
                i_18 = ATgetArgument(h_18, 0);
                j_18 = ATgetArgument(h_18, 1);
                u_14 :
                if(match_string(i_18, "iter"))
                  {
                    v_14 :
                    if(match_cons(j_18, sym_TCons_2))
                      {
                        k_18 = ATgetArgument(j_18, 0);
                        l_18 = ATgetArgument(j_18, 1);
                        w_14 :
                        if(match_cons(l_18, sym_TCons_2))
                          {
                            m_18 = ATgetArgument(l_18, 0);
                            n_18 = ATgetArgument(l_18, 1);
                            x_14 :
                            if(match_cons(n_18, sym_TCons_2))
                              {
                                o_18 = ATgetArgument(n_18, 0);
                                p_18 = ATgetArgument(n_18, 1);
                                y_14 :
                                if(match_cons(p_18, sym_TNil_0))
                                  {
                                    if(e_18 != NULL && e_18 != k_18)
                                      _fail(k_18);
                                    else
                                      e_18 = k_18;
                                    if(f_18 != NULL && f_18 != m_18)
                                      _fail(m_18);
                                    else
                                      f_18 = m_18;
                                    if(g_18 != NULL && g_18 != o_18)
                                      _fail(o_18);
                                    else
                                      g_18 = o_18;
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
                    if(match_string(i_18, "iter-star"))
                      {
                        z_14 :
                        if(match_cons(j_18, sym_TCons_2))
                          {
                            k_18 = ATgetArgument(j_18, 0);
                            l_18 = ATgetArgument(j_18, 1);
                            a_15 :
                            if(match_cons(l_18, sym_TCons_2))
                              {
                                m_18 = ATgetArgument(l_18, 0);
                                n_18 = ATgetArgument(l_18, 1);
                                b_15 :
                                if(match_cons(n_18, sym_TCons_2))
                                  {
                                    o_18 = ATgetArgument(n_18, 0);
                                    p_18 = ATgetArgument(n_18, 1);
                                    c_15 :
                                    if(match_cons(p_18, sym_TNil_0))
                                      {
                                        if(e_18 != NULL && e_18 != k_18)
                                          _fail(k_18);
                                        else
                                          e_18 = k_18;
                                        if(f_18 != NULL && f_18 != m_18)
                                          _fail(m_18);
                                        else
                                          f_18 = m_18;
                                        if(g_18 != NULL && g_18 != o_18)
                                          _fail(o_18);
                                        else
                                          g_18 = o_18;
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
            t = not_null(g_18);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm q_18 = NULL;
                ATerm s_18 = NULL;
                q_18 = t;
                {
                  ATerm t_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = arg2abox_0(t);
                  t_18 = t;
                  if(s_18 != NULL && s_18 != t_18)
                    _fail(t_18);
                  else
                    s_18 = t_18;
                  t = not_null(s_18);
                }
                return(t);
              }
              t = map_1(t, o_0);
              v_18 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_18), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_18), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = instantiate_0(t);
            }
            PopChoice();
          }
        else
          {
            t = z_8;
            {
              ATerm a_9 = t;
              if(PushChoice()==0)
                {
                  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
                  a_19 = t;
                  i_15 :
                  if(match_cons(a_19, sym_TCons_2))
                    {
                      b_19 = ATgetArgument(a_19, 0);
                      c_19 = ATgetArgument(a_19, 1);
                      j_15 :
                      if(match_string(b_19, "iter-sep"))
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
                                          if(x_18 != NULL && x_18 != d_19)
                                            _fail(d_19);
                                          else
                                            x_18 = d_19;
                                          if(y_18 != NULL && y_18 != f_19)
                                            _fail(f_19);
                                          else
                                            y_18 = f_19;
                                          if(z_18 != NULL && z_18 != h_19)
                                            _fail(h_19);
                                          else
                                            z_18 = h_19;
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
                          if(match_string(b_19, "iter-star-sep"))
                            {
                              r_15 :
                              if(match_cons(c_19, sym_TCons_2))
                                {
                                  d_19 = ATgetArgument(c_19, 0);
                                  e_19 = ATgetArgument(c_19, 1);
                                  s_15 :
                                  if(match_cons(e_19, sym_TCons_2))
                                    {
                                      f_19 = ATgetArgument(e_19, 0);
                                      g_19 = ATgetArgument(e_19, 1);
                                      t_15 :
                                      if(match_cons(g_19, sym_TCons_2))
                                        {
                                          h_19 = ATgetArgument(g_19, 0);
                                          i_19 = ATgetArgument(g_19, 1);
                                          u_15 :
                                          if(match_cons(i_19, sym_TNil_0))
                                            {
                                              if(x_18 != NULL && x_18 != d_19)
                                                _fail(d_19);
                                              else
                                                x_18 = d_19;
                                              if(y_18 != NULL && y_18 != f_19)
                                                _fail(f_19);
                                              else
                                                y_18 = f_19;
                                              if(z_18 != NULL && z_18 != h_19)
                                                _fail(h_19);
                                              else
                                                z_18 = h_19;
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
                  t = not_null(z_18);
                  {
                    ATerm p_0 (ATerm t)
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(x_18);
                        return(t);
                      }
                      t = BuildSepList_1(t, q_0);
                      return(t);
                    }
                    t = nzip_1(t, p_0);
                    j_19 = t;
                    {
                      ATerm d_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm l_19 = NULL;
                          t = not_null(y_18);
                          {
                            ATerm r_0 (ATerm t)
                            {
                              t = S_1(t, _id);
                              return(t);
                            }
                            t = collect_p__1(t, r_0);
                            t = length_0(t);
                            l_19 = t;
                            d_16 :
                            if(match_int(l_19, 1))
                              {
                                t = not_null(j_19);
                                {
                                  ATerm r_21 (ATerm t)
                                  {
                                    ATerm m_19 = NULL,o_19 = NULL,p_19 = NULL;
                                    ATerm u_21 (ATerm t)
                                    {
                                      ATerm w_19 = NULL;
                                      t = not_null(p_19);
                                      t = r_21(t);
                                      w_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_19), not_null(w_19)));
                                      return(t);
                                    }
                                    m_19 = t;
                                    b_16 :
                                    if(match_cons(m_19, sym_Nil_0))
                                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                                    else
                                      {
                                        if(match_cons(m_19, sym_Cons_2))
                                          {
                                            o_19 = ATgetArgument(m_19, 0);
                                            p_19 = ATgetArgument(m_19, 1);
                                            c_16 :
                                            if(match_cons(p_19, sym_Nil_0))
                                              {
                                                ATerm g_9 = t;
                                                if(PushChoice()==0)
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_19), (ATerm) ATmakeAppl(sym_Nil_0));
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = g_9;
                                                    t = u_21(t);
                                                  }
                                              }
                                            else
                                              t = u_21(t);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = r_21(t);
                                }
                              }
                            else
                              _fail(t);
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = d_9;
                          t = not_null(j_19);
                        }
                      {
                        ATerm s_0 (ATerm t)
                        {
                          t = not_null(y_18);
                          return(t);
                        }
                        t = instantiate_sep_list_1(t, s_0);
                      }
                    }
                  }
                  PopChoice();
                }
              else
                {
                  t = a_9;
                  {
                    ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                    y_19 = t;
                    l_16 :
                    if(match_cons(y_19, sym_TCons_2))
                      {
                        z_19 = ATgetArgument(y_19, 0);
                        a_20 = ATgetArgument(y_19, 1);
                        m_16 :
                        if(match_string(z_19, "seq"))
                          {
                            n_16 :
                            if(match_cons(a_20, sym_TCons_2))
                              {
                                b_20 = ATgetArgument(a_20, 0);
                                c_20 = ATgetArgument(a_20, 1);
                                o_16 :
                                if(match_cons(c_20, sym_TCons_2))
                                  {
                                    d_20 = ATgetArgument(c_20, 0);
                                    e_20 = ATgetArgument(c_20, 1);
                                    p_16 :
                                    if(match_cons(e_20, sym_TCons_2))
                                      {
                                        f_20 = ATgetArgument(e_20, 0);
                                        g_20 = ATgetArgument(e_20, 1);
                                        q_16 :
                                        if(match_cons(g_20, sym_TNil_0))
                                          {
                                            ATerm x_20 = NULL;
                                            t = not_null(f_20);
                                            t = tuple2list_0(t);
                                            {
                                              ATerm t_0 (ATerm t)
                                              {
                                                ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
                                                k_20 = t;
                                                h_16 :
                                                if(match_cons(k_20, sym_TCons_2))
                                                  {
                                                    l_20 = ATgetArgument(k_20, 0);
                                                    m_20 = ATgetArgument(k_20, 1);
                                                    i_16 :
                                                    if(match_cons(m_20, sym_TCons_2))
                                                      {
                                                        n_20 = ATgetArgument(m_20, 0);
                                                        o_20 = ATgetArgument(m_20, 1);
                                                        j_16 :
                                                        if(match_cons(o_20, sym_TNil_0))
                                                          {
                                                            ATerm r_20 = NULL;
                                                            ATerm u_20 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_20), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                            t = arg2abox_0(t);
                                                            u_20 = t;
                                                            if(r_20 != NULL && r_20 != u_20)
                                                              _fail(u_20);
                                                            else
                                                              r_20 = u_20;
                                                            t = not_null(r_20);
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
                                              t = nzip_1(t, t_0);
                                              x_20 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_20), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_22 = NULL,o_22 = NULL,p_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_selector_2))
    {
      o_22 = ATgetArgument(l_22, 0);
      p_22 = ATgetArgument(l_22, 1);
      {
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            ATerm s_22 = NULL;
            t = not_null(o_22);
            {
              ATerm u_22 = NULL;
              t = a_0(t);
              s_22 = t;
              t = not_null(p_22);
              t = b_0(t);
              u_22 = t;
              t = (ATerm) ATmakeAppl(sym_selector_2, not_null(s_22), not_null(u_22));
            }
            PopChoice();
          }
        else
          {
            t = i_9;
            {
              ATerm y_22 = NULL;
              t = not_null(o_22);
              {
                ATerm a_23 = NULL;
                t = a_0(t);
                y_22 = t;
                t = not_null(p_22);
                t = b_0(t);
                a_23 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(y_22), not_null(a_23));
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
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_Path_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        ATerm r_23 = NULL;
        t = not_null(o_23);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                ATerm s_23 = NULL;
                s_23 = t;
                if(r_23 != NULL && r_23 != s_23)
                  _fail(s_23);
                else
                  r_23 = s_23;
                return(t);
              }
              t = selector_2(t, _id, x_0);
              return(t);
            }
            ATerm w_0 (ATerm t)
            {
              ATerm t_23 = NULL;
              t_23 = t;
              k_23 :
              if(!(match_cons(t_23, sym_Nil_0)))
                _fail(t);
              return(t);
            }
            t = Cons_2(t, v_0, w_0);
            return(t);
          }
          t = at_last_1(t, u_0);
        }
        t = not_null(r_23);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  a_24 = t;
  x_23 :
  if(match_cons(a_24, sym_TCons_2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      y_23 :
      if(match_cons(c_24, sym_TCons_2))
        {
          d_24 = ATgetArgument(c_24, 0);
          e_24 = ATgetArgument(c_24, 1);
          z_23 :
          if(match_cons(e_24, sym_TNil_0))
            {
              t = not_null(b_24);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(d_24);
                  return(t);
                }
                t = at_end_1(t, y_0);
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
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  a_25 = t;
  w_24 :
  if(match_cons(a_25, sym_TCons_2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      x_24 :
      if(match_cons(c_25, sym_TCons_2))
        {
          d_25 = ATgetArgument(c_25, 0);
          e_25 = ATgetArgument(c_25, 1);
          y_24 :
          if(match_cons(e_25, sym_TCons_2))
            {
              f_25 = ATgetArgument(e_25, 0);
              g_25 = ATgetArgument(e_25, 1);
              z_24 :
              if(match_cons(g_25, sym_TNil_0))
                {
                  ATerm p_25 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_25), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
                    t = conc_0(t);
                    p_25 = t;
                    {
                      ATerm j_9 = t;
                      if(PushChoice()==0)
                        {
                          ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,b_26 = NULL,c_26 = NULL;
                          t = pp_table_get_0(t);
                          u_25 = t;
                          t_24 :
                          if(match_cons(u_25, sym_TCons_2))
                            {
                              v_25 = ATgetArgument(u_25, 0);
                              w_25 = ATgetArgument(u_25, 1);
                              u_24 :
                              if(match_cons(w_25, sym_TCons_2))
                                {
                                  b_26 = ATgetArgument(w_25, 0);
                                  c_26 = ATgetArgument(w_25, 1);
                                  v_24 :
                                  if(match_cons(c_26, sym_TNil_0))
                                    {
                                      ATerm d_26 = NULL;
                                      if(r_25 != NULL && r_25 != v_25)
                                        _fail(v_25);
                                      else
                                        r_25 = v_25;
                                      if(t_25 != NULL && t_25 != b_26)
                                        _fail(b_26);
                                      else
                                        t_25 = b_26;
                                      t = not_null(r_25);
                                      t = get_symbol_0(t);
                                      d_26 = t;
                                      if(s_25 != NULL && s_25 != d_26)
                                        _fail(d_26);
                                      else
                                        s_25 = d_26;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_25), (ATerm) ATmakeAppl(sym_TNil_0)))));
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
                          t = j_9;
                          t = not_null(f_25);
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
  ATerm s_26 = NULL,t_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  s_26 = t;
  p_26 :
  if(match_cons(s_26, sym_TCons_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      y_26 = ATgetArgument(s_26, 1);
      q_26 :
      if(match_cons(y_26, sym_TCons_2))
        {
          z_26 = ATgetArgument(y_26, 0);
          a_27 = ATgetArgument(y_26, 1);
          r_26 :
          if(match_cons(a_27, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_26), not_null(z_26));
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  i_27 = t;
  f_27 :
  if(match_cons(i_27, sym_TCons_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      g_27 :
      if(match_cons(k_27, sym_TCons_2))
        {
          l_27 = ATgetArgument(k_27, 0);
          m_27 = ATgetArgument(k_27, 1);
          h_27 :
          if(match_cons(m_27, sym_TNil_0))
            {
              ATerm k_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(j_27), not_null(l_27));
                  PopChoice();
                }
              else
                {
                  t = k_9;
                  t = SSL_addr(not_null(j_27), not_null(l_27));
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
  ATerm l_29 = NULL,m_29 = NULL,r_29 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  l_29 = t;
  i_28 :
  if(match_cons(l_29, sym_TCons_2))
    {
      m_29 = ATgetArgument(l_29, 0);
      r_29 = ATgetArgument(l_29, 1);
      j_28 :
      if(match_cons(r_29, sym_TCons_2))
        {
          f_32 = ATgetArgument(r_29, 0);
          i_32 = ATgetArgument(r_29, 1);
          o_28 :
          if(match_cons(f_32, sym_Cons_2))
            {
              g_32 = ATgetArgument(f_32, 0);
              h_32 = ATgetArgument(f_32, 1);
              p_28 :
              if(match_cons(i_32, sym_TNil_0))
                {
                  ATerm m_32 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_29), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  m_32 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_32), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_32), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  v_32 = t;
  r_32 :
  if(match_cons(v_32, sym_TCons_2))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      s_32 :
      if(match_cons(x_32, sym_TCons_2))
        {
          y_32 = ATgetArgument(x_32, 0);
          z_32 = ATgetArgument(x_32, 1);
          t_32 :
          if(match_cons(y_32, sym_Nil_0))
            {
              u_32 :
              if(match_cons(z_32, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm d_49 (ATerm), ATerm e_49 (ATerm), ATerm f_49 (ATerm), ATerm g_49 (ATerm))
{
  ATerm e_33 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = d_49(t);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = e_49(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm d_33 = NULL;
              d_33 = t;
              c_33 :
              if(!(match_cons(d_33, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, e_33, a_1);
            return(t);
          }
          t = TCons_2(t, g_49, z_0);
          t = f_49(t);
        }
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_33), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm p_49 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, p_49);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm p_33 = NULL;
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_33), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_get_0(t);
  r_33 = t;
  m_33 :
  if(match_cons(r_33, sym_TCons_2))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      n_33 :
      if(match_cons(t_33, sym_TCons_2))
        {
          u_33 = ATgetArgument(t_33, 0);
          v_33 = ATgetArgument(t_33, 1);
          o_33 :
          if(match_cons(v_33, sym_TNil_0))
            {
              ATerm m_9;
              m_9 = t;
              t = not_null(s_33);
              t = path_to_string_0(t);
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
                  return(t);
                }
                t = notify_1(t, b_1);
              }
              t = m_9;
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
  ATerm b_34 = NULL;
  b_34 = t;
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = pp_table_get_0(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm e_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
            return(t);
          }
          t = debug_1(t, e_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  t = SSL_is_string(not_null(f_34));
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      ATerm z_34 = NULL;
      z_34 = t;
      t = is_string_0(t);
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(z_34));
      PopChoice();
    }
  else
    {
      t = w_9;
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            t = is_list_0(t);
            t = map_1(t, trm2abox_0);
            PopChoice();
          }
        else
          {
            t = b_10;
            {
              ATerm b_35 = NULL;
              ATerm d_35 = NULL,e_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
              b_35 = t;
              {
                ATerm f_35 = NULL;
                ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
                t = not_null(b_35);
                f_35 = t;
                t = SSL_explode_term(not_null(f_35));
                h_35 = t;
                m_34 :
                if(match_cons(h_35, sym_TCons_2))
                  {
                    i_35 = ATgetArgument(h_35, 0);
                    j_35 = ATgetArgument(h_35, 1);
                    n_34 :
                    if(match_cons(j_35, sym_TCons_2))
                      {
                        k_35 = ATgetArgument(j_35, 0);
                        l_35 = ATgetArgument(j_35, 1);
                        o_34 :
                        if(match_cons(l_35, sym_TNil_0))
                          {
                            if(d_35 != NULL && d_35 != i_35)
                              _fail(i_35);
                            else
                              d_35 = i_35;
                            if(e_35 != NULL && e_35 != k_35)
                              _fail(k_35);
                            else
                              e_35 = k_35;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_Nil_0));
                t = pp_table_get_p__0(t);
                m_35 = t;
                w_34 :
                if(match_cons(m_35, sym_TCons_2))
                  {
                    n_35 = ATgetArgument(m_35, 0);
                    o_35 = ATgetArgument(m_35, 1);
                    x_34 :
                    if(match_cons(o_35, sym_TCons_2))
                      {
                        p_35 = ATgetArgument(o_35, 0);
                        q_35 = ATgetArgument(o_35, 1);
                        y_34 :
                        if(match_cons(q_35, sym_TNil_0))
                          {
                            ATerm e_36 = NULL;
                            t = not_null(e_35);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
                                t_35 = t;
                                s_34 :
                                if(match_cons(t_35, sym_TCons_2))
                                  {
                                    u_35 = ATgetArgument(t_35, 0);
                                    v_35 = ATgetArgument(t_35, 1);
                                    t_34 :
                                    if(match_cons(v_35, sym_TCons_2))
                                      {
                                        w_35 = ATgetArgument(v_35, 0);
                                        x_35 = ATgetArgument(v_35, 1);
                                        u_34 :
                                        if(match_cons(x_35, sym_TNil_0))
                                          {
                                            ATerm a_36 = NULL;
                                            ATerm b_36 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = arg2abox_0(t);
                                            b_36 = t;
                                            if(a_36 != NULL && a_36 != b_36)
                                              _fail(b_36);
                                            else
                                              a_36 = b_36;
                                            t = not_null(a_36);
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
                              t = nzip_1(t, k_1);
                              e_36 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_36), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm at_end_1 (ATerm t, ATerm g_51 (ATerm))
{
  ATerm r_36 (ATerm t)
  {
    ATerm c_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, r_36);
        PopChoice();
      }
    else
      {
        t = c_10;
        {
          ATerm q_36 = NULL;
          q_36 = t;
          p_36 :
          if(match_cons(q_36, sym_Nil_0))
            t = g_51(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = r_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(!(match_cons(v_36, sym_Nil_0)))
    {
      if(match_cons(v_36, sym_Cons_2))
        {
          w_36 = ATgetArgument(v_36, 0);
          x_36 = ATgetArgument(v_36, 1);
          t = not_null(w_36);
          {
            ATerm l_1 (ATerm t)
            {
              t = not_null(x_36);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, l_1);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  t = SSL_int_to_string(not_null(d_37));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,y_37 = NULL;
  v_37 = t;
  o_37 :
  if(match_cons(v_37, sym_Path1_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      t = not_null(w_37);
    }
  else
    {
      if(match_cons(v_37, sym_Path_2))
        {
          w_37 = ATgetArgument(v_37, 0);
          y_37 = ATgetArgument(v_37, 1);
          {
            ATerm g_38 = NULL,o_38 = NULL;
            t = not_null(y_37);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
                h_38 = t;
                k_37 :
                if(match_cons(h_38, sym_selector_2))
                  {
                    i_38 = ATgetArgument(h_38, 0);
                    j_38 = ATgetArgument(h_38, 1);
                    {
                      ATerm m_38 = NULL;
                      t = not_null(i_38);
                      t = int_to_string_0(t);
                      m_38 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(".", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_38), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(":", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_Nil_0)))));
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, m_1);
              t = concat_0(t);
              o_38 = t;
              if(g_38 != NULL && g_38 != o_38)
                _fail(o_38);
              else
                g_38 = o_38;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_37), not_null(g_38));
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
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym_Path1_1))
    {
      b_39 = ATgetArgument(a_39, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_39), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(a_39, sym_Path_2))
        {
          b_39 = ATgetArgument(a_39, 0);
          c_39 = ATgetArgument(a_39, 1);
          {
            ATerm k_39 = NULL,s_39 = NULL;
            t = not_null(c_39);
            {
              ATerm o_1 (ATerm t)
              {
                ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
                l_39 = t;
                x_38 :
                if(match_cons(l_39, sym_selector_2))
                  {
                    m_39 = ATgetArgument(l_39, 0);
                    n_39 = ATgetArgument(l_39, 1);
                    t = not_null(m_39);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, o_1);
              s_39 = t;
              if(k_39 != NULL && k_39 != s_39)
                _fail(s_39);
              else
                k_39 = s_39;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_39), not_null(k_39));
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
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_PP_Entry_2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      {
        ATerm f_40 = NULL;
        t = not_null(b_40);
        t = mk_key_0(t);
        f_40 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_40), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0))));
        t = table_put_0(t);
        t = not_null(b_40);
        t = path_to_string_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
            return(t);
          }
          t = notify_1(t, p_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  t = SSL_string_to_int(not_null(k_40));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm b_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,m_41 = NULL;
  ATerm c_42 (ATerm t)
  {
    ATerm y_41 = NULL;
    t = not_null(k_41);
    t = De_Escape_0(t);
    y_41 = t;
    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_41), not_null(y_41));
    return(t);
  }
  ATerm e_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  m_41 = t;
  u_40 :
  if(match_cons(m_41, sym_Cons_2))
    {
      j_41 = ATgetArgument(m_41, 0);
      k_41 = ATgetArgument(m_41, 1);
      v_40 :
      if(match_cons(k_41, sym_Cons_2))
        {
          b_41 = ATgetArgument(k_41, 0);
          i_41 = ATgetArgument(k_41, 1);
          w_40 :
          if(match_int(b_41, 34))
            {
              x_40 :
              if(match_int(j_41, 92))
                {
                  ATerm d_10 = t;
                  if(PushChoice()==0)
                    {
                      ATerm o_41 = NULL;
                      t = not_null(i_41);
                      t = De_Escape_0(t);
                      o_41 = t;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(34), not_null(o_41));
                      PopChoice();
                    }
                  else
                    {
                      t = d_10;
                      t = c_42(t);
                    }
                }
              else
                t = c_42(t);
            }
          else
            {
              if(match_int(b_41, 92))
                {
                  y_40 :
                  if(match_int(j_41, 92))
                    {
                      ATerm e_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm r_41 = NULL;
                          t = not_null(i_41);
                          t = De_Escape_0(t);
                          r_41 = t;
                          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(92), not_null(r_41));
                          PopChoice();
                        }
                      else
                        {
                          t = e_10;
                          t = c_42(t);
                        }
                    }
                  else
                    t = c_42(t);
                }
              else
                {
                  z_40 :
                  t = c_42(t);
                }
            }
        }
      else
        {
          a_41 :
          t = c_42(t);
        }
    }
  else
    {
      if(match_cons(m_41, sym_Nil_0))
        t = e_42(t);
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
  ATerm l_42 = NULL;
  l_42 = t;
  t = SSL_implode_string(not_null(l_42));
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_51 (ATerm))
{
  ATerm r_42 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm p_42 = NULL;
          p_42 = t;
          o_42 :
          if(!(match_cons(p_42, sym_Nil_0)))
            _fail(t);
          return(t);
        }
        t = Cons_2(t, _id, q_1);
        t = q_51(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = Cons_2(t, _id, r_42);
      }
    return(t);
  }
  t = r_42(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym_Cons_2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      t = not_null(w_42);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym_Cons_2))
    {
      e_43 = ATgetArgument(d_43, 0);
      f_43 = ATgetArgument(d_43, 1);
      t = not_null(e_43);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_43 = NULL;
  k_43 = t;
  t = SSL_explode_string(not_null(k_43));
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_10;
    o_10 = t;
    {
      ATerm s_43 = NULL;
      t = Hd_0(t);
      s_43 = t;
      n_43 :
      if(!(match_int(s_43, 34)))
        _fail(t);
    }
    t = o_10;
    t = Tl_0(t);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
        t_43 = t;
        p_43 :
        if(match_cons(t_43, sym_Cons_2))
          {
            u_43 = ATgetArgument(t_43, 0);
            v_43 = ATgetArgument(t_43, 1);
            q_43 :
            if(match_int(u_43, 34))
              {
                r_43 :
                if(match_cons(v_43, sym_Nil_0))
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
      t = at_last_1(t, r_1);
      t = implode_string_0(t);
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_Arg_1))
    {
      l_44 = ATgetArgument(k_44, 0);
      {
        ATerm q_44 = NULL;
        t = not_null(l_44);
        t = string_to_int_0(t);
        q_44 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(q_44));
      }
    }
  else
    {
      if(match_cons(k_44, sym_Arg2_2))
        {
          l_44 = ATgetArgument(k_44, 0);
          m_44 = ATgetArgument(k_44, 1);
          {
            ATerm v_44 = NULL;
            t = not_null(l_44);
            {
              ATerm x_44 = NULL;
              t = string_to_int_0(t);
              v_44 = t;
              t = not_null(m_44);
              t = string_to_int_0(t);
              x_44 = t;
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(v_44), not_null(x_44));
            }
          }
        }
      else
        {
          if(match_cons(k_44, sym_SOpt_2))
            {
              l_44 = ATgetArgument(k_44, 0);
              m_44 = ATgetArgument(k_44, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(l_44), not_null(m_44));
            }
          else
            {
              if(match_cons(k_44, sym_S_1))
                {
                  l_44 = ATgetArgument(k_44, 0);
                  {
                    ATerm f_45 = NULL;
                    t = not_null(l_44);
                    t = de_quote_0(t);
                    t = de_escape_0(t);
                    f_45 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(f_45));
                  }
                }
              else
                {
                  if(match_cons(k_44, sym_selector_2))
                    {
                      l_44 = ATgetArgument(k_44, 0);
                      m_44 = ATgetArgument(k_44, 1);
                      {
                        ATerm k_45 = NULL;
                        t = not_null(l_44);
                        t = string_to_int_0(t);
                        k_45 = t;
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(k_45), not_null(m_44));
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
ATerm topdown_1 (ATerm t, ATerm h_53 (ATerm))
{
  ATerm a_46 (ATerm t)
  {
    t = h_53(t);
    t = _all(t, a_46);
    return(t);
  }
  t = a_46(t);
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = MakePPTerm_0(t);
        PopChoice();
      }
    else
      t = p_10;
    return(t);
  }
  t = topdown_1(t, s_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  d_46 = t;
  c_46 :
  if(match_cons(d_46, sym_PP_Table_1))
    {
      e_46 = ATgetArgument(d_46, 0);
      t = not_null(e_46);
      t = reverse_0(t);
      {
        ATerm x_1 (ATerm t)
        {
          t = makePPEntry_0(t);
          t = StoreEntry_0(t);
          return(t);
        }
        t = map_1(t, x_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm q_10;
  q_10 = t;
  {
    ATerm y_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm a_2 (ATerm t)
    {
      ATerm j_46 = NULL;
      ATerm l_46 = NULL;
      j_46 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = q_42(t);
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_46), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_46), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, y_1, a_2);
    t = printnl_0(t);
  }
  t = q_10;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm p_46 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = x_54(t);
        PopChoice();
      }
    else
      {
        t = r_10;
        t = _one(t, p_46);
      }
    return(t);
  }
  t = p_46(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  v_46 = t;
  s_46 :
  if(match_cons(v_46, sym_TCons_2))
    {
      w_46 = ATgetArgument(v_46, 0);
      x_46 = ATgetArgument(v_46, 1);
      t_46 :
      if(match_cons(x_46, sym_TCons_2))
        {
          y_46 = ATgetArgument(x_46, 0);
          z_46 = ATgetArgument(x_46, 1);
          u_46 :
          if(match_cons(z_46, sym_TNil_0))
            {
              t = not_null(y_46);
              {
                ATerm b_2 (ATerm t)
                {
                  ATerm d_47 = NULL;
                  d_47 = t;
                  if(w_46 != NULL && w_46 != d_47)
                    _fail(d_47);
                  else
                    w_46 = d_47;
                  return(t);
                }
                t = oncetd_1(t, b_2);
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
  ATerm l_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  l_47 = t;
  i_47 :
  if(match_cons(l_47, sym_TCons_2))
    {
      p_47 = ATgetArgument(l_47, 0);
      q_47 = ATgetArgument(l_47, 1);
      j_47 :
      if(match_cons(q_47, sym_TCons_2))
        {
          r_47 = ATgetArgument(q_47, 0);
          s_47 = ATgetArgument(q_47, 1);
          k_47 :
          if(match_cons(s_47, sym_TNil_0))
            t = SSL_table_get(not_null(p_47), not_null(r_47));
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
  ATerm a_48 = NULL;
  ATerm c_48 = NULL;
  a_48 = t;
  {
    ATerm d_48 = NULL;
    t = get_options_0(t);
    d_48 = t;
    if(c_48 != NULL && c_48 != d_48)
      _fail(d_48);
    else
      c_48 = d_48;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_48), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = in_0(t);
    t = (ATerm) ATmakeAppl(sym_TNil_0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm d_42 (ATerm))
{
  ATerm s_10;
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = d_42(t);
  t = check_option_0(t);
  t = s_10;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm x_37 (ATerm))
{
  ATerm t_10 = t;
  if(PushChoice()==0)
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm v_10;
        v_10 = t;
        {
          ATerm c_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Verbose_0);
            return(t);
          }
          t = has_option_1(t, c_2);
        }
        t = v_10;
        t = debug_1(t, x_37);
      }
      t = u_10;
      PopChoice();
    }
  else
    t = t_10;
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm i_48 (ATerm t)
  {
    ATerm w_10 = t;
    if(PushChoice()==0)
      {
        ATerm h_48 = NULL;
        h_48 = t;
        g_48 :
        if(!(match_cons(h_48, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_10;
        t = Cons_2(t, r_50, i_48);
      }
    return(t);
  }
  t = i_48(t);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  t = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  t = table_create_0(t);
  t = not_null(k_48);
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
        return(t);
      }
      t = notify_1(t, g_2);
      t = ReadFromFile_0(t);
      t = build_pp_table_0(t);
      return(t);
    }
    t = map_1(t, f_2);
  }
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  s_48 = t;
  o_48 :
  if(match_cons(s_48, sym_TCons_2))
    {
      t_48 = ATgetArgument(s_48, 0);
      u_48 = ATgetArgument(s_48, 1);
      p_48 :
      if(match_cons(t_48, sym_Nil_0))
        {
          q_48 :
          if(match_cons(u_48, sym_TCons_2))
            {
              v_48 = ATgetArgument(u_48, 0);
              w_48 = ATgetArgument(u_48, 1);
              r_48 :
              if(match_cons(w_48, sym_TNil_0))
                t = not_null(v_48);
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
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL;
  j_49 = t;
  a_49 :
  if(match_cons(j_49, sym_TCons_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      n_49 = ATgetArgument(j_49, 1);
      b_49 :
      if(match_cons(k_49, sym_Cons_2))
        {
          l_49 = ATgetArgument(k_49, 0);
          m_49 = ATgetArgument(k_49, 1);
          c_49 :
          if(match_cons(n_49, sym_TCons_2))
            {
              o_49 = ATgetArgument(n_49, 0);
              q_49 = ATgetArgument(n_49, 1);
              i_49 :
              if(match_cons(q_49, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_49), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_49), not_null(o_49)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm v_49 (ATerm t)
  {
    ATerm z_10 = t;
    if(PushChoice()==0)
      {
        t = i_56(t);
        t = v_49(t);
        PopChoice();
      }
    else
      {
        t = z_10;
        t = j_56(t);
      }
    return(t);
  }
  t = v_49(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm l_56 (ATerm))
{
  t = repeat_2(t, l_56, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_49), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_Cons_2))
    {
      e_50 = ATgetArgument(d_50, 0);
      f_50 = ATgetArgument(d_50, 1);
      t = c_47(t);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm i_50 = NULL;
          i_50 = t;
          if(e_50 != NULL && e_50 != i_50)
            _fail(i_50);
          else
            e_50 = i_50;
          return(t);
        }
        t = fetch_1(t, r_2);
      }
      t = not_null(f_50);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  t_50 = t;
  o_50 :
  if(match_cons(t_50, sym_TCons_2))
    {
      u_50 = ATgetArgument(t_50, 0);
      v_50 = ATgetArgument(t_50, 1);
      p_50 :
      if(match_cons(v_50, sym_TCons_2))
        {
          w_50 = ATgetArgument(v_50, 0);
          x_50 = ATgetArgument(v_50, 1);
          q_50 :
          if(match_cons(x_50, sym_TNil_0))
            {
              t = not_null(u_50);
              {
                ATerm f_51 (ATerm t)
                {
                  ATerm a_11 = t;
                  if(PushChoice()==0)
                    {
                      ATerm d_51 = NULL;
                      d_51 = t;
                      n_50 :
                      if(match_cons(d_51, sym_Nil_0))
                        t = not_null(w_50);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_11;
                      {
                        ATerm b_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm t_2 (ATerm t)
                            {
                              t = not_null(w_50);
                              return(t);
                            }
                            t = HdMember_1(t, t_2);
                            t = f_51(t);
                            PopChoice();
                          }
                        else
                          {
                            t = b_11;
                            t = Cons_2(t, _id, f_51);
                          }
                      }
                    }
                  return(t);
                }
                t = f_51(t);
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
ATerm foldr_3 (ATerm t, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm))
{
  ATerm z_51 (ATerm t)
  {
    ATerm o_51 = NULL,p_51 = NULL,s_51 = NULL;
    o_51 = t;
    n_51 :
    if(match_cons(o_51, sym_Nil_0))
      t = v_45(t);
    else
      {
        if(match_cons(o_51, sym_Cons_2))
          {
            p_51 = ATgetArgument(o_51, 0);
            s_51 = ATgetArgument(o_51, 1);
            {
              ATerm v_51 = NULL;
              t = not_null(p_51);
              {
                ATerm x_51 = NULL;
                t = x_45(t);
                v_51 = t;
                t = not_null(s_51);
                t = z_51(t);
                x_51 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = w_45(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm m_47 (ATerm), ATerm n_47 (ATerm), ATerm o_47 (ATerm))
{
  ATerm l_52 = NULL;
  ATerm n_52 = NULL;
  l_52 = t;
  {
    ATerm o_52 = NULL;
    ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
    t = not_null(l_52);
    o_52 = t;
    t = SSL_explode_term(not_null(o_52));
    q_52 = t;
    i_52 :
    if(match_cons(q_52, sym_TCons_2))
      {
        r_52 = ATgetArgument(q_52, 0);
        s_52 = ATgetArgument(q_52, 1);
        j_52 :
        if(match_cons(s_52, sym_TCons_2))
          {
            t_52 = ATgetArgument(s_52, 0);
            u_52 = ATgetArgument(s_52, 1);
            k_52 :
            if(match_cons(u_52, sym_TNil_0))
              {
                if(n_52 != NULL && n_52 != t_52)
                  _fail(t_52);
                else
                  n_52 = t_52;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(n_52);
    t = foldr_3(t, m_47, n_47, o_47);
  }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_47 (ATerm))
{
  ATerm b_53 (ATerm t)
  {
    ATerm c_11 = t;
    if(PushChoice()==0)
      {
        ATerm z_52 = NULL;
        t = v_47(t);
        z_52 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_52), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = c_11;
        {
          ATerm u_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, u_2, union_0, b_53);
        }
      }
    return(t);
  }
  t = b_53(t);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  o_53 = t;
  l_53 :
  if(match_cons(o_53, sym_TCons_2))
    {
      p_53 = ATgetArgument(o_53, 0);
      q_53 = ATgetArgument(o_53, 1);
      m_53 :
      if(match_cons(q_53, sym_TCons_2))
        {
          r_53 = ATgetArgument(q_53, 0);
          s_53 = ATgetArgument(q_53, 1);
          n_53 :
          if(match_cons(s_53, sym_TNil_0))
            {
              t = not_null(p_53);
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm v_53 = NULL,w_53 = NULL;
                  v_53 = t;
                  f_53 :
                  if(match_cons(v_53, sym_PP_Table_1))
                    {
                      w_53 = ATgetArgument(v_53, 0);
                      t = not_null(w_53);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = collect_1(t, v_2);
                t = reverse_0(t);
                t = read_pp_tables_0(t);
                t = not_null(r_53);
                t = trm2abox_0(t);
                {
                  ATerm d_11 = t;
                  if(PushChoice()==0)
                    {
                      ATerm y_53 = NULL;
                      t = is_list_0(t);
                      y_53 = t;
                      t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(y_53));
                      PopChoice();
                    }
                  else
                    t = d_11;
                  {
                    ATerm w_2 (ATerm t)
                    {
                      t = not_null(p_53);
                      return(t);
                    }
                    t = split_2(t, w_2, _id);
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
  ATerm e_54 = NULL;
  e_54 = t;
  t = SSL_exit(not_null(e_54));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  l_54 = t;
  i_54 :
  if(match_cons(l_54, sym_TCons_2))
    {
      m_54 = ATgetArgument(l_54, 0);
      n_54 = ATgetArgument(l_54, 1);
      j_54 :
      if(match_cons(n_54, sym_TCons_2))
        {
          o_54 = ATgetArgument(n_54, 0);
          p_54 = ATgetArgument(n_54, 1);
          k_54 :
          if(match_cons(p_54, sym_TNil_0))
            {
              ATerm e_11;
              e_11 = t;
              t = SSL_printnl(not_null(m_54), not_null(o_54));
              t = e_11;
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
ATerm try_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      t = f_57(t);
      PopChoice();
    }
  else
    t = f_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  ATerm g_11 = t;
  if(PushChoice()==0)
    {
      ATerm x_2 (ATerm t)
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm f_55 = NULL;
              f_55 = t;
              t_54 :
              if(!(match_cons(f_55, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, z_2);
            PopChoice();
            _fail(t);
          }
        else
          t = h_11;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm g_55 = NULL;
          g_55 = t;
          u_54 :
          if(!(match_cons(g_55, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, e_3);
        return(t);
      }
      t = TCons_2(t, x_2, y_2);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm h_55 = NULL,i_55 = NULL;
            h_55 = t;
            w_54 :
            if(match_cons(h_55, sym_Runtime_1))
              {
                i_55 = ATgetArgument(h_55, 0);
                if(e_55 != NULL && e_55 != i_55)
                  _fail(i_55);
                else
                  e_55 = i_55;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, k_3);
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm j_55 = NULL;
            j_55 = t;
            z_54 :
            if(!(match_cons(j_55, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, o_3);
          return(t);
        }
        t = TCons_2(t, h_3, j_3);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm k_55 = NULL,l_55 = NULL;
              k_55 = t;
              b_55 :
              if(match_cons(k_55, sym_Program_1))
                {
                  l_55 = ATgetArgument(k_55, 0);
                  if(d_55 != NULL && d_55 != l_55)
                    _fail(l_55);
                  else
                    d_55 = l_55;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, t_3);
            return(t);
          }
          ATerm s_3 (ATerm t)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm m_55 = NULL;
              m_55 = t;
              c_55 :
              if(!(match_cons(m_55, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, u_3);
            return(t);
          }
          t = TCons_2(t, r_3, s_3);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_55), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_55), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = g_11;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm q_55 = NULL;
  q_55 = t;
  p_55 :
  if(!(match_cons(q_55, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  v_55 = t;
  s_55 :
  if(match_cons(v_55, sym_TCons_2))
    {
      w_55 = ATgetArgument(v_55, 0);
      x_55 = ATgetArgument(v_55, 1);
      t_55 :
      if(match_cons(x_55, sym_TCons_2))
        {
          y_55 = ATgetArgument(x_55, 0);
          z_55 = ATgetArgument(x_55, 1);
          u_55 :
          if(match_cons(z_55, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(w_55), not_null(y_55));
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
ATerm TCons_2 (ATerm t, ATerm l_37 (ATerm), ATerm m_37 (ATerm))
{
  ATerm h_56 = NULL,m_56 = NULL,n_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_TCons_2))
    {
      m_56 = ATgetArgument(h_56, 0);
      n_56 = ATgetArgument(h_56, 1);
      {
        ATerm q_56 = NULL;
        t = not_null(m_56);
        {
          ATerm s_56 = NULL;
          t = l_37(t);
          q_56 = t;
          t = not_null(n_56);
          t = m_37(t);
          s_56 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_56), not_null(s_56));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,g_57 = NULL;
  b_57 = t;
  y_56 :
  if(match_cons(b_57, sym_TCons_2))
    {
      c_57 = ATgetArgument(b_57, 0);
      d_57 = ATgetArgument(b_57, 1);
      z_56 :
      if(match_cons(d_57, sym_TCons_2))
        {
          e_57 = ATgetArgument(d_57, 0);
          g_57 = ATgetArgument(d_57, 1);
          a_57 :
          if(match_cons(g_57, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(c_57), not_null(e_57));
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
  ATerm w_57 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm k_11 = t;
      if(PushChoice()==0)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm x_57 = NULL,y_57 = NULL;
            x_57 = t;
            l_57 :
            if(match_cons(x_57, sym_Output_1))
              {
                y_57 = ATgetArgument(x_57, 0);
                if(w_57 != NULL && w_57 != y_57)
                  _fail(y_57);
                else
                  w_57 = y_57;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, x_3);
          PopChoice();
        }
      else
        {
          t = k_11;
          {
            ATerm z_57 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            z_57 = t;
            if(w_57 != NULL && w_57 != z_57)
              _fail(z_57);
            else
              w_57 = z_57;
          }
        }
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm a_58 = NULL;
        a_58 = t;
        n_57 :
        if(!(match_cons(a_58, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, z_3);
      return(t);
    }
    t = TCons_2(t, v_3, w_3);
  }
  t = i_11;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          t = not_null(w_57);
          return(t);
        }
        t = split_2(t, n_4, _id);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        ATerm b_58 = NULL;
        b_58 = t;
        o_57 :
        if(!(match_cons(b_58, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, j_4, k_4);
      return(t);
    }
    t = TCons_2(t, _id, a_4);
    {
      ATerm l_11 = t;
      if(PushChoice()==0)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm c_58 = NULL;
              c_58 = t;
              p_57 :
              if(!(match_cons(c_58, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, q_4);
            return(t);
          }
          ATerm p_4 (ATerm t)
          {
            ATerm r_4 (ATerm t)
            {
              ATerm d_58 = NULL;
              d_58 = t;
              q_57 :
              if(!(match_cons(d_58, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, r_4);
            return(t);
          }
          t = TCons_2(t, o_4, p_4);
          PopChoice();
        }
      else
        {
          t = l_11;
          {
            ATerm w_4 (ATerm t)
            {
              ATerm x_4 (ATerm t)
              {
                ATerm e_58 = NULL;
                e_58 = t;
                r_57 :
                if(!(match_cons(e_58, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, x_4);
              return(t);
            }
            t = TCons_2(t, _id, w_4);
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
ATerm apply_strategy_1 (ATerm t, ATerm h_42 (ATerm))
{
  ATerm n_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  ATerm m_11;
  m_11 = t;
  t = dtime_0(t);
  t = m_11;
  t = h_42(t);
  {
    ATerm n_11;
    n_11 = t;
    {
      ATerm o_58 = NULL;
      t = dtime_0(t);
      o_58 = t;
      if(n_58 != NULL && n_58 != o_58)
        _fail(o_58);
      else
        n_58 = o_58;
    }
    t = n_11;
    p_58 = t;
    k_58 :
    if(match_cons(p_58, sym_TCons_2))
      {
        q_58 = ATgetArgument(p_58, 0);
        r_58 = ATgetArgument(p_58, 1);
        l_58 :
        if(match_cons(r_58, sym_TCons_2))
          {
            s_58 = ATgetArgument(r_58, 0);
            t_58 = ATgetArgument(r_58, 1);
            m_58 :
            if(match_cons(t_58, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_58)), not_null(q_58)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_58), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_58 = NULL;
  z_58 = t;
  t = SSL_ReadFromFile(not_null(z_58));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm))
{
  ATerm f_59 = NULL;
  ATerm h_59 = NULL;
  f_59 = t;
  {
    ATerm j_59 = NULL;
    t = h_44(t);
    h_59 = t;
    t = not_null(f_59);
    t = i_44(t);
    j_59 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_59 = NULL;
  ATerm o_11;
  o_11 = t;
  {
    ATerm p_11 = t;
    if(PushChoice()==0)
      {
        ATerm y_4 (ATerm t)
        {
          ATerm s_59 = NULL,t_59 = NULL;
          s_59 = t;
          p_59 :
          if(match_cons(s_59, sym_Input_1))
            {
              t_59 = ATgetArgument(s_59, 0);
              if(r_59 != NULL && r_59 != t_59)
                _fail(t_59);
              else
                r_59 = t_59;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, y_4);
        PopChoice();
      }
    else
      {
        t = p_11;
        {
          ATerm u_59 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_59 = t;
          if(r_59 != NULL && r_59 != u_59)
            _fail(u_59);
          else
            r_59 = u_59;
        }
      }
  }
  t = o_11;
  {
    ATerm z_4 (ATerm t)
    {
      t = not_null(r_59);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_59 = NULL;
  y_59 = t;
  x_59 :
  if(!(match_cons(y_59, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_33 (ATerm))
{
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym_Undefined_1))
    {
      d_60 = ATgetArgument(c_60, 0);
      {
        ATerm f_60 = NULL;
        t = not_null(d_60);
        t = i_33(t);
        f_60 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_60));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  j_60 :
  if(!(match_cons(k_60, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm l_60 (ATerm t)
  {
    ATerm q_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, a_51, _id);
        PopChoice();
      }
    else
      {
        t = q_11;
        t = Cons_2(t, _id, l_60);
      }
    return(t);
  }
  t = l_60(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_41 (ATerm))
{
  t = fetch_1(t, l_41);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_42 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm w_11 = t;
    if(PushChoice()==0)
      {
        ATerm o_60 = NULL;
        o_60 = t;
        m_60 :
        if(!(match_cons(o_60, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_11;
        {
          ATerm x_11 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = x_11;
              {
                ATerm p_60 = NULL;
                p_60 = t;
                n_60 :
                if(!(match_cons(p_60, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_5);
  t = g_42(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
    y_60 = t;
    r_60 :
    if(match_cons(y_60, sym_TCons_2))
      {
        z_60 = ATgetArgument(y_60, 0);
        a_61 = ATgetArgument(y_60, 1);
        s_60 :
        if(match_cons(a_61, sym_TCons_2))
          {
            b_61 = ATgetArgument(a_61, 0);
            c_61 = ATgetArgument(a_61, 1);
            t_60 :
            if(match_cons(c_61, sym_TCons_2))
              {
                d_61 = ATgetArgument(c_61, 0);
                e_61 = ATgetArgument(c_61, 1);
                u_60 :
                if(match_cons(e_61, sym_TNil_0))
                  {
                    if(v_60 != NULL && v_60 != z_60)
                      _fail(z_60);
                    else
                      v_60 = z_60;
                    if(w_60 != NULL && w_60 != b_61)
                      _fail(b_61);
                    else
                      w_60 = b_61;
                    if(x_60 != NULL && x_60 != d_61)
                      _fail(d_61);
                    else
                      x_60 = d_61;
                    t = SSL_table_put(not_null(v_60), not_null(w_60), not_null(x_60));
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
  t = y_11;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  t = SSL_table_create(not_null(h_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_61 = NULL;
  l_61 = t;
  {
    ATerm z_11;
    z_11 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_61), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = z_11;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_12 = t;
  if(PushChoice()==0)
    {
      ATerm d_5 (ATerm t)
      {
        ATerm i_62 = NULL;
        i_62 = t;
        o_61 :
        if(!(match_string(i_62, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, d_5, e_5);
      PopChoice();
    }
  else
    {
      t = a_12;
      {
        ATerm b_12 = t;
        if(PushChoice()==0)
          {
            ATerm f_5 (ATerm t)
            {
              ATerm j_62 = NULL;
              j_62 = t;
              p_61 :
              if(!(match_string(j_62, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, f_5, i_5);
            PopChoice();
          }
        else
          {
            t = b_12;
            {
              ATerm h_12 = t;
              if(PushChoice()==0)
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_62 = NULL;
                    k_62 = t;
                    q_61 :
                    if(!(match_string(k_62, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm m_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, j_5, m_5);
                  PopChoice();
                }
              else
                {
                  t = h_12;
                  {
                    ATerm i_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm n_5 (ATerm t)
                        {
                          ATerm l_62 = NULL;
                          l_62 = t;
                          r_61 :
                          if(!(match_string(l_62, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_5 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, n_5, o_5);
                        PopChoice();
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm j_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm p_5 (ATerm t)
                              {
                                ATerm m_62 = NULL;
                                m_62 = t;
                                s_61 :
                                if(!(match_string(m_62, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm q_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, p_5, q_5);
                              PopChoice();
                            }
                          else
                            {
                              t = j_12;
                              {
                                ATerm k_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm r_5 (ATerm t)
                                    {
                                      ATerm n_62 = NULL;
                                      n_62 = t;
                                      t_61 :
                                      if(!(match_string(n_62, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm d_6 (ATerm t)
                                    {
                                      ATerm o_62 = NULL;
                                      o_62 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_62));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, r_5, d_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_12;
                                    {
                                      ATerm l_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm f_6 (ATerm t)
                                          {
                                            ATerm q_62 = NULL;
                                            q_62 = t;
                                            v_61 :
                                            if(!(match_string(q_62, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_6 (ATerm t)
                                          {
                                            ATerm r_62 = NULL;
                                            r_62 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_62));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, f_6, g_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_12;
                                          {
                                            ATerm n_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm h_6 (ATerm t)
                                                {
                                                  ATerm t_62 = NULL;
                                                  t_62 = t;
                                                  x_61 :
                                                  if(!(match_string(t_62, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm j_6 (ATerm t)
                                                {
                                                  ATerm u_62 = NULL;
                                                  u_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_62));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, h_6, j_6);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = n_12;
                                                {
                                                  ATerm r_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm m_6 (ATerm t)
                                                      {
                                                        ATerm w_62 = NULL;
                                                        w_62 = t;
                                                        z_61 :
                                                        if(!(match_string(w_62, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_6 (ATerm t)
                                                      {
                                                        ATerm x_62 = NULL;
                                                        x_62 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_62));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, m_6, o_6);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = r_12;
                                                      {
                                                        ATerm s_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_6 (ATerm t)
                                                            {
                                                              ATerm z_62 = NULL;
                                                              z_62 = t;
                                                              b_62 :
                                                              if(!(match_string(z_62, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_6 (ATerm t)
                                                            {
                                                              ATerm a_63 = NULL;
                                                              a_63 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_63));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_6, q_6);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = s_12;
                                                            {
                                                              ATerm t_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_6 (ATerm t)
                                                                  {
                                                                    ATerm c_63 = NULL;
                                                                    c_63 = t;
                                                                    d_62 :
                                                                    if(!(match_string(c_63, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_6 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_6, s_6);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = t_12;
                                                                  {
                                                                    ATerm d_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_6 (ATerm t)
                                                                        {
                                                                          ATerm d_63 = NULL;
                                                                          d_63 = t;
                                                                          e_62 :
                                                                          if(!(match_string(d_63, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm x_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_6, x_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_13;
                                                                        {
                                                                          ATerm e_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm z_6 (ATerm t)
                                                                              {
                                                                                ATerm e_63 = NULL;
                                                                                e_63 = t;
                                                                                f_62 :
                                                                                if(!(match_string(e_63, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm a_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, z_6, a_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_13;
                                                                              {
                                                                                ATerm h_13 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm b_7 (ATerm t)
                                                                                    {
                                                                                      ATerm f_63 = NULL;
                                                                                      f_63 = t;
                                                                                      g_62 :
                                                                                      if(!(match_string(f_63, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm c_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, b_7, c_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_13;
                                                                                    {
                                                                                      ATerm e_7 (ATerm t)
                                                                                      {
                                                                                        ATerm g_63 = NULL;
                                                                                        g_63 = t;
                                                                                        h_62 :
                                                                                        if(!(match_string(g_63, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm f_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, e_7, f_7);
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
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym_Cons_2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_63)), not_null(q_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_37 (ATerm), ATerm q_37 (ATerm))
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
  y_63 = t;
  x_63 :
  if(match_cons(y_63, sym_Cons_2))
    {
      z_63 = ATgetArgument(y_63, 0);
      a_64 = ATgetArgument(y_63, 1);
      {
        ATerm d_64 = NULL;
        t = not_null(z_63);
        {
          ATerm f_64 = NULL;
          t = p_37(t);
          d_64 = t;
          t = not_null(a_64);
          t = q_37(t);
          f_64 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_64), not_null(f_64));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm l_64 = NULL;
  l_64 = t;
  k_64 :
  if(!(match_cons(l_64, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_41 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm o_64 = NULL;
    o_64 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_64));
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm i_13 = t;
    if(PushChoice()==0)
      {
        ATerm j_13 = t;
        if(PushChoice()==0)
          {
            ATerm q_64 = NULL;
            q_64 = t;
            n_64 :
            if(!(match_cons(q_64, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = j_13;
            t = c_41(t);
            t = Cons_2(t, _id, h_7);
          }
        PopChoice();
      }
    else
      {
        t = i_13;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, g_7, h_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_41 (ATerm), ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm k_13 = t;
    if(PushChoice()==0)
      {
        t = w_41(t);
        PopChoice();
      }
    else
      {
        t = k_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_7);
  t = store_options_0(t);
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, x_41);
        PopChoice();
      }
    else
      {
        t = l_13;
        {
          ATerm n_13 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, v_41);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_13;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm Ast2abox_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        ATerm n_7 (ATerm t)
        {
          ATerm w_64 = NULL;
          w_64 = t;
          t_64 :
          if(!(match_string(w_64, "-v")))
            _fail(t);
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym_Verbose_0);
          return(t);
        }
        t = Option_2(t, n_7, o_7);
        PopChoice();
      }
    else
      {
        t = o_13;
        {
          ATerm x_7 (ATerm t)
          {
            ATerm x_64 = NULL;
            x_64 = t;
            u_64 :
            if(!(match_string(x_64, "-p")))
              _fail(t);
            return(t);
          }
          ATerm y_7 (ATerm t)
          {
            ATerm y_64 = NULL;
            y_64 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(y_64));
            return(t);
          }
          t = ArgOption_2(t, x_7, y_7);
        }
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm z_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("usage': use default-usage", 0, ATtrue));
      return(t);
    }
    t = obsolete_1(t, z_7);
    return(t);
  }
  t = iowrap_3(t, ast2abox_0, j_7, l_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast2abox_0(t);
  return(t);
}

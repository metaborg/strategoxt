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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_BOXENV_2;
Symbol sym_HBOX_2;
Symbol sym_VBOX_3;
Symbol sym_HVBOX_4;
Symbol sym_ABOX_2;
Symbol sym_ALTBOX_2;
Symbol sym_CBOX_1;
Symbol sym_LBOX_2;
Symbol sym_LBLBOX_2;
Symbol sym_REFBOX_2;
Symbol sym_C_0;
Symbol sym_R_0;
Symbol sym_L_0;
Symbol sym_EOR_0;
Symbol sym_CSEP_0;
Symbol sym_BOXFONT_2;
Symbol sym_BOXCOLOR_1;
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
Symbol sym_LatexTable_1;
Symbol sym_Width_1;
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
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
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
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_BOXENV_2 = ATmakeSymbol("BOXENV", 2, ATfalse);
    ATprotectSymbol(sym_BOXENV_2);
  }
  {
    sym_HBOX_2 = ATmakeSymbol("HBOX", 2, ATfalse);
    ATprotectSymbol(sym_HBOX_2);
  }
  {
    sym_VBOX_3 = ATmakeSymbol("VBOX", 3, ATfalse);
    ATprotectSymbol(sym_VBOX_3);
  }
  {
    sym_HVBOX_4 = ATmakeSymbol("HVBOX", 4, ATfalse);
    ATprotectSymbol(sym_HVBOX_4);
  }
  {
    sym_ABOX_2 = ATmakeSymbol("ABOX", 2, ATfalse);
    ATprotectSymbol(sym_ABOX_2);
  }
  {
    sym_ALTBOX_2 = ATmakeSymbol("ALTBOX", 2, ATfalse);
    ATprotectSymbol(sym_ALTBOX_2);
  }
  {
    sym_CBOX_1 = ATmakeSymbol("CBOX", 1, ATfalse);
    ATprotectSymbol(sym_CBOX_1);
  }
  {
    sym_LBOX_2 = ATmakeSymbol("LBOX", 2, ATfalse);
    ATprotectSymbol(sym_LBOX_2);
  }
  {
    sym_LBLBOX_2 = ATmakeSymbol("LBLBOX", 2, ATfalse);
    ATprotectSymbol(sym_LBLBOX_2);
  }
  {
    sym_REFBOX_2 = ATmakeSymbol("REFBOX", 2, ATfalse);
    ATprotectSymbol(sym_REFBOX_2);
  }
  {
    sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
    ATprotectSymbol(sym_C_0);
  }
  {
    sym_R_0 = ATmakeSymbol("R", 0, ATfalse);
    ATprotectSymbol(sym_R_0);
  }
  {
    sym_L_0 = ATmakeSymbol("L", 0, ATfalse);
    ATprotectSymbol(sym_L_0);
  }
  {
    sym_EOR_0 = ATmakeSymbol("EOR", 0, ATfalse);
    ATprotectSymbol(sym_EOR_0);
  }
  {
    sym_CSEP_0 = ATmakeSymbol("CSEP", 0, ATfalse);
    ATprotectSymbol(sym_CSEP_0);
  }
  {
    sym_BOXFONT_2 = ATmakeSymbol("BOXFONT", 2, ATfalse);
    ATprotectSymbol(sym_BOXFONT_2);
  }
  {
    sym_BOXCOLOR_1 = ATmakeSymbol("BOXCOLOR", 1, ATfalse);
    ATprotectSymbol(sym_BOXCOLOR_1);
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
    sym_LatexTable_1 = ATmakeSymbol("LatexTable", 1, ATfalse);
    ATprotectSymbol(sym_LatexTable_1);
  }
  {
    sym_Width_1 = ATmakeSymbol("Width", 1, ATfalse);
    ATprotectSymbol(sym_Width_1);
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
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_61 (ATerm));
ATerm topdown_1 (ATerm, ATerm s_61 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm CSEP_0 (ATerm);
ATerm EOR_0 (ATerm);
ATerm L_0 (ATerm);
ATerm R_0 (ATerm);
ATerm C_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Latex2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm u_61 (ATerm));
ATerm latex2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm i_63 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm h_57 (ATerm));
ATerm latex_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm y_65 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm x_56 (ATerm));
ATerm LatexComment_0 (ATerm);
ATerm make_latex_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm CL_0 (ATerm);
ATerm FFID_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm SZ_0 (ATerm);
ATerm SH_0 (ATerm);
ATerm SE_0 (ATerm);
ATerm FM_0 (ATerm);
ATerm toh_0 (ATerm);
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm s_57 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_57 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm d_42 (ATerm), ATerm e_42 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm C_2 (ATerm, ATerm j_43 (ATerm), ATerm k_43 (ATerm));
ATerm table_row_0 (ATerm);
ATerm MkRows_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm d_57 (ATerm));
ATerm table_def_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm for_3 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm _2 (ATerm, ATerm i_35 (ATerm), ATerm j_35 (ATerm));
ATerm copy_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm R_2 (ATerm, ATerm s_42 (ATerm), ATerm t_42 (ATerm));
ATerm filter_1 (ATerm, ATerm a_52 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox_2_latex_0 (ATerm);
ATerm abox2latex_1 (ATerm, ATerm b_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_48 (ATerm));
ATerm Snd_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm StoreEntries_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm load_tables_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm n_56 (ATerm));
ATerm HdMember_1 (ATerm, ATerm y_53 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm), ATerm y_52 (ATerm));
ATerm crush_3 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm collect_om_1 (ATerm, ATerm u_54 (ATerm));
ATerm collect_1 (ATerm, ATerm w_54 (ATerm));
ATerm debug_1 (ATerm, ATerm e_50 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_50 (ATerm));
ATerm open_file_0 (ATerm);
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_49 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_48 (ATerm), ATerm j_48 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_56 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_47 (ATerm));
ATerm map_1 (ATerm, ATerm f_56 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_47 (ATerm));
ATerm Program_1 (ATerm, ATerm r_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_36 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_47 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_44 (ATerm), ATerm e_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_47 (ATerm));
ATerm Abox2latex_0 (ATerm);
ATerm main_0 (ATerm);
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
  ATerm o_1 = NULL,p_1 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm b_0 (ATerm t)
    {
      ATerm g_8 = t;
      if((PushChoice() == 0))
        {
          ATerm c_0 (ATerm t)
          {
            ATerm q_1 = NULL;
            q_1 = t;
            j_1 :
            if(!(match_cons(q_1, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_0);
          PopChoice();
          _fail(t);
        }
      else
        t = g_8;
      return(t);
    }
    t = _2(t, b_0, _id);
    {
      ATerm k_0 (ATerm t)
      {
        ATerm l_0 (ATerm t)
        {
          ATerm r_1 = NULL,s_1 = NULL;
          r_1 = t;
          l_1 :
          if(match_cons(r_1, sym_Runtime_1))
            {
              s_1 = ATgetArgument(r_1, 0);
              if(((p_1 != NULL) && (p_1 != s_1)))
                _fail(s_1);
              else
                p_1 = s_1;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_0);
        return(t);
      }
      t = _2(t, k_0, _id);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm n_0 (ATerm t)
          {
            ATerm t_1 = NULL,u_1 = NULL;
            t_1 = t;
            n_1 :
            if(match_cons(t_1, sym_Program_1))
              {
                u_1 = ATgetArgument(t_1, 0);
                if(((o_1 != NULL) && (o_1 != u_1)))
                  _fail(u_1);
                else
                  o_1 = u_1;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_0);
          return(t);
        }
        t = _2(t, m_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(p_1)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(o_1)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  y_1 :
  if(match_cons(z_1, sym__2))
    {
      a_2 = ATgetArgument(z_1, 0);
      b_2 = ATgetArgument(z_1, 1);
      {
        ATerm z_9;
        z_9 = t;
        t = SSL_print(not_null(a_2), not_null(b_2));
        t = z_9;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  ATerm h_2 = NULL,j_2 = NULL;
  ATerm a_10;
  a_10 = t;
  {
    ATerm i_2 = NULL;
    t = d_65(t);
    {
      i_2 = t;
      if(((h_2 != NULL) && (h_2 != i_2)))
        _fail(i_2);
      else
        h_2 = i_2;
    }
  }
  t = a_10;
  {
    ATerm k_2 = NULL;
    t = e_65(t);
    {
      k_2 = t;
      if(((j_2 != NULL) && (j_2 != k_2)))
        _fail(k_2);
      else
        j_2 = k_2;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_2), not_null(j_2));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  t = SSL_is_string(not_null(o_2));
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm b_10 = t;
  if((PushChoice() == 0))
    {
      t = d_61(t);
      PopChoice();
    }
  else
    {
      t = b_10;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    t = s_61(t);
    t = _all(t, r_2);
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm u_2 = NULL;
  ATerm w_2 = NULL;
  u_2 = t;
  {
    ATerm x_2 = NULL;
    t = not_null(u_2);
    {
      ATerm o_0 (ATerm t)
      {
        t = try_1(t, Abox_2_latex_0);
        return(t);
      }
      t = topdown_1(t, o_0);
      {
        x_2 = t;
        if(((w_2 != NULL) && (w_2 != x_2)))
          _fail(x_2);
        else
          w_2 = x_2;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATempty, not_null(w_2));
      t = latex2text_0(t);
    }
  }
  return(t);
}
ATerm CSEP_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  a_3 :
  if(!(match_cons(b_3, sym_CSEP_0)))
    _fail(t);
  return(t);
}
ATerm EOR_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  c_3 :
  if(!(match_cons(d_3, sym_EOR_0)))
    _fail(t);
  return(t);
}
ATerm L_0 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  e_3 :
  if(!(match_cons(f_3, sym_L_0)))
    _fail(t);
  return(t);
}
ATerm R_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  g_3 :
  if(!(match_cons(h_3, sym_R_0)))
    _fail(t);
  return(t);
}
ATerm C_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  i_3 :
  if(!(match_cons(j_3, sym_C_0)))
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  t = SSL_int_to_string(not_null(l_3));
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  t = SSL_is_int(not_null(p_3));
  return(t);
}
ATerm Latex2text_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  ATerm c_10 = t;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
      ATerm n_6 (ATerm t)
      {
        ATerm d_6 = NULL;
        if(((s_5 != NULL) && (s_5 != a_6)))
          _fail(a_6);
        else
          s_5 = a_6;
        {
          if(((v_5 != NULL) && (v_5 != c_6)))
            _fail(c_6);
          else
            v_5 = c_6;
          {
            t = not_null(s_5);
            {
              t = is_int_0(t);
              {
                ATerm e_6 = NULL;
                t = not_null(s_5);
                {
                  t = int_to_string_0(t);
                  {
                    e_6 = t;
                    if(((d_6 != NULL) && (d_6 != e_6)))
                      _fail(e_6);
                    else
                      d_6 = e_6;
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}%", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(d_6)), (ATerm) ATmakeAppl(ATmakeSymbol("\\\ncopies{", 0, ATtrue)));
              }
            }
          }
        }
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{=}%\n", 0, ATtrue)));
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        if(((s_5 != NULL) && (s_5 != a_6)))
          _fail(a_6);
        else
          s_5 = a_6;
        {
          if(((v_5 != NULL) && (v_5 != c_6)))
            _fail(c_6);
          else
            v_5 = c_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{LBOX}%\n", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(s_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{LBOX}{", 0, ATtrue)));
        }
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        if(((t_5 != NULL) && (t_5 != a_6)))
          _fail(a_6);
        else
          t_5 = a_6;
        {
          if(((v_5 != NULL) && (v_5 != c_6)))
            _fail(c_6);
          else
            v_5 = c_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(t_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\boxlabel{", 0, ATtrue)));
        }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        if(((t_5 != NULL) && (t_5 != a_6)))
          _fail(a_6);
        else
          t_5 = a_6;
        {
          if(((v_5 != NULL) && (v_5 != c_6)))
            _fail(c_6);
          else
            v_5 = c_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(t_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\boxref{", 0, ATtrue)));
        }
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\KWf{", 0, ATtrue)));
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\VARf{", 0, ATtrue)));
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\NUMf{", 0, ATtrue)));
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\MATHf{", 0, ATtrue)));
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textsf{", 0, ATtrue)));
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textrm{", 0, ATtrue)));
        return(t);
      }
      ATerm y_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\texttt{", 0, ATtrue)));
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textmd{", 0, ATtrue)));
        return(t);
      }
      ATerm a_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textbf{", 0, ATtrue)));
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textup{", 0, ATtrue)));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textit{", 0, ATtrue)));
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textsc{", 0, ATtrue)));
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textsl{", 0, ATtrue)));
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\emph{", 0, ATtrue)));
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\tiny{", 0, ATtrue)));
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\scriptsize{", 0, ATtrue)));
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\footnotesize{", 0, ATtrue)));
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\small{", 0, ATtrue)));
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\normalsize{", 0, ATtrue)));
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\large{", 0, ATtrue)));
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\Large{", 0, ATtrue)));
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\LARGE{", 0, ATtrue)));
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\huge{", 0, ATtrue)));
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        if(((v_5 != NULL) && (v_5 != c_6)))
          _fail(c_6);
        else
          v_5 = c_6;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\Huge{", 0, ATtrue)));
        return(t);
      }
      ATerm q_7 (ATerm t)
      {
        if(((u_5 != NULL) && (u_5 != b_6)))
          _fail(b_6);
        else
          u_5 = b_6;
        {
          if(((v_5 != NULL) && (v_5 != c_6)))
            _fail(c_6);
          else
            v_5 = c_6;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(u_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\textcolor{", 0, ATtrue)));
        }
        return(t);
      }
      z_5 = t;
      f_5 :
      if(match_cons(z_5, sym_BOXENV_2))
        {
          a_6 = ATgetArgument(z_5, 0);
          c_6 = ATgetArgument(z_5, 1);
          g_5 :
          if(((ATermList) a_6 == ATempty))
            {
              {
                if(((p_5 != NULL) && (p_5 != c_6)))
                  _fail(c_6);
                else
                  p_5 = c_6;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}%\n", 0, ATtrue)));
              }
            }
          else
            {
              if(((ATgetType(a_6) == AT_LIST) && ((ATermList) a_6 != ATempty)))
                {
                  b_6 = ATgetFirst((ATermList) a_6);
                  w_5 = (ATerm) ATgetNext((ATermList) a_6);
                  h_5 :
                  if(((ATermList) w_5 == ATempty))
                    {
                      {
                        if(((k_5 != NULL) && (k_5 != b_6)))
                          _fail(b_6);
                        else
                          k_5 = b_6;
                        {
                          if(((p_5 != NULL) && (p_5 != c_6)))
                            _fail(c_6);
                          else
                            p_5 = c_6;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{boxenv}\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(k_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{boxenv}{", 0, ATtrue)));
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
      else
        {
          if(match_cons(z_5, sym_HBOX_2))
            {
              a_6 = ATgetArgument(z_5, 0);
              c_6 = ATgetArgument(z_5, 1);
              {
                if(((l_5 != NULL) && (l_5 != a_6)))
                  _fail(a_6);
                else
                  l_5 = a_6;
                {
                  if(((p_5 != NULL) && (p_5 != c_6)))
                    _fail(c_6);
                  else
                    p_5 = c_6;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HBOX}%\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(l_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HBOX}{", 0, ATtrue)));
                }
              }
            }
          else
            {
              if(match_cons(z_5, sym_VBOX_3))
                {
                  a_6 = ATgetArgument(z_5, 0);
                  c_6 = ATgetArgument(z_5, 1);
                  x_5 = ATgetArgument(z_5, 2);
                  {
                    if(((m_5 != NULL) && (m_5 != a_6)))
                      _fail(a_6);
                    else
                      m_5 = a_6;
                    {
                      if(((n_5 != NULL) && (n_5 != c_6)))
                        _fail(c_6);
                      else
                        n_5 = c_6;
                      {
                        if(((p_5 != NULL) && (p_5 != x_5)))
                          _fail(x_5);
                        else
                          p_5 = x_5;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{VBOX}%\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(n_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(m_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{VBOX}{", 0, ATtrue)));
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(z_5, sym_HVBOX_4))
                    {
                      a_6 = ATgetArgument(z_5, 0);
                      c_6 = ATgetArgument(z_5, 1);
                      x_5 = ATgetArgument(z_5, 2);
                      y_5 = ATgetArgument(z_5, 3);
                      {
                        if(((l_5 != NULL) && (l_5 != a_6)))
                          _fail(a_6);
                        else
                          l_5 = a_6;
                        {
                          if(((m_5 != NULL) && (m_5 != c_6)))
                            _fail(c_6);
                          else
                            m_5 = c_6;
                          {
                            if(((n_5 != NULL) && (n_5 != x_5)))
                              _fail(x_5);
                            else
                              n_5 = x_5;
                            {
                              if(((p_5 != NULL) && (p_5 != y_5)))
                                _fail(y_5);
                              else
                                p_5 = y_5;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{HVBOX}%\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(n_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(m_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}{", 0, ATtrue))), not_null(l_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{HVBOX}{", 0, ATtrue)));
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_5, sym_ABOX_2))
                        {
                          a_6 = ATgetArgument(z_5, 0);
                          c_6 = ATgetArgument(z_5, 1);
                          {
                            if(((o_5 != NULL) && (o_5 != a_6)))
                              _fail(a_6);
                            else
                              o_5 = a_6;
                            {
                              if(((p_5 != NULL) && (p_5 != c_6)))
                                _fail(c_6);
                              else
                                p_5 = c_6;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\\crcr%\n\\end{ABOX}%\n", 0, ATtrue))), not_null(p_5)), (ATerm) ATmakeAppl(ATmakeSymbol("}%\n", 0, ATtrue))), not_null(o_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ABOX}{", 0, ATtrue)));
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(z_5, sym_ALTBOX_2))
                            {
                              a_6 = ATgetArgument(z_5, 0);
                              c_6 = ATgetArgument(z_5, 1);
                              {
                                if(((q_5 != NULL) && (q_5 != a_6)))
                                  _fail(a_6);
                                else
                                  q_5 = a_6;
                                {
                                  if(((r_5 != NULL) && (r_5 != c_6)))
                                    _fail(c_6);
                                  else
                                    r_5 = c_6;
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n}%\n\\end{ALTBOX}%\n", 0, ATtrue))), not_null(r_5)), (ATerm) ATmakeAppl(ATmakeSymbol("%\n}", 0, ATtrue))), not_null(q_5)), (ATerm) ATmakeAppl(ATmakeSymbol("\\begin{ALTBOX}{%\n", 0, ATtrue)));
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(z_5, sym_CBOX_1))
                                {
                                  a_6 = ATgetArgument(z_5, 0);
                                  {
                                    if(((v_5 != NULL) && (v_5 != a_6)))
                                      _fail(a_6);
                                    else
                                      v_5 = a_6;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\end{latextext}%\n", 0, ATtrue))), not_null(v_5)), (ATerm) ATmakeAppl(ATmakeSymbol("%\n\\begin{latextext}%\n", 0, ATtrue)));
                                  }
                                }
                              else
                                {
                                  if(match_cons(z_5, sym_LBOX_2))
                                    {
                                      a_6 = ATgetArgument(z_5, 0);
                                      c_6 = ATgetArgument(z_5, 1);
                                      i_5 :
                                      if(match_string(a_6, "="))
                                        {
                                          ATerm d_10 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_6(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = d_10;
                                              {
                                                ATerm e_10 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_6(t);
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = e_10;
                                                    t = p_6(t);
                                                  }
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm f_10 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_6(t);
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = f_10;
                                              t = p_6(t);
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(z_5, sym_LBLBOX_2))
                                        {
                                          a_6 = ATgetArgument(z_5, 0);
                                          c_6 = ATgetArgument(z_5, 1);
                                          t = q_6(t);
                                        }
                                      else
                                        {
                                          if(match_cons(z_5, sym_REFBOX_2))
                                            {
                                              a_6 = ATgetArgument(z_5, 0);
                                              c_6 = ATgetArgument(z_5, 1);
                                              t = r_6(t);
                                            }
                                          else
                                            {
                                              if(match_cons(z_5, sym_BOXFONT_2))
                                                {
                                                  a_6 = ATgetArgument(z_5, 0);
                                                  c_6 = ATgetArgument(z_5, 1);
                                                  j_5 :
                                                  if(match_cons(a_6, sym_KW_0))
                                                    t = s_6(t);
                                                  else
                                                    {
                                                      if(match_cons(a_6, sym_VAR_0))
                                                        t = t_6(t);
                                                      else
                                                        {
                                                          if(match_cons(a_6, sym_NUM_0))
                                                            t = u_6(t);
                                                          else
                                                            {
                                                              if(match_cons(a_6, sym_MATH_0))
                                                                t = v_6(t);
                                                              else
                                                                {
                                                                  if(match_string(a_6, "sf"))
                                                                    t = w_6(t);
                                                                  else
                                                                    {
                                                                      if(match_string(a_6, "rm"))
                                                                        t = x_6(t);
                                                                      else
                                                                        {
                                                                          if(match_string(a_6, "tt"))
                                                                            t = y_6(t);
                                                                          else
                                                                            {
                                                                              if(match_string(a_6, "md"))
                                                                                t = z_6(t);
                                                                              else
                                                                                {
                                                                                  if(match_string(a_6, "bf"))
                                                                                    t = a_7(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_string(a_6, "up"))
                                                                                        t = b_7(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_string(a_6, "it"))
                                                                                            t = c_7(t);
                                                                                          else
                                                                                            {
                                                                                              if(match_string(a_6, "sc"))
                                                                                                t = d_7(t);
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(a_6, "sl"))
                                                                                                    t = e_7(t);
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(a_6, "em"))
                                                                                                        t = f_7(t);
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(a_6, "tiny"))
                                                                                                            t = g_7(t);
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(a_6, "scriptsize"))
                                                                                                                t = h_7(t);
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(a_6, "footnotesize"))
                                                                                                                    t = i_7(t);
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(a_6, "small"))
                                                                                                                        t = j_7(t);
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(a_6, "normalsize"))
                                                                                                                            t = k_7(t);
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(a_6, "large"))
                                                                                                                                t = l_7(t);
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(a_6, "Large"))
                                                                                                                                    t = m_7(t);
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(a_6, "LARGE"))
                                                                                                                                        t = n_7(t);
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(a_6, "huge"))
                                                                                                                                            t = o_7(t);
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(a_6, "Huge"))
                                                                                                                                                t = p_7(t);
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(a_6, sym_BOXCOLOR_1))
                                                                                                                                                    {
                                                                                                                                                      b_6 = ATgetArgument(a_6, 0);
                                                                                                                                                      t = q_7(t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
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
                                              else
                                                _fail(t);
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
      PopChoice();
    }
  else
    {
      t = c_10;
      {
        ATerm g_10 = t;
        if((PushChoice() == 0))
          {
            t = C_0(t);
            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#\\hfill", 0, ATtrue));
            PopChoice();
          }
        else
          {
            t = g_10;
            {
              ATerm h_10 = t;
              if((PushChoice() == 0))
                {
                  t = R_0(t);
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("\\hfill#", 0, ATtrue));
                  PopChoice();
                }
              else
                {
                  t = h_10;
                  {
                    ATerm i_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = L_0(t);
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("#\\hfill", 0, ATtrue));
                        PopChoice();
                      }
                    else
                      {
                        t = i_10;
                        {
                          ATerm j_10 = t;
                          if((PushChoice() == 0))
                            {
                              t = EOR_0(t);
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("\\cr", 0, ATtrue));
                              PopChoice();
                            }
                          else
                            {
                              t = j_10;
                              {
                                t = CSEP_0(t);
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
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
ATerm bottomup_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    t = _all(t, s_7);
    t = u_61(t);
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm latex2text_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = try_1(t, Latex2text_0);
    return(t);
  }
  t = bottomup_1(t, p_0);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(((ATermList) u_7 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_7) == AT_LIST) && ((ATermList) u_7 != ATempty)))
        {
          v_7 = ATgetFirst((ATermList) u_7);
          w_7 = (ATerm) ATgetNext((ATermList) u_7);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  ATerm k_10 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = k_10;
      {
        ATerm l_10 = t;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
            ATerm i_8 (ATerm t)
            {
              if(((b_8 != NULL) && (b_8 != e_8)))
                _fail(e_8);
              else
                b_8 = e_8;
              {
                if(((c_8 != NULL) && (c_8 != f_8)))
                  _fail(f_8);
                else
                  c_8 = f_8;
                {
                  t = not_null(b_8);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(c_8));
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
            d_8 = t;
            z_7 :
            if(((ATgetType(d_8) == AT_LIST) && ((ATermList) d_8 != ATempty)))
              {
                e_8 = ATgetFirst((ATermList) d_8);
                f_8 = (ATerm) ATgetNext((ATermList) d_8);
                a_8 :
                if(((ATermList) e_8 == ATempty))
                  {
                    {
                      ATerm m_10 = t;
                      if((PushChoice() == 0))
                        {
                          if(((c_8 != NULL) && (c_8 != f_8)))
                            _fail(f_8);
                          else
                            c_8 = f_8;
                          {
                            ATerm q_0 (ATerm t)
                            {
                              t = not_null(c_8);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, q_0);
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = m_10;
                          t = i_8(t);
                        }
                    }
                  }
                else
                  t = i_8(t);
              }
            else
              _fail(t);
            PopChoice();
          }
        else
          {
            t = l_10;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm n_10 = t;
    if((PushChoice() == 0))
      {
        t = i_63(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = _one(t, j_8);
      }
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    k_8 :
    if(!(match_int(r_8, 34)))
      _fail(t);
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    ATerm s_8 = NULL;
    s_8 = t;
    if(((q_8 != NULL) && (q_8 != s_8)))
      _fail(s_8);
    else
      q_8 = s_8;
    return(t);
  }
  t = Cons_2(t, r_0, s_0);
  {
    ATerm y_8 = NULL;
    t = not_null(q_8);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
        u_8 = t;
        n_8 :
        if(((ATgetType(u_8) == AT_LIST) && ((ATermList) u_8 != ATempty)))
          {
            v_8 = ATgetFirst((ATermList) u_8);
            w_8 = (ATerm) ATgetNext((ATermList) u_8);
            o_8 :
            if(match_int(v_8, 34))
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_8)), (ATerm) ATmakeInt(39)), (ATerm) ATmakeInt(39));
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = oncetd_1(t, t_0);
      {
        y_8 = t;
        if(((t_8 != NULL) && (t_8 != y_8)))
          _fail(y_8);
        else
          t_8 = y_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_8)), (ATerm) ATmakeInt(96)), (ATerm) ATmakeInt(96));
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm c_9 (ATerm t)
  {
    t = h_57(t);
    {
      ATerm s_10 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = s_10;
          t = Cons_2(t, _id, c_9);
        }
    }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm latex_string_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm t_10 = t;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL;
      v_9 = t;
      {
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), not_null(u_9));
          t = table_get_0(t);
        }
      }
      PopChoice();
    }
  else
    {
      t = t_10;
      {
        t = explode_string_0(t);
        {
          ATerm u_0 (ATerm t)
          {
            t = try_1(t, replace_quotes_0);
            return(t);
          }
          t = listtd_1(t, u_0);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                ATerm w_9 = NULL;
                w_9 = t;
                t_9 :
                if(match_int(w_9, 32))
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\boxspace{}", 0, ATtrue));
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(w_9, 35))
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\#", 0, ATtrue));
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(w_9, 36))
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\$", 0, ATtrue));
                            t = explode_string_0(t);
                          }
                        else
                          {
                            if(match_int(w_9, 37))
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\%", 0, ATtrue));
                                t = explode_string_0(t);
                              }
                            else
                              {
                                if(match_int(w_9, 38))
                                  {
                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\&", 0, ATtrue));
                                    t = explode_string_0(t);
                                  }
                                else
                                  {
                                    if(match_int(w_9, 45))
                                      {
                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\mbox{-}", 0, ATtrue));
                                        t = explode_string_0(t);
                                      }
                                    else
                                      {
                                        if(match_int(w_9, 60))
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{<}", 0, ATtrue));
                                            t = explode_string_0(t);
                                          }
                                        else
                                          {
                                            if(match_int(w_9, 62))
                                              {
                                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{>}", 0, ATtrue));
                                                t = explode_string_0(t);
                                              }
                                            else
                                              {
                                                if(match_int(w_9, 92))
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\backslash}", 0, ATtrue));
                                                    t = explode_string_0(t);
                                                  }
                                                else
                                                  {
                                                    if(match_int(w_9, 94))
                                                      {
                                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\^{}", 0, ATtrue));
                                                        t = explode_string_0(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_int(w_9, 95))
                                                          {
                                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\_", 0, ATtrue));
                                                            t = explode_string_0(t);
                                                          }
                                                        else
                                                          {
                                                            if(match_int(w_9, 123))
                                                              {
                                                                t = (ATerm) ATmakeAppl(ATmakeSymbol("\\{", 0, ATtrue));
                                                                t = explode_string_0(t);
                                                              }
                                                            else
                                                              {
                                                                if(match_int(w_9, 124))
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vert}", 0, ATtrue));
                                                                    t = explode_string_0(t);
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_int(w_9, 125))
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\}", 0, ATtrue));
                                                                        t = explode_string_0(t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_int(w_9, 126))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("\\~{}", 0, ATtrue));
                                                                            t = explode_string_0(t);
                                                                          }
                                                                        else
                                                                          _fail(t);
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
              t = try_1(t, w_0);
              return(t);
            }
            t = map_1(t, v_0);
            {
              t = flat_list_0(t);
              t = implode_string_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(((ATgetType(p_10) == AT_LIST) && ((ATermList) p_10 != ATempty)))
    {
      q_10 = ATgetFirst((ATermList) p_10);
      r_10 = (ATerm) ATgetNext((ATermList) p_10);
      t = not_null(r_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm v_10 (ATerm t)
  {
    ATerm u_10 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_65, _id);
        {
          t = Tl_0(t);
          t = v_10(t);
        }
        PopChoice();
      }
    else
      {
        t = u_10;
        {
        }
      }
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    ATerm a_11 = t;
    if((PushChoice() == 0))
      {
        t = x_56(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = Cons_2(t, _id, w_10);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm LatexComment_0 (ATerm t)
{
  ATerm c_11 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm b_11 = NULL;
    b_11 = t;
    x_10 :
    if(!(match_int(b_11, 9)))
      {
        if(!(match_int(b_11, 32)))
          _fail(t);
      }
    return(t);
  }
  t = remove_trailing_1(t, x_0);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm d_11 = NULL;
          d_11 = t;
          y_10 :
          if(!(match_int(d_11, 37)))
            _fail(t);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_11 = NULL;
            e_11 = t;
            z_10 :
            if(!(match_int(e_11, 37)))
              _fail(t);
            return(t);
          }
          ATerm d_1 (ATerm t)
          {
            ATerm f_11 = NULL;
            f_11 = t;
            if(((c_11 != NULL) && (c_11 != f_11)))
              _fail(f_11);
            else
              c_11 = f_11;
            return(t);
          }
          t = Cons_2(t, c_1, d_1);
          return(t);
        }
        t = Cons_2(t, a_1, b_1);
        t = not_null(c_11);
        return(t);
      }
      t = at_suffix_1(t, z_0);
      return(t);
    }
    t = try_1(t, y_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm make_latex_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm e_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, e_1);
      {
        ATerm b_13 (ATerm t)
        {
          ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
          ATerm e_13 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(v_11)));
            t = b_13(t);
            return(t);
          }
          t_11 = t;
          n_11 :
          if(match_cons(t_11, sym__2))
            {
              u_11 = ATgetArgument(t_11, 0);
              x_11 = ATgetArgument(t_11, 1);
              o_11 :
              if(((ATermList) u_11 == ATempty))
                {
                  {
                    ATerm b_12 = NULL;
                    ATerm c_12 = NULL;
                    t = not_null(x_11);
                    {
                      t = LatexComment_0(t);
                      {
                        c_12 = t;
                        if(((b_12 != NULL) && (b_12 != c_12)))
                          _fail(c_12);
                        else
                          b_12 = c_12;
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(b_12));
                  }
                }
              else
                {
                  if(((ATgetType(u_11) == AT_LIST) && ((ATermList) u_11 != ATempty)))
                    {
                      v_11 = ATgetFirst((ATermList) u_11);
                      w_11 = (ATerm) ATgetNext((ATermList) u_11);
                      p_11 :
                      if(match_int(v_11, 10))
                        {
                          ATerm g_11 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm n_12 = NULL,p_12 = NULL;
                              ATerm h_11;
                              h_11 = t;
                              {
                                ATerm o_12 = NULL;
                                t = not_null(x_11);
                                {
                                  t = LatexComment_0(t);
                                  {
                                    o_12 = t;
                                    if(((n_12 != NULL) && (n_12 != o_12)))
                                      _fail(o_12);
                                    else
                                      n_12 = o_12;
                                  }
                                }
                              }
                              t = h_11;
                              {
                                ATerm q_12 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), (ATerm) ATempty);
                                {
                                  t = b_13(t);
                                  {
                                    q_12 = t;
                                    if(((p_12 != NULL) && (p_12 != q_12)))
                                      _fail(q_12);
                                    else
                                      p_12 = q_12;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(p_12)), not_null(n_12));
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = g_11;
                              t = e_13(t);
                            }
                        }
                      else
                        t = e_13(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = b_13(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm x_12 = NULL;
            x_12 = t;
            q_11 :
            if(!(match_string(x_12, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, f_1);
          {
            t = reverse_0(t);
            {
              ATerm g_1 (ATerm t)
              {
                ATerm y_12 = NULL;
                y_12 = t;
                r_11 :
                if(!(match_string(y_12, "")))
                  _fail(t);
                return(t);
              }
              t = remove_trailing_1(t, g_1);
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm z_12 = NULL;
                  z_12 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), not_null(z_12));
                  return(t);
                }
                t = map_1(t, h_1);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  j_13 :
  if(!(match_cons(k_13, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  l_13 :
  if(!(match_cons(m_13, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  n_13 :
  if(!(match_cons(p_13, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  q_13 :
  if(!(match_cons(r_13, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm CL_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  s_13 :
  if(!(match_cons(t_13, sym_CL_0)))
    _fail(t);
  return(t);
}
ATerm FFID_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym_FFID_2))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      {
        ATerm d_14 = NULL;
        t = not_null(z_13);
        {
          ATerm f_14 = NULL;
          t = a_43(t);
          {
            d_14 = t;
            {
              t = not_null(a_14);
              {
                t = b_43(t);
                {
                  f_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FFID_2, not_null(d_14), not_null(f_14));
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
ATerm SZ_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t_14 :
  if(!(match_cons(w_14, sym_SZ_0)))
    _fail(t);
  return(t);
}
ATerm SH_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  x_14 :
  if(!(match_cons(y_14, sym_SH_0)))
    _fail(t);
  return(t);
}
ATerm SE_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  z_14 :
  if(!(match_cons(b_15, sym_SE_0)))
    _fail(t);
  return(t);
}
ATerm FM_0 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  c_15 :
  if(!(match_cons(d_15, sym_FM_0)))
    _fail(t);
  return(t);
}
ATerm toh_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue));
    return(t);
  }
  t = separate_by_1(t, i_1);
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm h_15 = NULL;
  h_15 = t;
  e_15 :
  if(!(match_cons(h_15, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm i_11 = t;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm k_15 = NULL;
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
          return(t);
        }
        t = SOpt_2(t, HS_0, m_1);
        return(t);
      }
      t = fetch_1(t, k_1);
      t = not_null(j_15);
      PopChoice();
    }
  else
    {
      t = i_11;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(((ATgetType(p_15) == AT_LIST) && ((ATermList) p_15 != ATempty)))
    {
      q_15 = ATgetFirst((ATermList) p_15);
      r_15 = (ATerm) ATgetNext((ATermList) p_15);
      {
        ATerm u_15 = NULL;
        ATerm v_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__0);
        {
          t = s_57(t);
          {
            v_15 = t;
            if(((u_15 != NULL) && (u_15 != v_15)))
              _fail(v_15);
            else
              u_15 = v_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_15)), not_null(q_15)), not_null(u_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm j_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_11;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm k_11 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = k_11;
              {
                t = Cons_2(t, _id, v_1);
                t = Sep_1(t, t_57);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, v_1);
      }
    }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  z_15 :
  if(!(match_cons(a_16, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm l_11 = t;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm d_16 = NULL;
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
          return(t);
        }
        t = SOpt_2(t, IS_0, x_1);
        return(t);
      }
      t = fetch_1(t, w_1);
      t = not_null(c_16);
      PopChoice();
    }
  else
    {
      t = l_11;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  h_16 :
  if(!(match_cons(m_16, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm d_42 (ATerm), ATerm e_42 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_SOpt_2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        ATerm x_16 = NULL;
        t = not_null(t_16);
        {
          ATerm z_16 = NULL;
          t = d_42(t);
          {
            x_16 = t;
            {
              t = not_null(u_16);
              {
                t = e_42(t);
                {
                  z_16 = t;
                  t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(x_16), not_null(z_16));
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
ATerm Vspace_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm m_11 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm h_17 = NULL;
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_2);
        return(t);
      }
      t = fetch_1(t, c_2);
      t = not_null(g_17);
      PopChoice();
    }
  else
    {
      t = m_11;
      t = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
    }
  return(t);
}
ATerm C_2 (ATerm t, ATerm j_43 (ATerm), ATerm k_43 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_C_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      {
        ATerm u_17 = NULL;
        t = not_null(q_17);
        {
          ATerm w_17 = NULL;
          t = j_43(t);
          {
            u_17 = t;
            {
              t = not_null(r_17);
              {
                t = k_43(t);
                {
                  w_17 = t;
                  t = (ATerm) ATmakeAppl(sym_C_2, not_null(u_17), not_null(w_17));
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
ATerm table_row_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_R_2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        t = not_null(l_18);
        {
          ATerm b_19 (ATerm t)
          {
            ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
            ATerm s_11 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = s_11;
                {
                  ATerm y_11 = t;
                  if((PushChoice() == 0))
                    {
                      t = Cons_2(t, _id, Nil_0);
                      PopChoice();
                    }
                  else
                    {
                      t = y_11;
                      {
                        ATerm z_11 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm e_2 (ATerm t)
                            {
                              t = C_2(t, _id, _id);
                              return(t);
                            }
                            ATerm f_2 (ATerm t)
                            {
                              t = Cons_2(t, _id, b_19);
                              return(t);
                            }
                            t = Cons_2(t, e_2, f_2);
                            PopChoice();
                          }
                        else
                          {
                            t = z_11;
                            {
                              ATerm a_12 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_2 (ATerm t)
                                  {
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = C_2(t, _id, _id);
                                      return(t);
                                    }
                                    t = Cons_2(t, l_2, b_19);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, g_2);
                                  PopChoice();
                                }
                              else
                                {
                                  t = a_12;
                                  {
                                    ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
                                    t_18 = t;
                                    e_18 :
                                    if(((ATgetType(t_18) == AT_LIST) && ((ATermList) t_18 != ATempty)))
                                      {
                                        u_18 = ATgetFirst((ATermList) t_18);
                                        v_18 = (ATerm) ATgetNext((ATermList) t_18);
                                        f_18 :
                                        if(((ATgetType(v_18) == AT_LIST) && ((ATermList) v_18 != ATempty)))
                                          {
                                            w_18 = ATgetFirst((ATermList) v_18);
                                            x_18 = (ATerm) ATgetNext((ATermList) v_18);
                                            {
                                              ATerm y_18 = NULL;
                                              if(((q_18 != NULL) && (q_18 != u_18)))
                                                _fail(u_18);
                                              else
                                                q_18 = u_18;
                                              {
                                                if(((r_18 != NULL) && (r_18 != w_18)))
                                                  _fail(w_18);
                                                else
                                                  r_18 = w_18;
                                                {
                                                  if(((s_18 != NULL) && (s_18 != x_18)))
                                                    _fail(x_18);
                                                  else
                                                    s_18 = x_18;
                                                  {
                                                    ATerm z_18 = NULL;
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(s_18)), not_null(r_18));
                                                    {
                                                      t = b_19(t);
                                                      {
                                                        z_18 = t;
                                                        if(((y_18 != NULL) && (y_18 != z_18)))
                                                          _fail(z_18);
                                                        else
                                                          y_18 = z_18;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_18)), (ATerm) ATmakeAppl(sym_CSEP_0)), not_null(q_18));
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
                      }
                    }
                }
              }
            return(t);
          }
          t = b_19(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkRows_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
      j_19 = t;
      g_19 :
      if(match_cons(j_19, sym_LBL_2))
        {
          k_19 = ATgetArgument(j_19, 0);
          l_19 = ATgetArgument(j_19, 1);
          {
            ATerm m_19 = NULL;
            if(((h_19 != NULL) && (h_19 != k_19)))
              _fail(k_19);
            else
              h_19 = k_19;
            {
              if(((i_19 != NULL) && (i_19 != l_19)))
                _fail(l_19);
              else
                i_19 = l_19;
              {
                t = not_null(i_19);
                {
                  t = table_row_0(t);
                  {
                    ATerm q_19 = NULL;
                    t = not_null(i_19);
                    {
                      t = table_row_0(t);
                      {
                        q_19 = t;
                        if(((m_19 != NULL) && (m_19 != q_19)))
                          _fail(q_19);
                        else
                          m_19 = q_19;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(h_19), not_null(m_19));
                  }
                }
              }
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = d_12;
      t = table_row_0(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm t_19 (ATerm t)
  {
    ATerm e_12 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = d_57(t);
        PopChoice();
      }
    else
      {
        t = e_12;
        t = Cons_2(t, _id, t_19);
      }
    return(t);
  }
  t = t_19(t);
  return(t);
}
ATerm table_def_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_AOPTIONS_1))
    {
      h_20 = ATgetArgument(g_20, 0);
      {
        t = not_null(h_20);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm j_20 = NULL,k_20 = NULL;
            j_20 = t;
            e_20 :
            if(match_cons(j_20, sym_AL_1))
              {
                k_20 = ATgetArgument(j_20, 0);
                {
                  ATerm m_20 = NULL;
                  ATerm n_20 = NULL,p_20 = NULL;
                  ATerm o_20 = NULL;
                  t = not_null(k_20);
                  {
                    t = Hspace_0(t);
                    {
                      t = string_to_int_0(t);
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)));
                    {
                      t = copy_0(t);
                      {
                        p_20 = t;
                        if(((m_20 != NULL) && (m_20 != p_20)))
                          _fail(p_20);
                        else
                          m_20 = p_20;
                      }
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_20)), (ATerm) ATmakeAppl(sym_L_0));
                }
              }
            else
              {
                if(match_cons(j_20, sym_AC_1))
                  {
                    k_20 = ATgetArgument(j_20, 0);
                    {
                      ATerm r_20 = NULL;
                      ATerm s_20 = NULL,u_20 = NULL;
                      ATerm t_20 = NULL;
                      t = not_null(k_20);
                      {
                        t = Hspace_0(t);
                        {
                          t = string_to_int_0(t);
                          {
                            t_20 = t;
                            if(((s_20 != NULL) && (s_20 != t_20)))
                              _fail(t_20);
                            else
                              s_20 = t_20;
                          }
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)));
                        {
                          t = copy_0(t);
                          {
                            u_20 = t;
                            if(((r_20 != NULL) && (r_20 != u_20)))
                              _fail(u_20);
                            else
                              r_20 = u_20;
                          }
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_20)), (ATerm) ATmakeAppl(sym_C_0));
                    }
                  }
                else
                  {
                    if(match_cons(j_20, sym_AR_1))
                      {
                        k_20 = ATgetArgument(j_20, 0);
                        {
                          ATerm w_20 = NULL;
                          ATerm x_20 = NULL,z_20 = NULL;
                          ATerm y_20 = NULL;
                          t = not_null(k_20);
                          {
                            t = Hspace_0(t);
                            {
                              t = string_to_int_0(t);
                              {
                                y_20 = t;
                                if(((x_20 != NULL) && (x_20 != y_20)))
                                  _fail(y_20);
                                else
                                  x_20 = y_20;
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), (ATerm) ATmakeAppl(ATmakeSymbol("~", 0, ATtrue)));
                            {
                              t = copy_0(t);
                              {
                                z_20 = t;
                                if(((w_20 != NULL) && (w_20 != z_20)))
                                  _fail(z_20);
                                else
                                  w_20 = z_20;
                              }
                            }
                          }
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), (ATerm) ATmakeAppl(sym_R_0));
                        }
                      }
                    else
                      _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, m_2);
          {
            ATerm n_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CSEP_0));
              return(t);
            }
            t = separate_by_1(t, n_2);
            {
              t = concat_0(t);
              {
                ATerm p_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_EOR_0));
                  return(t);
                }
                t = at_last_1(t, p_2);
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
ATerm conc_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym__2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        t = not_null(n_21);
        {
          ATerm q_2 (ATerm t)
          {
            t = not_null(o_21);
            return(t);
          }
          t = at_end_1(t, q_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym__2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      {
        ATerm f_12 = t;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_21), not_null(w_21));
            PopChoice();
          }
        else
          {
            t = f_12;
            t = SSL_subtr(not_null(v_21), not_null(w_21));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm h_12 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_22), not_null(e_22));
              PopChoice();
            }
          else
            {
              t = h_12;
              t = SSL_gtr(not_null(d_22), not_null(e_22));
            }
        }
        t = g_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm i_12 = t;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
      l_22 = t;
      j_22 :
      if(match_cons(l_22, sym__2))
        {
          m_22 = ATgetArgument(l_22, 0);
          n_22 = ATgetArgument(l_22, 1);
          {
            if(((k_22 != NULL) && (k_22 != m_22)))
              _fail(m_22);
            else
              k_22 = m_22;
            if(((k_22 != NULL) && (k_22 != n_22)))
              _fail(n_22);
            else
              k_22 = n_22;
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = i_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm p_22 (ATerm t)
  {
    ATerm j_12 = t;
    if((PushChoice() == 0))
      {
        t = p_59(t);
        PopChoice();
      }
    else
      {
        t = j_12;
        {
          t = q_59(t);
          t = p_22(t);
        }
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  t = s_59(t);
  t = while_not_2(t, t_59, u_59);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_35 (ATerm), ATerm j_35 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym__2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      {
        ATerm z_22 = NULL;
        t = not_null(v_22);
        {
          ATerm b_23 = NULL;
          t = i_35(t);
          {
            z_22 = t;
            {
              t = not_null(w_22);
              {
                t = j_35(t);
                {
                  b_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(b_23));
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
ATerm copy_0 (ATerm t)
{
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm p_23 = NULL;
        p_23 = t;
        g_23 :
        if(!(match_int(p_23, 0)))
          _fail(t);
        return(t);
      }
      t = _2(t, s_2, _id);
      t = (ATerm) ATempty;
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
          q_23 = t;
          i_23 :
          if(match_cons(q_23, sym__2))
            {
              r_23 = ATgetArgument(q_23, 0);
              s_23 = ATgetArgument(q_23, 1);
              t = (ATerm) ATmakeAppl(sym__3, not_null(r_23), not_null(s_23), (ATerm) ATempty);
            }
          else
            _fail(t);
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          ATerm x_23 = NULL,y_23 = NULL,g_24 = NULL,h_24 = NULL;
          x_23 = t;
          k_23 :
          if(match_cons(x_23, sym__3))
            {
              y_23 = ATgetArgument(x_23, 0);
              g_24 = ATgetArgument(x_23, 1);
              h_24 = ATgetArgument(x_23, 2);
              l_23 :
              if(match_int(y_23, 0))
                t = not_null(h_24);
              else
                _fail(t);
            }
          else
            _fail(t);
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
          k_24 = t;
          o_23 :
          if(match_cons(k_24, sym__3))
            {
              l_24 = ATgetArgument(k_24, 0);
              m_24 = ATgetArgument(k_24, 1);
              n_24 = ATgetArgument(k_24, 2);
              {
                ATerm r_24 = NULL;
                ATerm l_12;
                l_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), (ATerm) ATmakeInt(1));
                  t = geq_0(t);
                }
                t = l_12;
                {
                  ATerm s_24 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), (ATerm) ATmakeInt(1));
                  {
                    t = subt_0(t);
                    {
                      s_24 = t;
                      if(((r_24 != NULL) && (r_24 != s_24)))
                        _fail(s_24);
                      else
                        r_24 = s_24;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_24), not_null(m_24), (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(m_24)));
                }
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = for_3(t, t_2, v_2, y_2);
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_string_to_int(not_null(a_25));
  return(t);
}
ATerm R_2 (ATerm t, ATerm s_42 (ATerm), ATerm t_42 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_R_2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      {
        ATerm p_25 = NULL;
        t = not_null(k_25);
        {
          ATerm r_25 = NULL;
          t = s_42(t);
          {
            p_25 = t;
            {
              t = not_null(l_25);
              {
                t = t_42(t);
                {
                  r_25 = t;
                  t = (ATerm) ATmakeAppl(sym_R_2, not_null(p_25), not_null(r_25));
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
ATerm filter_1 (ATerm t, ATerm a_52 (ATerm))
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
        ATerm r_12 = t;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = filter_1(t, a_52);
              return(t);
            }
            t = Cons_2(t, a_52, z_2);
            PopChoice();
          }
        else
          {
            t = r_12;
            {
              ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
              y_25 = t;
              x_25 :
              if(((ATgetType(y_25) == AT_LIST) && ((ATermList) y_25 != ATempty)))
                {
                  z_25 = ATgetFirst((ATermList) y_25);
                  a_26 = (ATerm) ATgetNext((ATermList) y_25);
                  {
                    t = not_null(a_26);
                    t = filter_1(t, a_52);
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
ATerm construct_rows_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, k_3);
  {
    ATerm v_27 (ATerm t)
    {
      ATerm m_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
      ATerm y_27 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), (ATerm) ATinsert(CheckATermList(not_null(u_26)), not_null(s_26)));
        t = v_27(t);
        return(t);
      }
      q_26 = t;
      j_26 :
      if(match_cons(q_26, sym__2))
        {
          r_26 = ATgetArgument(q_26, 0);
          u_26 = ATgetArgument(q_26, 1);
          k_26 :
          if(((ATermList) r_26 == ATempty))
            {
              {
                ATerm b_27 = NULL;
                ATerm c_27 = NULL;
                t = not_null(u_26);
                {
                  t = reverse_0(t);
                  {
                    c_27 = t;
                    if(((b_27 != NULL) && (b_27 != c_27)))
                      _fail(c_27);
                    else
                      b_27 = c_27;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(b_27)));
              }
            }
          else
            {
              if(((ATgetType(r_26) == AT_LIST) && ((ATermList) r_26 != ATempty)))
                {
                  s_26 = ATgetFirst((ATermList) r_26);
                  t_26 = (ATerm) ATgetNext((ATermList) r_26);
                  l_26 :
                  if(match_cons(s_26, sym_R_2))
                    {
                      m_26 = ATgetArgument(s_26, 0);
                      p_26 = ATgetArgument(s_26, 1);
                      {
                        ATerm s_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_27 = NULL,p_27 = NULL;
                            ATerm t_12;
                            t_12 = t;
                            {
                              ATerm o_27 = NULL;
                              t = not_null(u_26);
                              {
                                t = reverse_0(t);
                                {
                                  o_27 = t;
                                  if(((n_27 != NULL) && (n_27 != o_27)))
                                    _fail(o_27);
                                  else
                                    n_27 = o_27;
                                }
                              }
                            }
                            t = t_12;
                            {
                              ATerm q_27 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), (ATerm) ATempty);
                              {
                                t = v_27(t);
                                {
                                  q_27 = t;
                                  if(((p_27 != NULL) && (p_27 != q_27)))
                                    _fail(q_27);
                                  else
                                    p_27 = q_27;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_27)), (ATerm) ATmakeAppl(sym_R_2, not_null(m_26), not_null(p_26))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(n_27)));
                            }
                            PopChoice();
                          }
                        else
                          {
                            t = s_12;
                            t = y_27(t);
                          }
                      }
                    }
                  else
                    t = y_27(t);
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
      return(t);
    }
    t = v_27(t);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm u_12 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          t = u_12;
        return(t);
      }
      t = filter_1(t, m_3);
    }
  }
  return(t);
}
ATerm Abox_2_latex_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  ATerm f_37 (ATerm t)
  {
    t = not_null(b_30);
    {
      ATerm v_12 = t;
      if((PushChoice() == 0))
        {
          t = KW_0(t);
          PopChoice();
        }
      else
        {
          t = v_12;
          {
            ATerm w_12 = t;
            if((PushChoice() == 0))
              {
                t = VAR_0(t);
                PopChoice();
              }
            else
              {
                t = w_12;
                {
                  ATerm a_13 = t;
                  if((PushChoice() == 0))
                    {
                      t = NUM_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_13;
                      t = MATH_0(t);
                    }
                }
              }
          }
        }
    }
    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(b_30), not_null(z_29));
    return(t);
  }
  ATerm g_37 (ATerm t)
  {
    ATerm n_36 = NULL;
    ATerm t_36 = NULL;
    t = not_null(z_29);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_36 = NULL,p_36 = NULL;
        o_36 = t;
        p_29 :
        if(match_cons(o_36, sym_S_1))
          {
            p_36 = ATgetArgument(o_36, 0);
            {
              t = not_null(p_36);
              t = make_latex_comment_0(t);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = map_1(t, n_3);
      {
        t_36 = t;
        if(((n_36 != NULL) && (n_36 != t_36)))
          _fail(t_36);
        else
          n_36 = t_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CBOX_1, not_null(n_36));
    return(t);
  }
  ATerm h_37 (ATerm t)
  {
    t = not_null(b_30);
    t = latex_string_0(t);
    return(t);
  }
  a_30 = t;
  r_29 :
  if(match_cons(a_30, sym_REF_2))
    {
      b_30 = ATgetArgument(a_30, 0);
      z_29 = ATgetArgument(a_30, 1);
      t = (ATerm) ATmakeAppl(sym_REFBOX_2, not_null(b_30), not_null(z_29));
    }
  else
    {
      if(match_cons(a_30, sym_LBL_2))
        {
          b_30 = ATgetArgument(a_30, 0);
          z_29 = ATgetArgument(a_30, 1);
          t = (ATerm) ATmakeAppl(sym_LBLBOX_2, not_null(b_30), not_null(z_29));
        }
      else
        {
          if(match_cons(a_30, sym_L_2))
            {
              b_30 = ATgetArgument(a_30, 0);
              z_29 = ATgetArgument(a_30, 1);
              {
                ATerm i_30 = NULL;
                ATerm c_13 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_30 = NULL;
                    t = not_null(b_30);
                    {
                      t = string_to_int_0(t);
                      {
                        j_30 = t;
                        if(((i_30 != NULL) && (i_30 != j_30)))
                          _fail(j_30);
                        else
                          i_30 = j_30;
                      }
                    }
                    PopChoice();
                  }
                else
                  {
                    t = c_13;
                    {
                      ATerm d_13 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm l_30 = NULL;
                          t = not_null(b_30);
                          {
                            t = explode_string_0(t);
                            {
                              ATerm o_3 (ATerm t)
                              {
                                ATerm k_30 = NULL;
                                k_30 = t;
                                q_28 :
                                if(!(match_int(k_30, 61)))
                                  _fail(t);
                                return(t);
                              }
                              t = Cons_2(t, o_3, _id);
                              {
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(61));
                                {
                                  t = implode_string_0(t);
                                  {
                                    l_30 = t;
                                    if(((i_30 != NULL) && (i_30 != l_30)))
                                      _fail(l_30);
                                    else
                                      i_30 = l_30;
                                  }
                                }
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = d_13;
                          {
                            ATerm m_30 = NULL;
                            t = not_null(b_30);
                            {
                              m_30 = t;
                              if(((i_30 != NULL) && (i_30 != m_30)))
                                _fail(m_30);
                              else
                                i_30 = m_30;
                            }
                          }
                        }
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_LBOX_2, not_null(i_30), not_null(z_29));
              }
            }
          else
            {
              if(match_cons(a_30, sym_ALT_2))
                {
                  b_30 = ATgetArgument(a_30, 0);
                  z_29 = ATgetArgument(a_30, 1);
                  t = (ATerm) ATmakeAppl(sym_ALTBOX_2, not_null(b_30), not_null(z_29));
                }
              else
                {
                  if(match_cons(a_30, sym_A_3))
                    {
                      b_30 = ATgetArgument(a_30, 0);
                      z_29 = ATgetArgument(a_30, 1);
                      v_29 = ATgetArgument(a_30, 2);
                      {
                        ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
                        ATerm x_30 = NULL;
                        t = not_null(v_29);
                        {
                          ATerm y_30 = NULL;
                          t = construct_rows_0(t);
                          {
                            x_30 = t;
                            {
                              if(((v_30 != NULL) && (v_30 != x_30)))
                                _fail(x_30);
                              else
                                v_30 = x_30;
                              {
                                t = not_null(z_29);
                                {
                                  t = Vspace_0(t);
                                  {
                                    ATerm z_30 = NULL,b_31 = NULL;
                                    t = string_to_int_0(t);
                                    {
                                      y_30 = t;
                                      {
                                        if(((s_30 != NULL) && (s_30 != y_30)))
                                          _fail(y_30);
                                        else
                                          s_30 = y_30;
                                        {
                                          ATerm a_31 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), (ATerm) ATmakeAppl(sym_EOR_0));
                                          {
                                            t = copy_0(t);
                                            {
                                              a_31 = t;
                                              if(((z_30 != NULL) && (z_30 != a_31)))
                                                _fail(a_31);
                                              else
                                                z_30 = a_31;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(sym_EOR_0)));
                                            {
                                              ATerm f_31 = NULL;
                                              t = conc_0(t);
                                              {
                                                b_31 = t;
                                                {
                                                  if(((u_30 != NULL) && (u_30 != b_31)))
                                                    _fail(b_31);
                                                  else
                                                    u_30 = b_31;
                                                  {
                                                    t = not_null(b_30);
                                                    {
                                                      ATerm g_31 = NULL;
                                                      t = table_def_0(t);
                                                      {
                                                        f_31 = t;
                                                        {
                                                          if(((t_30 != NULL) && (t_30 != f_31)))
                                                            _fail(f_31);
                                                          else
                                                            t_30 = f_31;
                                                          {
                                                            t = not_null(v_30);
                                                            {
                                                              t = map_1(t, MkRows_0);
                                                              {
                                                                ATerm q_3 (ATerm t)
                                                                {
                                                                  t = not_null(u_30);
                                                                  return(t);
                                                                }
                                                                t = separate_by_1(t, q_3);
                                                                {
                                                                  g_31 = t;
                                                                  if(((w_30 != NULL) && (w_30 != g_31)))
                                                                    _fail(g_31);
                                                                  else
                                                                    w_30 = g_31;
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
                        t = (ATerm) ATmakeAppl(sym_ABOX_2, not_null(t_30), not_null(w_30));
                      }
                    }
                  else
                    {
                      if(match_cons(a_30, sym_HV_2))
                        {
                          b_30 = ATgetArgument(a_30, 0);
                          z_29 = ATgetArgument(a_30, 1);
                          {
                            ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
                            ATerm n_31 = NULL;
                            t = not_null(b_30);
                            {
                              ATerm o_31 = NULL;
                              t = Hspace_0(t);
                              {
                                n_31 = t;
                                {
                                  if(((j_31 != NULL) && (j_31 != n_31)))
                                    _fail(n_31);
                                  else
                                    j_31 = n_31;
                                  {
                                    t = not_null(b_30);
                                    {
                                      ATerm p_31 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        o_31 = t;
                                        {
                                          if(((k_31 != NULL) && (k_31 != o_31)))
                                            _fail(o_31);
                                          else
                                            k_31 = o_31;
                                          {
                                            t = not_null(b_30);
                                            {
                                              ATerm h_35 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                p_31 = t;
                                                {
                                                  if(((l_31 != NULL) && (l_31 != p_31)))
                                                    _fail(p_31);
                                                  else
                                                    l_31 = p_31;
                                                  {
                                                    t = not_null(z_29);
                                                    {
                                                      ATerm r_3 (ATerm t)
                                                      {
                                                        t = (ATerm) ATmakeAppl(ATmakeSymbol("\\ ", 0, ATtrue));
                                                        return(t);
                                                      }
                                                      t = separate_by_1(t, r_3);
                                                      {
                                                        h_35 = t;
                                                        if(((m_31 != NULL) && (m_31 != h_35)))
                                                          _fail(h_35);
                                                        else
                                                          m_31 = h_35;
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
                            t = (ATerm) ATmakeAppl(sym_HVBOX_4, not_null(j_31), not_null(k_31), not_null(l_31), not_null(m_31));
                          }
                        }
                      else
                        {
                          if(match_cons(a_30, sym_V_2))
                            {
                              b_30 = ATgetArgument(a_30, 0);
                              z_29 = ATgetArgument(a_30, 1);
                              {
                                ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
                                ATerm p_35 = NULL;
                                t = not_null(b_30);
                                {
                                  ATerm q_35 = NULL;
                                  t = Vspace_0(t);
                                  {
                                    p_35 = t;
                                    {
                                      if(((m_35 != NULL) && (m_35 != p_35)))
                                        _fail(p_35);
                                      else
                                        m_35 = p_35;
                                      {
                                        t = not_null(b_30);
                                        {
                                          ATerm r_35 = NULL;
                                          t = Ispace_0(t);
                                          {
                                            q_35 = t;
                                            {
                                              if(((n_35 != NULL) && (n_35 != q_35)))
                                                _fail(q_35);
                                              else
                                                n_35 = q_35;
                                              {
                                                t = not_null(z_29);
                                                {
                                                  ATerm s_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = separate_by_1(t, s_3);
                                                  {
                                                    r_35 = t;
                                                    if(((o_35 != NULL) && (o_35 != r_35)))
                                                      _fail(r_35);
                                                    else
                                                      o_35 = r_35;
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
                                t = (ATerm) ATmakeAppl(sym_VBOX_3, not_null(m_35), not_null(n_35), not_null(o_35));
                              }
                            }
                          else
                            {
                              if(match_cons(a_30, sym_H_2))
                                {
                                  b_30 = ATgetArgument(a_30, 0);
                                  z_29 = ATgetArgument(a_30, 1);
                                  {
                                    ATerm u_35 = NULL,v_35 = NULL;
                                    ATerm w_35 = NULL;
                                    t = not_null(b_30);
                                    {
                                      ATerm x_35 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        w_35 = t;
                                        {
                                          if(((u_35 != NULL) && (u_35 != w_35)))
                                            _fail(w_35);
                                          else
                                            u_35 = w_35;
                                          {
                                            t = not_null(z_29);
                                            {
                                              t = toh_0(t);
                                              {
                                                x_35 = t;
                                                if(((v_35 != NULL) && (v_35 != x_35)))
                                                  _fail(x_35);
                                                else
                                                  v_35 = x_35;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_HBOX_2, not_null(u_35), not_null(v_35));
                                  }
                                }
                              else
                                {
                                  if(match_cons(a_30, sym_FBOX_2))
                                    {
                                      b_30 = ATgetArgument(a_30, 0);
                                      z_29 = ATgetArgument(a_30, 1);
                                      s_29 :
                                      if(match_cons(b_30, sym_F_1))
                                        {
                                          y_29 = ATgetArgument(b_30, 0);
                                          t_29 :
                                          if(((ATgetType(y_29) == AT_LIST) && ((ATermList) y_29 != ATempty)))
                                            {
                                              w_29 = ATgetFirst((ATermList) y_29);
                                              x_29 = (ATerm) ATgetNext((ATermList) y_29);
                                              {
                                                ATerm f_13 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm b_36 = NULL,c_36 = NULL;
                                                    t = not_null(w_29);
                                                    {
                                                      ATerm g_13 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_3 (ATerm t)
                                                          {
                                                            ATerm d_36 = NULL;
                                                            d_36 = t;
                                                            if(((c_36 != NULL) && (c_36 != d_36)))
                                                              _fail(d_36);
                                                            else
                                                              c_36 = d_36;
                                                            return(t);
                                                          }
                                                          t = FFID_2(t, FM_0, t_3);
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = g_13;
                                                          {
                                                            ATerm h_13 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_3 (ATerm t)
                                                                {
                                                                  ATerm e_36 = NULL;
                                                                  e_36 = t;
                                                                  if(((c_36 != NULL) && (c_36 != e_36)))
                                                                    _fail(e_36);
                                                                  else
                                                                    c_36 = e_36;
                                                                  return(t);
                                                                }
                                                                t = FFID_2(t, SE_0, u_3);
                                                                PopChoice();
                                                              }
                                                            else
                                                              {
                                                                t = h_13;
                                                                {
                                                                  ATerm i_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm v_3 (ATerm t)
                                                                      {
                                                                        ATerm f_36 = NULL;
                                                                        f_36 = t;
                                                                        if(((c_36 != NULL) && (c_36 != f_36)))
                                                                          _fail(f_36);
                                                                        else
                                                                          c_36 = f_36;
                                                                        return(t);
                                                                      }
                                                                      t = FFID_2(t, SH_0, v_3);
                                                                      PopChoice();
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_13;
                                                                      {
                                                                        ATerm o_13 = t;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm w_3 (ATerm t)
                                                                            {
                                                                              ATerm g_36 = NULL;
                                                                              g_36 = t;
                                                                              if(((c_36 != NULL) && (c_36 != g_36)))
                                                                                _fail(g_36);
                                                                              else
                                                                                c_36 = g_36;
                                                                              return(t);
                                                                            }
                                                                            t = FFID_2(t, SZ_0, w_3);
                                                                            PopChoice();
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_13;
                                                                            {
                                                                              ATerm i_36 = NULL;
                                                                              ATerm x_3 (ATerm t)
                                                                              {
                                                                                ATerm h_36 = NULL;
                                                                                h_36 = t;
                                                                                if(((b_36 != NULL) && (b_36 != h_36)))
                                                                                  _fail(h_36);
                                                                                else
                                                                                  b_36 = h_36;
                                                                                return(t);
                                                                              }
                                                                              t = FFID_2(t, CL_0, x_3);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_BOXCOLOR_1, not_null(b_36));
                                                                                {
                                                                                  i_36 = t;
                                                                                  if(((c_36 != NULL) && (c_36 != i_36)))
                                                                                    _fail(i_36);
                                                                                  else
                                                                                    c_36 = i_36;
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
                                                    t = (ATerm) ATmakeAppl(sym_BOXFONT_2, not_null(c_36), (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_F_1, not_null(x_29)), not_null(z_29)));
                                                    PopChoice();
                                                  }
                                                else
                                                  {
                                                    t = f_13;
                                                    t = f_37(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(((ATermList) y_29 == ATempty))
                                                {
                                                  {
                                                    ATerm u_13 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = not_null(z_29);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = u_13;
                                                        t = f_37(t);
                                                      }
                                                  }
                                                }
                                              else
                                                t = f_37(t);
                                            }
                                        }
                                      else
                                        t = f_37(t);
                                    }
                                  else
                                    {
                                      if(match_cons(a_30, sym_C_2))
                                        {
                                          b_30 = ATgetArgument(a_30, 0);
                                          z_29 = ATgetArgument(a_30, 1);
                                          u_29 :
                                          if(((ATermList) b_30 == ATempty))
                                            {
                                              t = g_37(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(match_cons(a_30, sym_S_1))
                                            {
                                              b_30 = ATgetArgument(a_30, 0);
                                              t = h_37(t);
                                            }
                                          else
                                            _fail(t);
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
ATerm abox2latex_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm l_38 = NULL;
  ATerm n_38 = NULL,p_38 = NULL;
  l_38 = t;
  {
    ATerm v_13;
    v_13 = t;
    {
      ATerm o_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        t = b_66(t);
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
      }
    }
    t = v_13;
    {
      ATerm q_38 = NULL;
      t = not_null(l_38);
      {
        ATerm y_3 (ATerm t)
        {
          t = try_1(t, Abox_2_latex_0);
          return(t);
        }
        t = topdown_1(t, y_3);
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym_BOXENV_2, (ATerm)ATinsert(ATempty, not_null(n_38)), not_null(p_38));
        t = latex2text_0(t);
      }
    }
  }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_48 (ATerm))
{
  t = fetch_1(t, n_48);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_39 = NULL;
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  {
    ATerm g_39 = NULL;
    ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
    t = not_null(b_39);
    {
      g_39 = t;
      {
        t = SSL_explode_term(not_null(g_39));
        {
          i_39 = t;
          x_38 :
          if(match_cons(i_39, sym__2))
            {
              j_39 = ATgetArgument(i_39, 0);
              k_39 = ATgetArgument(i_39, 1);
              y_38 :
              if(match_string(j_39, ""))
                {
                  z_38 :
                  if(((ATgetType(k_39) == AT_LIST) && ((ATermList) k_39 != ATempty)))
                    {
                      l_39 = ATgetFirst((ATermList) k_39);
                      m_39 = (ATerm) ATgetNext((ATermList) k_39);
                      a_39 :
                      if(((ATgetType(m_39) == AT_LIST) && ((ATermList) m_39 != ATempty)))
                        {
                          n_39 = ATgetFirst((ATermList) m_39);
                          o_39 = (ATerm) ATgetNext((ATermList) m_39);
                          {
                            if(((d_39 != NULL) && (d_39 != l_39)))
                              _fail(l_39);
                            else
                              d_39 = l_39;
                            {
                              if(((f_39 != NULL) && (f_39 != n_39)))
                                _fail(n_39);
                              else
                                f_39 = n_39;
                              if(((e_39 != NULL) && (e_39 != o_39)))
                                _fail(o_39);
                              else
                                e_39 = o_39;
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
    }
    t = not_null(f_39);
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_39 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm b_14 = t;
    if((PushChoice() == 0))
      {
        ATerm z_3 (ATerm t)
        {
          ATerm w_39 = NULL,x_39 = NULL;
          w_39 = t;
          t_39 :
          if(match_cons(w_39, sym_Input_1))
            {
              x_39 = ATgetArgument(w_39, 0);
              if(((v_39 != NULL) && (v_39 != x_39)))
                _fail(x_39);
              else
                v_39 = x_39;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_3);
        PopChoice();
      }
    else
      {
        t = b_14;
        {
          ATerm y_39 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            y_39 = t;
            if(((v_39 != NULL) && (v_39 != y_39)))
              _fail(y_39);
            else
              v_39 = y_39;
          }
        }
      }
  }
  t = w_13;
  {
    ATerm a_4 (ATerm t)
    {
      t = not_null(v_39);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_4);
  }
  return(t);
}
ATerm StoreEntries_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
    f_40 = t;
    c_40 :
    if(((ATgetType(f_40) == AT_LIST) && ((ATermList) f_40 != ATempty)))
      {
        g_40 = ATgetFirst((ATermList) f_40);
        h_40 = (ATerm) ATgetNext((ATermList) f_40);
        d_40 :
        if(((ATgetType(h_40) == AT_LIST) && ((ATermList) h_40 != ATempty)))
          {
            i_40 = ATgetFirst((ATermList) h_40);
            j_40 = (ATerm) ATgetNext((ATermList) h_40);
            e_40 :
            if(((ATermList) j_40 == ATempty))
              {
                {
                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue)), not_null(g_40), not_null(i_40));
                  t = table_put_0(t);
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
  t = map_1(t, b_4);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  t = SSL_ReadFromFile(not_null(o_40));
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_40 = NULL;
  s_40 = t;
  t = SSL_table_create(not_null(s_40));
  return(t);
}
ATerm load_tables_0 (ATerm t)
{
  ATerm c_14;
  c_14 = t;
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("latex-abbrevs", 0, ATtrue));
    t = table_create_0(t);
  }
  t = c_14;
  {
    t = reverse_0(t);
    {
      ATerm c_4 (ATerm t)
      {
        t = ReadFromFile_0(t);
        t = StoreEntries_0(t);
        return(t);
      }
      t = map_1(t, c_4);
    }
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm v_40 (ATerm t)
  {
    ATerm e_14 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_56, _id);
        PopChoice();
      }
    else
      {
        t = e_14;
        t = Cons_2(t, _id, v_40);
      }
    return(t);
  }
  t = v_40(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm y_53 (ATerm))
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(((ATgetType(z_40) == AT_LIST) && ((ATermList) z_40 != ATempty)))
    {
      a_41 = ATgetFirst((ATermList) z_40);
      b_41 = (ATerm) ATgetNext((ATermList) z_40);
      {
        t = y_53(t);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm e_41 = NULL;
            e_41 = t;
            if(((a_41 != NULL) && (a_41 != e_41)))
              _fail(e_41);
            else
              a_41 = e_41;
            return(t);
          }
          t = fetch_1(t, d_4);
        }
        t = not_null(b_41);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym__2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        t = not_null(k_41);
        {
          ATerm p_41 (ATerm t)
          {
            ATerm g_14 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_41);
                PopChoice();
              }
            else
              {
                t = g_14;
                {
                  ATerm h_14 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm e_4 (ATerm t)
                      {
                        t = not_null(l_41);
                        return(t);
                      }
                      t = HdMember_1(t, e_4);
                      t = p_41(t);
                      PopChoice();
                    }
                  else
                    {
                      t = h_14;
                      t = Cons_2(t, _id, p_41);
                    }
                }
              }
            return(t);
          }
          t = p_41(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm), ATerm y_52 (ATerm))
{
  ATerm i_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_52(t);
      PopChoice();
    }
  else
    {
      t = i_14;
      {
        ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
        u_41 = t;
        t_41 :
        if(((ATgetType(u_41) == AT_LIST) && ((ATermList) u_41 != ATempty)))
          {
            v_41 = ATgetFirst((ATermList) u_41);
            w_41 = (ATerm) ATgetNext((ATermList) u_41);
            {
              ATerm z_41 = NULL,b_42 = NULL;
              ATerm j_14;
              j_14 = t;
              {
                ATerm a_42 = NULL;
                t = not_null(v_41);
                {
                  t = y_52(t);
                  {
                    a_42 = t;
                    if(((z_41 != NULL) && (z_41 != a_42)))
                      _fail(a_42);
                    else
                      z_41 = a_42;
                  }
                }
              }
              t = j_14;
              {
                ATerm c_42 = NULL;
                t = not_null(w_41);
                {
                  t = foldr_3(t, w_52, x_52, y_52);
                  {
                    c_42 = t;
                    if(((b_42 != NULL) && (b_42 != c_42)))
                      _fail(c_42);
                    else
                      b_42 = c_42;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_41), not_null(b_42));
                  t = x_52(t);
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
ATerm crush_3 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm))
{
  ATerm m_42 = NULL;
  ATerm o_42 = NULL;
  m_42 = t;
  {
    ATerm p_42 = NULL;
    ATerm r_42 = NULL,u_42 = NULL,v_42 = NULL;
    t = not_null(m_42);
    {
      p_42 = t;
      {
        t = SSL_explode_term(not_null(p_42));
        {
          r_42 = t;
          l_42 :
          if(match_cons(r_42, sym__2))
            {
              u_42 = ATgetArgument(r_42, 0);
              v_42 = ATgetArgument(r_42, 1);
              if(((o_42 != NULL) && (o_42 != v_42)))
                _fail(v_42);
              else
                o_42 = v_42;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(o_42);
      t = foldr_3(t, j_54, k_54, l_54);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm e_43 (ATerm t)
  {
    ATerm k_14 = t;
    if((PushChoice() == 0))
      {
        ATerm c_43 = NULL;
        ATerm d_43 = NULL;
        t = u_54(t);
        {
          d_43 = t;
          if(((c_43 != NULL) && (c_43 != d_43)))
            _fail(d_43);
          else
            c_43 = d_43;
        }
        t = (ATerm) ATinsert(ATempty, not_null(c_43));
        PopChoice();
      }
    else
      {
        t = k_14;
        {
          ATerm f_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, f_4, union_0, e_43);
        }
      }
    return(t);
  }
  t = e_43(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm w_54 (ATerm))
{
  t = collect_om_1(t, w_54);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_50 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    ATerm i_43 = NULL,m_43 = NULL;
    ATerm m_14;
    m_14 = t;
    {
      ATerm l_43 = NULL;
      t = e_50(t);
      {
        l_43 = t;
        if(((i_43 != NULL) && (i_43 != l_43)))
          _fail(l_43);
        else
          i_43 = l_43;
      }
    }
    t = m_14;
    {
      ATerm n_43 = NULL;
      n_43 = t;
      if(((m_43 != NULL) && (m_43 != n_43)))
        _fail(n_43);
      else
        m_43 = n_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_43)), not_null(i_43)));
        t = printnl_0(t);
      }
    }
  }
  t = l_14;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_50 (ATerm))
{
  ATerm n_14;
  n_14 = t;
  {
    t = l_50(t);
    {
      ATerm g_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
        return(t);
      }
      t = debug_1(t, g_4);
    }
  }
  t = n_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  ATerm o_14 = t;
  if((PushChoice() == 0))
    {
      ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
      v_43 = t;
      r_43 :
      if(match_cons(v_43, sym__2))
        {
          w_43 = ATgetArgument(v_43, 0);
          x_43 = ATgetArgument(v_43, 1);
          {
            if(((u_43 != NULL) && (u_43 != w_43)))
              _fail(w_43);
            else
              u_43 = w_43;
            {
              if(((t_43 != NULL) && (t_43 != x_43)))
                _fail(x_43);
              else
                t_43 = x_43;
              t = SSL_open_file(not_null(u_43), not_null(t_43));
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = o_14;
      {
        ATerm y_43 = NULL;
        ATerm h_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
          return(t);
        }
        t = obsolete_1(t, h_4);
        {
          y_43 = t;
          {
            if(((u_43 != NULL) && (u_43 != y_43)))
              _fail(y_43);
            else
              u_43 = y_43;
            t = SSL_open_file(not_null(u_43), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
          }
        }
      }
    }
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm f_44 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm g_44 = NULL,h_44 = NULL;
      g_44 = t;
      c_44 :
      if(match_cons(g_44, sym_Program_1))
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
    t = option_defined_1(t, i_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]", 0, ATtrue))), not_null(f_44)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(0);
          t = exit_0(t);
        }
      }
    }
  }
  t = p_14;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  j_44 :
  if(!(match_cons(k_44, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_49 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm q_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = q_14;
        {
          ATerm r_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = r_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_4);
  t = i_49(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm i_48 (ATerm), ATerm j_48 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, i_48, j_48, k_4);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  q_44 = t;
  o_44 :
  if(match_string(q_44, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(q_44) == AT_LIST) && ((ATermList) q_44 != ATempty)))
        {
          r_44 = ATgetFirst((ATermList) q_44);
          s_44 = (ATerm) ATgetNext((ATermList) q_44);
          p_44 :
          if(((ATgetType(s_44) == AT_LIST) && ((ATermList) s_44 != ATempty)))
            {
              t_44 = ATgetFirst((ATermList) s_44);
              u_44 = (ATerm) ATgetNext((ATermList) s_44);
              {
                ATerm y_44 = NULL;
                ATerm s_14;
                s_14 = t;
                {
                  t = not_null(r_44);
                  t = h_0(t);
                }
                t = s_14;
                {
                  ATerm z_44 = NULL;
                  t = not_null(t_44);
                  {
                    t = i_0(t);
                    {
                      z_44 = t;
                      if(((y_44 != NULL) && (y_44 != z_44)))
                        _fail(z_44);
                      else
                        y_44 = z_44;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_44)), not_null(y_44));
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
ATerm io_options_0 (ATerm t)
{
  ATerm u_14 = t;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        ATerm o_45 = NULL;
        o_45 = t;
        d_45 :
        if(!(match_string(o_45, "-S")))
          {
            if(!(match_string(o_45, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, l_4, m_4, n_4);
      PopChoice();
    }
  else
    {
      t = u_14;
      {
        ATerm v_14 = t;
        if((PushChoice() == 0))
          {
            ATerm o_4 (ATerm t)
            {
              ATerm p_45 = NULL;
              p_45 = t;
              e_45 :
              if(!(match_string(p_45, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, o_4, p_4, q_4);
            PopChoice();
          }
        else
          {
            t = v_14;
            {
              ATerm a_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm r_4 (ATerm t)
                  {
                    ATerm q_45 = NULL;
                    q_45 = t;
                    f_45 :
                    if(!(match_string(q_45, "-v")))
                      {
                        if(!(match_string(q_45, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, r_4, s_4, t_4);
                  PopChoice();
                }
              else
                {
                  t = a_15;
                  {
                    ATerm f_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm u_4 (ATerm t)
                        {
                          ATerm r_45 = NULL;
                          r_45 = t;
                          g_45 :
                          if(!(match_string(r_45, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_4 (ATerm t)
                        {
                          ATerm s_45 = NULL;
                          ATerm t_45 = NULL;
                          t_45 = t;
                          if(((s_45 != NULL) && (s_45 != t_45)))
                            _fail(t_45);
                          else
                            s_45 = t_45;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_45));
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_4, v_4, w_4);
                        PopChoice();
                      }
                    else
                      {
                        t = f_15;
                        {
                          ATerm g_15 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm x_4 (ATerm t)
                              {
                                ATerm u_45 = NULL;
                                u_45 = t;
                                i_45 :
                                if(!(match_string(u_45, "-i")))
                                  {
                                    if(!(match_string(u_45, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_4 (ATerm t)
                              {
                                ATerm v_45 = NULL;
                                ATerm w_45 = NULL;
                                w_45 = t;
                                if(((v_45 != NULL) && (v_45 != w_45)))
                                  _fail(w_45);
                                else
                                  v_45 = w_45;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_45));
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
                              t = g_15;
                              {
                                ATerm i_15 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_5 (ATerm t)
                                    {
                                      ATerm x_45 = NULL;
                                      x_45 = t;
                                      k_45 :
                                      if(!(match_string(x_45, "-o")))
                                        {
                                          if(!(match_string(x_45, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm b_5 (ATerm t)
                                    {
                                      ATerm y_45 = NULL;
                                      ATerm z_45 = NULL;
                                      z_45 = t;
                                      if(((y_45 != NULL) && (y_45 != z_45)))
                                        _fail(z_45);
                                      else
                                        y_45 = z_45;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_45));
                                      return(t);
                                    }
                                    ATerm c_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, a_5, b_5, c_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_15;
                                    {
                                      ATerm l_15 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_5 (ATerm t)
                                          {
                                            ATerm a_46 = NULL;
                                            a_46 = t;
                                            m_45 :
                                            if(!(match_string(a_46, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm e_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm f_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, d_5, e_5, f_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_15;
                                          {
                                            ATerm g_6 (ATerm t)
                                            {
                                              ATerm b_46 = NULL;
                                              b_46 = t;
                                              n_45 :
                                              if(!(match_string(b_46, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm h_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm i_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, g_6, h_6, i_6);
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
  ATerm g_46 = NULL;
  g_46 = t;
  t = SSL_table_destroy(not_null(g_46));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  t = SSL_exit(not_null(k_46));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  t = SSL_implode_string(not_null(o_46));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm r_46 (ATerm t)
  {
    ATerm m_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_46);
        PopChoice();
      }
    else
      {
        t = m_15;
        {
          t = Nil_0(t);
          t = t_56(t);
        }
      }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_15 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_15;
      {
        ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
        u_46 = t;
        t_46 :
        if(((ATgetType(u_46) == AT_LIST) && ((ATermList) u_46 != ATempty)))
          {
            v_46 = ATgetFirst((ATermList) u_46);
            w_46 = (ATerm) ATgetNext((ATermList) u_46);
            {
              t = not_null(v_46);
              {
                ATerm j_6 (ATerm t)
                {
                  t = not_null(w_46);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_6);
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
  ATerm c_47 = NULL;
  c_47 = t;
  t = SSL_explode_string(not_null(c_47));
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
ATerm long_description_1 (ATerm t, ATerm p_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm f_47 (ATerm t)
  {
    ATerm s_15 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_15;
        t = Cons_2(t, f_56, f_47);
      }
    return(t);
  }
  t = f_47(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  m_47 = t;
  j_47 :
  if(((ATgetType(m_47) == AT_LIST) && ((ATermList) m_47 != ATempty)))
    {
      k_47 = ATgetFirst((ATermList) m_47);
      l_47 = (ATerm) ATgetNext((ATermList) m_47);
      {
        t = not_null(l_47);
        {
          ATerm k_6 (ATerm t)
          {
            ATerm v_47 = NULL;
            ATerm w_47 = NULL;
            t = g_0(t);
            {
              w_47 = t;
              if(((v_47 != NULL) && (v_47 != w_47)))
                _fail(w_47);
              else
                v_47 = w_47;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(v_47)), not_null(k_47));
            return(t);
          }
          t = reverse_1(t, k_6);
        }
      }
    }
  else
    {
      if(((ATermList) m_47 == ATempty))
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
  ATerm l_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, l_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_36 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_Program_1))
    {
      e_48 = ATgetArgument(d_48, 0);
      {
        ATerm g_48 = NULL;
        t = not_null(e_48);
        {
          t = r_36(t);
          {
            g_48 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_48));
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
  ATerm r_48 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      ATerm s_48 = NULL;
      s_48 = t;
      if(((r_48 != NULL) && (r_48 != s_48)))
        _fail(s_48);
      else
        r_48 = s_48;
      return(t);
    }
    t = Program_1(t, r_7);
    return(t);
  }
  t = option_defined_1(t, m_6);
  {
    ATerm x_7 (ATerm t)
    {
      ATerm t_48 = NULL;
      ATerm u_48 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm y_7 (ATerm t)
        {
          t = not_null(r_48);
          return(t);
        }
        t = short_description_1(t, y_7);
        {
          t = concat_strings_0(t);
          {
            u_48 = t;
            if(((t_48 != NULL) && (t_48 != u_48)))
              _fail(u_48);
            else
              t_48 = u_48;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(t_48)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_7);
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
                ATerm h_8 (ATerm t)
                {
                  ATerm v_48 = NULL;
                  v_48 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_48)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_8);
                {
                  ATerm l_8 (ATerm t)
                  {
                    ATerm x_48 = NULL;
                    ATerm y_48 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm m_8 (ATerm t)
                      {
                        t = not_null(r_48);
                        return(t);
                      }
                      t = long_description_1(t, m_8);
                      {
                        t = concat_strings_0(t);
                        {
                          y_48 = t;
                          if(((x_48 != NULL) && (x_48 != y_48)))
                            _fail(y_48);
                          else
                            x_48 = y_48;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_48)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_8);
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
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym__2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      {
        ATerm t_15;
        t_15 = t;
        t = SSL_printnl(not_null(g_49), not_null(h_49));
        t = t_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_36 (ATerm))
{
  ATerm p_49 = NULL,q_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym_Undefined_1))
    {
      q_49 = ATgetArgument(p_49, 0);
      {
        ATerm s_49 = NULL;
        t = not_null(q_49);
        {
          t = s_36(t);
          {
            s_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_49));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  w_49 :
  if(!(match_cons(x_49, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  z_49 :
  if(match_cons(a_50, sym__2))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      t = SSL_table_get(not_null(b_50), not_null(c_50));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym__3))
    {
      m_50 = ATgetArgument(k_50, 0);
      n_50 = ATgetArgument(k_50, 1);
      o_50 = ATgetArgument(k_50, 2);
      {
        ATerm w_15;
        w_15 = t;
        {
          ATerm s_50 = NULL;
          ATerm t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), not_null(n_50));
          {
            ATerm x_15 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = x_15;
                t = (ATerm) ATempty;
              }
            {
              t_50 = t;
              if(((s_50 != NULL) && (s_50 != t_50)))
                _fail(t_50);
              else
                s_50 = t_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_50), not_null(n_50), (ATerm) ATinsert(CheckATermList(not_null(s_50)), not_null(o_50)));
            t = table_put_0(t);
          }
        }
        t = w_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_47 (ATerm))
{
  ATerm x_50 = NULL;
  ATerm y_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = t_47(t);
    {
      y_50 = t;
      if(((x_50 != NULL) && (x_50 != y_50)))
        _fail(y_50);
      else
        x_50 = y_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(x_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  e_51 = t;
  d_51 :
  if(match_string(e_51, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
        {
          f_51 = ATgetFirst((ATermList) e_51);
          g_51 = (ATerm) ATgetNext((ATermList) e_51);
          {
            ATerm j_51 = NULL;
            ATerm y_15;
            y_15 = t;
            {
              t = not_null(f_51);
              t = d_0(t);
            }
            t = y_15;
            {
              ATerm k_51 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  k_51 = t;
                  if(((j_51 != NULL) && (j_51 != k_51)))
                    _fail(k_51);
                  else
                    j_51 = k_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_51)), not_null(j_51));
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
  ATerm p_8 (ATerm t)
  {
    ATerm p_51 = NULL;
    p_51 = t;
    o_51 :
    if(!(match_string(p_51, "--help")))
      {
        if(!(match_string(p_51, "-h")))
          {
            if(!(match_string(p_51, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_8, x_8, z_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(((ATgetType(s_51) == AT_LIST) && ((ATermList) s_51 != ATempty)))
    {
      t_51 = ATgetFirst((ATermList) s_51);
      u_51 = (ATerm) ATgetNext((ATermList) s_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_51)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_44 (ATerm), ATerm e_44 (ATerm))
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  c_52 :
  if(((ATgetType(d_52) == AT_LIST) && ((ATermList) d_52 != ATempty)))
    {
      e_52 = ATgetFirst((ATermList) d_52);
      f_52 = (ATerm) ATgetNext((ATermList) d_52);
      {
        ATerm i_52 = NULL;
        t = not_null(e_52);
        {
          ATerm k_52 = NULL;
          t = d_44(t);
          {
            i_52 = t;
            {
              t = not_null(f_52);
              {
                t = e_44(t);
                {
                  k_52 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_52)), not_null(i_52));
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
  ATerm q_52 = NULL;
  q_52 = t;
  p_52 :
  if(((ATermList) q_52 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_47 (ATerm))
{
  ATerm b_16;
  b_16 = t;
  {
    ATerm a_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = r_47(t);
      return(t);
    }
    t = try_1(t, a_9);
  }
  t = b_16;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm s_52 = NULL;
      s_52 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_52));
      return(t);
    }
    ATerm d_9 (ATerm t)
    {
      ATerm e_16 = t;
      if((PushChoice() == 0))
        {
          ATerm f_16 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = f_16;
              {
                t = r_47(t);
                t = Cons_2(t, _id, d_9);
              }
            }
          PopChoice();
        }
      else
        {
          t = e_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_9, d_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
    e_53 = t;
    a_53 :
    if(match_cons(e_53, sym__3))
      {
        f_53 = ATgetArgument(e_53, 0);
        g_53 = ATgetArgument(e_53, 1);
        h_53 = ATgetArgument(e_53, 2);
        {
          if(((b_53 != NULL) && (b_53 != f_53)))
            _fail(f_53);
          else
            b_53 = f_53;
          {
            if(((c_53 != NULL) && (c_53 != g_53)))
              _fail(g_53);
            else
              c_53 = g_53;
            {
              if(((d_53 != NULL) && (d_53 != h_53)))
                _fail(h_53);
              else
                d_53 = h_53;
              t = SSL_table_put(not_null(b_53), not_null(c_53), not_null(d_53));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = g_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_47 (ATerm))
{
  ATerm k_53 = NULL;
  ATerm i_16;
  i_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = i_16;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm j_16 = t;
      if((PushChoice() == 0))
        {
          t = q_47(t);
          PopChoice();
        }
      else
        {
          t = j_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm f_9 (ATerm t)
      {
        ATerm k_16 = t;
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
            t = k_16;
            {
              ATerm g_9 (ATerm t)
              {
                ATerm h_9 (ATerm t)
                {
                  ATerm l_53 = NULL;
                  l_53 = t;
                  if(((k_53 != NULL) && (k_53 != l_53)))
                    _fail(l_53);
                  else
                    k_53 = l_53;
                  return(t);
                }
                t = Undefined_1(t, h_9);
                return(t);
              }
              t = option_defined_1(t, g_9);
              {
                ATerm l_16;
                l_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_53)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = l_16;
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
      t = try_1(t, f_9);
      {
        ATerm n_16;
        n_16 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = n_16;
      }
    }
  }
  return(t);
}
ATerm Abox2latex_0 (ATerm t)
{
  ATerm i_54 = NULL;
  ATerm n_54 = NULL,o_54 = NULL;
  ATerm i_9 (ATerm t)
  {
    ATerm o_16 = t;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        PopChoice();
      }
    else
      {
        t = o_16;
        {
          ATerm p_16 = t;
          if((PushChoice() == 0))
            {
              ATerm j_9 (ATerm t)
              {
                ATerm c_54 = NULL;
                c_54 = t;
                n_53 :
                if(!(match_string(c_54, "-t")))
                  _fail(t);
                return(t);
              }
              ATerm k_9 (ATerm t)
              {
                ATerm d_54 = NULL;
                d_54 = t;
                t = (ATerm) ATmakeAppl(sym_LatexTable_1, not_null(d_54));
                return(t);
              }
              t = ArgOption_2(t, j_9, k_9);
              PopChoice();
            }
          else
            {
              t = p_16;
              {
                ATerm l_9 (ATerm t)
                {
                  ATerm f_54 = NULL;
                  f_54 = t;
                  p_53 :
                  if(!(match_string(f_54, "-w")))
                    _fail(t);
                  return(t);
                }
                ATerm m_9 (ATerm t)
                {
                  ATerm g_54 = NULL;
                  g_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Width_1, not_null(g_54));
                  return(t);
                }
                t = ArgOption_2(t, l_9, m_9);
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, i_9);
  {
    i_54 = t;
    {
      ATerm q_16 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          PopChoice();
        }
      else
        {
          t = q_16;
          {
            ATerm v_16 = t;
            if((PushChoice() == 0))
              {
                ATerm w_16;
                w_16 = t;
                {
                  ATerm y_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_9 (ATerm t)
                      {
                        ATerm p_54 = NULL,q_54 = NULL;
                        p_54 = t;
                        t_53 :
                        if(match_cons(p_54, sym_Output_1))
                          {
                            q_54 = ATgetArgument(p_54, 0);
                            {
                              if(((o_54 != NULL) && (o_54 != q_54)))
                                _fail(q_54);
                              else
                                o_54 = q_54;
                              {
                                t = not_null(o_54);
                                t = open_file_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1(t, n_9);
                      PopChoice();
                    }
                  else
                    {
                      t = y_16;
                      {
                        ATerm r_54 = NULL;
                        t = (ATerm) ATmakeAppl(sym_stdout_0);
                        {
                          r_54 = t;
                          if(((o_54 != NULL) && (o_54 != r_54)))
                            _fail(r_54);
                          else
                            o_54 = r_54;
                        }
                      }
                    }
                }
                t = w_16;
                {
                  ATerm a_17;
                  a_17 = t;
                  {
                    ATerm o_9 (ATerm t)
                    {
                      ATerm s_54 = NULL,t_54 = NULL;
                      s_54 = t;
                      w_53 :
                      if(match_cons(s_54, sym_LatexTable_1))
                        {
                          t_54 = ATgetArgument(s_54, 0);
                          t = not_null(t_54);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = collect_1(t, o_9);
                    t = load_tables_0(t);
                  }
                  t = a_17;
                  {
                    t = input_file_0(t);
                    {
                      t = Snd_0(t);
                      {
                        ATerm b_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_17;
                            c_17 = t;
                            {
                              t = not_null(i_54);
                              {
                                ATerm p_9 (ATerm t)
                                {
                                  ATerm y_54 = NULL,z_54 = NULL;
                                  y_54 = t;
                                  z_53 :
                                  if(match_cons(y_54, sym_Width_1))
                                    {
                                      z_54 = ATgetArgument(y_54, 0);
                                      if(((n_54 != NULL) && (n_54 != z_54)))
                                        _fail(z_54);
                                      else
                                        n_54 = z_54;
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = option_defined_1(t, p_9);
                              }
                            }
                            t = c_17;
                            {
                              ATerm q_9 (ATerm t)
                              {
                                t = not_null(n_54);
                                return(t);
                              }
                              t = abox2latex_1(t, q_9);
                            }
                            PopChoice();
                          }
                        else
                          {
                            t = b_17;
                            t = abox2latex_0(t);
                          }
                        {
                          ATerm r_9 (ATerm t)
                          {
                            ATerm s_9 (ATerm t)
                            {
                              t = is_string_0(t);
                              {
                                ATerm d_17;
                                d_17 = t;
                                {
                                  ATerm x_9 (ATerm t)
                                  {
                                    t = not_null(o_54);
                                    return(t);
                                  }
                                  ATerm y_9 (ATerm t)
                                  {
                                    ATerm a_55 = NULL;
                                    a_55 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(a_55));
                                    return(t);
                                  }
                                  t = split_2(t, x_9, y_9);
                                  t = print_0(t);
                                }
                                t = d_17;
                              }
                              return(t);
                            }
                            t = try_1(t, s_9);
                            return(t);
                          }
                          t = topdown_1(t, r_9);
                          t = report_success_0(t);
                        }
                      }
                    }
                  }
                }
                PopChoice();
              }
            else
              {
                t = v_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox2latex_0(t);
  return(t);
}

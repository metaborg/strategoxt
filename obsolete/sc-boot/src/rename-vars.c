#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_64 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_41 (ATerm), ATerm l_41 (ATerm), ATerm m_41 (ATerm));
ATerm Let_2 (ATerm, ATerm i_41 (ATerm), ATerm j_41 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_41 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_64 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_40 (ATerm));
ATerm Scope_2 (ATerm, ATerm k_42 (ATerm), ATerm l_42 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm crush_3 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_48 (ATerm), ATerm f_48 (ATerm));
ATerm for_3 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm));
ATerm HdMember_1 (ATerm, ATerm u_53 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_40 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm));
ATerm zip_1 (ATerm, ATerm i_56 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm o_51 (ATerm), ATerm p_51 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm c_51 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm k_50 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm p_50 (ATerm));
ATerm rename_4 (ATerm, ATerm q_51 (ATerm, ATerm (ATerm)), ATerm r_51 (ATerm), ATerm s_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_51 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm p_42 (ATerm), ATerm q_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_47 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_47 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_44 (ATerm));
ATerm map_1 (ATerm, ATerm v_57 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_47 (ATerm), ATerm o_47 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_47 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_44 (ATerm));
ATerm Program_1 (ATerm, ATerm x_37 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_37 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_45 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_60 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_44 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_42 (ATerm), ATerm u_42 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_46 (ATerm), ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_46 (ATerm), ATerm v_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_46 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  r_1 :
  if(match_cons(s_1, sym_Cons_2))
    {
      t_1 = ATgetArgument(s_1, 0);
      u_1 = ATgetArgument(s_1, 1);
      t = not_null(t_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm u_6 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, q_64);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
            i_2 = t;
            z_1 :
            if(match_cons(i_2, sym_TCons_2))
              {
                j_2 = ATgetArgument(i_2, 0);
                n_2 = ATgetArgument(i_2, 1);
                a_2 :
                if(match_cons(j_2, sym_SDef_3))
                  {
                    k_2 = ATgetArgument(j_2, 0);
                    l_2 = ATgetArgument(j_2, 1);
                    m_2 = ATgetArgument(j_2, 2);
                    b_2 :
                    if(match_cons(n_2, sym_TCons_2))
                      {
                        o_2 = ATgetArgument(n_2, 0);
                        p_2 = ATgetArgument(n_2, 1);
                        c_2 :
                        if(match_cons(p_2, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_2), not_null(l_2), not_null(m_2));
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
          t = zip_1(t, b_0);
        }
        return(t);
      }
      t = Let_2(t, a_0, _id);
      PopChoice();
    }
  else
    {
      t = u_6;
      {
        ATerm v_6 = t;
        if(PushChoice()==0)
          {
            ATerm c_0 (ATerm t)
            {
              t = split_2(t, _id, q_64);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
                  t_2 = t;
                  e_2 :
                  if(match_cons(t_2, sym_TCons_2))
                    {
                      u_2 = ATgetArgument(t_2, 0);
                      x_2 = ATgetArgument(t_2, 1);
                      f_2 :
                      if(match_cons(u_2, sym_VarDec_2))
                        {
                          v_2 = ATgetArgument(u_2, 0);
                          w_2 = ATgetArgument(u_2, 1);
                          g_2 :
                          if(match_cons(x_2, sym_TCons_2))
                            {
                              y_2 = ATgetArgument(x_2, 0);
                              z_2 = ATgetArgument(x_2, 1);
                              h_2 :
                              if(match_cons(z_2, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_2), not_null(w_2));
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
                t = zip_1(t, j_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, c_0, _id);
            PopChoice();
          }
        else
          {
            t = v_6;
            {
              ATerm k_0 (ATerm t)
              {
                t = q_64(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, k_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym_Rec_2))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      {
        ATerm o_3 = NULL;
        t = not_null(k_3);
        {
          ATerm q_3 = NULL;
          t = g_41(t);
          o_3 = t;
          t = not_null(l_3);
          t = h_41(t);
          q_3 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(o_3), not_null(q_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm k_41 (ATerm), ATerm l_41 (ATerm), ATerm m_41 (ATerm))
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym_SDef_3))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      d_4 = ATgetArgument(a_4, 2);
      {
        ATerm h_4 = NULL;
        t = not_null(b_4);
        {
          ATerm j_4 = NULL;
          t = k_41(t);
          h_4 = t;
          t = not_null(c_4);
          {
            ATerm l_4 = NULL;
            t = l_41(t);
            j_4 = t;
            t = not_null(d_4);
            t = m_41(t);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_4), not_null(j_4), not_null(l_4));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm i_41 (ATerm), ATerm j_41 (ATerm))
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym_Let_2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm a_5 = NULL;
        t = not_null(w_4);
        {
          ATerm c_5 = NULL;
          t = i_41(t);
          a_5 = t;
          t = not_null(x_4);
          t = j_41(t);
          c_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_5), not_null(c_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm w_6 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, r_64, r_64);
      PopChoice();
    }
  else
    {
      t = w_6;
      {
        ATerm x_6 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, t_64, t_64, r_64);
            PopChoice();
          }
        else
          {
            t = x_6;
            t = Rec_2(t, t_64, r_64);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym_Rec_2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_5), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym_SDef_3))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      w_5 = ATgetArgument(t_5, 2);
      t = not_null(v_5);
      {
        ATerm l_0 (ATerm t)
        {
          ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
          a_6 = t;
          r_5 :
          if(match_cons(a_6, sym_VarDec_2))
            {
              b_6 = ATgetArgument(a_6, 0);
              c_6 = ATgetArgument(a_6, 1);
              t = not_null(b_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, l_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_Let_2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      t = not_null(l_6);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
          p_6 = t;
          i_6 :
          if(match_cons(p_6, sym_SDef_3))
            {
              q_6 = ATgetArgument(p_6, 0);
              r_6 = ATgetArgument(p_6, 1);
              s_6 = ATgetArgument(p_6, 2);
              t = not_null(q_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, m_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_SVar_1))
    {
      c_7 = ATgetArgument(b_7, 0);
      {
        ATerm e_7 = NULL;
        t = not_null(c_7);
        t = f_41(t);
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(e_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm y_6 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = y_6;
        {
          ATerm z_6 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = z_6;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, n_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_64 (ATerm))
{
  t = Scope_2(t, m_64, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_40 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_DynamicRules_1))
    {
      m_7 = ATgetArgument(l_7, 0);
      {
        ATerm o_7 = NULL;
        t = not_null(m_7);
        t = e_40(t);
        o_7 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(o_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_42 (ATerm), ATerm l_42 (ATerm))
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Scope_2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      {
        ATerm b_8 = NULL;
        t = not_null(x_7);
        {
          ATerm d_8 = NULL;
          t = k_42(t);
          b_8 = t;
          t = not_null(y_7);
          t = l_42(t);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_8), not_null(d_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm d_7 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, p_64, n_64);
      PopChoice();
    }
  else
    {
      t = d_7;
      t = DynamicRules_1(t, n_64);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_DynamicRules_1))
    {
      l_8 = ATgetArgument(k_8, 0);
      t = not_null(l_8);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Var_1))
    {
      r_8 = ATgetArgument(q_8, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  y_8 = t;
  v_8 :
  if(match_cons(y_8, sym_TCons_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      w_8 :
      if(match_cons(a_9, sym_TCons_2))
        {
          b_9 = ATgetArgument(a_9, 0);
          c_9 = ATgetArgument(a_9, 1);
          x_8 :
          if(match_cons(c_9, sym_TNil_0))
            {
              t = not_null(z_8);
              {
                ATerm q_9 (ATerm t)
                {
                  ATerm f_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(b_9);
                      PopChoice();
                    }
                  else
                    {
                      t = f_7;
                      {
                        ATerm g_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm o_0 (ATerm t)
                            {
                              t = not_null(b_9);
                              return(t);
                            }
                            t = HdMember_1(t, o_0);
                            t = q_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_7;
                            t = Cons_2(t, _id, q_9);
                          }
                      }
                    }
                  return(t);
                }
                t = q_9(t);
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
ATerm foldr_3 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm h_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_52(t);
      PopChoice();
    }
  else
    {
      t = h_7;
      {
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
        v_9 = t;
        u_9 :
        if(match_cons(v_9, sym_Cons_2))
          {
            w_9 = ATgetArgument(v_9, 0);
            x_9 = ATgetArgument(v_9, 1);
            {
              ATerm a_10 = NULL,c_10 = NULL;
              ATerm i_7;
              i_7 = t;
              {
                ATerm b_10 = NULL;
                t = not_null(w_9);
                t = r_52(t);
                b_10 = t;
                if(a_10 != NULL && a_10 != b_10)
                  _fail(b_10);
                else
                  a_10 = b_10;
              }
              t = i_7;
              {
                ATerm d_10 = NULL;
                t = not_null(x_9);
                t = foldr_3(t, p_52, q_52, r_52);
                d_10 = t;
                if(c_10 != NULL && c_10 != d_10)
                  _fail(d_10);
                else
                  c_10 = d_10;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_10), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_10), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = q_52(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm u_10 = NULL;
  ATerm w_10 = NULL;
  u_10 = t;
  {
    ATerm x_10 = NULL;
    ATerm z_10 = NULL,a_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
    t = not_null(u_10);
    x_10 = t;
    t = SSL_explode_term(not_null(x_10));
    z_10 = t;
    k_10 :
    if(match_cons(z_10, sym_TCons_2))
      {
        a_11 = ATgetArgument(z_10, 0);
        e_11 = ATgetArgument(z_10, 1);
        s_10 :
        if(match_cons(e_11, sym_TCons_2))
          {
            f_11 = ATgetArgument(e_11, 0);
            g_11 = ATgetArgument(e_11, 1);
            t_10 :
            if(match_cons(g_11, sym_TNil_0))
              {
                if(w_10 != NULL && w_10 != f_11)
                  _fail(f_11);
                else
                  w_10 = f_11;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(w_10);
    t = foldr_3(t, f_54, g_54, h_54);
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  p_11 = t;
  l_11 :
  if(match_cons(p_11, sym_TCons_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      r_11 = ATgetArgument(p_11, 1);
      m_11 :
      if(match_cons(r_11, sym_TCons_2))
        {
          s_11 = ATgetArgument(r_11, 0);
          v_11 = ATgetArgument(r_11, 1);
          n_11 :
          if(match_cons(s_11, sym_Cons_2))
            {
              t_11 = ATgetArgument(s_11, 0);
              u_11 = ATgetArgument(s_11, 1);
              o_11 :
              if(match_cons(v_11, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_11), not_null(q_11)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_11), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  q_12 = t;
  m_12 :
  if(match_cons(q_12, sym_Cons_2))
    {
      r_12 = ATgetArgument(q_12, 0);
      w_12 = ATgetArgument(q_12, 1);
      n_12 :
      if(match_cons(r_12, sym_TCons_2))
        {
          s_12 = ATgetArgument(r_12, 0);
          t_12 = ATgetArgument(r_12, 1);
          o_12 :
          if(match_cons(t_12, sym_TCons_2))
            {
              u_12 = ATgetArgument(t_12, 0);
              v_12 = ATgetArgument(t_12, 1);
              p_12 :
              if(match_cons(v_12, sym_TNil_0))
                {
                  ATerm a_13 = NULL,b_13 = NULL,s_13 = NULL,d_14 = NULL;
                  ATerm j_7;
                  j_7 = t;
                  {
                    ATerm c_13 = NULL;
                    ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
                    t = not_null(u_12);
                    c_13 = t;
                    t = SSL_explode_term(not_null(c_13));
                    e_13 = t;
                    d_12 :
                    if(match_cons(e_13, sym_TCons_2))
                      {
                        f_13 = ATgetArgument(e_13, 0);
                        g_13 = ATgetArgument(e_13, 1);
                        e_12 :
                        if(match_cons(g_13, sym_TCons_2))
                          {
                            h_13 = ATgetArgument(g_13, 0);
                            i_13 = ATgetArgument(g_13, 1);
                            f_12 :
                            if(match_cons(i_13, sym_TNil_0))
                              {
                                if(a_13 != NULL && a_13 != f_13)
                                  _fail(f_13);
                                else
                                  a_13 = f_13;
                                if(b_13 != NULL && b_13 != h_13)
                                  _fail(h_13);
                                else
                                  b_13 = h_13;
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
                  t = j_7;
                  {
                    ATerm n_7;
                    n_7 = t;
                    {
                      ATerm t_13 = NULL;
                      ATerm v_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
                      t = not_null(s_12);
                      t_13 = t;
                      t = SSL_explode_term(not_null(t_13));
                      v_13 = t;
                      i_12 :
                      if(match_cons(v_13, sym_TCons_2))
                        {
                          z_13 = ATgetArgument(v_13, 0);
                          a_14 = ATgetArgument(v_13, 1);
                          j_12 :
                          if(match_cons(a_14, sym_TCons_2))
                            {
                              b_14 = ATgetArgument(a_14, 0);
                              c_14 = ATgetArgument(a_14, 1);
                              k_12 :
                              if(match_cons(c_14, sym_TNil_0))
                                {
                                  if(a_13 != NULL && a_13 != z_13)
                                    _fail(z_13);
                                  else
                                    a_13 = z_13;
                                  if(s_13 != NULL && s_13 != b_14)
                                    _fail(b_14);
                                  else
                                    s_13 = b_14;
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
                    t = n_7;
                    {
                      ATerm e_14 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_13), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      e_14 = t;
                      if(d_14 != NULL && d_14 != e_14)
                        _fail(e_14);
                      else
                        d_14 = e_14;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  q_14 = t;
  m_14 :
  if(match_cons(q_14, sym_Cons_2))
    {
      r_14 = ATgetArgument(q_14, 0);
      w_14 = ATgetArgument(q_14, 1);
      n_14 :
      if(match_cons(r_14, sym_TCons_2))
        {
          s_14 = ATgetArgument(r_14, 0);
          t_14 = ATgetArgument(r_14, 1);
          o_14 :
          if(match_cons(t_14, sym_TCons_2))
            {
              u_14 = ATgetArgument(t_14, 0);
              v_14 = ATgetArgument(t_14, 1);
              p_14 :
              if(match_cons(v_14, sym_TNil_0))
                {
                  ATerm y_14 = NULL;
                  if(s_14 != NULL && s_14 != u_14)
                    _fail(u_14);
                  else
                    s_14 = u_14;
                  if(y_14 != NULL && y_14 != w_14)
                    _fail(w_14);
                  else
                    y_14 = w_14;
                  t = not_null(y_14);
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
ATerm while_not_2 (ATerm t, ATerm e_48 (ATerm), ATerm f_48 (ATerm))
{
  ATerm a_15 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = e_48(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        t = f_48(t);
        t = a_15(t);
      }
    return(t);
  }
  t = a_15(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm))
{
  t = h_48(t);
  t = while_not_2(t, i_48, j_48);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_Cons_2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      t = u_53(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm j_15 = NULL;
          j_15 = t;
          if(f_15 != NULL && f_15 != j_15)
            _fail(j_15);
          else
            f_15 = j_15;
          return(t);
        }
        t = fetch_1(t, p_0);
      }
      t = not_null(g_15);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm q_7 = t;
  if(PushChoice()==0)
    {
      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
      r_15 = t;
      n_15 :
      if(match_cons(r_15, sym_TCons_2))
        {
          s_15 = ATgetArgument(r_15, 0);
          t_15 = ATgetArgument(r_15, 1);
          o_15 :
          if(match_cons(t_15, sym_TCons_2))
            {
              u_15 = ATgetArgument(t_15, 0);
              v_15 = ATgetArgument(t_15, 1);
              p_15 :
              if(match_cons(v_15, sym_TNil_0))
                {
                  t = not_null(s_15);
                  {
                    ATerm b_16 (ATerm t)
                    {
                      ATerm r_7 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = r_7;
                          {
                            ATerm s_7 = t;
                            if(PushChoice()==0)
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  t = not_null(u_15);
                                  return(t);
                                }
                                t = HdMember_1(t, q_0);
                                t = b_16(t);
                                PopChoice();
                              }
                            else
                              {
                                t = s_7;
                                t = Cons_2(t, _id, b_16);
                              }
                          }
                        }
                      return(t);
                    }
                    t = b_16(t);
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
      PopChoice();
    }
  else
    {
      t = q_7;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm y_15 = NULL;
          y_15 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_15), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, u_0);
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          ATerm t_7 = t;
          if(PushChoice()==0)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm u_7 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = u_7;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, w_0, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, v_0);
              PopChoice();
            }
          else
            {
              t = t_7;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_0, s_0, t_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_16 (ATerm t)
  {
    ATerm z_7 = t;
    if(PushChoice()==0)
      {
        t = p_49(t);
        PopChoice();
      }
    else
      {
        t = z_7;
        {
          ATerm a_8 = t;
          if(PushChoice()==0)
            {
              ATerm e_16 = NULL;
              ATerm c_8;
              c_8 = t;
              {
                ATerm f_16 = NULL;
                t = q_49(t);
                f_16 = t;
                if(e_16 != NULL && e_16 != f_16)
                  _fail(f_16);
                else
                  e_16 = f_16;
              }
              t = c_8;
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(e_16);
                    return(t);
                  }
                  t = split_2(t, g_16, z_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = r_49(t, x_0, g_16, y_0);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, a_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = a_8;
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, b_1, union_0, g_16);
              }
            }
        }
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = e_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, c_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,w_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  k_16 :
  if(match_cons(w_16, sym_LRule_1))
    {
      y_16 = ATgetArgument(w_16, 0);
      n_16 :
      if(match_cons(y_16, sym_Rule_3))
        {
          o_16 = ATgetArgument(y_16, 0);
          p_16 = ATgetArgument(y_16, 1);
          q_16 = ATgetArgument(y_16, 2);
          t = not_null(o_16);
          t = tvars_0(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(w_16, sym_Scope_2))
        {
          y_16 = ATgetArgument(w_16, 0);
          z_16 = ATgetArgument(w_16, 1);
          t = not_null(y_16);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_40 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_Var_1))
    {
      v_17 = ATgetArgument(u_17, 0);
      {
        ATerm x_17 = NULL;
        t = not_null(v_17);
        t = r_40(t);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  i_18 = t;
  e_18 :
  if(match_cons(i_18, sym_TCons_2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      f_18 :
      if(match_cons(k_18, sym_TCons_2))
        {
          l_18 = ATgetArgument(k_18, 0);
          m_18 = ATgetArgument(k_18, 1);
          g_18 :
          if(match_cons(m_18, sym_TCons_2))
            {
              n_18 = ATgetArgument(m_18, 0);
              o_18 = ATgetArgument(m_18, 1);
              h_18 :
              if(match_cons(o_18, sym_TNil_0))
                {
                  t = not_null(j_18);
                  {
                    ATerm d_1 (ATerm t)
                    {
                      ATerm s_18 = NULL;
                      s_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = i_51(t);
                      return(t);
                    }
                    ATerm e_1 (ATerm t)
                    {
                      ATerm u_18 = NULL;
                      u_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = i_51(t);
                      return(t);
                    }
                    t = j_51(t, d_1, e_1, _id);
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
ATerm conc_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  d_19 = t;
  a_19 :
  if(match_cons(d_19, sym_TCons_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      b_19 :
      if(match_cons(f_19, sym_TCons_2))
        {
          g_19 = ATgetArgument(f_19, 0);
          h_19 = ATgetArgument(f_19, 1);
          c_19 :
          if(match_cons(h_19, sym_TNil_0))
            {
              t = not_null(e_19);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(g_19);
                  return(t);
                }
                t = at_end_1(t, f_1);
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
ATerm Zip3_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  p_19 = t;
  m_19 :
  if(match_cons(p_19, sym_TCons_2))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      n_19 :
      if(match_cons(r_19, sym_TCons_2))
        {
          s_19 = ATgetArgument(r_19, 0);
          t_19 = ATgetArgument(r_19, 1);
          o_19 :
          if(match_cons(t_19, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_19), not_null(s_19));
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
ATerm Zip2_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  d_20 = t;
  y_19 :
  if(match_cons(d_20, sym_TCons_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      h_20 = ATgetArgument(d_20, 1);
      z_19 :
      if(match_cons(e_20, sym_Cons_2))
        {
          f_20 = ATgetArgument(e_20, 0);
          g_20 = ATgetArgument(e_20, 1);
          a_20 :
          if(match_cons(h_20, sym_TCons_2))
            {
              i_20 = ATgetArgument(h_20, 0);
              l_20 = ATgetArgument(h_20, 1);
              b_20 :
              if(match_cons(i_20, sym_Cons_2))
                {
                  j_20 = ATgetArgument(i_20, 0);
                  k_20 = ATgetArgument(i_20, 1);
                  c_20 :
                  if(match_cons(l_20, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_20), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  x_20 = t;
  s_20 :
  if(match_cons(x_20, sym_TCons_2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      t_20 :
      if(match_cons(y_20, sym_Nil_0))
        {
          u_20 :
          if(match_cons(z_20, sym_TCons_2))
            {
              a_21 = ATgetArgument(z_20, 0);
              b_21 = ATgetArgument(z_20, 1);
              v_20 :
              if(match_cons(a_21, sym_Nil_0))
                {
                  w_20 :
                  if(match_cons(b_21, sym_TNil_0))
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
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm f_56 (ATerm), ATerm g_56 (ATerm))
{
  ATerm d_21 (ATerm t)
  {
    ATerm f_8 = t;
    if(PushChoice()==0)
      {
        t = d_56(t);
        PopChoice();
      }
    else
      {
        t = f_8;
        t = e_56(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = TCons_2(t, d_21, TNil_0);
            return(t);
          }
          t = TCons_2(t, g_56, g_1);
          t = f_56(t);
        }
      }
    return(t);
  }
  t = d_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_56 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_56);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm o_51 (ATerm), ATerm p_51 (ATerm, ATerm (ATerm)))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  r_21 = t;
  o_21 :
  if(match_cons(r_21, sym_TCons_2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      p_21 :
      if(match_cons(t_21, sym_TCons_2))
        {
          u_21 = ATgetArgument(t_21, 0);
          v_21 = ATgetArgument(t_21, 1);
          q_21 :
          if(match_cons(v_21, sym_TNil_0))
            {
              ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,i_22 = NULL;
              ATerm g_8;
              g_8 = t;
              {
                ATerm d_22 = NULL;
                t = not_null(s_21);
                {
                  ATerm e_22 = NULL;
                  t = o_51(t);
                  d_22 = t;
                  if(a_22 != NULL && a_22 != d_22)
                    _fail(d_22);
                  else
                    a_22 = d_22;
                  {
                    ATerm f_22 = NULL,h_22 = NULL;
                    t = map_1(t, new_0);
                    e_22 = t;
                    if(b_22 != NULL && b_22 != e_22)
                      _fail(e_22);
                    else
                      b_22 = e_22;
                    {
                      ATerm g_22 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      g_22 = t;
                      if(f_22 != NULL && f_22 != g_22)
                        _fail(g_22);
                      else
                        f_22 = g_22;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      h_22 = t;
                      if(c_22 != NULL && c_22 != h_22)
                        _fail(h_22);
                      else
                        c_22 = h_22;
                    }
                  }
                }
              }
              t = g_8;
              {
                ATerm o_22 = NULL;
                t = not_null(s_21);
                {
                  ATerm h_1 (ATerm t)
                  {
                    t = not_null(b_22);
                    return(t);
                  }
                  t = p_51(t, h_1);
                  o_22 = t;
                  if(i_22 != NULL && i_22 != o_22)
                    _fail(o_22);
                  else
                    i_22 = o_22;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm Look2_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  g_23 = t;
  c_23 :
  if(match_cons(g_23, sym_TCons_2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      d_23 :
      if(match_cons(i_23, sym_TCons_2))
        {
          j_23 = ATgetArgument(i_23, 0);
          m_23 = ATgetArgument(i_23, 1);
          e_23 :
          if(match_cons(j_23, sym_Cons_2))
            {
              k_23 = ATgetArgument(j_23, 0);
              l_23 = ATgetArgument(j_23, 1);
              f_23 :
              if(match_cons(m_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Look1_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,o_24 = NULL;
  a_24 = t;
  t_23 :
  if(match_cons(a_24, sym_TCons_2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      u_23 :
      if(match_cons(c_24, sym_TCons_2))
        {
          d_24 = ATgetArgument(c_24, 0);
          o_24 = ATgetArgument(c_24, 1);
          v_23 :
          if(match_cons(d_24, sym_Cons_2))
            {
              e_24 = ATgetArgument(d_24, 0);
              j_24 = ATgetArgument(d_24, 1);
              w_23 :
              if(match_cons(e_24, sym_TCons_2))
                {
                  f_24 = ATgetArgument(e_24, 0);
                  g_24 = ATgetArgument(e_24, 1);
                  x_23 :
                  if(match_cons(g_24, sym_TCons_2))
                    {
                      h_24 = ATgetArgument(g_24, 0);
                      i_24 = ATgetArgument(g_24, 1);
                      y_23 :
                      if(match_cons(i_24, sym_TNil_0))
                        {
                          z_23 :
                          if(match_cons(o_24, sym_TNil_0))
                            {
                              ATerm q_24 = NULL;
                              if(b_24 != NULL && b_24 != f_24)
                                _fail(f_24);
                              else
                                b_24 = f_24;
                              if(q_24 != NULL && q_24 != h_24)
                                _fail(h_24);
                              else
                                q_24 = h_24;
                              t = not_null(q_24);
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
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm h_8 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = h_8;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm c_51 (ATerm, ATerm (ATerm)))
{
  ATerm x_24 = NULL,y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  x_24 = t;
  u_24 :
  if(match_cons(x_24, sym_TCons_2))
    {
      y_24 = ATgetArgument(x_24, 0);
      b_25 = ATgetArgument(x_24, 1);
      v_24 :
      if(match_cons(b_25, sym_TCons_2))
        {
          c_25 = ATgetArgument(b_25, 0);
          d_25 = ATgetArgument(b_25, 1);
          w_24 :
          if(match_cons(d_25, sym_TNil_0))
            {
              t = not_null(y_24);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = not_null(c_25);
                    return(t);
                  }
                  t = split_2(t, _id, j_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = c_51(t, i_1);
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
ATerm all_dist_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  r_25 = t;
  o_25 :
  if(match_cons(r_25, sym_TCons_2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      p_25 :
      if(match_cons(t_25, sym_TCons_2))
        {
          u_25 = ATgetArgument(t_25, 0);
          v_25 = ATgetArgument(t_25, 1);
          q_25 :
          if(match_cons(v_25, sym_TNil_0))
            {
              t = not_null(s_25);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm y_25 = NULL;
                  y_25 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = k_50(t);
                  return(t);
                }
                t = _all(t, k_1);
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
ATerm env_alltd_1 (ATerm t, ATerm p_50 (ATerm))
{
  ATerm c_26 (ATerm t)
  {
    ATerm i_8 = t;
    if(PushChoice()==0)
      {
        t = p_50(t);
        PopChoice();
      }
    else
      {
        t = i_8;
        t = all_dist_1(t, c_26);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm q_51 (ATerm, ATerm (ATerm)), ATerm r_51 (ATerm), ATerm s_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_51 (ATerm, ATerm (ATerm)))
{
  ATerm e_26 = NULL;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm h_26 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_8 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, q_51);
            PopChoice();
          }
        else
          {
            t = m_8;
            t = RnBinding_2(t, r_51, t_51);
            t = DistBinding_2(t, h_26, s_51);
          }
        return(t);
      }
      t = env_alltd_1(t, l_1);
      return(t);
    }
    t = h_26(t);
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  i_26 :
  if(!(match_cons(j_26, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm p_42 (ATerm), ATerm q_42 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  n_26 :
  if(match_cons(s_26, sym_TCons_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm x_26 = NULL;
        t = not_null(t_26);
        {
          ATerm b_27 = NULL;
          t = p_42(t);
          x_26 = t;
          t = not_null(u_26);
          t = q_42(t);
          b_27 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_26), not_null(b_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_27 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm j_27 = NULL,k_27 = NULL;
      j_27 = t;
      h_27 :
      if(match_cons(j_27, sym_Program_1))
        {
          k_27 = ATgetArgument(j_27, 0);
          if(i_27 != NULL && i_27 != k_27)
            _fail(k_27);
          else
            i_27 = k_27;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, m_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = n_8;
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
  ATerm r_27 = NULL,s_27 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      ATerm o_8 = t;
      if(PushChoice()==0)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm t_27 = NULL;
            t_27 = t;
            m_27 :
            if(!(match_cons(t_27, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_1);
          PopChoice();
          _fail(t);
        }
      else
        t = o_8;
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, o_1, p_1);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm u_27 = NULL,v_27 = NULL;
          u_27 = t;
          o_27 :
          if(match_cons(u_27, sym_Runtime_1))
            {
              v_27 = ATgetArgument(u_27, 0);
              if(s_27 != NULL && s_27 != v_27)
                _fail(v_27);
              else
                s_27 = v_27;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_1);
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, v_1, w_1);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm w_27 = NULL,x_27 = NULL;
            w_27 = t;
            q_27 :
            if(match_cons(w_27, sym_Program_1))
              {
                x_27 = ATgetArgument(w_27, 0);
                if(r_27 != NULL && r_27 != x_27)
                  _fail(x_27);
                else
                  r_27 = x_27;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_2);
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, y_1, d_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, n_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  e_28 = t;
  b_28 :
  if(match_cons(e_28, sym_TCons_2))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      c_28 :
      if(match_cons(g_28, sym_TCons_2))
        {
          h_28 = ATgetArgument(g_28, 0);
          i_28 = ATgetArgument(g_28, 1);
          d_28 :
          if(match_cons(i_28, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_28), not_null(h_28));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  q_28 = t;
  n_28 :
  if(match_cons(q_28, sym_TCons_2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      o_28 :
      if(match_cons(s_28, sym_TCons_2))
        {
          t_28 = ATgetArgument(s_28, 0);
          u_28 = ATgetArgument(s_28, 1);
          p_28 :
          if(match_cons(u_28, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_28), not_null(t_28));
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
  ATerm c_29 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm t_8 = t;
      if(PushChoice()==0)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm d_29 = NULL,e_29 = NULL;
            d_29 = t;
            z_28 :
            if(match_cons(d_29, sym_Output_1))
              {
                e_29 = ATgetArgument(d_29, 0);
                if(c_29 != NULL && c_29 != e_29)
                  _fail(e_29);
                else
                  c_29 = e_29;
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
          t = t_8;
          {
            ATerm f_29 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_29 = t;
            if(c_29 != NULL && c_29 != f_29)
              _fail(f_29);
            else
              c_29 = f_29;
          }
        }
      return(t);
    }
    ATerm s_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, r_2, s_2);
  }
  t = s_8;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          t = not_null(c_29);
          return(t);
        }
        t = split_2(t, d_3, _id);
        return(t);
      }
      t = TCons_2(t, c_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_3);
    {
      ATerm u_8 = t;
      if(PushChoice()==0)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm g_3 (ATerm t)
            {
              ATerm g_29 = NULL;
              g_29 = t;
              b_29 :
              if(!(match_cons(g_29, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, g_3);
            return(t);
          }
          ATerm f_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_3, f_3);
          PopChoice();
        }
      else
        {
          t = u_8;
          {
            ATerm h_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, h_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm o_29 = NULL,q_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  ATerm d_9;
  d_9 = t;
  t = dtime_0(t);
  t = d_9;
  t = l_47(t);
  {
    ATerm e_9;
    e_9 = t;
    {
      ATerm p_29 = NULL;
      t = dtime_0(t);
      p_29 = t;
      if(o_29 != NULL && o_29 != p_29)
        _fail(p_29);
      else
        o_29 = p_29;
    }
    t = e_9;
    q_29 = t;
    l_29 :
    if(match_cons(q_29, sym_TCons_2))
      {
        t_29 = ATgetArgument(q_29, 0);
        u_29 = ATgetArgument(q_29, 1);
        m_29 :
        if(match_cons(u_29, sym_TCons_2))
          {
            v_29 = ATgetArgument(u_29, 0);
            w_29 = ATgetArgument(u_29, 1);
            n_29 :
            if(match_cons(w_29, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_29)), not_null(t_29)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_30 = NULL;
  c_30 = t;
  t = SSL_ReadFromFile(not_null(c_30));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm r_30 = NULL;
  ATerm t_30 = NULL,v_30 = NULL;
  r_30 = t;
  {
    ATerm f_9;
    f_9 = t;
    {
      ATerm u_30 = NULL;
      t = not_null(r_30);
      t = j_59(t);
      u_30 = t;
      if(t_30 != NULL && t_30 != u_30)
        _fail(u_30);
      else
        t_30 = u_30;
    }
    t = f_9;
    {
      ATerm w_30 = NULL;
      t = not_null(r_30);
      t = k_59(t);
      w_30 = t;
      if(v_30 != NULL && v_30 != w_30)
        _fail(w_30);
      else
        v_30 = w_30;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_30), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm e_31 = NULL,f_31 = NULL;
          e_31 = t;
          b_31 :
          if(match_cons(e_31, sym_Input_1))
            {
              f_31 = ATgetArgument(e_31, 0);
              if(d_31 != NULL && d_31 != f_31)
                _fail(f_31);
              else
                d_31 = f_31;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_3);
        PopChoice();
      }
    else
      {
        t = h_9;
        {
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          g_31 = t;
          if(d_31 != NULL && d_31 != g_31)
            _fail(g_31);
          else
            d_31 = g_31;
        }
      }
  }
  t = g_9;
  {
    ATerm n_3 (ATerm t)
    {
      t = not_null(d_31);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  k_31 :
  if(!(match_cons(l_31, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_47 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm i_9 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = i_9;
        {
          ATerm j_9 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = j_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_3);
  t = k_47(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  t = SSL_table_create(not_null(n_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  {
    ATerm k_9;
    k_9 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_31), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = k_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  x_31 :
  if(match_string(z_31, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(z_31, sym_Cons_2))
        {
          a_32 = ATgetArgument(z_31, 0);
          b_32 = ATgetArgument(z_31, 1);
          y_31 :
          if(match_cons(b_32, sym_Cons_2))
            {
              c_32 = ATgetArgument(b_32, 0);
              d_32 = ATgetArgument(b_32, 1);
              {
                ATerm h_32 = NULL;
                ATerm l_9;
                l_9 = t;
                t = not_null(a_32);
                t = g_0(t);
                t = l_9;
                {
                  ATerm i_32 = NULL;
                  t = not_null(c_32);
                  t = h_0(t);
                  i_32 = t;
                  if(h_32 != NULL && h_32 != i_32)
                    _fail(i_32);
                  else
                    h_32 = i_32;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_32), not_null(d_32));
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
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      ATerm r_3 (ATerm t)
      {
        ATerm v_33 = NULL;
        v_33 = t;
        n_32 :
        if(!(match_string(v_33, "-S")))
          {
            if(!(match_string(v_33, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, r_3, s_3, t_3);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm w_33 = NULL;
              w_33 = t;
              o_32 :
              if(!(match_string(w_33, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, u_3, v_3, w_3);
            PopChoice();
          }
        else
          {
            t = n_9;
            {
              ATerm o_9 = t;
              if(PushChoice()==0)
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm x_33 = NULL;
                    x_33 = t;
                    p_32 :
                    if(!(match_string(x_33, "-v")))
                      {
                        if(!(match_string(x_33, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm e_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, x_3, y_3, e_4);
                  PopChoice();
                }
              else
                {
                  t = o_9;
                  {
                    ATerm p_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm f_4 (ATerm t)
                        {
                          ATerm y_33 = NULL;
                          y_33 = t;
                          n_33 :
                          if(!(match_string(y_33, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          ATerm z_33 = NULL;
                          ATerm a_34 = NULL;
                          a_34 = t;
                          if(z_33 != NULL && z_33 != a_34)
                            _fail(a_34);
                          else
                            z_33 = a_34;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_33));
                          return(t);
                        }
                        ATerm i_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, f_4, g_4, i_4);
                        PopChoice();
                      }
                    else
                      {
                        t = p_9;
                        {
                          ATerm r_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm k_4 (ATerm t)
                              {
                                ATerm b_34 = NULL;
                                b_34 = t;
                                p_33 :
                                if(!(match_string(b_34, "-i")))
                                  {
                                    if(!(match_string(b_34, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm m_4 (ATerm t)
                              {
                                ATerm c_34 = NULL;
                                ATerm d_34 = NULL;
                                d_34 = t;
                                if(c_34 != NULL && c_34 != d_34)
                                  _fail(d_34);
                                else
                                  c_34 = d_34;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_34));
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, k_4, m_4, n_4);
                              PopChoice();
                            }
                          else
                            {
                              t = r_9;
                              {
                                ATerm s_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm e_34 = NULL;
                                      e_34 = t;
                                      r_33 :
                                      if(!(match_string(e_34, "-o")))
                                        {
                                          if(!(match_string(e_34, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm f_34 = NULL;
                                      ATerm g_34 = NULL;
                                      g_34 = t;
                                      if(f_34 != NULL && f_34 != g_34)
                                        _fail(g_34);
                                      else
                                        f_34 = g_34;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_34));
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_4, p_4, q_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_9;
                                    {
                                      ATerm t_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm h_34 = NULL;
                                            h_34 = t;
                                            t_33 :
                                            if(!(match_string(h_34, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, r_4, s_4, t_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_9;
                                          {
                                            ATerm y_4 (ATerm t)
                                            {
                                              ATerm i_34 = NULL;
                                              i_34 = t;
                                              u_33 :
                                              if(!(match_string(i_34, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm b_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, y_4, z_4, b_5);
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
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_table_destroy(not_null(n_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_exit(not_null(r_34));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_implode_string(not_null(v_34));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm y_34 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, y_34);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = Nil_0(t);
        t = j_58(t);
      }
    return(t);
  }
  t = y_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_9;
      {
        ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
        b_35 = t;
        a_35 :
        if(match_cons(b_35, sym_Cons_2))
          {
            c_35 = ATgetArgument(b_35, 0);
            d_35 = ATgetArgument(b_35, 1);
            t = not_null(c_35);
            {
              ATerm d_5 (ATerm t)
              {
                t = not_null(d_35);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, d_5);
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
  ATerm j_35 = NULL;
  j_35 = t;
  t = SSL_explode_string(not_null(j_35));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm m_35 (ATerm t)
  {
    ATerm e_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = e_10;
        t = Cons_2(t, v_57, m_35);
      }
    return(t);
  }
  t = m_35(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  s_35 = t;
  o_35 :
  if(match_cons(s_35, sym_TCons_2))
    {
      t_35 = ATgetArgument(s_35, 0);
      u_35 = ATgetArgument(s_35, 1);
      p_35 :
      if(match_cons(t_35, sym_Nil_0))
        {
          q_35 :
          if(match_cons(u_35, sym_TCons_2))
            {
              v_35 = ATgetArgument(u_35, 0);
              w_35 = ATgetArgument(u_35, 1);
              r_35 :
              if(match_cons(w_35, sym_TNil_0))
                t = not_null(v_35);
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
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  e_36 = t;
  a_36 :
  if(match_cons(e_36, sym_TCons_2))
    {
      f_36 = ATgetArgument(e_36, 0);
      i_36 = ATgetArgument(e_36, 1);
      b_36 :
      if(match_cons(f_36, sym_Cons_2))
        {
          g_36 = ATgetArgument(f_36, 0);
          h_36 = ATgetArgument(f_36, 1);
          c_36 :
          if(match_cons(i_36, sym_TCons_2))
            {
              j_36 = ATgetArgument(i_36, 0);
              k_36 = ATgetArgument(i_36, 1);
              d_36 :
              if(match_cons(k_36, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_36), not_null(j_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm n_47 (ATerm), ATerm o_47 (ATerm))
{
  ATerm p_36 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = n_47(t);
        t = p_36(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = o_47(t);
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_47 (ATerm))
{
  t = repeat_2(t, q_47, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_37 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym_Program_1))
    {
      y_36 = ATgetArgument(x_36, 0);
      {
        ATerm a_37 = NULL;
        t = not_null(y_36);
        t = x_37(t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_37 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm j_37 = NULL;
      j_37 = t;
      if(i_37 != NULL && i_37 != j_37)
        _fail(j_37);
      else
        i_37 = j_37;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm k_37 = NULL;
      ATerm l_37 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm h_5 (ATerm t)
        {
          t = not_null(i_37);
          return(t);
        }
        t = short_description_1(t, h_5);
        t = concat_strings_0(t);
        l_37 = t;
        if(k_37 != NULL && k_37 != l_37)
          _fail(l_37);
        else
          k_37 = l_37;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm m_37 = NULL;
        m_37 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_37), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, m_5);
      {
        ATerm n_5 (ATerm t)
        {
          ATerm o_37 = NULL;
          ATerm p_37 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(i_37);
              return(t);
            }
            t = long_description_1(t, o_5);
            t = concat_strings_0(t);
            p_37 = t;
            if(o_37 != NULL && o_37 != p_37)
              _fail(p_37);
            else
              o_37 = p_37;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_37), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, n_5);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  a_38 = t;
  v_37 :
  if(match_cons(a_38, sym_TCons_2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      w_37 :
      if(match_cons(c_38, sym_TCons_2))
        {
          d_38 = ATgetArgument(c_38, 0);
          e_38 = ATgetArgument(c_38, 1);
          z_37 :
          if(match_cons(e_38, sym_TNil_0))
            {
              ATerm g_10;
              g_10 = t;
              t = SSL_printnl(not_null(b_38), not_null(d_38));
              t = g_10;
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
ATerm Undefined_1 (ATerm t, ATerm y_37 (ATerm))
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym_Undefined_1))
    {
      m_38 = ATgetArgument(l_38, 0);
      {
        ATerm o_38 = NULL;
        t = not_null(m_38);
        t = y_37(t);
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm s_38 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, d_58, _id);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = Cons_2(t, _id, s_38);
      }
    return(t);
  }
  t = s_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_45 (ATerm))
{
  t = fetch_1(t, f_45);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t_38 :
  if(!(match_cons(u_38, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm i_10 = t;
  if(PushChoice()==0)
    {
      t = b_60(t);
      PopChoice();
    }
  else
    t = i_10;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  z_38 = t;
  w_38 :
  if(match_cons(z_38, sym_TCons_2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      x_38 :
      if(match_cons(b_39, sym_TCons_2))
        {
          c_39 = ATgetArgument(b_39, 0);
          d_39 = ATgetArgument(b_39, 1);
          y_38 :
          if(match_cons(d_39, sym_TNil_0))
            t = SSL_table_get(not_null(a_39), not_null(c_39));
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
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  n_39 = t;
  j_39 :
  if(match_cons(n_39, sym_TCons_2))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      k_39 :
      if(match_cons(p_39, sym_TCons_2))
        {
          q_39 = ATgetArgument(p_39, 0);
          r_39 = ATgetArgument(p_39, 1);
          l_39 :
          if(match_cons(r_39, sym_TCons_2))
            {
              s_39 = ATgetArgument(r_39, 0);
              t_39 = ATgetArgument(r_39, 1);
              m_39 :
              if(match_cons(t_39, sym_TNil_0))
                {
                  ATerm j_10;
                  j_10 = t;
                  {
                    ATerm x_39 = NULL;
                    ATerm y_39 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_39), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm l_10 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = l_10;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      y_39 = t;
                      if(x_39 != NULL && x_39 != y_39)
                        _fail(y_39);
                      else
                        x_39 = y_39;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_39), not_null(x_39)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = j_10;
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
ATerm register_usage_1 (ATerm t, ATerm l_44 (ATerm))
{
  ATerm c_40 = NULL;
  ATerm d_40 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = l_44(t);
  d_40 = t;
  if(c_40 != NULL && c_40 != d_40)
    _fail(d_40);
  else
    c_40 = d_40;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_40), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_string(k_40, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(k_40, sym_Cons_2))
        {
          l_40 = ATgetArgument(k_40, 0);
          m_40 = ATgetArgument(k_40, 1);
          {
            ATerm p_40 = NULL;
            ATerm m_10;
            m_10 = t;
            t = not_null(l_40);
            t = d_0(t);
            t = m_10;
            {
              ATerm q_40 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              q_40 = t;
              if(p_40 != NULL && p_40 != q_40)
                _fail(q_40);
              else
                p_40 = q_40;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_40), not_null(m_40));
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
  ATerm p_5 (ATerm t)
  {
    ATerm w_40 = NULL;
    w_40 = t;
    v_40 :
    if(!(match_string(w_40, "--help")))
      {
        if(!(match_string(w_40, "-h")))
          {
            if(!(match_string(w_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_5, q_5, x_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym_Cons_2))
    {
      a_41 = ATgetArgument(z_40, 0);
      b_41 = ATgetArgument(z_40, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_41)), not_null(b_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_42 (ATerm), ATerm u_42 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym_Cons_2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        ATerm w_41 = NULL;
        t = not_null(s_41);
        {
          ATerm y_41 = NULL;
          t = t_42(t);
          w_41 = t;
          t = not_null(t_41);
          t = u_42(t);
          y_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_41), not_null(y_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  d_42 :
  if(!(match_cons(e_42, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm n_10;
  n_10 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = j_44(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = n_10;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm g_42 = NULL;
      g_42 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_42));
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm o_10 = t;
      if(PushChoice()==0)
        {
          ATerm p_10 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = p_10;
              t = j_44(t);
              t = Cons_2(t, _id, d_6);
            }
          PopChoice();
        }
      else
        {
          t = o_10;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_5, d_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
    y_42 = t;
    n_42 :
    if(match_cons(y_42, sym_TCons_2))
      {
        z_42 = ATgetArgument(y_42, 0);
        a_43 = ATgetArgument(y_42, 1);
        o_42 :
        if(match_cons(a_43, sym_TCons_2))
          {
            b_43 = ATgetArgument(a_43, 0);
            c_43 = ATgetArgument(a_43, 1);
            r_42 :
            if(match_cons(c_43, sym_TCons_2))
              {
                d_43 = ATgetArgument(c_43, 0);
                e_43 = ATgetArgument(c_43, 1);
                s_42 :
                if(match_cons(e_43, sym_TNil_0))
                  {
                    if(v_42 != NULL && v_42 != z_42)
                      _fail(z_42);
                    else
                      v_42 = z_42;
                    if(w_42 != NULL && w_42 != b_43)
                      _fail(b_43);
                    else
                      w_42 = b_43;
                    if(x_42 != NULL && x_42 != d_43)
                      _fail(d_43);
                    else
                      x_42 = d_43;
                    t = SSL_table_put(not_null(v_42), not_null(w_42), not_null(x_42));
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
  t = q_10;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm h_43 = NULL;
  ATerm r_10;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = r_10;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm v_10 = t;
      if(PushChoice()==0)
        {
          t = i_44(t);
          PopChoice();
        }
      else
        {
          t = v_10;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_6);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm y_10 = t;
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
            t = y_10;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm i_43 = NULL;
                  i_43 = t;
                  if(h_43 != NULL && h_43 != i_43)
                    _fail(i_43);
                  else
                    h_43 = i_43;
                  return(t);
                }
                t = Undefined_1(t, h_6);
                return(t);
              }
              t = option_defined_1(t, g_6);
              {
                ATerm b_11;
                b_11 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = b_11;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_6);
      {
        ATerm c_11;
        c_11 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = c_11;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_46 (ATerm), ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm d_11 = t;
    if(PushChoice()==0)
      {
        t = a_47(t);
        PopChoice();
      }
    else
      {
        t = d_11;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_6);
  t = store_options_0(t);
  {
    ATerm h_11 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, b_47);
        PopChoice();
      }
    else
      {
        t = h_11;
        {
          ATerm i_11 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, z_46);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = i_11;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_46 (ATerm), ATerm v_46 (ATerm))
{
  t = iowrap_3(t, u_46, v_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      t = TCons_2(t, r_46, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, t_6);
    return(t);
  }
  t = iowrap_2(t, o_6, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}

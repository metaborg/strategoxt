#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
ATerm debug_1 (ATerm, ATerm j_47 (ATerm));
ATerm Let_2 (ATerm, ATerm b_40 (ATerm), ATerm c_40 (ATerm));
ATerm Op_2 (ATerm, ATerm o_39 (ATerm), ATerm p_39 (ATerm));
ATerm Var_1 (ATerm, ATerm k_39 (ATerm));
ATerm As_2 (ATerm, ATerm a_38 (ATerm), ATerm b_38 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_38 (ATerm));
ATerm Str_1 (ATerm, ATerm n_39 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_39 (ATerm));
ATerm Int_1 (ATerm, ATerm l_39 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm Where_1 (ATerm, ATerm f_41 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_41 (ATerm), ATerm e_41 (ATerm));
ATerm Build_1 (ATerm, ATerm a_41 (ATerm));
ATerm Match_1 (ATerm, ATerm z_40 (ATerm));
ATerm Thread_1 (ATerm, ATerm w_40 (ATerm));
ATerm All_1 (ATerm, ATerm v_40 (ATerm));
ATerm Some_1 (ATerm, ATerm j_0 (ATerm));
ATerm One_1 (ATerm, ATerm t_40 (ATerm));
ATerm Cong_2 (ATerm, ATerm r_40 (ATerm), ATerm s_40 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm p_40 (ATerm), ATerm q_40 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_39 (ATerm), ATerm a_40 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_39 (ATerm));
ATerm Call_2 (ATerm, ATerm n_40 (ATerm), ATerm o_40 (ATerm));
ATerm LChoice_2 (ATerm, ATerm w_39 (ATerm), ATerm x_39 (ATerm));
ATerm Choice_2 (ATerm, ATerm u_39 (ATerm), ATerm v_39 (ATerm));
ATerm Seq_2 (ATerm, ATerm s_39 (ATerm), ATerm t_39 (ATerm));
ATerm Test_1 (ATerm, ATerm q_39 (ATerm));
ATerm Not_1 (ATerm, ATerm r_39 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm g_40 (ATerm), ATerm h_40 (ATerm));
ATerm Mod_2 (ATerm, ATerm q_38 (ATerm), ATerm r_38 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_40 (ATerm), ATerm e_40 (ATerm), ATerm f_40 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm z_55 (ATerm));
ATerm Strategies_1 (ATerm, ATerm y_38 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_39 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm i_41 (ATerm), ATerm j_41 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_46 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_49 (ATerm), ATerm g_49 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_46 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_56 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_44 (ATerm));
ATerm map_1 (ATerm, ATerm x_55 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_61 (ATerm), ATerm t_61 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_61 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_44 (ATerm));
ATerm Program_1 (ATerm, ATerm j_32 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_32 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_56 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_45 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_45 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_41 (ATerm), ATerm n_41 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_44 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_44 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_45 (ATerm), ATerm a_46 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_45 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm j_47 (ATerm))
{
  ATerm t_3;
  t_3 = t;
  {
    ATerm p_4 = NULL,r_4 = NULL;
    ATerm u_3;
    u_3 = t;
    {
      ATerm q_4 = NULL;
      t = j_47(t);
      q_4 = t;
      if(p_4 != NULL && p_4 != q_4)
        _fail(q_4);
      else
        p_4 = q_4;
    }
    t = u_3;
    {
      ATerm s_4 = NULL;
      s_4 = t;
      if(r_4 != NULL && r_4 != s_4)
        _fail(s_4);
      else
        r_4 = s_4;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_4), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = t_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm b_40 (ATerm), ATerm c_40 (ATerm))
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Let_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      {
        ATerm e_5 = NULL;
        t = not_null(a_5);
        {
          ATerm g_5 = NULL;
          t = b_40(t);
          e_5 = t;
          t = not_null(b_5);
          t = c_40(t);
          g_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_5), not_null(g_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm o_39 (ATerm), ATerm p_39 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Op_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = o_39(t);
          u_5 = t;
          t = not_null(r_5);
          t = p_39(t);
          w_5 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(u_5), not_null(w_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_39 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Var_1))
    {
      f_6 = ATgetArgument(e_6, 0);
      {
        ATerm h_6 = NULL;
        t = not_null(f_6);
        t = k_39(t);
        h_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm a_38 (ATerm), ATerm b_38 (ATerm))
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_As_2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        ATerm u_6 = NULL;
        t = not_null(q_6);
        {
          ATerm w_6 = NULL;
          t = a_38(t);
          u_6 = t;
          t = not_null(r_6);
          t = b_38(t);
          w_6 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(u_6), not_null(w_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm c_38 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_BuildDefault_1))
    {
      f_7 = ATgetArgument(e_7, 0);
      {
        ATerm h_7 = NULL;
        t = not_null(f_7);
        t = c_38(t);
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(h_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_39 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_Str_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      {
        ATerm r_7 = NULL;
        t = not_null(p_7);
        t = n_39(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, not_null(r_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_is_real(not_null(w_7));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_39 (ATerm))
{
  ATerm c_8 = NULL,d_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_Real_1))
    {
      d_8 = ATgetArgument(c_8, 0);
      {
        ATerm f_8 = NULL;
        t = not_null(d_8);
        t = m_39(t);
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, not_null(f_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm l_39 (ATerm))
{
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_Int_1))
    {
      n_8 = ATgetArgument(m_8, 0);
      {
        ATerm p_8 = NULL;
        t = not_null(n_8);
        t = l_39(t);
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym_Int_1, not_null(p_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  t_8 :
  if(!(match_cons(u_8, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm v_3 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = v_3;
      {
        ATerm w_3 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = w_3;
            {
              ATerm x_3 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = x_3;
                  {
                    ATerm y_3 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = y_3;
                        {
                          ATerm z_3 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = z_3;
                              {
                                ATerm a_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_4;
                                    {
                                      ATerm b_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm a_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, a_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_4;
                                          {
                                            ATerm c_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm b_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, b_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_4;
                                                {
                                                  ATerm c_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, c_0);
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
ATerm Prim_2 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_Prim_2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        ATerm f_9 = NULL;
        t = not_null(b_9);
        {
          ATerm h_9 = NULL;
          t = g_41(t);
          f_9 = t;
          t = not_null(c_9);
          t = h_41(t);
          h_9 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_9), not_null(h_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_Where_1))
    {
      q_9 = ATgetArgument(p_9, 0);
      {
        ATerm s_9 = NULL;
        t = not_null(q_9);
        t = f_41(t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_41 (ATerm), ATerm e_41 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_Scope_2))
    {
      b_10 = ATgetArgument(a_10, 0);
      c_10 = ATgetArgument(a_10, 1);
      {
        ATerm f_10 = NULL;
        t = not_null(b_10);
        {
          ATerm h_10 = NULL;
          t = d_41(t);
          f_10 = t;
          t = not_null(c_10);
          t = e_41(t);
          h_10 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_10), not_null(h_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_41 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_Build_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm s_10 = NULL;
        t = not_null(q_10);
        t = a_41(t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm z_40 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym_Match_1))
    {
      a_11 = ATgetArgument(z_10, 0);
      {
        ATerm c_11 = NULL;
        t = not_null(a_11);
        t = z_40(t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm w_40 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Thread_1))
    {
      k_11 = ATgetArgument(j_11, 0);
      {
        ATerm m_11 = NULL;
        t = not_null(k_11);
        t = w_40(t);
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(m_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm v_40 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_All_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm w_11 = NULL;
        t = not_null(u_11);
        t = v_40(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(w_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_Some_1))
    {
      n_12 = ATgetArgument(m_12, 0);
      {
        ATerm d_4 = t;
        if(PushChoice()==0)
          {
            ATerm s_12 = NULL;
            t = not_null(n_12);
            t = j_0(t);
            s_12 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(s_12));
            PopChoice();
          }
        else
          {
            t = d_4;
            {
              ATerm v_12 = NULL;
              t = not_null(n_12);
              t = j_0(t);
              v_12 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(v_12));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm t_40 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_One_1))
    {
      f_13 = ATgetArgument(e_13, 0);
      {
        ATerm h_13 = NULL;
        t = not_null(f_13);
        t = t_40(t);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(h_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm r_40 (ATerm), ATerm s_40 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_Cong_2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      {
        ATerm v_13 = NULL;
        t = not_null(r_13);
        {
          ATerm x_13 = NULL;
          t = r_40(t);
          v_13 = t;
          t = not_null(s_13);
          t = s_40(t);
          x_13 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(v_13), not_null(x_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_is_int(not_null(m_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm p_40 (ATerm), ATerm q_40 (ATerm))
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_Path_2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm j_15 = NULL;
        t = not_null(f_15);
        {
          ATerm l_15 = NULL;
          t = p_40(t);
          j_15 = t;
          t = not_null(g_15);
          t = q_40(t);
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(j_15), not_null(l_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_39 (ATerm), ATerm a_40 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_Rec_2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        ATerm z_15 = NULL;
        t = not_null(v_15);
        {
          ATerm b_16 = NULL;
          t = z_39(t);
          z_15 = t;
          t = not_null(w_15);
          t = a_40(t);
          b_16 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(z_15), not_null(b_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm y_39 (ATerm))
{
  ATerm l_16 = NULL,r_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym_SVar_1))
    {
      r_16 = ATgetArgument(l_16, 0);
      {
        ATerm u_16 = NULL;
        t = not_null(r_16);
        t = y_39(t);
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(u_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm n_40 (ATerm), ATerm o_40 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym_Call_2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm i_17 = NULL;
        t = not_null(e_17);
        {
          ATerm k_17 = NULL;
          t = n_40(t);
          i_17 = t;
          t = not_null(f_17);
          t = o_40(t);
          k_17 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(i_17), not_null(k_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm w_39 (ATerm), ATerm x_39 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_LChoice_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm y_17 = NULL;
        t = not_null(u_17);
        {
          ATerm a_18 = NULL;
          t = w_39(t);
          y_17 = t;
          t = not_null(v_17);
          t = x_39(t);
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_17), not_null(a_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_Choice_2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm o_18 = NULL;
        t = not_null(k_18);
        {
          ATerm q_18 = NULL;
          t = u_39(t);
          o_18 = t;
          t = not_null(l_18);
          t = v_39(t);
          q_18 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_18), not_null(q_18));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm s_39 (ATerm), ATerm t_39 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Seq_2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      {
        ATerm e_19 = NULL;
        t = not_null(a_19);
        {
          ATerm g_19 = NULL;
          t = s_39(t);
          e_19 = t;
          t = not_null(b_19);
          t = t_39(t);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_19), not_null(g_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm q_39 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Test_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm u_19 = NULL;
        t = not_null(s_19);
        t = q_39(t);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(u_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm r_39 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_Not_1))
    {
      c_20 = ATgetArgument(b_20, 0);
      {
        ATerm e_20 = NULL;
        t = not_null(c_20);
        t = r_39(t);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(e_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  i_20 :
  if(!(match_cons(j_20, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  k_20 :
  if(!(match_cons(l_20, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm e_4 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = e_4;
      {
        ATerm f_4 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = f_4;
            {
              ATerm g_4 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = g_4;
                  {
                    ATerm h_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = h_4;
                        {
                          ATerm i_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = i_4;
                              {
                                ATerm j_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_4;
                                    {
                                      ATerm k_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_4;
                                          {
                                            ATerm l_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm k_0 (ATerm t)
                                                {
                                                  ATerm m_0 (ATerm t)
                                                  {
                                                    ATerm m_4 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        t = is_string_0(t);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = m_4;
                                                        t = Mod_2(t, is_string_0, is_string_0);
                                                      }
                                                    return(t);
                                                  }
                                                  t = SVar_1(t, m_0);
                                                  return(t);
                                                }
                                                ATerm l_0 (ATerm t)
                                                {
                                                  t = list_1(t, strategy_expression_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, k_0, l_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_4;
                                                {
                                                  ATerm n_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_4;
                                                      {
                                                        ATerm o_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = o_4;
                                                            {
                                                              ATerm t_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm n_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, n_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = t_4;
                                                                  {
                                                                    ATerm u_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_4;
                                                                        {
                                                                          ATerm v_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_4;
                                                                              {
                                                                                ATerm w_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_4;
                                                                                    {
                                                                                      ATerm x_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_4;
                                                                                          {
                                                                                            ATerm c_5 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_5;
                                                                                                {
                                                                                                  ATerm d_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_5;
                                                                                                      {
                                                                                                        ATerm f_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm o_0 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, o_0, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_5;
                                                                                                            {
                                                                                                              ATerm h_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_5;
                                                                                                                  {
                                                                                                                    ATerm i_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm p_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, p_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_5;
                                                                                                                        {
                                                                                                                          ATerm j_5 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm q_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm r_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, r_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, q_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_5;
                                                                                                                              {
                                                                                                                                ATerm s_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = debug_1(t, s_0);
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
ATerm is_string_0 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  t = SSL_is_string(not_null(o_20));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm g_40 (ATerm), ATerm h_40 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym_VarDec_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      {
        ATerm a_21 = NULL;
        t = not_null(w_20);
        {
          ATerm c_21 = NULL;
          t = g_40(t);
          a_21 = t;
          t = not_null(x_20);
          t = h_40(t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_21), not_null(c_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mod_2 (ATerm t, ATerm q_38 (ATerm), ATerm r_38 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_Mod_2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      {
        ATerm q_21 = NULL;
        t = not_null(m_21);
        {
          ATerm s_21 = NULL;
          t = q_38(t);
          q_21 = t;
          t = not_null(n_21);
          t = r_38(t);
          s_21 = t;
          t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(q_21), not_null(s_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm d_40 (ATerm), ATerm e_40 (ATerm), ATerm f_40 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_SDef_3))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      f_22 = ATgetArgument(c_22, 2);
      {
        ATerm j_22 = NULL;
        t = not_null(d_22);
        {
          ATerm l_22 = NULL;
          t = d_40(t);
          j_22 = t;
          t = not_null(e_22);
          {
            ATerm n_22 = NULL;
            t = e_40(t);
            l_22 = t;
            t = not_null(f_22);
            t = f_40(t);
            n_22 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_22), not_null(l_22), not_null(n_22));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm k_5 = t;
  if(PushChoice()==0)
    {
      ATerm t_0 (ATerm t)
      {
        ATerm l_5 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = l_5;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, v_0);
        return(t);
      }
      t = SDef_3(t, t_0, u_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = k_5;
      {
        ATerm w_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, w_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm t_22 (ATerm t)
  {
    ATerm m_5 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = m_5;
        t = Cons_2(t, z_55, t_22);
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_38 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_Strategies_1))
    {
      y_22 = ATgetArgument(x_22, 0);
      {
        ATerm a_23 = NULL;
        t = not_null(y_22);
        t = y_38(t);
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_39 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_Specification_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      {
        ATerm k_23 = NULL;
        t = not_null(i_23);
        t = a_39(t);
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(k_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, a_1);
            return(t);
          }
          t = Cons_2(t, z_0, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, y_0);
        return(t);
      }
      t = Specification_1(t, x_0);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm b_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, b_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  p_23 :
  if(!(match_cons(q_23, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm i_41 (ATerm), ATerm j_41 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_TCons_2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      {
        ATerm a_24 = NULL;
        t = not_null(w_23);
        {
          ATerm c_24 = NULL;
          t = i_41(t);
          a_24 = t;
          t = not_null(x_23);
          t = j_41(t);
          c_24 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_24), not_null(c_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_24 = NULL;
  ATerm s_5;
  s_5 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm k_24 = NULL,l_24 = NULL;
      k_24 = t;
      i_24 :
      if(match_cons(k_24, sym_Program_1))
        {
          l_24 = ATgetArgument(k_24, 0);
          if(j_24 != NULL && j_24 != l_24)
            _fail(l_24);
          else
            j_24 = l_24;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, c_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = s_5;
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
  ATerm s_24 = NULL,t_24 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      ATerm t_5 = t;
      if(PushChoice()==0)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm u_24 = NULL;
            u_24 = t;
            n_24 :
            if(!(match_cons(u_24, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_1);
          PopChoice();
          _fail(t);
        }
      else
        t = t_5;
      return(t);
    }
    ATerm f_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, e_1, f_1);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm v_24 = NULL,w_24 = NULL;
          v_24 = t;
          p_24 :
          if(match_cons(v_24, sym_Runtime_1))
            {
              w_24 = ATgetArgument(v_24, 0);
              if(t_24 != NULL && t_24 != w_24)
                _fail(w_24);
              else
                t_24 = w_24;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_1);
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, h_1, i_1);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm m_1 (ATerm t)
          {
            ATerm x_24 = NULL,y_24 = NULL;
            x_24 = t;
            r_24 :
            if(match_cons(x_24, sym_Program_1))
              {
                y_24 = ATgetArgument(x_24, 0);
                if(s_24 != NULL && s_24 != y_24)
                  _fail(y_24);
                else
                  s_24 = y_24;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_1);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, k_1, l_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_24), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, d_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  f_25 = t;
  c_25 :
  if(match_cons(f_25, sym_TCons_2))
    {
      g_25 = ATgetArgument(f_25, 0);
      h_25 = ATgetArgument(f_25, 1);
      d_25 :
      if(match_cons(h_25, sym_TCons_2))
        {
          i_25 = ATgetArgument(h_25, 0);
          j_25 = ATgetArgument(h_25, 1);
          e_25 :
          if(match_cons(j_25, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(g_25), not_null(i_25));
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
            t = SSL_WriteToBinaryFile(not_null(s_25), not_null(u_25));
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
  ATerm d_26 = NULL;
  ATerm v_5;
  v_5 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm x_5 = t;
      if(PushChoice()==0)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm e_26 = NULL,f_26 = NULL;
            e_26 = t;
            a_26 :
            if(match_cons(e_26, sym_Output_1))
              {
                f_26 = ATgetArgument(e_26, 0);
                if(d_26 != NULL && d_26 != f_26)
                  _fail(f_26);
                else
                  d_26 = f_26;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_1);
          PopChoice();
        }
      else
        {
          t = x_5;
          {
            ATerm g_26 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            g_26 = t;
            if(d_26 != NULL && d_26 != g_26)
              _fail(g_26);
            else
              d_26 = g_26;
          }
        }
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, n_1, o_1);
  }
  t = v_5;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = not_null(d_26);
          return(t);
        }
        t = split_2(t, s_1, _id);
        return(t);
      }
      t = TCons_2(t, r_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, q_1);
    {
      ATerm y_5 = t;
      if(PushChoice()==0)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm h_26 = NULL;
              h_26 = t;
              c_26 :
              if(!(match_cons(h_26, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, v_1);
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, t_1, u_1);
          PopChoice();
        }
      else
        {
          t = y_5;
          {
            ATerm w_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, w_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  ATerm z_5;
  z_5 = t;
  t = dtime_0(t);
  t = z_5;
  t = q_46(t);
  {
    ATerm a_6;
    a_6 = t;
    {
      ATerm q_26 = NULL;
      t = dtime_0(t);
      q_26 = t;
      if(p_26 != NULL && p_26 != q_26)
        _fail(q_26);
      else
        p_26 = q_26;
    }
    t = a_6;
    r_26 = t;
    m_26 :
    if(match_cons(r_26, sym_TCons_2))
      {
        s_26 = ATgetArgument(r_26, 0);
        t_26 = ATgetArgument(r_26, 1);
        n_26 :
        if(match_cons(t_26, sym_TCons_2))
          {
            u_26 = ATgetArgument(t_26, 0);
            v_26 = ATgetArgument(t_26, 1);
            o_26 :
            if(match_cons(v_26, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_26)), not_null(s_26)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_27 = NULL;
  b_27 = t;
  t = SSL_ReadFromFile(not_null(b_27));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_49 (ATerm), ATerm g_49 (ATerm))
{
  ATerm h_27 = NULL;
  ATerm j_27 = NULL,l_27 = NULL;
  h_27 = t;
  {
    ATerm b_6;
    b_6 = t;
    {
      ATerm k_27 = NULL;
      t = not_null(h_27);
      t = f_49(t);
      k_27 = t;
      if(j_27 != NULL && j_27 != k_27)
        _fail(k_27);
      else
        j_27 = k_27;
    }
    t = b_6;
    {
      ATerm m_27 = NULL;
      t = not_null(h_27);
      t = g_49(t);
      m_27 = t;
      if(l_27 != NULL && l_27 != m_27)
        _fail(m_27);
      else
        l_27 = m_27;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_27), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm c_6;
  c_6 = t;
  {
    ATerm g_6 = t;
    if(PushChoice()==0)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm u_27 = NULL,v_27 = NULL;
          u_27 = t;
          r_27 :
          if(match_cons(u_27, sym_Input_1))
            {
              v_27 = ATgetArgument(u_27, 0);
              if(t_27 != NULL && t_27 != v_27)
                _fail(v_27);
              else
                t_27 = v_27;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_1);
        PopChoice();
      }
    else
      {
        t = g_6;
        {
          ATerm w_27 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_27 = t;
          if(t_27 != NULL && t_27 != w_27)
            _fail(w_27);
          else
            t_27 = w_27;
        }
      }
  }
  t = c_6;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(t_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  z_27 :
  if(!(match_cons(a_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm i_6 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = i_6;
        {
          ATerm j_6 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = j_6;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_1);
  t = p_46(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_table_create(not_null(c_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  {
    ATerm k_6;
    k_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_28), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = k_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  o_28 = t;
  m_28 :
  if(match_string(o_28, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(o_28, sym_Cons_2))
        {
          p_28 = ATgetArgument(o_28, 0);
          q_28 = ATgetArgument(o_28, 1);
          n_28 :
          if(match_cons(q_28, sym_Cons_2))
            {
              r_28 = ATgetArgument(q_28, 0);
              s_28 = ATgetArgument(q_28, 1);
              {
                ATerm w_28 = NULL;
                ATerm l_6;
                l_6 = t;
                t = not_null(p_28);
                t = g_0(t);
                t = l_6;
                {
                  ATerm x_28 = NULL;
                  t = not_null(r_28);
                  t = h_0(t);
                  x_28 = t;
                  if(w_28 != NULL && w_28 != x_28)
                    _fail(x_28);
                  else
                    w_28 = x_28;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_28), not_null(s_28));
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
  ATerm m_6 = t;
  if(PushChoice()==0)
    {
      ATerm a_2 (ATerm t)
      {
        ATerm m_29 = NULL;
        m_29 = t;
        b_29 :
        if(!(match_string(m_29, "-S")))
          {
            if(!(match_string(m_29, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, a_2, b_2, c_2);
      PopChoice();
    }
  else
    {
      t = m_6;
      {
        ATerm n_6 = t;
        if(PushChoice()==0)
          {
            ATerm d_2 (ATerm t)
            {
              ATerm n_29 = NULL;
              n_29 = t;
              c_29 :
              if(!(match_string(n_29, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, d_2, e_2, f_2);
            PopChoice();
          }
        else
          {
            t = n_6;
            {
              ATerm s_6 = t;
              if(PushChoice()==0)
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm o_29 = NULL;
                    o_29 = t;
                    d_29 :
                    if(!(match_string(o_29, "-v")))
                      {
                        if(!(match_string(o_29, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, g_2, h_2, i_2);
                  PopChoice();
                }
              else
                {
                  t = s_6;
                  {
                    ATerm t_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_2 (ATerm t)
                        {
                          ATerm p_29 = NULL;
                          p_29 = t;
                          e_29 :
                          if(!(match_string(p_29, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm q_29 = NULL;
                          ATerm r_29 = NULL;
                          r_29 = t;
                          if(q_29 != NULL && q_29 != r_29)
                            _fail(r_29);
                          else
                            q_29 = r_29;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_29));
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, j_2, k_2, l_2);
                        PopChoice();
                      }
                    else
                      {
                        t = t_6;
                        {
                          ATerm v_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm m_2 (ATerm t)
                              {
                                ATerm s_29 = NULL;
                                s_29 = t;
                                g_29 :
                                if(!(match_string(s_29, "-i")))
                                  {
                                    if(!(match_string(s_29, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                ATerm t_29 = NULL;
                                ATerm u_29 = NULL;
                                u_29 = t;
                                if(t_29 != NULL && t_29 != u_29)
                                  _fail(u_29);
                                else
                                  t_29 = u_29;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_29));
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, m_2, n_2, o_2);
                              PopChoice();
                            }
                          else
                            {
                              t = v_6;
                              {
                                ATerm x_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm v_29 = NULL;
                                      v_29 = t;
                                      i_29 :
                                      if(!(match_string(v_29, "-o")))
                                        {
                                          if(!(match_string(v_29, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      ATerm w_29 = NULL;
                                      ATerm x_29 = NULL;
                                      x_29 = t;
                                      if(w_29 != NULL && w_29 != x_29)
                                        _fail(x_29);
                                      else
                                        w_29 = x_29;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_29));
                                      return(t);
                                    }
                                    ATerm r_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_2, q_2, r_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_6;
                                    {
                                      ATerm y_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm s_2 (ATerm t)
                                          {
                                            ATerm y_29 = NULL;
                                            y_29 = t;
                                            k_29 :
                                            if(!(match_string(y_29, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, s_2, t_2, u_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_6;
                                          {
                                            ATerm v_2 (ATerm t)
                                            {
                                              ATerm z_29 = NULL;
                                              z_29 = t;
                                              l_29 :
                                              if(!(match_string(z_29, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm w_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm x_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, v_2, w_2, x_2);
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
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_table_destroy(not_null(e_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_exit(not_null(i_30));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_implode_string(not_null(m_30));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm p_30 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, p_30);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = Nil_0(t);
        t = l_56(t);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_7;
      {
        ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
        s_30 = t;
        r_30 :
        if(match_cons(s_30, sym_Cons_2))
          {
            t_30 = ATgetArgument(s_30, 0);
            u_30 = ATgetArgument(s_30, 1);
            t = not_null(t_30);
            {
              ATerm y_2 (ATerm t)
              {
                t = not_null(u_30);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, y_2);
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
  ATerm a_31 = NULL;
  a_31 = t;
  t = SSL_explode_string(not_null(a_31));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm d_31 (ATerm t)
  {
    ATerm b_7 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_7;
        t = Cons_2(t, x_55, d_31);
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  o_31 = t;
  k_31 :
  if(match_cons(o_31, sym_TCons_2))
    {
      p_31 = ATgetArgument(o_31, 0);
      s_31 = ATgetArgument(o_31, 1);
      l_31 :
      if(match_cons(p_31, sym_Nil_0))
        {
          m_31 :
          if(match_cons(s_31, sym_TCons_2))
            {
              t_31 = ATgetArgument(s_31, 0);
              u_31 = ATgetArgument(s_31, 1);
              n_31 :
              if(match_cons(u_31, sym_TNil_0))
                t = not_null(t_31);
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
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  c_32 = t;
  y_31 :
  if(match_cons(c_32, sym_TCons_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      g_32 = ATgetArgument(c_32, 1);
      z_31 :
      if(match_cons(d_32, sym_Cons_2))
        {
          e_32 = ATgetArgument(d_32, 0);
          f_32 = ATgetArgument(d_32, 1);
          a_32 :
          if(match_cons(g_32, sym_TCons_2))
            {
              h_32 = ATgetArgument(g_32, 0);
              i_32 = ATgetArgument(g_32, 1);
              b_32 :
              if(match_cons(i_32, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_32), not_null(h_32)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm s_61 (ATerm), ATerm t_61 (ATerm))
{
  ATerm p_32 (ATerm t)
  {
    ATerm c_7 = t;
    if(PushChoice()==0)
      {
        t = s_61(t);
        t = p_32(t);
        PopChoice();
      }
    else
      {
        t = c_7;
        t = t_61(t);
      }
    return(t);
  }
  t = p_32(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_61 (ATerm))
{
  t = repeat_2(t, v_61, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_44 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_32 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym_Program_1))
    {
      y_32 = ATgetArgument(x_32, 0);
      {
        ATerm a_33 = NULL;
        t = not_null(y_32);
        t = j_32(t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_33 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm j_33 = NULL;
      j_33 = t;
      if(i_33 != NULL && i_33 != j_33)
        _fail(j_33);
      else
        i_33 = j_33;
      return(t);
    }
    t = Program_1(t, a_3);
    return(t);
  }
  t = option_defined_1(t, z_2);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm k_33 = NULL;
      ATerm l_33 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm c_3 (ATerm t)
        {
          t = not_null(i_33);
          return(t);
        }
        t = short_description_1(t, c_3);
        t = concat_strings_0(t);
        l_33 = t;
        if(k_33 != NULL && k_33 != l_33)
          _fail(l_33);
        else
          k_33 = l_33;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, b_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm m_33 = NULL;
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_33), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, d_3);
      {
        ATerm e_3 (ATerm t)
        {
          ATerm o_33 = NULL;
          ATerm p_33 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(i_33);
              return(t);
            }
            t = long_description_1(t, f_3);
            t = concat_strings_0(t);
            p_33 = t;
            if(o_33 != NULL && o_33 != p_33)
              _fail(p_33);
            else
              o_33 = p_33;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_33), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, e_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  y_33 = t;
  v_33 :
  if(match_cons(y_33, sym_TCons_2))
    {
      z_33 = ATgetArgument(y_33, 0);
      a_34 = ATgetArgument(y_33, 1);
      w_33 :
      if(match_cons(a_34, sym_TCons_2))
        {
          b_34 = ATgetArgument(a_34, 0);
          c_34 = ATgetArgument(a_34, 1);
          x_33 :
          if(match_cons(c_34, sym_TNil_0))
            {
              ATerm g_7;
              g_7 = t;
              t = SSL_printnl(not_null(z_33), not_null(b_34));
              t = g_7;
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
ATerm Undefined_1 (ATerm t, ATerm k_32 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Undefined_1))
    {
      k_34 = ATgetArgument(j_34, 0);
      {
        ATerm m_34 = NULL;
        t = not_null(k_34);
        t = k_32(t);
        m_34 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm q_34 (ATerm t)
  {
    ATerm i_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, f_56, _id);
        PopChoice();
      }
    else
      {
        t = i_7;
        t = Cons_2(t, _id, q_34);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_45 (ATerm))
{
  t = fetch_1(t, u_45);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  r_34 :
  if(!(match_cons(s_34, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm j_7 = t;
  if(PushChoice()==0)
    {
      t = p_62(t);
      PopChoice();
    }
  else
    t = j_7;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  x_34 = t;
  u_34 :
  if(match_cons(x_34, sym_TCons_2))
    {
      y_34 = ATgetArgument(x_34, 0);
      z_34 = ATgetArgument(x_34, 1);
      v_34 :
      if(match_cons(z_34, sym_TCons_2))
        {
          a_35 = ATgetArgument(z_34, 0);
          b_35 = ATgetArgument(z_34, 1);
          w_34 :
          if(match_cons(b_35, sym_TNil_0))
            t = SSL_table_get(not_null(y_34), not_null(a_35));
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
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  l_35 = t;
  h_35 :
  if(match_cons(l_35, sym_TCons_2))
    {
      m_35 = ATgetArgument(l_35, 0);
      n_35 = ATgetArgument(l_35, 1);
      i_35 :
      if(match_cons(n_35, sym_TCons_2))
        {
          o_35 = ATgetArgument(n_35, 0);
          p_35 = ATgetArgument(n_35, 1);
          j_35 :
          if(match_cons(p_35, sym_TCons_2))
            {
              q_35 = ATgetArgument(p_35, 0);
              r_35 = ATgetArgument(p_35, 1);
              k_35 :
              if(match_cons(r_35, sym_TNil_0))
                {
                  ATerm k_7;
                  k_7 = t;
                  {
                    ATerm v_35 = NULL;
                    ATerm w_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm l_7 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = l_7;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      w_35 = t;
                      if(v_35 != NULL && v_35 != w_35)
                        _fail(w_35);
                      else
                        v_35 = w_35;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_35), not_null(v_35)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = k_7;
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
ATerm register_usage_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm a_36 = NULL;
  ATerm b_36 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = a_45(t);
  b_36 = t;
  if(a_36 != NULL && a_36 != b_36)
    _fail(b_36);
  else
    a_36 = b_36;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_36), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_string(h_36, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(h_36, sym_Cons_2))
        {
          i_36 = ATgetArgument(h_36, 0);
          j_36 = ATgetArgument(h_36, 1);
          {
            ATerm m_36 = NULL;
            ATerm m_7;
            m_7 = t;
            t = not_null(i_36);
            t = d_0(t);
            t = m_7;
            {
              ATerm n_36 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              n_36 = t;
              if(m_36 != NULL && m_36 != n_36)
                _fail(n_36);
              else
                m_36 = n_36;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_36), not_null(j_36));
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
  ATerm g_3 (ATerm t)
  {
    ATerm s_36 = NULL;
    s_36 = t;
    r_36 :
    if(!(match_string(s_36, "--help")))
      {
        if(!(match_string(s_36, "-h")))
          {
            if(!(match_string(s_36, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym_Cons_2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_36)), not_null(x_36));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_41 (ATerm), ATerm n_41 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Cons_2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm k_37 = NULL;
        t = not_null(g_37);
        {
          ATerm m_37 = NULL;
          t = m_41(t);
          k_37 = t;
          t = not_null(h_37);
          t = n_41(t);
          m_37 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_37), not_null(m_37));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  r_37 :
  if(!(match_cons(s_37, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm q_7;
  q_7 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = y_44(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = q_7;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm u_37 = NULL;
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_37));
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm s_7 = t;
      if(PushChoice()==0)
        {
          ATerm t_7 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = t_7;
              t = y_44(t);
              t = Cons_2(t, _id, l_3);
            }
          PopChoice();
        }
      else
        {
          t = s_7;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  ATerm u_7;
  u_7 = t;
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
    j_38 = t;
    z_37 :
    if(match_cons(j_38, sym_TCons_2))
      {
        k_38 = ATgetArgument(j_38, 0);
        l_38 = ATgetArgument(j_38, 1);
        d_38 :
        if(match_cons(l_38, sym_TCons_2))
          {
            m_38 = ATgetArgument(l_38, 0);
            n_38 = ATgetArgument(l_38, 1);
            e_38 :
            if(match_cons(n_38, sym_TCons_2))
              {
                o_38 = ATgetArgument(n_38, 0);
                p_38 = ATgetArgument(n_38, 1);
                f_38 :
                if(match_cons(p_38, sym_TNil_0))
                  {
                    if(g_38 != NULL && g_38 != k_38)
                      _fail(k_38);
                    else
                      g_38 = k_38;
                    if(h_38 != NULL && h_38 != m_38)
                      _fail(m_38);
                    else
                      h_38 = m_38;
                    if(i_38 != NULL && i_38 != o_38)
                      _fail(o_38);
                    else
                      i_38 = o_38;
                    t = SSL_table_put(not_null(g_38), not_null(h_38), not_null(i_38));
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
  t = u_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_44 (ATerm))
{
  ATerm u_38 = NULL;
  ATerm v_7;
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = v_7;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm x_7 = t;
      if(PushChoice()==0)
        {
          t = x_44(t);
          PopChoice();
        }
      else
        {
          t = x_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm y_7 = t;
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
            t = y_7;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm v_38 = NULL;
                  v_38 = t;
                  if(u_38 != NULL && u_38 != v_38)
                    _fail(v_38);
                  else
                    u_38 = v_38;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm z_7;
                z_7 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = z_7;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_3);
      {
        ATerm a_8;
        a_8 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = a_8;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        t = f_46(t);
        PopChoice();
      }
    else
      {
        t = e_8;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_3);
  t = store_options_0(t);
  {
    ATerm g_8 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_46);
        PopChoice();
      }
    else
      {
        t = g_8;
        {
          ATerm h_8 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, e_46);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = h_8;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_45 (ATerm), ATerm a_46 (ATerm))
{
  t = iowrap_3(t, z_45, a_46, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      t = TCons_2(t, w_45, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_3);
    return(t);
  }
  t = iowrap_2(t, r_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}

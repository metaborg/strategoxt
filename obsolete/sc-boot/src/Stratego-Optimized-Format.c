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
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
ATerm debug_1 (ATerm, ATerm x_48 (ATerm));
ATerm Var_1 (ATerm, ATerm y_40 (ATerm));
ATerm Assign_1 (ATerm, ATerm e_38 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm q_39 (ATerm));
ATerm Op_2 (ATerm, ATerm c_41 (ATerm), ATerm d_41 (ATerm));
ATerm Str_1 (ATerm, ATerm o_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm n_0 (ATerm));
ATerm Int_1 (ATerm, ATerm m_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm b_38 (ATerm));
ATerm Alt_3 (ATerm, ATerm y_37 (ATerm), ATerm z_37 (ATerm), ATerm a_38 (ATerm));
ATerm Case_4 (ATerm, ATerm r_37 (ATerm), ATerm s_37 (ATerm), ATerm t_37 (ATerm), ATerm u_37 (ATerm));
ATerm Let_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm Prim_2 (ATerm, ATerm u_42 (ATerm), ATerm v_42 (ATerm));
ATerm Where_1 (ATerm, ATerm t_42 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm));
ATerm Build_1 (ATerm, ATerm o_42 (ATerm));
ATerm Thread_1 (ATerm, ATerm k_42 (ATerm));
ATerm All_1 (ATerm, ATerm j_42 (ATerm));
ATerm Some_1 (ATerm, ATerm j_0 (ATerm));
ATerm One_1 (ATerm, ATerm h_42 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm Path_2 (ATerm, ATerm d_42 (ATerm), ATerm e_42 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_41 (ATerm), ATerm o_41 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_41 (ATerm));
ATerm Call_2 (ATerm, ATerm b_42 (ATerm), ATerm c_42 (ATerm));
ATerm LChoice_2 (ATerm, ATerm k_41 (ATerm), ATerm l_41 (ATerm));
ATerm Choice_2 (ATerm, ATerm i_41 (ATerm), ATerm j_41 (ATerm));
ATerm Seq_2 (ATerm, ATerm g_41 (ATerm), ATerm h_41 (ATerm));
ATerm Test_1 (ATerm, ATerm e_41 (ATerm));
ATerm Not_1 (ATerm, ATerm f_41 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm x_41 (ATerm), ATerm y_41 (ATerm), ATerm z_41 (ATerm), ATerm a_42 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_41 (ATerm), ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm n_57 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_57 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_46 (ATerm));
ATerm map_1 (ATerm, ATerm l_57 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_63 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_46 (ATerm));
ATerm Program_1 (ATerm, ATerm d_33 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_33 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_46 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_47 (ATerm), ATerm t_47 (ATerm), ATerm u_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_47 (ATerm), ATerm o_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_47 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm x_48 (ATerm))
{
  ATerm w_3;
  w_3 = t;
  {
    ATerm q_5 = NULL,s_5 = NULL;
    ATerm x_3;
    x_3 = t;
    {
      ATerm r_5 = NULL;
      t = x_48(t);
      r_5 = t;
      if(q_5 != NULL && q_5 != r_5)
        _fail(r_5);
      else
        q_5 = r_5;
    }
    t = x_3;
    {
      ATerm t_5 = NULL;
      t_5 = t;
      if(s_5 != NULL && s_5 != t_5)
        _fail(t_5);
      else
        s_5 = t_5;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_5), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_5), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = w_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_40 (ATerm))
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym_Var_1))
    {
      a_6 = ATgetArgument(z_5, 0);
      {
        ATerm c_6 = NULL;
        t = not_null(a_6);
        t = y_40(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm e_38 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Assign_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        t = not_null(k_6);
        t = e_38(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(m_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm q_39 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_BuildDefault_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        t = q_39(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(w_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm c_41 (ATerm), ATerm d_41 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Op_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        ATerm j_7 = NULL;
        t = not_null(f_7);
        {
          ATerm l_7 = NULL;
          t = c_41(t);
          j_7 = t;
          t = not_null(g_7);
          t = d_41(t);
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_7), not_null(l_7));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_Str_1))
    {
      w_7 = ATgetArgument(v_7, 0);
      {
        ATerm y_3 = t;
        if(PushChoice()==0)
          {
            ATerm y_7 = NULL;
            t = not_null(w_7);
            t = o_0(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_7));
            PopChoice();
          }
        else
          {
            t = y_3;
            {
              ATerm b_8 = NULL;
              t = not_null(w_7);
              t = o_0(t);
              b_8 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_8));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  t = SSL_is_real(not_null(i_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Real_1))
    {
      r_8 = ATgetArgument(q_8, 0);
      {
        ATerm z_3 = t;
        if(PushChoice()==0)
          {
            ATerm t_8 = NULL;
            t = not_null(r_8);
            t = n_0(t);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_8));
            PopChoice();
          }
        else
          {
            t = z_3;
            {
              ATerm w_8 = NULL;
              t = not_null(r_8);
              t = n_0(t);
              w_8 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(w_8));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Int_1))
    {
      i_9 = ATgetArgument(h_9, 0);
      {
        ATerm a_4 = t;
        if(PushChoice()==0)
          {
            ATerm k_9 = NULL;
            t = not_null(i_9);
            t = m_0(t);
            k_9 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_9));
            PopChoice();
          }
        else
          {
            t = a_4;
            {
              ATerm n_9 = NULL;
              t = not_null(i_9);
              t = m_0(t);
              n_9 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_9));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  t_9 :
  if(!(match_cons(u_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm b_4 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = b_4;
      {
        ATerm c_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = c_4;
            {
              ATerm d_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = d_4;
                  {
                    ATerm e_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = e_4;
                        {
                          ATerm f_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = f_4;
                              {
                                ATerm g_4 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm a_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, a_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_4;
                                    {
                                      ATerm h_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_4;
                                          {
                                            ATerm b_0 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
                                              return(t);
                                            }
                                            t = debug_1(t, b_0);
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
ATerm Assign_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_Assign_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      {
        ATerm i_4 = t;
        if(PushChoice()==0)
          {
            ATerm i_10 = NULL;
            t = not_null(e_10);
            {
              ATerm k_10 = NULL;
              t = k_0(t);
              i_10 = t;
              t = not_null(f_10);
              t = l_0(t);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(i_10), not_null(k_10));
            }
            PopChoice();
          }
        else
          {
            t = i_4;
            {
              ATerm o_10 = NULL;
              t = not_null(e_10);
              {
                ATerm q_10 = NULL;
                t = k_0(t);
                o_10 = t;
                t = not_null(f_10);
                t = l_0(t);
                q_10 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(o_10), not_null(q_10));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm b_38 (ATerm))
{
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym_Continue_1))
    {
      c_11 = ATgetArgument(b_11, 0);
      {
        ATerm e_11 = NULL;
        t = not_null(c_11);
        t = b_38(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(e_11));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm y_37 (ATerm), ATerm z_37 (ATerm), ATerm a_38 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Alt_3))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      q_11 = ATgetArgument(n_11, 2);
      {
        ATerm u_11 = NULL;
        t = not_null(o_11);
        {
          ATerm w_11 = NULL;
          t = y_37(t);
          u_11 = t;
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = z_37(t);
            w_11 = t;
            t = not_null(q_11);
            t = a_38(t);
            y_11 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(u_11), not_null(w_11), not_null(y_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Case_4 (ATerm t, ATerm r_37 (ATerm), ATerm s_37 (ATerm), ATerm t_37 (ATerm), ATerm u_37 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Case_4))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      n_12 = ATgetArgument(k_12, 2);
      o_12 = ATgetArgument(k_12, 3);
      {
        ATerm a_13 = NULL;
        t = not_null(l_12);
        {
          ATerm c_13 = NULL;
          t = r_37(t);
          a_13 = t;
          t = not_null(m_12);
          {
            ATerm e_13 = NULL;
            t = s_37(t);
            c_13 = t;
            t = not_null(n_12);
            {
              ATerm g_13 = NULL;
              t = t_37(t);
              e_13 = t;
              t = not_null(o_12);
              t = u_37(t);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(a_13), not_null(c_13), not_null(e_13), not_null(g_13));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Let_2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      {
        ATerm z_13 = NULL;
        t = not_null(v_13);
        {
          ATerm b_14 = NULL;
          t = p_41(t);
          z_13 = t;
          t = not_null(w_13);
          t = q_41(t);
          b_14 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_13), not_null(b_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm u_42 (ATerm), ATerm v_42 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_Prim_2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      {
        ATerm q_14 = NULL;
        t = not_null(m_14);
        {
          ATerm s_14 = NULL;
          t = u_42(t);
          q_14 = t;
          t = not_null(n_14);
          t = v_42(t);
          s_14 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_14), not_null(s_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm t_42 (ATerm))
{
  ATerm j_15 = NULL,n_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Where_1))
    {
      n_15 = ATgetArgument(j_15, 0);
      {
        ATerm x_15 = NULL;
        t = not_null(n_15);
        t = t_42(t);
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(x_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_is_int(not_null(c_16));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Scope_2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm o_16 = NULL;
        t = not_null(k_16);
        {
          ATerm q_16 = NULL;
          t = r_42(t);
          o_16 = t;
          t = not_null(l_16);
          t = s_42(t);
          q_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_16), not_null(q_16));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_Build_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm d_17 = NULL;
        t = not_null(z_16);
        t = o_42(t);
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm k_42 (ATerm))
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_Thread_1))
    {
      r_17 = ATgetArgument(q_17, 0);
      {
        ATerm t_17 = NULL;
        t = not_null(r_17);
        t = k_42(t);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(t_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm j_42 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_All_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      {
        ATerm e_18 = NULL;
        t = not_null(c_18);
        t = j_42(t);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(e_18));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_Some_1))
    {
      o_18 = ATgetArgument(n_18, 0);
      {
        ATerm j_4 = t;
        if(PushChoice()==0)
          {
            ATerm q_18 = NULL;
            t = not_null(o_18);
            t = j_0(t);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(q_18));
            PopChoice();
          }
        else
          {
            t = j_4;
            {
              ATerm t_18 = NULL;
              t = not_null(o_18);
              t = j_0(t);
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(t_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm h_42 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_One_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      {
        ATerm f_19 = NULL;
        t = not_null(d_19);
        t = h_42(t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(f_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Cong_2))
    {
      o_19 = ATgetArgument(n_19, 0);
      p_19 = ATgetArgument(n_19, 1);
      {
        ATerm s_19 = NULL;
        t = not_null(o_19);
        {
          ATerm u_19 = NULL;
          t = f_42(t);
          s_19 = t;
          t = not_null(p_19);
          t = g_42(t);
          u_19 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(s_19), not_null(u_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Path_2 (ATerm t, ATerm d_42 (ATerm), ATerm e_42 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  c_20 :
  if(match_cons(g_20, sym_Path_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      {
        ATerm l_20 = NULL;
        t = not_null(h_20);
        {
          ATerm n_20 = NULL;
          t = d_42(t);
          l_20 = t;
          t = not_null(i_20);
          t = e_42(t);
          n_20 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(l_20), not_null(n_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm n_41 (ATerm), ATerm o_41 (ATerm))
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_Rec_2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      {
        ATerm b_21 = NULL;
        t = not_null(x_20);
        {
          ATerm d_21 = NULL;
          t = n_41(t);
          b_21 = t;
          t = not_null(y_20);
          t = o_41(t);
          d_21 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_21), not_null(d_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_SVar_1))
    {
      m_21 = ATgetArgument(l_21, 0);
      {
        ATerm o_21 = NULL;
        t = not_null(m_21);
        t = m_41(t);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(o_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm b_42 (ATerm), ATerm c_42 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_Call_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm b_22 = NULL;
        t = not_null(x_21);
        {
          ATerm d_22 = NULL;
          t = b_42(t);
          b_22 = t;
          t = not_null(y_21);
          t = c_42(t);
          d_22 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(b_22), not_null(d_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm k_41 (ATerm), ATerm l_41 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_LChoice_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      {
        ATerm r_22 = NULL;
        t = not_null(n_22);
        {
          ATerm t_22 = NULL;
          t = k_41(t);
          r_22 = t;
          t = not_null(o_22);
          t = l_41(t);
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_22), not_null(t_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm i_41 (ATerm), ATerm j_41 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Choice_2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      {
        ATerm h_23 = NULL;
        t = not_null(d_23);
        {
          ATerm j_23 = NULL;
          t = i_41(t);
          h_23 = t;
          t = not_null(e_23);
          t = j_41(t);
          j_23 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_23), not_null(j_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm g_41 (ATerm), ATerm h_41 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Seq_2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      {
        ATerm x_23 = NULL;
        t = not_null(t_23);
        {
          ATerm z_23 = NULL;
          t = g_41(t);
          x_23 = t;
          t = not_null(u_23);
          t = h_41(t);
          z_23 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_23), not_null(z_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm h_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Test_1))
    {
      j_24 = ATgetArgument(h_24, 0);
      {
        ATerm l_24 = NULL;
        t = not_null(j_24);
        t = e_41(t);
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_Not_1))
    {
      t_24 = ATgetArgument(s_24, 0);
      {
        ATerm v_24 = NULL;
        t = not_null(t_24);
        t = f_41(t);
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(v_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  z_24 :
  if(!(match_cons(a_25, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  b_25 :
  if(!(match_cons(c_25, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm k_4 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = k_4;
      {
        ATerm l_4 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = l_4;
            {
              ATerm m_4 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = m_4;
                  {
                    ATerm n_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = n_4;
                        {
                          ATerm o_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = o_4;
                              {
                                ATerm p_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_4;
                                    {
                                      ATerm q_4 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_4;
                                          {
                                            ATerm r_4 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, c_0, Nil_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_4;
                                                {
                                                  ATerm s_4 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_4;
                                                      {
                                                        ATerm t_4 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_4;
                                                            {
                                                              ATerm u_4 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm p_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, p_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_4;
                                                                  {
                                                                    ATerm v_4 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_4;
                                                                        {
                                                                          ATerm w_4 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_4;
                                                                              {
                                                                                ATerm x_4 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_4;
                                                                                    {
                                                                                      ATerm y_4 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_4;
                                                                                          {
                                                                                            ATerm z_4 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_4;
                                                                                                {
                                                                                                  ATerm a_5 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      ATerm q_0 (ATerm t)
                                                                                                      {
                                                                                                        ATerm r_0 (ATerm t)
                                                                                                        {
                                                                                                          ATerm b_5 = t;
                                                                                                          if(PushChoice()==0)
                                                                                                            {
                                                                                                              t = is_string_0(t);
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_5;
                                                                                                              t = list_1(t, is_int_0);
                                                                                                            }
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = list_1(t, r_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, q_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_5;
                                                                                                      {
                                                                                                        ATerm c_5 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_5;
                                                                                                            {
                                                                                                              ATerm d_5 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  ATerm s_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, s_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = d_5;
                                                                                                                  {
                                                                                                                    ATerm e_5 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm t_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm f_5 = t;
                                                                                                                            if(PushChoice()==0)
                                                                                                                              {
                                                                                                                                t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                PopChoice();
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = f_5;
                                                                                                                                {
                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                  {
                                                                                                                                    t = list_1(t, _id);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_4(t, v_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                }
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, u_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Let_2(t, t_0, strategy_expression_0);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = e_5;
                                                                                                                        {
                                                                                                                          ATerm g_5 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm w_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = Var_1(t, _id);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm x_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm y_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, y_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Case_4(t, is_string_0, w_0, x_0, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = g_5;
                                                                                                                              {
                                                                                                                                ATerm h_5 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    t = Continue_1(t, is_string_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = h_5;
                                                                                                                                    {
                                                                                                                                      ATerm i_5 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm z_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, z_0, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_5;
                                                                                                                                          {
                                                                                                                                            ATerm j_5 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm a_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, a_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = j_5;
                                                                                                                                                {
                                                                                                                                                  ATerm b_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, b_1);
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
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_is_string(not_null(f_25));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(!(match_cons(j_25, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm x_41 (ATerm), ATerm y_41 (ATerm), ATerm z_41 (ATerm), ATerm a_42 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_SDef_4))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      t_25 = ATgetArgument(q_25, 2);
      u_25 = ATgetArgument(q_25, 3);
      {
        ATerm z_25 = NULL;
        t = not_null(r_25);
        {
          ATerm b_26 = NULL;
          t = x_41(t);
          z_25 = t;
          t = not_null(s_25);
          {
            ATerm d_26 = NULL;
            t = y_41(t);
            b_26 = t;
            t = not_null(t_25);
            {
              ATerm f_26 = NULL;
              t = z_41(t);
              d_26 = t;
              t = not_null(u_25);
              t = a_42(t);
              f_26 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(z_25), not_null(b_26), not_null(d_26), not_null(f_26));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_41 (ATerm), ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_SDef_3))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      u_26 = ATgetArgument(r_26, 2);
      {
        ATerm y_26 = NULL;
        t = not_null(s_26);
        {
          ATerm a_27 = NULL;
          t = r_41(t);
          y_26 = t;
          t = not_null(t_26);
          {
            ATerm c_27 = NULL;
            t = s_41(t);
            a_27 = t;
            t = not_null(u_26);
            t = t_41(t);
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_26), not_null(a_27), not_null(c_27));
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
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = k_5;
      {
        ATerm l_5 = t;
        if(PushChoice()==0)
          {
            ATerm c_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, c_1, is_string_0, Nil_0, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = l_5;
            {
              ATerm d_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, d_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm i_27 (ATerm t)
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
        t = Cons_2(t, n_57, i_27);
      }
    return(t);
  }
  t = i_27(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      t = list_1(t, strategy_definition_0);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm e_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  j_27 :
  if(!(match_cons(k_27, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym_TCons_2))
    {
      q_27 = ATgetArgument(p_27, 0);
      r_27 = ATgetArgument(p_27, 1);
      {
        ATerm u_27 = NULL;
        t = not_null(q_27);
        {
          ATerm w_27 = NULL;
          t = w_42(t);
          u_27 = t;
          t = not_null(r_27);
          t = x_42(t);
          w_27 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_27), not_null(w_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm o_5;
  o_5 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm e_28 = NULL,f_28 = NULL;
      e_28 = t;
      c_28 :
      if(match_cons(e_28, sym_Program_1))
        {
          f_28 = ATgetArgument(e_28, 0);
          if(d_28 != NULL && d_28 != f_28)
            _fail(f_28);
          else
            d_28 = f_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, f_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = o_5;
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
  ATerm m_28 = NULL,n_28 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      ATerm p_5 = t;
      if(PushChoice()==0)
        {
          ATerm j_1 (ATerm t)
          {
            ATerm o_28 = NULL;
            o_28 = t;
            h_28 :
            if(!(match_cons(o_28, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_1);
          PopChoice();
          _fail(t);
        }
      else
        t = p_5;
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
          ATerm p_28 = NULL,q_28 = NULL;
          p_28 = t;
          j_28 :
          if(match_cons(p_28, sym_Runtime_1))
            {
              q_28 = ATgetArgument(p_28, 0);
              if(n_28 != NULL && n_28 != q_28)
                _fail(q_28);
              else
                n_28 = q_28;
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
      {
        ATerm n_1 (ATerm t)
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_28 = NULL,s_28 = NULL;
            r_28 = t;
            l_28 :
            if(match_cons(r_28, sym_Program_1))
              {
                s_28 = ATgetArgument(r_28, 0);
                if(m_28 != NULL && m_28 != s_28)
                  _fail(s_28);
                else
                  m_28 = s_28;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_1);
          return(t);
        }
        ATerm o_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, n_1, o_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_28), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, g_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  z_28 = t;
  w_28 :
  if(match_cons(z_28, sym_TCons_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      x_28 :
      if(match_cons(b_29, sym_TCons_2))
        {
          c_29 = ATgetArgument(b_29, 0);
          d_29 = ATgetArgument(b_29, 1);
          y_28 :
          if(match_cons(d_29, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(a_29), not_null(c_29));
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
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  l_29 = t;
  i_29 :
  if(match_cons(l_29, sym_TCons_2))
    {
      m_29 = ATgetArgument(l_29, 0);
      n_29 = ATgetArgument(l_29, 1);
      j_29 :
      if(match_cons(n_29, sym_TCons_2))
        {
          o_29 = ATgetArgument(n_29, 0);
          p_29 = ATgetArgument(n_29, 1);
          k_29 :
          if(match_cons(p_29, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(m_29), not_null(o_29));
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
  ATerm x_29 = NULL;
  ATerm u_5;
  u_5 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm v_5 = t;
      if(PushChoice()==0)
        {
          ATerm s_1 (ATerm t)
          {
            ATerm y_29 = NULL,z_29 = NULL;
            y_29 = t;
            u_29 :
            if(match_cons(y_29, sym_Output_1))
              {
                z_29 = ATgetArgument(y_29, 0);
                if(x_29 != NULL && x_29 != z_29)
                  _fail(z_29);
                else
                  x_29 = z_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_1);
          PopChoice();
        }
      else
        {
          t = v_5;
          {
            ATerm a_30 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            a_30 = t;
            if(x_29 != NULL && x_29 != a_30)
              _fail(a_30);
            else
              x_29 = a_30;
          }
        }
      return(t);
    }
    ATerm r_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, q_1, r_1);
  }
  t = u_5;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = not_null(x_29);
          return(t);
        }
        t = split_2(t, v_1, _id);
        return(t);
      }
      t = TCons_2(t, u_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, t_1);
    {
      ATerm w_5 = t;
      if(PushChoice()==0)
        {
          ATerm w_1 (ATerm t)
          {
            ATerm y_1 (ATerm t)
            {
              ATerm b_30 = NULL;
              b_30 = t;
              w_29 :
              if(!(match_cons(b_30, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, y_1);
            return(t);
          }
          ATerm x_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, w_1, x_1);
          PopChoice();
        }
      else
        {
          t = w_5;
          {
            ATerm z_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, z_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm e_48 (ATerm))
{
  ATerm j_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  ATerm x_5;
  x_5 = t;
  t = dtime_0(t);
  t = x_5;
  t = e_48(t);
  {
    ATerm b_6;
    b_6 = t;
    {
      ATerm k_30 = NULL;
      t = dtime_0(t);
      k_30 = t;
      if(j_30 != NULL && j_30 != k_30)
        _fail(k_30);
      else
        j_30 = k_30;
    }
    t = b_6;
    l_30 = t;
    g_30 :
    if(match_cons(l_30, sym_TCons_2))
      {
        m_30 = ATgetArgument(l_30, 0);
        n_30 = ATgetArgument(l_30, 1);
        h_30 :
        if(match_cons(n_30, sym_TCons_2))
          {
            o_30 = ATgetArgument(n_30, 0);
            p_30 = ATgetArgument(n_30, 1);
            i_30 :
            if(match_cons(p_30, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(j_30)), not_null(m_30)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_30), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_30 = NULL;
  v_30 = t;
  t = SSL_ReadFromFile(not_null(v_30));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm b_31 = NULL;
  ATerm d_31 = NULL,f_31 = NULL;
  b_31 = t;
  {
    ATerm d_6;
    d_6 = t;
    {
      ATerm e_31 = NULL;
      t = not_null(b_31);
      t = t_50(t);
      e_31 = t;
      if(d_31 != NULL && d_31 != e_31)
        _fail(e_31);
      else
        d_31 = e_31;
    }
    t = d_6;
    {
      ATerm g_31 = NULL;
      t = not_null(b_31);
      t = u_50(t);
      g_31 = t;
      if(f_31 != NULL && f_31 != g_31)
        _fail(g_31);
      else
        f_31 = g_31;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_31), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_31 = NULL;
  ATerm e_6;
  e_6 = t;
  {
    ATerm f_6 = t;
    if(PushChoice()==0)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm o_31 = NULL,p_31 = NULL;
          o_31 = t;
          l_31 :
          if(match_cons(o_31, sym_Input_1))
            {
              p_31 = ATgetArgument(o_31, 0);
              if(n_31 != NULL && n_31 != p_31)
                _fail(p_31);
              else
                n_31 = p_31;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_2);
        PopChoice();
      }
    else
      {
        t = f_6;
        {
          ATerm q_31 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          q_31 = t;
          if(n_31 != NULL && n_31 != q_31)
            _fail(q_31);
          else
            n_31 = q_31;
        }
      }
  }
  t = e_6;
  {
    ATerm b_2 (ATerm t)
    {
      t = not_null(n_31);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  t_31 :
  if(!(match_cons(u_31, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm g_6 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = g_6;
        {
          ATerm h_6 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = h_6;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_2);
  t = d_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  t = SSL_table_create(not_null(w_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  {
    ATerm l_6;
    l_6 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_32), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = l_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  p_32 = t;
  n_32 :
  if(match_string(p_32, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(p_32, sym_Cons_2))
        {
          q_32 = ATgetArgument(p_32, 0);
          r_32 = ATgetArgument(p_32, 1);
          o_32 :
          if(match_cons(r_32, sym_Cons_2))
            {
              s_32 = ATgetArgument(r_32, 0);
              t_32 = ATgetArgument(r_32, 1);
              {
                ATerm x_32 = NULL;
                ATerm n_6;
                n_6 = t;
                t = not_null(q_32);
                t = g_0(t);
                t = n_6;
                {
                  ATerm y_32 = NULL;
                  t = not_null(s_32);
                  t = h_0(t);
                  y_32 = t;
                  if(x_32 != NULL && x_32 != y_32)
                    _fail(y_32);
                  else
                    x_32 = y_32;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_32), not_null(t_32));
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
  ATerm o_6 = t;
  if(PushChoice()==0)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm p_33 = NULL;
        p_33 = t;
        c_33 :
        if(!(match_string(p_33, "-S")))
          {
            if(!(match_string(p_33, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, d_2, e_2, f_2);
      PopChoice();
    }
  else
    {
      t = o_6;
      {
        ATerm p_6 = t;
        if(PushChoice()==0)
          {
            ATerm g_2 (ATerm t)
            {
              ATerm q_33 = NULL;
              q_33 = t;
              f_33 :
              if(!(match_string(q_33, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, g_2, h_2, i_2);
            PopChoice();
          }
        else
          {
            t = p_6;
            {
              ATerm q_6 = t;
              if(PushChoice()==0)
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm r_33 = NULL;
                    r_33 = t;
                    g_33 :
                    if(!(match_string(r_33, "-v")))
                      {
                        if(!(match_string(r_33, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm k_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm l_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, j_2, k_2, l_2);
                  PopChoice();
                }
              else
                {
                  t = q_6;
                  {
                    ATerm r_6 = t;
                    if(PushChoice()==0)
                      {
                        ATerm m_2 (ATerm t)
                        {
                          ATerm s_33 = NULL;
                          s_33 = t;
                          h_33 :
                          if(!(match_string(s_33, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_2 (ATerm t)
                        {
                          ATerm t_33 = NULL;
                          ATerm u_33 = NULL;
                          u_33 = t;
                          if(t_33 != NULL && t_33 != u_33)
                            _fail(u_33);
                          else
                            t_33 = u_33;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_33));
                          return(t);
                        }
                        ATerm o_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, m_2, n_2, o_2);
                        PopChoice();
                      }
                    else
                      {
                        t = r_6;
                        {
                          ATerm v_6 = t;
                          if(PushChoice()==0)
                            {
                              ATerm p_2 (ATerm t)
                              {
                                ATerm v_33 = NULL;
                                v_33 = t;
                                j_33 :
                                if(!(match_string(v_33, "-i")))
                                  {
                                    if(!(match_string(v_33, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm q_2 (ATerm t)
                              {
                                ATerm w_33 = NULL;
                                ATerm x_33 = NULL;
                                x_33 = t;
                                if(w_33 != NULL && w_33 != x_33)
                                  _fail(x_33);
                                else
                                  w_33 = x_33;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_33));
                                return(t);
                              }
                              ATerm r_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, p_2, q_2, r_2);
                              PopChoice();
                            }
                          else
                            {
                              t = v_6;
                              {
                                ATerm x_6 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm s_2 (ATerm t)
                                    {
                                      ATerm y_33 = NULL;
                                      y_33 = t;
                                      l_33 :
                                      if(!(match_string(y_33, "-o")))
                                        {
                                          if(!(match_string(y_33, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      ATerm z_33 = NULL;
                                      ATerm a_34 = NULL;
                                      a_34 = t;
                                      if(z_33 != NULL && z_33 != a_34)
                                        _fail(a_34);
                                      else
                                        z_33 = a_34;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_33));
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_2, t_2, u_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_6;
                                    {
                                      ATerm y_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm b_34 = NULL;
                                            b_34 = t;
                                            n_33 :
                                            if(!(match_string(b_34, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm w_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, v_2, w_2, x_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_6;
                                          {
                                            ATerm y_2 (ATerm t)
                                            {
                                              ATerm c_34 = NULL;
                                              c_34 = t;
                                              o_33 :
                                              if(!(match_string(c_34, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, y_2, z_2, a_3);
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
  ATerm h_34 = NULL;
  h_34 = t;
  t = SSL_table_destroy(not_null(h_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_exit(not_null(l_34));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_implode_string(not_null(p_34));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm s_34 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, s_34);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = Nil_0(t);
        t = z_57(t);
      }
    return(t);
  }
  t = s_34(t);
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
        ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
        v_34 = t;
        u_34 :
        if(match_cons(v_34, sym_Cons_2))
          {
            w_34 = ATgetArgument(v_34, 0);
            x_34 = ATgetArgument(v_34, 1);
            t = not_null(w_34);
            {
              ATerm b_3 (ATerm t)
              {
                t = not_null(x_34);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_3);
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
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_explode_string(not_null(d_35));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm g_35 (ATerm t)
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
        t = Cons_2(t, l_57, g_35);
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  m_35 = t;
  i_35 :
  if(match_cons(m_35, sym_TCons_2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      j_35 :
      if(match_cons(n_35, sym_Nil_0))
        {
          k_35 :
          if(match_cons(o_35, sym_TCons_2))
            {
              p_35 = ATgetArgument(o_35, 0);
              q_35 = ATgetArgument(o_35, 1);
              l_35 :
              if(match_cons(q_35, sym_TNil_0))
                t = not_null(p_35);
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
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  y_35 = t;
  u_35 :
  if(match_cons(y_35, sym_TCons_2))
    {
      z_35 = ATgetArgument(y_35, 0);
      c_36 = ATgetArgument(y_35, 1);
      v_35 :
      if(match_cons(z_35, sym_Cons_2))
        {
          a_36 = ATgetArgument(z_35, 0);
          b_36 = ATgetArgument(z_35, 1);
          w_35 :
          if(match_cons(c_36, sym_TCons_2))
            {
              d_36 = ATgetArgument(c_36, 0);
              e_36 = ATgetArgument(c_36, 1);
              x_35 :
              if(match_cons(e_36, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_36), not_null(d_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm j_36 (ATerm t)
  {
    ATerm c_7 = t;
    if(PushChoice()==0)
      {
        t = g_63(t);
        t = j_36(t);
        PopChoice();
      }
    else
      {
        t = c_7;
        t = h_63(t);
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_63 (ATerm))
{
  t = repeat_2(t, j_63, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_33 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym_Program_1))
    {
      s_36 = ATgetArgument(r_36, 0);
      {
        ATerm u_36 = NULL;
        t = not_null(s_36);
        t = d_33(t);
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm c_37 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm d_37 = NULL;
      d_37 = t;
      if(c_37 != NULL && c_37 != d_37)
        _fail(d_37);
      else
        c_37 = d_37;
      return(t);
    }
    t = Program_1(t, d_3);
    return(t);
  }
  t = option_defined_1(t, c_3);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm e_37 = NULL;
      ATerm f_37 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(c_37);
          return(t);
        }
        t = short_description_1(t, f_3);
        t = concat_strings_0(t);
        f_37 = t;
        if(e_37 != NULL && e_37 != f_37)
          _fail(f_37);
        else
          e_37 = f_37;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_37), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, e_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm g_37 = NULL;
        g_37 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_37), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, g_3);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_37 = NULL;
          ATerm j_37 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm i_3 (ATerm t)
            {
              t = not_null(c_37);
              return(t);
            }
            t = long_description_1(t, i_3);
            t = concat_strings_0(t);
            j_37 = t;
            if(i_37 != NULL && i_37 != j_37)
              _fail(j_37);
            else
              i_37 = j_37;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_37), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, h_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,c_38 = NULL,d_38 = NULL,f_38 = NULL;
  w_37 = t;
  p_37 :
  if(match_cons(w_37, sym_TCons_2))
    {
      x_37 = ATgetArgument(w_37, 0);
      c_38 = ATgetArgument(w_37, 1);
      q_37 :
      if(match_cons(c_38, sym_TCons_2))
        {
          d_38 = ATgetArgument(c_38, 0);
          f_38 = ATgetArgument(c_38, 1);
          v_37 :
          if(match_cons(f_38, sym_TNil_0))
            {
              ATerm h_7;
              h_7 = t;
              t = SSL_printnl(not_null(x_37), not_null(d_38));
              t = h_7;
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
ATerm Undefined_1 (ATerm t, ATerm e_33 (ATerm))
{
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym_Undefined_1))
    {
      n_38 = ATgetArgument(m_38, 0);
      {
        ATerm p_38 = NULL;
        t = not_null(n_38);
        t = e_33(t);
        p_38 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_38));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm t_38 (ATerm t)
  {
    ATerm i_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, t_57, _id);
        PopChoice();
      }
    else
      {
        t = i_7;
        t = Cons_2(t, _id, t_38);
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_47 (ATerm))
{
  t = fetch_1(t, i_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  u_38 :
  if(!(match_cons(v_38, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm k_7 = t;
  if(PushChoice()==0)
    {
      t = d_64(t);
      PopChoice();
    }
  else
    t = k_7;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  a_39 = t;
  x_38 :
  if(match_cons(a_39, sym_TCons_2))
    {
      b_39 = ATgetArgument(a_39, 0);
      c_39 = ATgetArgument(a_39, 1);
      y_38 :
      if(match_cons(c_39, sym_TCons_2))
        {
          d_39 = ATgetArgument(c_39, 0);
          e_39 = ATgetArgument(c_39, 1);
          z_38 :
          if(match_cons(e_39, sym_TNil_0))
            t = SSL_table_get(not_null(b_39), not_null(d_39));
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
  ATerm o_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  o_39 = t;
  k_39 :
  if(match_cons(o_39, sym_TCons_2))
    {
      p_39 = ATgetArgument(o_39, 0);
      r_39 = ATgetArgument(o_39, 1);
      l_39 :
      if(match_cons(r_39, sym_TCons_2))
        {
          s_39 = ATgetArgument(r_39, 0);
          t_39 = ATgetArgument(r_39, 1);
          m_39 :
          if(match_cons(t_39, sym_TCons_2))
            {
              u_39 = ATgetArgument(t_39, 0);
              v_39 = ATgetArgument(t_39, 1);
              n_39 :
              if(match_cons(v_39, sym_TNil_0))
                {
                  ATerm m_7;
                  m_7 = t;
                  {
                    ATerm z_39 = NULL;
                    ATerm a_40 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm n_7 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = n_7;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      a_40 = t;
                      if(z_39 != NULL && z_39 != a_40)
                        _fail(a_40);
                      else
                        z_39 = a_40;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_39), not_null(z_39)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = m_7;
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
ATerm register_usage_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm e_40 = NULL;
  ATerm f_40 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = o_46(t);
  f_40 = t;
  if(e_40 != NULL && e_40 != f_40)
    _fail(f_40);
  else
    e_40 = f_40;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_40), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_string(l_40, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(l_40, sym_Cons_2))
        {
          m_40 = ATgetArgument(l_40, 0);
          n_40 = ATgetArgument(l_40, 1);
          {
            ATerm q_40 = NULL;
            ATerm o_7;
            o_7 = t;
            t = not_null(m_40);
            t = d_0(t);
            t = o_7;
            {
              ATerm r_40 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              r_40 = t;
              if(q_40 != NULL && q_40 != r_40)
                _fail(r_40);
              else
                q_40 = r_40;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_40), not_null(n_40));
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
  ATerm j_3 (ATerm t)
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
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,u_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_Cons_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      u_41 = ATgetArgument(a_41, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_41)), not_null(u_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm q_42 = NULL,y_42 = NULL,z_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Cons_2))
    {
      y_42 = ATgetArgument(q_42, 0);
      z_42 = ATgetArgument(q_42, 1);
      {
        ATerm e_43 = NULL;
        t = not_null(y_42);
        {
          ATerm g_43 = NULL;
          t = a_43(t);
          e_43 = t;
          t = not_null(z_42);
          t = b_43(t);
          g_43 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_43), not_null(g_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm m_43 = NULL;
  m_43 = t;
  l_43 :
  if(!(match_cons(m_43, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm p_7;
  p_7 = t;
  {
    ATerm m_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = m_46(t);
      return(t);
    }
    t = try_1(t, m_3);
  }
  t = p_7;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_43 = NULL;
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_43));
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm q_7 = t;
      if(PushChoice()==0)
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
              t = m_46(t);
              t = Cons_2(t, _id, o_3);
            }
          PopChoice();
        }
      else
        {
          t = q_7;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
    a_44 = t;
    t_43 :
    if(match_cons(a_44, sym_TCons_2))
      {
        b_44 = ATgetArgument(a_44, 0);
        c_44 = ATgetArgument(a_44, 1);
        u_43 :
        if(match_cons(c_44, sym_TCons_2))
          {
            d_44 = ATgetArgument(c_44, 0);
            e_44 = ATgetArgument(c_44, 1);
            v_43 :
            if(match_cons(e_44, sym_TCons_2))
              {
                f_44 = ATgetArgument(e_44, 0);
                g_44 = ATgetArgument(e_44, 1);
                w_43 :
                if(match_cons(g_44, sym_TNil_0))
                  {
                    if(x_43 != NULL && x_43 != b_44)
                      _fail(b_44);
                    else
                      x_43 = b_44;
                    if(y_43 != NULL && y_43 != d_44)
                      _fail(d_44);
                    else
                      y_43 = d_44;
                    if(z_43 != NULL && z_43 != f_44)
                      _fail(f_44);
                    else
                      z_43 = f_44;
                    t = SSL_table_put(not_null(x_43), not_null(y_43), not_null(z_43));
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
  t = s_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_46 (ATerm))
{
  ATerm j_44 = NULL;
  ATerm t_7;
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = t_7;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm x_7 = t;
      if(PushChoice()==0)
        {
          t = l_46(t);
          PopChoice();
        }
      else
        {
          t = x_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm z_7 = t;
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
            t = z_7;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm k_44 = NULL;
                  k_44 = t;
                  if(j_44 != NULL && j_44 != k_44)
                    _fail(k_44);
                  else
                    j_44 = k_44;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm a_8;
                a_8 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_44), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = a_8;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm c_8;
        c_8 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = c_8;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_47 (ATerm), ATerm t_47 (ATerm), ATerm u_47 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm d_8 = t;
    if(PushChoice()==0)
      {
        t = t_47(t);
        PopChoice();
      }
    else
      {
        t = d_8;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_3);
  t = store_options_0(t);
  {
    ATerm e_8 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, u_47);
        PopChoice();
      }
    else
      {
        t = e_8;
        {
          ATerm f_8 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, s_47);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = f_8;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_47 (ATerm), ATerm o_47 (ATerm))
{
  t = iowrap_3(t, n_47, o_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_47 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      t = TCons_2(t, k_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, v_3);
    return(t);
  }
  t = iowrap_2(t, u_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}

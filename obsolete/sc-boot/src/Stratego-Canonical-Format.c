#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_MatchOp_2;
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
ATerm debug_1 (ATerm, ATerm b_49 (ATerm));
ATerm Continue_1 (ATerm, ATerm q_33 (ATerm));
ATerm Var_1 (ATerm, ATerm a_41 (ATerm));
ATerm Assign_1 (ATerm, ATerm t_33 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm u_33 (ATerm), ATerm v_33 (ATerm));
ATerm Alt_3 (ATerm, ATerm n_33 (ATerm), ATerm o_33 (ATerm), ATerm p_33 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm x_64 (ATerm));
ATerm Case_4 (ATerm, ATerm g_33 (ATerm), ATerm h_33 (ATerm), ATerm i_33 (ATerm), ATerm j_33 (ATerm));
ATerm Let_2 (ATerm, ATerm r_41 (ATerm), ATerm s_41 (ATerm));
ATerm Prim_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm Where_1 (ATerm, ATerm v_42 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_42 (ATerm), ATerm u_42 (ATerm));
ATerm Build_1 (ATerm, ATerm q_42 (ATerm));
ATerm Op_2 (ATerm, ATerm e_41 (ATerm), ATerm f_41 (ATerm));
ATerm As_2 (ATerm, ATerm q_39 (ATerm), ATerm r_39 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_39 (ATerm));
ATerm Str_1 (ATerm, ATerm m_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm l_0 (ATerm));
ATerm Int_1 (ATerm, ATerm k_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm p_42 (ATerm));
ATerm Thread_1 (ATerm, ATerm m_42 (ATerm));
ATerm All_1 (ATerm, ATerm l_42 (ATerm));
ATerm Some_1 (ATerm, ATerm j_0 (ATerm));
ATerm One_1 (ATerm, ATerm j_42 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_42 (ATerm), ATerm i_42 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_41 (ATerm), ATerm q_41 (ATerm));
ATerm SVar_1 (ATerm, ATerm o_41 (ATerm));
ATerm Call_2 (ATerm, ATerm d_42 (ATerm), ATerm e_42 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_41 (ATerm), ATerm n_41 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_41 (ATerm), ATerm l_41 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_41 (ATerm), ATerm j_41 (ATerm));
ATerm Test_1 (ATerm, ATerm g_41 (ATerm));
ATerm Not_1 (ATerm, ATerm h_41 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_41 (ATerm), ATerm u_41 (ATerm), ATerm v_41 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm r_57 (ATerm));
ATerm Strategies_1 (ATerm, ATerm o_40 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_40 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_46 (ATerm));
ATerm map_1 (ATerm, ATerm p_57 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_63 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_46 (ATerm));
ATerm Program_1 (ATerm, ATerm z_33 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_34 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_46 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_47 (ATerm), ATerm x_47 (ATerm), ATerm y_47 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_47 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm m_4;
  m_4 = t;
  {
    ATerm a_6 = NULL,c_6 = NULL;
    ATerm n_4;
    n_4 = t;
    {
      ATerm b_6 = NULL;
      t = b_49(t);
      b_6 = t;
      if(a_6 != NULL && a_6 != b_6)
        _fail(b_6);
      else
        a_6 = b_6;
    }
    t = n_4;
    {
      ATerm d_6 = NULL;
      d_6 = t;
      if(c_6 != NULL && c_6 != d_6)
        _fail(d_6);
      else
        c_6 = d_6;
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_6), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
    }
  }
  t = m_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm q_33 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Continue_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        t = not_null(k_6);
        t = q_33(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(m_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_41 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Var_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        t = a_41(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm t_33 (ATerm))
{
  ATerm d_7 = NULL,e_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_Assign_1))
    {
      e_7 = ATgetArgument(d_7, 0);
      {
        ATerm g_7 = NULL;
        t = not_null(e_7);
        t = t_33(t);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(g_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm o_4 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = o_4;
      {
        ATerm p_4 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = p_4;
            {
              ATerm q_4 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = q_4;
                  {
                    ATerm r_4 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = r_4;
                        {
                          ATerm s_4 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = s_4;
                              {
                                ATerm t_4 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_4;
                                    {
                                      ATerm u_4 = t;
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
                                          t = u_4;
                                          {
                                            ATerm v_4 = t;
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
                                                t = v_4;
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
ATerm Assign_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Assign_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        ATerm w_4 = t;
        if(PushChoice()==0)
          {
            ATerm x_7 = NULL;
            t = not_null(t_7);
            {
              ATerm z_7 = NULL;
              t = n_0(t);
              x_7 = t;
              t = not_null(u_7);
              t = o_0(t);
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(x_7), not_null(z_7));
            }
            PopChoice();
          }
        else
          {
            t = w_4;
            {
              ATerm d_8 = NULL;
              t = not_null(t_7);
              {
                ATerm f_8 = NULL;
                t = n_0(t);
                d_8 = t;
                t = not_null(u_7);
                t = o_0(t);
                f_8 = t;
                t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(d_8), not_null(f_8));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm u_33 (ATerm), ATerm v_33 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Fun_2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        ATerm w_8 = NULL;
        t = not_null(s_8);
        {
          ATerm y_8 = NULL;
          t = u_33(t);
          w_8 = t;
          t = not_null(t_8);
          t = v_33(t);
          y_8 = t;
          t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(w_8), not_null(y_8));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm n_33 (ATerm), ATerm o_33 (ATerm), ATerm p_33 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Alt_3))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      l_9 = ATgetArgument(i_9, 2);
      {
        ATerm p_9 = NULL;
        t = not_null(j_9);
        {
          ATerm r_9 = NULL;
          t = n_33(t);
          p_9 = t;
          t = not_null(k_9);
          {
            ATerm t_9 = NULL;
            t = o_33(t);
            r_9 = t;
            t = not_null(l_9);
            t = p_33(t);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(p_9), not_null(r_9), not_null(t_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm x_4 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm y_4 = t;
        if(PushChoice()==0)
          {
            t = Fun_2(t, is_string_0, is_int_0);
            PopChoice();
          }
        else
          {
            t = y_4;
            {
              ATerm z_4 = t;
              if(PushChoice()==0)
                {
                  t = Str_1(t, is_string_0);
                  PopChoice();
                }
              else
                {
                  t = z_4;
                  {
                    ATerm a_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Int_1(t, is_int_0);
                        PopChoice();
                      }
                    else
                      {
                        t = a_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, r_0);
        return(t);
      }
      t = Alt_3(t, p_0, q_0, x_64);
      PopChoice();
    }
  else
    {
      t = x_4;
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, s_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm g_33 (ATerm), ATerm h_33 (ATerm), ATerm i_33 (ATerm), ATerm j_33 (ATerm))
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym_Case_4))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      i_10 = ATgetArgument(f_10, 2);
      j_10 = ATgetArgument(f_10, 3);
      {
        ATerm o_10 = NULL;
        t = not_null(g_10);
        {
          ATerm q_10 = NULL;
          t = g_33(t);
          o_10 = t;
          t = not_null(h_10);
          {
            ATerm s_10 = NULL;
            t = h_33(t);
            q_10 = t;
            t = not_null(i_10);
            {
              ATerm u_10 = NULL;
              t = i_33(t);
              s_10 = t;
              t = not_null(j_10);
              t = j_33(t);
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(o_10), not_null(q_10), not_null(s_10), not_null(u_10));
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm r_41 (ATerm), ATerm s_41 (ATerm))
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_Let_2))
    {
      g_11 = ATgetArgument(f_11, 0);
      h_11 = ATgetArgument(f_11, 1);
      {
        ATerm k_11 = NULL;
        t = not_null(g_11);
        {
          ATerm m_11 = NULL;
          t = r_41(t);
          k_11 = t;
          t = not_null(h_11);
          t = s_41(t);
          m_11 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_11), not_null(m_11));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_Prim_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm a_12 = NULL;
        t = not_null(w_11);
        {
          ATerm c_12 = NULL;
          t = w_42(t);
          a_12 = t;
          t = not_null(x_11);
          t = x_42(t);
          c_12 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_12), not_null(c_12));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm v_42 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Where_1))
    {
      l_12 = ATgetArgument(k_12, 0);
      {
        ATerm n_12 = NULL;
        t = not_null(l_12);
        t = v_42(t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm t_42 (ATerm), ATerm u_42 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  u_12 :
  if(match_cons(c_13, sym_Scope_2))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      {
        ATerm h_13 = NULL;
        t = not_null(d_13);
        {
          ATerm j_13 = NULL;
          t = t_42(t);
          h_13 = t;
          t = not_null(e_13);
          t = u_42(t);
          j_13 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_13), not_null(j_13));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Build_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      {
        ATerm x_13 = NULL;
        t = not_null(v_13);
        t = q_42(t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_13));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm e_41 (ATerm), ATerm f_41 (ATerm))
{
  ATerm f_14 = NULL,h_14 = NULL,i_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Op_2))
    {
      h_14 = ATgetArgument(f_14, 0);
      i_14 = ATgetArgument(f_14, 1);
      {
        ATerm l_14 = NULL;
        t = not_null(h_14);
        {
          ATerm n_14 = NULL;
          t = e_41(t);
          l_14 = t;
          t = not_null(i_14);
          t = f_41(t);
          n_14 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(l_14), not_null(n_14));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm q_39 (ATerm), ATerm r_39 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_As_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm k_15 = NULL;
        t = not_null(x_14);
        {
          ATerm p_15 = NULL;
          t = q_39(t);
          k_15 = t;
          t = not_null(y_14);
          t = r_39(t);
          p_15 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(k_15), not_null(p_15));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm s_39 (ATerm))
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_BuildDefault_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
        ATerm i_16 = NULL;
        t = not_null(g_16);
        t = s_39(t);
        i_16 = t;
        t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(i_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Str_1))
    {
      s_16 = ATgetArgument(r_16, 0);
      {
        ATerm b_5 = t;
        if(PushChoice()==0)
          {
            ATerm u_16 = NULL;
            t = not_null(s_16);
            t = m_0(t);
            u_16 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(u_16));
            PopChoice();
          }
        else
          {
            t = b_5;
            {
              ATerm x_16 = NULL;
              t = not_null(s_16);
              t = m_0(t);
              x_16 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(x_16));
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
  ATerm g_17 = NULL;
  g_17 = t;
  t = SSL_is_real(not_null(g_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_Real_1))
    {
      v_17 = ATgetArgument(u_17, 0);
      {
        ATerm c_5 = t;
        if(PushChoice()==0)
          {
            ATerm y_17 = NULL;
            t = not_null(v_17);
            t = l_0(t);
            y_17 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(y_17));
            PopChoice();
          }
        else
          {
            t = c_5;
            {
              ATerm b_18 = NULL;
              t = not_null(v_17);
              t = l_0(t);
              b_18 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_18));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Int_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm d_5 = t;
        if(PushChoice()==0)
          {
            ATerm p_18 = NULL;
            t = not_null(n_18);
            t = k_0(t);
            p_18 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(p_18));
            PopChoice();
          }
        else
          {
            t = d_5;
            {
              ATerm s_18 = NULL;
              t = not_null(n_18);
              t = k_0(t);
              s_18 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(s_18));
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
  ATerm z_18 = NULL;
  z_18 = t;
  y_18 :
  if(!(match_cons(z_18, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm e_5 = t;
  if(PushChoice()==0)
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = e_5;
      {
        ATerm f_5 = t;
        if(PushChoice()==0)
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = f_5;
            {
              ATerm g_5 = t;
              if(PushChoice()==0)
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = g_5;
                  {
                    ATerm h_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = h_5;
                        {
                          ATerm i_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = i_5;
                              {
                                ATerm j_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_5;
                                    {
                                      ATerm k_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm t_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, t_0, match_term_exp_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_5;
                                          {
                                            ATerm l_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, u_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_5;
                                                {
                                                  ATerm v_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = debug_1(t, v_0);
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
ATerm Match_1 (ATerm t, ATerm p_42 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Match_1))
    {
      f_19 = ATgetArgument(e_19, 0);
      {
        ATerm h_19 = NULL;
        t = not_null(f_19);
        t = p_42(t);
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Thread_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm r_19 = NULL;
        t = not_null(p_19);
        t = m_42(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(r_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm l_42 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_All_1))
    {
      z_19 = ATgetArgument(y_19, 0);
      {
        ATerm b_20 = NULL;
        t = not_null(z_19);
        t = l_42(t);
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym_All_1, not_null(b_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_Some_1))
    {
      o_20 = ATgetArgument(n_20, 0);
      {
        ATerm m_5 = t;
        if(PushChoice()==0)
          {
            ATerm q_20 = NULL;
            t = not_null(o_20);
            t = j_0(t);
            q_20 = t;
            t = (ATerm) ATmakeAppl(sym_Some_1, not_null(q_20));
            PopChoice();
          }
        else
          {
            t = m_5;
            {
              ATerm t_20 = NULL;
              t = not_null(o_20);
              t = j_0(t);
              t_20 = t;
              t = (ATerm) ATmakeAppl(sym_Some_1, not_null(t_20));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm j_42 (ATerm))
{
  ATerm c_21 = NULL,d_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym_One_1))
    {
      d_21 = ATgetArgument(c_21, 0);
      {
        ATerm f_21 = NULL;
        t = not_null(d_21);
        t = j_42(t);
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym_One_1, not_null(f_21));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm h_42 (ATerm), ATerm i_42 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_Cong_2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        ATerm s_21 = NULL;
        t = not_null(o_21);
        {
          ATerm u_21 = NULL;
          t = h_42(t);
          s_21 = t;
          t = not_null(p_21);
          t = i_42(t);
          u_21 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(s_21), not_null(u_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_is_int(not_null(a_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_Path_2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      {
        ATerm m_22 = NULL;
        t = not_null(i_22);
        {
          ATerm o_22 = NULL;
          t = f_42(t);
          m_22 = t;
          t = not_null(j_22);
          t = g_42(t);
          o_22 = t;
          t = (ATerm) ATmakeAppl(sym_Path_2, not_null(m_22), not_null(o_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm p_41 (ATerm), ATerm q_41 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_Rec_2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        ATerm c_23 = NULL;
        t = not_null(y_22);
        {
          ATerm e_23 = NULL;
          t = p_41(t);
          c_23 = t;
          t = not_null(z_22);
          t = q_41(t);
          e_23 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(c_23), not_null(e_23));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm o_41 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_SVar_1))
    {
      n_23 = ATgetArgument(m_23, 0);
      {
        ATerm p_23 = NULL;
        t = not_null(n_23);
        t = o_41(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(p_23));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm d_42 (ATerm), ATerm e_42 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Call_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        ATerm c_24 = NULL;
        t = not_null(y_23);
        {
          ATerm e_24 = NULL;
          t = d_42(t);
          c_24 = t;
          t = not_null(z_23);
          t = e_42(t);
          e_24 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(c_24), not_null(e_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm m_41 (ATerm), ATerm n_41 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_LChoice_2))
    {
      p_24 = ATgetArgument(o_24, 0);
      q_24 = ATgetArgument(o_24, 1);
      {
        ATerm t_24 = NULL;
        t = not_null(p_24);
        {
          ATerm v_24 = NULL;
          t = m_41(t);
          t_24 = t;
          t = not_null(q_24);
          t = n_41(t);
          v_24 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_24), not_null(v_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm k_41 (ATerm), ATerm l_41 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Choice_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        ATerm j_25 = NULL;
        t = not_null(f_25);
        {
          ATerm l_25 = NULL;
          t = k_41(t);
          j_25 = t;
          t = not_null(g_25);
          t = l_41(t);
          l_25 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_25), not_null(l_25));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm i_41 (ATerm), ATerm j_41 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_Seq_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm z_25 = NULL;
        t = not_null(v_25);
        {
          ATerm b_26 = NULL;
          t = i_41(t);
          z_25 = t;
          t = not_null(w_25);
          t = j_41(t);
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_25), not_null(b_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Test_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm m_26 = NULL;
        t = not_null(k_26);
        t = g_41(t);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm h_41 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Not_1))
    {
      u_26 = ATgetArgument(t_26, 0);
      {
        ATerm w_26 = NULL;
        t = not_null(u_26);
        t = h_41(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_Not_1, not_null(w_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(!(match_cons(b_27, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  c_27 :
  if(!(match_cons(d_27, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm o_5 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = o_5;
            {
              ATerm p_5 = t;
              if(PushChoice()==0)
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = p_5;
                  {
                    ATerm q_5 = t;
                    if(PushChoice()==0)
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = q_5;
                        {
                          ATerm r_5 = t;
                          if(PushChoice()==0)
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = r_5;
                              {
                                ATerm s_5 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_5;
                                    {
                                      ATerm t_5 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_5;
                                          {
                                            ATerm u_5 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                ATerm x_0 (ATerm t)
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    ATerm z_0 (ATerm t)
                                                    {
                                                      t = SVar_1(t, is_string_0);
                                                      return(t);
                                                    }
                                                    t = Call_2(t, z_0, Nil_0);
                                                    return(t);
                                                  }
                                                  t = list_1(t, y_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, w_0, x_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_5;
                                                {
                                                  ATerm v_5 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_5;
                                                      {
                                                        ATerm w_5 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = w_5;
                                                            {
                                                              ATerm x_5 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm a_1 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, a_1);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = x_5;
                                                                  {
                                                                    ATerm y_5 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_5;
                                                                        {
                                                                          ATerm z_5 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_5;
                                                                              {
                                                                                ATerm e_6 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_6;
                                                                                    {
                                                                                      ATerm f_6 = t;
                                                                                      if(PushChoice()==0)
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_6;
                                                                                          {
                                                                                            ATerm g_6 = t;
                                                                                            if(PushChoice()==0)
                                                                                              {
                                                                                                t = Match_1(t, match_term_exp_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_6;
                                                                                                {
                                                                                                  ATerm h_6 = t;
                                                                                                  if(PushChoice()==0)
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_6;
                                                                                                      {
                                                                                                        ATerm l_6 = t;
                                                                                                        if(PushChoice()==0)
                                                                                                          {
                                                                                                            ATerm b_1 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, b_1, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_6;
                                                                                                            {
                                                                                                              ATerm n_6 = t;
                                                                                                              if(PushChoice()==0)
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_6;
                                                                                                                  {
                                                                                                                    ATerm o_6 = t;
                                                                                                                    if(PushChoice()==0)
                                                                                                                      {
                                                                                                                        ATerm c_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, c_1);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_6;
                                                                                                                        {
                                                                                                                          ATerm p_6 = t;
                                                                                                                          if(PushChoice()==0)
                                                                                                                            {
                                                                                                                              ATerm d_1 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm e_1 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm f_1 (ATerm t)
                                                                                                                                  {
                                                                                                                                    ATerm g_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = VarDec_2(t, is_string_0, _id);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = list_1(t, g_1);
                                                                                                                                    return(t);
                                                                                                                                  }
                                                                                                                                  t = SDef_3(t, is_string_0, f_1, strategy_expression_0);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, e_1);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2(t, d_1, strategy_expression_0);
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_6;
                                                                                                                              {
                                                                                                                                ATerm q_6 = t;
                                                                                                                                if(PushChoice()==0)
                                                                                                                                  {
                                                                                                                                    ATerm h_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = Var_1(t, is_string_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm i_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = list_1(t, j_1);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Case_4(t, is_string_0, h_1, i_1, strategy_expression_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = q_6;
                                                                                                                                    {
                                                                                                                                      ATerm r_6 = t;
                                                                                                                                      if(PushChoice()==0)
                                                                                                                                        {
                                                                                                                                          ATerm k_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, is_string_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, k_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_6;
                                                                                                                                          {
                                                                                                                                            ATerm v_6 = t;
                                                                                                                                            if(PushChoice()==0)
                                                                                                                                              {
                                                                                                                                                ATerm l_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, is_string_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, l_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = v_6;
                                                                                                                                                {
                                                                                                                                                  ATerm x_6 = t;
                                                                                                                                                  if(PushChoice()==0)
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = x_6;
                                                                                                                                                      {
                                                                                                                                                        ATerm m_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = debug_1(t, m_1);
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
      }
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  t = SSL_is_string(not_null(g_27));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym_VarDec_2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      {
        ATerm s_27 = NULL;
        t = not_null(o_27);
        {
          ATerm u_27 = NULL;
          t = w_41(t);
          s_27 = t;
          t = not_null(p_27);
          t = x_41(t);
          u_27 = t;
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_27), not_null(u_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm t_41 (ATerm), ATerm u_41 (ATerm), ATerm v_41 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_SDef_3))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      h_28 = ATgetArgument(e_28, 2);
      {
        ATerm l_28 = NULL;
        t = not_null(f_28);
        {
          ATerm n_28 = NULL;
          t = t_41(t);
          l_28 = t;
          t = not_null(g_28);
          {
            ATerm p_28 = NULL;
            t = u_41(t);
            n_28 = t;
            t = not_null(h_28);
            t = v_41(t);
            p_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_28), not_null(n_28), not_null(p_28));
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
  ATerm y_6 = t;
  if(PushChoice()==0)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, o_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, n_1, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = y_6;
      {
        ATerm p_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, p_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm v_28 (ATerm t)
  {
    ATerm z_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = z_6;
        t = Cons_2(t, r_57, v_28);
      }
    return(t);
  }
  t = v_28(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm o_40 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Strategies_1))
    {
      a_29 = ATgetArgument(z_28, 0);
      {
        ATerm c_29 = NULL;
        t = not_null(a_29);
        t = o_40(t);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_40 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_Specification_1))
    {
      k_29 = ATgetArgument(j_29, 0);
      {
        ATerm m_29 = NULL;
        t = not_null(k_29);
        t = q_40(t);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, t_1);
            return(t);
          }
          t = Cons_2(t, s_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, r_1);
        return(t);
      }
      t = Specification_1(t, q_1);
      PopChoice();
    }
  else
    {
      t = a_7;
      {
        ATerm u_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, u_1);
      }
    }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  q_29 :
  if(!(match_cons(r_29, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym_TCons_2))
    {
      x_29 = ATgetArgument(w_29, 0);
      y_29 = ATgetArgument(w_29, 1);
      {
        ATerm b_30 = NULL;
        t = not_null(x_29);
        {
          ATerm d_30 = NULL;
          t = a_43(t);
          b_30 = t;
          t = not_null(y_29);
          t = b_43(t);
          d_30 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_30), not_null(d_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_30 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm l_30 = NULL,m_30 = NULL;
      l_30 = t;
      j_30 :
      if(match_cons(l_30, sym_Program_1))
        {
          m_30 = ATgetArgument(l_30, 0);
          if(k_30 != NULL && k_30 != m_30)
            _fail(m_30);
          else
            k_30 = m_30;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = b_7;
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
  ATerm t_30 = NULL,u_30 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      ATerm f_7 = t;
      if(PushChoice()==0)
        {
          ATerm z_1 (ATerm t)
          {
            ATerm v_30 = NULL;
            v_30 = t;
            o_30 :
            if(!(match_cons(v_30, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_1);
          PopChoice();
          _fail(t);
        }
      else
        t = f_7;
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, x_1, y_1);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm w_30 = NULL,x_30 = NULL;
          w_30 = t;
          q_30 :
          if(match_cons(w_30, sym_Runtime_1))
            {
              x_30 = ATgetArgument(w_30, 0);
              if(u_30 != NULL && u_30 != x_30)
                _fail(x_30);
              else
                u_30 = x_30;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_2);
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, a_2, b_2);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            ATerm y_30 = NULL,z_30 = NULL;
            y_30 = t;
            s_30 :
            if(match_cons(y_30, sym_Program_1))
              {
                z_30 = ATgetArgument(y_30, 0);
                if(t_30 != NULL && t_30 != z_30)
                  _fail(z_30);
                else
                  t_30 = z_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_2);
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, d_2, e_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_30), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, w_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  g_31 = t;
  d_31 :
  if(match_cons(g_31, sym_TCons_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      e_31 :
      if(match_cons(i_31, sym_TCons_2))
        {
          j_31 = ATgetArgument(i_31, 0);
          k_31 = ATgetArgument(i_31, 1);
          f_31 :
          if(match_cons(k_31, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(h_31), not_null(j_31));
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  s_31 = t;
  p_31 :
  if(match_cons(s_31, sym_TCons_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      q_31 :
      if(match_cons(u_31, sym_TCons_2))
        {
          v_31 = ATgetArgument(u_31, 0);
          w_31 = ATgetArgument(u_31, 1);
          r_31 :
          if(match_cons(w_31, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(t_31), not_null(v_31));
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
  ATerm j_32 = NULL;
  ATerm h_7;
  h_7 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm i_7 = t;
      if(PushChoice()==0)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm k_32 = NULL,l_32 = NULL;
            k_32 = t;
            g_32 :
            if(match_cons(k_32, sym_Output_1))
              {
                l_32 = ATgetArgument(k_32, 0);
                if(j_32 != NULL && j_32 != l_32)
                  _fail(l_32);
                else
                  j_32 = l_32;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_2);
          PopChoice();
        }
      else
        {
          t = i_7;
          {
            ATerm o_32 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            o_32 = t;
            if(j_32 != NULL && j_32 != o_32)
              _fail(o_32);
            else
              j_32 = o_32;
          }
        }
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_2, h_2);
  }
  t = h_7;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = not_null(j_32);
          return(t);
        }
        t = split_2(t, l_2, _id);
        return(t);
      }
      t = TCons_2(t, k_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, j_2);
    {
      ATerm j_7 = t;
      if(PushChoice()==0)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              ATerm p_32 = NULL;
              p_32 = t;
              i_32 :
              if(!(match_cons(p_32, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, o_2);
            return(t);
          }
          ATerm n_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, m_2, n_2);
          PopChoice();
        }
      else
        {
          t = j_7;
          {
            ATerm p_2 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, p_2);
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
ATerm apply_strategy_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm x_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  ATerm k_7;
  k_7 = t;
  t = dtime_0(t);
  t = k_7;
  t = i_48(t);
  {
    ATerm l_7;
    l_7 = t;
    {
      ATerm y_32 = NULL;
      t = dtime_0(t);
      y_32 = t;
      if(x_32 != NULL && x_32 != y_32)
        _fail(y_32);
      else
        x_32 = y_32;
    }
    t = l_7;
    z_32 = t;
    u_32 :
    if(match_cons(z_32, sym_TCons_2))
      {
        a_33 = ATgetArgument(z_32, 0);
        b_33 = ATgetArgument(z_32, 1);
        v_32 :
        if(match_cons(b_33, sym_TCons_2))
          {
            c_33 = ATgetArgument(b_33, 0);
            d_33 = ATgetArgument(b_33, 1);
            w_32 :
            if(match_cons(d_33, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(x_32)), not_null(a_33)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_ReadFromFile(not_null(r_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm c_34 = NULL;
  ATerm e_34 = NULL,g_34 = NULL;
  c_34 = t;
  {
    ATerm m_7;
    m_7 = t;
    {
      ATerm f_34 = NULL;
      t = not_null(c_34);
      t = x_50(t);
      f_34 = t;
      if(e_34 != NULL && e_34 != f_34)
        _fail(f_34);
      else
        e_34 = f_34;
    }
    t = m_7;
    {
      ATerm h_34 = NULL;
      t = not_null(c_34);
      t = y_50(t);
      h_34 = t;
      if(g_34 != NULL && g_34 != h_34)
        _fail(h_34);
      else
        g_34 = h_34;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_34 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm o_7 = t;
    if(PushChoice()==0)
      {
        ATerm q_2 (ATerm t)
        {
          ATerm p_34 = NULL,q_34 = NULL;
          p_34 = t;
          m_34 :
          if(match_cons(p_34, sym_Input_1))
            {
              q_34 = ATgetArgument(p_34, 0);
              if(o_34 != NULL && o_34 != q_34)
                _fail(q_34);
              else
                o_34 = q_34;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_2);
        PopChoice();
      }
    else
      {
        t = o_7;
        {
          ATerm r_34 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          r_34 = t;
          if(o_34 != NULL && o_34 != r_34)
            _fail(r_34);
          else
            o_34 = r_34;
        }
      }
  }
  t = n_7;
  {
    ATerm r_2 (ATerm t)
    {
      t = not_null(o_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  u_34 :
  if(!(match_cons(v_34, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        {
          ATerm q_7 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = q_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_2);
  t = h_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = SSL_table_create(not_null(x_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  {
    ATerm v_7;
    v_7 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_35), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = v_7;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  j_35 = t;
  h_35 :
  if(match_string(j_35, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(j_35, sym_Cons_2))
        {
          k_35 = ATgetArgument(j_35, 0);
          l_35 = ATgetArgument(j_35, 1);
          i_35 :
          if(match_cons(l_35, sym_Cons_2))
            {
              m_35 = ATgetArgument(l_35, 0);
              n_35 = ATgetArgument(l_35, 1);
              {
                ATerm r_35 = NULL;
                ATerm w_7;
                w_7 = t;
                t = not_null(k_35);
                t = g_0(t);
                t = w_7;
                {
                  ATerm s_35 = NULL;
                  t = not_null(m_35);
                  t = h_0(t);
                  s_35 = t;
                  if(r_35 != NULL && r_35 != s_35)
                    _fail(s_35);
                  else
                    r_35 = s_35;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_35), not_null(n_35));
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
  ATerm y_7 = t;
  if(PushChoice()==0)
    {
      ATerm t_2 (ATerm t)
      {
        ATerm h_36 = NULL;
        h_36 = t;
        w_35 :
        if(!(match_string(h_36, "-S")))
          {
            if(!(match_string(h_36, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, t_2, u_2, v_2);
      PopChoice();
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        if(PushChoice()==0)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm i_36 = NULL;
              i_36 = t;
              x_35 :
              if(!(match_string(i_36, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, w_2, x_2, y_2);
            PopChoice();
          }
        else
          {
            t = a_8;
            {
              ATerm b_8 = t;
              if(PushChoice()==0)
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm j_36 = NULL;
                    j_36 = t;
                    y_35 :
                    if(!(match_string(j_36, "-v")))
                      {
                        if(!(match_string(j_36, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm a_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm b_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, z_2, a_3, b_3);
                  PopChoice();
                }
              else
                {
                  t = b_8;
                  {
                    ATerm c_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_3 (ATerm t)
                        {
                          ATerm k_36 = NULL;
                          k_36 = t;
                          z_35 :
                          if(!(match_string(k_36, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_3 (ATerm t)
                        {
                          ATerm l_36 = NULL;
                          ATerm m_36 = NULL;
                          m_36 = t;
                          if(l_36 != NULL && l_36 != m_36)
                            _fail(m_36);
                          else
                            l_36 = m_36;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_36));
                          return(t);
                        }
                        ATerm e_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, c_3, d_3, e_3);
                        PopChoice();
                      }
                    else
                      {
                        t = c_8;
                        {
                          ATerm e_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_3 (ATerm t)
                              {
                                ATerm n_36 = NULL;
                                n_36 = t;
                                b_36 :
                                if(!(match_string(n_36, "-i")))
                                  {
                                    if(!(match_string(n_36, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_3 (ATerm t)
                              {
                                ATerm o_36 = NULL;
                                ATerm p_36 = NULL;
                                p_36 = t;
                                if(o_36 != NULL && o_36 != p_36)
                                  _fail(p_36);
                                else
                                  o_36 = p_36;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_36));
                                return(t);
                              }
                              ATerm h_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, f_3, g_3, h_3);
                              PopChoice();
                            }
                          else
                            {
                              t = e_8;
                              {
                                ATerm g_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm q_36 = NULL;
                                      q_36 = t;
                                      d_36 :
                                      if(!(match_string(q_36, "-o")))
                                        {
                                          if(!(match_string(q_36, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_3 (ATerm t)
                                    {
                                      ATerm r_36 = NULL;
                                      ATerm s_36 = NULL;
                                      s_36 = t;
                                      if(r_36 != NULL && r_36 != s_36)
                                        _fail(s_36);
                                      else
                                        r_36 = s_36;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_36));
                                      return(t);
                                    }
                                    ATerm k_3 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_3, j_3, k_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_8;
                                    {
                                      ATerm h_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_3 (ATerm t)
                                          {
                                            ATerm t_36 = NULL;
                                            t_36 = t;
                                            f_36 :
                                            if(!(match_string(t_36, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm n_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, l_3, m_3, n_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_8;
                                          {
                                            ATerm o_3 (ATerm t)
                                            {
                                              ATerm u_36 = NULL;
                                              u_36 = t;
                                              g_36 :
                                              if(!(match_string(u_36, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm p_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm q_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, o_3, p_3, q_3);
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
  ATerm z_36 = NULL;
  z_36 = t;
  t = SSL_table_destroy(not_null(z_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  t = SSL_exit(not_null(d_37));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  t = SSL_implode_string(not_null(h_37));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm k_37 (ATerm t)
  {
    ATerm i_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, k_37);
        PopChoice();
      }
    else
      {
        t = i_8;
        t = Nil_0(t);
        t = d_58(t);
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
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
        ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
        n_37 = t;
        m_37 :
        if(match_cons(n_37, sym_Cons_2))
          {
            o_37 = ATgetArgument(n_37, 0);
            p_37 = ATgetArgument(n_37, 1);
            t = not_null(o_37);
            {
              ATerm r_3 (ATerm t)
              {
                t = not_null(p_37);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, r_3);
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
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_explode_string(not_null(v_37));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm y_37 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        t = Cons_2(t, p_57, y_37);
      }
    return(t);
  }
  t = y_37(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  e_38 = t;
  a_38 :
  if(match_cons(e_38, sym_TCons_2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      b_38 :
      if(match_cons(f_38, sym_Nil_0))
        {
          c_38 :
          if(match_cons(g_38, sym_TCons_2))
            {
              h_38 = ATgetArgument(g_38, 0);
              i_38 = ATgetArgument(g_38, 1);
              d_38 :
              if(match_cons(i_38, sym_TNil_0))
                t = not_null(h_38);
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  q_38 = t;
  m_38 :
  if(match_cons(q_38, sym_TCons_2))
    {
      r_38 = ATgetArgument(q_38, 0);
      u_38 = ATgetArgument(q_38, 1);
      n_38 :
      if(match_cons(r_38, sym_Cons_2))
        {
          s_38 = ATgetArgument(r_38, 0);
          t_38 = ATgetArgument(r_38, 1);
          o_38 :
          if(match_cons(u_38, sym_TCons_2))
            {
              v_38 = ATgetArgument(u_38, 0);
              w_38 = ATgetArgument(u_38, 1);
              p_38 :
              if(match_cons(w_38, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_38), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_38), not_null(v_38)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm l_8 = t;
    if(PushChoice()==0)
      {
        t = k_63(t);
        t = b_39(t);
        PopChoice();
      }
    else
      {
        t = l_8;
        t = l_63(t);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_63 (ATerm))
{
  t = repeat_2(t, n_63, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_39), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_33 (ATerm))
{
  ATerm j_39 = NULL,k_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym_Program_1))
    {
      k_39 = ATgetArgument(j_39, 0);
      {
        ATerm m_39 = NULL;
        t = not_null(k_39);
        t = z_33(t);
        m_39 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_39));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm x_39 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm y_39 = NULL;
      y_39 = t;
      if(x_39 != NULL && x_39 != y_39)
        _fail(y_39);
      else
        x_39 = y_39;
      return(t);
    }
    t = Program_1(t, t_3);
    return(t);
  }
  t = option_defined_1(t, s_3);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm z_39 = NULL;
      ATerm a_40 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm v_3 (ATerm t)
        {
          t = not_null(x_39);
          return(t);
        }
        t = short_description_1(t, v_3);
        t = concat_strings_0(t);
        a_40 = t;
        if(z_39 != NULL && z_39 != a_40)
          _fail(a_40);
        else
          z_39 = a_40;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_39), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, u_3);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm w_3 (ATerm t)
      {
        ATerm b_40 = NULL;
        b_40 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, w_3);
      {
        ATerm x_3 (ATerm t)
        {
          ATerm d_40 = NULL;
          ATerm e_40 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(x_39);
              return(t);
            }
            t = long_description_1(t, y_3);
            t = concat_strings_0(t);
            e_40 = t;
            if(d_40 != NULL && d_40 != e_40)
              _fail(e_40);
            else
              d_40 = e_40;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_40), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, x_3);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_40 = NULL,p_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
  n_40 = t;
  k_40 :
  if(match_cons(n_40, sym_TCons_2))
    {
      p_40 = ATgetArgument(n_40, 0);
      r_40 = ATgetArgument(n_40, 1);
      l_40 :
      if(match_cons(r_40, sym_TCons_2))
        {
          s_40 = ATgetArgument(r_40, 0);
          t_40 = ATgetArgument(r_40, 1);
          m_40 :
          if(match_cons(t_40, sym_TNil_0))
            {
              ATerm m_8;
              m_8 = t;
              t = SSL_printnl(not_null(p_40), not_null(s_40));
              t = m_8;
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
ATerm Undefined_1 (ATerm t, ATerm a_34 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL;
  b_41 = t;
  z_40 :
  if(match_cons(b_41, sym_Undefined_1))
    {
      c_41 = ATgetArgument(b_41, 0);
      {
        ATerm y_41 = NULL;
        t = not_null(c_41);
        t = a_34(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_41));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm c_42 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, x_57, _id);
        PopChoice();
      }
    else
      {
        t = n_8;
        t = Cons_2(t, _id, c_42);
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_47 (ATerm))
{
  t = fetch_1(t, m_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  k_42 :
  if(!(match_cons(n_42, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm o_8 = t;
  if(PushChoice()==0)
    {
      t = h_64(t);
      PopChoice();
    }
  else
    t = o_8;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_42 = NULL,c_43 = NULL,d_43 = NULL,g_43 = NULL,h_43 = NULL;
  z_42 = t;
  r_42 :
  if(match_cons(z_42, sym_TCons_2))
    {
      c_43 = ATgetArgument(z_42, 0);
      d_43 = ATgetArgument(z_42, 1);
      s_42 :
      if(match_cons(d_43, sym_TCons_2))
        {
          g_43 = ATgetArgument(d_43, 0);
          h_43 = ATgetArgument(d_43, 1);
          y_42 :
          if(match_cons(h_43, sym_TNil_0))
            t = SSL_table_get(not_null(c_43), not_null(g_43));
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
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  r_43 = t;
  n_43 :
  if(match_cons(r_43, sym_TCons_2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      o_43 :
      if(match_cons(t_43, sym_TCons_2))
        {
          u_43 = ATgetArgument(t_43, 0);
          v_43 = ATgetArgument(t_43, 1);
          p_43 :
          if(match_cons(v_43, sym_TCons_2))
            {
              w_43 = ATgetArgument(v_43, 0);
              x_43 = ATgetArgument(v_43, 1);
              q_43 :
              if(match_cons(x_43, sym_TNil_0))
                {
                  ATerm p_8;
                  p_8 = t;
                  {
                    ATerm b_44 = NULL;
                    ATerm c_44 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_43), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_8 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = u_8;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      c_44 = t;
                      if(b_44 != NULL && b_44 != c_44)
                        _fail(c_44);
                      else
                        b_44 = c_44;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_43), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_43), not_null(b_44)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_46 (ATerm))
{
  ATerm g_44 = NULL;
  ATerm h_44 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = s_46(t);
  h_44 = t;
  if(g_44 != NULL && g_44 != h_44)
    _fail(h_44);
  else
    g_44 = h_44;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_44), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_string(n_44, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(n_44, sym_Cons_2))
        {
          o_44 = ATgetArgument(n_44, 0);
          p_44 = ATgetArgument(n_44, 1);
          {
            ATerm s_44 = NULL;
            ATerm v_8;
            v_8 = t;
            t = not_null(o_44);
            t = d_0(t);
            t = v_8;
            {
              ATerm t_44 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              t_44 = t;
              if(s_44 != NULL && s_44 != t_44)
                _fail(t_44);
              else
                s_44 = t_44;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_44), not_null(p_44));
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
  ATerm z_3 (ATerm t)
  {
    ATerm y_44 = NULL;
    y_44 = t;
    x_44 :
    if(!(match_string(y_44, "--help")))
      {
        if(!(match_string(y_44, "-h")))
          {
            if(!(match_string(y_44, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Cons_2))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_45)), not_null(d_45));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_Cons_2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      {
        ATerm q_45 = NULL;
        t = not_null(m_45);
        {
          ATerm s_45 = NULL;
          t = e_43(t);
          q_45 = t;
          t = not_null(n_45);
          t = f_43(t);
          s_45 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_45), not_null(s_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  x_45 :
  if(!(match_cons(y_45, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm x_8;
  x_8 = t;
  {
    ATerm c_4 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = q_46(t);
      return(t);
    }
    t = try_1(t, c_4);
  }
  t = x_8;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm a_46 = NULL;
      a_46 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_46));
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm z_8 = t;
      if(PushChoice()==0)
        {
          ATerm a_9 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = a_9;
              t = q_46(t);
              t = Cons_2(t, _id, e_4);
            }
          PopChoice();
        }
      else
        {
          t = z_8;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_4, e_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
  ATerm b_9;
  b_9 = t;
  {
    ATerm m_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
    m_46 = t;
    f_46 :
    if(match_cons(m_46, sym_TCons_2))
      {
        t_46 = ATgetArgument(m_46, 0);
        u_46 = ATgetArgument(m_46, 1);
        g_46 :
        if(match_cons(u_46, sym_TCons_2))
          {
            v_46 = ATgetArgument(u_46, 0);
            w_46 = ATgetArgument(u_46, 1);
            h_46 :
            if(match_cons(w_46, sym_TCons_2))
              {
                x_46 = ATgetArgument(w_46, 0);
                y_46 = ATgetArgument(w_46, 1);
                i_46 :
                if(match_cons(y_46, sym_TNil_0))
                  {
                    if(j_46 != NULL && j_46 != t_46)
                      _fail(t_46);
                    else
                      j_46 = t_46;
                    if(k_46 != NULL && k_46 != v_46)
                      _fail(v_46);
                    else
                      k_46 = v_46;
                    if(l_46 != NULL && l_46 != x_46)
                      _fail(x_46);
                    else
                      l_46 = x_46;
                    t = SSL_table_put(not_null(j_46), not_null(k_46), not_null(l_46));
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
  t = b_9;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_46 (ATerm))
{
  ATerm b_47 = NULL;
  ATerm c_9;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = c_9;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm d_9 = t;
      if(PushChoice()==0)
        {
          t = p_46(t);
          PopChoice();
        }
      else
        {
          t = d_9;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_4);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm e_9 = t;
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
            t = e_9;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm c_47 = NULL;
                  c_47 = t;
                  if(b_47 != NULL && b_47 != c_47)
                    _fail(c_47);
                  else
                    b_47 = c_47;
                  return(t);
                }
                t = Undefined_1(t, i_4);
                return(t);
              }
              t = option_defined_1(t, h_4);
              {
                ATerm f_9;
                f_9 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = f_9;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_4);
      {
        ATerm g_9;
        g_9 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = g_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_47 (ATerm), ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = x_47(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_4);
  t = store_options_0(t);
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, y_47);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm o_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, w_47);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = o_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm))
{
  t = iowrap_3(t, r_47, s_47, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_47 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      t = TCons_2(t, o_47, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_4);
    return(t);
  }
  t = iowrap_2(t, k_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}

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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
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
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm e_86 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm Let_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_62 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_86 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm t_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm for_3 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm z_72 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm h_72 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm m_72 (ATerm));
ATerm rename_4 (ATerm, ATerm n_73 (ATerm, ATerm (ATerm)), ATerm o_73 (ATerm), ATerm p_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_73 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm b_59 (ATerm));
ATerm Call_2 (ATerm, ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm Prim_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm Str_1 (ATerm, ATerm n_0 (ATerm));
ATerm Real_1 (ATerm, ATerm m_0 (ATerm));
ATerm Int_1 (ATerm, ATerm l_0 (ATerm));
ATerm Var_1 (ATerm, ATerm p_61 (ATerm));
ATerm Op_2 (ATerm, ATerm t_61 (ATerm), ATerm u_61 (ATerm));
ATerm Build_1 (ATerm, ATerm f_63 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm b_78 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm h_67 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm v_63 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm g_78 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm l_80 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm s_73 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm Row_3 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_67 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_82 (ATerm), ATerm d_82 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_67 (ATerm));
ATerm scope_2 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm w_77 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm crush_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm collect_om_1 (ATerm, ATerm n_76 (ATerm));
ATerm collect_1 (ATerm, ATerm p_76 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm r_75 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm l_79 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm a_77 (ATerm));
ATerm collect_split_2 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm b_87 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm c_78 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_82 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm downup_1 (ATerm, ATerm i_82 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm Strategies_1 (ATerm, ATerm d_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_61 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm c_87 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_65 (ATerm));
ATerm map_1 (ATerm, ATerm j_79 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_69 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_65 (ATerm));
ATerm Program_1 (ATerm, ATerm l_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_65 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_66 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(match_cons(o_3, sym_Cons_2))
    {
      p_3 = ATgetArgument(o_3, 0);
      q_3 = ATgetArgument(o_3, 1);
      t = not_null(p_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, e_86);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
            e_4 = t;
            v_3 :
            if(match_cons(e_4, sym_TCons_2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                w_3 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    x_3 :
                    if(match_cons(j_4, sym_TCons_2))
                      {
                        k_4 = ATgetArgument(j_4, 0);
                        l_4 = ATgetArgument(j_4, 1);
                        y_3 :
                        if(match_cons(l_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_4), not_null(h_4), not_null(i_4));
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
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            ATerm o_0 (ATerm t)
            {
              t = split_2(t, _id, e_86);
              {
                ATerm p_0 (ATerm t)
                {
                  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
                  p_4 = t;
                  a_4 :
                  if(match_cons(p_4, sym_TCons_2))
                    {
                      q_4 = ATgetArgument(p_4, 0);
                      t_4 = ATgetArgument(p_4, 1);
                      b_4 :
                      if(match_cons(q_4, sym_VarDec_2))
                        {
                          r_4 = ATgetArgument(q_4, 0);
                          s_4 = ATgetArgument(q_4, 1);
                          c_4 :
                          if(match_cons(t_4, sym_TCons_2))
                            {
                              u_4 = ATgetArgument(t_4, 0);
                              v_4 = ATgetArgument(t_4, 1);
                              d_4 :
                              if(match_cons(v_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_4), not_null(s_4));
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
                t = zip_1(t, p_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, o_0, _id);
            PopChoice();
          }
        else
          {
            t = n_9;
            {
              ATerm q_0 (ATerm t)
              {
                t = e_86(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, q_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Rec_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm k_5 = NULL;
        t = not_null(g_5);
        {
          ATerm m_5 = NULL;
          t = e_62(t);
          k_5 = t;
          t = not_null(h_5);
          t = f_62(t);
          m_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(k_5), not_null(m_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym_Let_2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        ATerm a_6 = NULL;
        t = not_null(w_5);
        {
          ATerm c_6 = NULL;
          t = g_62(t);
          a_6 = t;
          t = not_null(x_5);
          t = h_62(t);
          c_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_6), not_null(c_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm o_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, f_86, f_86);
      PopChoice();
    }
  else
    {
      t = o_9;
      {
        ATerm s_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, h_86, h_86, f_86);
            PopChoice();
          }
        else
          {
            t = s_9;
            t = Rec_2(t, h_86, f_86);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Rec_2))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_SDef_3))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      w_6 = ATgetArgument(t_6, 2);
      t = not_null(v_6);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
          a_7 = t;
          r_6 :
          if(match_cons(a_7, sym_VarDec_2))
            {
              b_7 = ATgetArgument(a_7, 0);
              c_7 = ATgetArgument(a_7, 1);
              t = not_null(b_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, r_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Let_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      t = not_null(l_7);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
          p_7 = t;
          i_7 :
          if(match_cons(p_7, sym_SDef_3))
            {
              q_7 = ATgetArgument(p_7, 0);
              r_7 = ATgetArgument(p_7, 1);
              s_7 = ATgetArgument(p_7, 2);
              t = not_null(q_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, s_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_SVar_1))
    {
      c_8 = ATgetArgument(b_8, 0);
      {
        ATerm e_8 = NULL;
        t = not_null(c_8);
        t = d_62(t);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(e_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm t_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = t_9;
        {
          ATerm u_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = u_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, t_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_86 (ATerm))
{
  t = Scope_2(t, a_86, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_DynamicRules_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm o_8 = NULL;
        t = not_null(m_8);
        t = t_60(t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(o_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Scope_2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        ATerm b_9 = NULL;
        t = not_null(x_8);
        {
          ATerm d_9 = NULL;
          t = i_63(t);
          b_9 = t;
          t = not_null(y_8);
          t = j_63(t);
          d_9 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_9), not_null(d_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, d_86, b_86);
      PopChoice();
    }
  else
    {
      t = g_10;
      t = DynamicRules_1(t, b_86);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_DynamicRules_1))
    {
      l_9 = ATgetArgument(k_9, 0);
      t = not_null(l_9);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Var_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  z_9 = t;
  v_9 :
  if(match_cons(z_9, sym_TCons_2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      w_9 :
      if(match_cons(b_10, sym_TCons_2))
        {
          c_10 = ATgetArgument(b_10, 0);
          f_10 = ATgetArgument(b_10, 1);
          x_9 :
          if(match_cons(c_10, sym_Cons_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              y_9 :
              if(match_cons(f_10, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_10), not_null(a_10)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_10), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  d_13 = t;
  z_12 :
  if(match_cons(d_13, sym_Cons_2))
    {
      e_13 = ATgetArgument(d_13, 0);
      j_13 = ATgetArgument(d_13, 1);
      a_13 :
      if(match_cons(e_13, sym_TCons_2))
        {
          f_13 = ATgetArgument(e_13, 0);
          g_13 = ATgetArgument(e_13, 1);
          b_13 :
          if(match_cons(g_13, sym_TCons_2))
            {
              h_13 = ATgetArgument(g_13, 0);
              i_13 = ATgetArgument(g_13, 1);
              c_13 :
              if(match_cons(i_13, sym_TNil_0))
                {
                  ATerm n_13 = NULL,o_13 = NULL,b_15 = NULL,j_15 = NULL;
                  ATerm h_10;
                  h_10 = t;
                  {
                    ATerm p_13 = NULL;
                    ATerm r_13 = NULL,k_14 = NULL,l_14 = NULL,q_14 = NULL,a_15 = NULL;
                    t = not_null(h_13);
                    p_13 = t;
                    t = SSL_explode_term(not_null(p_13));
                    r_13 = t;
                    q_12 :
                    if(match_cons(r_13, sym_TCons_2))
                      {
                        k_14 = ATgetArgument(r_13, 0);
                        l_14 = ATgetArgument(r_13, 1);
                        r_12 :
                        if(match_cons(l_14, sym_TCons_2))
                          {
                            q_14 = ATgetArgument(l_14, 0);
                            a_15 = ATgetArgument(l_14, 1);
                            s_12 :
                            if(match_cons(a_15, sym_TNil_0))
                              {
                                if(n_13 != NULL && n_13 != k_14)
                                  _fail(k_14);
                                else
                                  n_13 = k_14;
                                if(o_13 != NULL && o_13 != q_14)
                                  _fail(q_14);
                                else
                                  o_13 = q_14;
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
                  t = h_10;
                  {
                    ATerm i_10;
                    i_10 = t;
                    {
                      ATerm c_15 = NULL;
                      ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
                      t = not_null(f_13);
                      c_15 = t;
                      t = SSL_explode_term(not_null(c_15));
                      e_15 = t;
                      v_12 :
                      if(match_cons(e_15, sym_TCons_2))
                        {
                          f_15 = ATgetArgument(e_15, 0);
                          g_15 = ATgetArgument(e_15, 1);
                          w_12 :
                          if(match_cons(g_15, sym_TCons_2))
                            {
                              h_15 = ATgetArgument(g_15, 0);
                              i_15 = ATgetArgument(g_15, 1);
                              x_12 :
                              if(match_cons(i_15, sym_TNil_0))
                                {
                                  if(n_13 != NULL && n_13 != f_15)
                                    _fail(f_15);
                                  else
                                    n_13 = f_15;
                                  if(b_15 != NULL && b_15 != h_15)
                                    _fail(h_15);
                                  else
                                    b_15 = h_15;
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
                    t = i_10;
                    {
                      ATerm k_15 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_13), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      k_15 = t;
                      if(j_15 != NULL && j_15 != k_15)
                        _fail(k_15);
                      else
                        j_15 = k_15;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  w_15 = t;
  s_15 :
  if(match_cons(w_15, sym_Cons_2))
    {
      x_15 = ATgetArgument(w_15, 0);
      c_16 = ATgetArgument(w_15, 1);
      t_15 :
      if(match_cons(x_15, sym_TCons_2))
        {
          y_15 = ATgetArgument(x_15, 0);
          z_15 = ATgetArgument(x_15, 1);
          u_15 :
          if(match_cons(z_15, sym_TCons_2))
            {
              a_16 = ATgetArgument(z_15, 0);
              b_16 = ATgetArgument(z_15, 1);
              v_15 :
              if(match_cons(b_16, sym_TNil_0))
                {
                  ATerm e_16 = NULL;
                  if(y_15 != NULL && y_15 != a_16)
                    _fail(a_16);
                  else
                    y_15 = a_16;
                  if(e_16 != NULL && e_16 != c_16)
                    _fail(c_16);
                  else
                    e_16 = c_16;
                  t = not_null(e_16);
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
ATerm while_not_2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm g_16 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = b_70(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        t = c_70(t);
        t = g_16(t);
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  t = e_70(t);
  t = while_not_2(t, f_70, g_70);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_10 = t;
  if(PushChoice()==0)
    {
      ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
      m_16 = t;
      i_16 :
      if(match_cons(m_16, sym_TCons_2))
        {
          n_16 = ATgetArgument(m_16, 0);
          o_16 = ATgetArgument(m_16, 1);
          j_16 :
          if(match_cons(o_16, sym_TCons_2))
            {
              p_16 = ATgetArgument(o_16, 0);
              q_16 = ATgetArgument(o_16, 1);
              k_16 :
              if(match_cons(q_16, sym_TNil_0))
                {
                  t = not_null(n_16);
                  {
                    ATerm w_16 (ATerm t)
                    {
                      ATerm l_10 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = l_10;
                          {
                            ATerm m_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = not_null(p_16);
                                  return(t);
                                }
                                t = HdMember_1(t, u_0);
                                t = w_16(t);
                                PopChoice();
                              }
                            else
                              {
                                t = m_10;
                                t = Cons_2(t, _id, w_16);
                              }
                          }
                        }
                      return(t);
                    }
                    t = w_16(t);
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
      t = k_10;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm t_16 = NULL;
          t_16 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_16), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, y_0);
          return(t);
        }
        ATerm x_0 (ATerm t)
        {
          ATerm n_10 = t;
          if(PushChoice()==0)
            {
              ATerm z_0 (ATerm t)
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm o_10 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_10;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, a_1, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, z_0);
              PopChoice();
            }
          else
            {
              t = n_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, v_0, w_0, x_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_17 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = m_71(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        {
          ATerm q_10 = t;
          if(PushChoice()==0)
            {
              ATerm z_16 = NULL;
              ATerm r_10;
              r_10 = t;
              {
                ATerm a_17 = NULL;
                t = n_71(t);
                a_17 = t;
                if(z_16 != NULL && z_16 != a_17)
                  _fail(a_17);
                else
                  z_16 = a_17;
              }
              t = r_10;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(z_16);
                    return(t);
                  }
                  t = split_2(t, b_17, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = o_71(t, b_1, b_17, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = q_10;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, f_1, union_0, b_17);
              }
            }
        }
      }
    return(t);
  }
  t = b_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm s_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  f_17 :
  if(match_cons(k_17, sym_LRule_1))
    {
      l_17 = ATgetArgument(k_17, 0);
      g_17 :
      if(match_cons(l_17, sym_Rule_3))
        {
          h_17 = ATgetArgument(l_17, 0);
          i_17 = ATgetArgument(l_17, 1);
          j_17 = ATgetArgument(l_17, 2);
          t = not_null(h_17);
          t = tvars_0(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(k_17, sym_Scope_2))
        {
          l_17 = ATgetArgument(k_17, 0);
          m_17 = ATgetArgument(k_17, 1);
          t = not_null(l_17);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL;
  b_18 = t;
  x_17 :
  if(match_cons(b_18, sym_TCons_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      y_17 :
      if(match_cons(d_18, sym_TCons_2))
        {
          e_18 = ATgetArgument(d_18, 0);
          f_18 = ATgetArgument(d_18, 1);
          z_17 :
          if(match_cons(f_18, sym_TCons_2))
            {
              h_18 = ATgetArgument(f_18, 0);
              i_18 = ATgetArgument(f_18, 1);
              a_18 :
              if(match_cons(i_18, sym_TNil_0))
                {
                  t = not_null(c_18);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm m_18 = NULL;
                      m_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = f_73(t);
                      return(t);
                    }
                    ATerm i_1 (ATerm t)
                    {
                      ATerm o_18 = NULL;
                      o_18 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = f_73(t);
                      return(t);
                    }
                    t = g_73(t, h_1, i_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm, ATerm (ATerm)))
{
  ATerm l_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  l_19 = t;
  z_18 :
  if(match_cons(l_19, sym_TCons_2))
    {
      e_20 = ATgetArgument(l_19, 0);
      f_20 = ATgetArgument(l_19, 1);
      j_19 :
      if(match_cons(f_20, sym_TCons_2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          k_19 :
          if(match_cons(h_20, sym_TNil_0))
            {
              ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,s_20 = NULL;
              ATerm t_10;
              t_10 = t;
              {
                ATerm n_20 = NULL;
                t = not_null(e_20);
                {
                  ATerm o_20 = NULL;
                  t = l_73(t);
                  n_20 = t;
                  if(k_20 != NULL && k_20 != n_20)
                    _fail(n_20);
                  else
                    k_20 = n_20;
                  {
                    ATerm p_20 = NULL,r_20 = NULL;
                    t = map_1(t, new_0);
                    o_20 = t;
                    if(l_20 != NULL && l_20 != o_20)
                      _fail(o_20);
                    else
                      l_20 = o_20;
                    {
                      ATerm q_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      q_20 = t;
                      if(p_20 != NULL && p_20 != q_20)
                        _fail(q_20);
                      else
                        p_20 = q_20;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      r_20 = t;
                      if(m_20 != NULL && m_20 != r_20)
                        _fail(r_20);
                      else
                        m_20 = r_20;
                    }
                  }
                }
              }
              t = t_10;
              {
                ATerm t_20 = NULL;
                t = not_null(e_20);
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = not_null(l_20);
                    return(t);
                  }
                  t = m_73(t, j_1);
                  t_20 = t;
                  if(s_20 != NULL && s_20 != t_20)
                    _fail(t_20);
                  else
                    s_20 = t_20;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_20), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  m_21 = t;
  i_21 :
  if(match_cons(m_21, sym_TCons_2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      j_21 :
      if(match_cons(o_21, sym_TCons_2))
        {
          u_21 = ATgetArgument(o_21, 0);
          x_21 = ATgetArgument(o_21, 1);
          k_21 :
          if(match_cons(u_21, sym_Cons_2))
            {
              v_21 = ATgetArgument(u_21, 0);
              w_21 = ATgetArgument(u_21, 1);
              l_21 :
              if(match_cons(x_21, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_21), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  j_22 = t;
  c_22 :
  if(match_cons(j_22, sym_TCons_2))
    {
      l_22 = ATgetArgument(j_22, 0);
      m_22 = ATgetArgument(j_22, 1);
      d_22 :
      if(match_cons(m_22, sym_TCons_2))
        {
          n_22 = ATgetArgument(m_22, 0);
          u_22 = ATgetArgument(m_22, 1);
          e_22 :
          if(match_cons(n_22, sym_Cons_2))
            {
              o_22 = ATgetArgument(n_22, 0);
              t_22 = ATgetArgument(n_22, 1);
              f_22 :
              if(match_cons(o_22, sym_TCons_2))
                {
                  p_22 = ATgetArgument(o_22, 0);
                  q_22 = ATgetArgument(o_22, 1);
                  g_22 :
                  if(match_cons(q_22, sym_TCons_2))
                    {
                      r_22 = ATgetArgument(q_22, 0);
                      s_22 = ATgetArgument(q_22, 1);
                      h_22 :
                      if(match_cons(s_22, sym_TNil_0))
                        {
                          i_22 :
                          if(match_cons(u_22, sym_TNil_0))
                            {
                              ATerm w_22 = NULL;
                              if(l_22 != NULL && l_22 != p_22)
                                _fail(p_22);
                              else
                                l_22 = p_22;
                              if(w_22 != NULL && w_22 != r_22)
                                _fail(r_22);
                              else
                                w_22 = r_22;
                              t = not_null(w_22);
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
  ATerm u_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = u_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm z_72 (ATerm, ATerm (ATerm)))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,t_23 = NULL;
  m_23 = t;
  a_23 :
  if(match_cons(m_23, sym_TCons_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      b_23 :
      if(match_cons(o_23, sym_TCons_2))
        {
          p_23 = ATgetArgument(o_23, 0);
          t_23 = ATgetArgument(o_23, 1);
          c_23 :
          if(match_cons(t_23, sym_TNil_0))
            {
              t = not_null(n_23);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = not_null(p_23);
                    return(t);
                  }
                  t = split_2(t, _id, l_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = z_72(t, k_1);
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
ATerm all_dist_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  u_24 = t;
  r_24 :
  if(match_cons(u_24, sym_TCons_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      s_24 :
      if(match_cons(w_24, sym_TCons_2))
        {
          x_24 = ATgetArgument(w_24, 0);
          y_24 = ATgetArgument(w_24, 1);
          t_24 :
          if(match_cons(y_24, sym_TNil_0))
            {
              t = not_null(v_24);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm b_25 = NULL;
                  b_25 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_24), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = h_72(t);
                  return(t);
                }
                t = _all(t, m_1);
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
ATerm env_alltd_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm f_25 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = m_72(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = all_dist_1(t, f_25);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_73 (ATerm, ATerm (ATerm)), ATerm o_73 (ATerm), ATerm p_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_73 (ATerm, ATerm (ATerm)))
{
  ATerm j_25 = NULL;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_25), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm r_25 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, n_73);
            PopChoice();
          }
        else
          {
            t = w_10;
            t = RnBinding_2(t, o_73, q_73);
            t = DistBinding_2(t, r_25, p_73);
          }
        return(t);
      }
      t = env_alltd_1(t, n_1);
      return(t);
    }
    t = r_25(t);
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
ATerm Seqs_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Seqs_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      {
        ATerm y_25 = NULL;
        t = not_null(w_25);
        t = b_59(t);
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Call_2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm o_26 = NULL;
        t = not_null(k_26);
        {
          ATerm q_26 = NULL;
          t = s_62(t);
          o_26 = t;
          t = not_null(l_26);
          t = t_62(t);
          q_26 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(o_26), not_null(q_26));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_Prim_2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm e_27 = NULL;
        t = not_null(a_27);
        {
          ATerm g_27 = NULL;
          t = l_63(t);
          e_27 = t;
          t = not_null(b_27);
          t = m_63(t);
          g_27 = t;
          t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_27), not_null(g_27));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_Str_1))
    {
      r_27 = ATgetArgument(q_27, 0);
      {
        ATerm x_10 = t;
        if(PushChoice()==0)
          {
            ATerm t_27 = NULL;
            t = not_null(r_27);
            t = n_0(t);
            t_27 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(t_27));
            PopChoice();
          }
        else
          {
            t = x_10;
            {
              ATerm w_27 = NULL;
              t = not_null(r_27);
              t = n_0(t);
              w_27 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, not_null(w_27));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_Real_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm y_10 = t;
        if(PushChoice()==0)
          {
            ATerm k_28 = NULL;
            t = not_null(i_28);
            t = m_0(t);
            k_28 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(k_28));
            PopChoice();
          }
        else
          {
            t = y_10;
            {
              ATerm n_28 = NULL;
              t = not_null(i_28);
              t = m_0(t);
              n_28 = t;
              t = (ATerm) ATmakeAppl(sym_Real_1, not_null(n_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym_Int_1))
    {
      z_28 = ATgetArgument(y_28, 0);
      {
        ATerm z_10 = t;
        if(PushChoice()==0)
          {
            ATerm b_29 = NULL;
            t = not_null(z_28);
            t = l_0(t);
            b_29 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(b_29));
            PopChoice();
          }
        else
          {
            t = z_10;
            {
              ATerm e_29 = NULL;
              t = not_null(z_28);
              t = l_0(t);
              e_29 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, not_null(e_29));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Var_1))
    {
      o_29 = ATgetArgument(n_29, 0);
      {
        ATerm q_29 = NULL;
        t = not_null(o_29);
        t = p_61(t);
        q_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm t_61 (ATerm), ATerm u_61 (ATerm))
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_Op_2))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      {
        ATerm d_30 = NULL;
        t = not_null(z_29);
        {
          ATerm f_30 = NULL;
          t = t_61(t);
          d_30 = t;
          t = not_null(a_30);
          t = u_61(t);
          f_30 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_30), not_null(f_30));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Build_1))
    {
      o_30 = ATgetArgument(n_30, 0);
      {
        ATerm q_30 = NULL;
        t = not_null(o_30);
        t = f_63(t);
        q_30 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_30));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  u_30 :
  if(!(match_cons(v_30, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  w_30 :
  if(!(match_cons(x_30, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm a_11 = t;
  if(PushChoice()==0)
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = a_11;
      {
        ATerm b_11 = t;
        if(PushChoice()==0)
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = b_11;
            {
              ATerm c_11 = t;
              if(PushChoice()==0)
                {
                  t = Seqs_1(t, Nil_0);
                  PopChoice();
                }
              else
                {
                  t = c_11;
                  {
                    ATerm d_11 = t;
                    if(PushChoice()==0)
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm e_11 = t;
                          if(PushChoice()==0)
                            {
                              t = Var_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm f_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm p_1 (ATerm t)
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, q_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, p_1);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_11;
                                    {
                                      ATerm g_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Int_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_11;
                                          {
                                            ATerm h_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Real_1(t, _id);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_11;
                                                t = Str_1(t, _id);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                          return(t);
                        }
                        t = Build_1(t, o_1);
                        PopChoice();
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm i_11 = t;
                          if(PushChoice()==0)
                            {
                              t = Prim_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm j_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = Call_2(t, _id, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_11;
                                    {
                                      ATerm r_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, r_1);
                                    }
                                  }
                              }
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
ATerm RowLet_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Row_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      {
        ATerm k_11 = t;
        if(PushChoice()==0)
          {
            ATerm o_31 = NULL;
            ATerm p_31 = NULL;
            t = not_null(i_31);
            {
              ATerm l_11 = t;
              if(PushChoice()==0)
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = l_11;
              t = new_0(t);
              p_31 = t;
              if(o_31 != NULL && o_31 != p_31)
                _fail(p_31);
              else
                o_31 = p_31;
            }
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(o_31), (ATerm)ATmakeAppl(sym_Nil_0), not_null(i_31)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(h_31), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            PopChoice();
          }
        else
          {
            t = k_11;
            t = not_null(i_31);
            t = simple_strategy_0(t);
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Nil_0), not_null(h_31), not_null(i_31)), (ATerm) ATmakeAppl(sym_TNil_0)));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_78 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_78);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym_Matrix_2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      {
        ATerm g_32 = NULL,h_32 = NULL;
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
        t = not_null(d_32);
        t = unzip_1(t, RowLet_0);
        {
          ATerm s_1 (ATerm t)
          {
            t = TCons_2(t, _id, TNil_0);
            return(t);
          }
          t = TCons_2(t, concat_0, s_1);
          i_32 = t;
          x_31 :
          if(match_cons(i_32, sym_TCons_2))
            {
              j_32 = ATgetArgument(i_32, 0);
              k_32 = ATgetArgument(i_32, 1);
              y_31 :
              if(match_cons(k_32, sym_TCons_2))
                {
                  l_32 = ATgetArgument(k_32, 0);
                  m_32 = ATgetArgument(k_32, 1);
                  z_31 :
                  if(match_cons(m_32, sym_TNil_0))
                    {
                      if(g_32 != NULL && g_32 != j_32)
                        _fail(j_32);
                      else
                        g_32 = j_32;
                      if(h_32 != NULL && h_32 != l_32)
                        _fail(l_32);
                      else
                        h_32 = l_32;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_32), (ATerm) ATmakeAppl(sym_Let_2, not_null(g_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(h_32)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  w_32 = t;
  t_32 :
  if(match_cons(w_32, sym_TCons_2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      u_32 :
      if(match_cons(y_32, sym_TCons_2))
        {
          z_32 = ATgetArgument(y_32, 0);
          a_33 = ATgetArgument(y_32, 1);
          v_32 :
          if(match_cons(a_33, sym_TNil_0))
            {
              ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
              ATerm m_11;
              m_11 = t;
              {
                ATerm g_33 = NULL;
                ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
                t = h_67(t);
                g_33 = t;
                if(d_33 != NULL && d_33 != g_33)
                  _fail(g_33);
                else
                  d_33 = g_33;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_32), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm n_11 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = n_11;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  h_33 = t;
                  s_32 :
                  if(match_cons(h_33, sym_Cons_2))
                    {
                      i_33 = ATgetArgument(h_33, 0);
                      j_33 = ATgetArgument(h_33, 1);
                      if(e_33 != NULL && e_33 != i_33)
                        _fail(i_33);
                      else
                        e_33 = i_33;
                      if(f_33 != NULL && f_33 != j_33)
                        _fail(j_33);
                      else
                        f_33 = j_33;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_32), not_null(e_33)), not_null(f_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = m_11;
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
ATerm WildPat_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  s_33 = t;
  o_33 :
  if(match_cons(s_33, sym_Row_3))
    {
      t_33 = ATgetArgument(s_33, 0);
      y_33 = ATgetArgument(s_33, 1);
      z_33 = ATgetArgument(s_33, 2);
      p_33 :
      if(match_cons(t_33, sym_Cons_2))
        {
          u_33 = ATgetArgument(t_33, 0);
          x_33 = ATgetArgument(t_33, 1);
          q_33 :
          if(match_cons(u_33, sym_As_2))
            {
              v_33 = ATgetArgument(u_33, 0);
              w_33 = ATgetArgument(u_33, 1);
              r_33 :
              if(match_cons(w_33, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(x_33), not_null(y_33), not_null(z_33));
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
ATerm default_state_0 (ATerm t)
{
  ATerm f_34 = NULL;
  t = filter_1(t, WildPat_0);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_34));
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  j_34 :
  if(match_cons(m_34, sym_TCons_2))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      k_34 :
      if(match_cons(o_34, sym_TCons_2))
        {
          p_34 = ATgetArgument(o_34, 0);
          q_34 = ATgetArgument(o_34, 1);
          l_34 :
          if(match_cons(q_34, sym_TNil_0))
            {
              if(n_34 != NULL && n_34 != p_34)
                _fail(p_34);
              else
                n_34 = p_34;
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
ATerm MatchCons_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm s_35 = NULL,v_35 = NULL,w_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Wld_0))
    {
      ATerm x_35 = NULL;
      ATerm b_36 = NULL;
      t = k_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm y_35 = NULL,z_35 = NULL;
          y_35 = t;
          z_34 :
          if(match_cons(y_35, sym_Var_1))
            {
              z_35 = ATgetArgument(y_35, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(z_35)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, t_1);
        b_36 = t;
        if(x_35 != NULL && x_35 != b_36)
          _fail(b_36);
        else
          x_35 = b_36;
      }
      t = not_null(x_35);
    }
  else
    {
      if(match_cons(s_35, sym_Int_1))
        {
          v_35 = ATgetArgument(s_35, 0);
          {
            ATerm d_36 = NULL,e_36 = NULL;
            t = j_0(t);
            d_36 = t;
            e_35 :
            if(match_cons(d_36, sym_Int_1))
              {
                e_36 = ATgetArgument(d_36, 0);
                {
                  ATerm k_36 = NULL;
                  if(v_35 != NULL && v_35 != e_36)
                    _fail(e_36);
                  else
                    v_35 = e_36;
                  t = k_0(t);
                  k_36 = t;
                  d_35 :
                  if(!(match_cons(k_36, sym_Nil_0)))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        }
      else
        {
          if(match_cons(s_35, sym_Real_1))
            {
              v_35 = ATgetArgument(s_35, 0);
              {
                ATerm t_36 = NULL,u_36 = NULL;
                t = j_0(t);
                t_36 = t;
                k_35 :
                if(match_cons(t_36, sym_Real_1))
                  {
                    u_36 = ATgetArgument(t_36, 0);
                    {
                      ATerm v_36 = NULL;
                      if(v_35 != NULL && v_35 != u_36)
                        _fail(u_36);
                      else
                        v_35 = u_36;
                      t = k_0(t);
                      v_36 = t;
                      j_35 :
                      if(!(match_cons(v_36, sym_Nil_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Nil_0);
              }
            }
          else
            {
              if(match_cons(s_35, sym_Str_1))
                {
                  v_35 = ATgetArgument(s_35, 0);
                  {
                    ATerm x_36 = NULL,y_36 = NULL;
                    t = j_0(t);
                    x_36 = t;
                    n_35 :
                    if(match_cons(x_36, sym_Str_1))
                      {
                        y_36 = ATgetArgument(x_36, 0);
                        {
                          ATerm z_36 = NULL;
                          if(v_35 != NULL && v_35 != y_36)
                            _fail(y_36);
                          else
                            v_35 = y_36;
                          t = k_0(t);
                          z_36 = t;
                          m_35 :
                          if(!(match_cons(z_36, sym_Nil_0)))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                  }
                }
              else
                {
                  if(match_cons(s_35, sym_Op_2))
                    {
                      v_35 = ATgetArgument(s_35, 0);
                      w_35 = ATgetArgument(s_35, 1);
                      {
                        ATerm c_37 = NULL;
                        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
                        t = j_0(t);
                        d_37 = t;
                        q_35 :
                        if(match_cons(d_37, sym_Fun_2))
                          {
                            e_37 = ATgetArgument(d_37, 0);
                            f_37 = ATgetArgument(d_37, 1);
                            {
                              ATerm g_37 = NULL;
                              if(v_35 != NULL && v_35 != e_37)
                                _fail(e_37);
                              else
                                v_35 = e_37;
                              if(c_37 != NULL && c_37 != f_37)
                                _fail(f_37);
                              else
                                c_37 = f_37;
                              {
                                ATerm h_37 = NULL;
                                t = not_null(w_35);
                                t = length_0(t);
                                h_37 = t;
                                if(g_37 != NULL && g_37 != h_37)
                                  _fail(h_37);
                                else
                                  g_37 = h_37;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_37), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_37), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = eq_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                        t = not_null(w_35);
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
ATerm ConsTransition_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  e_38 = t;
  b_38 :
  if(match_cons(e_38, sym_Row_3))
    {
      f_38 = ATgetArgument(e_38, 0);
      o_38 = ATgetArgument(e_38, 1);
      p_38 = ATgetArgument(e_38, 2);
      c_38 :
      if(match_cons(f_38, sym_Cons_2))
        {
          k_38 = ATgetArgument(f_38, 0);
          n_38 = ATgetArgument(f_38, 1);
          d_38 :
          if(match_cons(k_38, sym_As_2))
            {
              l_38 = ATgetArgument(k_38, 0);
              m_38 = ATgetArgument(k_38, 1);
              {
                ATerm u_38 = NULL,y_38 = NULL;
                ATerm o_11;
                o_11 = t;
                {
                  ATerm x_38 = NULL;
                  t = not_null(m_38);
                  t = v_63(t);
                  x_38 = t;
                  if(u_38 != NULL && u_38 != x_38)
                    _fail(x_38);
                  else
                    u_38 = x_38;
                }
                t = o_11;
                {
                  ATerm z_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = conc_0(t);
                  z_38 = t;
                  if(y_38 != NULL && y_38 != z_38)
                    _fail(z_38);
                  else
                    y_38 = z_38;
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(n_38), not_null(y_38), not_null(p_38));
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
ATerm Transition_0 (ATerm t)
{
  ATerm m_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  m_40 = t;
  q_39 :
  if(match_cons(m_40, sym_TCons_2))
    {
      t_40 = ATgetArgument(m_40, 0);
      u_40 = ATgetArgument(m_40, 1);
      r_39 :
      if(match_cons(u_40, sym_TCons_2))
        {
          v_40 = ATgetArgument(u_40, 0);
          a_41 = ATgetArgument(u_40, 1);
          s_39 :
          if(match_cons(v_40, sym_TCons_2))
            {
              w_40 = ATgetArgument(v_40, 0);
              x_40 = ATgetArgument(v_40, 1);
              x_39 :
              if(match_cons(x_40, sym_TCons_2))
                {
                  y_40 = ATgetArgument(x_40, 0);
                  z_40 = ATgetArgument(x_40, 1);
                  y_39 :
                  if(match_cons(z_40, sym_TNil_0))
                    {
                      z_39 :
                      if(match_cons(a_41, sym_TNil_0))
                        {
                          ATerm e_41 = NULL;
                          ATerm f_41 = NULL;
                          t = not_null(t_40);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = not_null(w_40);
                                  return(t);
                                }
                                ATerm x_1 (ATerm t)
                                {
                                  t = not_null(y_40);
                                  return(t);
                                }
                                t = MatchCons_2(t, w_1, x_1);
                                return(t);
                              }
                              t = ConsTransition_1(t, v_1);
                              return(t);
                            }
                            t = filter_1(t, u_1);
                            f_41 = t;
                            if(e_41 != NULL && e_41 != f_41)
                              _fail(f_41);
                            else
                              e_41 = f_41;
                          }
                          t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(w_40), not_null(y_40), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(e_41)));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  n_41 = t;
  j_41 :
  if(match_cons(n_41, sym_TCons_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      k_41 :
      if(match_cons(p_41, sym_TCons_2))
        {
          q_41 = ATgetArgument(p_41, 0);
          t_41 = ATgetArgument(p_41, 1);
          l_41 :
          if(match_cons(q_41, sym_Cons_2))
            {
              r_41 = ATgetArgument(q_41, 0);
              s_41 = ATgetArgument(q_41, 1);
              m_41 :
              if(match_cons(t_41, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(o_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_41), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  d_42 = t;
  z_41 :
  if(match_cons(d_42, sym_TCons_2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      a_42 :
      if(match_cons(f_42, sym_TCons_2))
        {
          g_42 = ATgetArgument(f_42, 0);
          h_42 = ATgetArgument(f_42, 1);
          b_42 :
          if(match_cons(g_42, sym_Nil_0))
            {
              c_42 :
              if(match_cons(h_42, sym_TNil_0))
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
ATerm rzip_1 (ATerm t, ATerm g_78 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, g_78);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_Cons_2))
    {
      o_42 = ATgetArgument(n_42, 0);
      p_42 = ATgetArgument(n_42, 1);
      {
        ATerm s_42 = NULL;
        ATerm u_42 = NULL;
        t = not_null(p_42);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm p_11 = t;
            if(PushChoice()==0)
              {
                ATerm t_42 = NULL;
                t_42 = t;
                if(o_42 != NULL && o_42 != t_42)
                  _fail(t_42);
                else
                  o_42 = t_42;
                PopChoice();
                _fail(t);
              }
            else
              t = p_11;
            return(t);
          }
          t = filter_1(t, y_1);
          u_42 = t;
          if(s_42 != NULL && s_42 != u_42)
            _fail(u_42);
          else
            s_42 = u_42;
        }
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_42), not_null(s_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm c_43 (ATerm t)
  {
    t = l_80(t);
    {
      ATerm q_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = q_11;
          t = Cons_2(t, _id, c_43);
        }
    }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, z_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm g_43 = NULL,h_43 = NULL,n_43 = NULL,o_43 = NULL;
    g_43 = t;
    e_43 :
    if(match_cons(g_43, sym_As_2))
      {
        h_43 = ATgetArgument(g_43, 0);
        o_43 = ATgetArgument(g_43, 1);
        f_43 :
        if(match_cons(h_43, sym_Off_1))
          {
            n_43 = ATgetArgument(h_43, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_43));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, a_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, b_2, add_0, c_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  g_44 = t;
  c_44 :
  if(match_cons(g_44, sym_Row_3))
    {
      h_44 = ATgetArgument(g_44, 0);
      p_44 = ATgetArgument(g_44, 1);
      q_44 = ATgetArgument(g_44, 2);
      d_44 :
      if(match_cons(h_44, sym_Cons_2))
        {
          i_44 = ATgetArgument(h_44, 0);
          o_44 = ATgetArgument(h_44, 1);
          e_44 :
          if(match_cons(i_44, sym_As_2))
            {
              j_44 = ATgetArgument(i_44, 0);
              k_44 = ATgetArgument(i_44, 1);
              f_44 :
              if(match_cons(k_44, sym_Str_1))
                {
                  l_44 = ATgetArgument(k_44, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(l_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                }
              else
                {
                  if(match_cons(k_44, sym_Real_1))
                    {
                      l_44 = ATgetArgument(k_44, 0);
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Real_1, not_null(l_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    {
                      if(match_cons(k_44, sym_Int_1))
                        {
                          l_44 = ATgetArgument(k_44, 0);
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Int_1, not_null(l_44)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        }
                      else
                        {
                          if(match_cons(k_44, sym_Op_2))
                            {
                              l_44 = ATgetArgument(k_44, 0);
                              m_44 = ATgetArgument(k_44, 1);
                              {
                                ATerm w_44 = NULL,y_44 = NULL;
                                ATerm r_11;
                                r_11 = t;
                                {
                                  ATerm x_44 = NULL;
                                  t = not_null(m_44);
                                  t = length_0(t);
                                  x_44 = t;
                                  if(w_44 != NULL && w_44 != x_44)
                                    _fail(x_44);
                                  else
                                    w_44 = x_44;
                                }
                                t = r_11;
                                {
                                  ATerm z_44 = NULL;
                                  t = not_null(m_44);
                                  t = offsets_0(t);
                                  z_44 = t;
                                  if(y_44 != NULL && y_44 != z_44)
                                    _fail(z_44);
                                  else
                                    y_44 = z_44;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(l_44), not_null(w_44)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_44), (ATerm) ATmakeAppl(sym_TNil_0)));
                                }
                              }
                            }
                          else
                            _fail(t);
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
ATerm filter_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm s_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = s_11;
      {
        ATerm t_11 = t;
        if(PushChoice()==0)
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1(t, s_73);
              return(t);
            }
            t = Cons_2(t, s_73, d_2);
            PopChoice();
          }
        else
          {
            t = t_11;
            {
              ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
              j_45 = t;
              i_45 :
              if(match_cons(j_45, sym_Cons_2))
                {
                  k_45 = ATgetArgument(j_45, 0);
                  l_45 = ATgetArgument(j_45, 1);
                  t = not_null(l_45);
                  t = filter_1(t, s_73);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm u_11 = t;
  if(PushChoice()==0)
    {
      t = explode_string_0(t);
      {
        ATerm v_11 = t;
        if(PushChoice()==0)
          {
            ATerm a_48 (ATerm t)
            {
              ATerm w_11 = t;
              if(PushChoice()==0)
                {
                  t = Cons_2(t, _id, a_48);
                  PopChoice();
                }
              else
                {
                  t = w_11;
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm t_46 = NULL;
                      t_46 = t;
                      p_45 :
                      if(!(match_int(t_46, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm f_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, e_2, f_2);
                  }
                }
              return(t);
            }
            t = a_48(t);
            PopChoice();
          }
        else
          {
            t = v_11;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        t = implode_string_0(t);
      }
      PopChoice();
    }
  else
    {
      t = u_11;
      {
        ATerm u_46 = NULL,d_47 = NULL,e_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
        u_46 = t;
        r_45 :
        if(match_cons(u_46, sym_Cons_2))
          {
            d_47 = ATgetArgument(u_46, 0);
            y_47 = ATgetArgument(u_46, 1);
            s_45 :
            if(match_cons(d_47, sym_Row_3))
              {
                e_47 = ATgetArgument(d_47, 0);
                w_47 = ATgetArgument(d_47, 1);
                x_47 = ATgetArgument(d_47, 2);
                t_45 :
                if(match_cons(e_47, sym_Cons_2))
                  {
                    r_47 = ATgetArgument(e_47, 0);
                    v_47 = ATgetArgument(e_47, 1);
                    u_45 :
                    if(match_cons(r_47, sym_As_2))
                      {
                        s_47 = ATgetArgument(r_47, 0);
                        u_47 = ATgetArgument(r_47, 1);
                        s_46 :
                        if(match_cons(s_47, sym_Off_1))
                          {
                            t_47 = ATgetArgument(s_47, 0);
                            t = not_null(t_47);
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
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  j_48 = t;
  i_48 :
  if(match_cons(j_48, sym_Matrix_1))
    {
      k_48 = ATgetArgument(j_48, 0);
      {
        ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
        ATerm r_48 = NULL;
        t = not_null(k_48);
        {
          ATerm s_48 = NULL;
          t = get_path_0(t);
          r_48 = t;
          if(m_48 != NULL && m_48 != r_48)
            _fail(r_48);
          else
            m_48 = r_48;
          t = not_null(k_48);
          {
            ATerm t_48 = NULL;
            t = outedges_0(t);
            s_48 = t;
            if(n_48 != NULL && n_48 != s_48)
              _fail(s_48);
            else
              n_48 = s_48;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_48), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_48), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm u_48 = NULL;
              t = transitions_0(t);
              t_48 = t;
              if(o_48 != NULL && o_48 != t_48)
                _fail(t_48);
              else
                o_48 = t_48;
              t = not_null(k_48);
              {
                ATerm v_48 = NULL;
                t = default_state_0(t);
                u_48 = t;
                if(p_48 != NULL && p_48 != u_48)
                  _fail(u_48);
                else
                  p_48 = u_48;
                t = new_0(t);
                v_48 = t;
                if(q_48 != NULL && q_48 != v_48)
                  _fail(v_48);
                else
                  q_48 = v_48;
                {
                  ATerm x_11;
                  x_11 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(k_48)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(q_48)), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                      return(t);
                    }
                    t = assert_1(t, g_2);
                  }
                  t = x_11;
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(q_48), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_48)), not_null(o_48), not_null(p_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  f_49 = t;
  d_49 :
  if(match_cons(f_49, sym_Row_3))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      k_49 = ATgetArgument(f_49, 2);
      e_49 :
      if(match_cons(h_49, sym_Cons_2))
        {
          i_49 = ATgetArgument(h_49, 0);
          j_49 = ATgetArgument(h_49, 1);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_49), not_null(g_49)), not_null(j_49), not_null(k_49));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym_Matrix_1))
    {
      u_49 = ATgetArgument(t_49, 0);
      {
        ATerm w_49 = NULL;
        ATerm x_49 = NULL;
        t = not_null(u_49);
        {
          ATerm y_11 = t;
          if(PushChoice()==0)
            {
              ATerm h_2 (ATerm t)
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm k_2 (ATerm t)
                    {
                      ATerm z_11 = t;
                      if(PushChoice()==0)
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = z_11;
                      return(t);
                    }
                    t = As_2(t, _id, k_2);
                    return(t);
                  }
                  t = Cons_2(t, j_2, _id);
                  return(t);
                }
                t = Row_3(t, i_2, _id, _id);
                return(t);
              }
              t = map_1(t, h_2);
              PopChoice();
              _fail(t);
            }
          else
            t = y_11;
          t = not_null(u_49);
          t = map_1(t, ShiftColumnRow_0);
          x_49 = t;
          if(w_49 != NULL && w_49 != x_49)
            _fail(x_49);
          else
            w_49 = x_49;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(w_49));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  a_50 :
  if(!(match_cons(b_50, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym_As_2))
    {
      h_50 = ATgetArgument(g_50, 0);
      i_50 = ATgetArgument(g_50, 1);
      {
        ATerm p_50 = NULL;
        t = not_null(h_50);
        {
          ATerm r_50 = NULL;
          t = f_60(t);
          p_50 = t;
          t = not_null(i_50);
          t = g_60(t);
          r_50 = t;
          t = (ATerm) ATmakeAppl(sym_As_2, not_null(p_50), not_null(r_50));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Row_3 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  k_53 :
  if(match_cons(n_53, sym_Row_3))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      q_53 = ATgetArgument(n_53, 2);
      {
        ATerm u_53 = NULL;
        t = not_null(o_53);
        {
          ATerm w_53 = NULL;
          t = u_58(t);
          u_53 = t;
          t = not_null(p_53);
          {
            ATerm y_53 = NULL;
            t = v_58(t);
            w_53 = t;
            t = not_null(q_53);
            t = w_58(t);
            y_53 = t;
            t = (ATerm) ATmakeAppl(sym_Row_3, not_null(u_53), not_null(w_53), not_null(y_53));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SkipWild_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  g_54 :
  if(match_cons(h_54, sym_Matrix_1))
    {
      i_54 = ATgetArgument(h_54, 0);
      {
        ATerm k_54 = NULL;
        ATerm l_54 = NULL;
        t = not_null(i_54);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm n_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, n_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, m_2, _id);
            return(t);
          }
          t = map_1(t, l_2);
          l_54 = t;
          if(k_54 != NULL && k_54 != l_54)
            _fail(l_54);
          else
            k_54 = l_54;
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_54));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_Matrix_1))
    {
      w_54 = ATgetArgument(v_54, 0);
      {
        ATerm y_54 = NULL;
        ATerm e_55 = NULL;
        t = not_null(w_54);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
            z_54 = t;
            q_54 :
            if(match_cons(z_54, sym_Row_3))
              {
                a_55 = ATgetArgument(z_54, 0);
                b_55 = ATgetArgument(z_54, 1);
                c_55 = ATgetArgument(z_54, 2);
                r_54 :
                if(match_cons(a_55, sym_Nil_0))
                  {
                    s_54 :
                    if(match_cons(b_55, sym_Nil_0))
                      t = not_null(c_55);
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
          t = map_1(t, o_2);
          e_55 = t;
          if(y_54 != NULL && y_54 != e_55)
            _fail(e_55);
          else
            y_54 = e_55;
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_54));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm a_12 = t;
  if(PushChoice()==0)
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = a_12;
      {
        ATerm b_12 = t;
        if(PushChoice()==0)
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = b_12;
            {
              ATerm c_12 = t;
              if(PushChoice()==0)
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_12;
                  t = Mixture_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
  k_55 = t;
  j_55 :
  if(match_cons(k_55, sym_Cons_2))
    {
      l_55 = ATgetArgument(k_55, 0);
      m_55 = ATgetArgument(k_55, 1);
      t = not_null(m_55);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
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
            {
              ATerm d_12;
              d_12 = t;
              {
                ATerm c_56 = NULL;
                ATerm d_56 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm e_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  d_56 = t;
                  if(c_56 != NULL && c_56 != d_56)
                    _fail(d_56);
                  else
                    c_56 = d_56;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_56), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_put_0(t);
              }
              t = d_12;
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
ATerm end_scope_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm n_56 = NULL;
    ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
    t = e_67(t);
    n_56 = t;
    if(l_56 != NULL && l_56 != n_56)
      _fail(n_56);
    else
      l_56 = n_56;
    {
      ATerm g_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = g_12;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      o_56 = t;
      j_56 :
      if(match_cons(o_56, sym_Cons_2))
        {
          p_56 = ATgetArgument(o_56, 0);
          q_56 = ATgetArgument(o_56, 1);
          if(m_56 != NULL && m_56 != p_56)
            _fail(p_56);
          else
            m_56 = p_56;
          if(k_56 != NULL && k_56 != q_56)
            _fail(q_56);
          else
            k_56 = q_56;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_56), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(m_56);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm r_56 = NULL;
              r_56 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_56), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, p_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = f_12;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_82 (ATerm), ATerm d_82 (ATerm))
{
  ATerm h_12 = t;
  if(PushChoice()==0)
    {
      t = c_82(t);
      t = d_82(t);
      PopChoice();
    }
  else
    {
      t = h_12;
      t = d_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_67 (ATerm))
{
  ATerm y_56 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm z_56 = NULL;
    ATerm a_57 = NULL;
    t = d_67(t);
    z_56 = t;
    if(y_56 != NULL && y_56 != z_56)
      _fail(z_56);
    else
      y_56 = z_56;
    {
      ATerm b_57 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm j_12 = t;
        if(PushChoice()==0)
          {
            t = table_get_0(t);
            PopChoice();
          }
        else
          {
            t = j_12;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        b_57 = t;
        if(a_57 != NULL && a_57 != b_57)
          _fail(b_57);
        else
          a_57 = b_57;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_56), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(a_57)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = i_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
{
  t = begin_scope_1(t, f_67);
  {
    ATerm q_2 (ATerm t)
    {
      t = end_scope_1(t, f_67);
      return(t);
    }
    t = restore_always_2(t, g_67, q_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm k_12 = t;
      if(PushChoice()==0)
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = k_12;
          {
            ATerm l_12 = t;
            if(PushChoice()==0)
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = l_12;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, t_2);
    t = _all(t, s_2);
    return(t);
  }
  t = scope_2(t, r_2, s_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  j_57 = t;
  g_57 :
  if(match_cons(j_57, sym_TCons_2))
    {
      k_57 = ATgetArgument(j_57, 0);
      l_57 = ATgetArgument(j_57, 1);
      h_57 :
      if(match_cons(l_57, sym_TCons_2))
        {
          m_57 = ATgetArgument(l_57, 0);
          n_57 = ATgetArgument(l_57, 1);
          i_57 :
          if(match_cons(n_57, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_57), not_null(m_57));
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
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  x_57 = t;
  s_57 :
  if(match_cons(x_57, sym_TCons_2))
    {
      y_57 = ATgetArgument(x_57, 0);
      b_58 = ATgetArgument(x_57, 1);
      t_57 :
      if(match_cons(y_57, sym_Cons_2))
        {
          z_57 = ATgetArgument(y_57, 0);
          a_58 = ATgetArgument(y_57, 1);
          u_57 :
          if(match_cons(b_58, sym_TCons_2))
            {
              c_58 = ATgetArgument(b_58, 0);
              f_58 = ATgetArgument(b_58, 1);
              v_57 :
              if(match_cons(c_58, sym_Cons_2))
                {
                  d_58 = ATgetArgument(c_58, 0);
                  e_58 = ATgetArgument(c_58, 1);
                  w_57 :
                  if(match_cons(f_58, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(z_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_58), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_58), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,x_58 = NULL,y_58 = NULL;
  r_58 = t;
  m_58 :
  if(match_cons(r_58, sym_TCons_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      n_58 :
      if(match_cons(s_58, sym_Nil_0))
        {
          o_58 :
          if(match_cons(t_58, sym_TCons_2))
            {
              x_58 = ATgetArgument(t_58, 0);
              y_58 = ATgetArgument(t_58, 1);
              p_58 :
              if(match_cons(x_58, sym_Nil_0))
                {
                  q_58 :
                  if(match_cons(y_58, sym_TNil_0))
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
ATerm zip_1 (ATerm t, ATerm w_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_77);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t_59 = t;
  s_59 :
  if(match_cons(t_59, sym_Cong_2))
    {
      u_59 = ATgetArgument(t_59, 0);
      v_59 = ATgetArgument(t_59, 1);
      {
        ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,e_61 = NULL;
        ATerm m_12;
        m_12 = t;
        {
          ATerm d_60 = NULL;
          t = not_null(v_59);
          {
            ATerm i_60 = NULL;
            t = map_1(t, new_0);
            d_60 = t;
            if(a_60 != NULL && a_60 != d_60)
              _fail(d_60);
            else
              a_60 = d_60;
            t = not_null(a_60);
            {
              ATerm j_60 = NULL;
              ATerm u_2 (ATerm t)
              {
                ATerm e_60 = NULL;
                e_60 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_60));
                return(t);
              }
              t = map_1(t, u_2);
              i_60 = t;
              if(y_59 != NULL && y_59 != i_60)
                _fail(i_60);
              else
                y_59 = i_60;
              t = not_null(v_59);
              {
                ATerm m_60 = NULL;
                t = map_1(t, new_0);
                j_60 = t;
                if(b_60 != NULL && b_60 != j_60)
                  _fail(j_60);
                else
                  b_60 = j_60;
                t = not_null(b_60);
                {
                  ATerm n_60 = NULL,c_61 = NULL;
                  ATerm v_2 (ATerm t)
                  {
                    ATerm k_60 = NULL;
                    k_60 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_60));
                    return(t);
                  }
                  t = map_1(t, v_2);
                  m_60 = t;
                  if(z_59 != NULL && z_59 != m_60)
                    _fail(m_60);
                  else
                    z_59 = m_60;
                  {
                    ATerm o_60 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_60), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    o_60 = t;
                    if(n_60 != NULL && n_60 != o_60)
                      _fail(o_60);
                    else
                      n_60 = o_60;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
                        p_60 = t;
                        k_59 :
                        if(match_cons(p_60, sym_TCons_2))
                          {
                            q_60 = ATgetArgument(p_60, 0);
                            w_60 = ATgetArgument(p_60, 1);
                            l_59 :
                            if(match_cons(q_60, sym_TCons_2))
                              {
                                r_60 = ATgetArgument(q_60, 0);
                                s_60 = ATgetArgument(q_60, 1);
                                m_59 :
                                if(match_cons(s_60, sym_TCons_2))
                                  {
                                    u_60 = ATgetArgument(s_60, 0);
                                    v_60 = ATgetArgument(s_60, 1);
                                    n_59 :
                                    if(match_cons(v_60, sym_TNil_0))
                                      {
                                        o_59 :
                                        if(match_cons(w_60, sym_TCons_2))
                                          {
                                            x_60 = ATgetArgument(w_60, 0);
                                            y_60 = ATgetArgument(w_60, 1);
                                            p_59 :
                                            if(match_cons(y_60, sym_TNil_0))
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_60)))));
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
                      t = zip_1(t, w_2);
                      c_61 = t;
                      if(c_60 != NULL && c_60 != c_61)
                        _fail(c_61);
                      else
                        c_60 = c_61;
                    }
                  }
                }
              }
            }
          }
        }
        t = m_12;
        {
          ATerm g_61 = NULL;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_60), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_60), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          g_61 = t;
          if(e_61 != NULL && e_61 != g_61)
            _fail(g_61);
          else
            e_61 = g_61;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_59), not_null(y_59))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_60)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_59), not_null(z_59))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,l_62 = NULL;
  b_62 = t;
  a_62 :
  if(match_cons(b_62, sym_Cong_2))
    {
      c_62 = ATgetArgument(b_62, 0);
      l_62 = ATgetArgument(b_62, 1);
      {
        ATerm o_62 = NULL;
        ATerm u_62 = NULL;
        t = not_null(l_62);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm p_62 = NULL,q_62 = NULL;
            q_62 = t;
            y_61 :
            if(match_cons(q_62, sym_Match_1))
              {
                p_62 = ATgetArgument(q_62, 0);
                t = not_null(p_62);
              }
            else
              {
                if(match_cons(q_62, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_2);
          u_62 = t;
          if(o_62 != NULL && o_62 != u_62)
            _fail(u_62);
          else
            o_62 = u_62;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_62), not_null(o_62)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  c_63 = t;
  a_63 :
  if(match_cons(c_63, sym_Scope_2))
    {
      d_63 = ATgetArgument(c_63, 0);
      e_63 = ATgetArgument(c_63, 1);
      b_63 :
      if(match_cons(d_63, sym_Nil_0))
        t = not_null(e_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  z_63 :
  if(match_cons(m_64, sym_Where_1))
    {
      n_64 = ATgetArgument(m_64, 0);
      a_64 :
      if(match_cons(n_64, sym_Seq_2))
        {
          l_64 = ATgetArgument(n_64, 0);
          h_64 = ATgetArgument(n_64, 1);
          b_64 :
          if(match_cons(l_64, sym_Where_1))
            {
              g_64 = ATgetArgument(l_64, 0);
              c_64 :
              if(match_cons(h_64, sym_Seq_2))
                {
                  i_64 = ATgetArgument(h_64, 0);
                  k_64 = ATgetArgument(h_64, 1);
                  d_64 :
                  if(match_cons(i_64, sym_Build_1))
                    {
                      j_64 = ATgetArgument(i_64, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_64)), not_null(k_64))));
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
          if(match_cons(n_64, sym_Where_1))
            {
              l_64 = ATgetArgument(n_64, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_64));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(m_64, sym_Test_1))
        {
          n_64 = ATgetArgument(m_64, 0);
          e_64 :
          if(match_cons(n_64, sym_Test_1))
            {
              l_64 = ATgetArgument(n_64, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_64));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(m_64, sym_Not_1))
            {
              n_64 = ATgetArgument(m_64, 0);
              f_64 :
              if(match_cons(n_64, sym_Not_1))
                {
                  l_64 = ATgetArgument(n_64, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_64));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(m_64, sym_LChoice_2))
                {
                  n_64 = ATgetArgument(m_64, 0);
                  o_64 = ATgetArgument(m_64, 1);
                  if(n_64 != NULL && n_64 != o_64)
                    _fail(o_64);
                  else
                    n_64 = o_64;
                  t = not_null(n_64);
                }
              else
                {
                  if(match_cons(m_64, sym_Choice_2))
                    {
                      n_64 = ATgetArgument(m_64, 0);
                      o_64 = ATgetArgument(m_64, 1);
                      if(n_64 != NULL && n_64 != o_64)
                        _fail(o_64);
                      else
                        n_64 = o_64;
                      t = not_null(n_64);
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL;
  q_65 = t;
  m_65 :
  if(match_cons(q_65, sym_LChoice_2))
    {
      r_65 = ATgetArgument(q_65, 0);
      u_65 = ATgetArgument(q_65, 1);
      n_65 :
      if(match_cons(r_65, sym_LChoice_2))
        {
          s_65 = ATgetArgument(r_65, 0);
          t_65 = ATgetArgument(r_65, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_65), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_65), not_null(u_65)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(q_65, sym_Seq_2))
        {
          r_65 = ATgetArgument(q_65, 0);
          u_65 = ATgetArgument(q_65, 1);
          o_65 :
          if(match_cons(r_65, sym_Seq_2))
            {
              s_65 = ATgetArgument(r_65, 0);
              t_65 = ATgetArgument(r_65, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_65), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_65), not_null(u_65)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(q_65, sym_Choice_2))
            {
              r_65 = ATgetArgument(q_65, 0);
              u_65 = ATgetArgument(q_65, 1);
              p_65 :
              if(match_cons(r_65, sym_Choice_2))
                {
                  s_65 = ATgetArgument(r_65, 0);
                  t_65 = ATgetArgument(r_65, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_65), (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_65), not_null(u_65)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  p_67 = t;
  c_67 :
  if(match_cons(p_67, sym_InfixApp_3))
    {
      q_67 = ATgetArgument(p_67, 0);
      m_67 = ATgetArgument(p_67, 1);
      l_67 = ATgetArgument(p_67, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_67), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(p_67, sym_BAM_3))
        {
          q_67 = ATgetArgument(p_67, 0);
          m_67 = ATgetArgument(p_67, 1);
          l_67 = ATgetArgument(p_67, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_67)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_67)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(p_67, sym_AM_2))
            {
              q_67 = ATgetArgument(p_67, 0);
              m_67 = ATgetArgument(p_67, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_67)));
            }
          else
            {
              if(match_cons(p_67, sym_MA_2))
                {
                  q_67 = ATgetArgument(p_67, 0);
                  m_67 = ATgetArgument(p_67, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_67)), not_null(m_67));
                }
              else
                {
                  if(match_cons(p_67, sym_BA_2))
                    {
                      q_67 = ATgetArgument(p_67, 0);
                      m_67 = ATgetArgument(p_67, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_67)), not_null(q_67));
                    }
                  else
                    {
                      if(match_cons(p_67, sym_Lets_2))
                        {
                          q_67 = ATgetArgument(p_67, 0);
                          m_67 = ATgetArgument(p_67, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_67), not_null(m_67));
                        }
                      else
                        {
                          if(match_cons(p_67, sym_LChoices_1))
                            {
                              q_67 = ATgetArgument(p_67, 0);
                              i_67 :
                              if(match_cons(q_67, sym_Cons_2))
                                {
                                  n_67 = ATgetArgument(q_67, 0);
                                  o_67 = ATgetArgument(q_67, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_67), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_67)));
                                }
                              else
                                {
                                  if(match_cons(q_67, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(p_67, sym_Choices_1))
                                {
                                  q_67 = ATgetArgument(p_67, 0);
                                  j_67 :
                                  if(match_cons(q_67, sym_Cons_2))
                                    {
                                      n_67 = ATgetArgument(q_67, 0);
                                      o_67 = ATgetArgument(q_67, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_67), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_67)));
                                    }
                                  else
                                    {
                                      if(match_cons(q_67, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_67, sym_Seqs_1))
                                    {
                                      q_67 = ATgetArgument(p_67, 0);
                                      k_67 :
                                      if(match_cons(q_67, sym_Cons_2))
                                        {
                                          n_67 = ATgetArgument(q_67, 0);
                                          o_67 = ATgetArgument(q_67, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_67), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_67)));
                                        }
                                      else
                                        {
                                          if(match_cons(q_67, sym_Nil_0))
                                            t = (ATerm) ATmakeAppl(sym_Id_0);
                                          else
                                            _fail(t);
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
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL;
  a_69 = t;
  y_68 :
  if(match_cons(a_69, sym_Where_1))
    {
      b_69 = ATgetArgument(a_69, 0);
      z_68 :
      if(match_cons(b_69, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  e_69 :
  if(match_cons(g_69, sym_LChoice_2))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      f_69 :
      if(match_cons(i_69, sym_Fail_0))
        t = not_null(h_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  s_69 = t;
  q_69 :
  if(match_cons(s_69, sym_LChoice_2))
    {
      t_69 = ATgetArgument(s_69, 0);
      u_69 = ATgetArgument(s_69, 1);
      r_69 :
      if(match_cons(t_69, sym_Fail_0))
        t = not_null(u_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm a_70 = NULL,h_70 = NULL,i_70 = NULL;
  a_70 = t;
  y_69 :
  if(match_cons(a_70, sym_Choice_2))
    {
      h_70 = ATgetArgument(a_70, 0);
      i_70 = ATgetArgument(a_70, 1);
      z_69 :
      if(match_cons(i_70, sym_Fail_0))
        t = not_null(h_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  o_70 = t;
  m_70 :
  if(match_cons(o_70, sym_Choice_2))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      n_70 :
      if(match_cons(p_70, sym_Fail_0))
        t = not_null(q_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  w_70 :
  if(match_cons(x_70, sym_Cong_2))
    {
      y_70 = ATgetArgument(x_70, 0);
      z_70 = ATgetArgument(x_70, 1);
      t = not_null(z_70);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm c_71 = NULL;
          c_71 = t;
          u_70 :
          if(!(match_cons(c_71, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, y_2);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  f_71 :
  if(match_cons(h_71, sym_Path_2))
    {
      i_71 = ATgetArgument(h_71, 0);
      j_71 = ATgetArgument(h_71, 1);
      g_71 :
      if(match_cons(j_71, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  t_71 = t;
  r_71 :
  if(match_cons(t_71, sym_One_1))
    {
      u_71 = ATgetArgument(t_71, 0);
      s_71 :
      if(match_cons(u_71, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL;
  z_71 = t;
  x_71 :
  if(match_cons(z_71, sym_Some_1))
    {
      a_72 = ATgetArgument(z_71, 0);
      y_71 :
      if(match_cons(a_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,i_72 = NULL;
  f_72 = t;
  d_72 :
  if(match_cons(f_72, sym_Rec_2))
    {
      g_72 = ATgetArgument(f_72, 0);
      i_72 = ATgetArgument(f_72, 1);
      e_72 :
      if(match_cons(i_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  o_72 :
  if(match_cons(q_72, sym_Scope_2))
    {
      r_72 = ATgetArgument(q_72, 0);
      s_72 = ATgetArgument(q_72, 1);
      p_72 :
      if(match_cons(s_72, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm y_72 = NULL,a_73 = NULL,b_73 = NULL;
  y_72 = t;
  w_72 :
  if(match_cons(y_72, sym_Seq_2))
    {
      a_73 = ATgetArgument(y_72, 0);
      b_73 = ATgetArgument(y_72, 1);
      x_72 :
      if(match_cons(a_73, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  j_73 = t;
  h_73 :
  if(match_cons(j_73, sym_Not_1))
    {
      k_73 = ATgetArgument(j_73, 0);
      i_73 :
      if(match_cons(k_73, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  x_73 = t;
  v_73 :
  if(match_cons(x_73, sym_Test_1))
    {
      y_73 = ATgetArgument(x_73, 0);
      w_73 :
      if(match_cons(y_73, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm n_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = n_12;
      {
        ATerm o_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = o_12;
            {
              ATerm p_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_12;
                  {
                    ATerm t_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = t_12;
                        {
                          ATerm u_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = u_12;
                              {
                                ATerm y_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = y_12;
                                    {
                                      ATerm k_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_13;
                                          {
                                            ATerm l_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_13;
                                                {
                                                  ATerm m_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = m_13;
                                                      {
                                                        ATerm q_13 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_13;
                                                            {
                                                              ATerm s_13 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = s_13;
                                                                  {
                                                                    ATerm t_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_13;
                                                                        {
                                                                          ATerm u_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_13;
                                                                              t = F15_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm I16_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL;
  d_74 = t;
  b_74 :
  if(match_cons(d_74, sym_Match_1))
    {
      e_74 = ATgetArgument(d_74, 0);
      c_74 :
      if(match_cons(e_74, sym_Wld_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm j_74 = NULL,p_74 = NULL;
  j_74 = t;
  h_74 :
  if(match_cons(j_74, sym_Where_1))
    {
      p_74 = ATgetArgument(j_74, 0);
      i_74 :
      if(match_cons(p_74, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL;
  u_74 = t;
  s_74 :
  if(match_cons(u_74, sym_All_1))
    {
      v_74 = ATgetArgument(u_74, 0);
      t_74 :
      if(match_cons(v_74, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  y_74 :
  if(match_cons(a_75, sym_Rec_2))
    {
      b_75 = ATgetArgument(a_75, 0);
      c_75 = ATgetArgument(a_75, 1);
      z_74 :
      if(match_cons(c_75, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL;
  i_75 = t;
  g_75 :
  if(match_cons(i_75, sym_Scope_2))
    {
      j_75 = ATgetArgument(i_75, 0);
      k_75 = ATgetArgument(i_75, 1);
      h_75 :
      if(match_cons(k_75, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,w_75 = NULL;
  s_75 = t;
  p_75 :
  if(match_cons(s_75, sym_LChoice_2))
    {
      t_75 = ATgetArgument(s_75, 0);
      w_75 = ATgetArgument(s_75, 1);
      q_75 :
      if(match_cons(t_75, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
  f_76 = t;
  a_76 :
  if(match_cons(f_76, sym_Seq_2))
    {
      g_76 = ATgetArgument(f_76, 0);
      h_76 = ATgetArgument(f_76, 1);
      b_76 :
      if(match_cons(h_76, sym_Id_0))
        t = not_null(g_76);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  l_76 :
  if(match_cons(q_76, sym_Seq_2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      m_76 :
      if(match_cons(r_76, sym_Id_0))
        t = not_null(s_76);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  y_76 = t;
  w_76 :
  if(match_cons(y_76, sym_Not_1))
    {
      z_76 = ATgetArgument(y_76, 0);
      x_76 :
      if(match_cons(z_76, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  k_77 = t;
  i_77 :
  if(match_cons(k_77, sym_Test_1))
    {
      l_77 = ATgetArgument(k_77, 0);
      j_77 :
      if(match_cons(l_77, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm v_13 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = v_13;
      {
        ATerm w_13 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = w_13;
            {
              ATerm x_13 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = x_13;
                  {
                    ATerm y_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm z_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_13;
                              {
                                ATerm a_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_14;
                                    {
                                      ATerm b_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_14;
                                          {
                                            ATerm c_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_14;
                                                {
                                                  ATerm d_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_14;
                                                      t = I16_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Simplify_0 (ATerm t)
{
  ATerm e_14 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = e_14;
      {
        ATerm f_14 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = f_14;
            {
              ATerm g_14 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = g_14;
                  {
                    ATerm h_14 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_14;
                        {
                          ATerm i_14 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_14;
                              {
                                ATerm j_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_14;
                                    {
                                      ATerm m_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_14;
                                          t = TransformingCongruence_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm conc_0 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,d_78 = NULL;
  x_77 = t;
  o_77 :
  if(match_cons(x_77, sym_TCons_2))
    {
      y_77 = ATgetArgument(x_77, 0);
      z_77 = ATgetArgument(x_77, 1);
      p_77 :
      if(match_cons(z_77, sym_TCons_2))
        {
          a_78 = ATgetArgument(z_77, 0);
          d_78 = ATgetArgument(z_77, 1);
          q_77 :
          if(match_cons(d_78, sym_TNil_0))
            {
              t = not_null(y_77);
              {
                ATerm z_2 (ATerm t)
                {
                  t = not_null(a_78);
                  return(t);
                }
                t = at_end_1(t, z_2);
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
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
  f_80 = t;
  f_79 :
  if(match_cons(f_80, sym_LChoice_2))
    {
      g_80 = ATgetArgument(f_80, 0);
      p_80 = ATgetArgument(f_80, 1);
      g_79 :
      if(match_cons(g_80, sym_Matrix_2))
        {
          h_80 = ATgetArgument(g_80, 0);
          i_80 = ATgetArgument(g_80, 1);
          h_79 :
          if(match_cons(p_80, sym_Choice_2))
            {
              d_80 = ATgetArgument(p_80, 0);
              e_80 = ATgetArgument(p_80, 1);
              i_79 :
              if(match_cons(d_80, sym_Matrix_2))
                {
                  b_80 = ATgetArgument(d_80, 0);
                  c_80 = ATgetArgument(d_80, 1);
                  {
                    ATerm w_80 = NULL,a_81 = NULL;
                    ATerm n_14;
                    n_14 = t;
                    {
                      ATerm z_80 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = union_0(t);
                      z_80 = t;
                      if(w_80 != NULL && w_80 != z_80)
                        _fail(z_80);
                      else
                        w_80 = z_80;
                    }
                    t = n_14;
                    {
                      ATerm b_81 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      b_81 = t;
                      if(a_81 != NULL && a_81 != b_81)
                        _fail(b_81);
                      else
                        a_81 = b_81;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(w_80), not_null(a_81)), not_null(e_80));
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(p_80, sym_LChoice_2))
                {
                  d_80 = ATgetArgument(p_80, 0);
                  e_80 = ATgetArgument(p_80, 1);
                  n_79 :
                  if(match_cons(d_80, sym_Matrix_2))
                    {
                      b_80 = ATgetArgument(d_80, 0);
                      c_80 = ATgetArgument(d_80, 1);
                      {
                        ATerm h_81 = NULL,j_81 = NULL;
                        ATerm o_14;
                        o_14 = t;
                        {
                          ATerm i_81 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = union_0(t);
                          i_81 = t;
                          if(h_81 != NULL && h_81 != i_81)
                            _fail(i_81);
                          else
                            h_81 = i_81;
                        }
                        t = o_14;
                        {
                          ATerm k_81 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          k_81 = t;
                          if(j_81 != NULL && j_81 != k_81)
                            _fail(k_81);
                          else
                            j_81 = k_81;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(h_81), not_null(j_81)), not_null(e_80));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_80, sym_Matrix_2))
                    {
                      d_80 = ATgetArgument(p_80, 0);
                      e_80 = ATgetArgument(p_80, 1);
                      {
                        ATerm q_81 = NULL,s_81 = NULL;
                        ATerm p_14;
                        p_14 = t;
                        {
                          ATerm r_81 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = union_0(t);
                          r_81 = t;
                          if(q_81 != NULL && q_81 != r_81)
                            _fail(r_81);
                          else
                            q_81 = r_81;
                        }
                        t = p_14;
                        {
                          ATerm t_81 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          t_81 = t;
                          if(s_81 != NULL && s_81 != t_81)
                            _fail(t_81);
                          else
                            s_81 = t_81;
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(q_81), not_null(s_81));
                        }
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
  else
    {
      if(match_cons(f_80, sym_Choice_2))
        {
          g_80 = ATgetArgument(f_80, 0);
          p_80 = ATgetArgument(f_80, 1);
          o_79 :
          if(match_cons(g_80, sym_Matrix_2))
            {
              h_80 = ATgetArgument(g_80, 0);
              i_80 = ATgetArgument(g_80, 1);
              p_79 :
              if(match_cons(p_80, sym_LChoice_2))
                {
                  d_80 = ATgetArgument(p_80, 0);
                  e_80 = ATgetArgument(p_80, 1);
                  q_79 :
                  if(match_cons(d_80, sym_Matrix_2))
                    {
                      b_80 = ATgetArgument(d_80, 0);
                      c_80 = ATgetArgument(d_80, 1);
                      {
                        ATerm z_81 = NULL,b_82 = NULL;
                        ATerm r_14;
                        r_14 = t;
                        {
                          ATerm a_82 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = union_0(t);
                          a_82 = t;
                          if(z_81 != NULL && z_81 != a_82)
                            _fail(a_82);
                          else
                            z_81 = a_82;
                        }
                        t = r_14;
                        {
                          ATerm g_82 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          g_82 = t;
                          if(b_82 != NULL && b_82 != g_82)
                            _fail(g_82);
                          else
                            b_82 = g_82;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(z_81), not_null(b_82)), not_null(e_80));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_80, sym_Choice_2))
                    {
                      d_80 = ATgetArgument(p_80, 0);
                      e_80 = ATgetArgument(p_80, 1);
                      t_79 :
                      if(match_cons(d_80, sym_Matrix_2))
                        {
                          b_80 = ATgetArgument(d_80, 0);
                          c_80 = ATgetArgument(d_80, 1);
                          {
                            ATerm o_82 = NULL,q_82 = NULL;
                            ATerm s_14;
                            s_14 = t;
                            {
                              ATerm p_82 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = union_0(t);
                              p_82 = t;
                              if(o_82 != NULL && o_82 != p_82)
                                _fail(p_82);
                              else
                                o_82 = p_82;
                            }
                            t = s_14;
                            {
                              ATerm r_82 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              r_82 = t;
                              if(q_82 != NULL && q_82 != r_82)
                                _fail(r_82);
                              else
                                q_82 = r_82;
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(o_82), not_null(q_82)), not_null(e_80));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(p_80, sym_Matrix_2))
                        {
                          d_80 = ATgetArgument(p_80, 0);
                          e_80 = ATgetArgument(p_80, 1);
                          {
                            ATerm w_82 = NULL,y_82 = NULL;
                            ATerm t_14;
                            t_14 = t;
                            {
                              ATerm x_82 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = union_0(t);
                              x_82 = t;
                              if(w_82 != NULL && w_82 != x_82)
                                _fail(x_82);
                              else
                                w_82 = x_82;
                            }
                            t = t_14;
                            {
                              ATerm z_82 = NULL;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_80), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_80), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              z_82 = t;
                              if(y_82 != NULL && y_82 != z_82)
                                _fail(z_82);
                              else
                                y_82 = z_82;
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_82), not_null(y_82));
                            }
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
      else
        {
          if(match_cons(f_80, sym_Scope_2))
            {
              g_80 = ATgetArgument(f_80, 0);
              p_80 = ATgetArgument(f_80, 1);
              u_79 :
              if(match_cons(p_80, sym_Matrix_2))
                {
                  d_80 = ATgetArgument(p_80, 0);
                  e_80 = ATgetArgument(p_80, 1);
                  {
                    ATerm d_83 = NULL;
                    ATerm j_83 = NULL;
                    t = not_null(e_80);
                    {
                      ATerm a_3 (ATerm t)
                      {
                        ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
                        e_83 = t;
                        d_79 :
                        if(match_cons(e_83, sym_Row_2))
                          {
                            f_83 = ATgetArgument(e_83, 0);
                            g_83 = ATgetArgument(e_83, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(f_83), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_80), not_null(g_83)));
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = map_1(t, a_3);
                      j_83 = t;
                      if(d_83 != NULL && d_83 != j_83)
                        _fail(j_83);
                      else
                        d_83 = j_83;
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(d_80), not_null(d_83));
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(f_80, sym_Seq_2))
                {
                  g_80 = ATgetArgument(f_80, 0);
                  p_80 = ATgetArgument(f_80, 1);
                  v_79 :
                  if(match_cons(g_80, sym_Matrix_2))
                    {
                      h_80 = ATgetArgument(g_80, 0);
                      i_80 = ATgetArgument(g_80, 1);
                      w_79 :
                      if(match_cons(i_80, sym_Cons_2))
                        {
                          j_80 = ATgetArgument(i_80, 0);
                          o_80 = ATgetArgument(i_80, 1);
                          z_79 :
                          if(match_cons(j_80, sym_Row_2))
                            {
                              k_80 = ATgetArgument(j_80, 0);
                              n_80 = ATgetArgument(j_80, 1);
                              a_80 :
                              if(match_cons(o_80, sym_Nil_0))
                                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(h_80), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(k_80), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_80), not_null(p_80))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm u_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = m_74(t);
      PopChoice();
    }
  else
    {
      t = u_14;
      {
        ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
        o_84 = t;
        n_84 :
        if(match_cons(o_84, sym_Cons_2))
          {
            p_84 = ATgetArgument(o_84, 0);
            q_84 = ATgetArgument(o_84, 1);
            {
              ATerm t_84 = NULL,v_84 = NULL;
              ATerm v_14;
              v_14 = t;
              {
                ATerm u_84 = NULL;
                t = not_null(p_84);
                t = o_74(t);
                u_84 = t;
                if(t_84 != NULL && t_84 != u_84)
                  _fail(u_84);
                else
                  t_84 = u_84;
              }
              t = v_14;
              {
                ATerm w_84 = NULL;
                t = not_null(q_84);
                t = foldr_3(t, m_74, n_74, o_74);
                w_84 = t;
                if(v_84 != NULL && v_84 != w_84)
                  _fail(w_84);
                else
                  v_84 = w_84;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_84), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_84), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = n_74(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm g_85 = NULL;
  ATerm i_85 = NULL;
  g_85 = t;
  {
    ATerm j_85 = NULL;
    ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL;
    t = not_null(g_85);
    j_85 = t;
    t = SSL_explode_term(not_null(j_85));
    l_85 = t;
    d_85 :
    if(match_cons(l_85, sym_TCons_2))
      {
        m_85 = ATgetArgument(l_85, 0);
        n_85 = ATgetArgument(l_85, 1);
        e_85 :
        if(match_cons(n_85, sym_TCons_2))
          {
            o_85 = ATgetArgument(n_85, 0);
            p_85 = ATgetArgument(n_85, 1);
            f_85 :
            if(match_cons(p_85, sym_TNil_0))
              {
                if(i_85 != NULL && i_85 != o_85)
                  _fail(o_85);
                else
                  i_85 = o_85;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_85);
    t = foldr_3(t, c_76, d_76, e_76);
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm w_85 (ATerm t)
  {
    ATerm w_14 = t;
    if(PushChoice()==0)
      {
        ATerm u_85 = NULL;
        ATerm v_85 = NULL;
        t = n_76(t);
        v_85 = t;
        if(u_85 != NULL && u_85 != v_85)
          _fail(v_85);
        else
          u_85 = v_85;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_85), (ATerm) ATmakeAppl(sym_Nil_0));
        PopChoice();
      }
    else
      {
        t = w_14;
        {
          ATerm b_3 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Nil_0);
            return(t);
          }
          t = crush_3(t, b_3, union_0, w_85);
        }
      }
    return(t);
  }
  t = w_85(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm p_76 (ATerm))
{
  t = collect_om_1(t, p_76);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm i_86 = NULL,j_86 = NULL;
    i_86 = t;
    z_85 :
    if(match_cons(i_86, sym_Off_1))
      {
        j_86 = ATgetArgument(i_86, 0);
        t = not_null(j_86);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, c_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL;
  v_86 = t;
  o_86 :
  if(match_cons(v_86, sym_As_2))
    {
      w_86 = ATgetArgument(v_86, 0);
      y_86 = ATgetArgument(v_86, 1);
      p_86 :
      if(match_cons(w_86, sym_Var_1))
        {
          x_86 = ATgetArgument(w_86, 0);
          q_86 :
          if(match_cons(y_86, sym_As_2))
            {
              z_86 = ATgetArgument(y_86, 0);
              u_86 = ATgetArgument(y_86, 1);
              r_86 :
              if(match_cons(z_86, sym_Off_1))
                {
                  t_86 = ATgetArgument(z_86, 0);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_86)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_86))), (ATerm) ATmakeAppl(sym_Nil_0));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(w_86, sym_Off_1))
            {
              x_86 = ATgetArgument(w_86, 0);
              s_86 :
              if(match_cons(y_86, sym_Var_1))
                {
                  z_86 = ATgetArgument(y_86, 0);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_86)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_86))), (ATerm) ATmakeAppl(sym_Nil_0));
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
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_14;
      t = Cons_2(t, _id, _id);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  s_87 = t;
  l_87 :
  if(match_cons(s_87, sym_As_2))
    {
      t_87 = ATgetArgument(s_87, 0);
      v_87 = ATgetArgument(s_87, 1);
      m_87 :
      if(match_cons(t_87, sym_Var_1))
        {
          u_87 = ATgetArgument(t_87, 0);
          n_87 :
          if(match_cons(v_87, sym_As_2))
            {
              w_87 = ATgetArgument(v_87, 0);
              r_87 = ATgetArgument(v_87, 1);
              o_87 :
              if(match_cons(w_87, sym_Off_1))
                {
                  q_87 = ATgetArgument(w_87, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(q_87)), not_null(r_87));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t_87, sym_Off_1))
            {
              u_87 = ATgetArgument(t_87, 0);
              p_87 :
              if(match_cons(v_87, sym_Var_1))
                {
                  w_87 = ATgetArgument(v_87, 0);
                  t = not_null(u_87);
                  t = is_list_0(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(u_87)), (ATerm) ATmakeAppl(sym_Wld_0));
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
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
  h_88 = t;
  g_88 :
  if(match_cons(h_88, sym_Cons_2))
    {
      i_88 = ATgetArgument(h_88, 0);
      j_88 = ATgetArgument(h_88, 1);
      t = r_75(t);
      {
        ATerm d_3 (ATerm t)
        {
          ATerm m_88 = NULL;
          m_88 = t;
          if(i_88 != NULL && i_88 != m_88)
            _fail(m_88);
          else
            i_88 = m_88;
          return(t);
        }
        t = fetch_1(t, d_3);
      }
      t = not_null(j_88);
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  t_88 = t;
  q_88 :
  if(match_cons(t_88, sym_TCons_2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      r_88 :
      if(match_cons(v_88, sym_TCons_2))
        {
          w_88 = ATgetArgument(v_88, 0);
          x_88 = ATgetArgument(v_88, 1);
          s_88 :
          if(match_cons(x_88, sym_TNil_0))
            {
              t = not_null(u_88);
              {
                ATerm b_89 (ATerm t)
                {
                  ATerm y_14 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(w_88);
                      PopChoice();
                    }
                  else
                    {
                      t = y_14;
                      {
                        ATerm z_14 = t;
                        if(PushChoice()==0)
                          {
                            ATerm e_3 (ATerm t)
                            {
                              t = not_null(w_88);
                              return(t);
                            }
                            t = HdMember_1(t, e_3);
                            t = b_89(t);
                            PopChoice();
                          }
                        else
                          {
                            t = z_14;
                            t = Cons_2(t, _id, b_89);
                          }
                      }
                    }
                  return(t);
                }
                t = b_89(t);
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
ATerm foldr_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm d_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = k_74(t);
      PopChoice();
    }
  else
    {
      t = d_15;
      {
        ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
        f_89 = t;
        e_89 :
        if(match_cons(f_89, sym_Cons_2))
          {
            g_89 = ATgetArgument(f_89, 0);
            h_89 = ATgetArgument(f_89, 1);
            {
              ATerm k_89 = NULL;
              ATerm l_89 = NULL;
              t = not_null(h_89);
              t = foldr_2(t, k_74, l_74);
              l_89 = t;
              if(k_89 != NULL && k_89 != l_89)
                _fail(l_89);
              else
                k_89 = l_89;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_89), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_89), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = l_74(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = foldr_2(t, f_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  y_89 = t;
  p_89 :
  if(match_cons(y_89, sym_TCons_2))
    {
      z_89 = ATgetArgument(y_89, 0);
      e_90 = ATgetArgument(y_89, 1);
      q_89 :
      if(match_cons(z_89, sym_TCons_2))
        {
          a_90 = ATgetArgument(z_89, 0);
          b_90 = ATgetArgument(z_89, 1);
          r_89 :
          if(match_cons(b_90, sym_TCons_2))
            {
              c_90 = ATgetArgument(b_90, 0);
              d_90 = ATgetArgument(b_90, 1);
              s_89 :
              if(match_cons(d_90, sym_TNil_0))
                {
                  t_89 :
                  if(match_cons(e_90, sym_TCons_2))
                    {
                      f_90 = ATgetArgument(e_90, 0);
                      k_90 = ATgetArgument(e_90, 1);
                      u_89 :
                      if(match_cons(f_90, sym_TCons_2))
                        {
                          g_90 = ATgetArgument(f_90, 0);
                          h_90 = ATgetArgument(f_90, 1);
                          v_89 :
                          if(match_cons(h_90, sym_TCons_2))
                            {
                              i_90 = ATgetArgument(h_90, 0);
                              j_90 = ATgetArgument(h_90, 1);
                              w_89 :
                              if(match_cons(j_90, sym_TNil_0))
                                {
                                  x_89 :
                                  if(match_cons(k_90, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_90), not_null(g_90)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_90), not_null(i_90)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  r_90 :
  if(match_cons(s_90, sym_Cons_2))
    {
      t_90 = ATgetArgument(s_90, 0);
      u_90 = ATgetArgument(s_90, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_90), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_91 = NULL;
  a_91 = t;
  z_90 :
  if(match_cons(a_91, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm list_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm c_91 (ATerm t)
  {
    ATerm l_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = l_15;
        t = Cons_2(t, l_79, c_91);
      }
    return(t);
  }
  t = c_91(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm u_91 = NULL;
  ATerm w_91 = NULL,x_91 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,v_92 = NULL;
  u_91 = t;
  {
    ATerm m_15;
    m_15 = t;
    {
      ATerm y_91 = NULL;
      ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
      t = not_null(u_91);
      y_91 = t;
      t = SSL_explode_term(not_null(y_91));
      a_92 = t;
      g_91 :
      if(match_cons(a_92, sym_TCons_2))
        {
          b_92 = ATgetArgument(a_92, 0);
          c_92 = ATgetArgument(a_92, 1);
          h_91 :
          if(match_cons(c_92, sym_TCons_2))
            {
              d_92 = ATgetArgument(c_92, 0);
              e_92 = ATgetArgument(c_92, 1);
              i_91 :
              if(match_cons(e_92, sym_TNil_0))
                {
                  if(w_91 != NULL && w_91 != b_92)
                    _fail(b_92);
                  else
                    w_91 = b_92;
                  if(x_91 != NULL && x_91 != d_92)
                    _fail(d_92);
                  else
                    x_91 = d_92;
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
    t = m_15;
    {
      ATerm n_15;
      n_15 = t;
      {
        ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL;
        t = not_null(x_91);
        t = list_1(t, e_77);
        t = unzip_0(t);
        j_92 = t;
        p_91 :
        if(match_cons(j_92, sym_TCons_2))
          {
            k_92 = ATgetArgument(j_92, 0);
            l_92 = ATgetArgument(j_92, 1);
            q_91 :
            if(match_cons(l_92, sym_TCons_2))
              {
                m_92 = ATgetArgument(l_92, 0);
                n_92 = ATgetArgument(l_92, 1);
                r_91 :
                if(match_cons(n_92, sym_TNil_0))
                  {
                    ATerm o_92 = NULL;
                    if(g_92 != NULL && g_92 != k_92)
                      _fail(k_92);
                    else
                      g_92 = k_92;
                    if(f_92 != NULL && f_92 != m_92)
                      _fail(m_92);
                    else
                      f_92 = m_92;
                    {
                      ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL;
                      t = SSL_mkterm(not_null(w_91), not_null(g_92));
                      o_92 = t;
                      t = f_77(t);
                      q_92 = t;
                      m_91 :
                      if(match_cons(q_92, sym_TCons_2))
                        {
                          r_92 = ATgetArgument(q_92, 0);
                          s_92 = ATgetArgument(q_92, 1);
                          n_91 :
                          if(match_cons(s_92, sym_TCons_2))
                            {
                              t_92 = ATgetArgument(s_92, 0);
                              u_92 = ATgetArgument(s_92, 1);
                              o_91 :
                              if(match_cons(u_92, sym_TNil_0))
                                {
                                  if(h_92 != NULL && h_92 != r_92)
                                    _fail(r_92);
                                  else
                                    h_92 = r_92;
                                  if(i_92 != NULL && i_92 != t_92)
                                    _fail(t_92);
                                  else
                                    i_92 = t_92;
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
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
      t = n_15;
      {
        ATerm w_92 = NULL,y_92 = NULL;
        ATerm x_92 = NULL;
        t = not_null(f_92);
        t = unions_0(t);
        x_92 = t;
        if(w_92 != NULL && w_92 != x_92)
          _fail(x_92);
        else
          w_92 = x_92;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_92), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = union_0(t);
        y_92 = t;
        if(v_92 != NULL && v_92 != y_92)
          _fail(y_92);
        else
          v_92 = y_92;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_92), (ATerm) ATmakeAppl(sym_TNil_0)));
      }
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm i_93 = NULL;
  i_93 = t;
  t = SSL_is_int(not_null(i_93));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_93 = NULL;
  m_93 = t;
  t = SSL_is_string(not_null(m_93));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm p_93 (ATerm t)
  {
    ATerm o_15 = t;
    if(PushChoice()==0)
      {
        ATerm p_15 = t;
        if(PushChoice()==0)
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = p_15;
            t = is_int_0(t);
          }
        t = a_77(t);
        PopChoice();
      }
    else
      {
        t = o_15;
        t = CollectSplit_2(t, p_93, a_77);
      }
    return(t);
  }
  t = p_93(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = try_1(t, c_77);
      return(t);
    }
    ATerm i_3 (ATerm t)
    {
      ATerm q_15 = t;
      if(PushChoice()==0)
        {
          t = d_77(t);
          PopChoice();
        }
      else
        {
          t = q_15;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      return(t);
    }
    t = split_2(t, h_3, i_3);
    return(t);
  }
  t = collect_split_1(t, g_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm v_93 = NULL,w_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
  v_93 = t;
  s_93 :
  if(match_cons(v_93, sym_TCons_2))
    {
      w_93 = ATgetArgument(v_93, 0);
      y_93 = ATgetArgument(v_93, 1);
      t_93 :
      if(match_cons(y_93, sym_TCons_2))
        {
          z_93 = ATgetArgument(y_93, 0);
          a_94 = ATgetArgument(y_93, 1);
          u_93 :
          if(match_cons(a_94, sym_TNil_0))
            {
              ATerm d_94 = NULL;
              ATerm e_94 = NULL;
              t = b_87(t);
              e_94 = t;
              if(d_94 != NULL && d_94 != e_94)
                _fail(e_94);
              else
                d_94 = e_94;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_93), not_null(d_94))), not_null(z_93));
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
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  m_94 = t;
  j_94 :
  if(match_cons(m_94, sym_TCons_2))
    {
      n_94 = ATgetArgument(m_94, 0);
      o_94 = ATgetArgument(m_94, 1);
      k_94 :
      if(match_cons(o_94, sym_TCons_2))
        {
          p_94 = ATgetArgument(o_94, 0);
          q_94 = ATgetArgument(o_94, 1);
          l_94 :
          if(match_cons(q_94, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_94), not_null(p_94));
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
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL;
  y_94 = t;
  v_94 :
  if(match_cons(y_94, sym_TCons_2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      w_94 :
      if(match_cons(a_95, sym_TCons_2))
        {
          b_95 = ATgetArgument(a_95, 0);
          c_95 = ATgetArgument(a_95, 1);
          x_94 :
          if(match_cons(c_95, sym_TNil_0))
            {
              ATerm r_15 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(z_94), not_null(b_95));
                  PopChoice();
                }
              else
                {
                  t = r_15;
                  t = SSL_addr(not_null(z_94), not_null(b_95));
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
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
  m_95 = t;
  i_95 :
  if(match_cons(m_95, sym_TCons_2))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      j_95 :
      if(match_cons(o_95, sym_TCons_2))
        {
          p_95 = ATgetArgument(o_95, 0);
          s_95 = ATgetArgument(o_95, 1);
          k_95 :
          if(match_cons(p_95, sym_Cons_2))
            {
              q_95 = ATgetArgument(p_95, 0);
              r_95 = ATgetArgument(p_95, 1);
              l_95 :
              if(match_cons(s_95, sym_TNil_0))
                {
                  ATerm w_95 = NULL;
                  ATerm x_95 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_95), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = add_0(t);
                  x_95 = t;
                  if(w_95 != NULL && w_95 != x_95)
                    _fail(x_95);
                  else
                    w_95 = x_95;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(n_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_95), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_95), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL;
  f_96 = t;
  b_96 :
  if(match_cons(f_96, sym_TCons_2))
    {
      g_96 = ATgetArgument(f_96, 0);
      h_96 = ATgetArgument(f_96, 1);
      c_96 :
      if(match_cons(h_96, sym_TCons_2))
        {
          i_96 = ATgetArgument(h_96, 0);
          j_96 = ATgetArgument(h_96, 1);
          d_96 :
          if(match_cons(i_96, sym_Nil_0))
            {
              e_96 :
              if(match_cons(j_96, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm))
{
  ATerm m_96 (ATerm t)
  {
    ATerm d_16 = t;
    if(PushChoice()==0)
      {
        t = r_77(t);
        PopChoice();
      }
    else
      {
        t = d_16;
        t = s_77(t);
        {
          ATerm j_3 (ATerm t)
          {
            t = TCons_2(t, m_96, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_77, j_3);
          t = t_77(t);
        }
      }
    return(t);
  }
  t = m_96(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm p_96 = NULL;
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_96), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm c_78 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, c_78);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,h_97 = NULL,i_97 = NULL;
  ATerm v_97 (ATerm t)
  {
    ATerm l_97 = NULL;
    ATerm m_97 = NULL;
    t = not_null(f_97);
    {
      ATerm k_3 (ATerm t)
      {
        ATerm l_3 (ATerm t)
        {
          t = not_null(e_97);
          return(t);
        }
        t = Annotate_1(t, l_3);
        return(t);
      }
      t = nzip0_1(t, k_3);
      m_97 = t;
      if(l_97 != NULL && l_97 != m_97)
        _fail(m_97);
      else
        l_97 = m_97;
    }
    t = not_null(l_97);
    return(t);
  }
  ATerm w_97 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_97)), (ATerm) ATmakeAppl(sym_Wld_0));
    return(t);
  }
  ATerm x_97 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_97)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_97)), not_null(i_97)));
    return(t);
  }
  ATerm y_97 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_97)), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_97), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_97)), not_null(i_97))));
    return(t);
  }
  c_97 = t;
  x_96 :
  if(match_cons(c_97, sym_As_2))
    {
      d_97 = ATgetArgument(c_97, 0);
      f_97 = ATgetArgument(c_97, 1);
      y_96 :
      if(match_cons(d_97, sym_Off_1))
        {
          e_97 = ATgetArgument(d_97, 0);
          z_96 :
          if(match_cons(f_97, sym_BuildDefault_1))
            {
              h_97 = ATgetArgument(f_97, 0);
              {
                ATerm f_16 = t;
                if(PushChoice()==0)
                  {
                    t = v_97(t);
                    PopChoice();
                  }
                else
                  {
                    t = f_16;
                    t = w_97(t);
                  }
              }
            }
          else
            {
              if(match_cons(f_97, sym_As_2))
                {
                  h_97 = ATgetArgument(f_97, 0);
                  i_97 = ATgetArgument(f_97, 1);
                  a_97 :
                  if(match_cons(h_97, sym_Var_1))
                    {
                      b_97 = ATgetArgument(h_97, 0);
                      {
                        ATerm h_16 = t;
                        if(PushChoice()==0)
                          {
                            t = v_97(t);
                            PopChoice();
                          }
                        else
                          {
                            t = h_16;
                            t = x_97(t);
                          }
                      }
                    }
                  else
                    t = v_97(t);
                }
              else
                {
                  if(match_cons(f_97, sym_Op_2))
                    {
                      h_97 = ATgetArgument(f_97, 0);
                      i_97 = ATgetArgument(f_97, 1);
                      {
                        ATerm l_16 = t;
                        if(PushChoice()==0)
                          {
                            t = v_97(t);
                            PopChoice();
                          }
                        else
                          {
                            t = l_16;
                            t = y_97(t);
                          }
                      }
                    }
                  else
                    t = v_97(t);
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
ATerm topdown_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm a_98 (ATerm t)
  {
    t = e_82(t);
    t = _all(t, a_98);
    return(t);
  }
  t = a_98(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm h_98 = NULL;
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_98), (ATerm) ATmakeAppl(sym_Nil_0)));
  {
    ATerm m_3 (ATerm t)
    {
      t = try_1(t, Propagate_0);
      return(t);
    }
    t = topdown_1(t, m_3);
    t = collect_substitutions_0(t);
    j_98 = t;
    e_98 :
    if(match_cons(j_98, sym_TCons_2))
      {
        k_98 = ATgetArgument(j_98, 0);
        l_98 = ATgetArgument(j_98, 1);
        f_98 :
        if(match_cons(l_98, sym_TCons_2))
          {
            m_98 = ATgetArgument(l_98, 0);
            n_98 = ATgetArgument(l_98, 1);
            g_98 :
            if(match_cons(n_98, sym_TNil_0))
              {
                ATerm q_98 = NULL;
                ATerm r_98 = NULL;
                t = not_null(k_98);
                t = collect_offsets_0(t);
                r_98 = t;
                if(q_98 != NULL && q_98 != r_98)
                  _fail(r_98);
                else
                  q_98 = r_98;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(q_98), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Row_2, not_null(k_98), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_98))), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  return(t);
}
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  x_98 = t;
  w_98 :
  if(match_cons(x_98, sym_Match_1))
    {
      y_98 = ATgetArgument(x_98, 0);
      t = not_null(y_98);
      t = term_to_matrix_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm b_99 (ATerm t)
  {
    t = i_82(t);
    t = _all(t, b_99);
    t = i_82(t);
    return(t);
  }
  t = b_99(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm r_16 = t;
      if(PushChoice()==0)
        {
          t = MatchToMatrix_0(t);
          PopChoice();
        }
      else
        {
          t = r_16;
          {
            ATerm s_16 = t;
            if(PushChoice()==0)
              {
                t = MatrixMerge_0(t);
                PopChoice();
              }
            else
              {
                t = s_16;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, s_3);
    return(t);
  }
  t = downup_1(t, r_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  t = matrix_to_dfa_0(t);
  t = strename_0(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym_SDef_3))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      k_99 = ATgetArgument(h_99, 2);
      {
        ATerm o_99 = NULL;
        t = not_null(i_99);
        {
          ATerm q_99 = NULL;
          t = i_62(t);
          o_99 = t;
          t = not_null(j_99);
          {
            ATerm s_99 = NULL;
            t = j_62(t);
            q_99 = t;
            t = not_null(k_99);
            t = k_62(t);
            s_99 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_99), not_null(q_99), not_null(s_99));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm b_100 = NULL,c_100 = NULL;
  b_100 = t;
  a_100 :
  if(match_cons(b_100, sym_Strategies_1))
    {
      c_100 = ATgetArgument(b_100, 0);
      {
        ATerm e_100 = NULL;
        t = not_null(c_100);
        t = d_61(t);
        e_100 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_100));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm l_100 = NULL,m_100 = NULL;
  l_100 = t;
  k_100 :
  if(match_cons(l_100, sym_Specification_1))
    {
      m_100 = ATgetArgument(l_100, 0);
      {
        ATerm o_100 = NULL;
        t = not_null(m_100);
        t = f_61(t);
        o_100 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(o_100));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          ATerm n_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, c_87);
            return(t);
          }
          t = map_1(t, n_4);
          return(t);
        }
        t = Strategies_1(t, m_4);
        return(t);
      }
      t = Cons_2(t, z_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, u_3);
    return(t);
  }
  t = Specification_1(t, t_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm t_100 = NULL;
  t_100 = t;
  s_100 :
  if(!(match_cons(t_100, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  y_100 = t;
  x_100 :
  if(match_cons(y_100, sym_TCons_2))
    {
      z_100 = ATgetArgument(y_100, 0);
      a_101 = ATgetArgument(y_100, 1);
      {
        ATerm d_101 = NULL;
        t = not_null(z_100);
        {
          ATerm f_101 = NULL;
          t = n_63(t);
          d_101 = t;
          t = not_null(a_101);
          t = o_63(t);
          f_101 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_101), not_null(f_101));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_101 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm n_101 = NULL,o_101 = NULL;
      n_101 = t;
      l_101 :
      if(match_cons(n_101, sym_Program_1))
        {
          o_101 = ATgetArgument(n_101, 0);
          if(m_101 != NULL && m_101 != o_101)
            _fail(o_101);
          else
            m_101 = o_101;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, o_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_101), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = u_16;
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
  ATerm v_101 = NULL,w_101 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm v_16 = t;
      if(PushChoice()==0)
        {
          ATerm z_4 (ATerm t)
          {
            ATerm x_101 = NULL;
            x_101 = t;
            q_101 :
            if(!(match_cons(x_101, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_4);
          PopChoice();
          _fail(t);
        }
      else
        t = v_16;
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, x_4, y_4);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm c_5 (ATerm t)
        {
          ATerm y_101 = NULL,z_101 = NULL;
          y_101 = t;
          s_101 :
          if(match_cons(y_101, sym_Runtime_1))
            {
              z_101 = ATgetArgument(y_101, 0);
              if(w_101 != NULL && w_101 != z_101)
                _fail(z_101);
              else
                w_101 = z_101;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_5);
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, a_5, b_5);
      {
        ATerm d_5 (ATerm t)
        {
          ATerm j_5 (ATerm t)
          {
            ATerm a_102 = NULL,b_102 = NULL;
            a_102 = t;
            u_101 :
            if(match_cons(a_102, sym_Program_1))
              {
                b_102 = ATgetArgument(a_102, 0);
                if(v_101 != NULL && v_101 != b_102)
                  _fail(b_102);
                else
                  v_101 = b_102;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_5);
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, d_5, i_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_101), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_101), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, w_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL;
  i_102 = t;
  f_102 :
  if(match_cons(i_102, sym_TCons_2))
    {
      j_102 = ATgetArgument(i_102, 0);
      k_102 = ATgetArgument(i_102, 1);
      g_102 :
      if(match_cons(k_102, sym_TCons_2))
        {
          l_102 = ATgetArgument(k_102, 0);
          m_102 = ATgetArgument(k_102, 1);
          h_102 :
          if(match_cons(m_102, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(j_102), not_null(l_102));
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
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL;
  u_102 = t;
  r_102 :
  if(match_cons(u_102, sym_TCons_2))
    {
      v_102 = ATgetArgument(u_102, 0);
      w_102 = ATgetArgument(u_102, 1);
      s_102 :
      if(match_cons(w_102, sym_TCons_2))
        {
          x_102 = ATgetArgument(w_102, 0);
          y_102 = ATgetArgument(w_102, 1);
          t_102 :
          if(match_cons(y_102, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(v_102), not_null(x_102));
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
  ATerm g_103 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm y_16 = t;
      if(PushChoice()==0)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm h_103 = NULL,i_103 = NULL;
            h_103 = t;
            d_103 :
            if(match_cons(h_103, sym_Output_1))
              {
                i_103 = ATgetArgument(h_103, 0);
                if(g_103 != NULL && g_103 != i_103)
                  _fail(i_103);
                else
                  g_103 = i_103;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_5);
          PopChoice();
        }
      else
        {
          t = y_16;
          {
            ATerm j_103 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            j_103 = t;
            if(g_103 != NULL && g_103 != j_103)
              _fail(j_103);
            else
              g_103 = j_103;
          }
        }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, l_5, n_5);
  }
  t = x_16;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm r_5 (ATerm t)
        {
          t = not_null(g_103);
          return(t);
        }
        t = split_2(t, r_5, _id);
        return(t);
      }
      t = TCons_2(t, q_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_5);
    {
      ATerm c_17 = t;
      if(PushChoice()==0)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm y_5 (ATerm t)
            {
              ATerm k_103 = NULL;
              k_103 = t;
              f_103 :
              if(!(match_cons(k_103, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, y_5);
            return(t);
          }
          ATerm t_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, s_5, t_5);
          PopChoice();
        }
      else
        {
          t = c_17;
          {
            ATerm z_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, z_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm s_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL;
  ATerm d_17;
  d_17 = t;
  t = dtime_0(t);
  t = d_17;
  t = a_67(t);
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm t_103 = NULL;
      t = dtime_0(t);
      t_103 = t;
      if(s_103 != NULL && s_103 != t_103)
        _fail(t_103);
      else
        s_103 = t_103;
    }
    t = e_17;
    u_103 = t;
    p_103 :
    if(match_cons(u_103, sym_TCons_2))
      {
        v_103 = ATgetArgument(u_103, 0);
        w_103 = ATgetArgument(u_103, 1);
        q_103 :
        if(match_cons(w_103, sym_TCons_2))
          {
            x_103 = ATgetArgument(w_103, 0);
            y_103 = ATgetArgument(w_103, 1);
            r_103 :
            if(match_cons(y_103, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(s_103)), not_null(v_103)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_103), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_104 = NULL;
  e_104 = t;
  t = SSL_ReadFromFile(not_null(e_104));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm k_104 = NULL;
  ATerm m_104 = NULL,o_104 = NULL;
  k_104 = t;
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm n_104 = NULL;
      t = not_null(k_104);
      t = x_80(t);
      n_104 = t;
      if(m_104 != NULL && m_104 != n_104)
        _fail(n_104);
      else
        m_104 = n_104;
    }
    t = n_17;
    {
      ATerm p_104 = NULL;
      t = not_null(k_104);
      t = y_80(t);
      p_104 = t;
      if(o_104 != NULL && o_104 != p_104)
        _fail(p_104);
      else
        o_104 = p_104;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_104), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_104), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_104 = NULL;
  ATerm o_17;
  o_17 = t;
  {
    ATerm p_17 = t;
    if(PushChoice()==0)
      {
        ATerm b_6 (ATerm t)
        {
          ATerm x_104 = NULL,y_104 = NULL;
          x_104 = t;
          u_104 :
          if(match_cons(x_104, sym_Input_1))
            {
              y_104 = ATgetArgument(x_104, 0);
              if(w_104 != NULL && w_104 != y_104)
                _fail(y_104);
              else
                w_104 = y_104;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_6);
        PopChoice();
      }
    else
      {
        t = p_17;
        {
          ATerm z_104 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          z_104 = t;
          if(w_104 != NULL && w_104 != z_104)
            _fail(z_104);
          else
            w_104 = z_104;
        }
      }
  }
  t = o_17;
  {
    ATerm d_6 (ATerm t)
    {
      t = not_null(w_104);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_105 = NULL;
  d_105 = t;
  c_105 :
  if(!(match_cons(d_105, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm q_17 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = q_17;
        {
          ATerm r_17 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = r_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_6);
  t = z_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_table_create(not_null(f_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_105 = NULL;
  j_105 = t;
  {
    ATerm s_17;
    s_17 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_105), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = s_17;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL,v_105 = NULL;
  r_105 = t;
  p_105 :
  if(match_string(r_105, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(r_105, sym_Cons_2))
        {
          s_105 = ATgetArgument(r_105, 0);
          t_105 = ATgetArgument(r_105, 1);
          q_105 :
          if(match_cons(t_105, sym_Cons_2))
            {
              u_105 = ATgetArgument(t_105, 0);
              v_105 = ATgetArgument(t_105, 1);
              {
                ATerm z_105 = NULL;
                ATerm t_17;
                t_17 = t;
                t = not_null(s_105);
                t = g_0(t);
                t = t_17;
                {
                  ATerm a_106 = NULL;
                  t = not_null(u_105);
                  t = h_0(t);
                  a_106 = t;
                  if(z_105 != NULL && z_105 != a_106)
                    _fail(a_106);
                  else
                    z_105 = a_106;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_105), not_null(v_105));
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
  ATerm u_17 = t;
  if(PushChoice()==0)
    {
      ATerm f_6 (ATerm t)
      {
        ATerm p_106 = NULL;
        p_106 = t;
        e_106 :
        if(!(match_string(p_106, "-S")))
          {
            if(!(match_string(p_106, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, f_6, g_6, h_6);
      PopChoice();
    }
  else
    {
      t = u_17;
      {
        ATerm v_17 = t;
        if(PushChoice()==0)
          {
            ATerm m_6 (ATerm t)
            {
              ATerm q_106 = NULL;
              q_106 = t;
              f_106 :
              if(!(match_string(q_106, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm o_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, m_6, n_6, o_6);
            PopChoice();
          }
        else
          {
            t = v_17;
            {
              ATerm w_17 = t;
              if(PushChoice()==0)
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm r_106 = NULL;
                    r_106 = t;
                    g_106 :
                    if(!(match_string(r_106, "-v")))
                      {
                        if(!(match_string(r_106, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm x_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, p_6, q_6, x_6);
                  PopChoice();
                }
              else
                {
                  t = w_17;
                  {
                    ATerm g_18 = t;
                    if(PushChoice()==0)
                      {
                        ATerm y_6 (ATerm t)
                        {
                          ATerm t_106 = NULL;
                          t_106 = t;
                          h_106 :
                          if(!(match_string(t_106, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_6 (ATerm t)
                        {
                          ATerm u_106 = NULL;
                          ATerm v_106 = NULL;
                          v_106 = t;
                          if(u_106 != NULL && u_106 != v_106)
                            _fail(v_106);
                          else
                            u_106 = v_106;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_106));
                          return(t);
                        }
                        ATerm d_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, y_6, z_6, d_7);
                        PopChoice();
                      }
                    else
                      {
                        t = g_18;
                        {
                          ATerm j_18 = t;
                          if(PushChoice()==0)
                            {
                              ATerm e_7 (ATerm t)
                              {
                                ATerm w_106 = NULL;
                                w_106 = t;
                                j_106 :
                                if(!(match_string(w_106, "-i")))
                                  {
                                    if(!(match_string(w_106, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm f_7 (ATerm t)
                              {
                                ATerm x_106 = NULL;
                                ATerm y_106 = NULL;
                                y_106 = t;
                                if(x_106 != NULL && x_106 != y_106)
                                  _fail(y_106);
                                else
                                  x_106 = y_106;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_106));
                                return(t);
                              }
                              ATerm g_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, e_7, f_7, g_7);
                              PopChoice();
                            }
                          else
                            {
                              t = j_18;
                              {
                                ATerm k_18 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_7 (ATerm t)
                                    {
                                      ATerm z_106 = NULL;
                                      z_106 = t;
                                      l_106 :
                                      if(!(match_string(z_106, "-o")))
                                        {
                                          if(!(match_string(z_106, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_7 (ATerm t)
                                    {
                                      ATerm a_107 = NULL;
                                      ATerm b_107 = NULL;
                                      b_107 = t;
                                      if(a_107 != NULL && a_107 != b_107)
                                        _fail(b_107);
                                      else
                                        a_107 = b_107;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_107));
                                      return(t);
                                    }
                                    ATerm o_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_7, n_7, o_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_18;
                                    {
                                      ATerm l_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm t_7 (ATerm t)
                                          {
                                            ATerm c_107 = NULL;
                                            c_107 = t;
                                            n_106 :
                                            if(!(match_string(c_107, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm u_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm v_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, t_7, u_7, v_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_18;
                                          {
                                            ATerm w_7 (ATerm t)
                                            {
                                              ATerm d_107 = NULL;
                                              d_107 = t;
                                              o_106 :
                                              if(!(match_string(d_107, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm x_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm y_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, w_7, x_7, y_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm i_107 = NULL;
  i_107 = t;
  t = SSL_table_destroy(not_null(i_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_107 = NULL;
  m_107 = t;
  t = SSL_exit(not_null(m_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_107 = NULL;
  r_107 = t;
  t = SSL_implode_string(not_null(r_107));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm u_107 (ATerm t)
  {
    ATerm n_18 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, u_107);
        PopChoice();
      }
    else
      {
        t = n_18;
        t = Nil_0(t);
        t = x_79(t);
      }
    return(t);
  }
  t = u_107(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_18 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = p_18;
      {
        ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL;
        x_107 = t;
        w_107 :
        if(match_cons(x_107, sym_Cons_2))
          {
            y_107 = ATgetArgument(x_107, 0);
            z_107 = ATgetArgument(x_107, 1);
            t = not_null(y_107);
            {
              ATerm z_7 (ATerm t)
              {
                t = not_null(z_107);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, z_7);
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
  ATerm f_108 = NULL;
  f_108 = t;
  t = SSL_explode_string(not_null(f_108));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm i_108 (ATerm t)
  {
    ATerm q_18 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = q_18;
        t = Cons_2(t, j_79, i_108);
      }
    return(t);
  }
  t = i_108(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL;
  o_108 = t;
  k_108 :
  if(match_cons(o_108, sym_TCons_2))
    {
      p_108 = ATgetArgument(o_108, 0);
      q_108 = ATgetArgument(o_108, 1);
      l_108 :
      if(match_cons(p_108, sym_Nil_0))
        {
          m_108 :
          if(match_cons(q_108, sym_TCons_2))
            {
              r_108 = ATgetArgument(q_108, 0);
              s_108 = ATgetArgument(q_108, 1);
              n_108 :
              if(match_cons(s_108, sym_TNil_0))
                t = not_null(r_108);
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
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL;
  a_109 = t;
  w_108 :
  if(match_cons(a_109, sym_TCons_2))
    {
      b_109 = ATgetArgument(a_109, 0);
      e_109 = ATgetArgument(a_109, 1);
      x_108 :
      if(match_cons(b_109, sym_Cons_2))
        {
          c_109 = ATgetArgument(b_109, 0);
          d_109 = ATgetArgument(b_109, 1);
          y_108 :
          if(match_cons(e_109, sym_TCons_2))
            {
              f_109 = ATgetArgument(e_109, 0);
              g_109 = ATgetArgument(e_109, 1);
              z_108 :
              if(match_cons(g_109, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_109), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_109), not_null(f_109)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm l_109 (ATerm t)
  {
    ATerm r_18 = t;
    if(PushChoice()==0)
      {
        t = k_69(t);
        t = l_109(t);
        PopChoice();
      }
    else
      {
        t = r_18;
        t = l_69(t);
      }
    return(t);
  }
  t = l_109(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_69 (ATerm))
{
  t = repeat_2(t, n_69, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm n_109 = NULL;
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_109), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm t_109 = NULL,u_109 = NULL;
  t_109 = t;
  s_109 :
  if(match_cons(t_109, sym_Program_1))
    {
      u_109 = ATgetArgument(t_109, 0);
      {
        ATerm w_109 = NULL;
        t = not_null(u_109);
        t = l_53(t);
        w_109 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_109));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm e_110 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm f_8 (ATerm t)
    {
      ATerm f_110 = NULL;
      f_110 = t;
      if(e_110 != NULL && e_110 != f_110)
        _fail(f_110);
      else
        e_110 = f_110;
      return(t);
    }
    t = Program_1(t, f_8);
    return(t);
  }
  t = option_defined_1(t, d_8);
  {
    ATerm g_8 (ATerm t)
    {
      ATerm g_110 = NULL;
      ATerm h_110 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm h_8 (ATerm t)
        {
          t = not_null(e_110);
          return(t);
        }
        t = short_description_1(t, h_8);
        t = concat_strings_0(t);
        h_110 = t;
        if(g_110 != NULL && g_110 != h_110)
          _fail(h_110);
        else
          g_110 = h_110;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_110), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, g_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm i_8 (ATerm t)
      {
        ATerm i_110 = NULL;
        i_110 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_110), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, i_8);
      {
        ATerm j_8 (ATerm t)
        {
          ATerm k_110 = NULL;
          ATerm l_110 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm n_8 (ATerm t)
            {
              t = not_null(e_110);
              return(t);
            }
            t = long_description_1(t, n_8);
            t = concat_strings_0(t);
            l_110 = t;
            if(k_110 != NULL && k_110 != l_110)
              _fail(l_110);
            else
              k_110 = l_110;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_110), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, j_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL;
  u_110 = t;
  r_110 :
  if(match_cons(u_110, sym_TCons_2))
    {
      v_110 = ATgetArgument(u_110, 0);
      w_110 = ATgetArgument(u_110, 1);
      s_110 :
      if(match_cons(w_110, sym_TCons_2))
        {
          x_110 = ATgetArgument(w_110, 0);
          y_110 = ATgetArgument(w_110, 1);
          t_110 :
          if(match_cons(y_110, sym_TNil_0))
            {
              ATerm s_18;
              s_18 = t;
              t = SSL_printnl(not_null(v_110), not_null(x_110));
              t = s_18;
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
ATerm Undefined_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm f_111 = NULL,g_111 = NULL;
  f_111 = t;
  e_111 :
  if(match_cons(f_111, sym_Undefined_1))
    {
      g_111 = ATgetArgument(f_111, 0);
      {
        ATerm i_111 = NULL;
        t = not_null(g_111);
        t = m_53(t);
        i_111 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_111));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm m_111 (ATerm t)
  {
    ATerm t_18 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_79, _id);
        PopChoice();
      }
    else
      {
        t = t_18;
        t = Cons_2(t, _id, m_111);
      }
    return(t);
  }
  t = m_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_66 (ATerm))
{
  t = fetch_1(t, e_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_111 = NULL;
  o_111 = t;
  n_111 :
  if(!(match_cons(o_111, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm u_18 = t;
  if(PushChoice()==0)
    {
      t = p_81(t);
      PopChoice();
    }
  else
    t = u_18;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
  t_111 = t;
  q_111 :
  if(match_cons(t_111, sym_TCons_2))
    {
      u_111 = ATgetArgument(t_111, 0);
      v_111 = ATgetArgument(t_111, 1);
      r_111 :
      if(match_cons(v_111, sym_TCons_2))
        {
          w_111 = ATgetArgument(v_111, 0);
          x_111 = ATgetArgument(v_111, 1);
          s_111 :
          if(match_cons(x_111, sym_TNil_0))
            t = SSL_table_get(not_null(u_111), not_null(w_111));
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
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
  h_112 = t;
  d_112 :
  if(match_cons(h_112, sym_TCons_2))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      e_112 :
      if(match_cons(j_112, sym_TCons_2))
        {
          k_112 = ATgetArgument(j_112, 0);
          l_112 = ATgetArgument(j_112, 1);
          f_112 :
          if(match_cons(l_112, sym_TCons_2))
            {
              m_112 = ATgetArgument(l_112, 0);
              n_112 = ATgetArgument(l_112, 1);
              g_112 :
              if(match_cons(n_112, sym_TNil_0))
                {
                  ATerm v_18;
                  v_18 = t;
                  {
                    ATerm r_112 = NULL;
                    ATerm s_112 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_112), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm w_18 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = w_18;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      s_112 = t;
                      if(r_112 != NULL && r_112 != s_112)
                        _fail(s_112);
                      else
                        r_112 = s_112;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_112), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_112), not_null(r_112)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = v_18;
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
ATerm register_usage_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm w_112 = NULL;
  ATerm x_112 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = k_65(t);
  x_112 = t;
  if(w_112 != NULL && w_112 != x_112)
    _fail(x_112);
  else
    w_112 = x_112;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_112), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
  d_113 = t;
  c_113 :
  if(match_string(d_113, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(d_113, sym_Cons_2))
        {
          e_113 = ATgetArgument(d_113, 0);
          f_113 = ATgetArgument(d_113, 1);
          {
            ATerm i_113 = NULL;
            ATerm x_18;
            x_18 = t;
            t = not_null(e_113);
            t = d_0(t);
            t = x_18;
            {
              ATerm j_113 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              j_113 = t;
              if(i_113 != NULL && i_113 != j_113)
                _fail(j_113);
              else
                i_113 = j_113;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_113), not_null(f_113));
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
    ATerm o_113 = NULL;
    o_113 = t;
    n_113 :
    if(!(match_string(o_113, "--help")))
      {
        if(!(match_string(o_113, "-h")))
          {
            if(!(match_string(o_113, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_8, q_8, r_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
  r_113 = t;
  q_113 :
  if(match_cons(r_113, sym_Cons_2))
    {
      s_113 = ATgetArgument(r_113, 0);
      t_113 = ATgetArgument(r_113, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_113)), not_null(t_113));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
  b_114 = t;
  a_114 :
  if(match_cons(b_114, sym_Cons_2))
    {
      c_114 = ATgetArgument(b_114, 0);
      d_114 = ATgetArgument(b_114, 1);
      {
        ATerm g_114 = NULL;
        t = not_null(c_114);
        {
          ATerm i_114 = NULL;
          t = r_63(t);
          g_114 = t;
          t = not_null(d_114);
          t = s_63(t);
          i_114 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_114), not_null(i_114));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_114 = NULL;
  o_114 = t;
  n_114 :
  if(!(match_cons(o_114, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm y_18;
  y_18 = t;
  {
    ATerm s_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_65(t);
      return(t);
    }
    t = try_1(t, s_8);
  }
  t = y_18;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm q_114 = NULL;
      q_114 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_114));
      return(t);
    }
    ATerm u_8 (ATerm t)
    {
      ATerm a_19 = t;
      if(PushChoice()==0)
        {
          ATerm b_19 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = b_19;
              t = i_65(t);
              t = Cons_2(t, _id, u_8);
            }
          PopChoice();
        }
      else
        {
          t = a_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_8, u_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL;
  ATerm c_19;
  c_19 = t;
  {
    ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL;
    c_115 = t;
    v_114 :
    if(match_cons(c_115, sym_TCons_2))
      {
        d_115 = ATgetArgument(c_115, 0);
        e_115 = ATgetArgument(c_115, 1);
        w_114 :
        if(match_cons(e_115, sym_TCons_2))
          {
            f_115 = ATgetArgument(e_115, 0);
            g_115 = ATgetArgument(e_115, 1);
            x_114 :
            if(match_cons(g_115, sym_TCons_2))
              {
                h_115 = ATgetArgument(g_115, 0);
                i_115 = ATgetArgument(g_115, 1);
                y_114 :
                if(match_cons(i_115, sym_TNil_0))
                  {
                    if(z_114 != NULL && z_114 != d_115)
                      _fail(d_115);
                    else
                      z_114 = d_115;
                    if(a_115 != NULL && a_115 != f_115)
                      _fail(f_115);
                    else
                      a_115 = f_115;
                    if(b_115 != NULL && b_115 != h_115)
                      _fail(h_115);
                    else
                      b_115 = h_115;
                    t = SSL_table_put(not_null(z_114), not_null(a_115), not_null(b_115));
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
  t = c_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm l_115 = NULL;
  ATerm d_19;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = d_19;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm e_19 = t;
      if(PushChoice()==0)
        {
          t = h_65(t);
          PopChoice();
        }
      else
        {
          t = e_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_8);
    {
      ATerm a_9 (ATerm t)
      {
        ATerm f_19 = t;
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
            t = f_19;
            {
              ATerm c_9 (ATerm t)
              {
                ATerm e_9 (ATerm t)
                {
                  ATerm m_115 = NULL;
                  m_115 = t;
                  if(l_115 != NULL && l_115 != m_115)
                    _fail(m_115);
                  else
                    l_115 = m_115;
                  return(t);
                }
                t = Undefined_1(t, e_9);
                return(t);
              }
              t = option_defined_1(t, c_9);
              {
                ATerm g_19;
                g_19 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_115), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = g_19;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, a_9);
      {
        ATerm h_19;
        h_19 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = h_19;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm f_9 (ATerm t)
  {
    ATerm i_19 = t;
    if(PushChoice()==0)
      {
        t = p_66(t);
        PopChoice();
      }
    else
      {
        t = i_19;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_9);
  t = store_options_0(t);
  {
    ATerm m_19 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, q_66);
        PopChoice();
      }
    else
      {
        t = m_19;
        {
          ATerm n_19 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, o_66);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_19;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  t = iowrap_3(t, j_66, k_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm g_9 (ATerm t)
  {
    ATerm h_9 (ATerm t)
    {
      t = TCons_2(t, g_66, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, h_9);
    return(t);
  }
  t = iowrap_2(t, g_9, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm i_9 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, i_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}

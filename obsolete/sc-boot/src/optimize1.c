#include <stratego.h>
#include <stratego-lib.h>
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
    sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
    ATprotectSymbol(sym_Final_1);
  }
  {
    sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
    ATprotectSymbol(sym_Case_4);
  }
  {
    sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
    ATprotectSymbol(sym_Case_3);
  }
  {
    sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
    ATprotectSymbol(sym_Alt_3);
  }
  {
    sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
    ATprotectSymbol(sym_Continue_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
    ATprotectSymbol(sym_Assign_1);
  }
  {
    sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
    ATprotectSymbol(sym_Fun_2);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
    ATprotectSymbol(sym_Row_2);
  }
  {
    sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
    ATprotectSymbol(sym_Row_3);
  }
  {
    sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
    ATprotectSymbol(sym_Matrix_2);
  }
  {
    sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
    ATprotectSymbol(sym_Matrix_1);
  }
  {
    sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
    ATprotectSymbol(sym_Off_1);
  }
  {
    sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
    ATprotectSymbol(sym_Seqs_1);
  }
  {
    sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
    ATprotectSymbol(sym_Choices_1);
  }
  {
    sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
    ATprotectSymbol(sym_LChoices_1);
  }
  {
    sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
    ATprotectSymbol(sym_Lets_2);
  }
  {
    sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
    ATprotectSymbol(sym_ScopeDefault_1);
  }
  {
    sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
    ATprotectSymbol(sym_DynRuleScope_2);
  }
  {
    sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
    ATprotectSymbol(sym_MA_2);
  }
  {
    sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
    ATprotectSymbol(sym_AM_2);
  }
  {
    sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
    ATprotectSymbol(sym_BA_2);
  }
  {
    sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
    ATprotectSymbol(sym_BAM_3);
  }
  {
    sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
    ATprotectSymbol(sym_Con_3);
  }
  {
    sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
    ATprotectSymbol(sym_App_2);
  }
  {
    sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
    ATprotectSymbol(sym_RootApp_1);
  }
  {
    sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
    ATprotectSymbol(sym_InfixApp_3);
  }
  {
    sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
    ATprotectSymbol(sym_Explode_2);
  }
  {
    sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
    ATprotectSymbol(sym_ExplodeCong_2);
  }
  {
    sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
    ATprotectSymbol(sym_As_2);
  }
  {
    sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
    ATprotectSymbol(sym_BuildDefault_1);
  }
  {
    sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
    ATprotectSymbol(sym_Rule_3);
  }
  {
    sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
    ATprotectSymbol(sym_StratRule_3);
  }
  {
    sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
    ATprotectSymbol(sym_LRule_1);
  }
  {
    sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
    ATprotectSymbol(sym_SRule_1);
  }
  {
    sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
    ATprotectSymbol(sym_RDef_3);
  }
  {
    sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_DynamicRules_1);
  }
  {
    sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_OverrideDynamicRules_1);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
    ATprotectSymbol(sym_Overlay_3);
  }
  {
    sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
    ATprotectSymbol(sym_Signature_1);
  }
  {
    sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
    ATprotectSymbol(sym_Overlays_1);
  }
  {
    sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
    ATprotectSymbol(sym_Rules_1);
  }
  {
    sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
    ATprotectSymbol(sym_Strategies_1);
  }
  {
    sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
    ATprotectSymbol(sym_Imports_1);
  }
  {
    sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
    ATprotectSymbol(sym_Specification_1);
  }
  {
    sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
    ATprotectSymbol(sym_ConstType_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
    ATprotectSymbol(sym_Sort_2);
  }
  {
    sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
    ATprotectSymbol(sym_OpDecl_2);
  }
  {
    sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
    ATprotectSymbol(sym_Sorts_1);
  }
  {
    sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
    ATprotectSymbol(sym_Constructors_1);
  }
  {
    sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
    ATprotectSymbol(sym_NoKind_0);
  }
  {
    sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
    ATprotectSymbol(sym_Wld_0);
  }
  {
    sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
    ATprotectSymbol(sym_Var_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
    ATprotectSymbol(sym_Op_2);
  }
  {
    sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
    ATprotectSymbol(sym_Id_0);
  }
  {
    sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
    ATprotectSymbol(sym_Fail_0);
  }
  {
    sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
    ATprotectSymbol(sym_Test_1);
  }
  {
    sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
    ATprotectSymbol(sym_Not_1);
  }
  {
    sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
    ATprotectSymbol(sym_Seq_2);
  }
  {
    sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
    ATprotectSymbol(sym_Choice_2);
  }
  {
    sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
    ATprotectSymbol(sym_LChoice_2);
  }
  {
    sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
    ATprotectSymbol(sym_SVar_1);
  }
  {
    sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
    ATprotectSymbol(sym_Rec_2);
  }
  {
    sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
    ATprotectSymbol(sym_Let_2);
  }
  {
    sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
    ATprotectSymbol(sym_SDef_3);
  }
  {
    sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
    ATprotectSymbol(sym_VarDec_2);
  }
  {
    sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
    ATprotectSymbol(sym_DefaultVarDec_1);
  }
  {
    sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
    ATprotectSymbol(sym_SDef_4);
  }
  {
    sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
    ATprotectSymbol(sym_DontInline_0);
  }
  {
    sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
    ATprotectSymbol(sym_Call_2);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
    ATprotectSymbol(sym_Cong_2);
  }
  {
    sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
    ATprotectSymbol(sym_One_1);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
    ATprotectSymbol(sym_All_1);
  }
  {
    sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
    ATprotectSymbol(sym_Thread_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
    ATprotectSymbol(sym_Match_1);
  }
  {
    sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
    ATprotectSymbol(sym_Build_1);
  }
  {
    sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
    ATprotectSymbol(sym_MatchVar_1);
  }
  {
    sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
    ATprotectSymbol(sym_MatchFun_1);
  }
  {
    sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
    ATprotectSymbol(sym_Scope_2);
  }
  {
    sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
    ATprotectSymbol(sym_Where_1);
  }
  {
    sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
    ATprotectSymbol(sym_Prim_2);
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
ATerm simplify_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm h_62 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm crush_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm free_vars_3 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_83 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm u_79 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_86 (ATerm), ATerm t_86 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_85 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_86 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm for_3 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm HdMember_1 (ATerm, ATerm e_77 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_85 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm d_63 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm));
ATerm zip_1 (ATerm, ATerm z_80 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_71 (ATerm));
ATerm downup_1 (ATerm, ATerm s_83 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm));
ATerm Strategies_1 (ATerm, ATerm r_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_62 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm n_88 (ATerm));
ATerm _2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_68 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_68 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_66 (ATerm));
ATerm map_1 (ATerm, ATerm c_79 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_66 (ATerm));
ATerm Program_1 (ATerm, ATerm z_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_67 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_66 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_67 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, a_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
  n_1 = t;
  m_1 :
  if(((ATgetType(n_1) == AT_LIST) && ((ATermList) n_1 != ATempty)))
    {
      o_1 = ATgetFirst((ATermList) n_1);
      p_1 = (ATerm) ATgetNext((ATermList) n_1);
      t = not_null(p_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  u_1 :
  if(match_cons(v_1, sym__2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        t = not_null(w_1);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm u_6 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
              }
            else
              {
                t = u_6;
                {
                  ATerm v_6 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm x_6;
                      x_6 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(x_1);
                          return(t);
                        }
                        t = HdMember_1(t, b_0);
                      }
                      t = x_6;
                      t = Cons_2(t, _id, b_2);
                      PopChoice();
                    }
                  else
                    {
                      t = v_6;
                      {
                        t = Tl_0(t);
                        t = b_2(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = b_2(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm f_2 = NULL,g_2 = NULL;
  f_2 = t;
  e_2 :
  if(match_cons(f_2, sym_DynamicRules_1))
    {
      g_2 = ATgetArgument(f_2, 0);
      {
        ATerm i_2 = NULL;
        t = not_null(g_2);
        {
          t = h_62(t);
          {
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_2));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  q_2 = t;
  p_2 :
  if(match_cons(q_2, sym_Scope_2))
    {
      r_2 = ATgetArgument(q_2, 0);
      s_2 = ATgetArgument(q_2, 1);
      {
        ATerm v_2 = NULL;
        t = not_null(r_2);
        {
          ATerm x_2 = NULL;
          t = w_64(t);
          {
            v_2 = t;
            {
              t = not_null(s_2);
              {
                t = x_64(t);
                {
                  x_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_2), not_null(x_2));
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
ATerm tboundin_3 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm y_6 = t;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_87, l_87);
      PopChoice();
    }
  else
    {
      t = y_6;
      t = DynamicRules_1(t, l_87);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL;
  e_3 = t;
  d_3 :
  if(match_cons(e_3, sym_DynamicRules_1))
    {
      f_3 = ATgetArgument(e_3, 0);
      {
        t = not_null(f_3);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  k_3 :
  if(match_cons(p_3, sym_LRule_1))
    {
      q_3 = ATgetArgument(p_3, 0);
      l_3 :
      if(match_cons(q_3, sym_Rule_3))
        {
          m_3 = ATgetArgument(q_3, 0);
          n_3 = ATgetArgument(q_3, 1);
          o_3 = ATgetArgument(q_3, 2);
          {
            t = not_null(m_3);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(p_3, sym_Scope_2))
        {
          q_3 = ATgetArgument(p_3, 0);
          r_3 = ATgetArgument(p_3, 1);
          t = not_null(q_3);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_Var_1))
    {
      c_4 = ATgetArgument(b_4, 0);
      t = (ATerm) ATinsert(ATempty, not_null(c_4));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  g_4 :
  if(match_cons(h_4, sym__2))
    {
      i_4 = ATgetArgument(h_4, 0);
      j_4 = ATgetArgument(h_4, 1);
      {
        t = not_null(i_4);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm k_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_4);
                PopChoice();
              }
            else
              {
                t = k_7;
                {
                  ATerm l_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm c_0 (ATerm t)
                      {
                        t = not_null(j_4);
                        return(t);
                      }
                      t = HdMember_1(t, c_0);
                      t = n_4(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_7;
                      t = Cons_2(t, _id, n_4);
                    }
                }
              }
            return(t);
          }
          t = n_4(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm m_7 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_76(t);
      PopChoice();
    }
  else
    {
      t = m_7;
      {
        ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
        s_4 = t;
        r_4 :
        if(((ATgetType(s_4) == AT_LIST) && ((ATermList) s_4 != ATempty)))
          {
            t_4 = ATgetFirst((ATermList) s_4);
            u_4 = (ATerm) ATgetNext((ATermList) s_4);
            {
              ATerm x_4 = NULL,z_4 = NULL;
              ATerm n_7;
              n_7 = t;
              {
                ATerm y_4 = NULL;
                t = not_null(t_4);
                {
                  t = e_76(t);
                  {
                    y_4 = t;
                    if(((x_4 != NULL) && (x_4 != y_4)))
                      _fail(y_4);
                    else
                      x_4 = y_4;
                  }
                }
              }
              t = n_7;
              {
                ATerm a_5 = NULL;
                t = not_null(u_4);
                {
                  t = foldr_3(t, c_76, d_76, e_76);
                  {
                    a_5 = t;
                    if(((z_4 != NULL) && (z_4 != a_5)))
                      _fail(a_5);
                    else
                      z_4 = a_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), not_null(z_4));
                  t = d_76(t);
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
ATerm crush_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm i_5 = NULL;
  ATerm k_5 = NULL;
  i_5 = t;
  {
    ATerm l_5 = NULL;
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
    t = not_null(i_5);
    {
      l_5 = t;
      {
        t = SSL_explode_term(not_null(l_5));
        {
          n_5 = t;
          h_5 :
          if(match_cons(n_5, sym__2))
            {
              o_5 = ATgetArgument(n_5, 0);
              p_5 = ATgetArgument(n_5, 1);
              if(((k_5 != NULL) && (k_5 != p_5)))
                _fail(p_5);
              else
                k_5 = p_5;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(k_5);
      t = foldr_3(t, p_77, q_77, r_77);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm w_5 (ATerm t)
  {
    ATerm o_7 = t;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        PopChoice();
      }
    else
      {
        t = o_7;
        {
          ATerm p_7 = t;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL;
              ATerm s_7;
              s_7 = t;
              {
                ATerm v_5 = NULL;
                t = b_73(t);
                {
                  v_5 = t;
                  if(((u_5 != NULL) && (u_5 != v_5)))
                    _fail(v_5);
                  else
                    u_5 = v_5;
                }
              }
              t = s_7;
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(u_5);
                    return(t);
                  }
                  t = split_2(t, w_5, m_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm l_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_73(t, k_0, w_5, l_0);
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = p_7;
              {
                ATerm o_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_0, union_0, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = w_5(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm g_8 = t;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = g_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  e_6 = t;
  c_6 :
  if(match_cons(e_6, sym_Scope_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      d_6 :
      if(match_cons(g_6, sym_Seq_2))
        {
          h_6 = ATgetArgument(g_6, 0);
          i_6 = ATgetArgument(g_6, 1);
          {
            ATerm m_6 = NULL,n_6 = NULL;
            ATerm o_6 = NULL,q_6 = NULL;
            ATerm p_6 = NULL;
            t = not_null(h_6);
            {
              t = tvars_0(t);
              {
                p_6 = t;
                if(((o_6 != NULL) && (o_6 != p_6)))
                  _fail(p_6);
                else
                  o_6 = p_6;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(f_6));
              {
                ATerm r_6 = NULL;
                t = isect_0(t);
                {
                  q_6 = t;
                  {
                    if(((m_6 != NULL) && (m_6 != q_6)))
                      _fail(q_6);
                    else
                      m_6 = q_6;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(m_6));
                      {
                        t = diff_0(t);
                        {
                          r_6 = t;
                          {
                            if(((n_6 != NULL) && (n_6 != r_6)))
                              _fail(r_6);
                            else
                              n_6 = r_6;
                            {
                              ATerm h_8 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = h_8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_6), not_null(i_6))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = o_83(t);
    t = _all(t, w_6);
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, q_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  ATerm q_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_7), not_null(e_7)));
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_7), not_null(j_7)));
    return(t);
  }
  f_7 = t;
  z_6 :
  if(match_cons(f_7, sym_Seq_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      j_7 = ATgetArgument(f_7, 1);
      a_7 :
      if(match_cons(j_7, sym_Scope_2))
        {
          d_7 = ATgetArgument(j_7, 0);
          e_7 = ATgetArgument(j_7, 1);
          b_7 :
          if(match_cons(g_7, sym_Scope_2))
            {
              h_7 = ATgetArgument(g_7, 0);
              i_7 = ATgetArgument(g_7, 1);
              {
                ATerm i_8 = t;
                if((PushChoice() == 0))
                  {
                    t = q_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_8;
                    t = r_7(t);
                  }
              }
            }
          else
            t = q_7(t);
        }
      else
        {
          c_7 :
          if(match_cons(g_7, sym_Scope_2))
            {
              h_7 = ATgetArgument(g_7, 0);
              i_7 = ATgetArgument(g_7, 1);
              t = r_7(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm InlineDont_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  y_7 = t;
  t_7 :
  if(match_cons(y_7, sym_Let_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      f_8 = ATgetArgument(y_7, 1);
      u_7 :
      if(((ATgetType(z_7) == AT_LIST) && ((ATermList) z_7 != ATempty)))
        {
          a_8 = ATgetFirst((ATermList) z_7);
          e_8 = (ATerm) ATgetNext((ATermList) z_7);
          v_7 :
          if(match_cons(a_8, sym_SDef_3))
            {
              b_8 = ATgetArgument(a_8, 0);
              c_8 = ATgetArgument(a_8, 1);
              d_8 = ATgetArgument(a_8, 2);
              w_7 :
              if(((ATermList) c_8 == ATempty))
                {
                  x_7 :
                  if(((ATermList) e_8 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DontInline_0)), not_null(b_8), (ATerm)ATempty, not_null(d_8))), not_null(f_8));
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
ATerm at_suffix_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm j_8 = t;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        PopChoice();
      }
    else
      {
        t = j_8;
        t = Cons_2(t, _id, k_8);
      }
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_Let_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        ATerm c_9 = NULL,d_9 = NULL;
        ATerm s_9 = NULL;
        t = not_null(y_8);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
            e_9 = t;
            s_8 :
            if(((ATgetType(e_9) == AT_LIST) && ((ATermList) e_9 != ATempty)))
              {
                f_9 = ATgetFirst((ATermList) e_9);
                j_9 = (ATerm) ATgetNext((ATermList) e_9);
                t_8 :
                if(match_cons(f_9, sym_SDef_3))
                  {
                    g_9 = ATgetArgument(f_9, 0);
                    h_9 = ATgetArgument(f_9, 1);
                    i_9 = ATgetArgument(f_9, 2);
                    u_8 :
                    if(((ATermList) h_9 == ATempty))
                      {
                        {
                          ATerm r_9 = NULL;
                          t = not_null(z_8);
                          {
                            ATerm s_0 (ATerm t)
                            {
                              ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
                              n_9 = t;
                              o_8 :
                              if(match_cons(n_9, sym_Call_2))
                                {
                                  o_9 = ATgetArgument(n_9, 0);
                                  q_9 = ATgetArgument(n_9, 1);
                                  p_8 :
                                  if(match_cons(o_9, sym_SVar_1))
                                    {
                                      p_9 = ATgetArgument(o_9, 0);
                                      q_8 :
                                      if(((ATermList) q_9 == ATempty))
                                        {
                                          {
                                            if(((g_9 != NULL) && (g_9 != p_9)))
                                              _fail(p_9);
                                            else
                                              g_9 = p_9;
                                            t = not_null(i_9);
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
                            t = oncetd_1(t, s_0);
                            {
                              r_9 = t;
                              {
                                if(((c_9 != NULL) && (c_9 != r_9)))
                                  _fail(r_9);
                                else
                                  c_9 = r_9;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_9)), (ATerm) ATempty), not_null(c_9));
                                  {
                                    ATerm l_8 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = l_8;
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(j_9);
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
          t = at_suffix_1(t, r_0);
          {
            s_9 = t;
            if(((d_9 != NULL) && (d_9 != s_9)))
              _fail(s_9);
            else
              d_9 = s_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_9), not_null(c_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  g_10 = t;
  a_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      j_10 = ATgetArgument(g_10, 1);
      b_10 :
      if(match_cons(h_10, sym_Build_1))
        {
          i_10 = ATgetArgument(h_10, 0);
          c_10 :
          if(match_cons(j_10, sym_Where_1))
            {
              k_10 = ATgetArgument(j_10, 0);
              d_10 :
              if(match_cons(k_10, sym_Prim_2))
                {
                  e_10 = ATgetArgument(k_10, 0);
                  f_10 = ATgetArgument(k_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_10), not_null(f_10));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(j_10, sym_Prim_2))
                {
                  k_10 = ATgetArgument(j_10, 0);
                  l_10 = ATgetArgument(j_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_10), not_null(l_10));
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
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  b_11 = t;
  w_10 :
  if(match_cons(b_11, sym__2))
    {
      c_11 = ATgetArgument(b_11, 0);
      e_11 = ATgetArgument(b_11, 1);
      x_10 :
      if(match_cons(c_11, sym_Build_1))
        {
          d_11 = ATgetArgument(c_11, 0);
          y_10 :
          if(match_cons(e_11, sym_Where_1))
            {
              f_11 = ATgetArgument(e_11, 0);
              z_10 :
              if(match_cons(f_11, sym_Build_1))
                {
                  a_11 = ATgetArgument(f_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_11));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(e_11, sym_Build_1))
                {
                  f_11 = ATgetArgument(e_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_11));
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
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  v_11 = t;
  q_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      a_12 = ATgetArgument(v_11, 1);
      r_11 :
      if(match_cons(w_11, sym_Build_1))
        {
          x_11 = ATgetArgument(w_11, 0);
          s_11 :
          if(match_cons(x_11, sym_Op_2))
            {
              y_11 = ATgetArgument(x_11, 0);
              z_11 = ATgetArgument(x_11, 1);
              t_11 :
              if(match_cons(a_12, sym_Match_1))
                {
                  b_12 = ATgetArgument(a_12, 0);
                  u_11 :
                  if(match_cons(b_12, sym_Op_2))
                    {
                      c_12 = ATgetArgument(b_12, 0);
                      d_12 = ATgetArgument(b_12, 1);
                      {
                        ATerm g_12 = NULL,h_12 = NULL;
                        if(((y_11 != NULL) && (y_11 != c_12)))
                          _fail(c_12);
                        else
                          y_11 = c_12;
                        {
                          if(((g_12 != NULL) && (g_12 != d_12)))
                            _fail(d_12);
                          else
                            g_12 = d_12;
                          {
                            ATerm n_12 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(g_12));
                            {
                              ATerm t_0 (ATerm t)
                              {
                                ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
                                i_12 = t;
                                o_11 :
                                if(match_cons(i_12, sym__2))
                                  {
                                    j_12 = ATgetArgument(i_12, 0);
                                    k_12 = ATgetArgument(i_12, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_12)));
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = zip_1(t, t_0);
                              {
                                n_12 = t;
                                if(((h_12 != NULL) && (h_12 != n_12)))
                                  _fail(n_12);
                                else
                                  h_12 = n_12;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_11), not_null(z_11))));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      if(((u_12 != NULL) && (u_12 != v_12)))
        _fail(v_12);
      else
        u_12 = v_12;
    }
  else
    _fail(t);
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  e_13 = t;
  z_12 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      j_13 = ATgetArgument(e_13, 1);
      a_13 :
      if(match_cons(f_13, sym_Build_1))
        {
          g_13 = ATgetArgument(f_13, 0);
          b_13 :
          if(match_cons(g_13, sym_Op_2))
            {
              h_13 = ATgetArgument(g_13, 0);
              i_13 = ATgetArgument(g_13, 1);
              c_13 :
              if(match_cons(j_13, sym_Match_1))
                {
                  k_13 = ATgetArgument(j_13, 0);
                  d_13 :
                  if(match_cons(k_13, sym_Op_2))
                    {
                      l_13 = ATgetArgument(k_13, 0);
                      m_13 = ATgetArgument(k_13, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(l_13));
                        {
                          ATerm m_8 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = m_8;
                        }
                        t = (ATerm) ATmakeAppl(sym_Fail_0);
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
  return(t);
}
ATerm BMF_0 (ATerm t)
{
  ATerm n_8 = t;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = n_8;
      {
        ATerm r_8 = t;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = r_8;
            {
              ATerm v_8 = t;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = v_8;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm v_15 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  ATerm t_16 (ATerm t)
  {
    ATerm q_16 = NULL;
    ATerm r_16 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(i_16));
    {
      t = BMF_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = not_null(q_16);
    return(t);
  }
  g_16 = t;
  p_15 :
  if(match_cons(g_16, sym_Seq_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      q_15 :
      if(match_cons(i_16, sym_Seq_2))
        {
          v_15 = ATgetArgument(i_16, 0);
          f_16 = ATgetArgument(i_16, 1);
          {
            ATerm a_9 = t;
            if((PushChoice() == 0))
              {
                ATerm m_16 = NULL;
                ATerm n_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(v_15));
                {
                  t = BMF_0(t);
                  {
                    n_16 = t;
                    if(((m_16 != NULL) && (m_16 != n_16)))
                      _fail(n_16);
                    else
                      m_16 = n_16;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_16), not_null(f_16));
                PopChoice();
              }
            else
              {
                t = a_9;
                t = t_16(t);
              }
          }
        }
      else
        t = t_16(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm b_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,t_17 = NULL,u_17 = NULL;
  b_17 = t;
  x_16 :
  if(match_cons(b_17, sym_Seq_2))
    {
      m_17 = ATgetArgument(b_17, 0);
      o_17 = ATgetArgument(b_17, 1);
      y_16 :
      if(match_cons(m_17, sym_Build_1))
        {
          n_17 = ATgetArgument(m_17, 0);
          z_16 :
          if(match_cons(o_17, sym_Seq_2))
            {
              p_17 = ATgetArgument(o_17, 0);
              u_17 = ATgetArgument(o_17, 1);
              a_17 :
              if(match_cons(p_17, sym_Build_1))
                {
                  t_17 = ATgetArgument(p_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_17)), not_null(u_17));
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
ATerm FuseScope_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,i_19 = NULL;
  d_18 = t;
  b_18 :
  if(match_cons(d_18, sym_Scope_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      c_18 :
      if(match_cons(f_18, sym_Scope_2))
        {
          g_18 = ATgetArgument(f_18, 0);
          i_19 = ATgetArgument(f_18, 1);
          {
            ATerm w_19 = NULL;
            ATerm x_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(g_18));
            {
              t = conc_0(t);
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_19), not_null(i_19));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm q_20 = NULL,j_21 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_Var_1))
    {
      j_21 = ATgetArgument(q_20, 0);
      t = not_null(j_21);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  p_21 = t;
  n_21 :
  if(match_cons(p_21, sym__2))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      o_21 :
      if(((ATgetType(r_21) == AT_LIST) && ((ATermList) r_21 != ATempty)))
        {
          s_21 = ATgetFirst((ATermList) r_21);
          t_21 = (ATerm) ATgetNext((ATermList) r_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), not_null(t_21));
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
  ATerm b_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  b_22 = t;
  y_21 :
  if(match_cons(b_22, sym__2))
    {
      l_22 = ATgetArgument(b_22, 0);
      m_22 = ATgetArgument(b_22, 1);
      z_21 :
      if(((ATgetType(m_22) == AT_LIST) && ((ATermList) m_22 != ATempty)))
        {
          n_22 = ATgetFirst((ATermList) m_22);
          q_22 = (ATerm) ATgetNext((ATermList) m_22);
          a_22 :
          if(match_cons(n_22, sym__2))
            {
              o_22 = ATgetArgument(n_22, 0);
              p_22 = ATgetArgument(n_22, 1);
              {
                ATerm s_22 = NULL;
                if(((l_22 != NULL) && (l_22 != o_22)))
                  _fail(o_22);
                else
                  l_22 = o_22;
                {
                  if(((s_22 != NULL) && (s_22 != p_22)))
                    _fail(p_22);
                  else
                    s_22 = p_22;
                  t = not_null(s_22);
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
ATerm lookup_0 (ATerm t)
{
  ATerm b_9 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = b_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_86 (ATerm), ATerm t_86 (ATerm))
{
  ATerm b_23 = NULL;
  ATerm d_23 = NULL,e_23 = NULL;
  b_23 = t;
  {
    ATerm f_23 = NULL;
    t = not_null(b_23);
    {
      ATerm g_23 = NULL;
      t = s_86(t);
      {
        f_23 = t;
        {
          if(((d_23 != NULL) && (d_23 != f_23)))
            _fail(f_23);
          else
            d_23 = f_23;
          {
            t = t_86(t);
            {
              g_23 = t;
              if(((e_23 != NULL) && (e_23 != g_23)))
                _fail(g_23);
              else
                e_23 = g_23;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(e_23));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm k_23 (ATerm t)
  {
    ATerm k_9 = t;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = _all(t, k_23);
      }
    return(t);
  }
  t = k_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  q_23 = t;
  o_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        ATerm v_23 = NULL;
        if(((v_23 != NULL) && (v_23 != s_23)))
          _fail(s_23);
        else
          v_23 = s_23;
      }
    }
  else
    {
      if(match_cons(q_23, sym__3))
        {
          r_23 = ATgetArgument(q_23, 0);
          s_23 = ATgetArgument(q_23, 1);
          t_23 = ATgetArgument(q_23, 2);
          {
            ATerm b_24 = NULL;
            ATerm c_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(s_23));
            {
              t = zip_1(t, _id);
              {
                c_24 = t;
                if(((b_24 != NULL) && (b_24 != c_24)))
                  _fail(c_24);
                else
                  b_24 = c_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(t_23));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  t = subs_args_0(t);
  {
    r_24 = t;
    h_24 :
    if(match_cons(r_24, sym__2))
      {
        s_24 = ATgetArgument(r_24, 0);
        t_24 = ATgetArgument(r_24, 1);
        {
          t = not_null(t_24);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(s_24);
                return(t);
              }
              t = SubsVar_2(t, u_86, v_0);
              t = v_86(t);
              return(t);
            }
            t = alltd_1(t, u_0);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm w_86 (ATerm))
{
  t = substitute_2(t, w_86, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  l_25 = t;
  j_25 :
  if(match_cons(l_25, sym__2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      k_25 :
      if(((ATgetType(n_25) == AT_LIST) && ((ATermList) n_25 != ATempty)))
        {
          o_25 = ATgetFirst((ATermList) n_25);
          p_25 = (ATerm) ATgetNext((ATermList) n_25);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_25)), not_null(o_25)), not_null(p_25));
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
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  e_26 = t;
  c_26 :
  if(((ATgetType(e_26) == AT_LIST) && ((ATermList) e_26 != ATempty)))
    {
      f_26 = ATgetFirst((ATermList) e_26);
      i_26 = (ATerm) ATgetNext((ATermList) e_26);
      d_26 :
      if(match_cons(f_26, sym__2))
        {
          g_26 = ATgetArgument(f_26, 0);
          h_26 = ATgetArgument(f_26, 1);
          {
            ATerm o_26 = NULL,p_26 = NULL,a_27 = NULL,g_27 = NULL;
            ATerm l_9;
            l_9 = t;
            {
              ATerm q_26 = NULL;
              ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
              t = not_null(h_26);
              {
                q_26 = t;
                {
                  t = SSL_explode_term(not_null(q_26));
                  {
                    x_26 = t;
                    x_25 :
                    if(match_cons(x_26, sym__2))
                      {
                        y_26 = ATgetArgument(x_26, 0);
                        z_26 = ATgetArgument(x_26, 1);
                        {
                          if(((o_26 != NULL) && (o_26 != y_26)))
                            _fail(y_26);
                          else
                            o_26 = y_26;
                          if(((p_26 != NULL) && (p_26 != z_26)))
                            _fail(z_26);
                          else
                            p_26 = z_26;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = l_9;
            {
              ATerm m_9;
              m_9 = t;
              {
                ATerm b_27 = NULL;
                ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                t = not_null(g_26);
                {
                  b_27 = t;
                  {
                    t = SSL_explode_term(not_null(b_27));
                    {
                      d_27 = t;
                      a_26 :
                      if(match_cons(d_27, sym__2))
                        {
                          e_27 = ATgetArgument(d_27, 0);
                          f_27 = ATgetArgument(d_27, 1);
                          {
                            if(((o_26 != NULL) && (o_26 != e_27)))
                              _fail(e_27);
                            else
                              o_26 = e_27;
                            if(((a_27 != NULL) && (a_27 != f_27)))
                              _fail(f_27);
                            else
                              a_27 = f_27;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = m_9;
              {
                ATerm h_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(p_26));
                {
                  t = zip_1(t, _id);
                  {
                    h_27 = t;
                    if(((g_27 != NULL) && (g_27 != h_27)))
                      _fail(h_27);
                    else
                      g_27 = h_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(i_26));
                  t = conc_0(t);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  r_27 = t;
  p_27 :
  if(((ATgetType(r_27) == AT_LIST) && ((ATermList) r_27 != ATempty)))
    {
      s_27 = ATgetFirst((ATermList) r_27);
      v_27 = (ATerm) ATgetNext((ATermList) r_27);
      q_27 :
      if(match_cons(s_27, sym__2))
        {
          t_27 = ATgetArgument(s_27, 0);
          u_27 = ATgetArgument(s_27, 1);
          {
            ATerm x_27 = NULL;
            if(((t_27 != NULL) && (t_27 != u_27)))
              _fail(u_27);
            else
              t_27 = u_27;
            {
              if(((x_27 != NULL) && (x_27 != v_27)))
                _fail(v_27);
              else
                x_27 = v_27;
              t = not_null(x_27);
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
ATerm while_not_2 (ATerm t, ATerm p_71 (ATerm), ATerm q_71 (ATerm))
{
  ATerm z_27 (ATerm t)
  {
    ATerm t_9 = t;
    if((PushChoice() == 0))
      {
        t = p_71(t);
        PopChoice();
      }
    else
      {
        t = t_9;
        {
          t = q_71(t);
          t = z_27(t);
        }
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  t = s_71(t);
  t = while_not_2(t, t_71, u_71);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(((ATgetType(d_28) == AT_LIST) && ((ATermList) d_28 != ATempty)))
    {
      e_28 = ATgetFirst((ATermList) d_28);
      f_28 = (ATerm) ATgetNext((ATermList) d_28);
      {
        t = e_77(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm i_28 = NULL;
            i_28 = t;
            if(((e_28 != NULL) && (e_28 != i_28)))
              _fail(i_28);
            else
              e_28 = i_28;
            return(t);
          }
          t = fetch_1(t, w_0);
        }
        t = not_null(f_28);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm u_9 = t;
  if((PushChoice() == 0))
    {
      ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
      o_28 = t;
      m_28 :
      if(match_cons(o_28, sym__2))
        {
          p_28 = ATgetArgument(o_28, 0);
          q_28 = ATgetArgument(o_28, 1);
          {
            t = not_null(p_28);
            {
              ATerm w_28 (ATerm t)
              {
                ATerm v_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = v_9;
                    {
                      ATerm w_9 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_0 (ATerm t)
                          {
                            t = not_null(q_28);
                            return(t);
                          }
                          t = HdMember_1(t, x_0);
                          t = w_28(t);
                          PopChoice();
                        }
                      else
                        {
                          t = w_9;
                          t = Cons_2(t, _id, w_28);
                        }
                    }
                  }
                return(t);
              }
              t = w_28(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm t_28 = NULL;
          t_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_28));
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm x_9 = t;
          if((PushChoice() == 0))
            {
              ATerm b_1 (ATerm t)
              {
                ATerm y_9 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = y_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, b_1);
              PopChoice();
            }
          else
            {
              t = x_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, y_0, z_0, a_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm y_28 (ATerm t)
  {
    ATerm z_9 = t;
    if((PushChoice() == 0))
      {
        t = e_85(t);
        PopChoice();
      }
    else
      {
        t = z_9;
        t = _one(t, y_28);
      }
    return(t);
  }
  t = y_28(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      {
        t = not_null(e_29);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm h_29 = NULL;
            h_29 = t;
            if(((d_29 != NULL) && (d_29 != h_29)))
              _fail(h_29);
            else
              d_29 = h_29;
            return(t);
          }
          t = oncetd_1(t, c_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm d_63 (ATerm))
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
        {
          t = d_63(t);
          {
            q_29 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  l_31 = t;
  k_30 :
  if(match_cons(l_31, sym_Seq_2))
    {
      m_31 = ATgetArgument(l_31, 0);
      o_31 = ATgetArgument(l_31, 1);
      l_30 :
      if(match_cons(m_31, sym_Assign_1))
        {
          n_31 = ATgetArgument(m_31, 0);
          m_30 :
          if(match_cons(n_31, sym_Var_1))
            {
              e_31 = ATgetArgument(n_31, 0);
              n_30 :
              if(match_cons(o_31, sym_Seq_2))
                {
                  p_31 = ATgetArgument(o_31, 0);
                  q_31 = ATgetArgument(o_31, 1);
                  o_30 :
                  if(match_cons(p_31, sym_Build_1))
                    {
                      h_31 = ATgetArgument(p_31, 0);
                      p_30 :
                      if(match_cons(h_31, sym_Var_1))
                        {
                          i_31 = ATgetArgument(h_31, 0);
                          {
                            ATerm w_31 = NULL;
                            if(((e_31 != NULL) && (e_31 != i_31)))
                              _fail(i_31);
                            else
                              e_31 = i_31;
                            {
                              if(((w_31 != NULL) && (w_31 != q_31)))
                                _fail(q_31);
                              else
                                w_31 = q_31;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31))), not_null(w_31));
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
      else
        {
          if(match_cons(m_31, sym_Build_1))
            {
              n_31 = ATgetArgument(m_31, 0);
              q_30 :
              if(match_cons(o_31, sym_Scope_2))
                {
                  p_31 = ATgetArgument(o_31, 0);
                  q_31 = ATgetArgument(o_31, 1);
                  r_30 :
                  if(match_cons(q_31, sym_Seq_2))
                    {
                      r_31 = ATgetArgument(q_31, 0);
                      u_31 = ATgetArgument(q_31, 1);
                      s_30 :
                      if(match_cons(r_31, sym_Assign_1))
                        {
                          s_31 = ATgetArgument(r_31, 0);
                          t_30 :
                          if(match_cons(s_31, sym_Var_1))
                            {
                              t_31 = ATgetArgument(s_31, 0);
                              {
                                ATerm m_10 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_33 = NULL,d_33 = NULL;
                                    ATerm n_10;
                                    n_10 = t;
                                    {
                                      ATerm c_33 = NULL;
                                      t = not_null(n_31);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(p_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), (ATerm) ATinsert(ATempty, not_null(t_31)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  c_33 = t;
                                                  if(((b_33 != NULL) && (b_33 != c_33)))
                                                    _fail(c_33);
                                                  else
                                                    b_33 = c_33;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = n_10;
                                    {
                                      ATerm e_33 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm)ATinsert(ATempty, not_null(n_31)), not_null(u_31));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          e_33 = t;
                                          if(((d_33 != NULL) && (d_33 != e_33)))
                                            _fail(e_33);
                                          else
                                            d_33 = e_33;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_33), not_null(d_33)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_10;
                                    {
                                      ATerm j_33 = NULL,l_33 = NULL;
                                      ATerm o_10;
                                      o_10 = t;
                                      {
                                        ATerm k_33 = NULL;
                                        t = not_null(n_31);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(p_31));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), (ATerm) ATinsert(ATempty, not_null(t_31)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    k_33 = t;
                                                    if(((j_33 != NULL) && (j_33 != k_33)))
                                                      _fail(k_33);
                                                    else
                                                      j_33 = k_33;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = o_10;
                                      {
                                        ATerm m_33 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm)ATinsert(ATempty, not_null(n_31)), not_null(u_31));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            m_33 = t;
                                            if(((l_33 != NULL) && (l_33 != m_33)))
                                              _fail(m_33);
                                            else
                                              l_33 = m_33;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_33), not_null(l_33)));
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
      if(match_cons(l_31, sym_Scope_2))
        {
          m_31 = ATgetArgument(l_31, 0);
          o_31 = ATgetArgument(l_31, 1);
          u_30 :
          if(match_cons(o_31, sym_Seq_2))
            {
              p_31 = ATgetArgument(o_31, 0);
              q_31 = ATgetArgument(o_31, 1);
              v_30 :
              if(match_cons(p_31, sym_Assign_1))
                {
                  h_31 = ATgetArgument(p_31, 0);
                  w_30 :
                  if(match_cons(h_31, sym_Var_1))
                    {
                      i_31 = ATgetArgument(h_31, 0);
                      x_30 :
                      if(match_cons(q_31, sym_Seq_2))
                        {
                          r_31 = ATgetArgument(q_31, 0);
                          u_31 = ATgetArgument(q_31, 1);
                          y_30 :
                          if(match_cons(r_31, sym_Assign_2))
                            {
                              s_31 = ATgetArgument(r_31, 0);
                              f_31 = ATgetArgument(r_31, 1);
                              z_30 :
                              if(match_cons(s_31, sym_Var_1))
                                {
                                  t_31 = ATgetArgument(s_31, 0);
                                  a_31 :
                                  if(match_cons(f_31, sym_Var_1))
                                    {
                                      g_31 = ATgetArgument(f_31, 0);
                                      {
                                        ATerm a_32 = NULL,b_32 = NULL,d_32 = NULL;
                                        if(((i_31 != NULL) && (i_31 != g_31)))
                                          _fail(g_31);
                                        else
                                          i_31 = g_31;
                                        {
                                          if(((a_32 != NULL) && (a_32 != u_31)))
                                            _fail(u_31);
                                          else
                                            a_32 = u_31;
                                          {
                                            ATerm p_10;
                                            p_10 = t;
                                            {
                                              ATerm c_32 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(m_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(m_31));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), (ATerm) ATinsert(ATempty, not_null(t_31)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          c_32 = t;
                                                          if(((b_32 != NULL) && (b_32 != c_32)))
                                                            _fail(c_32);
                                                          else
                                                            b_32 = c_32;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = p_10;
                                            {
                                              ATerm e_32 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))), not_null(a_32));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  e_32 = t;
                                                  if(((d_32 != NULL) && (d_32 != e_32)))
                                                    _fail(e_32);
                                                  else
                                                    d_32 = e_32;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))), not_null(d_32)));
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
                          else
                            {
                              if(match_cons(r_31, sym_Assign_1))
                                {
                                  s_31 = ATgetArgument(r_31, 0);
                                  b_31 :
                                  if(match_cons(s_31, sym_Var_1))
                                    {
                                      t_31 = ATgetArgument(s_31, 0);
                                      {
                                        ATerm j_32 = NULL,l_32 = NULL;
                                        ATerm q_10;
                                        q_10 = t;
                                        {
                                          ATerm k_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(m_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(m_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), (ATerm) ATinsert(ATempty, not_null(t_31)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      k_32 = t;
                                                      if(((j_32 != NULL) && (j_32 != k_32)))
                                                        _fail(k_32);
                                                      else
                                                        j_32 = k_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = q_10;
                                        {
                                          ATerm m_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))), not_null(u_31));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              m_32 = t;
                                              if(((l_32 != NULL) && (l_32 != m_32)))
                                                _fail(m_32);
                                              else
                                                l_32 = m_32;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_31))), not_null(l_32)));
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
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_31, sym_Assign_2))
                    {
                      h_31 = ATgetArgument(p_31, 0);
                      j_31 = ATgetArgument(p_31, 1);
                      c_31 :
                      if(match_cons(h_31, sym_Var_1))
                        {
                          i_31 = ATgetArgument(h_31, 0);
                          d_31 :
                          if(match_cons(j_31, sym_Var_1))
                            {
                              k_31 = ATgetArgument(j_31, 0);
                              {
                                ATerm t_32 = NULL,v_32 = NULL;
                                ATerm r_10;
                                r_10 = t;
                                {
                                  ATerm u_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(m_31));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), (ATerm) ATinsert(ATempty, not_null(i_31)));
                                      {
                                        t = diff_0(t);
                                        {
                                          u_32 = t;
                                          if(((t_32 != NULL) && (t_32 != u_32)))
                                            _fail(u_32);
                                          else
                                            t_32 = u_32;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = r_10;
                                {
                                  ATerm w_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(i_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_31))), not_null(q_31));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      w_32 = t;
                                      if(((v_32 != NULL) && (v_32 != w_32)))
                                        _fail(w_32);
                                      else
                                        v_32 = w_32;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_32), not_null(v_32));
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
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm HoistLet_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  g_34 = t;
  e_34 :
  if(match_cons(g_34, sym_Seq_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      f_34 :
      if(match_cons(i_34, sym_Let_2))
        {
          j_34 = ATgetArgument(i_34, 0);
          k_34 = ATgetArgument(i_34, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_34), not_null(k_34)));
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
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym__2))
    {
      s_34 = ATgetArgument(r_34, 0);
      t_34 = ATgetArgument(r_34, 1);
      {
        t = not_null(s_34);
        {
          ATerm d_1 (ATerm t)
          {
            t = not_null(t_34);
            return(t);
          }
          t = at_end_1(t, d_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym__2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_35)), not_null(a_35));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  j_35 = t;
  g_35 :
  if(match_cons(j_35, sym__2))
    {
      k_35 = ATgetArgument(j_35, 0);
      n_35 = ATgetArgument(j_35, 1);
      h_35 :
      if(((ATgetType(k_35) == AT_LIST) && ((ATermList) k_35 != ATempty)))
        {
          l_35 = ATgetFirst((ATermList) k_35);
          m_35 = (ATerm) ATgetNext((ATermList) k_35);
          i_35 :
          if(((ATgetType(n_35) == AT_LIST) && ((ATermList) n_35 != ATempty)))
            {
              o_35 = ATgetFirst((ATermList) n_35);
              p_35 = (ATerm) ATgetNext((ATermList) n_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_35), not_null(o_35)), (ATerm) ATmakeAppl(sym__2, not_null(m_35), not_null(p_35)));
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
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  w_35 :
  if(match_cons(z_35, sym__2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      x_35 :
      if(((ATermList) a_36 == ATempty))
        {
          y_35 :
          if(((ATermList) b_36 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm))
{
  ATerm d_36 (ATerm t)
  {
    ATerm s_10 = t;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        {
          t = v_80(t);
          {
            t = _2(t, x_80, d_36);
            t = w_80(t);
          }
        }
      }
    return(t);
  }
  t = d_36(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_80);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Cong_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,w_37 = NULL;
        ATerm t_10;
        t_10 = t;
        {
          ATerm d_37 = NULL;
          t = not_null(v_36);
          {
            ATerm g_37 = NULL;
            t = map_1(t, new_0);
            {
              d_37 = t;
              {
                if(((a_37 != NULL) && (a_37 != d_37)))
                  _fail(d_37);
                else
                  a_37 = d_37;
                {
                  t = not_null(a_37);
                  {
                    ATerm h_37 = NULL;
                    ATerm e_1 (ATerm t)
                    {
                      ATerm e_37 = NULL;
                      ATerm f_37 = NULL;
                      f_37 = t;
                      if(((e_37 != NULL) && (e_37 != f_37)))
                        _fail(f_37);
                      else
                        e_37 = f_37;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37));
                      return(t);
                    }
                    t = map_1(t, e_1);
                    {
                      g_37 = t;
                      {
                        if(((y_36 != NULL) && (y_36 != g_37)))
                          _fail(g_37);
                        else
                          y_36 = g_37;
                        {
                          t = not_null(v_36);
                          {
                            ATerm k_37 = NULL;
                            t = map_1(t, new_0);
                            {
                              h_37 = t;
                              {
                                if(((b_37 != NULL) && (b_37 != h_37)))
                                  _fail(h_37);
                                else
                                  b_37 = h_37;
                                {
                                  t = not_null(b_37);
                                  {
                                    ATerm l_37 = NULL,v_37 = NULL;
                                    ATerm f_1 (ATerm t)
                                    {
                                      ATerm i_37 = NULL;
                                      ATerm j_37 = NULL;
                                      j_37 = t;
                                      if(((i_37 != NULL) && (i_37 != j_37)))
                                        _fail(j_37);
                                      else
                                        i_37 = j_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_37));
                                      return(t);
                                    }
                                    t = map_1(t, f_1);
                                    {
                                      k_37 = t;
                                      {
                                        if(((z_36 != NULL) && (z_36 != k_37)))
                                          _fail(k_37);
                                        else
                                          z_36 = k_37;
                                        {
                                          ATerm m_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), not_null(b_37));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              m_37 = t;
                                              if(((l_37 != NULL) && (l_37 != m_37)))
                                                _fail(m_37);
                                              else
                                                l_37 = m_37;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), not_null(v_36));
                                            {
                                              ATerm g_1 (ATerm t)
                                              {
                                                ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
                                                n_37 = t;
                                                o_36 :
                                                if(match_cons(n_37, sym__2))
                                                  {
                                                    o_37 = ATgetArgument(n_37, 0);
                                                    r_37 = ATgetArgument(n_37, 1);
                                                    p_36 :
                                                    if(match_cons(o_37, sym__2))
                                                      {
                                                        p_37 = ATgetArgument(o_37, 0);
                                                        q_37 = ATgetArgument(o_37, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_37))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_37)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, g_1);
                                              {
                                                v_37 = t;
                                                if(((c_37 != NULL) && (c_37 != v_37)))
                                                  _fail(v_37);
                                                else
                                                  c_37 = v_37;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_10;
        {
          ATerm x_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), not_null(b_37));
          {
            t = conc_0(t);
            {
              x_37 = t;
              if(((w_37 != NULL) && (w_37 != x_37)))
                _fail(x_37);
              else
                w_37 = x_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_36), not_null(y_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_37)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_36), not_null(z_36))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym_Cong_2))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      {
        ATerm w_38 = NULL;
        ATerm a_39 = NULL;
        t = not_null(t_38);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL;
            y_38 = t;
            o_38 :
            if(match_cons(y_38, sym_Match_1))
              {
                x_38 = ATgetArgument(y_38, 0);
                t = not_null(x_38);
              }
            else
              {
                if(match_cons(y_38, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
          {
            a_39 = t;
            if(((w_38 != NULL) && (w_38 != a_39)))
              _fail(a_39);
            else
              w_38 = a_39;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_38), not_null(w_38)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  k_39 :
  if(match_cons(m_39, sym_Scope_2))
    {
      n_39 = ATgetArgument(m_39, 0);
      o_39 = ATgetArgument(m_39, 1);
      l_39 :
      if(((ATermList) n_39 == ATempty))
        {
          t = not_null(o_39);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  z_39 :
  if(match_cons(v_40, sym_Where_1))
    {
      w_40 = ATgetArgument(v_40, 0);
      e_40 :
      if(match_cons(w_40, sym_Seq_2))
        {
          s_40 = ATgetArgument(w_40, 0);
          o_40 = ATgetArgument(w_40, 1);
          f_40 :
          if(match_cons(s_40, sym_Where_1))
            {
              n_40 = ATgetArgument(s_40, 0);
              i_40 :
              if(match_cons(o_40, sym_Seq_2))
                {
                  p_40 = ATgetArgument(o_40, 0);
                  r_40 = ATgetArgument(o_40, 1);
                  k_40 :
                  if(match_cons(p_40, sym_Build_1))
                    {
                      q_40 = ATgetArgument(p_40, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_40)), not_null(r_40))));
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
          if(match_cons(w_40, sym_Where_1))
            {
              s_40 = ATgetArgument(w_40, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_40));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(v_40, sym_Test_1))
        {
          w_40 = ATgetArgument(v_40, 0);
          l_40 :
          if(match_cons(w_40, sym_Test_1))
            {
              s_40 = ATgetArgument(w_40, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_40));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(v_40, sym_Not_1))
            {
              w_40 = ATgetArgument(v_40, 0);
              m_40 :
              if(match_cons(w_40, sym_Not_1))
                {
                  s_40 = ATgetArgument(w_40, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_40));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(v_40, sym_LChoice_2))
                {
                  w_40 = ATgetArgument(v_40, 0);
                  x_40 = ATgetArgument(v_40, 1);
                  {
                    if(((w_40 != NULL) && (w_40 != x_40)))
                      _fail(x_40);
                    else
                      w_40 = x_40;
                    t = not_null(w_40);
                  }
                }
              else
                {
                  if(match_cons(v_40, sym_Choice_2))
                    {
                      w_40 = ATgetArgument(v_40, 0);
                      x_40 = ATgetArgument(v_40, 1);
                      {
                        if(((w_40 != NULL) && (w_40 != x_40)))
                          _fail(x_40);
                        else
                          w_40 = x_40;
                        t = not_null(w_40);
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  d_42 = t;
  z_41 :
  if(match_cons(d_42, sym_LChoice_2))
    {
      g_42 = ATgetArgument(d_42, 0);
      j_42 = ATgetArgument(d_42, 1);
      a_42 :
      if(match_cons(g_42, sym_LChoice_2))
        {
          h_42 = ATgetArgument(g_42, 0);
          i_42 = ATgetArgument(g_42, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_42), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_42), not_null(j_42)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_42, sym_Seq_2))
        {
          g_42 = ATgetArgument(d_42, 0);
          j_42 = ATgetArgument(d_42, 1);
          b_42 :
          if(match_cons(g_42, sym_Seq_2))
            {
              h_42 = ATgetArgument(g_42, 0);
              i_42 = ATgetArgument(g_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_42), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_42), not_null(j_42)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(d_42, sym_Choice_2))
            {
              g_42 = ATgetArgument(d_42, 0);
              j_42 = ATgetArgument(d_42, 1);
              c_42 :
              if(match_cons(g_42, sym_Choice_2))
                {
                  h_42 = ATgetArgument(g_42, 0);
                  i_42 = ATgetArgument(g_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_42), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_42), not_null(j_42)));
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
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  q_43 = t;
  i_43 :
  if(match_cons(q_43, sym_InfixApp_3))
    {
      r_43 = ATgetArgument(q_43, 0);
      n_43 = ATgetArgument(q_43, 1);
      m_43 = ATgetArgument(q_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_43), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_43)), not_null(r_43))));
    }
  else
    {
      if(match_cons(q_43, sym_BAM_3))
        {
          r_43 = ATgetArgument(q_43, 0);
          n_43 = ATgetArgument(q_43, 1);
          m_43 = ATgetArgument(q_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(m_43))), not_null(r_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_43))));
        }
      else
        {
          if(match_cons(q_43, sym_AM_2))
            {
              r_43 = ATgetArgument(q_43, 0);
              n_43 = ATgetArgument(q_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_43)));
            }
          else
            {
              if(match_cons(q_43, sym_MA_2))
                {
                  r_43 = ATgetArgument(q_43, 0);
                  n_43 = ATgetArgument(q_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_43)), not_null(n_43));
                }
              else
                {
                  if(match_cons(q_43, sym_BA_2))
                    {
                      r_43 = ATgetArgument(q_43, 0);
                      n_43 = ATgetArgument(q_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_43)), not_null(r_43));
                    }
                  else
                    {
                      if(match_cons(q_43, sym_Lets_2))
                        {
                          r_43 = ATgetArgument(q_43, 0);
                          n_43 = ATgetArgument(q_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_43), not_null(n_43));
                        }
                      else
                        {
                          if(match_cons(q_43, sym_LChoices_1))
                            {
                              r_43 = ATgetArgument(q_43, 0);
                              j_43 :
                              if(((ATgetType(r_43) == AT_LIST) && ((ATermList) r_43 != ATempty)))
                                {
                                  o_43 = ATgetFirst((ATermList) r_43);
                                  p_43 = (ATerm) ATgetNext((ATermList) r_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_43)));
                                }
                              else
                                {
                                  if(((ATermList) r_43 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_43, sym_Choices_1))
                                {
                                  r_43 = ATgetArgument(q_43, 0);
                                  k_43 :
                                  if(((ATgetType(r_43) == AT_LIST) && ((ATermList) r_43 != ATempty)))
                                    {
                                      o_43 = ATgetFirst((ATermList) r_43);
                                      p_43 = (ATerm) ATgetNext((ATermList) r_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_43)));
                                    }
                                  else
                                    {
                                      if(((ATermList) r_43 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_43, sym_Seqs_1))
                                    {
                                      r_43 = ATgetArgument(q_43, 0);
                                      l_43 :
                                      if(((ATgetType(r_43) == AT_LIST) && ((ATermList) r_43 != ATempty)))
                                        {
                                          o_43 = ATgetFirst((ATermList) r_43);
                                          p_43 = (ATerm) ATgetNext((ATermList) r_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_43)));
                                        }
                                      else
                                        {
                                          if(((ATermList) r_43 == ATempty))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Id_0);
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
                    }
                }
            }
        }
    }
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  b_45 = t;
  z_44 :
  if(match_cons(b_45, sym_Where_1))
    {
      c_45 = ATgetArgument(b_45, 0);
      a_45 :
      if(match_cons(c_45, sym_Fail_0))
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
  ATerm t_45 = NULL,v_45 = NULL,w_45 = NULL;
  t_45 = t;
  q_45 :
  if(match_cons(t_45, sym_LChoice_2))
    {
      v_45 = ATgetArgument(t_45, 0);
      w_45 = ATgetArgument(t_45, 1);
      r_45 :
      if(match_cons(w_45, sym_Fail_0))
        t = not_null(v_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  f_46 :
  if(match_cons(h_46, sym_LChoice_2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      g_46 :
      if(match_cons(i_46, sym_Fail_0))
        t = not_null(j_46);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  n_46 :
  if(match_cons(q_46, sym_Choice_2))
    {
      r_46 = ATgetArgument(q_46, 0);
      s_46 = ATgetArgument(q_46, 1);
      o_46 :
      if(match_cons(s_46, sym_Fail_0))
        t = not_null(r_46);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm y_46 = NULL,h_47 = NULL,i_47 = NULL;
  y_46 = t;
  w_46 :
  if(match_cons(y_46, sym_Choice_2))
    {
      h_47 = ATgetArgument(y_46, 0);
      i_47 = ATgetArgument(y_46, 1);
      x_46 :
      if(match_cons(h_47, sym_Fail_0))
        t = not_null(i_47);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym_Cong_2))
    {
      b_48 = ATgetArgument(a_48, 0);
      c_48 = ATgetArgument(a_48, 1);
      {
        t = not_null(c_48);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm f_48 = NULL;
            f_48 = t;
            y_47 :
            if(!(match_cons(f_48, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, i_1);
        }
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  i_48 :
  if(match_cons(k_48, sym_Path_2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      j_48 :
      if(match_cons(m_48, sym_Fail_0))
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
  ATerm s_48 = NULL,t_48 = NULL;
  s_48 = t;
  q_48 :
  if(match_cons(s_48, sym_One_1))
    {
      t_48 = ATgetArgument(s_48, 0);
      r_48 :
      if(match_cons(t_48, sym_Fail_0))
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
  ATerm y_48 = NULL,z_48 = NULL;
  y_48 = t;
  w_48 :
  if(match_cons(y_48, sym_Some_1))
    {
      z_48 = ATgetArgument(y_48, 0);
      x_48 :
      if(match_cons(z_48, sym_Fail_0))
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
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  c_49 :
  if(match_cons(e_49, sym_Rec_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      d_49 :
      if(match_cons(g_49, sym_Fail_0))
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
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
  m_49 = t;
  k_49 :
  if(match_cons(m_49, sym_Scope_2))
    {
      n_49 = ATgetArgument(m_49, 0);
      o_49 = ATgetArgument(m_49, 1);
      l_49 :
      if(match_cons(o_49, sym_Fail_0))
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
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  s_49 :
  if(match_cons(u_49, sym_Seq_2))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      t_49 :
      if(match_cons(v_49, sym_Fail_0))
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
  ATerm c_50 = NULL,d_50 = NULL;
  c_50 = t;
  a_50 :
  if(match_cons(c_50, sym_Not_1))
    {
      d_50 = ATgetArgument(c_50, 0);
      b_50 :
      if(match_cons(d_50, sym_Fail_0))
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
  ATerm i_50 = NULL,j_50 = NULL;
  i_50 = t;
  g_50 :
  if(match_cons(i_50, sym_Test_1))
    {
      j_50 = ATgetArgument(i_50, 0);
      h_50 :
      if(match_cons(j_50, sym_Fail_0))
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
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = u_10;
      {
        ATerm v_10 = t;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = v_10;
            {
              ATerm g_11 = t;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = g_11;
                  {
                    ATerm h_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm i_11 = t;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm j_11 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_11;
                                    {
                                      ATerm k_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_11;
                                          {
                                            ATerm l_11 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_11;
                                                {
                                                  ATerm m_11 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = m_11;
                                                      {
                                                        ATerm n_11 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = n_11;
                                                            {
                                                              ATerm p_11 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_11;
                                                                  {
                                                                    ATerm e_12 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_12;
                                                                        {
                                                                          ATerm f_12 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_12;
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
  ATerm o_50 = NULL,p_50 = NULL;
  o_50 = t;
  m_50 :
  if(match_cons(o_50, sym_Match_1))
    {
      p_50 = ATgetArgument(o_50, 0);
      n_50 :
      if(match_cons(p_50, sym_Wld_0))
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
  ATerm u_50 = NULL,v_50 = NULL;
  u_50 = t;
  s_50 :
  if(match_cons(u_50, sym_Where_1))
    {
      v_50 = ATgetArgument(u_50, 0);
      t_50 :
      if(match_cons(v_50, sym_Id_0))
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
  ATerm a_51 = NULL,b_51 = NULL;
  a_51 = t;
  y_50 :
  if(match_cons(a_51, sym_All_1))
    {
      b_51 = ATgetArgument(a_51, 0);
      z_50 :
      if(match_cons(b_51, sym_Id_0))
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
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  e_51 :
  if(match_cons(g_51, sym_Rec_2))
    {
      h_51 = ATgetArgument(g_51, 0);
      i_51 = ATgetArgument(g_51, 1);
      f_51 :
      if(match_cons(i_51, sym_Id_0))
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
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  m_51 :
  if(match_cons(o_51, sym_Scope_2))
    {
      p_51 = ATgetArgument(o_51, 0);
      q_51 = ATgetArgument(o_51, 1);
      n_51 :
      if(match_cons(q_51, sym_Id_0))
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
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  w_51 = t;
  u_51 :
  if(match_cons(w_51, sym_LChoice_2))
    {
      x_51 = ATgetArgument(w_51, 0);
      y_51 = ATgetArgument(w_51, 1);
      v_51 :
      if(match_cons(x_51, sym_Id_0))
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
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  c_52 :
  if(match_cons(e_52, sym_Seq_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      d_52 :
      if(match_cons(g_52, sym_Id_0))
        t = not_null(f_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  m_52 = t;
  k_52 :
  if(match_cons(m_52, sym_Seq_2))
    {
      n_52 = ATgetArgument(m_52, 0);
      o_52 = ATgetArgument(m_52, 1);
      l_52 :
      if(match_cons(n_52, sym_Id_0))
        t = not_null(o_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  u_52 = t;
  s_52 :
  if(match_cons(u_52, sym_Not_1))
    {
      v_52 = ATgetArgument(u_52, 0);
      t_52 :
      if(match_cons(v_52, sym_Id_0))
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
  ATerm a_53 = NULL,b_53 = NULL;
  a_53 = t;
  y_52 :
  if(match_cons(a_53, sym_Test_1))
    {
      b_53 = ATgetArgument(a_53, 0);
      z_52 :
      if(match_cons(b_53, sym_Id_0))
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
  ATerm l_12 = t;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = l_12;
      {
        ATerm m_12 = t;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = m_12;
            {
              ATerm o_12 = t;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = o_12;
                  {
                    ATerm p_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = p_12;
                        {
                          ATerm q_12 = t;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = q_12;
                              {
                                ATerm r_12 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_12;
                                    {
                                      ATerm w_12 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_12;
                                          {
                                            ATerm x_12 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_12;
                                                {
                                                  ATerm y_12 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_12;
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
  ATerm n_13 = t;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = n_13;
      {
        ATerm o_13 = t;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = o_13;
            {
              ATerm p_13 = t;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_13;
                  {
                    ATerm q_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm r_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_13;
                              {
                                ATerm s_13 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_13;
                                    {
                                      ATerm t_13 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_13;
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
ATerm Optimize_0 (ATerm t)
{
  ATerm u_13 = t;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = u_13;
      {
        ATerm v_13 = t;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = v_13;
            {
              ATerm w_13 = t;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = w_13;
                  {
                    ATerm x_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm y_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = y_13;
                              {
                                ATerm z_13 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_13;
                                    {
                                      ATerm a_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = a_14;
                                          t = InlineDont_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm d_53 (ATerm t)
  {
    ATerm b_14 = t;
    if((PushChoice() == 0))
      {
        t = y_70(t);
        t = d_53(t);
        PopChoice();
      }
    else
      {
        t = b_14;
        t = z_70(t);
      }
    return(t);
  }
  t = d_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_71 (ATerm))
{
  t = repeat_2(t, b_71, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm e_53 (ATerm t)
  {
    t = s_83(t);
    {
      t = _all(t, e_53);
      t = s_83(t);
    }
    return(t);
  }
  t = e_53(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      ATerm c_14 = t;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = c_14;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, k_1);
    return(t);
  }
  t = downup_1(t, j_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_SDef_3))
    {
      l_53 = ATgetArgument(k_53, 0);
      m_53 = ATgetArgument(k_53, 1);
      n_53 = ATgetArgument(k_53, 2);
      {
        ATerm t_53 = NULL;
        t = not_null(l_53);
        {
          ATerm v_53 = NULL;
          t = w_63(t);
          {
            t_53 = t;
            {
              t = not_null(m_53);
              {
                ATerm x_53 = NULL;
                t = x_63(t);
                {
                  v_53 = t;
                  {
                    t = not_null(n_53);
                    {
                      t = y_63(t);
                      {
                        x_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_53), not_null(v_53), not_null(x_53));
                      }
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
ATerm Strategies_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym_Strategies_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      {
        ATerm j_54 = NULL;
        t = not_null(h_54);
        {
          t = r_62(t);
          {
            j_54 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  p_54 :
  if(match_cons(q_54, sym_Specification_1))
    {
      r_54 = ATgetArgument(q_54, 0);
      {
        ATerm t_54 = NULL;
        t = not_null(r_54);
        {
          t = t_62(t);
          {
            t_54 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, n_88);
            return(t);
          }
          t = map_1(t, t_1);
          return(t);
        }
        t = Strategies_1(t, s_1);
        return(t);
      }
      t = Cons_2(t, r_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, q_1);
    return(t);
  }
  t = Specification_1(t, l_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym__2))
    {
      e_55 = ATgetArgument(d_55, 0);
      f_55 = ATgetArgument(d_55, 1);
      {
        ATerm i_55 = NULL;
        t = not_null(e_55);
        {
          ATerm k_55 = NULL;
          t = q_53(t);
          {
            i_55 = t;
            {
              t = not_null(f_55);
              {
                t = r_53(t);
                {
                  k_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_55), not_null(k_55));
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
  ATerm r_55 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm s_55 = NULL,t_55 = NULL;
      s_55 = t;
      q_55 :
      if(match_cons(s_55, sym_Program_1))
        {
          t_55 = ATgetArgument(s_55, 0);
          if(((r_55 != NULL) && (r_55 != t_55)))
            _fail(t_55);
          else
            r_55 = t_55;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(r_55)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = d_14;
  return(t);
}
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
  ATerm a_56 = NULL,b_56 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm e_14 = t;
      if((PushChoice() == 0))
        {
          ATerm c_2 (ATerm t)
          {
            ATerm c_56 = NULL;
            c_56 = t;
            v_55 :
            if(!(match_cons(c_56, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_2);
          PopChoice();
          _fail(t);
        }
      else
        t = e_14;
      return(t);
    }
    t = _2(t, a_2, _id);
    {
      ATerm d_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          ATerm d_56 = NULL,e_56 = NULL;
          d_56 = t;
          x_55 :
          if(match_cons(d_56, sym_Runtime_1))
            {
              e_56 = ATgetArgument(d_56, 0);
              if(((b_56 != NULL) && (b_56 != e_56)))
                _fail(e_56);
              else
                b_56 = e_56;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_2);
        return(t);
      }
      t = _2(t, d_2, _id);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm f_56 = NULL,g_56 = NULL;
            f_56 = t;
            z_55 :
            if(match_cons(f_56, sym_Program_1))
              {
                g_56 = ATgetArgument(f_56, 0);
                if(((a_56 != NULL) && (a_56 != g_56)))
                  _fail(g_56);
                else
                  a_56 = g_56;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_2);
          return(t);
        }
        t = _2(t, j_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(b_56)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(a_56)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, z_1);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      t = SSL_WriteToTextFile(not_null(m_56), not_null(n_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym__2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      t = SSL_WriteToBinaryFile(not_null(u_56), not_null(v_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_57 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm g_14 = t;
      if((PushChoice() == 0))
        {
          ATerm m_2 (ATerm t)
          {
            ATerm e_57 = NULL,f_57 = NULL;
            e_57 = t;
            a_57 :
            if(match_cons(e_57, sym_Output_1))
              {
                f_57 = ATgetArgument(e_57, 0);
                if(((d_57 != NULL) && (d_57 != f_57)))
                  _fail(f_57);
                else
                  d_57 = f_57;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_2);
          PopChoice();
        }
      else
        {
          t = g_14;
          {
            ATerm g_57 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              g_57 = t;
              if(((d_57 != NULL) && (d_57 != g_57)))
                _fail(g_57);
              else
                d_57 = g_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_2, _id);
  }
  t = f_14;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm o_2 (ATerm t)
      {
        t = not_null(d_57);
        return(t);
      }
      t = split_2(t, o_2, _id);
      return(t);
    }
    t = _2(t, _id, n_2);
    {
      ATerm h_14 = t;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm h_57 = NULL;
              h_57 = t;
              c_57 :
              if(!(match_cons(h_57, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = h_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm n_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  ATerm i_14;
  i_14 = t;
  t = dtime_0(t);
  t = i_14;
  {
    t = m_68(t);
    {
      ATerm j_14;
      j_14 = t;
      {
        ATerm o_57 = NULL;
        t = dtime_0(t);
        {
          o_57 = t;
          if(((n_57 != NULL) && (n_57 != o_57)))
            _fail(o_57);
          else
            n_57 = o_57;
        }
      }
      t = j_14;
      {
        p_57 = t;
        m_57 :
        if(match_cons(p_57, sym__2))
          {
            q_57 = ATgetArgument(p_57, 0);
            r_57 = ATgetArgument(p_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_57))), not_null(r_57));
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
  ATerm x_57 = NULL;
  x_57 = t;
  t = SSL_ReadFromFile(not_null(x_57));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm c_58 = NULL,e_58 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm d_58 = NULL;
    t = h_82(t);
    {
      d_58 = t;
      if(((c_58 != NULL) && (c_58 != d_58)))
        _fail(d_58);
      else
        c_58 = d_58;
    }
  }
  t = k_14;
  {
    ATerm f_58 = NULL;
    t = i_82(t);
    {
      f_58 = t;
      if(((e_58 != NULL) && (e_58 != f_58)))
        _fail(f_58);
      else
        e_58 = f_58;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_58), not_null(e_58));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_58 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm m_14 = t;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          ATerm m_58 = NULL,n_58 = NULL;
          m_58 = t;
          j_58 :
          if(match_cons(m_58, sym_Input_1))
            {
              n_58 = ATgetArgument(m_58, 0);
              if(((l_58 != NULL) && (l_58 != n_58)))
                _fail(n_58);
              else
                l_58 = n_58;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_2);
        PopChoice();
      }
    else
      {
        t = m_14;
        {
          ATerm o_58 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            o_58 = t;
            if(((l_58 != NULL) && (l_58 != o_58)))
              _fail(o_58);
            else
              l_58 = o_58;
          }
        }
      }
  }
  t = l_14;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(l_58);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_58 = NULL;
  s_58 = t;
  r_58 :
  if(!(match_cons(s_58, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm n_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        {
          ATerm o_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = l_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  t = SSL_table_create(not_null(u_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  {
    ATerm p_14;
    p_14 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(y_58));
          t = table_put_0(t);
        }
      }
    }
    t = p_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
  g_59 = t;
  e_59 :
  if(match_string(g_59, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(g_59) == AT_LIST) && ((ATermList) g_59 != ATempty)))
        {
          h_59 = ATgetFirst((ATermList) g_59);
          i_59 = (ATerm) ATgetNext((ATermList) g_59);
          f_59 :
          if(((ATgetType(i_59) == AT_LIST) && ((ATermList) i_59 != ATempty)))
            {
              j_59 = ATgetFirst((ATermList) i_59);
              k_59 = (ATerm) ATgetNext((ATermList) i_59);
              {
                ATerm o_59 = NULL;
                ATerm q_14;
                q_14 = t;
                {
                  t = not_null(h_59);
                  t = h_0(t);
                }
                t = q_14;
                {
                  ATerm p_59 = NULL;
                  t = not_null(j_59);
                  {
                    t = i_0(t);
                    {
                      p_59 = t;
                      if(((o_59 != NULL) && (o_59 != p_59)))
                        _fail(p_59);
                      else
                        o_59 = p_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_59)), not_null(o_59));
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
  ATerm r_14 = t;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm e_60 = NULL;
        e_60 = t;
        t_59 :
        if(!(match_string(e_60, "-S")))
          {
            if(!(match_string(e_60, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, a_3, b_3, c_3);
      PopChoice();
    }
  else
    {
      t = r_14;
      {
        ATerm s_14 = t;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm f_60 = NULL;
              f_60 = t;
              u_59 :
              if(!(match_string(f_60, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, g_3, h_3, i_3);
            PopChoice();
          }
        else
          {
            t = s_14;
            {
              ATerm t_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm g_60 = NULL;
                    g_60 = t;
                    v_59 :
                    if(!(match_string(g_60, "-v")))
                      {
                        if(!(match_string(g_60, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, j_3, s_3, t_3);
                  PopChoice();
                }
              else
                {
                  t = t_14;
                  {
                    ATerm u_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm u_3 (ATerm t)
                        {
                          ATerm h_60 = NULL;
                          h_60 = t;
                          w_59 :
                          if(!(match_string(h_60, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_3 (ATerm t)
                        {
                          ATerm i_60 = NULL;
                          ATerm j_60 = NULL;
                          j_60 = t;
                          if(((i_60 != NULL) && (i_60 != j_60)))
                            _fail(j_60);
                          else
                            i_60 = j_60;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(i_60));
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_3, v_3, w_3);
                        PopChoice();
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm v_14 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm x_3 (ATerm t)
                              {
                                ATerm k_60 = NULL;
                                k_60 = t;
                                y_59 :
                                if(!(match_string(k_60, "-i")))
                                  {
                                    if(!(match_string(k_60, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_3 (ATerm t)
                              {
                                ATerm l_60 = NULL;
                                ATerm m_60 = NULL;
                                m_60 = t;
                                if(((l_60 != NULL) && (l_60 != m_60)))
                                  _fail(m_60);
                                else
                                  l_60 = m_60;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_60));
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, x_3, y_3, z_3);
                              PopChoice();
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm w_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_4 (ATerm t)
                                    {
                                      ATerm n_60 = NULL;
                                      n_60 = t;
                                      a_60 :
                                      if(!(match_string(n_60, "-o")))
                                        {
                                          if(!(match_string(n_60, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm o_60 = NULL;
                                      ATerm p_60 = NULL;
                                      p_60 = t;
                                      if(((o_60 != NULL) && (o_60 != p_60)))
                                        _fail(p_60);
                                      else
                                        o_60 = p_60;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_60));
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_4, e_4, f_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = w_14;
                                    {
                                      ATerm x_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm q_60 = NULL;
                                            q_60 = t;
                                            c_60 :
                                            if(!(match_string(q_60, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm m_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, k_4, l_4, m_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = x_14;
                                          {
                                            ATerm o_4 (ATerm t)
                                            {
                                              ATerm r_60 = NULL;
                                              r_60 = t;
                                              d_60 :
                                              if(!(match_string(r_60, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm p_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm q_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, o_4, p_4, q_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_60 = NULL;
  w_60 = t;
  t = SSL_table_destroy(not_null(w_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  t = SSL_exit(not_null(a_61));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  t = SSL_implode_string(not_null(e_61));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm h_61 (ATerm t)
  {
    ATerm y_14 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_61);
        PopChoice();
      }
    else
      {
        t = y_14;
        {
          t = Nil_0(t);
          t = q_79(t);
        }
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_14;
      {
        ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
        k_61 = t;
        j_61 :
        if(((ATgetType(k_61) == AT_LIST) && ((ATermList) k_61 != ATempty)))
          {
            l_61 = ATgetFirst((ATermList) k_61);
            m_61 = (ATerm) ATgetNext((ATermList) k_61);
            {
              t = not_null(l_61);
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(m_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_4);
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
  ATerm s_61 = NULL;
  s_61 = t;
  t = SSL_explode_string(not_null(s_61));
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
ATerm long_description_1 (ATerm t, ATerm s_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm v_61 (ATerm t)
  {
    ATerm a_15 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = a_15;
        t = Cons_2(t, c_79, v_61);
      }
    return(t);
  }
  t = v_61(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  c_62 = t;
  z_61 :
  if(((ATgetType(c_62) == AT_LIST) && ((ATermList) c_62 != ATempty)))
    {
      a_62 = ATgetFirst((ATermList) c_62);
      b_62 = (ATerm) ATgetNext((ATermList) c_62);
      {
        t = not_null(b_62);
        {
          ATerm w_4 (ATerm t)
          {
            ATerm f_62 = NULL;
            ATerm g_62 = NULL;
            t = g_0(t);
            {
              g_62 = t;
              if(((f_62 != NULL) && (f_62 != g_62)))
                _fail(g_62);
              else
                f_62 = g_62;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(f_62)), not_null(a_62));
            return(t);
          }
          t = reverse_1(t, w_4);
        }
      }
    }
  else
    {
      if(((ATermList) c_62 == ATempty))
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm o_62 = NULL,p_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_Program_1))
    {
      p_62 = ATgetArgument(o_62, 0);
      {
        ATerm s_62 = NULL;
        t = not_null(p_62);
        {
          t = z_54(t);
          {
            s_62 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_62));
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
  ATerm b_63 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm c_63 = NULL;
      c_63 = t;
      if(((b_63 != NULL) && (b_63 != c_63)))
        _fail(c_63);
      else
        b_63 = c_63;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm e_63 = NULL;
      ATerm f_63 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(b_63);
          return(t);
        }
        t = short_description_1(t, f_5);
        {
          t = concat_strings_0(t);
          {
            f_63 = t;
            if(((e_63 != NULL) && (e_63 != f_63)))
              _fail(f_63);
            else
              e_63 = f_63;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(e_63)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_5);
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
                ATerm g_5 (ATerm t)
                {
                  ATerm g_63 = NULL;
                  g_63 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_63)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm i_63 = NULL;
                    ATerm j_63 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm m_5 (ATerm t)
                      {
                        t = not_null(b_63);
                        return(t);
                      }
                      t = long_description_1(t, m_5);
                      {
                        t = concat_strings_0(t);
                        {
                          j_63 = t;
                          if(((i_63 != NULL) && (i_63 != j_63)))
                            _fail(j_63);
                          else
                            i_63 = j_63;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_63)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  q_63 = t;
  p_63 :
  if(match_cons(q_63, sym__2))
    {
      r_63 = ATgetArgument(q_63, 0);
      s_63 = ATgetArgument(q_63, 1);
      {
        ATerm b_15;
        b_15 = t;
        t = SSL_printnl(not_null(r_63), not_null(s_63));
        t = b_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  b_64 :
  if(match_cons(c_64, sym_Undefined_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      {
        ATerm f_64 = NULL;
        t = not_null(d_64);
        {
          t = a_55(t);
          {
            f_64 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_64));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm j_64 (ATerm t)
  {
    ATerm c_15 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_79, _id);
        PopChoice();
      }
    else
      {
        t = c_15;
        t = Cons_2(t, _id, j_64);
      }
    return(t);
  }
  t = j_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_67 (ATerm))
{
  t = fetch_1(t, q_67);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_64 = NULL;
  l_64 = t;
  k_64 :
  if(!(match_cons(l_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm d_15 = t;
  if((PushChoice() == 0))
    {
      t = z_82(t);
      PopChoice();
    }
  else
    {
      t = d_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_cons(o_64, sym__2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      t = SSL_table_get(not_null(p_64), not_null(q_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,d_65 = NULL,e_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym__3))
    {
      a_65 = ATgetArgument(z_64, 0);
      d_65 = ATgetArgument(z_64, 1);
      e_65 = ATgetArgument(z_64, 2);
      {
        ATerm e_15;
        e_15 = t;
        {
          ATerm i_65 = NULL;
          ATerm j_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_65), not_null(d_65));
          {
            ATerm f_15 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = f_15;
                t = (ATerm) ATempty;
              }
            {
              j_65 = t;
              if(((i_65 != NULL) && (i_65 != j_65)))
                _fail(j_65);
              else
                i_65 = j_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_65), not_null(d_65), (ATerm) ATinsert(CheckATermList(not_null(i_65)), not_null(e_65)));
            t = table_put_0(t);
          }
        }
        t = e_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm n_65 = NULL;
  ATerm o_65 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = w_66(t);
    {
      o_65 = t;
      if(((n_65 != NULL) && (n_65 != o_65)))
        _fail(o_65);
      else
        n_65 = o_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(n_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  t_65 :
  if(match_string(u_65, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(u_65) == AT_LIST) && ((ATermList) u_65 != ATempty)))
        {
          v_65 = ATgetFirst((ATermList) u_65);
          w_65 = (ATerm) ATgetNext((ATermList) u_65);
          {
            ATerm z_65 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              t = not_null(v_65);
              t = d_0(t);
            }
            t = g_15;
            {
              ATerm a_66 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  a_66 = t;
                  if(((z_65 != NULL) && (z_65 != a_66)))
                    _fail(a_66);
                  else
                    z_65 = a_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_65)), not_null(z_65));
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
  ATerm q_5 (ATerm t)
  {
    ATerm f_66 = NULL;
    f_66 = t;
    e_66 :
    if(!(match_string(f_66, "--help")))
      {
        if(!(match_string(f_66, "-h")))
          {
            if(!(match_string(f_66, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, q_5, r_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  h_66 :
  if(((ATgetType(i_66) == AT_LIST) && ((ATermList) i_66 != ATempty)))
    {
      j_66 = ATgetFirst((ATermList) i_66);
      k_66 = (ATerm) ATgetNext((ATermList) i_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_66)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  x_66 :
  if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
    {
      z_66 = ATgetFirst((ATermList) y_66);
      a_67 = (ATerm) ATgetNext((ATermList) y_66);
      {
        ATerm d_67 = NULL;
        t = not_null(z_66);
        {
          ATerm f_67 = NULL;
          t = b_65(t);
          {
            d_67 = t;
            {
              t = not_null(a_67);
              {
                t = c_65(t);
                {
                  f_67 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_67)), not_null(d_67));
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
  ATerm l_67 = NULL;
  l_67 = t;
  k_67 :
  if(((ATermList) l_67 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm h_15;
  h_15 = t;
  {
    ATerm t_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = u_66(t);
      return(t);
    }
    t = try_1(t, t_5);
  }
  t = h_15;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm n_67 = NULL;
      n_67 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_67));
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      ATerm i_15 = t;
      if((PushChoice() == 0))
        {
          ATerm j_15 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = j_15;
              {
                t = u_66(t);
                t = Cons_2(t, _id, y_5);
              }
            }
          PopChoice();
        }
      else
        {
          t = i_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_5, y_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
    d_68 = t;
    u_67 :
    if(match_cons(d_68, sym__3))
      {
        e_68 = ATgetArgument(d_68, 0);
        f_68 = ATgetArgument(d_68, 1);
        g_68 = ATgetArgument(d_68, 2);
        {
          if(((x_67 != NULL) && (x_67 != e_68)))
            _fail(e_68);
          else
            x_67 = e_68;
          {
            if(((y_67 != NULL) && (y_67 != f_68)))
              _fail(f_68);
            else
              y_67 = f_68;
            {
              if(((z_67 != NULL) && (z_67 != g_68)))
                _fail(g_68);
              else
                z_67 = g_68;
              t = SSL_table_put(not_null(x_67), not_null(y_67), not_null(z_67));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = k_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm j_68 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = l_15;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm m_15 = t;
      if((PushChoice() == 0))
        {
          t = t_66(t);
          PopChoice();
        }
      else
        {
          t = m_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_5);
    {
      ATerm a_6 (ATerm t)
      {
        ATerm n_15 = t;
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
            t = n_15;
            {
              ATerm b_6 (ATerm t)
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm k_68 = NULL;
                  k_68 = t;
                  if(((j_68 != NULL) && (j_68 != k_68)))
                    _fail(k_68);
                  else
                    j_68 = k_68;
                  return(t);
                }
                t = Undefined_1(t, j_6);
                return(t);
              }
              t = option_defined_1(t, b_6);
              {
                ATerm o_15;
                o_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_68)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = o_15;
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
      t = try_1(t, a_6);
      {
        ATerm r_15;
        r_15 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = r_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm s_15 = t;
    if((PushChoice() == 0))
      {
        t = b_68(t);
        PopChoice();
      }
    else
      {
        t = s_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_6);
  {
    t = store_options_0(t);
    {
      ATerm t_15 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, c_68);
          PopChoice();
        }
      else
        {
          t = t_15;
          {
            ATerm u_15 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, a_68);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = u_15;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  t = iowrap_3(t, v_67, w_67, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    t = _2(t, _id, s_67);
    return(t);
  }
  t = iowrap_2(t, l_6, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      t = simplify_0(t);
      {
        t = simplify_widen_0(t);
        {
          t = simplify_0(t);
          {
            t = simplify_narrow_0(t);
            t = simplify_0(t);
          }
        }
      }
      return(t);
    }
    t = apply_to_bodies_1(t, t_6);
    return(t);
  }
  t = iowrap_1(t, s_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
